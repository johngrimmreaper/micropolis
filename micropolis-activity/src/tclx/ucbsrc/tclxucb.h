/*
 * tclxucb.h --
 *
 * Declarations for Extended Tcl hooks used by patched UCB Tcl sources.
 */

#ifndef TCLX_UCB_H
#define TCLX_UCB_H

#include "tcl.h"

extern int Tcl_CheckForSignal _ANSI_ARGS_((Tcl_Interp *interp,
                                           int cmdResultCode));
extern int Tcl_ReturnDouble _ANSI_ARGS_((Tcl_Interp *interp,
                                         double number));

#endif /* TCLX_UCB_H */
