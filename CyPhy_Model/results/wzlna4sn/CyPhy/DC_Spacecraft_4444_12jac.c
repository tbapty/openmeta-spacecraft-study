/* Jacobians */
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

#include "DC_Spacecraft_4444_12jac.h"
int DC_Spacecraft_4444_initialAnalyticJacobianD(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int DC_Spacecraft_4444_initialAnalyticJacobianC(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int DC_Spacecraft_4444_initialAnalyticJacobianB(void* inData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_0(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiff] - 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiffed;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_1(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiff] - 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiffed;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_2(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = $PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = $PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+4] = $PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiffed;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_3(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiff] - 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiffed;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_4(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] - 4;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] - 4;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] - 4;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = $PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] - 4;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = $PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiffed;
}

static void DC_Spacecraft_4444_initialAnalyticJacobianA_5(DATA* data, int index)
{
  int i;
  /* write index for cref: $PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px */
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+0] = $PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+1] = $PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+2] = $PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+3] = $PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiffed;
  i = data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] - 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.index[i+4] = $PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiffed;
}


int DC_Spacecraft_4444_initialAnalyticJacobianA(void* inData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = DC_Spacecraft_4444_INDEX_JAC_A;
  
  int i;
  
  data->simulationInfo.analyticJacobians[index].sizeCols = 6;
  data->simulationInfo.analyticJacobians[index].sizeRows = 6;
  data->simulationInfo.analyticJacobians[index].sizeTmpVars = 0;
  data->simulationInfo.analyticJacobians[index].seedVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].resultVars = (modelica_real*) calloc(6,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc(6*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(17*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(6*sizeof(int));
  data->simulationInfo.analyticJacobians[index].sparsePattern.maxColors = 4;
  data->simulationInfo.analyticJacobians[index].jacobian = NULL;
  
  /* write column ptr of compressed sparse column*/
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] = 5;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] = 4;
  data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] = 5;
  for(i=1;i<6;++i)
      data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo.analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  
  /* call functions to write index for each cref */
  DC_Spacecraft_4444_initialAnalyticJacobianA_0(data, index);
  DC_Spacecraft_4444_initialAnalyticJacobianA_1(data, index);
  DC_Spacecraft_4444_initialAnalyticJacobianA_2(data, index);
  DC_Spacecraft_4444_initialAnalyticJacobianA_3(data, index);
  DC_Spacecraft_4444_initialAnalyticJacobianA_4(data, index);
  DC_Spacecraft_4444_initialAnalyticJacobianA_5(data, index);
  
  /* write color array */
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PBatteries$Pcapacitor1$Pv$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PComputers$Pspringdamper1$Pphi_rel$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pw$pDERA$indexdiff] = 1;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PComputers$Pinertia1$Pphi$pDERA$indexdiff] = 2;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PComputers$PPID$PI$Py$pDERA$indexdiff] = 3;
  data->simulationInfo.analyticJacobians[index].sparsePattern.colorCols[$PDC_Spacecraft_cfg1$PComputers$PPID$PD$Px$pDERA$indexdiff] = 4;
  
  TRACE_POP
  return 0;
}

int DC_Spacecraft_4444_functionJacD_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int DC_Spacecraft_4444_functionJacC_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int DC_Spacecraft_4444_functionJacB_column(void* data)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int DC_Spacecraft_4444_functionJacA_column(void* inData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = DC_Spacecraft_4444_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


