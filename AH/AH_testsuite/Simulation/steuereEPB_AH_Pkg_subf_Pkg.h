/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */
#ifndef _steuereEPB_AH_Pkg_subf_Pkg_H_
#define _steuereEPB_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "aktiviereNotbremse_AH_Pkg_subf_Pkg.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"
#include "deaktiviereEpbManuell_AH_Pkg_subf_Pkg.h"
#include "deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h"
#include "aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h"
#include "aktiviereEpbManuell_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* EPB_Bremse/ */ EPB_Bremse;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* led_P/ */ led_P;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_P/ */ cockpitAnzeige_P;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  SSM_ST_EPB_SM /* EPB_SM: */ EPB_SM_state_nxt;
  kcg_bool /* EPB_SM: */ EPB_SM_reset_act;
  kcg_bool /* EPB_SM: */ EPB_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg /* _L31=(AH_Pkg::subf_Pkg::deaktiviereEpbManuell#2)/ */ Context_deaktiviereEpbManuell_2;
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg /* _L23=(AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch#2)/ */ Context_deaktiviereEpbAutomatisch_2;
  outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg /* _L1=(AH_Pkg::subf_Pkg::aktiviereEpbManuell#1)/ */ Context_aktiviereEpbManuell_1;
  outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg /* _L5=(AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch#1)/ */ Context_aktiviereEpbAutomatisch_1;
  outC_aktiviereNotbremse_AH_Pkg_subf_Pkg /* _L32=(AH_Pkg::subf_Pkg::aktiviereNotbremse#1)/ */ Context_aktiviereNotbremse_1;
  /* ------------------ clocks of observable data -------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen: */ ZuendschalterWhen_clock_epb_arretiert_EPB_SM;
  SSM_ST_EPB_SM /* EPB_SM: */ EPB_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:_L1/ */ _L1_epb_arretiert_EPB_SM;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L1/ */ _L1_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L2/ */ _L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  kcg_bool /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L4/ */ _L4_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  kcg_bool /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L3/ */ _L3_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  kcg_bool /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L5/ */ _L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  kcg_bool /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L6/ */ _L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L8/ */ _L8_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_off:_L9/ */ _L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_arretiert:ZuendschalterWhen:sw2_on:_L1/ */ _L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_geloest:_L4/ */ _L4_epb_geloest_EPB_SM;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* EPB_SM:epb_geloest:_L3/ */ _L3_epb_geloest_EPB_SM;
  SSM_ST_EPB_SM /* EPB_SM: */ EPB_SM_state_sel;
  SSM_TR_EPB_SM /* EPB_SM: */ EPB_SM_fired_strong;
  SSM_TR_EPB_SM /* EPB_SM: */ EPB_SM_fired;
  kcg_bool /* loeseEPB/ */ loeseEPB;
  kcg_bool /* arretiereEPB/ */ arretiereEPB;
  kcg_bool /* _L1/ */ _L1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L31/ */ _L31;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L30/ */ _L30;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L29/ */ _L29;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L28/ */ _L28;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L27/ */ _L27;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L26/ */ _L26;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L21/ */ _L21;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L32/ */ _L32;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
} outC_steuereEPB_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::steuereEPB/ */
extern void steuereEPB_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktiviereEPB/ */
  kcg_bool aktiviereEPB,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_steuereEPB_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void steuereEPB_reset_AH_Pkg_subf_Pkg(
  outC_steuereEPB_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void steuereEPB_init_AH_Pkg_subf_Pkg(
  outC_steuereEPB_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _steuereEPB_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** steuereEPB_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

