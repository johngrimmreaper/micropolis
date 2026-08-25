/* simsim.h: declarations required by the main simulation engine */

#ifndef SIMSIM_H
#define SIMSIM_H

/* Helpers defined later in s_sim.c. */
extern int Simulate(int mod16);
extern int SetValves(void);
extern int ClearCensus(void);
extern int MapScan(int x1, int x2);
extern int TakeCensus(void);
extern int Take2Census(void);
extern int CollectTax(void);
extern int DecROGMem(void);
extern int DecTrafficMem(void);
extern int InitSimMemory(void);
extern int SimLoadInit(void);
extern int SetCommonInits(void);
extern int DoFire(void);
extern int DoRadTile(void);
extern int DoRoad(void);
extern int DoRail(void);
extern int DoBridge(void);
extern int GetBoatDis(void);
extern int FireZone(int Xloc, int Yloc, int ch);
extern int CoalSmoke(int mx, int my);
extern int DoMeltdown(int SX, int SY);
extern int DrawStadium(int z);
extern int DoAirport(void);
extern int Rand16(void);
extern int SeedRand(int seed);

/* Cross-module simulator services. */
extern int CityEvaluation(void);
extern int EvalInit(void);
extern int SendMessages(void);
extern int DoPowerScan(void);
extern int PTLScan(void);
extern int CrimeScan(void);
extern int PopDenScan(void);
extern int FireAnalysis(void);
extern int DoDisasters(void);
extern void doAllGraphs(void);
extern int SetZPower(void);
extern void ChangeCensus(void);
extern int DoBudget(void);
extern int drawCurrPercents(void);
extern int DoFlood(void);
extern int DoZone(void);
extern int GenerateTrain(int x, int y);
extern int PushPowerStack(void);
extern int FindPRoad(void);
extern int GenerateShip(void);
extern int GeneratePlane(int x, int y);
extern int GenerateCopter(int x, int y);
extern int MakeExplosion(int x, int y);
extern int MakeExplosionAt(int x, int y);
extern int ClearMes(void);
extern void SendMesAt(short Mnum, short x, short y);
extern int sim_rand(void);
extern void sim_srand(unsigned int seed);

#endif /* SIMSIM_H */
