/* simgen.h: declarations required by the map generation module */

#ifndef SIMGEN_H
#define SIMGEN_H

/* Map generation routines used before their definitions. */
extern int GenerateSomeCity(int r);
extern int GenerateMap(int r);
extern int MakeIsland(void);
extern int MakeNakedIsland();
extern int GetRandStart(void);
extern int DoRivers(void);
extern int MakeLakes(void);
extern int SmoothRiver(void);
extern int DoTrees(void);
extern int BRivPlop(void);
extern int SRivPlop(void);
extern int SmoothTrees(void);
extern int DoBRiv(void);
extern int DoSRiv(void);

/* Simulator services used by map generation. */
extern int Rand16(void);
extern int InitWillStuff();
extern int ResetMapState();
extern int ResetEditorState();
extern int InvalidateEditors();
extern int InvalidateMaps();
extern int UpdateFunds(void);
extern int DoSimInit(void);
extern int Eval(char *buf);
extern int Kick();
extern int SeedRand(int seed);
extern int RandomlySeedRand();
extern int ClearMap(void);

#endif /* SIMGEN_H */
