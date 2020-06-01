/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus/ */
void deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L14 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = taste_Hold;
  outC->_L15 = outC->_L5 == outC->_L14;
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L15, &outC->Context_RisingEdge_1);
  outC->_L54 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L62 = bremspedalKraft;
  /* _L61=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
  bremspedalDurchgetreten_AH_Pkg_subf_Pkg(
    outC->_L62,
    &outC->Context_bremspedalDurchgetreten_2);
  outC->_L61 = outC->Context_bremspedalDurchgetreten_2.vollDurchgetreten;
  outC->_L58 = v_fzg;
  /* _L57=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L58, &outC->Context_fahrzeugSteht_1);
  outC->_L57 = outC->Context_fahrzeugSteht_1.steht;
  outC->_L60 = outC->_L57 & outC->_L61;
  outC->_L59 = !outC->_L57;
  outC->_L63 = outC->_L59 | outC->_L60;
  outC->_L64 = outC->_L63 & outC->_L54;
  outC->_L55 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = zuendschalter;
  outC->_L7 = outC->_L1 == outC->_L55;
  outC->_L67 = outC->_L7 | outC->_L64;
  outC->deaktivieren = outC->_L67;
}

#ifndef KCG_USER_DEFINED_INIT
void deaktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L67 = kcg_true;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_true;
  outC->_L55 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_lit_float64(0.0);
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_lit_float64(0.0);
  outC->_L57 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->deaktivieren = kcg_true;
  /* _L57=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L61=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
  bremspedalDurchgetreten_init_AH_Pkg_subf_Pkg(
    &outC->Context_bremspedalDurchgetreten_2);
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deaktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  /* _L57=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L61=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
  bremspedalDurchgetreten_reset_AH_Pkg_subf_Pkg(
    &outC->Context_bremspedalDurchgetreten_2);
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg.c
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

