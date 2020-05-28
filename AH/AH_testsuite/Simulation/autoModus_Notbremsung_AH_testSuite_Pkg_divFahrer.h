/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */
#ifndef _autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer_H_
#define _autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer_H_

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
  kcg_float64 /* gaspedalStellung/ */ gaspedalStellung;
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
  kcg_bool /* SM1:anfahren:SM2: */ SM2_reset_nxt_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2: */ SM2_reset_act_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_nxt_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L4/ */ _L4_gasGeben_SM2_anfahren_SM1;
  kcg_bool /* SM1:Notbremse:SM6: */ SM6_reset_nxt_Notbremse_SM1;
  kcg_bool /* SM1:Notbremse:SM6: */ SM6_reset_act_Notbremse_SM1;
  SSM_ST_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_state_nxt_Notbremse_SM1;
  kcg_bool /* SM1:autoHoldEinschalten:SM4: */ SM4_reset_nxt_autoHoldEinschalten_SM1;
  kcg_bool /* SM1:autoHoldEinschalten:SM4: */ SM4_reset_act_autoHoldEinschalten_SM1;
  SSM_ST_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_state_nxt_autoHoldEinschalten_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */ Context_countDownTimer_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */ Context_countDownTimer_3;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */ Context_countDownTimer_4;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_arretiert:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */ Context_countDownTimer_5;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */ Context_countDownTimer_6;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:NotbremsungAusloesen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */ Context_countDownTimer_10;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* SM1:EPB_gezogen:_L30=(AhTypes_Pkg::utils_Pkg::countDownTimer#23)/ */ Context_countDownTimer_23;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:automastikModusEinstellen: */ automastikModusEinstellen_weakb_clock_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_clock_anfahren_SM1;
  SSM_ST_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_clock_Notbremse_SM1;
  SSM_ST_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_clock_autoHoldEinschalten_SM1;
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
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert:_L15/ */ _L15_EPB_arretiert_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_arretiert:_L8/ */ _L8_EPB_arretiert_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_arretiert:_L9/ */ _L9_EPB_arretiert_SM1;
  kcg_bool /* SM1:EPB_arretiert:_L11/ */ _L11_EPB_arretiert_SM1;
  kcg_bool /* SM1:EPB_arretiert:_L10/ */ _L10_EPB_arretiert_SM1;
  kcg_bool /* SM1:EPB_arretiert:_L12/ */ _L12_EPB_arretiert_SM1;
  kcg_bool /* SM1:EPB_arretiert:_L13/ */ _L13_EPB_arretiert_SM1;
  kcg_bool /* SM1:EPB_arretiert:_L3/ */ _L3_EPB_arretiert_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_arretiert:_L1/ */ _L1_EPB_arretiert_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_anfahren_SM1;
  SSM_TR_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_fired_strong_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_act_anfahren_SM1;
  SSM_ST_SM2_anfahren_SM1 /* SM1:anfahren:SM2: */ SM2_state_sel_anfahren_SM1;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L7/ */ _L7_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L6/ */ _L6_gasGeben_SM2_anfahren_SM1;
  kcg_float64 /* SM1:anfahren:SM2:gasGeben:_L3/ */ _L3_gasGeben_SM2_anfahren_SM1;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:gasGeben:_L2/ */ _L2_gasGeben_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:gasGeben:_L8/ */ _L8_gasGeben_SM2_anfahren_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:getriebe_auf_D:_L1/ */ _L1_getriebe_auf_D_SM2_anfahren_SM1;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* SM1:anfahren:SM2:bremspedalTreten:_L1/ */ _L1_bremspedalTreten_SM2_anfahren_SM1;
  kcg_bool /* SM1:anfahren:SM2:bremspedalTreten:_L2/ */ _L2_bremspedalTreten_SM2_anfahren_SM1;
  kcg_bool /* SM1:fahren:_L2/ */ _L2_fahren_SM1;
  kcg_bool /* SM1:fahren:_L1/ */ _L1_fahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren:_L3/ */ _L3_fahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:fahren:_L4/ */ _L4_fahren_SM1;
  kcg_bool /* SM1:fahren:_L5/ */ _L5_fahren_SM1;
  kcg_bool /* SM1:fahren:_L6/ */ _L6_fahren_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:NotbremsungAusloesen:_L8/ */ _L8_NotbremsungAusloesen_SM1;
  kcg_bool /* SM1:NotbremsungAusloesen:_L2/ */ _L2_NotbremsungAusloesen_SM1;
  kcg_bool /* SM1:NotbremsungAusloesen:_L3/ */ _L3_NotbremsungAusloesen_SM1;
  kcg_bool /* SM1:NotbremsungAusloesen:_L5/ */ _L5_NotbremsungAusloesen_SM1;
  kcg_bool /* SM1:NotbremsungAusloesen:_L4/ */ _L4_NotbremsungAusloesen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:NotbremsungAusloesen:_L7/ */ _L7_NotbremsungAusloesen_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:NotbremsungAusloesen:_L1/ */ _L1_NotbremsungAusloesen_SM1;
  SSM_TR_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_fired_Notbremse_SM1;
  SSM_TR_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_fired_strong_Notbremse_SM1;
  SSM_ST_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_state_act_Notbremse_SM1;
  SSM_ST_SM6_Notbremse_SM1 /* SM1:Notbremse:SM6: */ SM6_state_sel_Notbremse_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:Notbremse:SM6:EPB_angezogen:_L3/ */ _L3_EPB_angezogen_SM6_Notbremse_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:Notbremse:SM6:EPB_angezogen:_L2/ */ _L2_EPB_angezogen_SM6_Notbremse_SM1;
  kcg_bool /* SM1:Notbremse:SM6:EPB_angezogen:_L1/ */ _L1_EPB_angezogen_SM6_Notbremse_SM1;
  kcg_float64 /* SM1:Notbremse:SM6:Fuss_vom_Gas:_L1/ */ _L1_Fuss_vom_Gas_SM6_Notbremse_SM1;
  SSM_TR_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_fired_autoHoldEinschalten_SM1;
  SSM_TR_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_fired_strong_autoHoldEinschalten_SM1;
  SSM_ST_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_state_act_autoHoldEinschalten_SM1;
  SSM_ST_SM4_autoHoldEinschalten_SM1 /* SM1:autoHoldEinschalten:SM4: */ SM4_state_sel_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldLoesen:_L1/ */ _L1_HoldLoesen_SM4_autoHoldEinschalten_SM1;
  kcg_bool /* SM1:autoHoldEinschalten:SM4:HoldLoesen:_L4/ */ _L4_HoldLoesen_SM4_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldLoesen:_L3/ */ _L3_HoldLoesen_SM4_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldLoesen:_L2/ */ _L2_HoldLoesen_SM4_autoHoldEinschalten_SM1;
  kcg_bool /* SM1:autoHoldEinschalten:SM4:HoldLoesen:_L5/ */ _L5_HoldLoesen_SM4_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldDruecken:_L1/ */ _L1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldDruecken:_L2/ */ _L2_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:autoHoldEinschalten:SM4:HoldDruecken:_L3/ */ _L3_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  kcg_bool /* SM1:autoHoldEinschalten:SM4:HoldDruecken:_L4/ */ _L4_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_druecken:_L1/ */ _L1_EPB_druecken_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L10/ */ _L10_EPB_gedrueckt_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L9/ */ _L9_EPB_gedrueckt_SM1;
  kcg_bool /* SM1:EPB_gedrueckt:_L8/ */ _L8_EPB_gedrueckt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L7/ */ _L7_EPB_gedrueckt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L6/ */ _L6_EPB_gedrueckt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L5/ */ _L5_EPB_gedrueckt_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gedrueckt:_L4/ */ _L4_EPB_gedrueckt_SM1;
  kcg_bool /* SM1:EPB_gedrueckt:_L3/ */ _L3_EPB_gedrueckt_SM1;
  kcg_bool /* SM1:EPB_gedrueckt:_L2/ */ _L2_EPB_gedrueckt_SM1;
  kcg_bool /* SM1:EPB_gedrueckt:_L1/ */ _L1_EPB_gedrueckt_SM1;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* SM1:Fzg_Abstellen:_L2/ */ _L2_Fzg_Abstellen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_gezogen:_L28/ */ _L28_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L29/ */ _L29_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L31/ */ _L31_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L30/ */ _L30_EPB_gezogen_SM1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* SM1:EPB_gezogen:_L32/ */ _L32_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L33/ */ _L33_EPB_gezogen_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L10/ */ _L10_EPB_gezogen_SM1;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L9/ */ _L9_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L8/ */ _L8_EPB_gezogen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L7/ */ _L7_EPB_gezogen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L6/ */ _L6_EPB_gezogen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L5/ */ _L5_EPB_gezogen_SM1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* SM1:EPB_gezogen:_L4/ */ _L4_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L3/ */ _L3_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L2/ */ _L2_EPB_gezogen_SM1;
  kcg_bool /* SM1:EPB_gezogen:_L1/ */ _L1_EPB_gezogen_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* ready/ */ ready;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L3/ */ _L3;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L4/ */ _L4;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L5/ */ _L5;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L7/ */ _L7;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L10/ */ _L10;
} outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer;

/* ===========  node initialization and cycle functions  =========== */
/* AH_testSuite_Pkg::divFahrer::autoModus_Notbremsung/ */
extern void autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer(
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
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void autoModus_Notbremsung_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void autoModus_Notbremsung_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer.h
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

