/* simfileio.h: declarations required by city file I/O */

#ifndef SIMFILEIO_H
#define SIMFILEIO_H

/* File-I/O callbacks defined later in s_fileio.c. */
extern int DidLoadScenario(void);
extern int DidLoadCity(void);
extern int DidntLoadCity(char *msg);
extern int DoSaveCityAs(void);
extern int DidSaveCity(void);
extern int DidntSaveCity(char *msg);

/* Cross-module interfaces used by city loading and saving. */
extern void ChangeCensus(void);
extern int DoSimInit(void);
extern int InvalidateEditors(void);
extern int InvalidateMaps(void);
extern int setAnyCityName(char *name);
extern int UpdateFunds(void);
extern int Kick(void);
extern int Eval(char *buf);
extern int setCityName(char *name);

#endif /* SIMFILEIO_H */
