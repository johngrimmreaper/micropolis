/* simmapdraw.h: declarations required by map rendering */

#ifndef SIMMAPDRAW_H
#define SIMMAPDRAW_H

struct SimView;

extern int maybeDrawRect(struct SimView *view, int val,
                         int x, int y, int w, int h);
extern int ditherMap(struct SimView *view);
extern int drawRect(struct SimView *view, int pixel, int solid,
                    int x, int y, int w, int h);
extern int Rand16(void);

#endif /* SIMMAPDRAW_H */
