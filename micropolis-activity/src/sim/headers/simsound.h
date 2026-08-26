/* simsound.h: declarations required by sound control */

#ifndef SIMSOUND_H
#define SIMSOUND_H

/* Sound helpers defined later in w_sound.c. */
extern int DoStartSound(char *channel, char *id);
extern int DoStopSound(char *id);

/* Cross-module interface used by sound control. */
extern int Eval(char *buf);

#endif /* SIMSOUND_H */
