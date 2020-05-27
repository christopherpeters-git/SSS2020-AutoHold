/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg_H_
#define _aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"
#include "fahrzeugSteht_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* aktivieren/ */ aktivieren;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L57=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* _L28=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_RisingEdge_digital /* _L43=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L45=(AH_Pkg::subf_Pkg::fahrzeugSteht#1)/ */ Context_fahrzeugSteht_1;
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
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L40/ */ _L40;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L41/ */ _L41;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
} outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus/ */
extern void aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg(
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereEpbManuellenModus_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereEpbManuellenModus_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

