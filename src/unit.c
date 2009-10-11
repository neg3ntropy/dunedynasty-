/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "house.h"
#include "unit.h"

extern void f__1A34_1E99_0012_1117();
extern void f__1A34_1E99_0012_1117();
extern void f__1A34_204C_0043_B1ED();
extern void emu_Unit_FindBuilding();
extern void f__15C2_0395_0044_304E();
extern void f__2BB4_0004_0027_DC1D();
extern void f__1A34_204C_0043_B1ED();
extern void f__1A34_0E2E_0015_7E65();
extern void f__176C_000E_000E_633D();
extern void ovl__34CD(uint8 entry);

UnitInfo *g_unitInfo = NULL;

/**
 * Initialize the unit system.
 *
 * @init System_Init_Unit
 */
void System_Init_Unit()
{
	g_unitInfo = (UnitInfo *)&emu_get_memory8(0x2D07, 0x0, 0x0);
}

/**
 * Get the HouseID of a unit. This is not always u->houseID, as a unit can be
 *  deviated by the Ordos.
 *
 * @param u Unit to get the HouseID of.
 * @return The HouseID of the unit, which might be deviated.
 */
uint8 Unit_GetHouseID(Unit *u)
{
	if (u->deviated != 0) return HOUSE_ORDOS;
	return u->houseID;
}

/**
 * Create a new Unit.
 *
 * @param index The new index of the Unit, or UNIT_INDEX_INVALID to assign one.
 * @param typeID The type of the new Unit.
 * @param houseID The House of the new Unit.
 * @param position To where on the map this Unit should be transported, or TILE_INVALID for not on the map yet.
 * @param var10 An unknown parameter.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, uint16 var10)
{
	csip32 ucsip;
	UnitInfo *ui;
	Unit *u;

	ui = &g_unitInfo[typeID];
	u = Unit_Allocate(index, typeID, houseID);
	if (u == NULL) return NULL;

	u->houseID = houseID;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

	emu_push(0x00);
	emu_push(0x01);
	emu_push(var10);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0958); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x01);
	emu_push(0x01);
	emu_push(var10);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x096F); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x00);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0980); f__1A34_204C_0043_B1ED();
	emu_sp += 6;

	u->position.tile    = position.tile;
	u->variable_0E      = ui->variable_10;
	u->variable_49.csip = 0x00000000;
	u->variable_4D      = 0x0000;
	u->variable_72      = 0xFF;

	if (position.tile != 0xFFFFFFFF) {
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x09D9); emu_Unit_FindBuilding();
		emu_sp += 4;

		u->variable_4D      = emu_ax;
		u->variable_5A.tile = position.tile;
		u->variable_5E.tile = position.tile;
	}

	u->linkedBuildingID = 0xFF;
	u->variable_10 = 0x0000;
	u->variable_4F = 0x03;
	u->variable_50 = 0xFF;
	u->variable_51 = 0x00;
	u->variable_52 = 0x7FFF;
	u->variable_56 = 0x0000;
	u->variable_58 = 0x00;
	u->variable_6C = 0x00;
	u->variable_6D = 0x00;
	u->variable_6E = 0x00;
	u->variable_70 = 0x0000;

	emu_push(0x353F); emu_push(emu_Global_GetIP(&g_global->variable_3902, 0x353F));
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip + 0x12);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	u->flags |= 0x0002;

	if (ui->variable_3C == 0x0001) {
		emu_push(emu_cs); emu_push(0x0A96); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();

		if (emu_ax < g_global->variable_37F0[houseID * 0x1E + 0x0E]) {
			u->flags |= 0x0400;
		}
	}

	if (ui->variable_3C == 0x0004) {
		emu_push(0xFF);
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x0AF2); f__1A34_204C_0043_B1ED();
		emu_sp += 6;
	} else {
		if (position.tile != 0xFFFFFFFF) {
			emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
			emu_push(emu_cs); emu_push(0x0AD7); f__1A34_0E2E_0015_7E65();
			emu_sp += 4;

			if (emu_ax != 0) {
				Unit_Free(ucsip);
				return NULL;
			}
		}
	}

	if (position.tile == 0xFFFFFFFF) {
		u->flags |= 0x0004;
		return u;
	}

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(0x01);
	emu_push(emu_cs); emu_push(0x0B26); emu_cs = 0x34CD; ovl__34CD(22);
	emu_sp += 6;

	if (houseID == g_global->playerHouseID) {
		emu_push(ui->variable_28);
	} else {
		emu_push(ui->variable_48);
	}
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0B4D); emu_cs = 0x176C; f__176C_000E_000E_633D();
	emu_sp += 6;

	return u;
}
