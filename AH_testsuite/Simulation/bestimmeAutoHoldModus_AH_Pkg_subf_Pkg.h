/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */
#ifndef _bestimmeAutoHoldModus_AH_Pkg_subf_Pkg_H_
#define _bestimmeAutoHoldModus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h"
#include "aktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* modus/ */ modus;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_AutoHoldMode/ */ cockpitAnzeige_AutoHoldMode;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg /* _L1=(AH_Pkg::subf_Pkg::aktiviereAutoHoldModus#1)/ */ Context_aktiviereAutoHoldModus_1;
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg /* _L21=(AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus#1)/ */ Context_deaktiviereAutoHoldModus_1;
  /* ------------------ clocks of observable data -------------------- */
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:AH_inaktiv:_L2/ */ _L2_AH_inaktiv_SM1;
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* SM1:AH_inaktiv:_L1/ */ _L1_AH_inaktiv_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:AH_aktiv:_L2/ */ _L2_AH_aktiv_SM1;
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* SM1:AH_aktiv:_L1/ */ _L1_AH_aktiv_SM1;
  _2_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _3_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* aktiviere/ */ aktiviere;
  kcg_bool /* deaktiviere/ */ deaktiviere;
  kcg_bool /* _L1/ */ _L1;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L5/ */ _L5;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L21/ */ _L21;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L22/ */ _L22;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L23/ */ _L23;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L24/ */ _L24;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
} outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ */
extern void bestimmeAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void bestimmeAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void bestimmeAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _bestimmeAutoHoldModus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bestimmeAutoHoldModus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

