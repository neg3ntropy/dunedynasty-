/* menu.c */

#include <assert.h>
#include <allegro5/allegro.h>
#include "types.h"
#include "../os/math.h"
#include "../os/sleep.h"

#include "menu.h"

#include "halloffame.h"
#include "mentat.h"
#include "strategicmap.h"
#include "../common_a5.h"
#include "../cutscene.h"
#include "../file.h"
#include "../gfx.h"
#include "../gui/font.h"
#include "../gui/gui.h"
#include "../gui/mentat.h"
#include "../input/input.h"
#include "../input/mouse.h"
#include "../opendune.h"
#include "../scenario.h"
#include "../string.h"
#include "../table/strings.h"
#include "../timer/timer.h"
#include "../video/video.h"

enum {
	MENU_FADE_TICKS = 10
};

/* Menu loops can return a MenuAction to transition between screens,
 * or return itself to stay in the same menu.
 *
 * Return (MENU_REDRAW | curr_menu) to force a redraw.
 * Return next_menu to fade in and out.
 * Return (MENU_NOTRANSITION | next_menu) to skip fading.
 * Return (MENU_BLINK_CONFIRM | next_menu) to blink before fading.
 *
 * MENU_FADE_IN and MENU_FADE_OUT are used internally.
 */
enum MenuAction {
	MENU_INTRODUCTION,
	MENU_MAIN_MENU,
	MENU_PICK_HOUSE,
	MENU_CONFIRM_HOUSE,
	MENU_BRIEFING,
	MENU_BRIEFING_WIN,
	MENU_BRIEFING_LOSE,
	MENU_PLAY_A_GAME,
	MENU_LOAD_GAME,
	MENU_BATTLE_SUMMARY,
	MENU_CUTSCENE,
	MENU_STRATEGIC_MAP,
	MENU_EXIT_GAME,

	MENU_NO_TRANSITION = 0x0100,
	MENU_FADE_IN = 0x0200,
	MENU_FADE_OUT = 0x0400,
	MENU_BLINK_CONFIRM = 0x0800,
	MENU_REDRAW = 0x8000
};

static Widget *main_menu_widgets;
static Widget *pick_house_widgets;
static Widget *briefing_yes_no_widgets;
static Widget *briefing_proceed_repeat_widgets;

/*--------------------------------------------------------------*/

static void
MainMenu_InitWidgets(void)
{
	const int menuitem[] = {
		STR_PLAY_A_GAME,
		STR_REPLAY_INTRODUCTION,
		STR_LOAD_GAME,
		STR_HALL_OF_FAME,
		STR_EXIT_GAME,
		STR_NULL
	};

	WidgetProperties *prop13 = &g_widgetProperties[WINDOWID_MAINMENU_FRAME];
	WidgetProperties *prop21 = &g_widgetProperties[WINDOWID_MAINMENU_ITEM];
	int maxWidth = 0;

	/* Select g_fontNew8p with shadow. */
	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	main_menu_widgets = NULL;
	prop13->height = 11;
	for (int i = 0; menuitem[i] != STR_NULL; i++) {
		Widget *w;

		w = GUI_Widget_Allocate(menuitem[i], 0, 0, 0, SHAPE_INVALID, STR_NULL);

		w->parentID = WINDOWID_MAINMENU_FRAME;
		w->offsetX = prop21->xBase*8;
		w->offsetY = prop21->yBase + (g_fontCurrent->height * i);
		w->height = g_fontCurrent->height - 1;

		w->drawModeNormal = DRAW_MODE_TEXT;
		w->drawModeSelected = DRAW_MODE_TEXT;
		w->drawModeDown = DRAW_MODE_TEXT;
		w->drawParameterNormal.text = String_Get_ByIndex(menuitem[i]);
		w->drawParameterSelected.text = w->drawParameterNormal.text;
		w->drawParameterDown.text = w->drawParameterNormal.text;
		w->fgColourSelected = prop21->fgColourSelected;
		w->fgColourDown = prop21->fgColourSelected;
		w->flags.s.clickAsHover = false;

		w->stringID = menuitem[i];
		GUI_Widget_SetShortcuts(w);

		GUI_Widget_MakeNormal(main_menu_widgets, false);
		main_menu_widgets = GUI_Widget_Link(main_menu_widgets, w);

		prop13->height += g_fontCurrent->height;
		maxWidth = max(maxWidth, Font_GetStringWidth(w->drawParameterNormal.text) + 7);
	}

	prop13->width = maxWidth/8 + 2;
	prop13->xBase = (SCREEN_WIDTH/8 - prop13->width)/2;
	prop13->yBase = 160 - prop13->height/2;

	for (Widget *w = main_menu_widgets; w != NULL; w = GUI_Widget_GetNext(w)) {
		w->width = maxWidth;
	}
}

static void
PickHouse_InitWidgets(void)
{
	const struct {
		int x, y;
		enum Scancode shortcut;
	} menuitem[3] = {
		{ 208, 56, SCANCODE_H },
		{  16, 56, SCANCODE_A },
		{ 112, 56, SCANCODE_O },
	};

	for (enum HouseType house = HOUSE_HARKONNEN; house <= HOUSE_ORDOS; house++) {
		Widget *w;

		w = GUI_Widget_Allocate(house, menuitem[house].shortcut, menuitem[house].x, menuitem[house].y, SHAPE_INVALID, STR_NULL);

		w->width = 96;
		w->height = 104;
		w->flags.all = 0x0;
		w->flags.s.loseSelect = true;
		w->flags.s.buttonFilterLeft = 1;
		w->flags.s.buttonFilterRight = 1;

		pick_house_widgets = GUI_Widget_Link(pick_house_widgets, w);
	}
}

static void
Briefing_InitWidgets(void)
{
	Widget *w;

	w = GUI_Widget_Allocate(1, SCANCODE_Y, 168, 168, SHAPE_YES, STR_YES);
	briefing_yes_no_widgets = GUI_Widget_Link(briefing_yes_no_widgets, w);

	w = GUI_Widget_Allocate(2, SCANCODE_N, 240, 168, SHAPE_NO, STR_NO);
	briefing_yes_no_widgets = GUI_Widget_Link(briefing_yes_no_widgets, w);

	w = GUI_Widget_Allocate(3, SCANCODE_P, 168, 168, SHAPE_PROCEED, STR_PROCEED);
	briefing_proceed_repeat_widgets = GUI_Widget_Link(briefing_proceed_repeat_widgets, w);

	w = GUI_Widget_Allocate(4, SCANCODE_R, 240, 168, SHAPE_REPEAT, STR_REPEAT);
	briefing_proceed_repeat_widgets = GUI_Widget_Link(briefing_proceed_repeat_widgets, w);
}

static void
Menu_Init(void)
{
	MainMenu_InitWidgets();
	PickHouse_InitWidgets();
	Briefing_InitWidgets();
	StrategicMap_Init();
	A5_UseMenuTransform();
}

/*--------------------------------------------------------------*/

static void
MainMenu_Initialise(void)
{
	File_ReadBlockFile("IBM.PAL", g_palette1, 3 * 256);
	Video_SetPalette(g_palette1, 0, 256);

	Widget *w = main_menu_widgets;
	while (w != NULL) {
		GUI_Widget_MakeNormal(w, false);
		w = GUI_Widget_GetNext(w);
	}
}

static void
MainMenu_Draw(void)
{
	Video_DrawCPS(String_GenerateFilename("TITLE"));

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);
	GUI_Widget_DrawBorder(WINDOWID_MAINMENU_FRAME, 2, 1);
	GUI_Widget_DrawAll(main_menu_widgets);

	GUI_DrawText_Wrapper("v1.07", SCREEN_WIDTH, SCREEN_HEIGHT - 9, 133, 0, 0x222);
}

static void
MainMenu_SetupBlink(int widgetID)
{
	Widget *w = main_menu_widgets;

	widgetID &= ~0x8000;

	while (w != NULL) {
		if (w->index == widgetID) {
			GUI_Widget_MakeSelected(w, false);
		}
		else {
			GUI_Widget_MakeNormal(w, false);
		}

		w = GUI_Widget_GetNext(w);
	}
}

static enum MenuAction
MainMenu_Loop(void)
{
	const int widgetID = GUI_Widget_HandleEvents(main_menu_widgets);
	bool redraw = false;

	switch (widgetID) {
		case 0x8000 | STR_PLAY_A_GAME:
			g_playerHouseID = HOUSE_MERCENARY;
			MainMenu_SetupBlink(widgetID);
			return MENU_BLINK_CONFIRM | MENU_PICK_HOUSE;

		case 0x8000 | STR_REPLAY_INTRODUCTION:
			MainMenu_SetupBlink(widgetID);
			return MENU_BLINK_CONFIRM | MENU_INTRODUCTION;

		case 0x8000 | STR_LOAD_GAME:
			GUI_Widget_InitSaveLoad(false);
			MainMenu_SetupBlink(widgetID);
			return MENU_BLINK_CONFIRM | MENU_LOAD_GAME;

		case 0x8000 | STR_HALL_OF_FAME:
			g_playerHouseID = HOUSE_MERCENARY;
			GUI_HallOfFame_Show(0xFFFF);
			MainMenu_SetupBlink(widgetID);
			return MENU_REDRAW | MENU_MAIN_MENU;

		case 0x8000 | STR_EXIT_GAME:
			MainMenu_SetupBlink(widgetID);
			return MENU_BLINK_CONFIRM | MENU_EXIT_GAME;

		default:
			break;
	}

	Widget *w = main_menu_widgets;
	while (w != NULL) {
		if (w->state.s.hover1 != w->state.s.hover1Last) {
			redraw = true;
			break;
		}

		w = GUI_Widget_GetNext(w);
	}

	return (redraw ? MENU_REDRAW : 0) | MENU_MAIN_MENU;
}

static bool
MainMenu_BlinkLoop(int64_t blink_start)
{
	const unsigned char blink_col[2][3] = {
		{ 0xFF, 0x00, 0x00 },
		{ 0xFF, 0xFF, 0xFF }
	};

	const int64_t ticks = Timer_GetTicks() - blink_start;

	if (ticks >= 20) {
		Video_SetPalette(blink_col[1], 6, 1);
		return true;
	}
	else {
		Video_SetPalette(blink_col[(ticks / 3) & 0x1], 6, 1);
		return false;
	}
}

/*--------------------------------------------------------------*/

static void
PickHouse_Draw(void)
{
	Video_DrawCPS(String_GenerateFilename("HERALD"));

	GUI_Widget_DrawAll(pick_house_widgets);
}

static int
PickHouse_Loop(void)
{
	const int widgetID = GUI_Widget_HandleEvents(pick_house_widgets);

	switch (widgetID) {
		case SCANCODE_ESCAPE:
			return MENU_MAIN_MENU;

		case 0x8000 | HOUSE_HARKONNEN:
		case 0x8000 | HOUSE_ATREIDES:
		case 0x8000 | HOUSE_ORDOS:
			g_playerHouseID = widgetID & (~0x8000);
			g_campaignID = 0;
			g_scenarioID = 1;
			return MENU_CONFIRM_HOUSE;

		default:
			break;
	}

	return MENU_PICK_HOUSE;
}

/*--------------------------------------------------------------*/

static void
Briefing_Initialise(enum MenuAction menu, MentatState *mentat)
{
	if (menu == MENU_CONFIRM_HOUSE) {
		MentatBriefing_InitText(g_playerHouseID, -1, MENTAT_BRIEFING_ORDERS, mentat);
		MentatBriefing_InitWSA(g_playerHouseID, -1, MENTAT_BRIEFING_ORDERS, mentat);
	}
	else {
		const enum BriefingEntry entry =
			(menu == MENU_BRIEFING_WIN) ? MENTAT_BRIEFING_WIN :
			(menu == MENU_BRIEFING_LOSE) ? MENTAT_BRIEFING_LOSE :
			MENTAT_BRIEFING_ORDERS;

		MentatBriefing_InitText(g_playerHouseID, g_campaignID, entry, mentat);
		MentatBriefing_InitWSA(g_playerHouseID, g_scenarioID, entry, mentat);
	}

	mentat->state = MENTAT_SHOW_TEXT;
}

static void
Briefing_Draw(enum MenuAction curr_menu, MentatState *mentat)
{
	const enum HouseType houseID = (curr_menu == MENU_CONFIRM_HOUSE) ? HOUSE_MERCENARY : g_playerHouseID;

	Mentat_DrawBackground(houseID);
	MentatBriefing_DrawWSA(mentat);
	Mentat_Draw(houseID);

	if (mentat->state == MENTAT_SHOW_TEXT) {
		MentatBriefing_DrawText(mentat);
	}
	else if (mentat->state == MENTAT_IDLE) {
		if (curr_menu == MENU_CONFIRM_HOUSE) {
			const char *misc = String_GenerateFilename("MISC");

			Video_DrawCPSRegion(misc, 0, 0, 0, 0, 26*8, 24);
			Video_DrawCPSRegion(misc, 0, 24 * (g_playerHouseID + 1), 26*8, 0, 13*8, 24);

			GUI_Widget_DrawAll(briefing_yes_no_widgets);
		}
		else {
			GUI_Widget_DrawAll(briefing_proceed_repeat_widgets);
		}
	}
}

static enum MenuAction
Briefing_Loop(enum MenuAction curr_menu, MentatState *mentat)
{
	const int64_t curr_ticks = Timer_GetTicks();

	bool redraw = false;
	int widgetID = 0;

	if (curr_ticks - mentat->wsa_timer >= 7) {
		const int64_t dt = curr_ticks - mentat->wsa_timer;
		mentat->wsa_timer = curr_ticks + dt % 7;
		mentat->wsa_frame += dt / 7;
		redraw = true;
	}

	if (curr_ticks >= mentat->speaking_timer) {
		mentat->speaking_mode = 0;
	}

	GUI_Mentat_Animation(mentat->speaking_mode);

	if (mentat->state == MENTAT_IDLE) {
		if (curr_menu == MENU_CONFIRM_HOUSE) {
			widgetID = GUI_Widget_HandleEvents(briefing_yes_no_widgets);
		}
		else {
			widgetID = GUI_Widget_HandleEvents(briefing_proceed_repeat_widgets);
		}
	}
	else if (Input_IsInputAvailable()) {
		widgetID = Input_GetNextKey();
	}

	if ((!(widgetID & 0x8000)) && (widgetID & SCANCODE_RELEASE))
		widgetID = 0;

	switch (widgetID) {
		case 0:
			break;

		case 0x8001: /* yes */
			g_campaignID = 0;
			g_scenarioID = 1;
			return MENU_BRIEFING;

		case 0x8002: /* no */
			return MENU_PICK_HOUSE;

		case 0x8003: /* proceed */
			if (curr_menu == MENU_BRIEFING_WIN) {
				return MENU_NO_TRANSITION | MENU_BATTLE_SUMMARY;
			}
			else if (curr_menu == MENU_BRIEFING_LOSE) {
				return MENU_STRATEGIC_MAP;
			}

			return MENU_PLAY_A_GAME;

		case 0x8004: /* repeat */
			mentat->state = MENTAT_SHOW_TEXT;
			mentat->text = mentat->buf;
			mentat->lines = mentat->lines0;
			redraw = true;
			break;

		default:
			if (mentat->state == MENTAT_SHOW_TEXT) {
				MentatBriefing_AdvanceText(mentat);
				redraw = true;
			}
			break;
	}

	return (redraw ? MENU_REDRAW : 0) | curr_menu;
}

/*--------------------------------------------------------------*/

static enum MenuAction
StartGame_Loop(bool new_game)
{
	A5_UseIdentityTransform();
	GameLoop_Main(new_game);
	A5_UseMenuTransform();

	switch (g_gameMode) {
		case GM_NORMAL:
			break;

		case GM_RESTART:
			return MENU_BRIEFING;

		case GM_PICKHOUSE:
			return MENU_PICK_HOUSE;

		case GM_WIN:
			return MENU_BRIEFING_WIN;

		case GM_LOSE:
			return MENU_BRIEFING_LOSE;

		case GM_QUITGAME:
			return MENU_EXIT_GAME;
	}

	return MENU_MAIN_MENU;
}

/*--------------------------------------------------------------*/

static void
LoadGame_Draw(void)
{
	GUI_Widget_DrawWindow(&g_saveLoadWindowDesc);
	GUI_Widget_DrawAll(g_widgetLinkedListTail);
}

static enum MenuAction
LoadGame_Loop(void)
{
	const int ret = GUI_Widget_SaveLoad_Click(false);

	if (ret == -1) {
		return MENU_MAIN_MENU;
	}
	else if (ret == -2) {
		return StartGame_Loop(false);
	}

	return MENU_REDRAW | MENU_LOAD_GAME;
}

/*--------------------------------------------------------------*/

static void
BattleSummary_Initialise(enum HouseType houseID, HallOfFameData *fame)
{
	uint16 harvestedAllied = g_scenario.harvestedAllied;
	uint16 harvestedEnemy = g_scenario.harvestedEnemy;
	uint16 score = Update_Score(g_scenario.score, &harvestedAllied, &harvestedEnemy, houseID);

	fame->state = HALLOFFAME_PAUSE_START;
	fame->pause_timer = Timer_GetTicks() + 45;
	fame->score = score;
	fame->time = ((g_timerGame - g_tickScenarioStart) / 3600) + 1;

	HallOfFame_InitRank(fame->score, fame);

	fame->meter[0].max = harvestedAllied;
	fame->meter[1].max = harvestedEnemy;
	fame->meter[2].max = g_scenario.killedEnemy;
	fame->meter[3].max = g_scenario.killedAllied;
	fame->meter[4].max = g_scenario.destroyedEnemy;
	fame->meter[5].max = g_scenario.destroyedAllied;

	for (int i = 0; i < 6; i += 2) {
		const int ally = fame->meter[i + 0].max;
		const int enemy = fame->meter[i + 1].max;
		const int maxval = max(ally, enemy);
		const int maxwidth = 205;
		const int inc = 1 + ((maxval > maxwidth) ? (maxval / maxwidth) : 0);

		fame->meter[i + 0].inc = inc;
		fame->meter[i + 1].inc = inc;
		fame->meter[i + 0].width = 0;
		fame->meter[i + 1].width = 0;
	}

	fame->curr_meter_idx = 0;
	fame->curr_meter_val = 0;
	fame->meter_colour_dir = true;
	fame->meter_colour_timer = Timer_GetTicks();
}

static void
BattleSummary_Draw(enum HouseType houseID, int scenarioID, HallOfFameData *fame)
{
	HallOfFame_DrawBackground(houseID, false);
	HallOfFame_DrawScoreTime(fame->score, fame->time);

	if (fame->state >= HALLOFFAME_SHOW_RANK)
		HallOfFame_DrawRank(fame);

	HallOfFame_DrawSpiceHarvested(houseID, fame);
	HallOfFame_DrawUnitsDestroyed(houseID, fame);
	HallOfFame_DrawBuildingsDestroyed(houseID, scenarioID, fame);
}

static enum MenuAction
BattleSummary_TimerLoop(int scenarioID, HallOfFameData *fame)
{
	const int64_t curr_ticks = Timer_GetTicks();

	if (curr_ticks - fame->meter_colour_timer >= (64 - 35) * 3) {
		fame->meter_colour_timer = curr_ticks;
		fame->meter_colour_dir = !fame->meter_colour_dir;
	}

	switch (fame->state) {
		case HALLOFFAME_PAUSE_START:
		case HALLOFFAME_PAUSE_RANK:
			if (curr_ticks >= fame->pause_timer)
				fame->state++;
			break;

		case HALLOFFAME_SHOW_RANK:
			if (Video_TickFadeIn(fame->rank_aux)) {
				fame->state = HALLOFFAME_PAUSE_RANK;
				fame->pause_timer = curr_ticks + 45;
			}
			break;

		case HALLOFFAME_SHOW_METER:
			fame->curr_meter_val += fame->meter[fame->curr_meter_idx].inc;
			if (fame->curr_meter_val >= fame->meter[fame->curr_meter_idx].max) {
				if ((fame->curr_meter_idx & 0x1) == 0) {
					fame->state = HALLOFFAME_PAUSE_METER;
					fame->pause_timer = curr_ticks + 12;
				}
				else {
					fame->state = HALLOFFAME_PAUSE_METER;
					fame->pause_timer = curr_ticks + 60 + 12;
				}
			}
			else {
				fame->meter[fame->curr_meter_idx].width++;
			}
			break;

		case HALLOFFAME_PAUSE_METER:
			if (curr_ticks >= fame->pause_timer) {
				fame->curr_meter_idx++;
				fame->curr_meter_val = 0;

				if ((fame->curr_meter_idx >= 6) || (scenarioID == 1 && fame->curr_meter_idx >= 4)) {
					fame->state = HALLOFFAME_WAIT_FOR_INPUT;
					Input_History_Clear();
				}
				else {
					fame->state = HALLOFFAME_SHOW_METER;
				}
			}
			break;

		case HALLOFFAME_WAIT_FOR_INPUT:
			break;
	}

	return MENU_REDRAW | MENU_BATTLE_SUMMARY;
}

static enum MenuAction
BattleSummary_InputLoop(HallOfFameData *fame)
{
	switch (fame->state) {
		case HALLOFFAME_WAIT_FOR_INPUT:
			if (Input_IsInputAvailable()) {
				GUI_HallOfFame_Show(fame->score);
				g_campaignID++;
				return MENU_NO_TRANSITION | MENU_CUTSCENE;
			}

			break;

		default:
			break;
	}

	return MENU_BATTLE_SUMMARY;
}

/*--------------------------------------------------------------*/

static enum MenuAction
StrategicMap_InputLoop(int campaignID, StrategicMapData *map)
{
	if (map->state == STRATEGIC_MAP_SELECT_REGION) {
		int scenario = StrategicMap_SelectRegion(map, g_mouseClickX, g_mouseClickY);

		if (scenario >= 0) {
			map->blink_scenario = scenario;
			scenario = scenario + 3 * (campaignID - 1) + 2;

			if (campaignID > 7) scenario--;
			if (campaignID > 8) scenario--;

			g_scenarioID = scenario;
			map->state = STRATEGIC_MAP_BLINK_REGION;
			StrategicMap_AdvanceText(map, true);
			return MENU_BLINK_CONFIRM | MENU_BRIEFING;
		}
	}
	else {
		if (Input_IsInputAvailable()) {
			const int key = Input_GetNextKey();

			if (key == SCANCODE_ESCAPE || key == SCANCODE_SPACE || key == MOUSE_LMB || key == MOUSE_RMB)
				map->fast_forward = true;
		}
	}

	return MENU_STRATEGIC_MAP;
}

/*--------------------------------------------------------------*/

static void
Menu_DrawFadeIn(int64_t fade_start)
{
	int alpha = 0xFF - 0xFF * (Timer_GetTicks() - fade_start) / MENU_FADE_TICKS;

	if (alpha <= 0)
		return;

	Video_ShadeScreen(alpha);
}

static void
Menu_DrawFadeOut(int64_t fade_start)
{
	int alpha = 0xFF * (Timer_GetTicks() - fade_start) / MENU_FADE_TICKS;

	if (alpha >= 0xFF)
		alpha = 0xFF;

	Video_ShadeScreen(alpha);
}

void
Menu_Run(void)
{
	enum MenuAction curr_menu = MENU_FADE_IN | MENU_MAIN_MENU;
	enum MenuAction next_menu = curr_menu;
	int64_t fade_start = Timer_GetTicks();
	bool initialise_menu = true;
	bool redraw = true;

	Menu_Init();

	al_flush_event_queue(g_a5_input_queue);

	while (curr_menu != MENU_EXIT_GAME) {
		/* Initialise. */
		if (initialise_menu) {
			initialise_menu = false;

			switch (curr_menu & 0xFF) {
				case MENU_MAIN_MENU:
					MainMenu_Initialise();
					break;

				case MENU_CONFIRM_HOUSE:
				case MENU_BRIEFING:
				case MENU_BRIEFING_WIN:
				case MENU_BRIEFING_LOSE:
					Briefing_Initialise(curr_menu & 0xFF, &g_mentat_state);
					break;

				case MENU_BATTLE_SUMMARY:
					BattleSummary_Initialise(g_playerHouseID, &g_hall_of_fame_state);
					break;

				case MENU_STRATEGIC_MAP:
					StrategicMap_Initialise(g_playerHouseID, g_campaignID, &g_strategic_map_state);
					break;

				default:
					break;
			}
		}

		/* Draw. */
		if (redraw) {
			redraw = false;
			al_clear_to_color(al_map_rgb(0, 0, 0));

			switch (curr_menu & 0xFF) {
				case MENU_MAIN_MENU:
					MainMenu_Draw();
					break;

				case MENU_PICK_HOUSE:
					PickHouse_Draw();
					break;

				case MENU_CONFIRM_HOUSE:
				case MENU_BRIEFING:
				case MENU_BRIEFING_WIN:
				case MENU_BRIEFING_LOSE:
					Briefing_Draw(curr_menu & 0xFF, &g_mentat_state);
					break;

				case MENU_LOAD_GAME:
					LoadGame_Draw();
					break;

				case MENU_BATTLE_SUMMARY:
					BattleSummary_Draw(g_playerHouseID, g_scenarioID, &g_hall_of_fame_state);
					break;

				case MENU_STRATEGIC_MAP:
					StrategicMap_Draw(g_playerHouseID, &g_strategic_map_state, fade_start);
					break;

				default:
					break;
			}

			if (curr_menu & MENU_FADE_IN) {
				Menu_DrawFadeIn(fade_start);
			}
			else if ((curr_menu & (MENU_BLINK_CONFIRM | MENU_FADE_OUT)) == MENU_FADE_OUT) {
				Menu_DrawFadeOut(fade_start);
			}

			Video_Tick();
		}

		/* Menu input. */
		ALLEGRO_EVENT event;

		al_wait_for_event(g_a5_input_queue, &event);
		switch (event.type) {
			case ALLEGRO_EVENT_DISPLAY_EXPOSE:
				redraw = true;
				break;

			default:
				InputA5_ProcessEvent(&event, true);
				break;
		}

		curr_menu = (curr_menu & ~MENU_REDRAW);

		enum MenuAction res = curr_menu;
		switch ((int)curr_menu) {
			case MENU_INTRODUCTION:
				GameLoop_GameIntroAnimation();
				res = MENU_MAIN_MENU;
				break;

			case MENU_MAIN_MENU:
				res = MainMenu_Loop();
				break;

			case MENU_MAIN_MENU | MENU_BLINK_CONFIRM | MENU_FADE_OUT:
				if (MainMenu_BlinkLoop(fade_start))
					res &= ~MENU_BLINK_CONFIRM;
				break;

			case MENU_PICK_HOUSE:
				res = PickHouse_Loop();
				break;

			case MENU_CONFIRM_HOUSE:
			case MENU_BRIEFING:
			case MENU_BRIEFING_WIN:
			case MENU_BRIEFING_LOSE:
				res = Briefing_Loop(curr_menu, &g_mentat_state);
				break;

			case MENU_PLAY_A_GAME:
				res = StartGame_Loop(true);
				break;

			case MENU_LOAD_GAME:
				res = LoadGame_Loop();
				break;

			case MENU_BATTLE_SUMMARY:
				if (event.type == ALLEGRO_EVENT_TIMER) {
					res = BattleSummary_TimerLoop(g_scenarioID, &g_hall_of_fame_state);
				}
				else {
					res = BattleSummary_InputLoop(&g_hall_of_fame_state);
				}
				break;

			case MENU_CUTSCENE:
				if (g_campaignID == 9) {
					GameLoop_GameEndAnimation();
					res = MENU_MAIN_MENU;
				}
				else {
					GameLoop_LevelEndAnimation();
					res = MENU_STRATEGIC_MAP;
				}
				break;

			case MENU_STRATEGIC_MAP:
				if (event.type == ALLEGRO_EVENT_TIMER) {
					if (StrategicMap_TimerLoop(&g_strategic_map_state))
						res |= MENU_REDRAW;
				}
				else {
					res = StrategicMap_InputLoop(g_campaignID, &g_strategic_map_state);
				}
				break;

			case MENU_STRATEGIC_MAP | MENU_BLINK_CONFIRM | MENU_FADE_OUT:
				if (StrategicMap_BlinkLoop(&g_strategic_map_state, fade_start))
					res &=~ MENU_BLINK_CONFIRM;
				break;

			case MENU_EXIT_GAME:
			case MENU_REDRAW:
				break;

			default:
				if (curr_menu & MENU_FADE_OUT) {
					if (Timer_GetTicks() >= fade_start + MENU_FADE_TICKS) {
						curr_menu = MENU_FADE_OUT | next_menu;
						res = next_menu;
						initialise_menu = true;
					}
				}
				else if (curr_menu & MENU_FADE_IN) {
					if (Timer_GetTicks() >= fade_start + MENU_FADE_TICKS) {
						res &= ~MENU_FADE_IN;
						Input_History_Clear();
					}
				}
				break;
		}

		/* Menu transition. */
		if ((curr_menu & 0xFF) != (res & 0xFF)) {
			redraw = true;

			if (res & MENU_NO_TRANSITION) {
				curr_menu = (res & 0xFF);
				initialise_menu = true;
			}
			else {
				if (res & MENU_BLINK_CONFIRM)
					curr_menu |= MENU_BLINK_CONFIRM;

				curr_menu = MENU_FADE_OUT | curr_menu;
				next_menu = MENU_FADE_IN | (res & 0xFF);
				fade_start = Timer_GetTicks();
			}
		}
		else if ((curr_menu^res) & (MENU_BLINK_CONFIRM | MENU_FADE_OUT | MENU_FADE_IN)) {
			redraw = true;

			curr_menu = (res & ~MENU_REDRAW);
			fade_start = Timer_GetTicks();
		}
		else {
			if (res & (MENU_REDRAW | MENU_BLINK_CONFIRM | MENU_FADE_OUT | MENU_FADE_IN))
				redraw = true;

			curr_menu = (res & ~MENU_REDRAW);
		}
	}
}