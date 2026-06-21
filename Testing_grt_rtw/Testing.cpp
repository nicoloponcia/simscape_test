/*
 * Testing.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Testing".
 *
 * Model version              : 1.3
 * Simulink Coder version : 25.2 (R2025b) 28-Jul-2025
 * C++ source code generated on : Sun Jun 21 00:53:11 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Testing.h"
#include "rtwtypes.h"
#include <stddef.h>

/* Model step function */
void Testing::step()
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  NeuDiagnosticTree *diagnosticTree_0;
  NeuDiagnosticTree *diagnosticTree_1;
  char *msg;
  char *msg_0;
  char *msg_1;
  real_T tmp_2[2];
  real_T rtb_OUTPUT_1_0;
  real_T time;
  real_T time_0;
  real_T time_1;
  real_T time_2;
  real_T time_3;
  real_T time_tmp;
  real_T time_tmp_0;
  int32_T isHit;
  int32_T isHit_0;
  int32_T tmp_1;
  int_T tmp_3[2];
  int_T tmp_0;
  int_T tmp_4;
  boolean_T tmp;

  /* SimscapeExecutionBlock: '<S4>/STATE_1' incorporates:
   *  SimscapeExecutionBlock: '<S4>/OUTPUT_1_0'
   */
  simulationData = static_cast<NeslSimulationData *>(Testing_DW.STATE_1_SimData);
  time_tmp = ((((&Testing_M)->Timing.clockTick0+(&Testing_M)->Timing.clockTickH0*
                4294967296.0)) * 0.001);
  time = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 2;
  simulationData->mData->mDiscStates.mX =
    &Testing_DW.STATE_1_Discrete_2176707653[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Testing_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_0 = 0;
  simulationData->mData->mInputValues.mN = 0;
  simulationData->mData->mInputOffsets.mN = 1;
  simulationData->mData->mInputOffsets.mX = &tmp_0;
  simulationData->mData->mOutputs.mN = 2;
  simulationData->mData->mOutputs.mX = &Testing_B.STATE_1[0];
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_tmp_0 = ((((&Testing_M)->Timing.clockTick0+(&Testing_M)
                  ->Timing.clockTickH0* 4294967296.0)) * 0.001);
  time_0 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_0;
  isHit = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (Testing_DW.STATE_1_DiagMgr);
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method(static_cast<NeslSimulator *>
    (Testing_DW.STATE_1_Simulator), NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (tmp_1 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus((&Testing_M)));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus((&Testing_M), msg);
    }
  }

  /* End of SimscapeExecutionBlock: '<S4>/STATE_1' */

  /* SimscapeExecutionBlock: '<S4>/OUTPUT_1_0' */
  simulationData = static_cast<NeslSimulationData *>
    (Testing_DW.OUTPUT_1_0_SimData);
  time_1 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_1;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &Testing_DW.OUTPUT_1_0_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Testing_DW.OUTPUT_1_0_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_3[0] = 0;
  tmp_2[0] = Testing_B.STATE_1[0];
  tmp_2[1] = Testing_B.STATE_1[1];
  tmp_3[1] = 2;
  simulationData->mData->mInputValues.mN = 2;
  simulationData->mData->mInputValues.mX = &tmp_2[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_3[0];
  simulationData->mData->mOutputs.mN = 1;
  simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0;
  simulationData->mData->mTolerances.mN = 0;
  simulationData->mData->mTolerances.mX = nullptr;
  simulationData->mData->mCstateHasChanged = false;
  simulationData->mData->mDstateHasChanged = false;
  time_2 = time_tmp_0;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_2;
  isHit_0 = 0;
  simulationData->mData->mSampleHits.mN = 1;
  simulationData->mData->mSampleHits.mX = &isHit_0;
  simulationData->mData->mIsFundamentalSampleHit = true;
  simulationData->mData->mHadEvents = false;
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (Testing_DW.OUTPUT_1_0_DiagMgr);
  diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method(static_cast<NeslSimulator *>
    (Testing_DW.OUTPUT_1_0_Simulator), NESL_SIM_OUTPUTS, simulationData,
    diagnosticManager);
  if (tmp_1 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus((&Testing_M)));
    if (tmp) {
      msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
      rtmSetErrorStatus((&Testing_M), msg_0);
    }
  }

  /* Update for SimscapeExecutionBlock: '<S4>/STATE_1' */
  simulationData = static_cast<NeslSimulationData *>(Testing_DW.STATE_1_SimData);
  time_3 = time_tmp;
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time_3;
  simulationData->mData->mContStates.mN = 0;
  simulationData->mData->mContStates.mX = nullptr;
  simulationData->mData->mDiscStates.mN = 2;
  simulationData->mData->mDiscStates.mX =
    &Testing_DW.STATE_1_Discrete_2176707653[0];
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &Testing_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = true;
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  simulationData->mData->mIsComputingJacobian = false;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = true;
  tmp_4 = 0;
  simulationData->mData->mInputValues.mN = 0;
  simulationData->mData->mInputOffsets.mN = 1;
  simulationData->mData->mInputOffsets.mX = &tmp_4;
  diagnosticManager = static_cast<NeuDiagnosticManager *>
    (Testing_DW.STATE_1_DiagMgr);
  diagnosticTree_1 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_1 = ne_simulator_method(static_cast<NeslSimulator *>
    (Testing_DW.STATE_1_Simulator), NESL_SIM_UPDATE, simulationData,
    diagnosticManager);
  if (tmp_1 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus((&Testing_M)));
    if (tmp) {
      msg_1 = rtw_diagnostics_msg(diagnosticTree_1);
      rtmSetErrorStatus((&Testing_M), msg_1);
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.001, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  (&Testing_M)->Timing.clockTick0++;
  if (!(&Testing_M)->Timing.clockTick0) {
    (&Testing_M)->Timing.clockTickH0++;
  }
}

/* Model initialize function */
void Testing::initialize()
{
  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T tmp_2;
    int32_T tmp_3;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S4>/STATE_1' */
    tmp = nesl_lease_simulator("Testing/Solver Configuration_1", 0, 0);
    Testing_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Testing_DW.STATE_1_Simulator);
    if (tmp_0) {
      Testing_8406756f_1_gateway();
      tmp = nesl_lease_simulator("Testing/Solver Configuration_1", 0, 0);
      Testing_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Testing_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Testing_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters.mRTWModifiedTimeStamp = 7.0390019E+8;
    modelParameters.mZcDisabled = true;
    modelParameters.mUseModelRefSolver = false;
    modelParameters.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mZcDisabled = true;
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (Testing_DW.STATE_1_DiagMgr);
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator(static_cast<NeslSimulator *>
      (Testing_DW.STATE_1_Simulator), &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus((&Testing_M)));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus((&Testing_M), msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S4>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S4>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("Testing/Solver Configuration_1", 1, 0);
    Testing_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Testing_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      Testing_8406756f_1_gateway();
      tmp = nesl_lease_simulator("Testing/Solver Configuration_1", 1, 0);
      Testing_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Testing_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Testing_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_ODE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_OFF;
    modelParameters_0.mRTWModifiedTimeStamp = 7.0390019E+8;
    modelParameters_0.mZcDisabled = true;
    modelParameters_0.mUseModelRefSolver = false;
    modelParameters_0.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 0.001;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = static_cast<NeuDiagnosticManager *>
      (Testing_DW.OUTPUT_1_0_DiagMgr);
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator(static_cast<NeslSimulator *>
      (Testing_DW.OUTPUT_1_0_Simulator), &modelParameters_0, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus((&Testing_M)));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus((&Testing_M), msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S4>/OUTPUT_1_0' */
  }
}

/* Model terminate function */
void Testing::terminate()
{
  /* Terminate for SimscapeExecutionBlock: '<S4>/STATE_1' */
  neu_destroy_diagnostic_manager(static_cast<NeuDiagnosticManager *>
    (Testing_DW.STATE_1_DiagMgr));
  nesl_destroy_simulation_data(static_cast<NeslSimulationData *>
    (Testing_DW.STATE_1_SimData));
  nesl_erase_simulator("Testing/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S4>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager(static_cast<NeuDiagnosticManager *>
    (Testing_DW.OUTPUT_1_0_DiagMgr));
  nesl_destroy_simulation_data(static_cast<NeslSimulationData *>
    (Testing_DW.OUTPUT_1_0_SimData));
  nesl_erase_simulator("Testing/Solver Configuration_1");
}

/* Constructor */
Testing::Testing() :
  Testing_B(),
  Testing_DW(),
  Testing_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
/* Currently there is no destructor body generated.*/
Testing::~Testing() = default;

/* Real-Time Model get method */
RT_MODEL_Testing_T * Testing::getRTM()
{
  return (&Testing_M);
}
