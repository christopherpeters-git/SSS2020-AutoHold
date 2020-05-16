/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */
#ifndef _aktiviereHillHold_AH_Pkg_subf_Pkg_H_
#define _aktiviereHillHold_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* aktiviere/ */ aktiviere;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L4=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */ Context_fahrzeugSteht_1;
  outC_RisingEdge_digital /* _L20=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L5/ */ _L5;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
} outC_aktiviereHillHold_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereHillHold/ */
extern void aktiviereHillHold_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereHillHold_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereHillHold_init_AH_Pkg_subf_Pkg(
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereHillHold_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereHillHold_AH_Pkg_subf_Pkg.h
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

