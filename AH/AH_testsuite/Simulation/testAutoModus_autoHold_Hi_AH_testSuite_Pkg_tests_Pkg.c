/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg.h"

/* AH_testSuite_Pkg::tests_Pkg::testAutoModus_autoHold_HillHold/ */
void testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC)
{
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg noname;
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg last_epbBetriebsmodus;
  /* fzgLaengsneigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg last_fzgLaengsneigung;
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg last_v_fzg;
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg last_EPB_Bremse;
  /* betriebsBremse/ */
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg last_betriebsBremse;
  /* cockpitAnzeige_EPBMode_Automatik/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_cockpitAnzeige_EPBMode_Automatik;
  /* cockpitAnzeige_EPBMode_Manuell/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_cockpitAnzeige_EPBMode_Manuell;
  /* cockpitAnzeige_Hold/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_cockpitAnzeige_Hold;
  /* cockpitAnzeige_AutoHoldMode/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_cockpitAnzeige_AutoHoldMode;
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_cockpitAnzeige_P;
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg last_led_P;

  last_epbBetriebsmodus = outC->epbBetriebsmodus;
  last_fzgLaengsneigung = outC->fzgLaengsneigung;
  last_v_fzg = outC->v_fzg;
  last_EPB_Bremse = outC->EPB_Bremse;
  last_betriebsBremse = outC->betriebsBremse;
  last_cockpitAnzeige_EPBMode_Automatik = outC->cockpitAnzeige_EPBMode_Automatik;
  last_cockpitAnzeige_EPBMode_Manuell = outC->cockpitAnzeige_EPBMode_Manuell;
  last_cockpitAnzeige_Hold = outC->cockpitAnzeige_Hold;
  last_cockpitAnzeige_AutoHoldMode = outC->cockpitAnzeige_AutoHoldMode;
  last_cockpitAnzeige_P = outC->cockpitAnzeige_P;
  last_led_P = outC->led_P;
  outC->_L20 = last_led_P;
  outC->_L21 = last_cockpitAnzeige_P;
  outC->_L22 = last_cockpitAnzeige_AutoHoldMode;
  outC->_L23 = last_cockpitAnzeige_Hold;
  outC->_L24 = last_cockpitAnzeige_EPBMode_Manuell;
  outC->_L25 = last_cockpitAnzeige_EPBMode_Automatik;
  outC->_L26 = last_betriebsBremse;
  outC->_L27 = last_EPB_Bremse;
  outC->_L28 = last_v_fzg;
  outC->_L29 = last_fzgLaengsneigung;
  outC->_L36 = last_epbBetriebsmodus;
  /* _L31=(AhTypes_Pkg::utils_Pkg::systemUhr#1)/ */
  systemUhr_AhTypes_Pkg_utils_Pkg(&outC->Context_systemUhr_1);
  outC->_L31 = outC->Context_systemUhr_1.uhrzeit;
  /* _L56=(AH_testSuite_Pkg::divFahrer::autoModus_autoHold_HillHold_NICHTFERTIG#1)/ */
  autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer(
    outC->_L20,
    outC->_L21,
    outC->_L22,
    outC->_L23,
    outC->_L24,
    outC->_L25,
    outC->_L26,
    outC->_L27,
    outC->_L28,
    outC->_L29,
    outC->_L36,
    outC->_L31,
    &outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1);
  outC->_L56 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.zuendschalter;
  outC->_L57 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.getriebeWahlhebel;
  outC->_L58 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.fahrertuerSchalter;
  outC->_L59 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.sicherheitsgurtSchalter;
  outC->_L60 = outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.taste_P;
  outC->_L61 = outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.taste_Hold;
  outC->_L62 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.gaspedalStellung;
  outC->_L63 =
    outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.bremspedalKraft;
  outC->_L64 = outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1.error;
  /* _L1=(simEnv_Pkg::mainPkg::fzgIntegration#1)/ */
  fzgIntegration_simEnv_Pkg_mainPkg(
    outC->_L56,
    outC->_L57,
    outC->_L58,
    outC->_L59,
    outC->_L60,
    outC->_L61,
    outC->_L62,
    outC->_L63,
    outC->_L31,
    &outC->Context_fzgIntegration_1);
  outC->_L1 = outC->Context_fzgIntegration_1.led_P;
  outC->_L2 = outC->Context_fzgIntegration_1.cockpitAnzeige_P;
  outC->_L3 = outC->Context_fzgIntegration_1.cockpitAnzeige_AutoHoldMode;
  outC->_L4 = outC->Context_fzgIntegration_1.cockpitAnzeige_Hold;
  outC->_L5 = outC->Context_fzgIntegration_1.cockpitAnzeige_EPBMode_Manuell;
  outC->_L6 = outC->Context_fzgIntegration_1.cockpitAnzeige_EPBMode_Automatik;
  outC->_L7 = outC->Context_fzgIntegration_1.betriebsBremse;
  outC->_L8 = outC->Context_fzgIntegration_1.EPB_Bremse;
  outC->_L9 = outC->Context_fzgIntegration_1.v_fzg;
  outC->_L10 = outC->Context_fzgIntegration_1.fzgLaengsneigung;
  outC->_L33 = outC->Context_fzgIntegration_1.epbBetriebsmodus;
  outC->_L46 = outC->Context_fzgIntegration_1.betriebsbremsSperrventil;
  noname = outC->_L46;
  outC->epbBetriebsmodus = outC->_L33;
  outC->error = outC->_L64;
  outC->aktZeit = outC->_L31;
  outC->fzgLaengsneigung = outC->_L10;
  outC->v_fzg = outC->_L9;
  outC->EPB_Bremse = outC->_L8;
  outC->betriebsBremse = outC->_L7;
  outC->cockpitAnzeige_EPBMode_Automatik = outC->_L6;
  outC->cockpitAnzeige_EPBMode_Manuell = outC->_L5;
  outC->cockpitAnzeige_Hold = outC->_L4;
  outC->cockpitAnzeige_AutoHoldMode = outC->_L3;
  outC->cockpitAnzeige_P = outC->_L2;
  outC->led_P = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void testAutoModus_autoHold_Hi_init_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC)
{
  outC->_L56 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L57 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L58 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L59 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L60 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L61 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L62 = kcg_lit_float64(0.0);
  outC->_L63 = kcg_lit_float64(0.0);
  outC->_L64 = kcg_true;
  outC->_L46 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L36 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L33 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L24 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L23 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L22 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L21 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L20 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->error = kcg_true;
  outC->aktZeit = kcg_lit_float64(0.0);
  /* _L1=(simEnv_Pkg::mainPkg::fzgIntegration#1)/ */
  fzgIntegration_init_simEnv_Pkg_mainPkg(&outC->Context_fzgIntegration_1);
  /* _L56=(AH_testSuite_Pkg::divFahrer::autoModus_autoHold_HillHold_NICHTFERTIG#1)/ */
  autoModus_autoHold_HillHo_init_AH_testSuite_Pkg_divFahrer(
    &outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1);
  /* _L31=(AhTypes_Pkg::utils_Pkg::systemUhr#1)/ */
  systemUhr_init_AhTypes_Pkg_utils_Pkg(&outC->Context_systemUhr_1);
  outC->led_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_AutoHoldMode = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Manuell = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Automatik = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->betriebsBremse = kcg_lit_float64(0.0);
  outC->EPB_Bremse = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->v_fzg = kcg_lit_float64(0.0);
  outC->fzgLaengsneigung = kcg_lit_float64(0.0);
  outC->epbBetriebsmodus = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void testAutoModus_autoHold_Hi_reset_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC)
{
  /* _L1=(simEnv_Pkg::mainPkg::fzgIntegration#1)/ */
  fzgIntegration_reset_simEnv_Pkg_mainPkg(&outC->Context_fzgIntegration_1);
  /* _L56=(AH_testSuite_Pkg::divFahrer::autoModus_autoHold_HillHold_NICHTFERTIG#1)/ */
  autoModus_autoHold_HillHo_reset_AH_testSuite_Pkg_divFahrer(
    &outC->Context_autoModus_autoHold_HillHold_NICHTFERTIG_1);
  /* _L31=(AhTypes_Pkg::utils_Pkg::systemUhr#1)/ */
  systemUhr_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_systemUhr_1);
  outC->led_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_P = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_AutoHoldMode = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Manuell = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->cockpitAnzeige_EPBMode_Automatik = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->betriebsBremse = kcg_lit_float64(0.0);
  outC->EPB_Bremse = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->v_fzg = kcg_lit_float64(0.0);
  outC->fzgLaengsneigung = kcg_lit_float64(0.0);
  outC->epbBetriebsmodus = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg.c
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

