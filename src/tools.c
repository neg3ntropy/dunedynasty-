/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "os/sleep.h"
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"

extern void emu_Tools_Free_Internal();
extern void emu_Tools_Malloc_Internal();
extern void emu_Highmem_IsInHighmem();
extern void emu_Highmem_Memmove_FromHighmem();
extern void emu_Highmem_Memmove_ToHighmem();
extern void emu_Highmem_Alloc();
extern void emu_Highmem_Free();
extern void f__23E1_03DB_000B_CF65();

uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed)
{
	uint16 gameSpeed = g_global->gameSpeed;

	if (gameSpeed == 2) return normal;
	if (gameSpeed > 4) return normal;

	if (maximum > normal * 2) maximum = normal * 2;
	if (minimum < normal / 2) minimum = normal / 2;

	if (inverseSpeed) gameSpeed = 4 - gameSpeed;

	switch (gameSpeed) {
		case 0: return minimum;
		case 1: return normal - (normal - minimum) / 2;
		case 3: return normal + (maximum - normal) / 2;
		case 4: return maximum;
	}

	/* Never reached, but avoids compiler errors */
	return normal;
}

/**
 * Get the type of the given encoded index.
 *
 * @param id The encoded index to get the type of.
 * @return The type
 */
IndexType Tools_Index_GetType(uint16 encoded)
{
	switch(encoded & 0xC000) {
		case 0x4000: return IT_UNIT;
		case 0x8000: return IT_STRUCTURE;
		case 0xC000: return IT_TILE;
		default:     return IT_NONE;
	}
}

/**
 * Decode the given encoded index.
 *
 * @param id The encoded index to decode.
 * @return The decoded index.
 */
uint16 Tools_Index_Decode(uint16 encoded)
{
	if (Tools_Index_GetType(encoded) == IT_TILE) return Tile_PackXY((encoded >> 1) & 0x3F, (encoded >> 8) & 0x3F);
	return encoded & 0x3FFF;
}

/**
 * Encode the given index.
 *
 * @param id The index to encode.
 * @param type The type of the encoded Index.
 * @return The encoded Index.
 */
uint16 Tools_Index_Encode(uint16 index, IndexType type)
{
	switch (type) {
		case IT_TILE: {
			uint16 ret;

			ret  = ((Tile_GetPackedX(index) << 1) + 1) << 0;
			ret |= ((Tile_GetPackedY(index) << 1) + 1) << 7;
			return ret | 0xC000;
		}
		case IT_UNIT: {
			if (index >= UNIT_INDEX_MAX || !Unit_Get_ByIndex(index)->o.flags.s.allocated) return 0;
			return index | 0x4000;
		}
		case IT_STRUCTURE:  return index | 0x8000;
		default: return 0;
	}
}

/**
 * Check whether an encoded index is valid.
 *
 * @param id The encoded index to check for validity.
 * @return True if valid, false if not.
 */
bool Tools_Index_IsValid(uint16 encoded)
{
	uint16 index;

	if (encoded == 0) return false;

	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_UNIT:
			if (index >= UNIT_INDEX_MAX) return false;
			return Unit_Get_ByIndex(index)->o.flags.s.used && Unit_Get_ByIndex(index)->o.flags.s.allocated;

		case IT_STRUCTURE:
			if (index >= STRUCTURE_INDEX_MAX_HARD) return false;
			return Structure_Get_ByIndex(index)->o.flags.s.used;

		case IT_TILE : return true;

		default: return false;
	}
}

/**
 * Gets the packed tile corresponding to the given encoded index.
 *
 * @param id The encoded index to get the packed tile of.
 * @return The packed tile.
 */
uint16 Tools_Index_GetPackedTile(uint16 encoded)
{
	uint16 index;

	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE:      return index;
		case IT_UNIT:      return (index < UNIT_INDEX_MAX) ? Tile_PackTile(Unit_Get_ByIndex(index)->o.position) : 0;
		case IT_STRUCTURE: return (index < STRUCTURE_INDEX_MAX_HARD) ? Tile_PackTile(Structure_Get_ByIndex(index)->o.position) : 0;
		default:           return 0;
	}
}

/**
 * Gets the tile corresponding to the given encoded index.
 *
 * @param id The encoded index to get the tile of.
 * @return The tile.
 */
tile32 Tools_Index_GetTile(uint16 encoded)
{
	uint16 index;
	tile32 tile;

	index = Tools_Index_Decode(encoded);
	tile.tile = 0;

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE: return Tile_UnpackTile(index);
		case IT_UNIT: return (index < UNIT_INDEX_MAX) ? Unit_Get_ByIndex(index)->o.position : tile;
		case IT_STRUCTURE: {
			Structure *s;
			StructureInfo *si;

			if (index >= STRUCTURE_INDEX_MAX_HARD) return tile;

			s = Structure_Get_ByIndex(index);
			si = &g_structureInfo[s->o.type];

			return Tile_AddTileDiff(s->o.position, g_global->layoutTileDiff[si->layout]);
		}
		default: return tile;
	}
}

/**
 * Gets the Unit corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Unit of.
 * @return The Unit.
 */
Unit *Tools_Index_GetUnit(uint16 encoded)
{
	uint16 index;

	if (Tools_Index_GetType(encoded) != IT_UNIT) return NULL;

	index = Tools_Index_Decode(encoded);
	return (index < UNIT_INDEX_MAX) ? Unit_Get_ByIndex(index) : NULL;
}

/**
 * Gets the Structure corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Structure of.
 * @return The Structure.
 */
Structure *Tools_Index_GetStructure(uint16 encoded)
{
	uint16 index;

	if (Tools_Index_GetType(encoded) != IT_STRUCTURE) return NULL;

	index = Tools_Index_Decode(encoded);
	return (index < STRUCTURE_INDEX_MAX_HARD) ? Structure_Get_ByIndex(index) : NULL;
}

/**
 * Gets the Object corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Object of.
 * @return The Object.
 */
Object *Tools_Index_GetObject(uint16 encoded)
{
	uint16 index;

	switch (Tools_Index_GetType(encoded)) {
		case IT_UNIT:
			index = Tools_Index_Decode(encoded);
			return (index < UNIT_INDEX_MAX) ? &Unit_Get_ByIndex(index)->o : NULL;

		case IT_STRUCTURE:
			index = Tools_Index_Decode(encoded);
			return (index < STRUCTURE_INDEX_MAX_HARD) ? &Structure_Get_ByIndex(index)->o : NULL;

		default: return NULL;
	}
}

/**
 * Moves as much of the IP to CS
 *
 * @param csip The CS:IP to modify.
 * @return The modified CS:IP.
 */
csip32 Tools_GetSmallestIP(csip32 csip)
{
	if (csip.s.cs < 0xF000) {
		csip.s.cs += csip.s.ip >> 4;
		csip.s.ip &= 0xF;
	}

	return csip;
}

/**
 * Moves count bytes from src to dst.
 *
 * @param src The source CS:IP.
 * @param dst The destination CS:IP.
 * @param count How many bytes to move.
 */
void Tools_Memmove(csip32 src, csip32 dst, uint32 count)
{
	if (dst.s.cs >= 0xF000) {
		emu_push(count >> 16); emu_push(count & 0xFFFF);
		emu_push(dst.s.cs); emu_push(dst.s.ip);
		emu_push(src.s.cs); emu_push(src.s.ip);
		emu_push(emu_cs); emu_push(0x0063); emu_cs = 0x2649; emu_Highmem_Memmove_ToHighmem();
		emu_sp += 12;
	} else if (src.s.cs >= 0xF000) {
		emu_push(count >> 16); emu_push(count & 0xFFFF);
		emu_push(dst.s.cs); emu_push(dst.s.ip);
		emu_push(src.s.cs); emu_push(src.s.ip);
		emu_push(emu_cs); emu_push(0x004F); emu_cs = 0x2649; emu_Highmem_Memmove_FromHighmem();
		emu_sp += 12;
	} else {
		memmove(emu_get_memorycsip(dst), emu_get_memorycsip(src), count);
	}
}

/**
 * Get a random value between 0 and 255.
 *
 * @return The random value.
 */
uint8 Tools_Random_256()
{
	uint16 val16;
	uint8 val8;

	val16 = (g_global->randomSeed[1] << 8) | g_global->randomSeed[2];
	val8 = ((val16 ^ 0x8000) >> 15) & 1;
	val16 = (val16 << 1) | ((g_global->randomSeed[0] >> 1) & 1);
	val8 = (g_global->randomSeed[0] >> 2) - g_global->randomSeed[0] - val8;
	g_global->randomSeed[0] = (val8 << 7) | (g_global->randomSeed[0] >> 1);
	g_global->randomSeed[1] = val16 >> 8;
	g_global->randomSeed[2] = val16 & 0xFF;

	return g_global->randomSeed[0] ^ g_global->randomSeed[1];
}

/**
 * Get a random value between the given values.
 *
 * @param min The minimum value.
 * @param max The maximum value.
 * @return The random value.
 */
uint16 Tools_RandomRange(uint16 min, uint16 max)
{
	int32 value;
	uint16 ret;

	if (min > max) {
		uint16 temp = min;
		min = max;
		max = temp;
	}

	do {
		value = rand();
		value *= max - min + 1;
		value /= 0x8000;
		value += min;

		ret = value & 0xFFFF;
	} while (ret > max);

	return ret;
}

/**
 * Set timers on and off.
 *
 * @param timer 1 = variable_76AC timer, 0 = tickGlobal timer.
 * @param set True sets the timer on, false sets it off.
 * @return True if timer was set, false if it was not set.
 */
bool Game_Timer_SetState(uint16 timer, bool set)
{
	bool ret;

	timer = (1 << (timer - 1));
	ret = (g_global->timersActive & timer) != 0;

	if (set) {
		g_global->timersActive |= timer;
	} else {
		g_global->timersActive &= ~timer;
	}

	return ret;
}

/**
 * Sleep for an amount of ticks.
 * @param ticks The amount of ticks to sleep.
 */
void Tools_Sleep(uint16 ticks)
{
	while (ticks-- > 0) {
		uint32 tick = g_global->variable_76A8 + 1;

		while (tick >= g_global->variable_76A8) sleep(0);
	}
}

/**
 * Allocate memory.
 *
 * @param size The size of the memory to allocate.
 * @param flags 0x10 - memset memory, 0x20 - align on codesegment, 0x40 - use highmem
 */
csip32 Tools_Malloc(uint32 size, uint8 flags)
{
	uint32 sizeUser = size;
	uint32 loc0A;
	uint8 *buf;
	csip32 ret;

	if (g_global->variable_66F8 == 0) {
		/* XXX -- Hardcoded the amount of free memory on startup.
		 *   This to avoid calling 01F7 layer. Should be removed ASAP. */
		g_global->variable_66F8 = 392880;
	}

	if ((flags & 0x40) != 0) {
		emu_push(0);
		emu_push(size >> 16); emu_push(size & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2649; emu_Highmem_Alloc();
		emu_sp += 6;

		ret.s.cs = emu_dx;
		ret.s.ip = emu_ax;
		return ret;
	}

	if ((flags & 0x20) != 0) {
		size += 16;
	} else {
		size += 1;
	}

	emu_push(size >> 16); emu_push(size & 0xFFFF);
	emu_push(emu_cs); emu_push(0x0071); emu_cs = 0x01F7; emu_Tools_Malloc_Internal();
	emu_sp += 4;

	ret.s.cs = emu_dx + (emu_ax >> 4);
	ret.s.ip = emu_ax & 0xF;
	buf = emu_get_memorycsip(ret);

	if ((flags & 0x20) != 0) {
		uint8 alignment;

		alignment = 15 - ret.s.ip;

		buf += alignment;
		*buf = alignment | flags;

		ret.s.cs += 1;
		ret.s.ip = 0;
		buf += 1;
	} else {
		*buf = flags;

		ret.s.ip += 1;
		buf += 1;
	}

	if ((flags & 0x10) != 0) {
		memset(buf, 0, sizeUser);
	}

	emu_push(emu_cs); emu_push(0x015B); f__23E1_03DB_000B_CF65();
	loc0A = (emu_dx << 16) | emu_ax;

	if (loc0A < g_global->variable_66F0) {
		g_global->variable_66F0 = loc0A;
	}

	if (g_global->variable_66F4 < g_global->variable_66F8 - loc0A) {
		g_global->variable_66F4 = g_global->variable_66F8 - loc0A;
	}
	g_global->variable_66F8++;

	return ret;
}

/**
 * Free a malloc'd pointer.
 * @param ptr The pointer to free.
 */
void Tools_Free(csip32 ptr)
{
	uint8 flags;
	uint8 *buf;

	if (ptr.csip == 0x0) return;

	emu_push(ptr.s.cs); emu_push(ptr.s.ip);
	emu_push(emu_cs); emu_push(0x01DE); emu_cs = 0x2649; emu_Highmem_IsInHighmem();
	emu_sp += 4;

	if (emu_ax != 0) {
		emu_push(ptr.s.cs); emu_push(ptr.s.ip);
		emu_push(emu_cs); emu_push(0x01EF); emu_cs = 0x2649; emu_Highmem_Free();
		emu_sp += 4;

		return;
	}

	buf = emu_get_memorycsip(ptr) - 1;
	flags = *buf;

	if ((flags & 0x20) != 0) {
		emu_push(ptr.s.cs - 1); emu_push(ptr.s.ip + 15 - (flags & 0xF));
		emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; emu_Tools_Free_Internal();
		emu_sp += 4;

		return;
	}

	emu_push(ptr.s.cs); emu_push(ptr.s.ip - 1);
	emu_push(emu_cs); emu_push(0x0228); emu_cs = 0x01F7; emu_Tools_Free_Internal();
	emu_sp += 4;
}
