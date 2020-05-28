/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EpbCtrl_AH_Pkg_main_Pkg.h"

/* AH_Pkg::main_Pkg::EpbCtrl/ */
void EpbCtrl_AH_Pkg_main_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_EpbCtrl_AH_Pkg_main_Pkg *outC)
{
  outC->_L83 = bremspedalKraft;
  outC->Init_MemoryBasic_1_float64 = outC->_L83;
  outC->_L7_MemoryBasic_1_float64 = outC->Init_MemoryBasic_1_float64;
  /* @1/_L6= */
  if (outC->init) {
    outC->_L6_MemoryBasic_1_float64 = outC->_L7_MemoryBasic_1_float64;
  }
  else {
    outC->_L6_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  }
  outC->_L88 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L70 = zuendschalter;
  outC->_L71 = getriebeWahlhebel;
  outC->_L72 = bremspedalKraft;
  outC->_L73 = gaspedalStellung;
  outC->_L74 = v_fzg;
  outC->_L46 = zuendschalter;
  outC->_L47 = fahrertuerSchalter;
  outC->_L48 = sicherheitsgurtSchalter;
  outC->_L49 = getriebeWahlhebel;
  outC->_L50 = gaspedalStellung;
  outC->_L42 = taste_P;
  outC->_L43 = zuendschalter;
  outC->_L44 = bremspedalKraft;
  outC->_L45 = v_fzg;
  /* _L35=(AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus#1)/ */
  bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg(
    outC->_L42,
    outC->_L43,
    outC->_L44,
    outC->_L45,
    aktZeit,
    &outC->Context_bestimmeEpbBetriebsmodus_1);
  outC->_L35 = outC->Context_bestimmeEpbBetriebsmodus_1.epbBetriebsmodus;
  outC->_L36 = outC->Context_bestimmeEpbBetriebsmodus_1.automatikAnzeigen;
  outC->_L37 = outC->Context_bestimmeEpbBetriebsmodus_1.manuellAnzeigen;
  outC->_L51 = bremspedalKraft;
  outC->_L52 = taste_P;
  outC->_L53 = v_fzg;
  outC->_L58 = zuendschalter;
  outC->_L59 = fahrertuerSchalter;
  outC->_L60 = sicherheitsgurtSchalter;
  outC->_L61 = getriebeWahlhebel;
  outC->_L62 = bremspedalKraft;
  outC->_L63 = v_fzg;
  outC->_L64 = taste_Hold;
  /* _L56=(AH_Pkg::subf_Pkg::bestimmeAutoHoldModus#1)/ */
  bestimmeAutoHoldModus_AH_Pkg_subf_Pkg(
    outC->_L58,
    outC->_L59,
    outC->_L60,
    outC->_L61,
    outC->_L62,
    outC->_L63,
    outC->_L64,
    &outC->Context_bestimmeAutoHoldModus_1);
  outC->_L56 = outC->Context_bestimmeAutoHoldModus_1.modus;
  outC->_L57 = outC->Context_bestimmeAutoHoldModus_1.cockpitAnzeige_AutoHoldMode;
  outC->_L65 = v_fzg;
  outC->_L66 = bremspedalKraft;
  outC->_L67 = gaspedalStellung;
  outC->_L68 = fahrertuerSchalter;
  outC->_L69 = sicherheitsgurtSchalter;
  outC->_L92 = getriebeWahlhebel;
  /* _L39=(AH_Pkg::subf_Pkg::autoHold#2)/ */
  autoHold_AH_Pkg_subf_Pkg(
    outC->_L56,
    outC->_L65,
    outC->_L66,
    outC->_L67,
    outC->_L68,
    outC->_L69,
    outC->_L92,
    aktZeit,
    &outC->Context_autoHold_2);
  outC->_L39 = outC->Context_autoHold_2.cockpitAnzeige_Hold;
  outC->_L40 = outC->Context_autoHold_2.arretiereBetriebsbremse;
  outC->_L41 = outC->Context_autoHold_2.aktiviereEPB;
  outC->aktiviereEPB = outC->_L41;
  outC->_L54 = outC->aktiviereEPB;
  /* _L32=(AH_Pkg::subf_Pkg::steuereEPB#1)/ */
  steuereEPB_AH_Pkg_subf_Pkg(
    outC->_L46,
    outC->_L47,
    outC->_L48,
    outC->_L49,
    outC->_L50,
    outC->_L35,
    outC->_L51,
    outC->_L52,
    outC->_L53,
    outC->_L54,
    aktZeit,
    &outC->Context_steuereEPB_1);
  outC->_L32 = outC->Context_steuereEPB_1.EPB_Bremse;
  outC->_L33 = outC->Context_steuereEPB_1.led_P;
  outC->_L34 = outC->Context_steuereEPB_1.cockpitAnzeige_P;
  outC->epb_bremszustand = outC->_L32;
  outC->_L76 = outC->epb_bremszustand;
  outC->_L75 = fzgLaengsNeigung;
  /* _L38=(AH_Pkg::subf_Pkg::hillHold#2)/ */
  hillHold_AH_Pkg_subf_Pkg(
    outC->_L70,
    outC->_L71,
    outC->_L72,
    outC->_L73,
    outC->_L74,
    outC->_L76,
    outC->_L75,
    aktZeit,
    &outC->Context_hillHold_2);
  outC->_L38 = outC->Context_hillHold_2.betriebsbremsSperrventil;
  outC->betriebsbremsSperrventil_loc = outC->_L38;
  outC->_L87 = outC->betriebsbremsSperrventil_loc;
  outC->_L90 = outC->_L87 == outC->_L88;
  outC->arretiereBetriebsbremse = outC->_L40;
  outC->_L82 = outC->arretiereBetriebsbremse;
  outC->_L86 = !outC->_L82;
  outC->_L91 = outC->_L86 & outC->_L90;
  outC->Write_MemoryBasic_1_float64 = outC->_L91;
  outC->_L5_MemoryBasic_1_float64 = outC->Write_MemoryBasic_1_float64;
  outC->BM_Input_MemoryBasic_1_float64 = outC->_L83;
  outC->_L2_MemoryBasic_1_float64 = outC->BM_Input_MemoryBasic_1_float64;
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_float64) {
    outC->_L4_MemoryBasic_1_float64 = outC->_L2_MemoryBasic_1_float64;
  }
  else {
    outC->_L4_MemoryBasic_1_float64 = outC->_L6_MemoryBasic_1_float64;
  }
  outC->Memorized_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  outC->epbBetriebsmodus = outC->_L35;
  outC->_L85 = outC->Memorized_MemoryBasic_1_float64;
  outC->betriebsBremse = outC->_L85;
  outC->_L80 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L79 = sw2_off_AhTypes_Pkg_ah_Pkg;
  /* _L78= */
  if (outC->_L37) {
    outC->_L78 = outC->_L80;
  }
  else {
    outC->_L78 = outC->_L79;
  }
  /* _L77= */
  if (outC->_L36) {
    outC->_L77 = outC->_L80;
  }
  else {
    outC->_L77 = outC->_L79;
  }
  outC->cockpitAnzeige_EPBMode_Automatik = outC->_L77;
  outC->cockpitAnzeige_EPBMode_Manuell = outC->_L78;
  outC->betriebsbremsSperrventil = outC->_L38;
  outC->cockpitAnzeige_Hold = outC->_L39;
  outC->cockpitAnzeige_AutoHoldMode = outC->_L57;
  outC->cockpitAnzeige_P = outC->_L34;
  outC->led_P = outC->_L33;
  outC->EPB_Bremse = outC->_L32;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void EpbCtrl_init_AH_Pkg_main_Pkg(outC_EpbCtrl_AH_Pkg_main_Pkg *outC)
{
  outC->_L92 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L88 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L87 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_lit_float64(0.0);
  outC->_L83 = kcg_lit_float64(0.0);
  outC->_L82 = kcg_true;
  outC->_L80 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L79 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L78 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L77 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L76 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L75 = kcg_lit_float64(0.0);
  outC->_L74 = kcg_lit_float64(0.0);
  outC->_L73 = kcg_lit_float64(0.0);
  outC->_L72 = kcg_lit_float64(0.0);
  outC->_L71 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L70 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L69 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L68 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L67 = kcg_lit_float64(0.0);
  outC->_L66 = kcg_lit_float64(0.0);
  outC->_L65 = kcg_lit_float64(0.0);
  outC->_L64 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L63 = kcg_lit_float64(0.0);
  outC->_L62 = kcg_lit_float64(0.0);
  outC->_L61 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L60 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L59 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L58 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L56 = ahm_off_AhTypes_Pkg_ah_Pkg;
  outC->_L57 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_lit_float64(0.0);
  outC->_L52 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L51 = kcg_lit_float64(0.0);
  outC->_L50 = kcg_lit_float64(0.0);
  outC->_L49 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L48 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L47 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L46 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L43 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L42 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L38 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L35 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L36 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L32 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L33 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L34 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->betriebsbremsSperrventil_loc = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->epb_bremszustand = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->arretiereBetriebsbremse = kcg_true;
  outC->aktiviereEPB = kcg_true;
  outC->_L2_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_MemoryBasic_1_float64 = kcg_true;
  outC->_L6_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L7_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->BM_Input_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Init_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Write_MemoryBasic_1_float64 = kcg_true;
  outC->Memorized_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->epbBetriebsmodus = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->betriebsbremsSperrventil = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->betriebsBremse = kcg_lit_float64(0.0);
  outC->EPB_Bremse = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Automatik = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Manuell = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_AutoHoldMode = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->led_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  /* _L38=(AH_Pkg::subf_Pkg::hillHold#2)/ */
  hillHold_init_AH_Pkg_subf_Pkg(&outC->Context_hillHold_2);
  /* _L32=(AH_Pkg::subf_Pkg::steuereEPB#1)/ */
  steuereEPB_init_AH_Pkg_subf_Pkg(&outC->Context_steuereEPB_1);
  /* _L39=(AH_Pkg::subf_Pkg::autoHold#2)/ */
  autoHold_init_AH_Pkg_subf_Pkg(&outC->Context_autoHold_2);
  /* _L56=(AH_Pkg::subf_Pkg::bestimmeAutoHoldModus#1)/ */
  bestimmeAutoHoldModus_init_AH_Pkg_subf_Pkg(
    &outC->Context_bestimmeAutoHoldModus_1);
  /* _L35=(AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus#1)/ */
  bestimmeEpbBetriebsmodus_init_AH_Pkg_subf_Pkg(
    &outC->Context_bestimmeEpbBetriebsmodus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EpbCtrl_reset_AH_Pkg_main_Pkg(outC_EpbCtrl_AH_Pkg_main_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L38=(AH_Pkg::subf_Pkg::hillHold#2)/ */
  hillHold_reset_AH_Pkg_subf_Pkg(&outC->Context_hillHold_2);
  /* _L32=(AH_Pkg::subf_Pkg::steuereEPB#1)/ */
  steuereEPB_reset_AH_Pkg_subf_Pkg(&outC->Context_steuereEPB_1);
  /* _L39=(AH_Pkg::subf_Pkg::autoHold#2)/ */
  autoHold_reset_AH_Pkg_subf_Pkg(&outC->Context_autoHold_2);
  /* _L56=(AH_Pkg::subf_Pkg::bestimmeAutoHoldModus#1)/ */
  bestimmeAutoHoldModus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_bestimmeAutoHoldModus_1);
  /* _L35=(AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus#1)/ */
  bestimmeEpbBetriebsmodus_reset_AH_Pkg_subf_Pkg(
    &outC->Context_bestimmeEpbBetriebsmodus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: AH_Pkg::main_Pkg::EpbCtrl/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EpbCtrl_AH_Pkg_main_Pkg.c
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

