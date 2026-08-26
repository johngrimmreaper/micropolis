/* simmsg.h: declarations required by the message subsystem */

#ifndef SIMMSG_H
#define SIMMSG_H

extern int DoScenarioScore(int type);
extern int CheckGrowth(void);
extern int SendMes(int Mnum);
extern int ClearMes(void);
extern int DoLoseGame();
extern QUAD TickCount();
extern int MakeSound(char *channel, char *id);
extern int GetIndString(char *str, int id, short num);
extern int SetMessageField(char *str);
extern int Eval(char *buf);

#endif /* SIMMSG_H */
