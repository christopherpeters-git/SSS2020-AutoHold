/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */
#ifndef _fzgIntegration_simEnv_Pkg_mainPkg_H_
#define _fzgIntegration_simEnv_Pkg_mainPkg_H_

#include "kcg_types.h"
#include "EpbCtrl_AH_Pkg_main_Pkg.h"
#include "fahrzeug_simEnv_Pkg_mainPkg.h"
#include "fahrweg_simEnv_Pkg_mainPkg.h"

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
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* epbBetriebsmodus/ */ epbBetriebsmodus;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* betriebsbremsSperrventil/ */ betriebsbremsSperrventil;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* fzgLaengsneigung_loc/ */ fzgLaengsneigung_loc;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrweg_simEnv_Pkg_mainPkg /* _L1=(simEnv_Pkg::mainPkg::fahrweg#1)/ */ Context_fahrweg_1;
  outC_fahrzeug_simEnv_Pkg_mainPkg /* _L2=(simEnv_Pkg::mainPkg::fahrzeug#1)/ */ Context_fahrzeug_1;
  outC_EpbCtrl_AH_Pkg_main_Pkg /* _L10=(AH_Pkg::main_Pkg::EpbCtrl#1)/ */ Context_EpbCtrl_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L1/ */ _L1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L3/ */ _L3;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L2/ */ _L2;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L7/ */ _L7;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L18/ */ _L18;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L17/ */ _L17;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L16/ */ _L16;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L15/ */ _L15;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L19/ */ _L19;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L24/ */ _L24;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L26/ */ _L26;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L27/ */ _L27;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L28/ */ _L28;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L29/ */ _L29;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L30/ */ _L30;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L31/ */ _L31;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L32/ */ _L32;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L33/ */ _L33;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L34/ */ _L34;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L35/ */ _L35;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L36/ */ _L36;
} outC_fzgIntegration_simEnv_Pkg_mainPkg;

/* ===========  node initialization and cycle functions  =========== */
/* simEnv_Pkg::mainPkg::fzgIntegration/ */
extern void fzgIntegration_simEnv_Pkg_mainPkg(
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
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fzgIntegration_reset_simEnv_Pkg_mainPkg(
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fzgIntegration_init_simEnv_Pkg_mainPkg(
  outC_fzgIntegration_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _fzgIntegration_simEnv_Pkg_mainPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fzgIntegration_simEnv_Pkg_mainPkg.h
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

