/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _autoHold_AH_Pkg_subf_Pkg_H_
#define _autoHold_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "bremspedalDurchgetreten_AH_Pkg_subf_Pkg.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_Hold/ */ cockpitAnzeige_Hold;
  kcg_bool /* arretiereBetriebsbremse/ */ arretiereBetriebsbremse;
  kcg_bool /* aktiviereEPB/ */ aktiviereEPB;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:bremseArretiert:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg /* SM1:bremseArretiert:_L10=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */ Context_bremspedalDurchgetreten_2;
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */ Context_fahrzeugSteht_1;
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg /* _L6=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#1)/ */ _1_Context_bremspedalDurchgetreten_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:bremseArretiert: */ bremseArretiert_weakb_clock_SM1;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:bremseGeloest:_L2/ */ _L2_bremseGeloest_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:bremseGeloest:_L1/ */ _L1_bremseGeloest_SM1;
  kcg_bool /* SM1:bremseArretiert:_L14/ */ _L14_bremseArretiert_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:bremseArretiert:_L11/ */ _L11_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L10/ */ _L10_bremseArretiert_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:bremseArretiert:_L8/ */ _L8_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L7/ */ _L7_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L6/ */ _L6_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L4/ */ _L4_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L5/ */ _L5_bremseArretiert_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:bremseArretiert:_L3/ */ _L3_bremseArretiert_SM1;
  kcg_bool /* SM1:bremseArretiert:_L2/ */ _L2_bremseArretiert_SM1;
  _4_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _5_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* arretiereBremse_loc/ */ arretiereBremse_loc;
  kcg_bool /* loeseBremse_loc/ */ loeseBremse_loc;
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
} outC_autoHold_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::autoHold/ */
extern void autoHold_AH_Pkg_subf_Pkg(
  /* AHmodus/ */
  autoholdModus_T_AhTypes_Pkg_ah_Pkg AHmodus,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_autoHold_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void autoHold_reset_AH_Pkg_subf_Pkg(outC_autoHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void autoHold_init_AH_Pkg_subf_Pkg(outC_autoHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _autoHold_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** autoHold_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

