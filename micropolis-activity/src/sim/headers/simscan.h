/* simscan.h: declarations required by simulator map analysis */

#ifndef SIMSCAN_H
#define SIMSCAN_H

/* Scan helpers defined later in s_scan.c. */
extern int SmoothFSMap(void);
extern int ClrTemArray(void);
extern int GetPDen(int Ch9);
extern int DoSmooth(void);
extern int DoSmooth2(void);
extern int DistIntMarket(void);
extern int GetPValue(int loc);
extern int GetDisCC(int x, int y);
extern int SmoothTerrain(void);
extern int SmoothPSMap(void);

/* Cross-module interfaces used by map analysis. */
extern int DoFreePop(void);
extern int RZPop(int Ch9);
extern int CZPop(int Ch9);
extern int IZPop(int Ch9);
extern int Rand16(void);

#endif /* SIMSCAN_H */
