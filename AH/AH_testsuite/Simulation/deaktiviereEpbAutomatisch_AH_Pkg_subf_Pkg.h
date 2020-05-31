/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */
#ifndef _deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_
#define _deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* deaktiviereEpb/ */ deaktiviereEpb;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L19/ */ _L19;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* @1/A1= */ A1_InRangeInIn_1_float64;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* @1/IRII_Output/ */ IRII_Output_InRangeInIn_1_float64;
  kcg_float64 /* @1/B/ */ B_InRangeInIn_1_float64;
  kcg_float64 /* @1/A/ */ A_InRangeInIn_1_float64;
  kcg_float64 /* @1/IRII_Input/ */ IRII_Input_InRangeInIn_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_InRangeInIn_1_float64;
  kcg_bool /* @1/_L4/ */ _L4_InRangeInIn_1_float64;
  kcg_bool /* @1/_L2/ */ _L2_InRangeInIn_1_float64;
  kcg_float64 /* @1/_L13/ */ _L13_InRangeInIn_1_float64;
  kcg_bool /* @1/_L12/ */ _L12_InRangeInIn_1_float64;
  kcg_float64 /* @1/_L10/ */ _L10_InRangeInIn_1_float64;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L16/ */ _L16;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L17/ */ _L17;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L18/ */ _L18;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L21/ */ _L21;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L26/ */ _L26;
  kcg_float64 /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L30/ */ _L30;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L31/ */ _L31;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
} outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch/ */
extern void deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deaktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deaktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch/
  @1: (math::InRangeInIn#1)
*/

#endif /* _deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

