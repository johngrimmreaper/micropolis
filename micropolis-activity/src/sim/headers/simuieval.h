/* simuieval.h: declarations required by UI evaluation */

#ifndef SIMUIEVAL_H
#define SIMUIEVAL_H

extern int CurrentYear(void);
extern int makeDollarDecimalStr(char *numStr, char *dollarStr);
extern int SetEvaluation(char *changed, char *score,
                         char *ps0, char *ps1, char *ps2, char *ps3,
                         char *pv0, char *pv1, char *pv2, char *pv3,
                         char *pop, char *delta, char *assessed_dollars,
                         char *cityclass, char *citylevel,
                         char *goodyes, char *goodno, char *title);
extern int Eval(char *cmd);

#endif /* SIMUIEVAL_H */
