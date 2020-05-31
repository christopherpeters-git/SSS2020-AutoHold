/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:10
*************************************************************$ */
#ifndef _aktiviereEpbManuell_AH_Pkg_subf_Pkg_H_
#define _aktiviereEpbManuell_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* epbAktivieren/ */ epbAktivieren;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L26=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */ Context_fahrzeugSteht_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L15/ */ _L15;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
} outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereEpbManuell/ */
extern void aktiviereEpbManuell_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereEpbManuell_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbManuell_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-31T14:48:10
*************************************************************$ */

