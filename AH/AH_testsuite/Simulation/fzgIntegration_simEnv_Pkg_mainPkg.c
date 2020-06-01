/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fzgIntegration_simEnv_Pkg_mainPkg.h"

/* simEnv_Pkg::mainPkg::fzgIntegration/ */
void fzgIntegration_simEnv_Pkg_mainPkg(
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC)
{
  /* fzgLaengsneigung_loc/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg last_fzgLaengsneigung_loc;
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg last_v_fzg;

  last_fzgLaengsneigung_loc = outC->fzgLaengsneigung_loc;
  last_v_fzg = outC->v_fzg;
  outC->_L26 = zuendschalter;
  outC->_L27 = getriebeWahlhebel;
  outC->_L28 = fahrertuerSchalter;
  outC->_L29 = sicherheitsgurtSchalter;
  outC->_L30 = taste_P;
  outC->_L31 = taste_Hold;
  outC->_L25 = bremspedalKraft;
  outC->_L22 = gaspedalStellung;
  outC->_L24 = last_fzgLaengsneigung_loc;
  outC->_L32 = last_v_fzg;
  outC->_L33 = aktZeit;
  /* _L10=(AH_Pkg::main_Pkg::EpbCtrl#1)/ */
  EpbCtrl_AH_Pkg_main_Pkg(
    outC->_L26,
    outC->_L27,
    outC->_L28,
    outC->_L29,
    outC->_L30,
    outC->_L31,
    outC->_L25,
    outC->_L22,
    outC->_L24,
    outC->_L32,
    outC->_L33,
    &outC->Context_EpbCtrl_1);
  outC->_L10 = outC->Context_EpbCtrl_1.led_P;
  outC->_L11 = outC->Context_EpbCtrl_1.cockpitAnzeige_P;
  outC->_L12 = outC->Context_EpbCtrl_1.cockpitAnzeige_AutoHoldMode;
  outC->_L13 = outC->Context_EpbCtrl_1.cockpitAnzeige_Hold;
  outC->_L14 = outC->Context_EpbCtrl_1.cockpitAnzeige_EPBMode_Manuell;
  outC->_L15 = outC->Context_EpbCtrl_1.cockpitAnzeige_EPBMode_Automatik;
  outC->_L16 = outC->Context_EpbCtrl_1.EPB_Bremse;
  outC->_L17 = outC->Context_EpbCtrl_1.betriebsBremse;
  outC->_L18 = outC->Context_EpbCtrl_1.betriebsbremsSperrventil;
  outC->_L36 = outC->Context_EpbCtrl_1.epbBetriebsmodus;
  outC->betriebsbremsSperrventil = outC->_L18;
  outC->epbBetriebsmodus = outC->_L36;
  outC->_L35 = getriebeWahlhebel;
  outC->_L34 = zuendschalter;
  outC->EPB_Bremse = outC->_L16;
  outC->betriebsBremse = outC->_L17;
  outC->_L19 = gaspedalStellung;
  outC->_L7 = last_fzgLaengsneigung_loc;
  /* _L2=(simEnv_Pkg::mainPkg::fahrzeug#1)/ */
  fahrzeug_simEnv_Pkg_mainPkg(
    outC->_L34,
    outC->_L35,
    outC->_L19,
    outC->_L7,
    outC->_L16,
    outC->_L17,
    outC->_L18,
    outC->_L33,
    &outC->Context_fahrzeug_1);
  outC->_L2 = outC->Context_fahrzeug_1.v_fzg;
  outC->_L3 = outC->Context_fahrzeug_1.s_fzg;
  /* _L1=(simEnv_Pkg::mainPkg::fahrweg#1)/ */
  fahrweg_simEnv_Pkg_mainPkg(outC->_L3, &outC->Context_fahrweg_1);
  outC->_L1 = outC->Context_fahrweg_1.fzgLaengsNeigung;
  outC->fzgLaengsneigung = outC->_L1;
  outC->cockpitAnzeige_EPBMode_Automatik = outC->_L15;
  outC->cockpitAnzeige_EPBMode_Manuell = outC->_L14;
  outC->cockpitAnzeige_Hold = outC->_L13;
  outC->cockpitAnzeige_AutoHoldMode = outC->_L12;
  outC->cockpitAnzeige_P = outC->_L11;
  outC->led_P = outC->_L10;
  outC->v_fzg = outC->_L2;
  outC->fzgLaengsneigung_loc = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void fzgIntegration_init_simEnv_Pkg_mainPkg(
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC)
{
  outC->_L36 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L35 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L34 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L30 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L29 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L28 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L27 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L26 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L10 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L13 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L14 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L15 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L16 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L18 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->betriebsbremsSperrventil = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->epbBetriebsmodus = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->fzgLaengsneigung = kcg_lit_float64(0.0);
  outC->EPB_Bremse = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->betriebsBremse = kcg_lit_float64(0.0);
  outC->cockpitAnzeige_EPBMode_Automatik = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Manuell = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_AutoHoldMode = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->led_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  /* _L1=(simEnv_Pkg::mainPkg::fahrweg#1)/ */
  fahrweg_init_simEnv_Pkg_mainPkg(&outC->Context_fahrweg_1);
  /* _L2=(simEnv_Pkg::mainPkg::fahrzeug#1)/ */
  fahrzeug_init_simEnv_Pkg_mainPkg(&outC->Context_fahrzeug_1);
  /* _L10=(AH_Pkg::main_Pkg::EpbCtrl#1)/ */
  EpbCtrl_init_AH_Pkg_main_Pkg(&outC->Context_EpbCtrl_1);
  outC->v_fzg = kcg_lit_float64(0.0);
  outC->fzgLaengsneigung_loc = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fzgIntegration_reset_simEnv_Pkg_mainPkg(
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC)
{
  /* _L1=(simEnv_Pkg::mainPkg::fahrweg#1)/ */
  fahrweg_reset_simEnv_Pkg_mainPkg(&outC->Context_fahrweg_1);
  /* _L2=(simEnv_Pkg::mainPkg::fahrzeug#1)/ */
  fahrzeug_reset_simEnv_Pkg_mainPkg(&outC->Context_fahrzeug_1);
  /* _L10=(AH_Pkg::main_Pkg::EpbCtrl#1)/ */
  EpbCtrl_reset_AH_Pkg_main_Pkg(&outC->Context_EpbCtrl_1);
  outC->v_fzg = kcg_lit_float64(0.0);
  outC->fzgLaengsneigung_loc = kcg_lit_float64(0.0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fzgIntegration_simEnv_Pkg_mainPkg.c
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

