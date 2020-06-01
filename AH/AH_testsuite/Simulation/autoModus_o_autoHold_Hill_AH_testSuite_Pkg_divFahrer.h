/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */
#ifndef _autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer_H_
#define _autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer_H_

#include "kcg_types.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* zuendschalter/ */ zuendschalter;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* getriebeWahlhebel/ */ getriebeWahlhebel;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* fahrertuerSchalter/ */ fahrertuerSchalter;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* sicherheitsgurtSchalter/ */ sicherheitsgurtSchalter;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* taste_P/ */ taste_P;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* taste_Hold/ */ taste_Hold;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* gaspedalStellung/ */ gaspedalStellung;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* bremspedalKraft/ */ bremspedalKraft;
  kcg_bool /* error/ */ error;
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
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */ Context_countDownTimer_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */ Context_countDownTimer_3;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */ Context_countDownTimer_4;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */ Context_countDownTimer_5;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */ Context_countDownTimer_6;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */ Context_countDownTimer_7;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:weiterfahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */ Context_countDownTimer_8;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fahrzeugSteht:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#9)/ */ Context_countDownTimer_9;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:automastikModusEinstellen: */ automastikModusEinstellen_weakb_clock_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_clock_anfahren_SM1;
  SSM_ST_SM2_erneutAnfahren_SM1 /* SM1:erneutAnfahren:SM2: */ SM2_clock_erneutAnfahren_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_clock_parken_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:zuendungEinschalten:_L1/ */ _L1_zuendungEinschalten_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:bremspedalDurchtreten:_L2/ */ _L2_bremspedalDurchtreten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:automastikModusEinstellen:_L26/ */ _L26_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L25/ */ _L25_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L17/ */ _L17_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L16/ */ _L16_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L15/ */ _L15_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L14/ */ _L14_automastikModusEinstellen_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:automastikModusEinstellen:_L13/ */ _L13_automastikModusEinstellen_SM1;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* SM1:automastikModusEinstellen:_L11/ */ _L11_automastikModusEinstellen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:automastikModusEinstellen:_L10/ */ _L10_automastikModusEinstellen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:automastikModusEinstellen:_L8/ */ _L8_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L7/ */ _L7_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L6/ */ _L6_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L4/ */ _L4_automastikModusEinstellen_SM1;
  kcg_bool /* SM1:automastikModusEinstellen:_L5/ */ _L5_automastikModusEinstellen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:automatikModusEingestellt:_L15/ */ _L15_automatikModusEingestellt_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:automatikModusEingestellt:_L14/ */ _L14_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L12/ */ _L12_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L11/ */ _L11_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L5/ */ _L5_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L6/ */ _L6_automatikModusEingestellt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:automatikModusEingestellt:_L7/ */ _L7_automatikModusEingestellt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:automatikModusEingestellt:_L8/ */ _L8_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L10/ */ _L10_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L9/ */ _L9_automatikModusEingestellt_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:automatikModusEingestellt:_L4/ */ _L4_automatikModusEingestellt_SM1;
  kcg_bool /* SM1:automatikModusEingestellt:_L3/ */ _L3_automatikModusEingestellt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:automatikModusEingestellt:_L2/ */ _L2_automatikModusEingestellt_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L26/ */ _L26_cockpitanzeigeBleibtAus_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:cockpitanzeigeBleibtAus:_L25/ */ _L25_cockpitanzeigeBleibtAus_SM1;
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
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_angezogen:_L8/ */ _L8_EPB_angezogen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_angezogen:_L9/ */ _L9_EPB_angezogen_SM1;
  kcg_bool /* SM1:EPB_angezogen:_L11/ */ _L11_EPB_angezogen_SM1;
  kcg_bool /* SM1:EPB_angezogen:_L10/ */ _L10_EPB_angezogen_SM1;
  kcg_bool /* SM1:EPB_angezogen:_L12/ */ _L12_EPB_angezogen_SM1;
  kcg_bool /* SM1:EPB_angezogen:_L13/ */ _L13_EPB_angezogen_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_angezogen:_L7/ */ _L7_EPB_angezogen_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_angezogen:_L6/ */ _L6_EPB_angezogen_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_angezogen:_L4/ */ _L4_EPB_angezogen_SM1;
  kcg_bool /* SM1:EPB_angezogen:_L3/ */ _L3_EPB_angezogen_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_angezogen:_L1/ */ _L1_EPB_angezogen_SM1;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L8/ */ _L8_anfahrenVorbereiten_SM1;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L7/ */ _L7_anfahrenVorbereiten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahrenVorbereiten:_L6/ */ _L6_anfahrenVorbereiten_SM1;
  kcg_bool /* SM1:anfahrenVorbereiten:_L2/ */ _L2_anfahrenVorbereiten_SM1;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L19/ */ _L19_EPB_arretiert_und_HHVentil_frei_SM1;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L18/ */ _L18_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L17/ */ _L17_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L16/ */ _L16_EPB_arretiert_und_HHVentil_frei_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L15/ */ _L15_EPB_arretiert_und_HHVentil_frei_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L8/ */ _L8_EPB_arretiert_und_HHVentil_frei_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L9/ */ _L9_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L11/ */ _L11_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L10/ */ _L10_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L12/ */ _L12_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L13/ */ _L13_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool /* SM1:EPB_arretiert_und_HHVentil_frei:_L3/ */ _L3_EPB_arretiert_und_HHVentil_frei_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert_und_HHVentil_frei:_L1/ */ _L1_EPB_arretiert_und_HHVentil_frei_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_anfahren_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_strong_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_act_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_sel_anfahren_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L7/ */ _L7_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L6/ */ _L6_gasGeben_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:gasGeben:_L5/ */ _L5_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L3/ */ _L3_gasGeben_SM2_anfahren_SM1;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L2/ */ _L2_gasGeben_SM2_anfahren_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:getriebe_auf_D:_L1/ */ _L1_getriebe_auf_D_SM2_anfahren_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:bremspedalTreten:_L1/ */ _L1_bremspedalTreten_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:bremspedalTreten:_L2/ */ _L2_bremspedalTreten_SM2_anfahren_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:haltenAmBerg:_L15/ */ _L15_haltenAmBerg_SM1;
  kcg_float64 /* SM1:haltenAmBerg:_L9/ */ _L9_haltenAmBerg_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L21/ */ _L21_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L20/ */ _L20_fzg_Steht_HHVentil_gesperrt_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L17/ */ _L17_fzg_Steht_HHVentil_gesperrt_SM1;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L15/ */ _L15_fzg_Steht_HHVentil_gesperrt_SM1;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L14/ */ _L14_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L12/ */ _L12_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L11/ */ _L11_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L5/ */ _L5_fzg_Steht_HHVentil_gesperrt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L6/ */ _L6_fzg_Steht_HHVentil_gesperrt_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L7/ */ _L7_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L8/ */ _L8_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L10/ */ _L10_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L9/ */ _L9_fzg_Steht_HHVentil_gesperrt_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L2/ */ _L2_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool /* SM1:fzg_Steht_HHVentil_gesperrt:_L3/ */ _L3_fzg_Steht_HHVentil_gesperrt_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzg_Steht_HHVentil_gesperrt:_L4/ */ _L4_fzg_Steht_HHVentil_gesperrt_SM1;
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
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:anhaltenZumBeenden:_L26/ */ _L26_anhaltenZumBeenden_SM1;
  kcg_float64 /* SM1:anhaltenZumBeenden:_L25/ */ _L25_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L24/ */ _L24_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L23/ */ _L23_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L22/ */ _L22_anhaltenZumBeenden_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:anhaltenZumBeenden:_L21/ */ _L21_anhaltenZumBeenden_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:anhaltenZumBeenden:_L20/ */ _L20_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L19/ */ _L19_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L18/ */ _L18_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L17/ */ _L17_anhaltenZumBeenden_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:anhaltenZumBeenden:_L16/ */ _L16_anhaltenZumBeenden_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:anhaltenZumBeenden:_L15/ */ _L15_anhaltenZumBeenden_SM1;
  kcg_bool /* SM1:anhaltenZumBeenden:_L14/ */ _L14_anhaltenZumBeenden_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anhaltenZumBeenden:_L13/ */ _L13_anhaltenZumBeenden_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:anhaltenZumBeenden:_L12/ */ _L12_anhaltenZumBeenden_SM1;
  kcg_float64 /* SM1:anhaltenZumBeenden:_L11/ */ _L11_anhaltenZumBeenden_SM1;
  kcg_float64 /* SM1:anhaltenZumBeenden:_L9/ */ _L9_anhaltenZumBeenden_SM1;
  kcg_float64 /* SM1:fzgSteht:_L1/ */ _L1_fzgSteht_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L58/ */ _L58_fzgSteht_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L57/ */ _L57_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L55/ */ _L55_fzgSteht_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L54/ */ _L54_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L43/ */ _L43_fzgSteht_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L42/ */ _L42_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L32/ */ _L32_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L34/ */ _L34_fzgSteht_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L35/ */ _L35_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L36/ */ _L36_fzgSteht_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fzgSteht:_L38/ */ _L38_fzgSteht_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fzgSteht:_L40/ */ _L40_fzgSteht_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L41/ */ _L41_fzgSteht_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L11/ */ _L11_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L5/ */ _L5_fzgSteht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzgSteht:_L6/ */ _L6_fzgSteht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fzgSteht:_L7/ */ _L7_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L8/ */ _L8_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L10/ */ _L10_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L9/ */ _L9_fzgSteht_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:fzgSteht:_L2/ */ _L2_fzgSteht_SM1;
  kcg_bool /* SM1:fzgSteht:_L3/ */ _L3_fzgSteht_SM1;
  SSM_TR_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_fired_parken_SM1;
  SSM_TR_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_fired_strong_parken_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_state_act_parken_SM1;
  SSM_ST_SM5_parken_SM1 /* SM1:parken:SM5: */ SM5_state_sel_parken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:EPB_angezogen:_L1/ */ _L1_EPB_angezogen_SM5_parken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:EPB_angezogen:_L2/ */ _L2_EPB_angezogen_SM5_parken_SM1;
  kcg_bool /* SM1:parken:SM5:EPB_angezogen:_L3/ */ _L3_EPB_angezogen_SM5_parken_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:getriebeWahlhebelNach_P:_L1/ */ _L1_getriebeWahlhebelNach_P_SM5_parken_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:parken:SM5:bremseDurchtreten:_L1/ */ _L1_bremseDurchtreten_SM5_parken_SM1;
  kcg_bool /* SM1:weiterfahren:_L2/ */ _L2_weiterfahren_SM1;
  kcg_bool /* SM1:weiterfahren:_L1/ */ _L1_weiterfahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:weiterfahren:_L3/ */ _L3_weiterfahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:weiterfahren:_L4/ */ _L4_weiterfahren_SM1;
  kcg_bool /* SM1:weiterfahren:_L5/ */ _L5_weiterfahren_SM1;
  kcg_bool /* SM1:weiterfahren:_L6/ */ _L6_weiterfahren_SM1;
  kcg_bool /* SM1:fahrzeugSteht:_L9/ */ _L9_fahrzeugSteht_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fahrzeugSteht:_L11/ */ _L11_fahrzeugSteht_SM1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* SM1:fahrzeugSteht:_L10/ */ _L10_fahrzeugSteht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahrzeugSteht:_L8/ */ _L8_fahrzeugSteht_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahrzeugSteht:_L1/ */ _L1_fahrzeugSteht_SM1;
  kcg_bool /* SM1:fahrzeugSteht:_L2/ */ _L2_fahrzeugSteht_SM1;
  kcg_bool /* SM1:fahrzeugSteht:_L3/ */ _L3_fahrzeugSteht_SM1;
  kcg_bool /* SM1:fahrzeugSteht:_L5/ */ _L5_fahrzeugSteht_SM1;
  kcg_bool /* SM1:fahrzeugSteht:_L4/ */ _L4_fahrzeugSteht_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* ready/ */ ready;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L13/ */ _L13;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L14/ */ _L14;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L15/ */ _L15;
} outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold_gefaelle/ */
extern void autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer(
  /* led_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg led_P,
  /* cockpitAnzeige_P/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_P,
  /* cockpitAnzeige_AutoHoldMode/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_AutoHoldMode,
  /* cockpitAnzeige_Hold/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_Hold,
  /* cockpitAnzeige_EPBMode_Manuell/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_EPBMode_Manuell,
  /* cockpitAnzeige_EPBMode_Automatik/ */
  on_off_element_T_AhTypes_Pkg_ah_Pkg cockpitAnzeige_EPBMode_Automatik,
  /* betriebsBremse/ */
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg betriebsBremse,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* fzgLaengsneigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsneigung,
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* betriebsbremssperrventil/ */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg betriebsbremssperrventil,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void autoModus_o_autoHold_Hill_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void autoModus_o_autoHold_Hill_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer.h
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

