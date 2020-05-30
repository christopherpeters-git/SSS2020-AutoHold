/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereNotbremse_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereNotbremse/ */
void aktiviereNotbremse_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC)
{
  kcg_bool noname;

  outC->_L4 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = taste_P;
  outC->_L5 = outC->_L3 == outC->_L4;
  /* _L10=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L5, &outC->Context_RisingEdge_2);
  outC->_L10 = outC->Context_RisingEdge_2.RE_Output;
  outC->_L8 = cNotbremsDelay_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = !outC->_L5;
  outC->_L7 = aktZeit;
  /* _L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_AhTypes_Pkg_utils_Pkg(
    outC->_L10,
    outC->_L6,
    outC->_L7,
    outC->_L8,
    &outC->Context_countDownTimer_1);
  outC->_L1 = outC->Context_countDownTimer_1.abgelaufen;
  outC->_L2 = outC->Context_countDownTimer_1.laufend;
  noname = outC->_L2;
  outC->notbremsen = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereNotbremse_init_AH_Pkg_subf_Pkg(
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC)
{
  outC->_L10 = kcg_true;
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->notbremsen = kcg_true;
  /* _L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L10=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereNotbremse_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC)
{
  /* _L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L10=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereNotbremse_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

