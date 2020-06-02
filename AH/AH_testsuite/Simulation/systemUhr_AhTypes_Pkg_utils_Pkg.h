/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */
#ifndef _systemUhr_AhTypes_Pkg_utils_Pkg_H_
#define _systemUhr_AhTypes_Pkg_utils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* uhrzeit/ */ uhrzeit;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L7/ */ _L7;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L9/ */ _L9;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L10/ */ _L10;
} outC_systemUhr_AhTypes_Pkg_utils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AhTypes_Pkg::utils_Pkg::systemUhr/ */
extern void systemUhr_AhTypes_Pkg_utils_Pkg(
  outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void systemUhr_reset_AhTypes_Pkg_utils_Pkg(
  outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void systemUhr_init_AhTypes_Pkg_utils_Pkg(
  outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _systemUhr_AhTypes_Pkg_utils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** systemUhr_AhTypes_Pkg_utils_Pkg.h
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

