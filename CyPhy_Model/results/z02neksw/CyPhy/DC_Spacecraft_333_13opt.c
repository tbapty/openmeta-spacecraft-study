/* Optimization */
/* Simulation code for CyPhy.TestBenches.DC_Spacecraft_333 generated by the OpenModelica Compiler 1.9.2 Beta1 (r24371). */

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_xml.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <assert.h>
#include <string.h>

#include "DC_Spacecraft_333_functions.h"
#include "DC_Spacecraft_333_model.h"
#include "DC_Spacecraft_333_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#define threadData data->threadData

#include "DC_Spacecraft_333_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif
int DC_Spacecraft_333_mayer(DATA* data, modelica_real** res,short *i){return -1;}
int DC_Spacecraft_333_lagrange(DATA* data, modelica_real** res, short * i1, short*i2){return -1;}
int DC_Spacecraft_333_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt){return -1;}
#if defined(__cplusplus)
}
#endif