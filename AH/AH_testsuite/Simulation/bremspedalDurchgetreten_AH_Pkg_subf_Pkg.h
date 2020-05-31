/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */
#ifndef _bremspedalDurchgetreten_AH_Pkg_subf_Pkg_H_
#define _bremspedalDurchgetreten_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* vollDurchgetreten/ */ vollDurchgetreten;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::bremspedalDurchgetreten/ */
extern void bremspedalDurchgetreten_AH_Pkg_subf_Pkg(
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void bremspedalDurchgetreten_reset_AH_Pkg_subf_Pkg(
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void bremspedalDurchgetreten_init_AH_Pkg_subf_Pkg(
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _bremspedalDurchgetreten_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bremspedalDurchgetreten_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

