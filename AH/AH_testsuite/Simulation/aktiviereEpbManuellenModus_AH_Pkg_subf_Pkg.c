/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus/ */
void aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC)
{
  kcg_bool noname;

  outC->_L26 = cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = bremspedalKraft;
  outC->_L27 = outC->_L10 >= outC->_L26;
  outC->_L15 = v_fzg;
  /* _L45=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L15, &outC->Context_fahrzeugSteht_1);
  outC->_L45 = outC->Context_fahrzeugSteht_1.steht;
  outC->_L12 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = zuendschalter;
  outC->_L14 = outC->_L9 == outC->_L12;
  outC->_L25 = tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = taste_P;
  outC->_L5 = outC->_L3 == outC->_L25;
  /* _L43=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L5, &outC->Context_RisingEdge_1);
  outC->_L43 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L24 = outC->_L43 & outC->_L14 & outC->_L45 & outC->_L27;
  outC->_L56 = !outC->_L27;
  outC->_L55 = !outC->_L45;
  outC->_L54 = !outC->_L14;
  outC->_L40 = !outC->_L5;
  outC->_L48 = outC->_L40 | outC->_L54 | outC->_L55 | outC->_L56;
  outC->_L41 = aktZeit;
  outC->_L42 = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
  /* _L28=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_AhTypes_Pkg_utils_Pkg(
    outC->_L24,
    outC->_L48,
    outC->_L41,
    outC->_L42,
    &outC->Context_countDownTimer_1);
  outC->_L28 = outC->Context_countDownTimer_1.abgelaufen;
  outC->_L29 = outC->Context_countDownTimer_1.laufend;
  /* _L57=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L28, &outC->Context_RisingEdge_2);
  outC->_L57 = outC->Context_RisingEdge_2.RE_Output;
  noname = outC->_L29;
  outC->aktivieren = outC->_L57;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereEpbManuellenModus_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L57 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L24 = kcg_true;
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_true;
  outC->_L12 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = kcg_true;
  outC->_L3 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->aktivieren = kcg_true;
  /* _L57=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
  /* _L28=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L43=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L45=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereEpbManuellenModus_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC)
{
  /* _L57=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
  /* _L28=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L43=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L45=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

