/* simkeys.h: declarations required by keyboard input */

#ifndef SIMKEYS_H
#define SIMKEYS_H

struct SimView;

extern int Spend(int dollars);
extern int MakeEarthquake(void);
extern int MakeSound(char *channel, char *id);
extern int MakeFire(void);
extern int MakeFlood(void);
extern int MakeTornado(void);
extern int MakeMonster(void);
extern int Kick(void);
extern int setWandState(struct SimView *view, short state);
extern int SoundOff(void);

#endif /* SIMKEYS_H */
