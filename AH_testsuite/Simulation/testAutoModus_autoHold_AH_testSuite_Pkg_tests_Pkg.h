/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */
#ifndef _testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_
#define _testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_

#include "kcg_types.h"
#include "systemUhr_AhTypes_Pkg_utils_Pkg.h"
#include "autoModus_autoHold_AH_testSuite_Pkg_divFahrer.h"
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
  outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer /* _L12=(AH_testSuite_Pkg::divFahrer::autoModus_autoHold#1)/ */ Context_autoModus_autoHold_1;
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
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L19/ */ _L19;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L18/ */ _L18;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L17/ */ _L17;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L16/ */ _L16;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L15/ */ _L15;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
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
  kcg_bool /* _L32/ */ _L32;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L33/ */ _L33;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L36/ */ _L36;
} outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::tests_Pkg::testAutoModus_autoHold/ */
extern void testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void testAutoModus_autoHold_reset_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void testAutoModus_autoHold_init_AH_testSuite_Pkg_tests_Pkg(
  outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg.h
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

