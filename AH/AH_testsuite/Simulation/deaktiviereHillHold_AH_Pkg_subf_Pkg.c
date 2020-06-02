/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deaktiviereHillHold_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::deaktiviereHillHold/ */
void deaktiviereHillHold_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  kcg_bool noname;

  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  outC->_L32 = fzgLaengsNeigung;
  outC->_L35 = /* _L35=(mathext::SinR#1)/ */
    SinR64_mathext_mathextimpl(outC->_L32);
  outC->A_Input_Abs_1_float64 = outC->_L35;
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
  outC->_L37 = cSteigung2GaspedalFaktor_AhTypes_Pkg_ah_Pkg;
  outC->_L36 = outC->A_Output_Abs_1_float64;
  outC->_L34 = cFzgMasse_AhTypes_Pkg_fzg_Pkg;
  outC->_L33 = outC->_L36 * outC->_L34 * outC->_L37;
  outC->_L30 = aktZeit;
  outC->_L29 = kcg_false;
  outC->_L9 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = bremspedalKraft;
  outC->_L10 = outC->_L6 < outC->_L9;
  /* _L26=(digital::RisingEdge#3)/ */
  RisingEdge_digital(outC->_L10, &outC->Context_RisingEdge_3);
  outC->_L26 = outC->Context_RisingEdge_3.RE_Output;
  /* _L27=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_AhTypes_Pkg_utils_Pkg(
    outC->_L26,
    outC->_L29,
    outC->_L30,
    cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg,
    &outC->Context_countDownTimer_1);
  outC->_L27 = outC->Context_countDownTimer_1.abgelaufen;
  outC->_L28 = outC->Context_countDownTimer_1.laufend;
  noname = outC->_L28;
  outC->_L24 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = EPB_Bremse;
  outC->_L25 = outC->_L23 == outC->_L24;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_false;
  outC->_L12 = getriebeWahlhebel;
  /* _L13= */
  switch (outC->_L12) {
    case getriebeWahl_P_AhTypes_Pkg_ah_Pkg :
      outC->_L13 = outC->_L16;
      break;
    case getriebeWahl_N_AhTypes_Pkg_ah_Pkg :
      outC->_L13 = outC->_L16;
      break;
    default :
      outC->_L13 = outC->_L17;
      break;
  }
  /* _L22=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L13, &outC->Context_RisingEdge_2);
  outC->_L22 = outC->Context_RisingEdge_2.RE_Output;
  outC->_L11 = gaspedalStellung;
  outC->_L8 = outC->_L11 > outC->_L33;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = zuendschalter;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->_L21 = outC->_L3 | outC->_L22 | outC->_L25 | outC->_L27 | outC->_L8;
  outC->deaktiviere = outC->_L21;
}

#ifndef KCG_USER_DEFINED_INIT
void deaktiviereHillHold_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_true;
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_true;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->deaktiviere = kcg_true;
  /* _L22=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
  /* _L27=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L26=(digital::RisingEdge#3)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deaktiviereHillHold_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  /* _L22=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
  /* _L27=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L26=(digital::RisingEdge#3)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: AH_Pkg::subf_Pkg::deaktiviereHillHold/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereHillHold_AH_Pkg_subf_Pkg.c
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

