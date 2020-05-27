/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T15:47:01
*************************************************************$ */
#ifndef _aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_
#define _aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* aktiviereEpb/ */ aktiviereEpb;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L18/ */ _L18;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
} outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch/ */
extern void aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T15:47:01
*************************************************************$ */

