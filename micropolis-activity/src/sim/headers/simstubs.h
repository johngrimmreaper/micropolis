/* simstubs.h: declarations required by legacy application stubs */

#ifndef SIMSTUBS_H
#define SIMSTUBS_H

/* Startup helpers defined later in w_stubs.c. */
extern int DoStartLoad(void);
extern int DoPlayNewCity(void);
extern int DoReallyStartGame(void);
extern int DoStartScenario(int scenario);

/* Cross-module interfaces used by the application stubs. */
extern int UpdateFunds(void);
extern int InvalidateMaps(void);
extern int InvalidateEditors(void);
extern int LoadCity(char *filename);
extern int setCityName(char *name);
extern int Eval(char *buf);
extern int sim_exit(int val);

#endif /* SIMSTUBS_H */
