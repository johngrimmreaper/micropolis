/* simfuncs.h: declarations for legacy simulator cross-module calls */

#ifndef SIMFUNCS_H
#define SIMFUNCS_H

/* Legacy K&R interfaces retain unspecified parameter lists intentionally. */
extern int DoStopMicropolis();
extern int signal_init();
extern int ChangeEval();
extern int InitializeSound();
extern int initGraphs();
extern int setUpMapProcs();
extern int StopEarthquake();
extern int ResetMapState();
extern int ResetEditorState();
extern int ClearMap();
extern int InitWillStuff();
extern int SetFunds();
extern int sim_update_editors();
extern int sim_update_maps();
extern int sim_update_graphs();
extern int sim_update_budgets();
extern int sim_update_evaluations();
extern int UpdateFlush();
extern int CancelRedrawView();
extern int DoUpdateEditor();
extern int DoUpdateMap();
extern int graphDoer();
extern int UpdateBudgetWindow();
extern int scoreDoer();
extern int sim_loop();
extern int DoTimeoutListen();
extern int MoveObjects();
extern int SimFrame();
extern int tk_main();

/* Interfaces already defined with explicit modern return types. */
extern int initMapArrays(void);
extern void InitFundingLevel(void);
extern void DoUpdateHeads(void);

#endif /* SIMFUNCS_H */
