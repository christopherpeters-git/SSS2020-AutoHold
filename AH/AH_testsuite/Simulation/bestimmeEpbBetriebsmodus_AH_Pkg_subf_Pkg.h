/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg_H_
#define _bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg.h"
#include "aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* epbBetriebsmodus/ */ epbBetriebsmodus;
  kcg_bool /* automatikAnzeigen/ */ automatikAnzeigen;
  kcg_bool /* manuellAnzeigen/ */ manuellAnzeigen;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  SSM_ST_SM_Betriebsmodus /* SM_Betriebsmodus: */ SM_Betriebsmodus_state_nxt;
  kcg_bool /* SM_Betriebsmodus: */ SM_Betriebsmodus_reset_act;
  kcg_bool /* SM_Betriebsmodus: */ SM_Betriebsmodus_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM_Betriebsmodus:automatikModus:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */ Context_countDownTimer_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM_Betriebsmodus:manuellerModus:_L5=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */ Context_countDownTimer_3;
  outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg /* _L44=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus#1)/ */ Context_aktiviereEpbAutomatikModus_1;
  outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg /* _L43=(AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus#1)/ */ Context_aktiviereEpbManuellenModus_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_Betriebsmodus /* SM_Betriebsmodus: */ SM_Betriebsmodus_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM_Betriebsmodus:automatikModus:_L10/ */ _L10_automatikModus_SM_Betriebsmodus;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM_Betriebsmodus:automatikModus:_L9/ */ _L9_automatikModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:automatikModus:_L8/ */ _L8_automatikModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:automatikModus:_L6/ */ _L6_automatikModus_SM_Betriebsmodus;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM_Betriebsmodus:automatikModus:_L5/ */ _L5_automatikModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:automatikModus:_L3/ */ _L3_automatikModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:automatikModus:_L4/ */ _L4_automatikModus_SM_Betriebsmodus;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM_Betriebsmodus:automatikModus:_L1/ */ _L1_automatikModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:manuellerModus:_L9/ */ _L9_manuellerModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:manuellerModus:_L1/ */ _L1_manuellerModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:manuellerModus:_L2/ */ _L2_manuellerModus_SM_Betriebsmodus;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM_Betriebsmodus:manuellerModus:_L3/ */ _L3_manuellerModus_SM_Betriebsmodus;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM_Betriebsmodus:manuellerModus:_L4/ */ _L4_manuellerModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:manuellerModus:_L6/ */ _L6_manuellerModus_SM_Betriebsmodus;
  kcg_bool /* SM_Betriebsmodus:manuellerModus:_L5/ */ _L5_manuellerModus_SM_Betriebsmodus;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM_Betriebsmodus:manuellerModus:_L8/ */ _L8_manuellerModus_SM_Betriebsmodus;
  SSM_ST_SM_Betriebsmodus /* SM_Betriebsmodus: */ SM_Betriebsmodus_state_sel;
  SSM_TR_SM_Betriebsmodus /* SM_Betriebsmodus: */ SM_Betriebsmodus_fired_strong;
  SSM_TR_SM_Betriebsmodus /* SM_Betriebsmodus: */ SM_Betriebsmodus_fired;
  kcg_bool /* automatikAktivieren/ */ automatikAktivieren;
  kcg_bool /* manuellAktivieren/ */ manuellAktivieren;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L47/ */ _L47;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L48/ */ _L48;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L49/ */ _L49;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L50/ */ _L50;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L51/ */ _L51;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L52/ */ _L52;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L53/ */ _L53;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L54/ */ _L54;
} outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ */
extern void bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg(
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
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void bestimmeEpbBetriebsmodus_reset_AH_Pkg_subf_Pkg(
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void bestimmeEpbBetriebsmodus_init_AH_Pkg_subf_Pkg(
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

