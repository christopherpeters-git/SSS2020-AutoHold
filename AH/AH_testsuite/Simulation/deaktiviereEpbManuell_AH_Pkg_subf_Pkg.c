/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deaktiviereEpbManuell_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::deaktiviereEpbManuell/ */
void deaktiviereEpbManuell_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  outC->_L15 = v_fzg;
  /* _L30=(AH_Pkg::subf_Pkg::fahrzeugSteht#2)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L15, &outC->Context_fahrzeugSteht_2);
  outC->_L30 = outC->Context_fahrzeugSteht_2.steht;
  outC->_L28 = cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = bremspedalKraft;
  outC->_L27 = outC->_L10 >= outC->_L28;
  outC->_L25 = tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = zuendschalter;
  outC->_L14 = outC->_L9 == outC->_L12;
  outC->_L3 = taste_P;
  outC->_L5 = outC->_L3 == outC->_L25;
  outC->_L24 = outC->_L5 & outC->_L14 & outC->_L30 & outC->_L27;
  outC->epbDeaktivieren = outC->_L24;
}

#ifndef KCG_USER_DEFINED_INIT
void deaktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  outC->_L30 = kcg_true;
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_true;
  outC->_L25 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L24 = kcg_true;
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_true;
  outC->_L12 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = kcg_true;
  outC->_L3 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->epbDeaktivieren = kcg_true;
  /* _L30=(AH_Pkg::subf_Pkg::fahrzeugSteht#2)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deaktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC)
{
  /* _L30=(AH_Pkg::subf_Pkg::fahrzeugSteht#2)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereEpbManuell_AH_Pkg_subf_Pkg.c
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

