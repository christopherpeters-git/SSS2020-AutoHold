/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_
#define _deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "bremspedalDurchgetreten_AH_Pkg_subf_Pkg.h"
#include "RisingEdge_digital.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* deaktivieren/ */ deaktivieren;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L57=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */ Context_fahrzeugSteht_1;
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg /* _L61=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten#2)/ */ Context_bremspedalDurchgetreten_2;
  outC_RisingEdge_digital /* _L54=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L5/ */ _L5;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L57/ */ _L57;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L62/ */ _L62;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L55/ */ _L55;
  kcg_bool /* _L7/ */ _L7;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L67/ */ _L67;
} outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus/ */
extern void deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deaktiviereAutoHoldModus_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deaktiviereAutoHoldModus_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

