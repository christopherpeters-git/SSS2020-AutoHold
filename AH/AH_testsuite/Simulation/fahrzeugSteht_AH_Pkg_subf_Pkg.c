/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::fahrzeugSteht/ */
void fahrzeugSteht_AH_Pkg_subf_Pkg(
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC)
{
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  outC->_L5 = v_fzg;
  outC->A_Input_Abs_1_float64 = outC->_L5;
  outC->_L5_Abs_1_float64 = outC->A_Input_Abs_1_float64;
  outC->_L3_Abs_1_float64 = - outC->_L5_Abs_1_float64;
  outC->_L1_Abs_1_float64 = outC->_L8_Abs_1_float64 <= outC->_L5_Abs_1_float64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_float64) {
    outC->_L2_Abs_1_float64 = outC->_L5_Abs_1_float64;
  }
  else {
    outC->_L2_Abs_1_float64 = outC->_L3_Abs_1_float64;
  }
  outC->A_Output_Abs_1_float64 = outC->_L2_Abs_1_float64;
  outC->_L2 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = outC->A_Output_Abs_1_float64;
  outC->_L4 = outC->_L3 < outC->_L2;
  outC->steht = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void fahrzeugSteht_init_AH_Pkg_subf_Pkg(
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC)
{
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->steht = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fahrzeugSteht_reset_AH_Pkg_subf_Pkg(
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: AH_Pkg::subf_Pkg::fahrzeugSteht/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrzeugSteht_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

