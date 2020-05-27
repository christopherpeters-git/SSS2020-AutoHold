/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_
#define _testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_

#include "kcg_types.h"
#include "manModus_autoHold_AH_testSuite_Pkg_divFahrer.h"
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
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer /* _L37=(AH_testSuite_Pkg::divFahrer::manModus_autoHold#1)/ */ Context_manModus_autoHold_1;
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
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L44/ */ _L44;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L43/ */ _L43;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L41/ */ _L41;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L40/ */ _L40;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L39/ */ _L39;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L38/ */ _L38;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L37/ */ _L37;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L45/ */ _L45;
} outC_testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::tests_Pkg::testManModus_autoHold/ */
extern void testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg(
  outC_testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void testManModus_autoHold_reset_AH_testSuite_Pkg_tests_Pkg(
  outC_testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void testManModus_autoHold_init_AH_testSuite_Pkg_tests_Pkg(
  outC_testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** testManModus_autoHold_AH_testSuite_Pkg_tests_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

