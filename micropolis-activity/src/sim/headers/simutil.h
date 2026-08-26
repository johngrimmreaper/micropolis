/* simutil.h: declarations required by utility helpers */

#ifndef SIMUTIL_H
#define SIMUTIL_H

struct SimView;

extern int StartMicropolisTimer(void);
extern int StopMicropolisTimer(void);
extern int Eval(char *cmd);
extern int UpdateGameLevel(void);
extern int setAnyCityName(char *name);
extern int doTimeStuff(void);
extern int EventuallyRedrawView(struct SimView *view);

#endif /* SIMUTIL_H */
