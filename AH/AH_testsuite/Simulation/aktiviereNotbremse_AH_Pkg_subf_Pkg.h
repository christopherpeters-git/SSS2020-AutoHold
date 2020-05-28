/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */
#ifndef _aktiviereNotbremse_AH_Pkg_subf_Pkg_H_
#define _aktiviereNotbremse_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* notbremsen/ */ notbremsen;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* _L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_RisingEdge_digital /* _L10=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L7/ */ _L7;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L10/ */ _L10;
} outC_aktiviereNotbremse_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereNotbremse/ */
extern void aktiviereNotbremse_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereNotbremse_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereNotbremse_init_AH_Pkg_subf_Pkg(
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereNotbremse_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereNotbremse_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

