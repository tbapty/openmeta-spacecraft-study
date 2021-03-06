/* Algebraic */
/* Simulation code for CyPhy.TestBenches.DC_Spacecraft_4444 generated by the OpenModelica Compiler 1.9.2 Beta1 (r24371). */

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

#include "DC_Spacecraft_4444_functions.h"
#include "DC_Spacecraft_4444_model.h"
#include "DC_Spacecraft_4444_literals.h"




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


#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void DC_Spacecraft_4444_eqFunction_153(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_154(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_155(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_156(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_160(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_176(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_177(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_178(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_179(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_180(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_181(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_212(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_213(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_214(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_215(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_216(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_217(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_218(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_219(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_220(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_221(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_222(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_223(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_224(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_225(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_226(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_227(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_232(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_233(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_234(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_236(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_244(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_243(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_242(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_241(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_240(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_239(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_238(DATA* data);
extern void DC_Spacecraft_4444_eqFunction_237(DATA* data);

static void functionAlg_system0(DATA *data)
{
  DC_Spacecraft_4444_eqFunction_153(data);

  DC_Spacecraft_4444_eqFunction_154(data);

  DC_Spacecraft_4444_eqFunction_155(data);

  DC_Spacecraft_4444_eqFunction_156(data);

  DC_Spacecraft_4444_eqFunction_160(data);

  DC_Spacecraft_4444_eqFunction_176(data);

  DC_Spacecraft_4444_eqFunction_177(data);

  DC_Spacecraft_4444_eqFunction_178(data);

  DC_Spacecraft_4444_eqFunction_179(data);

  DC_Spacecraft_4444_eqFunction_180(data);

  DC_Spacecraft_4444_eqFunction_181(data);

  DC_Spacecraft_4444_eqFunction_212(data);

  DC_Spacecraft_4444_eqFunction_213(data);

  DC_Spacecraft_4444_eqFunction_214(data);

  DC_Spacecraft_4444_eqFunction_215(data);

  DC_Spacecraft_4444_eqFunction_216(data);

  DC_Spacecraft_4444_eqFunction_217(data);

  DC_Spacecraft_4444_eqFunction_218(data);

  DC_Spacecraft_4444_eqFunction_219(data);

  DC_Spacecraft_4444_eqFunction_220(data);

  DC_Spacecraft_4444_eqFunction_221(data);

  DC_Spacecraft_4444_eqFunction_222(data);

  DC_Spacecraft_4444_eqFunction_223(data);

  DC_Spacecraft_4444_eqFunction_224(data);

  DC_Spacecraft_4444_eqFunction_225(data);

  DC_Spacecraft_4444_eqFunction_226(data);

  DC_Spacecraft_4444_eqFunction_227(data);

  DC_Spacecraft_4444_eqFunction_232(data);

  DC_Spacecraft_4444_eqFunction_233(data);

  DC_Spacecraft_4444_eqFunction_234(data);

  DC_Spacecraft_4444_eqFunction_236(data);

  DC_Spacecraft_4444_eqFunction_244(data);

  DC_Spacecraft_4444_eqFunction_243(data);

  DC_Spacecraft_4444_eqFunction_242(data);

  DC_Spacecraft_4444_eqFunction_241(data);

  DC_Spacecraft_4444_eqFunction_240(data);

  DC_Spacecraft_4444_eqFunction_239(data);

  DC_Spacecraft_4444_eqFunction_238(data);

  DC_Spacecraft_4444_eqFunction_237(data);
}
/* for continuous time variables */
int DC_Spacecraft_4444_functionAlgebraics(DATA *data)
{
  TRACE_PUSH
  
  data->simulationInfo.discreteCall = 0;
  functionAlg_system0(data);
  
  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
