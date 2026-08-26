/* simzone.h: declarations required by zone simulation */

#ifndef SIMZONE_H
#define SIMZONE_H

/* Zone helpers defined in s_zone.c. */
extern int DoResidential(int ZonePwrFlg);
extern int DoHospChur(void);
extern int DoCommercial(int ZonePwrFlg);
extern int DoIndustrial(int ZonePwrFlg);
extern int ZonePlop(int base);
extern int IZPop(int Ch9);
extern int DoIndOut(int pop, int value);
extern int EvalInd(int traf);
extern int DoIndIn(int pop, int value);
extern int CZPop(int Ch9);
extern int GetCRVal(void);
extern int DoComOut(int pop, int value);
extern int EvalCom(int traf);
extern int DoComIn(int pop, int value);
extern int DoFreePop(void);
extern int RZPop(int Ch9);
extern int DoResOut(int pop, int value);
extern int EvalRes(int traf);
extern int MakeHosp(void);
extern int DoResIn(int pop, int value);
extern int BuildHouse(int value);
extern int IncROG(int amount);
extern int ResPlop(int Den, int Value);
extern int ComPlop(int Den, int Value);
extern int IndPlop(int Den, int Value);
extern int EvalLot(int x, int y);

/* Cross-module interfaces used by zone simulation. */
extern int SetZPower(void);
extern int DoSPZone(short PwrOn);
extern int RepairZone(short ZCent, short zsize);
extern int MakeTraf(int Zt);
extern int Rand16(void);
extern int Rand16Signed(void);

#endif /* SIMZONE_H */
