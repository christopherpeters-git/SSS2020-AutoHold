/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "aktiviereEpbManuell_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::aktiviereEpbManuell/ */
void aktiviereEpbManuell_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  outC->_L15 = v_fzg;
  /* _L26=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L15, &outC->Context_fahrzeugSteht_1);
  outC->_L26 = outC->Context_fahrzeugSteht_1.steht;
  outC->_L13 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = zuendschalter;
  outC->_L19 = outC->_L18 == outC->_L13;
  outC->_L12 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = zuendschalter;
  outC->_L14 = outC->_L9 == outC->_L12;
  outC->_L20 = outC->_L14 & outC->_L26;
  outC->_L21 = outC->_L20 | outC->_L19;
  outC->_L4 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = taste_P;
  outC->_L5 = outC->_L3 == outC->_L4;
  outC->_L24 = outC->_L5 & outC->_L21;
  outC->epbAktivieren = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void aktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  outC->_L26 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_true;
  outC->_L13 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->epbAktivieren = kcg_true;
  /* _L26=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void aktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  /* _L26=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbManuell_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

