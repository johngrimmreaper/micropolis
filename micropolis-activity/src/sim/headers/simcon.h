/* simcon.h: declarations required by construction helpers */

#ifndef SIMCON_H
#define SIMCON_H

extern int Spend(int dollars);
extern int _FixZone(int x, int y, short *tile);
extern int _LayDoze(int x, int y, short *tile);
extern int _LayRoad(int x, int y, short *tile);
extern int _LayRail(int x, int y, short *tile);
extern int _LayWire(int x, int y, short *tile);
extern int _FixSingle(int x, int y, short *tile);

#endif /* SIMCON_H */
