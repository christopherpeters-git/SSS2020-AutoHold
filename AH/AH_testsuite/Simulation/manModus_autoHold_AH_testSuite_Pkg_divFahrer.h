/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _manModus_autoHold_AH_testSuite_Pkg_divFahrer_H_
#define _manModus_autoHold_AH_testSuite_Pkg_divFahrer_H_

#include "kcg_types.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* gaspedalStellung/ */ gaspedalStellung;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* getriebeWahlhebel/ */ getriebeWahlhebel;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* sicherheitsgurtSchalter/ */ sicherheitsgurtSchalter;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* fahrertuerSchalter/ */ fahrertuerSchalter;
  kcg_bool /* error/ */ error;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* taste_P/ */ taste_P;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* bremspedalKraft/ */ bremspedalKraft;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* zuendschalter/ */ zuendschalter;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* taste_HOLD/ */ taste_HOLD;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* aktZeit/ */ mem_aktZeit;
  kcg_bool init;
  kcg_bool init1;
  kcg_bool init2;
  kcg_bool init3;
  kcg_bool init4;
  kcg_bool init5;
  kcg_bool init6;
  kcg_bool init7;
  kcg_bool init8;
  kcg_bool init9;
  kcg_bool init10;
  kcg_bool init11;
  kcg_bool init12;
  kcg_bool init13;
  kcg_bool /* SM1:anfahren:SM2: */ SM2_reset_nxt_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2: */ SM2_reset_act_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_nxt_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L4/ */ _L4_gasGeben_SM2_anfahren_SM1;
  kcg_bool /* SM1:erneutAnfahren:SM2: */ SM2_reset_nxt_erneutAnfahren_SM1;
  kcg_bool /* SM1:erneutAnfahren:SM2: */ SM2_reset_act_erneutAnfahren_SM1;
  SSM_ST_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_state_nxt_erneutAnfahren_SM1;
  kcg_float64 /* SM1:erneutAnfahren:SM2:gasGeben:_L4/ */ _L4_gasGeben_SM2_erneutAnfahren_SM1;
  kcg_bool /* SM1:parken:SM5: */ SM5_reset_nxt_parken_SM1;
  kcg_bool /* SM1:parken:SM5: */ SM5_reset_act_parken_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_state_nxt_parken_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:manuellModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:manuellModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */ Context_countDownTimer_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */ Context_countDownTimer_3;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */ Context_countDownTimer_6;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */ Context_countDownTimer_7;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */ Context_countDownTimer_13;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_geloest:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */ Context_countDownTimer_10;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fzg_Steht1:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#11)/ */ Context_countDownTimer_11;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fahren1:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#12)/ */ Context_countDownTimer_12;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:manuellModusEinstellen: */ manuellModusEinstellen_weakb_clock_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_clock_anfahren_SM1;
  SSM_ST_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_clock_erneutAnfahren_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_clock_parken_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:zuendungEinschalten:_L1/ */ _L1_zuendungEinschalten_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:bremspedalDurchtreten:_L2/ */ _L2_bremspedalDurchtreten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEinstellen:_L26/ */ _L26_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L25/ */ _L25_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L17/ */ _L17_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L16/ */ _L16_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L15/ */ _L15_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L14/ */ _L14_manuellModusEinstellen_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEinstellen:_L13/ */ _L13_manuellModusEinstellen_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEinstellen:_L11/ */ _L11_manuellModusEinstellen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:manuellModusEinstellen:_L10/ */ _L10_manuellModusEinstellen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:manuellModusEinstellen:_L8/ */ _L8_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L7/ */ _L7_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L6/ */ _L6_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L4/ */ _L4_manuellModusEinstellen_SM1;
  kcg_bool /* SM1:manuellModusEinstellen:_L5/ */ _L5_manuellModusEinstellen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L18/ */ _L18_manuellModusEingestellt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L17/ */ _L17_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L16/ */ _L16_manuellModusEingestellt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L15/ */ _L15_manuellModusEingestellt_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L14/ */ _L14_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L12/ */ _L12_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L11/ */ _L11_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L5/ */ _L5_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L6/ */ _L6_manuellModusEingestellt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:manuellModusEingestellt:_L7/ */ _L7_manuellModusEingestellt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:manuellModusEingestellt:_L8/ */ _L8_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L10/ */ _L10_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L9/ */ _L9_manuellModusEingestellt_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L4/ */ _L4_manuellModusEingestellt_SM1;
  kcg_bool /* SM1:manuellModusEingestellt:_L3/ */ _L3_manuellModusEingestellt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:manuellModusEingestellt:_L2/ */ _L2_manuellModusEingestellt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L27/ */ _L27_cockpitanzeigeBleibtAus_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L26/ */ _L26_cockpitanzeigeBleibtAus_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:cockpitanzeigeBleibtAus:_L23/ */ _L23_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L18/ */ _L18_cockpitanzeigeBleibtAus_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:cockpitanzeigeBleibtAus:_L19/ */ _L19_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L20/ */ _L20_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L22/ */ _L22_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L21/ */ _L21_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L16/ */ _L16_cockpitanzeigeBleibtAus_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L14/ */ _L14_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L12/ */ _L12_cockpitanzeigeBleibtAus_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L9/ */ _L9_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L10/ */ _L10_cockpitanzeigeBleibtAus_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L11/ */ _L11_cockpitanzeigeBleibtAus_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L4/ */ _L4_cockpitanzeigeBleibtAus_SM1;
  kcg_bool /* SM1:cockpitanzeigeBleibtAus:_L5/ */ _L5_cockpitanzeigeBleibtAus_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:betriebsbremseLoesen:_L6/ */ _L6_betriebsbremseLoesen_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:betriebsbremseLoesen:_L5/ */ _L5_betriebsbremseLoesen_SM1;
  kcg_bool /* SM1:betriebsbremseLoesen:_L3/ */ _L3_betriebsbremseLoesen_SM1;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L8/ */ _L8_anfahrenVorbereiten_SM1;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L7/ */ _L7_anfahrenVorbereiten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L6/ */ _L6_anfahrenVorbereiten_SM1;
  kcg_bool /* SM1:anfahrenVorbereiten:_L2/ */ _L2_anfahrenVorbereiten_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_anfahren_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_strong_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_act_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_sel_anfahren_SM1;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L2/ */ _L2_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L3/ */ _L3_gasGeben_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:gasGeben:_L5/ */ _L5_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L6/ */ _L6_gasGeben_SM2_anfahren_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L7/ */ _L7_gasGeben_SM2_anfahren_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:getriebe_auf_D:_L1/ */ _L1_getriebe_auf_D_SM2_anfahren_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:bremspedalTreten:_L1/ */ _L1_bremspedalTreten_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:bremspedalTreten:_L2/ */ _L2_bremspedalTreten_SM2_anfahren_SM1;
  kcg_bool /* SM1:fahren:_L2/ */ _L2_fahren_SM1;
  kcg_bool /* SM1:fahren:_L1/ */ _L1_fahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren:_L3/ */ _L3_fahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren:_L4/ */ _L4_fahren_SM1;
  kcg_bool /* SM1:fahren:_L5/ */ _L5_fahren_SM1;
  kcg_bool /* SM1:fahren:_L6/ */ _L6_fahren_SM1;
  kcg_bool /* SM1:annaehern_an_Ampel:_L14/ */ _L14_annaehern_an_Ampel_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:annaehern_an_Ampel:_L13/ */ _L13_annaehern_an_Ampel_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:annaehern_an_Ampel:_L12/ */ _L12_annaehern_an_Ampel_SM1;
  kcg_float64 /* SM1:annaehern_an_Ampel:_L11/ */ _L11_annaehern_an_Ampel_SM1;
  kcg_float64 /* SM1:annaehern_an_Ampel:_L9/ */ _L9_annaehern_an_Ampel_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht:_L16/ */ _L16_fzg_Steht_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht:_L15/ */ _L15_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L12/ */ _L12_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L11/ */ _L11_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L5/ */ _L5_fzg_Steht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht:_L6/ */ _L6_fzg_Steht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht:_L7/ */ _L7_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L8/ */ _L8_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L10/ */ _L10_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L9/ */ _L9_fzg_Steht_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht:_L2/ */ _L2_fzg_Steht_SM1;
  kcg_bool /* SM1:fzg_Steht:_L3/ */ _L3_fzg_Steht_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht:_L4/ */ _L4_fzg_Steht_SM1;
  kcg_float64 /* SM1:fzg_Steht:_L1/ */ _L1_fzg_Steht_SM1;
  SSM_TR_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_fired_erneutAnfahren_SM1;
  SSM_TR_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_fired_strong_erneutAnfahren_SM1;
  SSM_ST_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_state_act_erneutAnfahren_SM1;
  SSM_ST_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_state_sel_erneutAnfahren_SM1;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* SM1:erneutAnfahren:SM2:gasGeben:_L2/ */ _L2_gasGeben_SM2_erneutAnfahren_SM1;
  kcg_float64 /* SM1:erneutAnfahren:SM2:gasGeben:_L3/ */ _L3_gasGeben_SM2_erneutAnfahren_SM1;
  kcg_bool /* SM1:erneutAnfahren:SM2:gasGeben:_L5/ */ _L5_gasGeben_SM2_erneutAnfahren_SM1;
  kcg_float64 /* SM1:erneutAnfahren:SM2:gasGeben:_L6/ */ _L6_gasGeben_SM2_erneutAnfahren_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:erneutAnfahren:SM2:gasGeben:_L7/ */ _L7_gasGeben_SM2_erneutAnfahren_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:erneutAnfahren:SM2:getriebe_auf_D:_L1/ */ _L1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:erneutAnfahren:SM2:bremspedalTreten:_L1/ */ _L1_bremspedalTreten_SM2_erneutAnfahren_SM1;
  kcg_bool /* SM1:erneutAnfahren:SM2:bremspedalTreten:_L2/ */ _L2_bremspedalTreten_SM2_erneutAnfahren_SM1;
  SSM_TR_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_fired_parken_SM1;
  SSM_TR_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_fired_strong_parken_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_state_act_parken_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_state_sel_parken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:EPB_nicht_angezogen:_L1/ */ _L1_EPB_nicht_angezogen_SM5_parken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:EPB_nicht_angezogen:_L2/ */ _L2_EPB_nicht_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_nicht_angezogen:_L3/ */ _L3_EPB_nicht_angezogen_SM5_parken_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:parken:SM5:EPB_nicht_angezogen:_L9/ */ _L9_EPB_nicht_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_nicht_angezogen:_L7/ */ _L7_EPB_nicht_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_nicht_angezogen:_L8/ */ _L8_EPB_nicht_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_nicht_angezogen:_L6/ */ _L6_EPB_nicht_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_nicht_angezogen:_L5/ */ _L5_EPB_nicht_angezogen_SM5_parken_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:parken:SM5:EPB_nicht_angezogen:_L4/ */ _L4_EPB_nicht_angezogen_SM5_parken_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:getriebeWahlhebelNach_P:_L1/ */ _L1_getriebeWahlhebelNach_P_SM5_parken_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:bremseDurchtreten:_L1/ */ _L1_bremseDurchtreten_SM5_parken_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:Taste_P_druecken:_L5/ */ _L5_Taste_P_druecken_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:Taste_P_druecken:_L4/ */ _L4_Taste_P_druecken_SM1;
  kcg_bool /* SM1:Taste_P_druecken:_L2/ */ _L2_Taste_P_druecken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_geloest:_L14/ */ _L14_EPB_geloest_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_geloest:_L8/ */ _L8_EPB_geloest_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_geloest:_L9/ */ _L9_EPB_geloest_SM1;
  kcg_bool /* SM1:EPB_geloest:_L11/ */ _L11_EPB_geloest_SM1;
  kcg_bool /* SM1:EPB_geloest:_L10/ */ _L10_EPB_geloest_SM1;
  kcg_bool /* SM1:EPB_geloest:_L12/ */ _L12_EPB_geloest_SM1;
  kcg_bool /* SM1:EPB_geloest:_L13/ */ _L13_EPB_geloest_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_geloest:_L6/ */ _L6_EPB_geloest_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_geloest:_L4/ */ _L4_EPB_geloest_SM1;
  kcg_bool /* SM1:EPB_geloest:_L3/ */ _L3_EPB_geloest_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_geloest:_L1/ */ _L1_EPB_geloest_SM1;
  kcg_bool /* SM1:fzg_Steht1:_L5/ */ _L5_fzg_Steht1_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht1:_L6/ */ _L6_fzg_Steht1_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht1:_L7/ */ _L7_fzg_Steht1_SM1;
  kcg_bool /* SM1:fzg_Steht1:_L8/ */ _L8_fzg_Steht1_SM1;
  kcg_bool /* SM1:fzg_Steht1:_L10/ */ _L10_fzg_Steht1_SM1;
  kcg_bool /* SM1:fzg_Steht1:_L9/ */ _L9_fzg_Steht1_SM1;
  kcg_float64 /* SM1:fzg_Steht1:_L1/ */ _L1_fzg_Steht1_SM1;
  kcg_bool /* SM1:fahren1:_L2/ */ _L2_fahren1_SM1;
  kcg_bool /* SM1:fahren1:_L1/ */ _L1_fahren1_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren1:_L3/ */ _L3_fahren1_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren1:_L4/ */ _L4_fahren1_SM1;
  kcg_bool /* SM1:fahren1:_L5/ */ _L5_fahren1_SM1;
  kcg_bool /* SM1:fahren1:_L6/ */ _L6_fahren1_SM1;
  kcg_bool /* SM1:anhalten:_L14/ */ _L14_anhalten_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anhalten:_L13/ */ _L13_anhalten_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anhalten:_L12/ */ _L12_anhalten_SM1;
  kcg_float64 /* SM1:anhalten:_L11/ */ _L11_anhalten_SM1;
  kcg_float64 /* SM1:anhalten:_L9/ */ _L9_anhalten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgAbstellen:_L3/ */ _L3_fzgAbstellen_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgAbgestellt:_L3/ */ _L3_fzgAbgestellt_SM1;
  kcg_bool /* SM1:fzgAbgestellt:_L2/ */ _L2_fzgAbgestellt_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgAbgestellt:_L1/ */ _L1_fzgAbgestellt_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* ready/ */ ready;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L8/ */ _L8;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L9/ */ _L9;
} outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::divFahrer::manModus_autoHold/ */
extern void manModus_autoHold_AH_testSuite_Pkg_divFahrer(
  /* betriebsBremse/ */
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg betriebsBremse,
  /* cockpitAnzeige_Hold/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_Hold,
  /* cockpitAnzeige_AutoHoldMode/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_AutoHoldMode,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* cockpitAnzeige_EPBMode_Automatik/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_EPBMode_Automatik,
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* cockpitAnzeige_EPBMode_Manuell/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_EPBMode_Manuell,
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg led_P,
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_P,
  /* fzgLaengsneigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsneigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manModus_autoHold_reset_AH_testSuite_Pkg_divFahrer(
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manModus_autoHold_init_AH_testSuite_Pkg_divFahrer(
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _manModus_autoHold_AH_testSuite_Pkg_divFahrer_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** manModus_autoHold_AH_testSuite_Pkg_divFahrer.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

