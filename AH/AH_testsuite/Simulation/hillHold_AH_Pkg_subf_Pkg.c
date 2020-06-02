/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "hillHold_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::hillHold/ */
void hillHold_AH_Pkg_subf_Pkg(
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
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_hillHold_AH_Pkg_subf_Pkg *outC)
{
  /* betriebsbremsSperrventil/ */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg betriebsbremsSperrventil_partial;
  /* SM1: */
  _6_SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 SM1_fired_partial;
  /* betriebsbremsSperrventil/ */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg _1_betriebsbremsSperrventil_partial;
  /* SM1: */
  _6_SSM_ST_SM1 _2_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _3_SM1_reset_nxt_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _4_SM1_fired_partial;
  /* SM1: */
  _6_SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:hillHold_inaktiv:<1> */
  kcg_bool tr_1_guard_hillHold_inaktiv_SM1;
  /* SM1: */
  _6_SSM_ST_SM1 _5_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _6_SM1_reset_act_partial;
  /* SM1: */
  _7_SSM_TR_SM1 _7_SM1_fired_strong_partial;
  /* SM1:hilllHold_aktiv:<1> */
  kcg_bool tr_1_guard_hilllHold_aktiv_SM1;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->_L27 = fzgLaengsNeigung;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->_L20 = zuendschalter;
  outC->_L21 = getriebeWahlhebel;
  outC->_L22 = bremspedalKraft;
  outC->_L23 = gaspedalStellung;
  outC->_L25 = EPB_Bremse;
  outC->_L26 = fzgLaengsNeigung;
  /* _L2=(AH_Pkg::subf_Pkg::deaktiviereHillHold#1)/ */
  deaktiviereHillHold_AH_Pkg_subf_Pkg(
    outC->_L20,
    outC->_L21,
    outC->_L22,
    outC->_L23,
    outC->_L25,
    outC->_L26,
    aktZeit,
    &outC->Context_deaktiviereHillHold_1);
  outC->_L2 = outC->Context_deaktiviereHillHold_1.deaktiviere;
  outC->deaktiviere = outC->_L2;
  switch (outC->SM1_state_sel) {
    case SSM_st_hilllHold_aktiv_SM1 :
      tr_1_guard_hilllHold_aktiv_SM1 = outC->deaktiviere;
      if (tr_1_guard_hilllHold_aktiv_SM1) {
        _5_SM1_state_act_partial = SSM_st_hillHold_inaktiv_SM1;
      }
      else {
        _5_SM1_state_act_partial = SSM_st_hilllHold_aktiv_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->_L8 = zuendschalter;
  outC->_L9 = getriebeWahlhebel;
  outC->_L10 = bremspedalKraft;
  outC->_L11 = gaspedalStellung;
  outC->_L12 = v_fzg;
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereHillHold#1)/ */
  aktiviereHillHold_AH_Pkg_subf_Pkg(
    outC->_L8,
    outC->_L9,
    outC->_L10,
    outC->_L11,
    outC->_L12,
    outC->_L27,
    &outC->Context_aktiviereHillHold_1);
  outC->_L1 = outC->Context_aktiviereHillHold_1.aktiviere;
  outC->aktiviere = outC->_L1;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_hilllHold_aktiv_SM1 :
      outC->SM1_state_act = _5_SM1_state_act_partial;
      if (tr_1_guard_hilllHold_aktiv_SM1) {
        _7_SM1_fired_strong_partial =
          SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1;
      }
      else {
        _7_SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _7_SM1_fired_strong_partial;
      break;
    case SSM_st_hillHold_inaktiv_SM1 :
      tr_1_guard_hillHold_inaktiv_SM1 = outC->aktiviere;
      if (tr_1_guard_hillHold_inaktiv_SM1) {
        SM1_state_act_partial = SSM_st_hilllHold_aktiv_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_hillHold_inaktiv_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      if (tr_1_guard_hillHold_inaktiv_SM1) {
        SM1_fired_strong_partial =
          SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1;
      }
      else {
        SM1_fired_strong_partial = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_hilllHold_aktiv_SM1 :
      _4_SM1_fired_partial = outC->SM1_fired_strong;
      _3_SM1_reset_nxt_partial = kcg_false;
      _2_SM1_state_nxt_partial = SSM_st_hilllHold_aktiv_SM1;
      outC->_L1_hilllHold_aktiv_SM1 = bbs_gesperrt_AhTypes_Pkg_ah_Pkg;
      _1_betriebsbremsSperrventil_partial = outC->_L1_hilllHold_aktiv_SM1;
      outC->betriebsbremsSperrventil = _1_betriebsbremsSperrventil_partial;
      outC->SM1_state_nxt = _2_SM1_state_nxt_partial;
      break;
    case SSM_st_hillHold_inaktiv_SM1 :
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_hillHold_inaktiv_SM1;
      outC->_L1_hillHold_inaktiv_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
      betriebsbremsSperrventil_partial = outC->_L1_hillHold_inaktiv_SM1;
      outC->betriebsbremsSperrventil = betriebsbremsSperrventil_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_hilllHold_aktiv_SM1 :
      outC->SM1_reset_nxt = _3_SM1_reset_nxt_partial;
      outC->SM1_fired = _4_SM1_fired_partial;
      break;
    case SSM_st_hillHold_inaktiv_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_hilllHold_aktiv_SM1 :
      _6_SM1_reset_act_partial = tr_1_guard_hilllHold_aktiv_SM1;
      break;
    case SSM_st_hillHold_inaktiv_SM1 :
      SM1_reset_act_partial = tr_1_guard_hillHold_inaktiv_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_hilllHold_aktiv_SM1 :
      outC->SM1_reset_act = _6_SM1_reset_act_partial;
      break;
    case SSM_st_hillHold_inaktiv_SM1 :
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void hillHold_init_AH_Pkg_subf_Pkg(outC_hillHold_AH_Pkg_subf_Pkg *outC)
{
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L20 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L8 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->deaktiviere = kcg_true;
  outC->aktiviere = kcg_true;
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_hillHold_inaktiv_SM1;
  outC->SM1_state_sel = SSM_st_hillHold_inaktiv_SM1;
  outC->_L1_hilllHold_aktiv_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L1_hillHold_inaktiv_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->betriebsbremsSperrventil = bbs_frei_AhTypes_Pkg_ah_Pkg;
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereHillHold#1)/ */
  aktiviereHillHold_init_AH_Pkg_subf_Pkg(&outC->Context_aktiviereHillHold_1);
  /* _L2=(AH_Pkg::subf_Pkg::deaktiviereHillHold#1)/ */
  deaktiviereHillHold_init_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereHillHold_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_hillHold_inaktiv_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void hillHold_reset_AH_Pkg_subf_Pkg(outC_hillHold_AH_Pkg_subf_Pkg *outC)
{
  /* _L1=(AH_Pkg::subf_Pkg::aktiviereHillHold#1)/ */
  aktiviereHillHold_reset_AH_Pkg_subf_Pkg(&outC->Context_aktiviereHillHold_1);
  /* _L2=(AH_Pkg::subf_Pkg::deaktiviereHillHold#1)/ */
  deaktiviereHillHold_reset_AH_Pkg_subf_Pkg(
    &outC->Context_deaktiviereHillHold_1);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_hillHold_inaktiv_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** hillHold_AH_Pkg_subf_Pkg.c
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

