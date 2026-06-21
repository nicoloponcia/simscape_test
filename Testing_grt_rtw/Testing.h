/*
 * Testing.h
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

#ifndef Testing_h_
#define Testing_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "Testing_8406756f_1_gateway.h"
#include "Testing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_Testing_T {
  real_T STATE_1[2];                   /* '<S4>/STATE_1' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_Testing_T {
  real_T STATE_1_Discrete_2176707653[2];/* '<S4>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S4>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S4>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S4>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S4>/STATE_1' */
  void* STATE_1_SimData;               /* '<S4>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S4>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S4>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S4>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S4>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S4>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S4>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S4>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S4>/OUTPUT_1_0' */
  int_T STATE_1_Modes;                 /* '<S4>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S4>/OUTPUT_1_0' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S4>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S4>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S4>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S4>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S4>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S4>/OUTPUT_1_0' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Testing_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
  } Timing;
};

/* Class declaration for model Testing */
class Testing final
{
  /* public data and function members */
 public:
  /* Copy Constructor */
  Testing(Testing const&) = delete;

  /* Assignment Operator */
  Testing& operator= (Testing const&) & = delete;

  /* Move Constructor */
  Testing(Testing &&) = delete;

  /* Move Assignment Operator */
  Testing& operator= (Testing &&) = delete;

  /* Real-Time Model get method */
  RT_MODEL_Testing_T * getRTM();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  Testing();

  /* Destructor */
  ~Testing();

  /* private data and function members */
 private:
  /* Block signals */
  B_Testing_T Testing_B;

  /* Block states */
  DW_Testing_T Testing_DW;

  /* Real-Time Model */
  RT_MODEL_Testing_T Testing_M;
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Testing'
 * '<S1>'   : 'Testing/PS-Simulink Converter'
 * '<S2>'   : 'Testing/Solver Configuration'
 * '<S3>'   : 'Testing/PS-Simulink Converter/EVAL_KEY'
 * '<S4>'   : 'Testing/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* Testing_h_ */
