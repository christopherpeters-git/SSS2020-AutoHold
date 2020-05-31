/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:10
*************************************************************$ */
#ifndef _fahrzeugSteht_AH_Pkg_subf_Pkg_H_
#define _fahrzeugSteht_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* steht/ */ steht;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L2/ */ _L2;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L5/ */ _L5;
} outC_fahrzeugSteht_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::fahrzeugSteht/ */
extern void fahrzeugSteht_AH_Pkg_subf_Pkg(
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fahrzeugSteht_reset_AH_Pkg_subf_Pkg(
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fahrzeugSteht_init_AH_Pkg_subf_Pkg(
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AH_Pkg::subf_Pkg::fahrzeugSteht/
  @1: (math::Abs#1)
*/

#endif /* _fahrzeugSteht_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrzeugSteht_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-31T14:48:10
*************************************************************$ */

