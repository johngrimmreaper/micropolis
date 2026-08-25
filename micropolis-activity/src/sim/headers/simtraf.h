/* simtraf.h: declarations required by traffic generation */

#ifndef SIMTRAF_H
#define SIMTRAF_H

/* Traffic helpers defined later in s_traf.c. */
extern int FindPRoad(void);
extern int TryDrive(void);
extern int SetTrafMem(void);
extern int PullPos(void);
extern int RoadTest(int x);
extern int TryGo(int z);
extern int DriveDone(void);
extern int GetFromMap(int x);

/* Cross-module interfaces used by traffic generation. */
extern int Rand16(void);
extern int MoveMapSim(short MDir);

#endif /* SIMTRAF_H */
