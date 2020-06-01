/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */
#ifndef _aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg_H_
#define _aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "bremspedalDurchgetreten_AH_Pkg_subf_Pkg.h"
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
  outC_RisingEdge_digital /* _L46=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* _L28=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_fahrzeugSteht_AH_Pkg_subf_Pkg /* _L45=(AH_Pkg::subf_Pkg::fahrzeugSteht)/ */ Context_fahrzeugSteht;
  outC_RisingEdge_digital /* _L43=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg /* _L44=(AH_Pkg::subf_Pkg::bremspedalDurchgetreten)/ */ Context_bremspedalDurchgetreten;
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
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L40/ */ _L40;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L41/ */ _L41;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
} outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus/ */
extern void aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg(
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
  outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aktiviereEpbAutomatikModus_reset_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aktiviereEpbAutomatikModus_init_AH_Pkg_subf_Pkg(
  outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

