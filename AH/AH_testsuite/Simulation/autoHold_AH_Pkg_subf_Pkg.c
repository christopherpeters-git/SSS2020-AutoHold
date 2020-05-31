/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "autoHold_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::autoHold/ */
void autoHold_AH_Pkg_subf_Pkg(
  /* AHmodus/ */
  autoholdModus_T_AhTypes_Pkg_ah_Pkg AHmodus,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_autoHold_AH_Pkg_subf_Pkg *outC)
{
  /* cockpitAnzeige_Hold/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_Hold_partial;
  /* arretiereBetriebsbremse/ */
  kcg_bool arretiereBetriebsbremse_partial;
  /* aktiviereEPB/ */
  kcg_bool aktiviereEPB_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_partial;
  /* cockpitAnzeige_Hold/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _1_cockpitAnzeige_Hold_partial;
  /* arretiereBetriebsbremse/ */
  kcg_bool _2_arretiereBetriebsbremse_partial;
  /* aktiviereEPB/ */
  kcg_bool _3_aktiviereEPB_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _4_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _5_SM1_reset_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _6_SM1_fired_partial;
  kcg_bool noname;
  /* SM1:bremseArretiert:<2> */
  kcg_bool tr_2_guard_bremseArretiert_SM1;
  /* SM1: */
  _5_SSM_TR_SM1 _7_SM1_fired_partial;
  /* SM1: */
  kcg_bool _8_SM1_reset_nxt_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _9_SM1_state_nxt_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _10_SM1_fired_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  _4_SSM_ST_SM1 _12_SM1_state_nxt_partial;
  /* SM1: */
  _4_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:bremseGeloest:<1> */
  kcg_bool tr_1_guard_bremseGeloest_SM1;
  /* SM1: */
  _4_SSM_ST_SM1 _13_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_act_partial;
  /* SM1: */
  _5_SSM_TR_SM1 _15_SM1_fired_strong_partial;
  /* SM1:bremseArretiert:<1> */
  kcg_bool tr_1_guard_bremseArretiert_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->_L34 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L32 = getriebeWahlhebel;
  outC->_L33 = outC->_L32 != outC->_L34;
  outC->_L36 = !outC->_L33;
  outC->_L15 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L13 = sicherheitsgurtSchalter;
  outC->_L17 = outC->_L13 == outC->_L15;
  outC->_L14 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = fahrertuerSchalter;
  outC->_L16 = outC->_L12 == outC->_L14;
  outC->_L10 = cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = gaspedalStellung;
  outC->_L11 = outC->_L9 >= outC->_L10;
  outC->_L7 = bremspedalKraft;
  /* _L6=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#1)/ */
  bremspedalDurchgetreten_AH_Pkg_subf_Pkg(
    outC->_L7,
    &outC->_1_Context_bremspedalDurchgetreten_1);
  outC->_L6 = outC->_1_Context_bremspedalDurchgetreten_1.vollDurchgetreten;
  outC->_L5 = v_fzg;
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_AH_Pkg_subf_Pkg(outC->_L5, &outC->Context_fahrzeugSteht_1);
  outC->_L4 = outC->Context_fahrzeugSteht_1.steht;
  outC->_L2 = ahm_on_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = AHmodus;
  outC->_L3 = outC->_L1 == outC->_L2;
  outC->_L8 = outC->_L3 & outC->_L4 & outC->_L6 & outC->_L33;
  outC->_L30 = !outC->_L8;
  outC->_L31 = outC->_L30 & outC->_L11 & outC->_L16 & outC->_L17;
  outC->_L35 = outC->_L36 | outC->_L31;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->loeseBremse_loc = outC->_L35;
  switch (outC->SM1_state_sel) {
    case SSM_st_bremseArretiert_SM1 :
      tr_1_guard_bremseArretiert_SM1 = outC->loeseBremse_loc;
      if (tr_1_guard_bremseArretiert_SM1) {
        _13_SM1_state_act_partial = SSM_st_bremseGeloest_SM1;
      }
      else {
        _13_SM1_state_act_partial = SSM_st_bremseArretiert_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->arretiereBremse_loc = outC->_L8;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_bremseArretiert_SM1 :
      outC->SM1_state_act = _13_SM1_state_act_partial;
      if (tr_1_guard_bremseArretiert_SM1) {
        _15_SM1_fired_strong_partial =
          SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1;
      }
      else {
        _15_SM1_fired_strong_partial = _8_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _15_SM1_fired_strong_partial;
      break;
    case SSM_st_bremseGeloest_SM1 :
      tr_1_guard_bremseGeloest_SM1 = outC->arretiereBremse_loc;
      if (tr_1_guard_bremseGeloest_SM1) {
        SM1_state_act_partial = SSM_st_bremseArretiert_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_bremseGeloest_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_bremseGeloest_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1;
      }
      else {
        SM1_fired_strong_partial = _8_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_bremseArretiert_SM1 :
      outC->bremseArretiert_weakb_clock_SM1 = outC->SM1_fired_strong !=
        _8_SSM_TR_no_trans_SM1;
      outC->_L7_bremseArretiert_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_bremseArretiert_SM1 :
      _14_SM1_reset_act_partial = tr_1_guard_bremseArretiert_SM1;
      outC->SM1_reset_act = _14_SM1_reset_act_partial;
      break;
    case SSM_st_bremseGeloest_SM1 :
      SM1_reset_act_partial = tr_1_guard_bremseGeloest_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_bremseArretiert_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      /* SM1:bremseArretiert:_L6= */
      if (outC->init) {
        outC->_L6_bremseArretiert_SM1 = kcg_true;
      }
      else {
        outC->_L6_bremseArretiert_SM1 = outC->_L7_bremseArretiert_SM1;
      }
      outC->_L11_bremseArretiert_SM1 = bremspedalKraft;
      /* SM1:bremseArretiert:_L10=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
      bremspedalDurchgetreten_AH_Pkg_subf_Pkg(
        outC->_L11_bremseArretiert_SM1,
        &outC->Context_bremspedalDurchgetreten_2);
      outC->_L10_bremseArretiert_SM1 =
        outC->Context_bremspedalDurchgetreten_2.vollDurchgetreten;
      outC->_L14_bremseArretiert_SM1 = outC->_L10_bremseArretiert_SM1 |
        outC->_L6_bremseArretiert_SM1;
      outC->_L8_bremseArretiert_SM1 = aktZeit;
      if (outC->SM1_reset_act) {
        /* SM1:bremseArretiert:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_1);
      }
      /* SM1:bremseArretiert:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L14_bremseArretiert_SM1,
        outC->_L7_bremseArretiert_SM1,
        outC->_L8_bremseArretiert_SM1,
        cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg,
        &outC->Context_countDownTimer_1);
      outC->_L4_bremseArretiert_SM1 = outC->Context_countDownTimer_1.abgelaufen;
      outC->_L5_bremseArretiert_SM1 = outC->Context_countDownTimer_1.laufend;
      _3_aktiviereEPB_partial = outC->_L4_bremseArretiert_SM1;
      /* SM1:bremseArretiert: */
      if (outC->bremseArretiert_weakb_clock_SM1) {
        _10_SM1_fired_partial = outC->SM1_fired_strong;
        _11_SM1_reset_nxt_partial = kcg_false;
        _12_SM1_state_nxt_partial = SSM_st_bremseArretiert_SM1;
        _4_SM1_state_nxt_partial = _12_SM1_state_nxt_partial;
        _5_SM1_reset_nxt_partial = _11_SM1_reset_nxt_partial;
        _6_SM1_fired_partial = _10_SM1_fired_partial;
      }
      else {
        tr_2_guard_bremseArretiert_SM1 = _3_aktiviereEPB_partial;
        if (tr_2_guard_bremseArretiert_SM1) {
          _7_SM1_fired_partial =
            _9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1;
        }
        else {
          _7_SM1_fired_partial = _8_SSM_TR_no_trans_SM1;
        }
        _8_SM1_reset_nxt_partial = tr_2_guard_bremseArretiert_SM1;
        if (tr_2_guard_bremseArretiert_SM1) {
          _9_SM1_state_nxt_partial = SSM_st_bremseGeloest_SM1;
        }
        else {
          _9_SM1_state_nxt_partial = SSM_st_bremseArretiert_SM1;
        }
        _4_SM1_state_nxt_partial = _9_SM1_state_nxt_partial;
        _5_SM1_reset_nxt_partial = _8_SM1_reset_nxt_partial;
        _6_SM1_fired_partial = _7_SM1_fired_partial;
      }
      noname = outC->_L5_bremseArretiert_SM1;
      outC->_L3_bremseArretiert_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L2_bremseArretiert_SM1 = kcg_true;
      _2_arretiereBetriebsbremse_partial = outC->_L2_bremseArretiert_SM1;
      _1_cockpitAnzeige_Hold_partial = outC->_L3_bremseArretiert_SM1;
      outC->cockpitAnzeige_Hold = _1_cockpitAnzeige_Hold_partial;
      outC->arretiereBetriebsbremse = _2_arretiereBetriebsbremse_partial;
      outC->aktiviereEPB = _3_aktiviereEPB_partial;
      outC->SM1_state_nxt = _4_SM1_state_nxt_partial;
      break;
    case SSM_st_bremseGeloest_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_bremseGeloest_SM1;
      outC->_L2_bremseGeloest_SM1 = kcg_false;
      aktiviereEPB_partial = outC->_L2_bremseGeloest_SM1;
      outC->_L1_bremseGeloest_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      cockpitAnzeige_Hold_partial = outC->_L1_bremseGeloest_SM1;
      arretiereBetriebsbremse_partial = outC->_L2_bremseGeloest_SM1;
      outC->cockpitAnzeige_Hold = cockpitAnzeige_Hold_partial;
      outC->arretiereBetriebsbremse = arretiereBetriebsbremse_partial;
      outC->aktiviereEPB = aktiviereEPB_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_bremseArretiert_SM1 :
      outC->SM1_reset_nxt = _5_SM1_reset_nxt_partial;
      outC->SM1_fired = _6_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_bremseGeloest_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void autoHold_init_AH_Pkg_subf_Pkg(outC_autoHold_AH_Pkg_subf_Pkg *outC)
{
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L33 = kcg_true;
  outC->_L32 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L14 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L13 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = ahm_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = ahm_off_AhTypes_Pkg_ah_Pkg;
  outC->loeseBremse_loc = kcg_true;
  outC->arretiereBremse_loc = kcg_true;
  outC->SM1_fired = _8_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _8_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_bremseGeloest_SM1;
  outC->SM1_state_sel = SSM_st_bremseGeloest_SM1;
  outC->bremseArretiert_weakb_clock_SM1 = kcg_true;
  outC->_L2_bremseArretiert_SM1 = kcg_true;
  outC->_L3_bremseArretiert_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5_bremseArretiert_SM1 = kcg_true;
  outC->_L4_bremseArretiert_SM1 = kcg_true;
  outC->_L6_bremseArretiert_SM1 = kcg_true;
  outC->_L7_bremseArretiert_SM1 = kcg_true;
  outC->_L8_bremseArretiert_SM1 = kcg_lit_float64(0.0);
  outC->_L10_bremseArretiert_SM1 = kcg_true;
  outC->_L11_bremseArretiert_SM1 = kcg_lit_float64(0.0);
  outC->_L14_bremseArretiert_SM1 = kcg_true;
  outC->_L1_bremseGeloest_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2_bremseGeloest_SM1 = kcg_true;
  outC->init = kcg_true;
  outC->aktiviereEPB = kcg_true;
  outC->arretiereBetriebsbremse = kcg_true;
  outC->cockpitAnzeige_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  /* SM1:bremseArretiert:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:bremseArretiert:_L10=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
  bremspedalDurchgetreten_init_AH_Pkg_subf_Pkg(
    &outC->Context_bremspedalDurchgetreten_2);
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_init_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L6=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#1)/ */
  bremspedalDurchgetreten_init_AH_Pkg_subf_Pkg(
    &outC->_1_Context_bremspedalDurchgetreten_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_bremseGeloest_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void autoHold_reset_AH_Pkg_subf_Pkg(outC_autoHold_AH_Pkg_subf_Pkg *outC)
{
  outC->init = kcg_true;
  /* SM1:bremseArretiert:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:bremseArretiert:_L10=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */
  bremspedalDurchgetreten_reset_AH_Pkg_subf_Pkg(
    &outC->Context_bremspedalDurchgetreten_2);
  /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */
  fahrzeugSteht_reset_AH_Pkg_subf_Pkg(&outC->Context_fahrzeugSteht_1);
  /* _L6=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#1)/ */
  bremspedalDurchgetreten_reset_AH_Pkg_subf_Pkg(
    &outC->_1_Context_bremspedalDurchgetreten_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_bremseGeloest_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** autoHold_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

