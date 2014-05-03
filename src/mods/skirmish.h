#ifndef MODS_SKIRMISH_H
#define MODS_SKIRMISH_H

#include "enumeration.h"
#include "types.h"

typedef struct Skirmish {
	uint32 seed;
	enum Brain brain[HOUSE_MAX];
} Skirmish;

struct SkirmishData;

extern Skirmish g_skirmish;

extern uint16 Skirmish_FindStartLocation(enum HouseType houseID, uint16 dist_threshold, struct SkirmishData *sd);

extern bool Skirmish_IsPlayable(void);
extern void Skirmish_Prepare(void);
extern void Skirmish_StartScenario(void);
extern bool Skirmish_GenerateMap1(bool is_playable);
extern bool Skirmish_GenerateMap(bool newseed);

#endif
