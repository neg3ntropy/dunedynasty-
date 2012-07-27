/* $Id$ */

/** @file src/table/widgetclickinfo.c WindgetClickInfo file table. */

#include <stdio.h>

#include "widgetinfo.h"

#include "../gui/mentat.h"
#include "../gui/widget.h"
#include "strings.h"

WidgetInfo g_table_gameWidgetInfo[GAME_WIDGET_MAX + 1] = {
	{ /* 0 */
		/* index       */ 1,
		/* clickProc   */ &GUI_Widget_Mentat_Click,
		/* shortcut    */ 112,
		/* flags       */ 1237,
		/* spriteID    */ 7,
		/* offsetX     */ 16,
		/* offsetY     */ 1,
		/* width       */ 78,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 1 */
		/* index       */ 2,
		/* clickProc   */ &GUI_Widget_Options_Click,
		/* shortcut    */ 113,
		/* flags       */ 1237,
		/* spriteID    */ 9,
		/* offsetX     */ 104,
		/* offsetY     */ 1,
		/* width       */ 78,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 2 */
		/* index       */ 3,
		/* clickProc   */ &GUI_Widget_Name_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -1,
		/* offsetX     */ 256,
		/* offsetY     */ 42,
		/* width       */ 64,
		/* height      */ 6,
		/* stringID    */ STR_NULL,
	},
	{ /* 3 */
		/* index       */ 6,
		/* clickProc   */ &GUI_Widget_Picture_Click,
		/* shortcut    */ 114,
		/* flags       */ 17605,
		/* spriteID    */ -4,
		/* offsetX     */ 258,
		/* offsetY     */ 51,
		/* width       */ 32,
		/* height      */ 24,
		/* stringID    */ STR_NULL,
	},
	{ /* 4 */
		/* index       */ 4,
		/* clickProc   */ &GUI_Widget_RepairUpgrade_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 76,
		/* width       */ 60,
		/* height      */ 10,
		/* stringID    */ STR_NULL,
	},
	{ /* 5 */
		/* index       */ 5,
		/* clickProc   */ &GUI_Widget_SpriteTextButton_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -3,
		/* offsetX     */ 258,
		/* offsetY     */ 87,
		/* width       */ 60,
		/* height      */ 35,
		/* stringID    */ STR_NULL,
	},
	{ /* 6 */
		/* index       */ 7,
		/* clickProc   */ &GUI_Widget_Cancel_Click,
		/* shortcut    */ 110,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 110,
		/* width       */ 58,
		/* height      */ 11,
		/* stringID    */ STR_CANCEL,
	},
	{ /* 7 */
		/* index       */ 8,
		/* clickProc   */ &GUI_Widget_TextButton_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 77,
		/* width       */ 60,
		/* height      */ 10,
		/* stringID    */ STR_NULL,
	},
	{ /* 8 */
		/* index       */ 9,
		/* clickProc   */ &GUI_Widget_TextButton_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 88,
		/* width       */ 60,
		/* height      */ 10,
		/* stringID    */ STR_NULL,
	},
	{ /* 9 */
		/* index       */ 10,
		/* clickProc   */ &GUI_Widget_TextButton_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 99,
		/* width       */ 60,
		/* height      */ 10,
		/* stringID    */ STR_NULL,
	},
	{ /* 10 */
		/* index       */ 11,
		/* clickProc   */ &GUI_Widget_TextButton_Click,
		/* shortcut    */ 0,
		/* flags       */ 17605,
		/* spriteID    */ -2,
		/* offsetX     */ 258,
		/* offsetY     */ 110,
		/* width       */ 60,
		/* height      */ 10,
		/* stringID    */ STR_NULL,
	},
	{ /* 11 */
		/* index       */ 39,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 0,
		/* offsetY     */ 24,
		/* width       */ 240,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 12 */
		/* index       */ 40,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 240,
		/* offsetY     */ 40,
		/* width       */ 10,
		/* height      */ 160,
		/* stringID    */ STR_NULL,
	},
	{ /* 13 */
		/* index       */ 41,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 0,
		/* offsetY     */ 40,
		/* width       */ 2,
		/* height      */ 160,
		/* stringID    */ STR_NULL,
	},
	{ /* 14 */
		/* index       */ 42,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 0,
		/* offsetY     */ 198,
		/* width       */ 240,
		/* height      */ 2,
		/* stringID    */ STR_NULL,
	},
	{ /* 15 */
		/* index       */ 43,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 0,
		/* offsetY     */ 40,
		/* width       */ 240,
		/* height      */ 160,
		/* stringID    */ STR_NULL,
	},
	{ /* 16 */
		/* index       */ 44,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20288,
		/* spriteID    */ -1,
		/* offsetX     */ 256,
		/* offsetY     */ 136,
		/* width       */ 64,
		/* height      */ 64,
		/* stringID    */ STR_NULL,
	},
	{ /* 17 */
		/* index       */ 45,
		/* clickProc   */ &GUI_Widget_Viewport_Click,
		/* shortcut    */ 0,
		/* flags       */ 20224,
		/* spriteID    */ -1,
		/* offsetX     */ 0,
		/* offsetY     */ 0,
		/* width       */ 320,
		/* height      */ 200,
		/* stringID    */ STR_NULL,
	},
	{ /* 18 */
		/* index       */ -1,
		/* clickProc   */ NULL,
		/* shortcut    */ 0,
		/* flags       */ 0,
		/* spriteID    */ 0,
		/* offsetX     */ 0,
		/* offsetY     */ 0,
		/* width       */ 0,
		/* height      */ 0,
		/* stringID    */ STR_NULL,
	}
};

WidgetInfo g_table_factoryWidgetInfo[FACTORY_WIDGET_MAX] = {
	{ /* 0 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_List_Click,
		/* shortcut    */ -2,
		/* flags       */ 4544,
		/* spriteID    */ -1,
		/* offsetX     */ 72,
		/* offsetY     */ 24,
		/* width       */ 32,
		/* height      */ 24,
		/* stringID    */ STR_NULL,
	},
	{ /* 1 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_List_Click,
		/* shortcut    */ -3,
		/* flags       */ 4544,
		/* spriteID    */ -1,
		/* offsetX     */ 72,
		/* offsetY     */ 56,
		/* width       */ 32,
		/* height      */ 24,
		/* stringID    */ STR_NULL,
	},
	{ /* 2 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_List_Click,
		/* shortcut    */ -4,
		/* flags       */ 4544,
		/* spriteID    */ -1,
		/* offsetX     */ 72,
		/* offsetY     */ 88,
		/* width       */ 32,
		/* height      */ 24,
		/* stringID    */ STR_NULL,
	},
	{ /* 3 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_List_Click,
		/* shortcut    */ -5,
		/* flags       */ 4544,
		/* spriteID    */ -1,
		/* offsetX     */ 72,
		/* offsetY     */ 120,
		/* width       */ 32,
		/* height      */ 24,
		/* stringID    */ STR_NULL,
	},
	{ /* 4 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_Up_Click,
		/* shortcut    */ -1120,
		/* flags       */ 4548,
		/* spriteID    */ 355,
		/* offsetX     */ 64,
		/* offsetY     */ 168,
		/* width       */ 48,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 5 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_Down_Click,
		/* shortcut    */ -1122,
		/* flags       */ 4548,
		/* spriteID    */ 357,
		/* offsetX     */ 64,
		/* offsetY     */ 184,
		/* width       */ 48,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 6 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_ResumeGame_Click,
		/* shortcut    */ 188,
		/* flags       */ 17607,
		/* spriteID    */ 365,
		/* offsetX     */ 160,
		/* offsetY     */ 184,
		/* width       */ 120,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 7 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_Upgrade_Click,
		/* shortcut    */ 189,
		/* flags       */ 17607,
		/* spriteID    */ 359,
		/* offsetX     */ 112,
		/* offsetY     */ 1,
		/* width       */ 88,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 8 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Purchase_Plus_Click,
		/* shortcut    */ -13,
		/* flags       */ 17607,
		/* spriteID    */ 367,
		/* offsetX     */ 8,
		/* offsetY     */ 80,
		/* width       */ 40,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 9 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Purchase_Minus_Click,
		/* shortcut    */ -12,
		/* flags       */ 17607,
		/* spriteID    */ 369,
		/* offsetX     */ 8,
		/* offsetY     */ 104,
		/* width       */ 40,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 10 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Purchase_Invoice_Click,
		/* shortcut    */ 192,
		/* flags       */ 17607,
		/* spriteID    */ 371,
		/* offsetX     */ 112,
		/* offsetY     */ 1,
		/* width       */ 88,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 11 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_BuildThis_Click,
		/* shortcut    */ 191,
		/* flags       */ 17607,
		/* spriteID    */ 363,
		/* offsetX     */ 160,
		/* offsetY     */ 168,
		/* width       */ 120,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	},
	{ /* 12 */
		/* index       */ -1,
		/* clickProc   */ &GUI_Production_BuildThis_Click,
		/* shortcut    */ 190,
		/* flags       */ 17607,
		/* spriteID    */ 361,
		/* offsetX     */ 160,
		/* offsetY     */ 168,
		/* width       */ 120,
		/* height      */ 16,
		/* stringID    */ STR_NULL,
	}
};
