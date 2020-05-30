/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch/ */
void aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
  outC->_L14 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = getriebeWahlhebel;
  outC->_L15 = outC->_L18 == outC->_L14;
  outC->_L17 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L20 = epbBetriebsmodus;
  outC->_L16 = outC->_L20 == outC->_L17;
  outC->_L19 = outC->_L16 & outC->_L15;
  outC->aktiviereEpb = outC->_L19;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
  outC->_L14 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L19 = kcg_true;
  outC->_L20 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->aktiviereEpb = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

