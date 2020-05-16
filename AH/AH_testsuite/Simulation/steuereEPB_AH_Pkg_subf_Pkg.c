/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "steuereEPB_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::steuereEPB/ */
void steuereEPB_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktiviereEPB/ */
  kcg_bool aktiviereEPB,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_steuereEPB_AH_Pkg_subf_Pkg *outC)
{
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse_partial;
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg led_P_partial;
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_P_partial;
  /* EPB_SM: */
  SSM_ST_EPB_SM EPB_SM_state_nxt_partial;
  /* EPB_SM: */
  kcg_bool EPB_SM_reset_nxt_partial;
  /* EPB_SM: */
  SSM_TR_EPB_SM EPB_SM_fired_partial;
  kcg_bool noname;
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _1_cockpitAnzeige_P_partial;
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _2_led_P_partial;
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _3_cockpitAnzeige_P_partial;
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _4_led_P_partial;
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg _5_EPB_Bremse_partial;
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _6_led_P_partial;
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg _7_cockpitAnzeige_P_partial;
  /* EPB_SM: */
  SSM_ST_EPB_SM _8_EPB_SM_state_nxt_partial;
  /* EPB_SM: */
  kcg_bool _9_EPB_SM_reset_nxt_partial;
  /* EPB_SM: */
  SSM_TR_EPB_SM _10_EPB_SM_fired_partial;
  /* EPB_SM: */
  SSM_ST_EPB_SM EPB_SM_state_act_partial;
  /* EPB_SM: */
  kcg_bool EPB_SM_reset_act_partial;
  /* EPB_SM: */
  SSM_TR_EPB_SM EPB_SM_fired_strong_partial;
  /* EPB_SM:epb_arretiert:<1> */
  kcg_bool tr_1_guard_epb_arretiert_EPB_SM;
  /* EPB_SM: */
  SSM_ST_EPB_SM _11_EPB_SM_state_act_partial;
  /* EPB_SM: */
  kcg_bool _12_EPB_SM_reset_act_partial;
  /* EPB_SM: */
  SSM_TR_EPB_SM _13_EPB_SM_fired_strong_partial;
  /* EPB_SM:epb_geloest:<1> */
  kcg_bool tr_1_guard_epb_geloest_EPB_SM;
  /* EPB_SM: */
  kcg_bool EPB_SM_reset_sel;
  /* EPB_SM: */
  kcg_bool EPB_SM_reset_prv;

  outC->_L40 = aktiviereEPB;
  outC->EPB_SM_state_sel = outC->EPB_SM_state_nxt;
  outC->_L33 = taste_P;
  /* _L32=(AH_Pkg::subf_Pkg::aktiviereNotbremse#1)/ */
  aktiviereNotbremse_AH_Pkg_subf_Pkg(
    outC->_L33,
    aktZeit,
    &outC->Context_aktiviereNotbremse_1);
  outC->_L32 = outC->Context_aktiviereNotbremse_1.notbremsen;
  outC->_L6 = epbBetriebsmodus;
  outC->_L7 = getriebeWahlhebel;
  /* _L5=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch#1)/ */
  aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
    outC->_L6,
    outC->_L7,
    &outC->Context_aktiviereEpbAutomatisch_1);
  outC->_L5 = outC->Context_aktiviereEpbAutomatisch_1.aktiviereEpb;
  outC->_L2 = taste_P;
  outC->_L3 = zuendschalter;
  outC->_L4 = v_fzg;
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereEpbManuell#1)/ */
  aktiviereEpbManuell_AH_Pkg_subf_Pkg(
    outC->_L2,
    outC->_L3,
    outC->_L4,
    &outC->Context_aktiviereEpbManuell_1);
  outC->_L1 = outC->Context_aktiviereEpbManuell_1.epbAktivieren;
  outC->_L38 = outC->_L1 | outC->_L5 | outC->_L32 | outC->_L40;
  outC->arretiereEPB = outC->_L38;
  switch (outC->EPB_SM_state_sel) {
    case SSM_st_epb_geloest_EPB_SM :
      tr_1_guard_epb_geloest_EPB_SM = outC->arretiereEPB;
      if (tr_1_guard_epb_geloest_EPB_SM) {
        _11_EPB_SM_state_act_partial = SSM_st_epb_arretiert_EPB_SM;
      }
      else {
        _11_EPB_SM_state_act_partial = SSM_st_epb_geloest_EPB_SM;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L22 = epbBetriebsmodus;
  outC->_L25 = getriebeWahlhebel;
  outC->_L30 = zuendschalter;
  outC->_L28 = fahrertuerSchalter;
  outC->_L24 = sicherheitsgurtSchalter;
  outC->_L29 = gaspedalStellung;
  /* _L23=(AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch#2)/ */
  deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
    outC->_L22,
    outC->_L25,
    outC->_L30,
    outC->_L28,
    outC->_L24,
    outC->_L29,
    &outC->Context_deaktiviereEpbAutomatisch_2);
  outC->_L23 = outC->Context_deaktiviereEpbAutomatisch_2.deaktiviereEpb;
  outC->_L20 = taste_P;
  outC->_L26 = zuendschalter;
  outC->_L21 = bremspedalKraft;
  outC->_L27 = v_fzg;
  /* _L31=(AH_Pkg::subf_Pkg::deaktiviereEpbManuell#2)/ */
  deaktiviereEpbManuell_AH_Pkg_subf_Pkg(
    outC->_L20,
    outC->_L26,
    outC->_L21,
    outC->_L27,
    &outC->Context_deaktiviereEpbManuell_2);
  outC->_L31 = outC->Context_deaktiviereEpbManuell_2.epbDeaktivieren;
  outC->_L39 = outC->_L31 | outC->_L23;
  outC->loeseEPB = outC->_L39;
  /* EPB_SM: */
  switch (outC->EPB_SM_state_sel) {
    case SSM_st_epb_geloest_EPB_SM :
      outC->EPB_SM_state_act = _11_EPB_SM_state_act_partial;
      if (tr_1_guard_epb_geloest_EPB_SM) {
        _13_EPB_SM_fired_strong_partial =
          SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM;
      }
      else {
        _13_EPB_SM_fired_strong_partial = SSM_TR_no_trans_EPB_SM;
      }
      outC->EPB_SM_fired_strong = _13_EPB_SM_fired_strong_partial;
      break;
    case SSM_st_epb_arretiert_EPB_SM :
      tr_1_guard_epb_arretiert_EPB_SM = outC->loeseEPB & (!outC->arretiereEPB);
      if (tr_1_guard_epb_arretiert_EPB_SM) {
        EPB_SM_state_act_partial = SSM_st_epb_geloest_EPB_SM;
      }
      else {
        EPB_SM_state_act_partial = SSM_st_epb_arretiert_EPB_SM;
      }
      outC->EPB_SM_state_act = EPB_SM_state_act_partial;
      if (tr_1_guard_epb_arretiert_EPB_SM) {
        EPB_SM_fired_strong_partial =
          SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM;
      }
      else {
        EPB_SM_fired_strong_partial = SSM_TR_no_trans_EPB_SM;
      }
      outC->EPB_SM_fired_strong = EPB_SM_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->EPB_SM_state_act) {
    case SSM_st_epb_geloest_EPB_SM :
      _10_EPB_SM_fired_partial = outC->EPB_SM_fired_strong;
      _9_EPB_SM_reset_nxt_partial = kcg_false;
      _8_EPB_SM_state_nxt_partial = SSM_st_epb_geloest_EPB_SM;
      outC->_L4_epb_geloest_EPB_SM = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L3_epb_geloest_EPB_SM = sw2_off_AhTypes_Pkg_ah_Pkg;
      _6_led_P_partial = outC->_L3_epb_geloest_EPB_SM;
      _5_EPB_Bremse_partial = outC->_L4_epb_geloest_EPB_SM;
      _7_cockpitAnzeige_P_partial = outC->_L3_epb_geloest_EPB_SM;
      break;
    case SSM_st_epb_arretiert_EPB_SM :
      EPB_SM_fired_partial = outC->EPB_SM_fired_strong;
      EPB_SM_reset_nxt_partial = kcg_false;
      EPB_SM_state_nxt_partial = SSM_st_epb_arretiert_EPB_SM;
      outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM = zuendschalter;
      switch (outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM) {
        case sw2_off_AhTypes_Pkg_ah_Pkg :
          outC->_L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  EPB_SM_reset_prv = outC->EPB_SM_reset_act;
  /* EPB_SM: */
  switch (outC->EPB_SM_state_sel) {
    case SSM_st_epb_geloest_EPB_SM :
      _12_EPB_SM_reset_act_partial = tr_1_guard_epb_geloest_EPB_SM;
      outC->EPB_SM_reset_act = _12_EPB_SM_reset_act_partial;
      break;
    case SSM_st_epb_arretiert_EPB_SM :
      EPB_SM_reset_act_partial = tr_1_guard_epb_arretiert_EPB_SM;
      outC->EPB_SM_reset_act = EPB_SM_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* EPB_SM: */
  switch (outC->EPB_SM_state_act) {
    case SSM_st_epb_geloest_EPB_SM :
      outC->EPB_Bremse = _5_EPB_Bremse_partial;
      outC->led_P = _6_led_P_partial;
      outC->cockpitAnzeige_P = _7_cockpitAnzeige_P_partial;
      outC->EPB_SM_state_nxt = _8_EPB_SM_state_nxt_partial;
      break;
    case SSM_st_epb_arretiert_EPB_SM :
      if (outC->EPB_SM_reset_act) {
        outC->init = kcg_true;
      }
      switch (outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM) {
        case sw2_off_AhTypes_Pkg_ah_Pkg :
          /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L6= */
          if (outC->init) {
            outC->_L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_true;
          }
          else {
            outC->_L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
              outC->_L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          }
          outC->_L8_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = aktZeit;
          break;
        default :
          /* this branch is empty */
          break;
      }
      if (outC->EPB_SM_reset_act) {
        /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_1);
      }
      /* EPB_SM:epb_arretiert:ZuendschalterWhen: */
      switch (outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM) {
        case sw2_on_AhTypes_Pkg_ah_Pkg :
          outC->_L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM =
            sw2_on_AhTypes_Pkg_ah_Pkg;
          _4_led_P_partial = outC->_L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM;
          _3_cockpitAnzeige_P_partial =
            outC->_L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM;
          led_P_partial = _4_led_P_partial;
          cockpitAnzeige_P_partial = _3_cockpitAnzeige_P_partial;
          break;
        case sw2_off_AhTypes_Pkg_ah_Pkg :
          /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
          countDownTimer_AhTypes_Pkg_utils_Pkg(
            outC->_L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM,
            outC->_L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM,
            outC->_L8_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM,
            cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg,
            &outC->Context_countDownTimer_1);
          outC->_L3_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
            outC->Context_countDownTimer_1.abgelaufen;
          outC->_L4_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
            outC->Context_countDownTimer_1.laufend;
          noname = outC->_L4_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          outC->_L1_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
            sw2_on_AhTypes_Pkg_ah_Pkg;
          outC->_L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
            sw2_off_AhTypes_Pkg_ah_Pkg;
          /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L9= */
          if (outC->_L3_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM) {
            outC->_L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
              outC->_L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          }
          else {
            outC->_L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
              outC->_L1_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          }
          _2_led_P_partial = outC->_L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          _1_cockpitAnzeige_P_partial =
            outC->_L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
          led_P_partial = _2_led_P_partial;
          cockpitAnzeige_P_partial = _1_cockpitAnzeige_P_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      outC->_L1_epb_arretiert_EPB_SM = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      EPB_Bremse_partial = outC->_L1_epb_arretiert_EPB_SM;
      outC->EPB_Bremse = EPB_Bremse_partial;
      outC->led_P = led_P_partial;
      outC->cockpitAnzeige_P = cockpitAnzeige_P_partial;
      outC->EPB_SM_state_nxt = EPB_SM_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  EPB_SM_reset_sel = outC->EPB_SM_reset_nxt;
  /* EPB_SM: */
  switch (outC->EPB_SM_state_act) {
    case SSM_st_epb_geloest_EPB_SM :
      outC->EPB_SM_reset_nxt = _9_EPB_SM_reset_nxt_partial;
      outC->EPB_SM_fired = _10_EPB_SM_fired_partial;
      break;
    case SSM_st_epb_arretiert_EPB_SM :
      outC->EPB_SM_reset_nxt = EPB_SM_reset_nxt_partial;
      outC->EPB_SM_fired = EPB_SM_fired_partial;
      switch (outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM) {
        case sw2_off_AhTypes_Pkg_ah_Pkg :
          outC->init = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void steuereEPB_init_AH_Pkg_subf_Pkg(outC_steuereEPB_AH_Pkg_subf_Pkg *outC)
{
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L33 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L32 = kcg_true;
  outC->_L20 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L22 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = kcg_true;
  outC->_L24 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L25 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L26 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L30 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L31 = kcg_true;
  outC->_L7 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = kcg_true;
  outC->arretiereEPB = kcg_true;
  outC->loeseEPB = kcg_true;
  outC->EPB_SM_fired = SSM_TR_no_trans_EPB_SM;
  outC->EPB_SM_fired_strong = SSM_TR_no_trans_EPB_SM;
  outC->EPB_SM_state_act = SSM_st_epb_arretiert_EPB_SM;
  outC->EPB_SM_state_sel = SSM_st_epb_arretiert_EPB_SM;
  outC->_L3_epb_geloest_EPB_SM = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4_epb_geloest_EPB_SM = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM =
    sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
    sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L8_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_lit_float64(0.0);
  outC->_L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_true;
  outC->_L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_true;
  outC->_L3_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_true;
  outC->_L4_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM = kcg_true;
  outC->_L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
    sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM =
    sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->ZuendschalterWhen_clock_epb_arretiert_EPB_SM = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1_epb_arretiert_EPB_SM = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->init = kcg_true;
  outC->cockpitAnzeige_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->led_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->EPB_Bremse = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L31=(AH_Pkg::subf_Pkg::deaktiviereEpbManuell#2)/ */
  deaktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereEpbManuell_2);
  /* _L23=(AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch#2)/ */
  deaktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereEpbAutomatisch_2);
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereEpbManuell#1)/ */
  aktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbManuell_1);
  /* _L5=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch#1)/ */
  aktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbAutomatisch_1);
  /* _L32=(AH_Pkg::subf_Pkg::aktiviereNotbremse#1)/ */
  aktiviereNotbremse_init_AH_Pkg_subf_Pkg(&outC->Context_aktiviereNotbremse_1);
  outC->EPB_SM_reset_nxt = kcg_false;
  outC->EPB_SM_reset_act = kcg_false;
  outC->EPB_SM_state_nxt = SSM_st_epb_arretiert_EPB_SM;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void steuereEPB_reset_AH_Pkg_subf_Pkg(outC_steuereEPB_AH_Pkg_subf_Pkg *outC)
{
  outC->init = kcg_true;
  /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* _L31=(AH_Pkg::subf_Pkg::deaktiviereEpbManuell#2)/ */
  deaktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereEpbManuell_2);
  /* _L23=(AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch#2)/ */
  deaktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereEpbAutomatisch_2);
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereEpbManuell#1)/ */
  aktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbManuell_1);
  /* _L5=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch#1)/ */
  aktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbAutomatisch_1);
  /* _L32=(AH_Pkg::subf_Pkg::aktiviereNotbremse#1)/ */
  aktiviereNotbremse_reset_AH_Pkg_subf_Pkg(&outC->Context_aktiviereNotbremse_1);
  outC->EPB_SM_reset_nxt = kcg_false;
  outC->EPB_SM_reset_act = kcg_false;
  outC->EPB_SM_state_nxt = SSM_st_epb_arretiert_EPB_SM;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** steuereEPB_AH_Pkg_subf_Pkg.c
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

