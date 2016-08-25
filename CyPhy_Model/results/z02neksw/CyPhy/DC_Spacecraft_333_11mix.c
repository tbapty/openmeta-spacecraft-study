/* Mixed Systems */
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

#include "DC_Spacecraft_333_11mix.h"
/* initial mixed systems */
/* parameter mixed systems */
/* model mixed systems */
/* jacobians mixed systems */


