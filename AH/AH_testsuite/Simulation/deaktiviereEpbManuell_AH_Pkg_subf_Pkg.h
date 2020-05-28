/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */
#ifndef _deaktiviereEpbManuell_AH_Pkg_subf_Pkg_H_
#define _deaktiviereEpbManuell_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* epbDeaktivieren/ */ epbDeaktivieren;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L30=(AH_Pkg::subf_Pkg::fahrzeugSteht#2)/ */ Context_fahrzeugSteht_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L24/ */ _L24;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
} outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::deaktiviereEpbManuell/ */
extern void deaktiviereEpbManuell_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deaktiviereEpbManuell_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deaktiviereEpbManuell_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deaktiviereEpbManuell_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereEpbManuell_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

