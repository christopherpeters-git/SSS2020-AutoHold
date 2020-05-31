/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config E:/mkannathasan/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer.h"

/* AH_testSuite_Pkg::divFahrer::autoModus_autoHold_HillHold_NICHTFERTIG/ */
void autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer(
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
  outC_autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer *outC)
{
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft_partial;
  /* error/ */
  kcg_bool error_partial;
  /* ready/ */
  kcg_bool ready_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _1_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _2_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _3_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _4_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _5_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _6_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _7_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _8_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _9_error_partial;
  /* ready/ */
  kcg_bool _10_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _11_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _12_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _13_SM1_fired_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _14_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _15_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _16_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _17_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _18_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _19_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _20_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _21_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _22_error_partial;
  /* ready/ */
  kcg_bool _23_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _24_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _25_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _26_SM1_fired_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _27_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _28_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _29_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _30_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _31_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _32_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _33_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _34_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _35_error_partial;
  /* ready/ */
  kcg_bool _36_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _37_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _38_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _39_SM1_fired_partial;
  kcg_bool noname;
  /* SM1:automastikModusEinstellen:<1> */
  kcg_bool tr_1_guard_automastikModusEinstellen_SM1;
  /* SM1: */
  SSM_TR_SM1 _40_SM1_fired_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _42_SM1_state_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _43_SM1_fired_partial;
  /* SM1: */
  kcg_bool _44_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _45_SM1_state_nxt_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _46_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _47_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _48_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _49_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _50_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _51_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _52_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _53_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _54_error_partial;
  /* ready/ */
  kcg_bool _55_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _56_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _57_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _58_SM1_fired_partial;
  /* SM1:automatikModusEingestellt:<1> */
  kcg_bool tr_1_guard_automatikModusEingestellt_SM1;
  kcg_bool _59_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _60_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _61_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _62_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _63_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _64_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _65_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _66_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _67_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _68_error_partial;
  /* ready/ */
  kcg_bool _69_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _70_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _71_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _72_SM1_fired_partial;
  /* SM1:cockpitanzeigeBleibtAus:<1> */
  kcg_bool tr_1_guard_cockpitanzeigeBleibtAus_SM1;
  kcg_bool _73_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _74_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _75_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _76_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _77_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _78_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _79_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _80_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _81_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _82_error_partial;
  /* ready/ */
  kcg_bool _83_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _84_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _85_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _86_SM1_fired_partial;
  /* SM1:betriebsbremseLoesen:<1> */
  kcg_bool tr_1_guard_betriebsbremseLoesen_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _87_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _88_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _89_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _90_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _91_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _92_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _93_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _94_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _95_error_partial;
  /* ready/ */
  kcg_bool _96_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _97_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _98_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _99_SM1_fired_partial;
  /* SM1:EPB_angezogen:<1> */
  kcg_bool tr_1_guard_EPB_angezogen_SM1;
  kcg_bool _100_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _101_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _102_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _103_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _104_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _105_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _106_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _107_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _108_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _109_error_partial;
  /* ready/ */
  kcg_bool _110_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _111_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _112_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _113_SM1_fired_partial;
  /* SM1:anfahrenVorbereiten:<1> */
  kcg_bool tr_1_guard_anfahrenVorbereiten_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _114_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _115_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _116_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _117_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _118_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _119_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _120_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _121_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _122_error_partial;
  /* ready/ */
  kcg_bool _123_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _124_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _125_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _126_SM1_fired_partial;
  /* SM1:EPB_arretiert:<1> */
  kcg_bool tr_1_guard_EPB_arretiert_SM1;
  kcg_bool _127_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _128_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _129_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _130_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _131_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _132_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _133_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _134_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _135_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _136_error_partial;
  /* ready/ */
  kcg_bool _137_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _138_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _139_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _140_SM1_fired_partial;
  /* SM1:autoHoldEinschalten:<1> */
  kcg_bool tr_1_guard_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool SM4_reset_prv_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool SM4_reset_sel_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_TR_SM4_autoHoldEinschalten_SM1 SM4_fired_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_ST_SM4_autoHoldEinschalten_SM1 SM4_state_nxt_partial_autoHoldEinschalten_SM1;
  /* ready/ */
  kcg_bool _141_ready_partial;
  /* error/ */
  kcg_bool _142_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _143_taste_Hold_partial;
  /* SM1:autoHoldEinschalten:SM4:HoldDruecken:<1> */
  kcg_bool tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_TR_SM4_autoHoldEinschalten_SM1 _144_SM4_fired_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool _145_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_ST_SM4_autoHoldEinschalten_SM1 _146_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
  /* ready/ */
  kcg_bool _147_ready_partial;
  /* error/ */
  kcg_bool _148_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _149_taste_Hold_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _150_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _151_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _152_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _153_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _154_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _155_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _156_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _157_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _158_error_partial;
  /* ready/ */
  kcg_bool _159_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _160_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _161_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _162_SM1_fired_partial;
  /* SM1:fahren:<1> */
  kcg_bool tr_1_guard_fahren_SM1;
  kcg_bool _163_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _164_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _165_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _166_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _167_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _168_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _169_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _170_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _171_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _172_error_partial;
  /* ready/ */
  kcg_bool _173_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _174_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _175_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _176_SM1_fired_partial;
  /* SM1:anfahren:<1> */
  kcg_bool tr_1_guard_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool SM2_reset_prv_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool SM2_reset_sel_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _177_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _178_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _179_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _180_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _181_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _182_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _183_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _184_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _185_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _186_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _187_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:bremspedalTreten:<1> */
  kcg_bool tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _188_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _189_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _190_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _191_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _192_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _193_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _194_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _195_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _196_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _197_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _198_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _199_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _200_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _201_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _202_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _203_error_partial;
  /* ready/ */
  kcg_bool _204_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _205_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _206_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _207_SM1_fired_partial;
  /* SM1:anhaltenMitAutoHold:<1> */
  kcg_bool tr_1_guard_anhaltenMitAutoHold_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _208_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _209_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _210_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _211_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _212_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _213_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _214_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _215_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _216_error_partial;
  /* ready/ */
  kcg_bool _217_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _218_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _219_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _220_SM1_fired_partial;
  /* SM1:haltImAutoHold:<1> */
  kcg_bool tr_1_guard_haltImAutoHold_SM1;
  kcg_bool _221_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _222_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _223_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _224_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _225_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _226_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _227_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _228_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _229_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _230_error_partial;
  /* ready/ */
  kcg_bool _231_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _232_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _233_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _234_SM1_fired_partial;
  kcg_bool _235_noname;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Start:<1> */
  kcg_bool tr_1_guard_Start_SM1;
  /* SM1: */
  SSM_ST_SM1 _236_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _237_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _238_SM1_fired_strong_partial;
  /* SM1:zuendungEinschalten:<1> */
  kcg_bool tr_1_guard_zuendungEinschalten_SM1;
  /* SM1: */
  SSM_ST_SM1 _239_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _240_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _241_SM1_fired_strong_partial;
  /* SM1:bremspedalDurchtreten:<1> */
  kcg_bool tr_1_guard_bremspedalDurchtreten_SM1;
  /* SM1: */
  SSM_ST_SM1 _242_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _243_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _244_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _245_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _246_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _247_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _248_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _249_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _250_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _251_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _252_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _253_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _254_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _255_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _256_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _257_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _258_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _259_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _260_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _261_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _262_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _263_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _264_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _265_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _266_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _267_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _268_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _269_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _270_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _271_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _272_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _273_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _274_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _275_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _276_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _277_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _278_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _279_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _280_SM1_fired_strong_partial;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _281_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _282_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _283_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _284_noname;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg _285_noname;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg _286_noname;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _287_noname;
  /* error/ */
  kcg_bool last_error;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg last_bremspedalKraft;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg last_gaspedalStellung;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg last_taste_Hold;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg last_taste_P;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg last_sicherheitsgurtSchalter;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg last_fahrertuerSchalter;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg last_getriebeWahlhebel;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg last_zuendschalter;
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg last_aktZeit;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_aktZeit = outC->mem_aktZeit;
  outC->mem_aktZeit = aktZeit;
  last_error = outC->error;
  last_bremspedalKraft = outC->bremspedalKraft;
  last_gaspedalStellung = outC->gaspedalStellung;
  last_taste_Hold = outC->taste_Hold;
  last_taste_P = outC->taste_P;
  last_sicherheitsgurtSchalter = outC->sicherheitsgurtSchalter;
  last_fahrertuerSchalter = outC->fahrertuerSchalter;
  last_getriebeWahlhebel = outC->getriebeWahlhebel;
  last_zuendschalter = outC->zuendschalter;
  outC->_L10 = fzgLaengsneigung;
  _287_noname = outC->_L10;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      _278_SM1_state_act_partial = SSM_st_fzgSteht_SM1;
      outC->SM1_state_act = _278_SM1_state_act_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _275_SM1_state_act_partial = SSM_st_haltImAutoHold_SM1;
      outC->SM1_state_act = _275_SM1_state_act_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _272_SM1_state_act_partial = SSM_st_anhaltenMitAutoHold_SM1;
      outC->SM1_state_act = _272_SM1_state_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _269_SM1_state_act_partial = SSM_st_anfahren_SM1;
      outC->SM1_state_act = _269_SM1_state_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _266_SM1_state_act_partial = SSM_st_fahren_SM1;
      outC->SM1_state_act = _266_SM1_state_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _263_SM1_state_act_partial = SSM_st_autoHoldEinschalten_SM1;
      outC->SM1_state_act = _263_SM1_state_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _260_SM1_state_act_partial = SSM_st_EPB_arretiert_SM1;
      outC->SM1_state_act = _260_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _257_SM1_state_act_partial = SSM_st_anfahrenVorbereiten_SM1;
      outC->SM1_state_act = _257_SM1_state_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _254_SM1_state_act_partial = SSM_st_EPB_angezogen_SM1;
      outC->SM1_state_act = _254_SM1_state_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _251_SM1_state_act_partial = SSM_st_betriebsbremseLoesen_SM1;
      outC->SM1_state_act = _251_SM1_state_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _248_SM1_state_act_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      outC->SM1_state_act = _248_SM1_state_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _245_SM1_state_act_partial = SSM_st_automatikModusEingestellt_SM1;
      outC->SM1_state_act = _245_SM1_state_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _242_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      outC->SM1_state_act = _242_SM1_state_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      tr_1_guard_bremspedalDurchtreten_SM1 = aktZeit >= kcg_lit_float64(3.0);
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _239_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      }
      else {
        _239_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      outC->SM1_state_act = _239_SM1_state_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      tr_1_guard_zuendungEinschalten_SM1 = aktZeit >= kcg_lit_float64(2.0);
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _236_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      else {
        _236_SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      outC->SM1_state_act = _236_SM1_state_act_partial;
      break;
    case SSM_st_Start_SM1 :
      tr_1_guard_Start_SM1 = aktZeit >= kcg_lit_float64(1.0);
      if (tr_1_guard_Start_SM1) {
        SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_Start_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      _229_bremspedalKraft_partial = last_bremspedalKraft;
      _228_gaspedalStellung_partial = last_gaspedalStellung;
      _227_taste_Hold_partial = last_taste_Hold;
      _226_taste_P_partial = last_taste_P;
      _225_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _224_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _223_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _222_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      _280_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _280_SM1_fired_strong_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _277_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _277_SM1_fired_strong_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _274_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _274_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _271_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _271_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren_SM1 :
      _268_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _268_SM1_fired_strong_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _265_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _265_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _262_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _262_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _259_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _259_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _256_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _256_SM1_fired_strong_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _253_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _253_SM1_fired_strong_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _250_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _250_SM1_fired_strong_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _247_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _247_SM1_fired_strong_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _244_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _244_SM1_fired_strong_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _241_SM1_fired_strong_partial =
          SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1;
      }
      else {
        _241_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _241_SM1_fired_strong_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _238_SM1_fired_strong_partial =
          SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1;
      }
      else {
        _238_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _238_SM1_fired_strong_partial;
      break;
    case SSM_st_Start_SM1 :
      if (tr_1_guard_Start_SM1) {
        SM1_fired_strong_partial = SSM_TR_Start_zuendungEinschalten_1_Start_SM1;
      }
      else {
        SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      _234_SM1_fired_partial = outC->SM1_fired_strong;
      _233_SM1_reset_nxt_partial = kcg_false;
      _232_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      outC->_L57_fzgSteht_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      outC->_L54_fzgSteht_SM1 = betriebsBremse;
      outC->_L55_fzgSteht_SM1 = outC->_L54_fzgSteht_SM1 <= outC->_L57_fzgSteht_SM1;
      outC->_L42_fzgSteht_SM1 = cockpitAnzeige_AutoHoldMode;
      outC->_L35_fzgSteht_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L43_fzgSteht_SM1 = outC->_L35_fzgSteht_SM1 != outC->_L42_fzgSteht_SM1;
      outC->_L41_fzgSteht_SM1 = cockpitAnzeige_Hold;
      outC->_L40_fzgSteht_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L38_fzgSteht_SM1 = v_fzg;
      outC->_L34_fzgSteht_SM1 = outC->_L41_fzgSteht_SM1 != outC->_L35_fzgSteht_SM1;
      outC->_L32_fzgSteht_SM1 = outC->_L38_fzgSteht_SM1 > outC->_L40_fzgSteht_SM1;
      outC->_L11_fzgSteht_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L2_fzgSteht_SM1 = EPB_Bremse;
      outC->_L3_fzgSteht_SM1 = outC->_L2_fzgSteht_SM1 != outC->_L11_fzgSteht_SM1;
      outC->_L36_fzgSteht_SM1 = outC->_L3_fzgSteht_SM1 |
        outC->_L32_fzgSteht_SM1 | outC->_L34_fzgSteht_SM1 |
        outC->_L43_fzgSteht_SM1 | outC->_L55_fzgSteht_SM1;
      outC->_L5_fzgSteht_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L8= */
      if (outC->init) {
        outC->_L8_fzgSteht_SM1 = kcg_true;
      }
      else {
        outC->_L8_fzgSteht_SM1 = outC->_L5_fzgSteht_SM1;
      }
      outC->_L7_fzgSteht_SM1 = aktZeit;
      outC->_L6_fzgSteht_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_8);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzgSteht_SM1,
        outC->_L5_fzgSteht_SM1,
        outC->_L7_fzgSteht_SM1,
        outC->_L6_fzgSteht_SM1,
        &outC->Context_countDownTimer_8);
      outC->_L9_fzgSteht_SM1 = outC->Context_countDownTimer_8.abgelaufen;
      outC->_L10_fzgSteht_SM1 = outC->Context_countDownTimer_8.laufend;
      _235_noname = outC->_L10_fzgSteht_SM1;
      _231_ready_partial = outC->_L9_fzgSteht_SM1;
      _230_error_partial = outC->_L36_fzgSteht_SM1;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _213_taste_Hold_partial = last_taste_Hold;
      _212_taste_P_partial = last_taste_P;
      _211_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _210_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _209_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _208_zuendschalter_partial = last_zuendschalter;
      outC->_L5_haltImAutoHold_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_haltImAutoHold_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_haltImAutoHold_SM1 :
      /* SM1:haltImAutoHold:_L8= */
      if (outC->init1) {
        outC->_L8_haltImAutoHold_SM1 = kcg_true;
      }
      else {
        outC->_L8_haltImAutoHold_SM1 = outC->_L5_haltImAutoHold_SM1;
      }
      outC->_L7_haltImAutoHold_SM1 = aktZeit;
      outC->_L6_haltImAutoHold_SM1 = kcg_lit_float64(180.);
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_haltImAutoHold_SM1 :
      if (SM1_reset_sel) {
        /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_7);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_haltImAutoHold_SM1 :
      /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_haltImAutoHold_SM1,
        outC->_L5_haltImAutoHold_SM1,
        outC->_L7_haltImAutoHold_SM1,
        outC->_L6_haltImAutoHold_SM1,
        &outC->Context_countDownTimer_7);
      outC->_L9_haltImAutoHold_SM1 = outC->Context_countDownTimer_7.abgelaufen;
      outC->_L10_haltImAutoHold_SM1 = outC->Context_countDownTimer_7.laufend;
      _217_ready_partial = outC->_L9_haltImAutoHold_SM1;
      tr_1_guard_haltImAutoHold_SM1 = _217_ready_partial;
      if (tr_1_guard_haltImAutoHold_SM1) {
        _220_SM1_fired_partial = SSM_TR_haltImAutoHold_fzgSteht_1_haltImAutoHold_SM1;
      }
      else {
        _220_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _219_SM1_reset_nxt_partial = tr_1_guard_haltImAutoHold_SM1;
      if (tr_1_guard_haltImAutoHold_SM1) {
        _218_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      }
      else {
        _218_SM1_state_nxt_partial = SSM_st_haltImAutoHold_SM1;
      }
      outC->_L1_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
      _215_bremspedalKraft_partial = outC->_L1_haltImAutoHold_SM1;
      outC->_L57_haltImAutoHold_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      outC->_L54_haltImAutoHold_SM1 = betriebsBremse;
      outC->_L55_haltImAutoHold_SM1 = outC->_L54_haltImAutoHold_SM1 <=
        outC->_L57_haltImAutoHold_SM1;
      outC->_L42_haltImAutoHold_SM1 = cockpitAnzeige_AutoHoldMode;
      outC->_L35_haltImAutoHold_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L43_haltImAutoHold_SM1 = outC->_L35_haltImAutoHold_SM1 !=
        outC->_L42_haltImAutoHold_SM1;
      outC->_L41_haltImAutoHold_SM1 = cockpitAnzeige_Hold;
      outC->_L40_haltImAutoHold_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L38_haltImAutoHold_SM1 = v_fzg;
      outC->_L34_haltImAutoHold_SM1 = outC->_L41_haltImAutoHold_SM1 !=
        outC->_L35_haltImAutoHold_SM1;
      outC->_L32_haltImAutoHold_SM1 = outC->_L38_haltImAutoHold_SM1 >
        outC->_L40_haltImAutoHold_SM1;
      outC->_L11_haltImAutoHold_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L2_haltImAutoHold_SM1 = EPB_Bremse;
      outC->_L3_haltImAutoHold_SM1 = outC->_L2_haltImAutoHold_SM1 !=
        outC->_L11_haltImAutoHold_SM1;
      outC->_L36_haltImAutoHold_SM1 = outC->_L3_haltImAutoHold_SM1 |
        outC->_L32_haltImAutoHold_SM1 | outC->_L34_haltImAutoHold_SM1 |
        outC->_L43_haltImAutoHold_SM1 | outC->_L55_haltImAutoHold_SM1;
      _221_noname = outC->_L10_haltImAutoHold_SM1;
      _216_error_partial = outC->_L36_haltImAutoHold_SM1;
      _214_gaspedalStellung_partial = outC->_L1_haltImAutoHold_SM1;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _200_taste_Hold_partial = last_taste_Hold;
      _199_taste_P_partial = last_taste_P;
      _198_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _197_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _196_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _195_zuendschalter_partial = last_zuendschalter;
      outC->_L15_anhaltenMitAutoHold_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L16_anhaltenMitAutoHold_SM1 = v_fzg;
      outC->_L17_anhaltenMitAutoHold_SM1 = outC->_L16_anhaltenMitAutoHold_SM1 >
        outC->_L15_anhaltenMitAutoHold_SM1;
      outC->_L24_anhaltenMitAutoHold_SM1 = !outC->_L17_anhaltenMitAutoHold_SM1;
      _204_ready_partial = outC->_L24_anhaltenMitAutoHold_SM1;
      tr_1_guard_anhaltenMitAutoHold_SM1 = _204_ready_partial;
      if (tr_1_guard_anhaltenMitAutoHold_SM1) {
        _207_SM1_fired_partial =
          SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1;
      }
      else {
        _207_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _206_SM1_reset_nxt_partial = tr_1_guard_anhaltenMitAutoHold_SM1;
      if (tr_1_guard_anhaltenMitAutoHold_SM1) {
        _205_SM1_state_nxt_partial = SSM_st_haltImAutoHold_SM1;
      }
      else {
        _205_SM1_state_nxt_partial = SSM_st_anhaltenMitAutoHold_SM1;
      }
      outC->_L26_anhaltenMitAutoHold_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      outC->_L11_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.8);
      /* SM1:anhaltenMitAutoHold:_L25= */
      if (outC->_L17_anhaltenMitAutoHold_SM1) {
        outC->_L25_anhaltenMitAutoHold_SM1 = outC->_L11_anhaltenMitAutoHold_SM1;
      }
      else {
        outC->_L25_anhaltenMitAutoHold_SM1 = outC->_L26_anhaltenMitAutoHold_SM1;
      }
      outC->_L21_anhaltenMitAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L20_anhaltenMitAutoHold_SM1 = cockpitAnzeige_Hold;
      outC->_L22_anhaltenMitAutoHold_SM1 = outC->_L20_anhaltenMitAutoHold_SM1 !=
        outC->_L21_anhaltenMitAutoHold_SM1;
      outC->_L13_anhaltenMitAutoHold_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L12_anhaltenMitAutoHold_SM1 = EPB_Bremse;
      outC->_L14_anhaltenMitAutoHold_SM1 = outC->_L12_anhaltenMitAutoHold_SM1 !=
        outC->_L13_anhaltenMitAutoHold_SM1;
      outC->_L23_anhaltenMitAutoHold_SM1 = outC->_L14_anhaltenMitAutoHold_SM1 |
        outC->_L22_anhaltenMitAutoHold_SM1;
      outC->_L19_anhaltenMitAutoHold_SM1 = kcg_false;
      /* SM1:anhaltenMitAutoHold:_L18= */
      if (outC->_L17_anhaltenMitAutoHold_SM1) {
        outC->_L18_anhaltenMitAutoHold_SM1 = outC->_L23_anhaltenMitAutoHold_SM1;
      }
      else {
        outC->_L18_anhaltenMitAutoHold_SM1 = outC->_L19_anhaltenMitAutoHold_SM1;
      }
      _203_error_partial = outC->_L18_anhaltenMitAutoHold_SM1;
      _202_bremspedalKraft_partial = outC->_L25_anhaltenMitAutoHold_SM1;
      outC->_L9_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
      _201_gaspedalStellung_partial = outC->_L9_anhaltenMitAutoHold_SM1;
      break;
    case SSM_st_anfahren_SM1 :
      _172_error_partial = last_error;
      _169_taste_Hold_partial = last_taste_Hold;
      _168_taste_P_partial = last_taste_P;
      _167_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _166_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _164_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_anfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init3 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahren_SM1 :
      /* SM1:anfahren:SM2: */
      if (outC->init3) {
        outC->SM2_state_sel_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
      }
      else {
        outC->SM2_state_sel_anfahren_SM1 = outC->SM2_state_nxt_anfahren_SM1;
      }
      outC->SM2_state_act_anfahren_SM1 = outC->SM2_state_sel_anfahren_SM1;
      outC->SM2_clock_anfahren_SM1 = outC->SM2_state_act_anfahren_SM1;
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          outC->_L6_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.4);
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM1:anfahren:SM2: */
      if (outC->init3) {
        SM2_reset_sel_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_anfahren_SM1 = outC->SM2_reset_nxt_anfahren_SM1;
      }
      switch (outC->SM2_state_sel_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          if (SM2_reset_sel_anfahren_SM1) {
            outC->init2 = kcg_true;
          }
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_anfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahren_SM1 :
      /* SM1:anfahren:SM2: */
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          /* SM1:anfahren:SM2:gasGeben:_L3= */
          if (outC->init2) {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = outC->_L4_gasGeben_SM2_anfahren_SM1;
          }
          outC->_L5_gasGeben_SM2_anfahren_SM1 =
            outC->_L3_gasGeben_SM2_anfahren_SM1 >= outC->_L6_gasGeben_SM2_anfahren_SM1;
          _177_ready_partial = outC->_L5_gasGeben_SM2_anfahren_SM1;
          _173_ready_partial = _177_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _184_ready_partial = kcg_false;
          _173_ready_partial = _184_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_false;
          _191_ready_partial = outC->_L2_bremspedalTreten_SM2_anfahren_SM1;
          _173_ready_partial = _191_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_anfahren_SM1 = _173_ready_partial;
      if (tr_1_guard_anfahren_SM1) {
        _176_SM1_fired_partial = SSM_TR_anfahren_autoHoldEinschalten_1_anfahren_SM1;
      }
      else {
        _176_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _175_SM1_reset_nxt_partial = tr_1_guard_anfahren_SM1;
      if (tr_1_guard_anfahren_SM1) {
        _174_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
      }
      else {
        _174_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          _180_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->SM2_fired_strong_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
      /* SM1:anfahren:SM2: */
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          SM2_fired_partial_anfahren_SM1 = outC->SM2_fired_strong_anfahren_SM1;
          SM2_reset_nxt_partial_anfahren_SM1 = kcg_false;
          SM2_state_nxt_partial_anfahren_SM1 = SSM_st_gasGeben_SM2_anfahren_SM1;
          _179_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L2_gasGeben_SM2_anfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_anfahren_SM1 =
            outC->_L2_gasGeben_SM2_anfahren_SM1 + outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L7_gasGeben_SM2_anfahren_SM1 =
            cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
          _178_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_anfahren_SM1;
          _165_getriebeWahlhebel_partial = _180_getriebeWahlhebel_partial;
          _170_gaspedalStellung_partial = _179_gaspedalStellung_partial;
          _171_bremspedalKraft_partial = _178_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _185_bremspedalKraft_partial = last_bremspedalKraft;
          _186_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _181_SM2_fired_partial_anfahren_SM1 =
              SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _181_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _182_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _183_SM2_state_nxt_partial_anfahren_SM1 = SSM_st_gasGeben_SM2_anfahren_SM1;
          }
          else {
            _183_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _187_getriebeWahlhebel_partial = outC->_L1_getriebe_auf_D_SM2_anfahren_SM1;
          _165_getriebeWahlhebel_partial = _187_getriebeWahlhebel_partial;
          _170_gaspedalStellung_partial = _186_gaspedalStellung_partial;
          _171_bremspedalKraft_partial = _185_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _183_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _182_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _181_SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          _193_gaspedalStellung_partial = last_gaspedalStellung;
          _194_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _188_SM2_fired_partial_anfahren_SM1 =
              SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1;
          }
          else {
            _188_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _189_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _190_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _190_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_anfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_anfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _192_bremspedalKraft_partial = outC->_L1_bremspedalTreten_SM2_anfahren_SM1;
          _165_getriebeWahlhebel_partial = _194_getriebeWahlhebel_partial;
          _170_gaspedalStellung_partial = _193_gaspedalStellung_partial;
          _171_bremspedalKraft_partial = _192_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _190_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _189_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _188_SM2_fired_partial_anfahren_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:anfahren:SM2: */
      if (outC->init3) {
        SM2_reset_prv_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_anfahren_SM1 = outC->SM2_reset_act_anfahren_SM1;
      }
      outC->SM2_reset_act_anfahren_SM1 = kcg_false;
      break;
    case SSM_st_fahren_SM1 :
      _158_error_partial = last_error;
      _157_bremspedalKraft_partial = last_bremspedalKraft;
      _156_gaspedalStellung_partial = last_gaspedalStellung;
      _155_taste_Hold_partial = last_taste_Hold;
      _154_taste_P_partial = last_taste_P;
      _153_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _152_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _151_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _150_zuendschalter_partial = last_zuendschalter;
      outC->_L5_fahren_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fahren_SM1 :
      if (SM1_reset_sel) {
        outC->init4 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fahren_SM1 :
      /* SM1:fahren:_L6= */
      if (outC->init4) {
        outC->_L6_fahren_SM1 = kcg_true;
      }
      else {
        outC->_L6_fahren_SM1 = outC->_L5_fahren_SM1;
      }
      outC->_L4_fahren_SM1 = aktZeit;
      outC->_L3_fahren_SM1 = kcg_lit_float64(400.) *
        c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fahren_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_6);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fahren_SM1 :
      /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L6_fahren_SM1,
        outC->_L5_fahren_SM1,
        outC->_L4_fahren_SM1,
        outC->_L3_fahren_SM1,
        &outC->Context_countDownTimer_6);
      outC->_L1_fahren_SM1 = outC->Context_countDownTimer_6.abgelaufen;
      outC->_L2_fahren_SM1 = outC->Context_countDownTimer_6.laufend;
      _159_ready_partial = outC->_L1_fahren_SM1;
      tr_1_guard_fahren_SM1 = _159_ready_partial;
      if (tr_1_guard_fahren_SM1) {
        _162_SM1_fired_partial = SSM_TR_fahren_anhaltenMitAutoHold_1_fahren_SM1;
      }
      else {
        _162_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _161_SM1_reset_nxt_partial = tr_1_guard_fahren_SM1;
      if (tr_1_guard_fahren_SM1) {
        _160_SM1_state_nxt_partial = SSM_st_anhaltenMitAutoHold_SM1;
      }
      else {
        _160_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      _163_noname = outC->_L2_fahren_SM1;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _135_bremspedalKraft_partial = last_bremspedalKraft;
      _134_gaspedalStellung_partial = last_gaspedalStellung;
      _132_taste_P_partial = last_taste_P;
      _131_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _130_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _129_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _128_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_autoHoldEinschalten_SM1 :
      if (SM1_reset_sel) {
        outC->init5 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_autoHoldEinschalten_SM1 :
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init5) {
        outC->SM4_state_sel_autoHoldEinschalten_SM1 =
          SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
      }
      else {
        outC->SM4_state_sel_autoHoldEinschalten_SM1 =
          outC->SM4_state_nxt_autoHoldEinschalten_SM1;
      }
      outC->SM4_state_act_autoHoldEinschalten_SM1 =
        outC->SM4_state_sel_autoHoldEinschalten_SM1;
      outC->SM4_clock_autoHoldEinschalten_SM1 =
        outC->SM4_state_act_autoHoldEinschalten_SM1;
      /* SM1:autoHoldEinschalten:SM4: */
      switch (outC->SM4_clock_autoHoldEinschalten_SM1) {
        case SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1 :
          outC->_L5_HoldLoesen_SM4_autoHoldEinschalten_SM1 = kcg_true;
          _141_ready_partial = outC->_L5_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _137_ready_partial = _141_ready_partial;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          _147_ready_partial = kcg_false;
          _137_ready_partial = _147_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_autoHoldEinschalten_SM1 = _137_ready_partial;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _140_SM1_fired_partial =
          SSM_TR_autoHoldEinschalten_fahren_1_autoHoldEinschalten_SM1;
      }
      else {
        _140_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _139_SM1_reset_nxt_partial = tr_1_guard_autoHoldEinschalten_SM1;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _138_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      else {
        _138_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
      }
      outC->SM4_fired_strong_autoHoldEinschalten_SM1 =
        SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
      /* SM1:autoHoldEinschalten:SM4: */
      switch (outC->SM4_clock_autoHoldEinschalten_SM1) {
        case SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1 :
          SM4_fired_partial_autoHoldEinschalten_SM1 =
            outC->SM4_fired_strong_autoHoldEinschalten_SM1;
          SM4_reset_nxt_partial_autoHoldEinschalten_SM1 = kcg_false;
          SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
            SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          outC->_L3_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
          outC->_L2_HoldLoesen_SM4_autoHoldEinschalten_SM1 = cockpitAnzeige_AutoHoldMode;
          outC->_L4_HoldLoesen_SM4_autoHoldEinschalten_SM1 =
            outC->_L2_HoldLoesen_SM4_autoHoldEinschalten_SM1 !=
            outC->_L3_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _142_error_partial = outC->_L4_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          _143_taste_Hold_partial = outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _133_taste_Hold_partial = _143_taste_Hold_partial;
          _136_error_partial = _142_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1 = kcg_true;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _144_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _144_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
          }
          _145_SM4_reset_nxt_partial_autoHoldEinschalten_SM1 =
            tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _146_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _146_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            cockpitAnzeige_AutoHoldMode;
          outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 !=
            outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _148_error_partial = outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
          _149_taste_Hold_partial = outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _133_taste_Hold_partial = _149_taste_Hold_partial;
          _136_error_partial = _148_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            _146_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init5) {
        SM4_reset_sel_autoHoldEinschalten_SM1 = kcg_false;
      }
      else {
        SM4_reset_sel_autoHoldEinschalten_SM1 =
          outC->SM4_reset_nxt_autoHoldEinschalten_SM1;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      switch (outC->SM4_clock_autoHoldEinschalten_SM1) {
        case SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1 :
          outC->SM4_reset_nxt_autoHoldEinschalten_SM1 =
            SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
          outC->SM4_fired_autoHoldEinschalten_SM1 =
            SM4_fired_partial_autoHoldEinschalten_SM1;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          outC->SM4_reset_nxt_autoHoldEinschalten_SM1 =
            _145_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
          outC->SM4_fired_autoHoldEinschalten_SM1 =
            _144_SM4_fired_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init5) {
        SM4_reset_prv_autoHoldEinschalten_SM1 = kcg_false;
      }
      else {
        SM4_reset_prv_autoHoldEinschalten_SM1 =
          outC->SM4_reset_act_autoHoldEinschalten_SM1;
      }
      outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_false;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _121_bremspedalKraft_partial = last_bremspedalKraft;
      _120_gaspedalStellung_partial = last_gaspedalStellung;
      _119_taste_Hold_partial = last_taste_Hold;
      _118_taste_P_partial = last_taste_P;
      _117_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _116_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _115_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _114_zuendschalter_partial = last_zuendschalter;
      outC->_L12_EPB_arretiert_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_arretiert_SM1 :
      if (SM1_reset_sel) {
        outC->init6 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_SM1 :
      /* SM1:EPB_arretiert:_L13= */
      if (outC->init6) {
        outC->_L13_EPB_arretiert_SM1 = kcg_true;
      }
      else {
        outC->_L13_EPB_arretiert_SM1 = outC->_L12_EPB_arretiert_SM1;
      }
      outC->_L9_EPB_arretiert_SM1 = aktZeit;
      outC->_L8_EPB_arretiert_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_arretiert_SM1 :
      if (SM1_reset_sel) {
        /* SM1:EPB_arretiert:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_5);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_SM1 :
      /* SM1:EPB_arretiert:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L13_EPB_arretiert_SM1,
        outC->_L12_EPB_arretiert_SM1,
        outC->_L9_EPB_arretiert_SM1,
        outC->_L8_EPB_arretiert_SM1,
        &outC->Context_countDownTimer_5);
      outC->_L10_EPB_arretiert_SM1 = outC->Context_countDownTimer_5.abgelaufen;
      outC->_L11_EPB_arretiert_SM1 = outC->Context_countDownTimer_5.laufend;
      _123_ready_partial = outC->_L10_EPB_arretiert_SM1;
      tr_1_guard_EPB_arretiert_SM1 = _123_ready_partial;
      if (tr_1_guard_EPB_arretiert_SM1) {
        _126_SM1_fired_partial = SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1;
      }
      else {
        _126_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _125_SM1_reset_nxt_partial = tr_1_guard_EPB_arretiert_SM1;
      if (tr_1_guard_EPB_arretiert_SM1) {
        _124_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      else {
        _124_SM1_state_nxt_partial = SSM_st_EPB_arretiert_SM1;
      }
      outC->_L15_EPB_arretiert_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      _127_noname = outC->_L11_EPB_arretiert_SM1;
      outC->_L1_EPB_arretiert_SM1 = EPB_Bremse;
      outC->_L3_EPB_arretiert_SM1 = outC->_L1_EPB_arretiert_SM1 !=
        outC->_L15_EPB_arretiert_SM1;
      _122_error_partial = outC->_L3_EPB_arretiert_SM1;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _109_error_partial = last_error;
      _108_bremspedalKraft_partial = last_bremspedalKraft;
      _107_gaspedalStellung_partial = last_gaspedalStellung;
      _106_taste_Hold_partial = last_taste_Hold;
      _102_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _101_zuendschalter_partial = last_zuendschalter;
      outC->_L2_anfahrenVorbereiten_SM1 = kcg_true;
      _110_ready_partial = outC->_L2_anfahrenVorbereiten_SM1;
      tr_1_guard_anfahrenVorbereiten_SM1 = _110_ready_partial;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _113_SM1_fired_partial =
          SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1;
      }
      else {
        _113_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _112_SM1_reset_nxt_partial = tr_1_guard_anfahrenVorbereiten_SM1;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _111_SM1_state_nxt_partial = SSM_st_EPB_arretiert_SM1;
      }
      else {
        _111_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      outC->_L8_anfahrenVorbereiten_SM1 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
      _104_sicherheitsgurtSchalter_partial = outC->_L8_anfahrenVorbereiten_SM1;
      outC->_L7_anfahrenVorbereiten_SM1 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
      _103_fahrertuerSchalter_partial = outC->_L7_anfahrenVorbereiten_SM1;
      outC->_L6_anfahrenVorbereiten_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _105_taste_P_partial = outC->_L6_anfahrenVorbereiten_SM1;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _93_gaspedalStellung_partial = last_gaspedalStellung;
      _92_taste_Hold_partial = last_taste_Hold;
      _90_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _89_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _88_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _87_zuendschalter_partial = last_zuendschalter;
      outC->_L12_EPB_angezogen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_angezogen_SM1 :
      if (SM1_reset_sel) {
        outC->init7 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_angezogen_SM1 :
      /* SM1:EPB_angezogen:_L13= */
      if (outC->init7) {
        outC->_L13_EPB_angezogen_SM1 = kcg_true;
      }
      else {
        outC->_L13_EPB_angezogen_SM1 = outC->_L12_EPB_angezogen_SM1;
      }
      outC->_L9_EPB_angezogen_SM1 = aktZeit;
      outC->_L8_EPB_angezogen_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_angezogen_SM1 :
      if (SM1_reset_sel) {
        /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_4);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_angezogen_SM1 :
      /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L13_EPB_angezogen_SM1,
        outC->_L12_EPB_angezogen_SM1,
        outC->_L9_EPB_angezogen_SM1,
        outC->_L8_EPB_angezogen_SM1,
        &outC->Context_countDownTimer_4);
      outC->_L10_EPB_angezogen_SM1 = outC->Context_countDownTimer_4.abgelaufen;
      outC->_L11_EPB_angezogen_SM1 = outC->Context_countDownTimer_4.laufend;
      _96_ready_partial = outC->_L10_EPB_angezogen_SM1;
      tr_1_guard_EPB_angezogen_SM1 = _96_ready_partial;
      if (tr_1_guard_EPB_angezogen_SM1) {
        _99_SM1_fired_partial =
          SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1;
      }
      else {
        _99_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _98_SM1_reset_nxt_partial = tr_1_guard_EPB_angezogen_SM1;
      if (tr_1_guard_EPB_angezogen_SM1) {
        _97_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      else {
        _97_SM1_state_nxt_partial = SSM_st_EPB_angezogen_SM1;
      }
      _100_noname = outC->_L11_EPB_angezogen_SM1;
      outC->_L7_EPB_angezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L6_EPB_angezogen_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _94_bremspedalKraft_partial = outC->_L6_EPB_angezogen_SM1;
      outC->_L4_EPB_angezogen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _91_taste_P_partial = outC->_L4_EPB_angezogen_SM1;
      outC->_L1_EPB_angezogen_SM1 = EPB_Bremse;
      outC->_L3_EPB_angezogen_SM1 = outC->_L1_EPB_angezogen_SM1 !=
        outC->_L7_EPB_angezogen_SM1;
      _95_error_partial = outC->_L3_EPB_angezogen_SM1;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _82_error_partial = last_error;
      _80_gaspedalStellung_partial = last_gaspedalStellung;
      _79_taste_Hold_partial = last_taste_Hold;
      _77_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _76_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _75_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _74_zuendschalter_partial = last_zuendschalter;
      outC->_L3_betriebsbremseLoesen_SM1 = kcg_true;
      _83_ready_partial = outC->_L3_betriebsbremseLoesen_SM1;
      tr_1_guard_betriebsbremseLoesen_SM1 = _83_ready_partial;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _86_SM1_fired_partial =
          SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1;
      }
      else {
        _86_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _85_SM1_reset_nxt_partial = tr_1_guard_betriebsbremseLoesen_SM1;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _84_SM1_state_nxt_partial = SSM_st_EPB_angezogen_SM1;
      }
      else {
        _84_SM1_state_nxt_partial = SSM_st_betriebsbremseLoesen_SM1;
      }
      outC->_L6_betriebsbremseLoesen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      outC->_L5_betriebsbremseLoesen_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _81_bremspedalKraft_partial = outC->_L5_betriebsbremseLoesen_SM1;
      _78_taste_P_partial = outC->_L6_betriebsbremseLoesen_SM1;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _67_bremspedalKraft_partial = last_bremspedalKraft;
      _66_gaspedalStellung_partial = last_gaspedalStellung;
      _65_taste_Hold_partial = last_taste_Hold;
      _64_taste_P_partial = last_taste_P;
      _63_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _62_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _61_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _60_zuendschalter_partial = last_zuendschalter;
      outC->_L20_cockpitanzeigeBleibtAus_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      if (SM1_reset_sel) {
        outC->init8 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L18= */
      if (outC->init8) {
        outC->_L18_cockpitanzeigeBleibtAus_SM1 = kcg_true;
      }
      else {
        outC->_L18_cockpitanzeigeBleibtAus_SM1 = outC->_L20_cockpitanzeigeBleibtAus_SM1;
      }
      outC->_L19_cockpitanzeigeBleibtAus_SM1 = aktZeit;
      outC->_L23_cockpitanzeigeBleibtAus_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      if (SM1_reset_sel) {
        /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_3);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L18_cockpitanzeigeBleibtAus_SM1,
        outC->_L20_cockpitanzeigeBleibtAus_SM1,
        outC->_L19_cockpitanzeigeBleibtAus_SM1,
        outC->_L23_cockpitanzeigeBleibtAus_SM1,
        &outC->Context_countDownTimer_3);
      outC->_L21_cockpitanzeigeBleibtAus_SM1 =
        outC->Context_countDownTimer_3.abgelaufen;
      outC->_L22_cockpitanzeigeBleibtAus_SM1 = outC->Context_countDownTimer_3.laufend;
      _69_ready_partial = outC->_L21_cockpitanzeigeBleibtAus_SM1;
      tr_1_guard_cockpitanzeigeBleibtAus_SM1 = _69_ready_partial;
      if (tr_1_guard_cockpitanzeigeBleibtAus_SM1) {
        _72_SM1_fired_partial =
          SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _72_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _71_SM1_reset_nxt_partial = tr_1_guard_cockpitanzeigeBleibtAus_SM1;
      if (tr_1_guard_cockpitanzeigeBleibtAus_SM1) {
        _70_SM1_state_nxt_partial = SSM_st_betriebsbremseLoesen_SM1;
      }
      else {
        _70_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      outC->_L26_cockpitanzeigeBleibtAus_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L25_cockpitanzeigeBleibtAus_SM1 = cockpitAnzeige_EPBMode_Automatik;
      _73_noname = outC->_L22_cockpitanzeigeBleibtAus_SM1;
      outC->_L14_cockpitanzeigeBleibtAus_SM1 = EPB_Bremse;
      outC->_L16_cockpitanzeigeBleibtAus_SM1 =
        outC->_L14_cockpitanzeigeBleibtAus_SM1 !=
        outC->_L26_cockpitanzeigeBleibtAus_SM1;
      outC->_L9_cockpitanzeigeBleibtAus_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
      outC->_L11_cockpitanzeigeBleibtAus_SM1 = epbBetriebsmodus;
      outC->_L10_cockpitanzeigeBleibtAus_SM1 =
        outC->_L11_cockpitanzeigeBleibtAus_SM1 != outC->_L9_cockpitanzeigeBleibtAus_SM1;
      outC->_L4_cockpitanzeigeBleibtAus_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L5_cockpitanzeigeBleibtAus_SM1 =
        outC->_L25_cockpitanzeigeBleibtAus_SM1 != outC->_L4_cockpitanzeigeBleibtAus_SM1;
      outC->_L12_cockpitanzeigeBleibtAus_SM1 =
        outC->_L5_cockpitanzeigeBleibtAus_SM1 | outC->_L10_cockpitanzeigeBleibtAus_SM1 |
        outC->_L16_cockpitanzeigeBleibtAus_SM1;
      _68_error_partial = outC->_L12_cockpitanzeigeBleibtAus_SM1;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _52_gaspedalStellung_partial = last_gaspedalStellung;
      _51_taste_Hold_partial = last_taste_Hold;
      _49_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _48_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _47_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _46_zuendschalter_partial = last_zuendschalter;
      outC->_L6_automatikModusEingestellt_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_automatikModusEingestellt_SM1 :
      if (SM1_reset_sel) {
        outC->init9 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_automatikModusEingestellt_SM1 :
      /* SM1:automatikModusEingestellt:_L5= */
      if (outC->init9) {
        outC->_L5_automatikModusEingestellt_SM1 = kcg_true;
      }
      else {
        outC->_L5_automatikModusEingestellt_SM1 =
          outC->_L6_automatikModusEingestellt_SM1;
      }
      outC->_L8_automatikModusEingestellt_SM1 = aktZeit;
      outC->_L7_automatikModusEingestellt_SM1 = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_automatikModusEingestellt_SM1 :
      if (SM1_reset_sel) {
        /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_2);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_automatikModusEingestellt_SM1 :
      /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L5_automatikModusEingestellt_SM1,
        outC->_L6_automatikModusEingestellt_SM1,
        outC->_L8_automatikModusEingestellt_SM1,
        outC->_L7_automatikModusEingestellt_SM1,
        &outC->Context_countDownTimer_2);
      outC->_L9_automatikModusEingestellt_SM1 =
        outC->Context_countDownTimer_2.abgelaufen;
      outC->_L10_automatikModusEingestellt_SM1 =
        outC->Context_countDownTimer_2.laufend;
      _55_ready_partial = outC->_L9_automatikModusEingestellt_SM1;
      tr_1_guard_automatikModusEingestellt_SM1 = _55_ready_partial;
      if (tr_1_guard_automatikModusEingestellt_SM1) {
        _58_SM1_fired_partial =
          SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1;
      }
      else {
        _58_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _57_SM1_reset_nxt_partial = tr_1_guard_automatikModusEingestellt_SM1;
      if (tr_1_guard_automatikModusEingestellt_SM1) {
        _56_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _56_SM1_state_nxt_partial = SSM_st_automatikModusEingestellt_SM1;
      }
      outC->_L15_automatikModusEingestellt_SM1 = cockpitAnzeige_EPBMode_Automatik;
      outC->_L14_automatikModusEingestellt_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _53_bremspedalKraft_partial = outC->_L14_automatikModusEingestellt_SM1;
      outC->_L11_automatikModusEingestellt_SM1 =
        !outC->_L9_automatikModusEingestellt_SM1;
      outC->_L2_automatikModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L3_automatikModusEingestellt_SM1 =
        outC->_L15_automatikModusEingestellt_SM1 !=
        outC->_L2_automatikModusEingestellt_SM1;
      outC->_L12_automatikModusEingestellt_SM1 =
        outC->_L3_automatikModusEingestellt_SM1 &
        outC->_L11_automatikModusEingestellt_SM1;
      _59_noname = outC->_L10_automatikModusEingestellt_SM1;
      outC->_L4_automatikModusEingestellt_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _50_taste_P_partial = outC->_L4_automatikModusEingestellt_SM1;
      _54_error_partial = outC->_L12_automatikModusEingestellt_SM1;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _34_bremspedalKraft_partial = last_bremspedalKraft;
      _33_gaspedalStellung_partial = last_gaspedalStellung;
      _32_taste_Hold_partial = last_taste_Hold;
      _30_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _29_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _28_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _27_zuendschalter_partial = last_zuendschalter;
      outC->automastikModusEinstellen_weakb_clock_SM1 =
        outC->SM1_fired_strong != _11_SSM_TR_no_trans_SM1;
      outC->_L7_automastikModusEinstellen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      _279_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _279_SM1_reset_act_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _276_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _276_SM1_reset_act_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _273_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _273_SM1_reset_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _270_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _270_SM1_reset_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _267_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _267_SM1_reset_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _264_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _264_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _261_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _261_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _258_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _258_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _255_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _255_SM1_reset_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _252_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _252_SM1_reset_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _249_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _249_SM1_reset_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _246_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _246_SM1_reset_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _243_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _243_SM1_reset_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _240_SM1_reset_act_partial = tr_1_guard_bremspedalDurchtreten_SM1;
      outC->SM1_reset_act = _240_SM1_reset_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _237_SM1_reset_act_partial = tr_1_guard_zuendungEinschalten_SM1;
      outC->SM1_reset_act = _237_SM1_reset_act_partial;
      break;
    case SSM_st_Start_SM1 :
      SM1_reset_act_partial = tr_1_guard_Start_SM1;
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      outC->zuendschalter = _222_zuendschalter_partial;
      outC->getriebeWahlhebel = _223_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _224_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _225_sicherheitsgurtSchalter_partial;
      outC->taste_P = _226_taste_P_partial;
      outC->taste_Hold = _227_taste_Hold_partial;
      outC->gaspedalStellung = _228_gaspedalStellung_partial;
      outC->bremspedalKraft = _229_bremspedalKraft_partial;
      outC->error = _230_error_partial;
      outC->ready = _231_ready_partial;
      outC->SM1_state_nxt = _232_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _233_SM1_reset_nxt_partial;
      outC->SM1_fired = _234_SM1_fired_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      outC->zuendschalter = _208_zuendschalter_partial;
      outC->getriebeWahlhebel = _209_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _210_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _211_sicherheitsgurtSchalter_partial;
      outC->taste_P = _212_taste_P_partial;
      outC->taste_Hold = _213_taste_Hold_partial;
      outC->gaspedalStellung = _214_gaspedalStellung_partial;
      outC->bremspedalKraft = _215_bremspedalKraft_partial;
      outC->error = _216_error_partial;
      outC->ready = _217_ready_partial;
      outC->SM1_state_nxt = _218_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _219_SM1_reset_nxt_partial;
      outC->SM1_fired = _220_SM1_fired_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      outC->zuendschalter = _195_zuendschalter_partial;
      outC->getriebeWahlhebel = _196_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _197_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _198_sicherheitsgurtSchalter_partial;
      outC->taste_P = _199_taste_P_partial;
      outC->taste_Hold = _200_taste_Hold_partial;
      outC->gaspedalStellung = _201_gaspedalStellung_partial;
      outC->bremspedalKraft = _202_bremspedalKraft_partial;
      outC->error = _203_error_partial;
      outC->ready = _204_ready_partial;
      outC->SM1_state_nxt = _205_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _206_SM1_reset_nxt_partial;
      outC->SM1_fired = _207_SM1_fired_partial;
      break;
    case SSM_st_anfahren_SM1 :
      outC->zuendschalter = _164_zuendschalter_partial;
      outC->getriebeWahlhebel = _165_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _166_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _167_sicherheitsgurtSchalter_partial;
      outC->taste_P = _168_taste_P_partial;
      outC->taste_Hold = _169_taste_Hold_partial;
      outC->gaspedalStellung = _170_gaspedalStellung_partial;
      outC->bremspedalKraft = _171_bremspedalKraft_partial;
      outC->error = _172_error_partial;
      outC->ready = _173_ready_partial;
      outC->SM1_state_nxt = _174_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _175_SM1_reset_nxt_partial;
      outC->SM1_fired = _176_SM1_fired_partial;
      break;
    case SSM_st_fahren_SM1 :
      outC->zuendschalter = _150_zuendschalter_partial;
      outC->getriebeWahlhebel = _151_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _152_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _153_sicherheitsgurtSchalter_partial;
      outC->taste_P = _154_taste_P_partial;
      outC->taste_Hold = _155_taste_Hold_partial;
      outC->gaspedalStellung = _156_gaspedalStellung_partial;
      outC->bremspedalKraft = _157_bremspedalKraft_partial;
      outC->error = _158_error_partial;
      outC->ready = _159_ready_partial;
      outC->SM1_state_nxt = _160_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _161_SM1_reset_nxt_partial;
      outC->SM1_fired = _162_SM1_fired_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->zuendschalter = _128_zuendschalter_partial;
      outC->getriebeWahlhebel = _129_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _130_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _131_sicherheitsgurtSchalter_partial;
      outC->taste_P = _132_taste_P_partial;
      outC->taste_Hold = _133_taste_Hold_partial;
      outC->gaspedalStellung = _134_gaspedalStellung_partial;
      outC->bremspedalKraft = _135_bremspedalKraft_partial;
      outC->error = _136_error_partial;
      outC->ready = _137_ready_partial;
      outC->SM1_state_nxt = _138_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _139_SM1_reset_nxt_partial;
      outC->SM1_fired = _140_SM1_fired_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      outC->zuendschalter = _114_zuendschalter_partial;
      outC->getriebeWahlhebel = _115_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _116_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _117_sicherheitsgurtSchalter_partial;
      outC->taste_P = _118_taste_P_partial;
      outC->taste_Hold = _119_taste_Hold_partial;
      outC->gaspedalStellung = _120_gaspedalStellung_partial;
      outC->bremspedalKraft = _121_bremspedalKraft_partial;
      outC->error = _122_error_partial;
      outC->ready = _123_ready_partial;
      outC->SM1_state_nxt = _124_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _125_SM1_reset_nxt_partial;
      outC->SM1_fired = _126_SM1_fired_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      outC->zuendschalter = _101_zuendschalter_partial;
      outC->getriebeWahlhebel = _102_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _103_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _104_sicherheitsgurtSchalter_partial;
      outC->taste_P = _105_taste_P_partial;
      outC->taste_Hold = _106_taste_Hold_partial;
      outC->gaspedalStellung = _107_gaspedalStellung_partial;
      outC->bremspedalKraft = _108_bremspedalKraft_partial;
      outC->error = _109_error_partial;
      outC->ready = _110_ready_partial;
      outC->SM1_state_nxt = _111_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _112_SM1_reset_nxt_partial;
      outC->SM1_fired = _113_SM1_fired_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      outC->zuendschalter = _87_zuendschalter_partial;
      outC->getriebeWahlhebel = _88_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _89_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _90_sicherheitsgurtSchalter_partial;
      outC->taste_P = _91_taste_P_partial;
      outC->taste_Hold = _92_taste_Hold_partial;
      outC->gaspedalStellung = _93_gaspedalStellung_partial;
      outC->bremspedalKraft = _94_bremspedalKraft_partial;
      outC->error = _95_error_partial;
      outC->ready = _96_ready_partial;
      outC->SM1_state_nxt = _97_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _98_SM1_reset_nxt_partial;
      outC->SM1_fired = _99_SM1_fired_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      outC->zuendschalter = _74_zuendschalter_partial;
      outC->getriebeWahlhebel = _75_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _76_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _77_sicherheitsgurtSchalter_partial;
      outC->taste_P = _78_taste_P_partial;
      outC->taste_Hold = _79_taste_Hold_partial;
      outC->gaspedalStellung = _80_gaspedalStellung_partial;
      outC->bremspedalKraft = _81_bremspedalKraft_partial;
      outC->error = _82_error_partial;
      outC->ready = _83_ready_partial;
      outC->SM1_state_nxt = _84_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _85_SM1_reset_nxt_partial;
      outC->SM1_fired = _86_SM1_fired_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->zuendschalter = _60_zuendschalter_partial;
      outC->getriebeWahlhebel = _61_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _62_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _63_sicherheitsgurtSchalter_partial;
      outC->taste_P = _64_taste_P_partial;
      outC->taste_Hold = _65_taste_Hold_partial;
      outC->gaspedalStellung = _66_gaspedalStellung_partial;
      outC->bremspedalKraft = _67_bremspedalKraft_partial;
      outC->error = _68_error_partial;
      outC->ready = _69_ready_partial;
      outC->SM1_state_nxt = _70_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _71_SM1_reset_nxt_partial;
      outC->SM1_fired = _72_SM1_fired_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      outC->zuendschalter = _46_zuendschalter_partial;
      outC->getriebeWahlhebel = _47_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _48_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _49_sicherheitsgurtSchalter_partial;
      outC->taste_P = _50_taste_P_partial;
      outC->taste_Hold = _51_taste_Hold_partial;
      outC->gaspedalStellung = _52_gaspedalStellung_partial;
      outC->bremspedalKraft = _53_bremspedalKraft_partial;
      outC->error = _54_error_partial;
      outC->ready = _55_ready_partial;
      outC->SM1_state_nxt = _56_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _57_SM1_reset_nxt_partial;
      outC->SM1_fired = _58_SM1_fired_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      if (outC->SM1_reset_act) {
        outC->init10 = kcg_true;
      }
      /* SM1:automastikModusEinstellen:_L6= */
      if (outC->init10) {
        outC->_L6_automastikModusEinstellen_SM1 = kcg_true;
      }
      else {
        outC->_L6_automastikModusEinstellen_SM1 =
          outC->_L7_automastikModusEinstellen_SM1;
      }
      outC->_L8_automastikModusEinstellen_SM1 = aktZeit;
      outC->_L10_automastikModusEinstellen_SM1 = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      if (outC->SM1_reset_act) {
        /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_1);
      }
      /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L6_automastikModusEinstellen_SM1,
        outC->_L7_automastikModusEinstellen_SM1,
        outC->_L8_automastikModusEinstellen_SM1,
        outC->_L10_automastikModusEinstellen_SM1,
        &outC->Context_countDownTimer_1);
      outC->_L4_automastikModusEinstellen_SM1 =
        outC->Context_countDownTimer_1.abgelaufen;
      outC->_L5_automastikModusEinstellen_SM1 =
        outC->Context_countDownTimer_1.laufend;
      _36_ready_partial = outC->_L4_automastikModusEinstellen_SM1;
      /* SM1:automastikModusEinstellen: */
      if (outC->automastikModusEinstellen_weakb_clock_SM1) {
        _43_SM1_fired_partial = outC->SM1_fired_strong;
        _44_SM1_reset_nxt_partial = kcg_false;
        _45_SM1_state_nxt_partial = SSM_st_automastikModusEinstellen_SM1;
        _37_SM1_state_nxt_partial = _45_SM1_state_nxt_partial;
        _38_SM1_reset_nxt_partial = _44_SM1_reset_nxt_partial;
        _39_SM1_fired_partial = _43_SM1_fired_partial;
      }
      else {
        tr_1_guard_automastikModusEinstellen_SM1 = _36_ready_partial;
        if (tr_1_guard_automastikModusEinstellen_SM1) {
          _40_SM1_fired_partial =
            SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1;
        }
        else {
          _40_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
        }
        _41_SM1_reset_nxt_partial = tr_1_guard_automastikModusEinstellen_SM1;
        if (tr_1_guard_automastikModusEinstellen_SM1) {
          _42_SM1_state_nxt_partial = SSM_st_automatikModusEingestellt_SM1;
        }
        else {
          _42_SM1_state_nxt_partial = SSM_st_automastikModusEinstellen_SM1;
        }
        _37_SM1_state_nxt_partial = _42_SM1_state_nxt_partial;
        _38_SM1_reset_nxt_partial = _41_SM1_reset_nxt_partial;
        _39_SM1_fired_partial = _40_SM1_fired_partial;
      }
      outC->_L26_automastikModusEinstellen_SM1 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L14_automastikModusEinstellen_SM1 = _36_ready_partial;
      outC->_L16_automastikModusEinstellen_SM1 =
        !outC->_L14_automastikModusEinstellen_SM1;
      outC->_L11_automastikModusEinstellen_SM1 =
        epbModus_automatik_AhTypes_Pkg_ah_Pkg;
      outC->_L13_automastikModusEinstellen_SM1 = epbBetriebsmodus;
      outC->_L15_automastikModusEinstellen_SM1 =
        outC->_L13_automastikModusEinstellen_SM1 ==
        outC->_L11_automastikModusEinstellen_SM1;
      outC->_L17_automastikModusEinstellen_SM1 =
        outC->_L15_automastikModusEinstellen_SM1 |
        outC->_L16_automastikModusEinstellen_SM1;
      outC->_L25_automastikModusEinstellen_SM1 =
        !outC->_L17_automastikModusEinstellen_SM1;
      _35_error_partial = outC->_L25_automastikModusEinstellen_SM1;
      noname = outC->_L5_automastikModusEinstellen_SM1;
      _31_taste_P_partial = outC->_L26_automastikModusEinstellen_SM1;
      outC->zuendschalter = _27_zuendschalter_partial;
      outC->getriebeWahlhebel = _28_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _29_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _30_sicherheitsgurtSchalter_partial;
      outC->taste_P = _31_taste_P_partial;
      outC->taste_Hold = _32_taste_Hold_partial;
      outC->gaspedalStellung = _33_gaspedalStellung_partial;
      outC->bremspedalKraft = _34_bremspedalKraft_partial;
      outC->error = _35_error_partial;
      outC->ready = _36_ready_partial;
      outC->SM1_state_nxt = _37_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _38_SM1_reset_nxt_partial;
      outC->SM1_fired = _39_SM1_fired_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _23_ready_partial = kcg_false;
      _22_error_partial = last_error;
      _20_gaspedalStellung_partial = last_gaspedalStellung;
      _19_taste_Hold_partial = last_taste_Hold;
      _18_taste_P_partial = last_taste_P;
      _17_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _16_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _15_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _14_zuendschalter_partial = last_zuendschalter;
      _26_SM1_fired_partial = outC->SM1_fired_strong;
      _25_SM1_reset_nxt_partial = kcg_false;
      _24_SM1_state_nxt_partial = SSM_st_bremspedalDurchtreten_SM1;
      outC->_L2_bremspedalDurchtreten_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      _21_bremspedalKraft_partial = outC->_L2_bremspedalDurchtreten_SM1;
      outC->zuendschalter = _14_zuendschalter_partial;
      outC->getriebeWahlhebel = _15_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _16_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _17_sicherheitsgurtSchalter_partial;
      outC->taste_P = _18_taste_P_partial;
      outC->taste_Hold = _19_taste_Hold_partial;
      outC->gaspedalStellung = _20_gaspedalStellung_partial;
      outC->bremspedalKraft = _21_bremspedalKraft_partial;
      outC->error = _22_error_partial;
      outC->ready = _23_ready_partial;
      outC->SM1_state_nxt = _24_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _25_SM1_reset_nxt_partial;
      outC->SM1_fired = _26_SM1_fired_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _10_ready_partial = kcg_false;
      _9_error_partial = last_error;
      _8_bremspedalKraft_partial = last_bremspedalKraft;
      _7_gaspedalStellung_partial = last_gaspedalStellung;
      _6_taste_Hold_partial = last_taste_Hold;
      _5_taste_P_partial = last_taste_P;
      _4_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _3_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _2_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _13_SM1_fired_partial = outC->SM1_fired_strong;
      _12_SM1_reset_nxt_partial = kcg_false;
      _11_SM1_state_nxt_partial = SSM_st_zuendungEinschalten_SM1;
      outC->_L1_zuendungEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      _1_zuendschalter_partial = outC->_L1_zuendungEinschalten_SM1;
      outC->zuendschalter = _1_zuendschalter_partial;
      outC->getriebeWahlhebel = _2_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _3_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _4_sicherheitsgurtSchalter_partial;
      outC->taste_P = _5_taste_P_partial;
      outC->taste_Hold = _6_taste_Hold_partial;
      outC->gaspedalStellung = _7_gaspedalStellung_partial;
      outC->bremspedalKraft = _8_bremspedalKraft_partial;
      outC->error = _9_error_partial;
      outC->ready = _10_ready_partial;
      outC->SM1_state_nxt = _11_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _12_SM1_reset_nxt_partial;
      outC->SM1_fired = _13_SM1_fired_partial;
      break;
    case SSM_st_Start_SM1 :
      ready_partial = kcg_false;
      error_partial = last_error;
      bremspedalKraft_partial = last_bremspedalKraft;
      gaspedalStellung_partial = last_gaspedalStellung;
      taste_Hold_partial = last_taste_Hold;
      taste_P_partial = last_taste_P;
      sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      fahrertuerSchalter_partial = last_fahrertuerSchalter;
      getriebeWahlhebel_partial = last_getriebeWahlhebel;
      zuendschalter_partial = last_zuendschalter;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Start_SM1;
      outC->zuendschalter = zuendschalter_partial;
      outC->getriebeWahlhebel = getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = sicherheitsgurtSchalter_partial;
      outC->taste_P = taste_P_partial;
      outC->taste_Hold = taste_Hold_partial;
      outC->gaspedalStellung = gaspedalStellung_partial;
      outC->bremspedalKraft = bremspedalKraft_partial;
      outC->error = error_partial;
      outC->ready = ready_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->_L8 = EPB_Bremse;
  _286_noname = outC->_L8;
  outC->_L7 = betriebsBremse;
  _285_noname = outC->_L7;
  outC->_L6 = cockpitAnzeige_EPBMode_Automatik;
  _284_noname = outC->_L6;
  outC->_L5 = cockpitAnzeige_EPBMode_Manuell;
  _283_noname = outC->_L5;
  outC->_L2 = cockpitAnzeige_P;
  _282_noname = outC->_L2;
  outC->_L1 = led_P;
  _281_noname = outC->_L1;
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      outC->init = kcg_false;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      outC->init1 = kcg_false;
      break;
    case SSM_st_anfahren_SM1 :
      outC->init3 = kcg_false;
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          outC->init2 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_fahren_SM1 :
      outC->init4 = kcg_false;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->init5 = kcg_false;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      outC->init6 = kcg_false;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      outC->init7 = kcg_false;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->init8 = kcg_false;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      outC->init9 = kcg_false;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      outC->init10 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void autoModus_autoHold_HillHo_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L8 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->ready = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Start_SM1;
  outC->SM1_state_sel = SSM_st_Start_SM1;
  outC->_L3_fzgSteht_SM1 = kcg_true;
  outC->_L2_fzgSteht_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L9_fzgSteht_SM1 = kcg_true;
  outC->_L10_fzgSteht_SM1 = kcg_true;
  outC->_L8_fzgSteht_SM1 = kcg_true;
  outC->_L7_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L6_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L5_fzgSteht_SM1 = kcg_true;
  outC->_L11_fzgSteht_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L41_fzgSteht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L40_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L38_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L36_fzgSteht_SM1 = kcg_true;
  outC->_L35_fzgSteht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L34_fzgSteht_SM1 = kcg_true;
  outC->_L32_fzgSteht_SM1 = kcg_true;
  outC->_L42_fzgSteht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L43_fzgSteht_SM1 = kcg_true;
  outC->_L54_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L55_fzgSteht_SM1 = kcg_true;
  outC->_L57_fzgSteht_SM1 = kcg_lit_float64(0.0);
  outC->_L1_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L3_haltImAutoHold_SM1 = kcg_true;
  outC->_L2_haltImAutoHold_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L9_haltImAutoHold_SM1 = kcg_true;
  outC->_L10_haltImAutoHold_SM1 = kcg_true;
  outC->_L8_haltImAutoHold_SM1 = kcg_true;
  outC->_L7_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L6_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L5_haltImAutoHold_SM1 = kcg_true;
  outC->_L11_haltImAutoHold_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L41_haltImAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L40_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L38_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L36_haltImAutoHold_SM1 = kcg_true;
  outC->_L35_haltImAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L34_haltImAutoHold_SM1 = kcg_true;
  outC->_L32_haltImAutoHold_SM1 = kcg_true;
  outC->_L42_haltImAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L43_haltImAutoHold_SM1 = kcg_true;
  outC->_L54_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L55_haltImAutoHold_SM1 = kcg_true;
  outC->_L57_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L9_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L11_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L12_anhaltenMitAutoHold_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_anhaltenMitAutoHold_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L14_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L15_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L16_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L17_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L18_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L19_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L20_anhaltenMitAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L21_anhaltenMitAutoHold_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L22_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L23_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L24_anhaltenMitAutoHold_SM1 = kcg_true;
  outC->_L25_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L26_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
  outC->_L1_bremspedalTreten_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L2_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L5_gasGeben_SM2_anfahren_SM1 = kcg_true;
  outC->_L6_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L7_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_clock_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_state_sel_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_state_act_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_fired_strong_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
  outC->SM2_fired_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
  outC->_L6_fahren_SM1 = kcg_true;
  outC->_L5_fahren_SM1 = kcg_true;
  outC->_L4_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_fahren_SM1 = kcg_true;
  outC->_L2_fahren_SM1 = kcg_true;
  outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1 = kcg_true;
  outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5_HoldLoesen_SM4_autoHoldEinschalten_SM1 = kcg_true;
  outC->_L2_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4_HoldLoesen_SM4_autoHoldEinschalten_SM1 = kcg_true;
  outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->SM4_clock_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_state_sel_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_state_act_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_fired_strong_autoHoldEinschalten_SM1 =
    SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
  outC->SM4_fired_autoHoldEinschalten_SM1 =
    SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
  outC->_L1_EPB_arretiert_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_arretiert_SM1 = kcg_true;
  outC->_L13_EPB_arretiert_SM1 = kcg_true;
  outC->_L12_EPB_arretiert_SM1 = kcg_true;
  outC->_L10_EPB_arretiert_SM1 = kcg_true;
  outC->_L11_EPB_arretiert_SM1 = kcg_true;
  outC->_L9_EPB_arretiert_SM1 = kcg_lit_float64(0.0);
  outC->_L8_EPB_arretiert_SM1 = kcg_lit_float64(0.0);
  outC->_L15_EPB_arretiert_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L2_anfahrenVorbereiten_SM1 = kcg_true;
  outC->_L6_anfahrenVorbereiten_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L7_anfahrenVorbereiten_SM1 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L8_anfahrenVorbereiten_SM1 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L1_EPB_angezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_angezogen_SM1 = kcg_true;
  outC->_L4_EPB_angezogen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L6_EPB_angezogen_SM1 = kcg_lit_float64(0.0);
  outC->_L7_EPB_angezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_EPB_angezogen_SM1 = kcg_true;
  outC->_L12_EPB_angezogen_SM1 = kcg_true;
  outC->_L10_EPB_angezogen_SM1 = kcg_true;
  outC->_L11_EPB_angezogen_SM1 = kcg_true;
  outC->_L9_EPB_angezogen_SM1 = kcg_lit_float64(0.0);
  outC->_L8_EPB_angezogen_SM1 = kcg_lit_float64(0.0);
  outC->_L3_betriebsbremseLoesen_SM1 = kcg_true;
  outC->_L5_betriebsbremseLoesen_SM1 = kcg_lit_float64(0.0);
  outC->_L6_betriebsbremseLoesen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L5_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L4_cockpitanzeigeBleibtAus_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L11_cockpitanzeigeBleibtAus_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L10_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L9_cockpitanzeigeBleibtAus_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L12_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L14_cockpitanzeigeBleibtAus_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L16_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L21_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L22_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L20_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L19_cockpitanzeigeBleibtAus_SM1 = kcg_lit_float64(0.0);
  outC->_L18_cockpitanzeigeBleibtAus_SM1 = kcg_true;
  outC->_L23_cockpitanzeigeBleibtAus_SM1 = kcg_lit_float64(0.0);
  outC->_L25_cockpitanzeigeBleibtAus_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L26_cockpitanzeigeBleibtAus_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L2_automatikModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L4_automatikModusEingestellt_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L9_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L10_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L8_automatikModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L7_automatikModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L6_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L5_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L11_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L12_automatikModusEingestellt_SM1 = kcg_true;
  outC->_L14_automatikModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L15_automatikModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->automastikModusEinstellen_weakb_clock_SM1 = kcg_true;
  outC->_L5_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L4_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L6_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L7_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L8_automastikModusEinstellen_SM1 = kcg_lit_float64(0.0);
  outC->_L10_automastikModusEinstellen_SM1 = kcg_lit_float64(0.0);
  outC->_L11_automastikModusEinstellen_SM1 =
    epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L13_automastikModusEinstellen_SM1 =
    epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L14_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L15_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L16_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L17_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L25_automastikModusEinstellen_SM1 = kcg_true;
  outC->_L26_automastikModusEinstellen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L2_bremspedalDurchtreten_SM1 = kcg_lit_float64(0.0);
  outC->_L1_zuendungEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_reset_act_anfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_anfahren_SM1 = kcg_true;
  outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_true;
  outC->SM4_reset_nxt_autoHoldEinschalten_SM1 = kcg_true;
  outC->init10 = kcg_true;
  outC->init9 = kcg_true;
  outC->init8 = kcg_true;
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_4);
  /* SM1:EPB_arretiert:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_5);
  /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_8);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Start_SM1;
  outC->zuendschalter = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->getriebeWahlhebel = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->fahrertuerSchalter = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->sicherheitsgurtSchalter = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->taste_P = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->taste_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->gaspedalStellung = kcg_lit_float64(0.0);
  outC->bremspedalKraft = kcg_lit_float64(0.0);
  outC->error = kcg_false;
  outC->mem_aktZeit = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void autoModus_autoHold_HillHo_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->init10 = kcg_true;
  outC->init9 = kcg_true;
  outC->init8 = kcg_true;
  outC->init7 = kcg_true;
  outC->init6 = kcg_true;
  outC->init5 = kcg_true;
  outC->init4 = kcg_true;
  outC->init3 = kcg_true;
  outC->init2 = kcg_true;
  outC->init1 = kcg_true;
  outC->init = kcg_true;
  /* SM1:automastikModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:automatikModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* SM1:EPB_angezogen:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#4)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_4);
  /* SM1:EPB_arretiert:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_5);
  /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_8);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Start_SM1;
  outC->zuendschalter = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->getriebeWahlhebel = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->fahrertuerSchalter = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->sicherheitsgurtSchalter = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->taste_P = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->taste_Hold = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->gaspedalStellung = kcg_lit_float64(0.0);
  outC->bremspedalKraft = kcg_lit_float64(0.0);
  outC->error = kcg_false;
  outC->mem_aktZeit = kcg_lit_float64(0.0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** autoModus_autoHold_HillHo_AH_testSuite_Pkg_divFahrer.c
** Generation date: 2020-05-31T14:48:11
*************************************************************$ */

