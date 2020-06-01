/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereHillHold_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereHillHold/ */
void aktiviereHillHold_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  outC->_L7 = cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = gaspedalStellung;
  outC->_L8 = outC->_L11 < outC->_L7;
  outC->_L9 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = bremspedalKraft;
  outC->_L10 = outC->_L6 < outC->_L9;
  /* _L20=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L10, &outC->Context_RisingEdge_1);
  outC->_L20 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L5 = v_fzg;
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L5, &outC->Context_fahrzeugSteht_1);
  outC->_L4 = outC->Context_fahrzeugSteht_1.steht;
  outC->_L16 = kcg_false;
  outC->_L17 = kcg_true;
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
  outC->_L2 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = zuendschalter;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->_L21 = outC->_L3 & outC->_L13 & outC->_L4 & outC->_L20 & outC->_L8;
  outC->aktiviere = outC->_L21;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereHillHold_init_AH_Pkg_subf_Pkg(
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->aktiviere = kcg_true;
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L20=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereHillHold_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC)
{
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L20=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereHillHold_AH_Pkg_subf_Pkg.c
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

