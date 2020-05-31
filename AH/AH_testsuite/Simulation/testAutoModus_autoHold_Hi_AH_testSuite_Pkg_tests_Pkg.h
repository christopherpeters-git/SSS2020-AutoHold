/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */
#ifndef _testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg_H_
#define _testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg_H_

#include "kcg_types.h"
#include "autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer.h"
#include "systemUhr_AhTypes_Pkg_utils_Pkg.h"
#include "fzgIntegration_simEnv_Pkg_mainPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* led_P/ */ led_P;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_P/ */ cockpitAnzeige_P;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_AutoHoldMode/ */ cockpitAnzeige_AutoHoldMode;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_Hold/ */ cockpitAnzeige_Hold;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_EPBMode_Manuell/ */ cockpitAnzeige_EPBMode_Manuell;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_EPBMode_Automatik/ */ cockpitAnzeige_EPBMode_Automatik;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* betriebsBremse/ */ betriebsBremse;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* EPB_Bremse/ */ EPB_Bremse;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v_fzg/ */ v_fzg;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* fzgLaengsneigung/ */ fzgLaengsneigung;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* aktZeit/ */ aktZeit;
  kcg_bool /* error/ */ error;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* epbBetriebsmodus/ */ epbBetriebsmodus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fzgIntegration_simEnv_Pkg_mainPkg /* _L1=(simEnv_Pkg::mainPkg::fzgIntegration#1)/ */ Context_fzgIntegration_1;
  outC_autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer /* _L56=(AH_testSuite_Pkg::divFahrer::autoModus_autoHold_HillHold_NICHTFERTIG#1)/ */ Context_autoModus_autoHold_HillHold_NICHTFERTIG_1;
  outC_systemUhr_AhTypes_Pkg_utils_Pkg /* _L31=(AhTypes_Pkg::utils_Pkg::systemUhr#1)/ */ Context_systemUhr_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L10/ */ _L10;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L9/ */ _L9;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L8/ */ _L8;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L5/ */ _L5;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L21/ */ _L21;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L23/ */ _L23;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L24/ */ _L24;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L26/ */ _L26;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L27/ */ _L27;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L28/ */ _L28;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L29/ */ _L29;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L31/ */ _L31;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L33/ */ _L33;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L36/ */ _L36;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L46/ */ _L46;
  kcg_bool /* _L64/ */ _L64;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L63/ */ _L63;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L62/ */ _L62;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L61/ */ _L61;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L60/ */ _L60;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L59/ */ _L59;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L58/ */ _L58;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L57/ */ _L57;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L56/ */ _L56;
} outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::tests_Pkg::testAutoModus_autoHold_HillHold/ */
extern void testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void testAutoModus_autoHold_Hi_reset_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void testAutoModus_autoHold_Hi_init_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** testAutoModus_autoHold_Hi_AH_testSuite_Pkg_tests_Pkg.h
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */
