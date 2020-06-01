/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereAutoHoldModus/ */
void aktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L14 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = taste_Hold;
  outC->_L15 = outC->_L5 == outC->_L14;
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L15, &outC->Context_RisingEdge_1);
  outC->_L54 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L13 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = getriebeWahlhebel;
  outC->_L12 = outC->_L4 != outC->_L13;
  outC->_L10 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = sicherheitsgurtSchalter;
  outC->_L11 = outC->_L3 == outC->_L10;
  outC->_L8 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = fahrertuerSchalter;
  outC->_L9 = outC->_L2 == outC->_L8;
  outC->_L6 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = zuendschalter;
  outC->_L7 = outC->_L1 == outC->_L6;
  outC->_L53 = outC->_L7 & outC->_L9 & outC->_L11 & outC->_L12 & outC->_L54;
  outC->aktivieren = outC->_L53;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L13 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = kcg_true;
  outC->_L8 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_true;
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->aktivieren = kcg_true;
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  /* _L54=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereAutoHoldModus_AH_Pkg_subf_Pkg.c
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

