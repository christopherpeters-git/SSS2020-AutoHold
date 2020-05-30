/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ */
void bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg(
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
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC)
{
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus_partial;
  /* automatikAnzeigen/ */
  kcg_bool automatikAnzeigen_partial;
  /* manuellAnzeigen/ */
  kcg_bool manuellAnzeigen_partial;
  /* SM_Betriebsmodus: */
  SSM_ST_SM_Betriebsmodus SM_Betriebsmodus_state_nxt_partial;
  /* SM_Betriebsmodus: */
  kcg_bool SM_Betriebsmodus_reset_nxt_partial;
  /* SM_Betriebsmodus: */
  SSM_TR_SM_Betriebsmodus SM_Betriebsmodus_fired_partial;
  kcg_bool noname;
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg _1_epbBetriebsmodus_partial;
  /* automatikAnzeigen/ */
  kcg_bool _2_automatikAnzeigen_partial;
  /* manuellAnzeigen/ */
  kcg_bool _3_manuellAnzeigen_partial;
  /* SM_Betriebsmodus: */
  SSM_ST_SM_Betriebsmodus _4_SM_Betriebsmodus_state_nxt_partial;
  /* SM_Betriebsmodus: */
  kcg_bool _5_SM_Betriebsmodus_reset_nxt_partial;
  /* SM_Betriebsmodus: */
  SSM_TR_SM_Betriebsmodus _6_SM_Betriebsmodus_fired_partial;
  kcg_bool _7_noname;
  /* SM_Betriebsmodus: */
  SSM_ST_SM_Betriebsmodus SM_Betriebsmodus_state_act_partial;
  /* SM_Betriebsmodus: */
  kcg_bool SM_Betriebsmodus_reset_act_partial;
  /* SM_Betriebsmodus: */
  SSM_TR_SM_Betriebsmodus SM_Betriebsmodus_fired_strong_partial;
  /* SM_Betriebsmodus:automatikModus:<1> */
  kcg_bool tr_1_guard_automatikModus_SM_Betriebsmodus;
  /* SM_Betriebsmodus: */
  SSM_ST_SM_Betriebsmodus _8_SM_Betriebsmodus_state_act_partial;
  /* SM_Betriebsmodus: */
  kcg_bool _9_SM_Betriebsmodus_reset_act_partial;
  /* SM_Betriebsmodus: */
  SSM_TR_SM_Betriebsmodus _10_SM_Betriebsmodus_fired_strong_partial;
  /* SM_Betriebsmodus:manuellerModus:<1> */
  kcg_bool tr_1_guard_manuellerModus_SM_Betriebsmodus;
  /* SM_Betriebsmodus: */
  kcg_bool SM_Betriebsmodus_reset_sel;
  /* SM_Betriebsmodus: */
  kcg_bool SM_Betriebsmodus_reset_prv;

  outC->_L51 = taste_P;
  outC->_L52 = zuendschalter;
  outC->_L53 = bremspedalKraft;
  outC->_L54 = v_fzg;
  /* _L43=(AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus#1)/ */
  aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg(
    outC->_L51,
    outC->_L52,
    outC->_L53,
    outC->_L54,
    aktZeit,
    &outC->Context_aktiviereEpbManuellenModus_1);
  outC->_L43 = outC->Context_aktiviereEpbManuellenModus_1.aktivieren;
  outC->manuellAktivieren = outC->_L43;
  outC->_L47 = taste_P;
  outC->_L48 = zuendschalter;
  outC->_L49 = bremspedalKraft;
  outC->_L50 = v_fzg;
  /* _L44=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus#1)/ */
  aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg(
    outC->_L47,
    outC->_L48,
    outC->_L49,
    outC->_L50,
    aktZeit,
    &outC->Context_aktiviereEpbAutomatikModus_1);
  outC->_L44 = outC->Context_aktiviereEpbAutomatikModus_1.aktivieren;
  outC->automatikAktivieren = outC->_L44;
  outC->SM_Betriebsmodus_state_sel = outC->SM_Betriebsmodus_state_nxt;
  /* SM_Betriebsmodus: */
  switch (outC->SM_Betriebsmodus_state_sel) {
    case SSM_st_manuellerModus_SM_Betriebsmodus :
      tr_1_guard_manuellerModus_SM_Betriebsmodus = outC->automatikAktivieren;
      if (tr_1_guard_manuellerModus_SM_Betriebsmodus) {
        _8_SM_Betriebsmodus_state_act_partial = SSM_st_automatikModus_SM_Betriebsmodus;
      }
      else {
        _8_SM_Betriebsmodus_state_act_partial = SSM_st_manuellerModus_SM_Betriebsmodus;
      }
      outC->SM_Betriebsmodus_state_act = _8_SM_Betriebsmodus_state_act_partial;
      if (tr_1_guard_manuellerModus_SM_Betriebsmodus) {
        _10_SM_Betriebsmodus_fired_strong_partial =
          SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus;
      }
      else {
        _10_SM_Betriebsmodus_fired_strong_partial = SSM_TR_no_trans_SM_Betriebsmodus;
      }
      outC->SM_Betriebsmodus_fired_strong = _10_SM_Betriebsmodus_fired_strong_partial;
      break;
    case SSM_st_automatikModus_SM_Betriebsmodus :
      tr_1_guard_automatikModus_SM_Betriebsmodus = outC->manuellAktivieren;
      if (tr_1_guard_automatikModus_SM_Betriebsmodus) {
        SM_Betriebsmodus_state_act_partial = SSM_st_manuellerModus_SM_Betriebsmodus;
      }
      else {
        SM_Betriebsmodus_state_act_partial = SSM_st_automatikModus_SM_Betriebsmodus;
      }
      outC->SM_Betriebsmodus_state_act = SM_Betriebsmodus_state_act_partial;
      if (tr_1_guard_automatikModus_SM_Betriebsmodus) {
        SM_Betriebsmodus_fired_strong_partial =
          SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus;
      }
      else {
        SM_Betriebsmodus_fired_strong_partial = SSM_TR_no_trans_SM_Betriebsmodus;
      }
      outC->SM_Betriebsmodus_fired_strong = SM_Betriebsmodus_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM_Betriebsmodus_state_act) {
    case SSM_st_manuellerModus_SM_Betriebsmodus :
      _6_SM_Betriebsmodus_fired_partial = outC->SM_Betriebsmodus_fired_strong;
      _5_SM_Betriebsmodus_reset_nxt_partial = kcg_false;
      _4_SM_Betriebsmodus_state_nxt_partial = SSM_st_manuellerModus_SM_Betriebsmodus;
      outC->_L9_manuellerModus_SM_Betriebsmodus = kcg_false;
      outC->_L2_manuellerModus_SM_Betriebsmodus = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM_Betriebsmodus_reset_prv = outC->SM_Betriebsmodus_reset_act;
  /* SM_Betriebsmodus: */
  switch (outC->SM_Betriebsmodus_state_sel) {
    case SSM_st_manuellerModus_SM_Betriebsmodus :
      _9_SM_Betriebsmodus_reset_act_partial =
        tr_1_guard_manuellerModus_SM_Betriebsmodus;
      outC->SM_Betriebsmodus_reset_act = _9_SM_Betriebsmodus_reset_act_partial;
      break;
    case SSM_st_automatikModus_SM_Betriebsmodus :
      SM_Betriebsmodus_reset_act_partial = tr_1_guard_automatikModus_SM_Betriebsmodus;
      outC->SM_Betriebsmodus_reset_act = SM_Betriebsmodus_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM_Betriebsmodus: */
  switch (outC->SM_Betriebsmodus_state_act) {
    case SSM_st_manuellerModus_SM_Betriebsmodus :
      if (outC->SM_Betriebsmodus_reset_act) {
        outC->init = kcg_true;
      }
      /* SM_Betriebsmodus:manuellerModus:_L1= */
      if (outC->init) {
        outC->_L1_manuellerModus_SM_Betriebsmodus = kcg_true;
      }
      else {
        outC->_L1_manuellerModus_SM_Betriebsmodus =
          outC->_L2_manuellerModus_SM_Betriebsmodus;
      }
      outC->_L3_manuellerModus_SM_Betriebsmodus = aktZeit;
      outC->_L8_manuellerModus_SM_Betriebsmodus = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      if (outC->SM_Betriebsmodus_reset_act) {
        /* SM_Betriebsmodus:manuellerModus:_L5=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_3);
      }
      /* SM_Betriebsmodus:manuellerModus:_L5=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L1_manuellerModus_SM_Betriebsmodus,
        outC->_L2_manuellerModus_SM_Betriebsmodus,
        outC->_L3_manuellerModus_SM_Betriebsmodus,
        outC->_L8_manuellerModus_SM_Betriebsmodus,
        &outC->Context_countDownTimer_3);
      outC->_L5_manuellerModus_SM_Betriebsmodus =
        outC->Context_countDownTimer_3.abgelaufen;
      outC->_L6_manuellerModus_SM_Betriebsmodus =
        outC->Context_countDownTimer_3.laufend;
      _3_manuellAnzeigen_partial = outC->_L6_manuellerModus_SM_Betriebsmodus;
      _7_noname = outC->_L5_manuellerModus_SM_Betriebsmodus;
      outC->_L4_manuellerModus_SM_Betriebsmodus = epbModus_manuell_AhTypes_Pkg_ah_Pkg;
      _2_automatikAnzeigen_partial = outC->_L9_manuellerModus_SM_Betriebsmodus;
      _1_epbBetriebsmodus_partial = outC->_L4_manuellerModus_SM_Betriebsmodus;
      outC->epbBetriebsmodus = _1_epbBetriebsmodus_partial;
      outC->automatikAnzeigen = _2_automatikAnzeigen_partial;
      outC->manuellAnzeigen = _3_manuellAnzeigen_partial;
      outC->SM_Betriebsmodus_state_nxt = _4_SM_Betriebsmodus_state_nxt_partial;
      break;
    case SSM_st_automatikModus_SM_Betriebsmodus :
      SM_Betriebsmodus_fired_partial = outC->SM_Betriebsmodus_fired_strong;
      SM_Betriebsmodus_reset_nxt_partial = kcg_false;
      SM_Betriebsmodus_state_nxt_partial = SSM_st_automatikModus_SM_Betriebsmodus;
      outC->_L10_automatikModus_SM_Betriebsmodus = kcg_false;
      manuellAnzeigen_partial = outC->_L10_automatikModus_SM_Betriebsmodus;
      outC->_L6_automatikModus_SM_Betriebsmodus = kcg_false;
      if (outC->SM_Betriebsmodus_reset_act) {
        outC->init1 = kcg_true;
      }
      /* SM_Betriebsmodus:automatikModus:_L8= */
      if (outC->init1) {
        outC->_L8_automatikModus_SM_Betriebsmodus = kcg_true;
      }
      else {
        outC->_L8_automatikModus_SM_Betriebsmodus =
          outC->_L6_automatikModus_SM_Betriebsmodus;
      }
      outC->_L5_automatikModus_SM_Betriebsmodus = aktZeit;
      outC->_L9_automatikModus_SM_Betriebsmodus = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      if (outC->SM_Betriebsmodus_reset_act) {
        /* SM_Betriebsmodus:automatikModus:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_2);
      }
      /* SM_Betriebsmodus:automatikModus:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_automatikModus_SM_Betriebsmodus,
        outC->_L6_automatikModus_SM_Betriebsmodus,
        outC->_L5_automatikModus_SM_Betriebsmodus,
        outC->_L9_automatikModus_SM_Betriebsmodus,
        &outC->Context_countDownTimer_2);
      outC->_L3_automatikModus_SM_Betriebsmodus =
        outC->Context_countDownTimer_2.abgelaufen;
      outC->_L4_automatikModus_SM_Betriebsmodus =
        outC->Context_countDownTimer_2.laufend;
      noname = outC->_L3_automatikModus_SM_Betriebsmodus;
      automatikAnzeigen_partial = outC->_L4_automatikModus_SM_Betriebsmodus;
      outC->_L1_automatikModus_SM_Betriebsmodus =
        epbModus_automatik_AhTypes_Pkg_ah_Pkg;
      epbBetriebsmodus_partial = outC->_L1_automatikModus_SM_Betriebsmodus;
      outC->epbBetriebsmodus = epbBetriebsmodus_partial;
      outC->automatikAnzeigen = automatikAnzeigen_partial;
      outC->manuellAnzeigen = manuellAnzeigen_partial;
      outC->SM_Betriebsmodus_state_nxt = SM_Betriebsmodus_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM_Betriebsmodus_reset_sel = outC->SM_Betriebsmodus_reset_nxt;
  /* SM_Betriebsmodus: */
  switch (outC->SM_Betriebsmodus_state_act) {
    case SSM_st_manuellerModus_SM_Betriebsmodus :
      outC->SM_Betriebsmodus_reset_nxt = _5_SM_Betriebsmodus_reset_nxt_partial;
      outC->SM_Betriebsmodus_fired = _6_SM_Betriebsmodus_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_automatikModus_SM_Betriebsmodus :
      outC->SM_Betriebsmodus_reset_nxt = SM_Betriebsmodus_reset_nxt_partial;
      outC->SM_Betriebsmodus_fired = SM_Betriebsmodus_fired_partial;
      outC->init1 = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void bestimmeEpbBetriebsmodus_init_AH_Pkg_subf_Pkg(
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC)
{
  outC->_L54 = kcg_lit_float64(0.0);
  outC->_L53 = kcg_lit_float64(0.0);
  outC->_L52 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L51 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L50 = kcg_lit_float64(0.0);
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L48 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L47 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->manuellAktivieren = kcg_true;
  outC->automatikAktivieren = kcg_true;
  outC->SM_Betriebsmodus_fired = SSM_TR_no_trans_SM_Betriebsmodus;
  outC->SM_Betriebsmodus_fired_strong = SSM_TR_no_trans_SM_Betriebsmodus;
  outC->SM_Betriebsmodus_state_act = SSM_st_automatikModus_SM_Betriebsmodus;
  outC->SM_Betriebsmodus_state_sel = SSM_st_automatikModus_SM_Betriebsmodus;
  outC->_L8_manuellerModus_SM_Betriebsmodus = kcg_lit_float64(0.0);
  outC->_L5_manuellerModus_SM_Betriebsmodus = kcg_true;
  outC->_L6_manuellerModus_SM_Betriebsmodus = kcg_true;
  outC->_L4_manuellerModus_SM_Betriebsmodus =
    epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L3_manuellerModus_SM_Betriebsmodus = kcg_lit_float64(0.0);
  outC->_L2_manuellerModus_SM_Betriebsmodus = kcg_true;
  outC->_L1_manuellerModus_SM_Betriebsmodus = kcg_true;
  outC->_L9_manuellerModus_SM_Betriebsmodus = kcg_true;
  outC->_L1_automatikModus_SM_Betriebsmodus =
    epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L4_automatikModus_SM_Betriebsmodus = kcg_true;
  outC->_L3_automatikModus_SM_Betriebsmodus = kcg_true;
  outC->_L5_automatikModus_SM_Betriebsmodus = kcg_lit_float64(0.0);
  outC->_L6_automatikModus_SM_Betriebsmodus = kcg_true;
  outC->_L8_automatikModus_SM_Betriebsmodus = kcg_true;
  outC->_L9_automatikModus_SM_Betriebsmodus = kcg_lit_float64(0.0);
  outC->_L10_automatikModus_SM_Betriebsmodus = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  outC->manuellAnzeigen = kcg_true;
  outC->automatikAnzeigen = kcg_true;
  outC->epbBetriebsmodus = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  /* SM_Betriebsmodus:automatikModus:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM_Betriebsmodus:manuellerModus:_L5=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* _L44=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus#1)/ */
  aktiviereEpbAutomatikModus_init_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbAutomatikModus_1);
  /* _L43=(AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus#1)/ */
  aktiviereEpbManuellenModus_init_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbManuellenModus_1);
  outC->SM_Betriebsmodus_reset_nxt = kcg_false;
  outC->SM_Betriebsmodus_reset_act = kcg_false;
  outC->SM_Betriebsmodus_state_nxt = SSM_st_automatikModus_SM_Betriebsmodus;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void bestimmeEpbBetriebsmodus_reset_AH_Pkg_subf_Pkg(
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC)
{
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM_Betriebsmodus:automatikModus:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM_Betriebsmodus:manuellerModus:_L5=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* _L44=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus#1)/ */
  aktiviereEpbAutomatikModus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbAutomatikModus_1);
  /* _L43=(AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus#1)/ */
  aktiviereEpbManuellenModus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_aktiviereEpbManuellenModus_1);
  outC->SM_Betriebsmodus_reset_nxt = kcg_false;
  outC->SM_Betriebsmodus_reset_act = kcg_false;
  outC->SM_Betriebsmodus_state_nxt = SSM_st_automatikModus_SM_Betriebsmodus;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

