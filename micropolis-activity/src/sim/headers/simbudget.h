/* simbudget.h: declarations required by budget handling */

#ifndef SIMBUDGET_H
#define SIMBUDGET_H

extern int drawBudgetWindow(void);
extern int drawCurrPercents(void);
extern int DoBudgetNow(int fromMenu);
extern int ShowBudgetWindowAndStartWaiting(void);
extern int Spend(int dollars);
extern int ClearMes(void);
extern int SendMes(int Mnum);
extern int makeDollarDecimalStr(char *numStr, char *dollarStr);
extern int SetBudgetValues(char *roadGot, char *roadWant,
                           char *policeGot, char *policeWant,
                           char *fireGot, char *fireWant);
extern int Eval(char *cmd);
extern int Pause(void);

#endif /* SIMBUDGET_H */
