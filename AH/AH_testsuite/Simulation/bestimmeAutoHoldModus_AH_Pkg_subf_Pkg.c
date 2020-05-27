/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bestimmeAutoHoldModus_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ */
void bestimmeAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  /* modus/ */
  autoholdModus_T_AhTypes_Pkg_ah_Pkg modus_partial;
  /* cockpitAnzeige_AutoHoldMode/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_AutoHoldMode_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_partial;
  /* modus/ */
  autoholdModus_T_AhTypes_Pkg_ah_Pkg _1_modus_partial;
  /* cockpitAnzeige_AutoHoldMode/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _2_cockpitAnzeige_AutoHoldMode_partial;
  /* SM1: */
  _2_SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _5_SM1_fired_partial;
  /* SM1: */
  _2_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:AH_inaktiv:<1> */
  kcg_bool tr_1_guard_AH_inaktiv_SM1;
  /* SM1: */
  _2_SSM_ST_SM1 _6_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _7_SM1_reset_act_partial;
  /* SM1: */
  _3_SSM_TR_SM1 _8_SM1_fired_strong_partial;
  /* SM1:AH_aktiv:<1> */
  kcg_bool tr_1_guard_AH_aktiv_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->_L24 = zuendschalter;
  outC->_L25 = taste_Hold;
  outC->_L22 = v_fzg;
  outC->_L23 = bremspedalKraft;
  /* _L21=(AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus#1)/ */
  deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
    outC->_L24,
    outC->_L25,
    outC->_L22,
    outC->_L23,
    &outC->Context_deaktiviereAutoHoldModus_1);
  outC->_L21 = outC->Context_deaktiviereAutoHoldModus_1.deaktivieren;
  outC->deaktiviere = outC->_L21;
  switch (outC->SM1_state_sel) {
    case SSM_st_AH_aktiv_SM1 :
      tr_1_guard_AH_aktiv_SM1 = outC->deaktiviere;
      if (tr_1_guard_AH_aktiv_SM1) {
        _6_SM1_state_act_partial = SSM_st_AH_inaktiv_SM1;
      }
      else {
        _6_SM1_state_act_partial = SSM_st_AH_aktiv_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L2 = zuendschalter;
  outC->_L3 = fahrertuerSchalter;
  outC->_L4 = sicherheitsgurtSchalter;
  outC->_L5 = getriebeWahlhebel;
  outC->_L6 = taste_Hold;
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereAutoHoldModus#1)/ */
  aktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    outC->_L6,
    &outC->Context_aktiviereAutoHoldModus_1);
  outC->_L1 = outC->Context_aktiviereAutoHoldModus_1.aktivieren;
  outC->aktiviere = outC->_L1;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AH_aktiv_SM1 :
      outC->SM1_state_act = _6_SM1_state_act_partial;
      if (tr_1_guard_AH_aktiv_SM1) {
        _8_SM1_fired_strong_partial = SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1;
      }
      else {
        _8_SM1_fired_strong_partial = _10_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _8_SM1_fired_strong_partial;
      break;
    case SSM_st_AH_inaktiv_SM1 :
      tr_1_guard_AH_inaktiv_SM1 = outC->aktiviere;
      if (tr_1_guard_AH_inaktiv_SM1) {
        SM1_state_act_partial = SSM_st_AH_aktiv_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_AH_inaktiv_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_AH_inaktiv_SM1) {
        SM1_fired_strong_partial = SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1;
      }
      else {
        SM1_fired_strong_partial = _10_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AH_aktiv_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_AH_aktiv_SM1;
      outC->_L2_AH_aktiv_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      _2_cockpitAnzeige_AutoHoldMode_partial = outC->_L2_AH_aktiv_SM1;
      outC->_L1_AH_aktiv_SM1 = ahm_on_AhTypes_Pkg_ah_Pkg;
      _1_modus_partial = outC->_L1_AH_aktiv_SM1;
      outC->modus = _1_modus_partial;
      outC->cockpitAnzeige_AutoHoldMode = _2_cockpitAnzeige_AutoHoldMode_partial;
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_AH_inaktiv_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_AH_inaktiv_SM1;
      outC->_L2_AH_inaktiv_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      cockpitAnzeige_AutoHoldMode_partial = outC->_L2_AH_inaktiv_SM1;
      outC->_L1_AH_inaktiv_SM1 = ahm_off_AhTypes_Pkg_ah_Pkg;
      modus_partial = outC->_L1_AH_inaktiv_SM1;
      outC->modus = modus_partial;
      outC->cockpitAnzeige_AutoHoldMode = cockpitAnzeige_AutoHoldMode_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AH_aktiv_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_AH_inaktiv_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_AH_aktiv_SM1 :
      _7_SM1_reset_act_partial = tr_1_guard_AH_aktiv_SM1;
      break;
    case SSM_st_AH_inaktiv_SM1 :
      SM1_reset_act_partial = tr_1_guard_AH_inaktiv_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AH_aktiv_SM1 :
      outC->SM1_reset_act = _7_SM1_reset_act_partial;
      break;
    case SSM_st_AH_inaktiv_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void bestimmeAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L25 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L24 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_true;
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = kcg_true;
  outC->deaktiviere = kcg_true;
  outC->aktiviere = kcg_true;
  outC->SM1_fired = _10_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _10_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_AH_inaktiv_SM1;
  outC->SM1_state_sel = SSM_st_AH_inaktiv_SM1;
  outC->_L1_AH_aktiv_SM1 = ahm_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2_AH_aktiv_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1_AH_inaktiv_SM1 = ahm_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2_AH_inaktiv_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_AutoHoldMode = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->modus = ahm_off_AhTypes_Pkg_ah_Pkg;
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereAutoHoldModus#1)/ */
  aktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereAutoHoldModus_1);
  /* _L21=(AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus#1)/ */
  deaktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereAutoHoldModus_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_AH_inaktiv_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void bestimmeAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC)
{
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereAutoHoldModus#1)/ */
  aktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereAutoHoldModus_1);
  /* _L21=(AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus#1)/ */
  deaktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereAutoHoldModus_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_AH_inaktiv_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bestimmeAutoHoldModus_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

