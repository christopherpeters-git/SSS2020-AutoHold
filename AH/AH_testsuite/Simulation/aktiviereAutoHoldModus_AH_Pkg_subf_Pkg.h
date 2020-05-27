/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _aktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_
#define _aktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* aktivieren/ */ aktivieren;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L54=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L5/ */ _L5;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
} outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereAutoHoldModus/ */
extern void aktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

