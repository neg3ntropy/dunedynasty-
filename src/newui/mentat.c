/* mentat.c */

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "mentat.h"

#include "../gui/gui.h"
#include "../gui/mentat.h"
#include "../input/input.h"
#include "../shape.h"
#include "../string.h"
#include "../table/strings.h"
#include "../video/video.h"

static const struct {
	int eyesX, eyesY;
	int mouthX, mouthY;
	int shoulderX, shoulderY;
	int accessoryX, accessoryY;
} mentat_data[HOUSE_MAX] = {
	{ 0x20,0x58, 0x20,0x68, 0x80,0x68, 0x00,0x00 },
	{ 0x28,0x50, 0x28,0x60, 0x80,0x80, 0x48,0x98 },
	{ 0x10,0x50, 0x10,0x60, 0x80,0x80, 0x58,0x90 },
	{ 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00 },
	{ 0x00,0x00, 0x00,0x00, 0x00,0x00, 0x00,0x00 },
	{ 0x40,0x50, 0x38,0x60, 0x00,0x00, 0x00,0x00 },
};

static int movingEyesSprite;
static int movingMouthSprite;
static int otherSprite;

MentatState g_mentat_state;

void
Mentat_DrawBackground(enum HouseType houseID)
{
	const char *mentat_background[HOUSE_MAX] = {
		"MENTATH.CPS", "MENTATA.CPS", "MENTATO.CPS",
		"MENTATM.CPS", "MENTATM.CPS", "MENTATM.CPS"
	};
	assert(houseID < HOUSE_MAX);

	Video_DrawCPS(mentat_background[houseID]);
}

static void
Mentat_DrawEyes(enum HouseType houseID)
{
	const enum ShapeID shapeID = SHAPE_MENTAT_EYES + houseID * 15 + movingEyesSprite;

	Shape_Draw(shapeID, mentat_data[houseID].eyesX, mentat_data[houseID].eyesY, 0, 0);
}

static void
Mentat_DrawMouth(enum HouseType houseID)
{
	const enum ShapeID shapeID = SHAPE_MENTAT_MOUTH + houseID * 15 + movingMouthSprite;

	Shape_Draw(shapeID, mentat_data[houseID].mouthX, mentat_data[houseID].mouthY, 0, 0);
}

static void
Mentat_DrawShoulder(enum HouseType houseID)
{
	if (houseID <= HOUSE_ORDOS) {
		const enum ShapeID shapeID = SHAPE_MENTAT_SHOULDER + houseID * 15;

		Shape_Draw(shapeID, mentat_data[houseID].shoulderX, mentat_data[houseID].shoulderY, 0, 0);
	}
}

static void
Mentat_DrawAccessory(enum HouseType houseID)
{
	if (houseID == HOUSE_ATREIDES || houseID == HOUSE_ORDOS) {
		const enum ShapeID shapeID = SHAPE_MENTAT_ACCESSORY + houseID * 15 + abs(otherSprite);

		Shape_Draw(shapeID, mentat_data[houseID].accessoryX, mentat_data[houseID].accessoryY, 0, 0);
	}
}

void
Mentat_Draw(enum HouseType houseID)
{
	assert(houseID < HOUSE_MAX);

	Mentat_DrawEyes(houseID);
	Mentat_DrawMouth(houseID);
	Mentat_DrawShoulder(houseID);
	Mentat_DrawAccessory(houseID);
}

/*--------------------------------------------------------------*/

void
MentatBriefing_InitText(enum HouseType houseID, int campaignID, enum BriefingEntry entry,
		MentatState *mentat)
{
	const int stringID
		= STR_HOUSE_HARKONNENFROM_THE_DARK_WORLD_OF_GIEDI_PRIME_THE_SAVAGE_HOUSE_HARKONNEN_HAS_SPREAD_ACROSS_THE_UNIVERSE_A_CRUEL_PEOPLE_THE_HARKONNEN_ARE_RUTHLESS_TOWARDS_BOTH_FRIEND_AND_FOE_IN_THEIR_FANATICAL_PURSUIT_OF_POWER
		+ (houseID * 40) + ((campaignID + 1) * 4) + entry;
	assert(entry <= MENTAT_BRIEFING_ADVICE);

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x32);

	strncpy(mentat->buf, String_Get_ByIndex(stringID), sizeof(mentat->buf));
	mentat->lines0 = GUI_Mentat_SplitText(mentat->buf, 304);
	mentat->text = mentat->buf;
	mentat->lines = mentat->lines0;
}

void
MentatBriefing_DrawText(MentatState *mentat)
{
	if (mentat->lines > 0)
		GUI_DrawText_Wrapper(mentat->text, 4, 1, g_curWidgetFGColourBlink, 0, 0x32);
}

void
MentatBriefing_AdvanceText(MentatState *mentat)
{
	while (mentat->text[0] != '\0') {
		mentat->text++;
	}

	mentat->text++;
	mentat->lines--;

	if (mentat->lines <= 0) {
		mentat->state = MENTAT_IDLE;
	}
}
