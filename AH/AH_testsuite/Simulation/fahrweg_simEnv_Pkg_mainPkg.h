/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */
#ifndef _fahrweg_simEnv_Pkg_mainPkg_H_
#define _fahrweg_simEnv_Pkg_mainPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* fzgLaengsNeigung/ */ fzgLaengsNeigung;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
} outC_fahrweg_simEnv_Pkg_mainPkg;

/* ===========  node initialization and cycle functions  =========== */
/* simEnv_Pkg::mainPkg::fahrweg/ */
extern void fahrweg_simEnv_Pkg_mainPkg(
  /* s_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg s_fzg,
  outC_fahrweg_simEnv_Pkg_mainPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fahrweg_reset_simEnv_Pkg_mainPkg(
  outC_fahrweg_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fahrweg_init_simEnv_Pkg_mainPkg(
  outC_fahrweg_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _fahrweg_simEnv_Pkg_mainPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrweg_simEnv_Pkg_mainPkg.h
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

