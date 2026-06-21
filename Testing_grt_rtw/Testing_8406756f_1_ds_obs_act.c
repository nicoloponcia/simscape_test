/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Testing/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Testing_8406756f_1_ds_sys_struct.h"
#include "Testing_8406756f_1_ds_obs_act.h"
#include "Testing_8406756f_1_ds.h"
#include "Testing_8406756f_1_ds_externals.h"
#include "Testing_8406756f_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Testing_8406756f_1_ds_obs_act(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T Current_Sensor_I;
  out->mOBS_ACT.mX[14ULL] = 0.0;
  Current_Sensor_I = -t1->mX.mX[0ULL] + t1->mX.mX[1ULL];
  out->mOBS_ACT.mX[0ULL] = Current_Sensor_I;
  out->mOBS_ACT.mX[1ULL] = Current_Sensor_I;
  out->mOBS_ACT.mX[2ULL] = 0.0;
  out->mOBS_ACT.mX[3ULL] = 0.0;
  out->mOBS_ACT.mX[4ULL] = Current_Sensor_I;
  out->mOBS_ACT.mX[5ULL] = -Current_Sensor_I;
  out->mOBS_ACT.mX[6ULL] = 0.0;
  out->mOBS_ACT.mX[7ULL] = t1->mX.mX[1ULL];
  out->mOBS_ACT.mX[8ULL] = t1->mX.mX[1ULL];
  out->mOBS_ACT.mX[9ULL] = Current_Sensor_I;
  out->mOBS_ACT.mX[10ULL] = 0.0;
  out->mOBS_ACT.mX[11ULL] = t1->mX.mX[0ULL];
  out->mOBS_ACT.mX[12ULL] = t1->mX.mX[0ULL];
  out->mOBS_ACT.mX[13ULL] = 0.0;
  out->mOBS_ACT.mX[15ULL] = Current_Sensor_I;
  out->mOBS_ACT.mX[16ULL] = t1->mX.mX[0ULL];
  out->mOBS_ACT.mX[17ULL] = t1->mX.mX[1ULL];
  out->mOBS_ACT.mX[18ULL] = Current_Sensor_I;
  (void)sys;
  (void)out;
  return 0;
}
