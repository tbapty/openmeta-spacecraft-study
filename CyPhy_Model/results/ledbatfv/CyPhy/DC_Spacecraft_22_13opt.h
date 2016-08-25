#if defined(__cplusplus)
  extern "C" {
#endif
  int DC_Spacecraft_22_mayer(DATA* data, modelica_real** res, short*);
  int DC_Spacecraft_22_lagrange(DATA* data, modelica_real** res, short *, short *);
  int DC_Spacecraft_22_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
#if defined(__cplusplus)
}
#endif