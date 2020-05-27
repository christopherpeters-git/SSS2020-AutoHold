/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manModus_autoHold_AH_testSuite_Pkg_divFahrer.h"

/* AH_testSuite_Pkg::divFahrer::manModus_autoHold/ */
void manModus_autoHold_AH_testSuite_Pkg_divFahrer(
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
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
{
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter_partial;
  /* ready/ */
  kcg_bool ready_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _1_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _2_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _3_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _4_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _5_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _6_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _7_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _8_zuendschalter_partial;
  /* ready/ */
  kcg_bool _9_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _12_SM1_fired_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _13_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _14_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _15_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _16_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _17_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _18_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _19_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _20_zuendschalter_partial;
  /* ready/ */
  kcg_bool _21_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _22_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _24_SM1_fired_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _25_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _26_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _27_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _28_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _29_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _30_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _31_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _32_zuendschalter_partial;
  /* ready/ */
  kcg_bool _33_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _36_SM1_fired_partial;
  kcg_bool noname;
  /* SM1:manuellModusEinstellen:<1> */
  kcg_bool tr_1_guard_manuellModusEinstellen_SM1;
  /* SM1: */
  SSM_TR_SM1 _37_SM1_fired_partial;
  /* SM1: */
  kcg_bool _38_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _39_SM1_state_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _40_SM1_fired_partial;
  /* SM1: */
  kcg_bool _41_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_ST_SM1 _42_SM1_state_nxt_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _43_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _44_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _45_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _46_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _47_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _48_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _49_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _50_zuendschalter_partial;
  /* ready/ */
  kcg_bool _51_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _52_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _53_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _54_SM1_fired_partial;
  /* SM1:manuellModusEingestellt:<1> */
  kcg_bool tr_1_guard_manuellModusEingestellt_SM1;
  kcg_bool _55_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _56_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _57_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _58_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _59_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _60_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _61_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _62_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _63_zuendschalter_partial;
  /* ready/ */
  kcg_bool _64_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _65_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _66_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _67_SM1_fired_partial;
  /* SM1:cockpitanzeigeBleibtAus:<1> */
  kcg_bool tr_1_guard_cockpitanzeigeBleibtAus_SM1;
  kcg_bool _68_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _69_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _70_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _71_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _72_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _73_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _74_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _75_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _76_zuendschalter_partial;
  /* ready/ */
  kcg_bool _77_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _78_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _79_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _80_SM1_fired_partial;
  /* SM1:betriebsbremseLoesen:<1> */
  kcg_bool tr_1_guard_betriebsbremseLoesen_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _81_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _82_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _83_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _84_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _85_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _86_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _87_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _88_zuendschalter_partial;
  /* ready/ */
  kcg_bool _89_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _90_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _91_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _92_SM1_fired_partial;
  /* SM1:anfahrenVorbereiten:<1> */
  kcg_bool tr_1_guard_anfahrenVorbereiten_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _93_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _94_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _95_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _96_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _97_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _98_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _99_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _100_zuendschalter_partial;
  /* ready/ */
  kcg_bool _101_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _102_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _103_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _104_SM1_fired_partial;
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
  kcg_bool _105_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _106_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _107_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _108_gaspedalStellung_partial;
  /* SM1:anfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _109_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _110_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _111_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _112_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _113_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _114_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _115_gaspedalStellung_partial;
  /* SM1:anfahren:SM2:bremspedalTreten:<1> */
  kcg_bool tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _116_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _117_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _118_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _119_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _120_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _121_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _122_gaspedalStellung_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _123_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _124_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _125_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _126_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _127_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _128_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _129_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _130_zuendschalter_partial;
  /* ready/ */
  kcg_bool _131_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _132_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _133_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _134_SM1_fired_partial;
  /* SM1:fahren:<1> */
  kcg_bool tr_1_guard_fahren_SM1;
  kcg_bool _135_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _136_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _137_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _138_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _139_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _140_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _141_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _142_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _143_zuendschalter_partial;
  /* ready/ */
  kcg_bool _144_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _145_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _146_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _147_SM1_fired_partial;
  /* SM1:annaehern_an_Ampel:<1> */
  kcg_bool tr_1_guard_annaehern_an_Ampel_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _148_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _149_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _150_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _151_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _152_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _153_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _154_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _155_zuendschalter_partial;
  /* ready/ */
  kcg_bool _156_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _157_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _158_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _159_SM1_fired_partial;
  /* SM1:fzg_Steht:<1> */
  kcg_bool tr_1_guard_fzg_Steht_SM1;
  kcg_bool _160_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _161_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _162_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _163_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _164_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _165_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _166_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _167_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _168_zuendschalter_partial;
  /* ready/ */
  kcg_bool _169_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _170_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _171_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _172_SM1_fired_partial;
  /* SM1:erneutAnfahren:<1> */
  kcg_bool tr_1_guard_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool SM2_reset_prv_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool SM2_reset_sel_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _173_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _174_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _175_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _176_gaspedalStellung_partial;
  /* SM1:erneutAnfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _177_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _178_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _179_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _180_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _181_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _182_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _183_gaspedalStellung_partial;
  /* SM1:erneutAnfahren:SM2:bremspedalTreten:<1> */
  kcg_bool _184_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _185_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _186_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _187_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _188_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _189_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _190_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _191_gaspedalStellung_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _192_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _193_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _194_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _195_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _196_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _197_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _198_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _199_zuendschalter_partial;
  /* ready/ */
  kcg_bool _200_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _201_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _202_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _203_SM1_fired_partial;
  /* SM1:parken:<1> */
  kcg_bool tr_1_guard_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_prv_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_sel_parken_SM1;
  kcg_bool _204_noname;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 SM5_state_nxt_partial_parken_SM1;
  /* ready/ */
  kcg_bool _205_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _206_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _207_error_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _208_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:getriebeWahlhebelNach_P:<1> */
  kcg_bool tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _209_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _210_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _211_SM5_state_nxt_partial_parken_SM1;
  /* ready/ */
  kcg_bool _212_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _213_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _214_error_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _215_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:bremseDurchtreten:<1> */
  kcg_bool tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _216_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _217_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _218_SM5_state_nxt_partial_parken_SM1;
  /* ready/ */
  kcg_bool _219_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _220_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _221_error_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _222_getriebeWahlhebel_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _223_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _224_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _225_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _226_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _227_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _228_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _229_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _230_zuendschalter_partial;
  /* ready/ */
  kcg_bool _231_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _232_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _233_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _234_SM1_fired_partial;
  /* SM1:Taste_P_druecken:<1> */
  kcg_bool tr_1_guard_Taste_P_druecken_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _235_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _236_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _237_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _238_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _239_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _240_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _241_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _242_zuendschalter_partial;
  /* ready/ */
  kcg_bool _243_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _244_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _245_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _246_SM1_fired_partial;
  /* SM1:EPB_geloest:<1> */
  kcg_bool tr_1_guard_EPB_geloest_SM1;
  kcg_bool _247_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _248_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _249_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _250_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _251_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _252_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _253_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _254_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _255_zuendschalter_partial;
  /* ready/ */
  kcg_bool _256_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _257_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _258_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _259_SM1_fired_partial;
  /* SM1:fzg_Steht1:<1> */
  kcg_bool tr_1_guard_fzg_Steht1_SM1;
  kcg_bool _260_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _261_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _262_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _263_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _264_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _265_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _266_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _267_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _268_zuendschalter_partial;
  /* ready/ */
  kcg_bool _269_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _270_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _271_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _272_SM1_fired_partial;
  /* SM1:fahren1:<1> */
  kcg_bool tr_1_guard_fahren1_SM1;
  kcg_bool _273_noname;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _274_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _275_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _276_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _277_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _278_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _279_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _280_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _281_zuendschalter_partial;
  /* ready/ */
  kcg_bool _282_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _283_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _284_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _285_SM1_fired_partial;
  /* SM1:anhalten:<1> */
  kcg_bool tr_1_guard_anhalten_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _286_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _287_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _288_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _289_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _290_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _291_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _292_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _293_zuendschalter_partial;
  /* ready/ */
  kcg_bool _294_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _295_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _296_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _297_SM1_fired_partial;
  /* SM1:fzgAbstellen:<1> */
  kcg_bool tr_1_guard_fzgAbstellen_SM1;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _298_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _299_getriebeWahlhebel_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _300_sicherheitsgurtSchalter_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _301_fahrertuerSchalter_partial;
  /* error/ */
  kcg_bool _302_error_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _303_taste_P_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _304_bremspedalKraft_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _305_zuendschalter_partial;
  /* ready/ */
  kcg_bool _306_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _307_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _308_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _309_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Start:<1> */
  kcg_bool tr_1_guard_Start_SM1;
  /* SM1: */
  SSM_ST_SM1 _310_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _311_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _312_SM1_fired_strong_partial;
  /* SM1:zuendungEinschalten:<1> */
  kcg_bool tr_1_guard_zuendungEinschalten_SM1;
  /* SM1: */
  SSM_ST_SM1 _313_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _314_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _315_SM1_fired_strong_partial;
  /* SM1:bremspedalDurchtreten:<1> */
  kcg_bool tr_1_guard_bremspedalDurchtreten_SM1;
  /* SM1: */
  SSM_ST_SM1 _316_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _317_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _318_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _319_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _320_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _321_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _322_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _323_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _324_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _325_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _326_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _327_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _328_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _329_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _330_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _331_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _332_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _333_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _334_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _335_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _336_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _337_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _338_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _339_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _340_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _341_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _342_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _343_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _344_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _345_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _346_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _347_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _348_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _349_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _350_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _351_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _352_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _353_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _354_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _355_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _356_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _357_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _358_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _359_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _360_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _361_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _362_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _363_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _364_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _365_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _366_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _367_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _368_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _369_SM1_fired_strong_partial;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg _370_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _371_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _372_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _373_noname;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _374_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg last_zuendschalter;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg last_bremspedalKraft;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg last_taste_P;
  /* error/ */
  kcg_bool last_error;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg last_fahrertuerSchalter;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg last_sicherheitsgurtSchalter;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg last_getriebeWahlhebel;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg last_gaspedalStellung;
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg last_aktZeit;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_aktZeit = outC->mem_aktZeit;
  outC->mem_aktZeit = aktZeit;
  last_zuendschalter = outC->zuendschalter;
  last_bremspedalKraft = outC->bremspedalKraft;
  last_taste_P = outC->taste_P;
  last_error = outC->error;
  last_fahrertuerSchalter = outC->fahrertuerSchalter;
  last_sicherheitsgurtSchalter = outC->sicherheitsgurtSchalter;
  last_getriebeWahlhebel = outC->getriebeWahlhebel;
  last_gaspedalStellung = outC->gaspedalStellung;
  outC->_L9 = fzgLaengsneigung;
  _374_noname = outC->_L9;
  outC->_L8 = cockpitAnzeige_P;
  _373_noname = outC->_L8;
  outC->_L7 = led_P;
  _372_noname = outC->_L7;
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->taste_HOLD = outC->_L6;
  outC->_L4 = cockpitAnzeige_AutoHoldMode;
  _371_noname = outC->_L4;
  outC->_L2 = betriebsBremse;
  _370_noname = outC->_L2;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgAbgestellt_SM1 :
      _367_SM1_state_act_partial = SSM_st_fzgAbgestellt_SM1;
      outC->SM1_state_act = _367_SM1_state_act_partial;
      break;
    case SSM_st_fzgAbstellen_SM1 :
      _364_SM1_state_act_partial = SSM_st_fzgAbstellen_SM1;
      outC->SM1_state_act = _364_SM1_state_act_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _361_SM1_state_act_partial = SSM_st_anhalten_SM1;
      outC->SM1_state_act = _361_SM1_state_act_partial;
      break;
    case SSM_st_fahren1_SM1 :
      _358_SM1_state_act_partial = SSM_st_fahren1_SM1;
      outC->SM1_state_act = _358_SM1_state_act_partial;
      break;
    case SSM_st_fzg_Steht1_SM1 :
      _355_SM1_state_act_partial = SSM_st_fzg_Steht1_SM1;
      outC->SM1_state_act = _355_SM1_state_act_partial;
      break;
    case SSM_st_EPB_geloest_SM1 :
      _352_SM1_state_act_partial = SSM_st_EPB_geloest_SM1;
      outC->SM1_state_act = _352_SM1_state_act_partial;
      break;
    case SSM_st_Taste_P_druecken_SM1 :
      _349_SM1_state_act_partial = SSM_st_Taste_P_druecken_SM1;
      outC->SM1_state_act = _349_SM1_state_act_partial;
      break;
    case SSM_st_parken_SM1 :
      _346_SM1_state_act_partial = SSM_st_parken_SM1;
      outC->SM1_state_act = _346_SM1_state_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _343_SM1_state_act_partial = SSM_st_erneutAnfahren_SM1;
      outC->SM1_state_act = _343_SM1_state_act_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _340_SM1_state_act_partial = SSM_st_fzg_Steht_SM1;
      outC->SM1_state_act = _340_SM1_state_act_partial;
      break;
    case SSM_st_annaehern_an_Ampel_SM1 :
      _337_SM1_state_act_partial = SSM_st_annaehern_an_Ampel_SM1;
      outC->SM1_state_act = _337_SM1_state_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _334_SM1_state_act_partial = SSM_st_fahren_SM1;
      outC->SM1_state_act = _334_SM1_state_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _331_SM1_state_act_partial = SSM_st_anfahren_SM1;
      outC->SM1_state_act = _331_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _328_SM1_state_act_partial = SSM_st_anfahrenVorbereiten_SM1;
      outC->SM1_state_act = _328_SM1_state_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _325_SM1_state_act_partial = SSM_st_betriebsbremseLoesen_SM1;
      outC->SM1_state_act = _325_SM1_state_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _322_SM1_state_act_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      outC->SM1_state_act = _322_SM1_state_act_partial;
      break;
    case SSM_st_manuellModusEingestellt_SM1 :
      _319_SM1_state_act_partial = SSM_st_manuellModusEingestellt_SM1;
      outC->SM1_state_act = _319_SM1_state_act_partial;
      break;
    case SSM_st_manuellModusEinstellen_SM1 :
      _316_SM1_state_act_partial = SSM_st_manuellModusEinstellen_SM1;
      outC->SM1_state_act = _316_SM1_state_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      tr_1_guard_bremspedalDurchtreten_SM1 = aktZeit >= kcg_lit_float64(3.0);
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _313_SM1_state_act_partial = SSM_st_manuellModusEinstellen_SM1;
      }
      else {
        _313_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      outC->SM1_state_act = _313_SM1_state_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      tr_1_guard_zuendungEinschalten_SM1 = aktZeit >= kcg_lit_float64(2.0);
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _310_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      else {
        _310_SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      outC->SM1_state_act = _310_SM1_state_act_partial;
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
    case SSM_st_fzgAbgestellt_SM1 :
      _306_ready_partial = kcg_false;
      _305_zuendschalter_partial = last_zuendschalter;
      _304_bremspedalKraft_partial = last_bremspedalKraft;
      _303_taste_P_partial = last_taste_P;
      _301_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _300_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _299_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _298_gaspedalStellung_partial = last_gaspedalStellung;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgAbgestellt_SM1 :
      _369_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _369_SM1_fired_strong_partial;
      break;
    case SSM_st_fzgAbstellen_SM1 :
      _366_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _366_SM1_fired_strong_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _363_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _363_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren1_SM1 :
      _360_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _360_SM1_fired_strong_partial;
      break;
    case SSM_st_fzg_Steht1_SM1 :
      _357_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _357_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_geloest_SM1 :
      _354_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _354_SM1_fired_strong_partial;
      break;
    case SSM_st_Taste_P_druecken_SM1 :
      _351_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _351_SM1_fired_strong_partial;
      break;
    case SSM_st_parken_SM1 :
      _348_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _348_SM1_fired_strong_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _345_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _345_SM1_fired_strong_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _342_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _342_SM1_fired_strong_partial;
      break;
    case SSM_st_annaehern_an_Ampel_SM1 :
      _339_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _339_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren_SM1 :
      _336_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _336_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _333_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _333_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _330_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _330_SM1_fired_strong_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _327_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _327_SM1_fired_strong_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _324_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _324_SM1_fired_strong_partial;
      break;
    case SSM_st_manuellModusEingestellt_SM1 :
      _321_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _321_SM1_fired_strong_partial;
      break;
    case SSM_st_manuellModusEinstellen_SM1 :
      _318_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _318_SM1_fired_strong_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _315_SM1_fired_strong_partial =
          SSM_TR_bremspedalDurchtreten_manuellModusEinstellen_1_bremspedalDurchtreten_SM1;
      }
      else {
        _315_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _315_SM1_fired_strong_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _312_SM1_fired_strong_partial =
          SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1;
      }
      else {
        _312_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _312_SM1_fired_strong_partial;
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
    case SSM_st_fzgAbgestellt_SM1 :
      _309_SM1_fired_partial = outC->SM1_fired_strong;
      _308_SM1_reset_nxt_partial = kcg_false;
      _307_SM1_state_nxt_partial = SSM_st_fzgAbgestellt_SM1;
      outC->_L3_fzgAbgestellt_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L1_fzgAbgestellt_SM1 = EPB_Bremse;
      outC->_L2_fzgAbgestellt_SM1 = outC->_L1_fzgAbgestellt_SM1 ==
        outC->_L3_fzgAbgestellt_SM1;
      _302_error_partial = outC->_L2_fzgAbgestellt_SM1;
      break;
    case SSM_st_fzgAbstellen_SM1 :
      _294_ready_partial = kcg_false;
      _293_zuendschalter_partial = last_zuendschalter;
      _292_bremspedalKraft_partial = last_bremspedalKraft;
      _290_error_partial = last_error;
      _289_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _288_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _287_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _286_gaspedalStellung_partial = last_gaspedalStellung;
      tr_1_guard_fzgAbstellen_SM1 = kcg_true;
      if (tr_1_guard_fzgAbstellen_SM1) {
        _297_SM1_fired_partial = SSM_TR_fzgAbstellen_fzgAbgestellt_1_fzgAbstellen_SM1;
      }
      else {
        _297_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _296_SM1_reset_nxt_partial = tr_1_guard_fzgAbstellen_SM1;
      if (tr_1_guard_fzgAbstellen_SM1) {
        _295_SM1_state_nxt_partial = SSM_st_fzgAbgestellt_SM1;
      }
      else {
        _295_SM1_state_nxt_partial = SSM_st_fzgAbstellen_SM1;
      }
      outC->_L3_fzgAbstellen_SM1 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
      _291_taste_P_partial = outC->_L3_fzgAbstellen_SM1;
      break;
    case SSM_st_anhalten_SM1 :
      _282_ready_partial = kcg_false;
      _281_zuendschalter_partial = last_zuendschalter;
      _279_taste_P_partial = last_taste_P;
      _277_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _276_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _275_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      tr_1_guard_anhalten_SM1 = v_fzg <= cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      if (tr_1_guard_anhalten_SM1) {
        _285_SM1_fired_partial = SSM_TR_anhalten_fzg_Steht1_1_anhalten_SM1;
      }
      else {
        _285_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _284_SM1_reset_nxt_partial = tr_1_guard_anhalten_SM1;
      if (tr_1_guard_anhalten_SM1) {
        _283_SM1_state_nxt_partial = SSM_st_fzg_Steht1_SM1;
      }
      else {
        _283_SM1_state_nxt_partial = SSM_st_anhalten_SM1;
      }
      outC->_L13_anhalten_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L12_anhalten_SM1 = EPB_Bremse;
      outC->_L14_anhalten_SM1 = outC->_L12_anhalten_SM1 != outC->_L13_anhalten_SM1;
      _278_error_partial = outC->_L14_anhalten_SM1;
      outC->_L11_anhalten_SM1 = kcg_lit_float64(0.3);
      _280_bremspedalKraft_partial = outC->_L11_anhalten_SM1;
      outC->_L9_anhalten_SM1 = kcg_lit_float64(0.0);
      _274_gaspedalStellung_partial = outC->_L9_anhalten_SM1;
      break;
    case SSM_st_fahren1_SM1 :
      _268_zuendschalter_partial = last_zuendschalter;
      _267_bremspedalKraft_partial = last_bremspedalKraft;
      _266_taste_P_partial = last_taste_P;
      _265_error_partial = last_error;
      _264_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _263_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _262_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _261_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L5_fahren1_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_fahren1_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fahren1_SM1 :
      /* SM1:fahren1:_L6= */
      if (outC->init) {
        outC->_L6_fahren1_SM1 = kcg_true;
      }
      else {
        outC->_L6_fahren1_SM1 = outC->_L5_fahren1_SM1;
      }
      outC->_L4_fahren1_SM1 = aktZeit;
      outC->_L3_fahren1_SM1 = kcg_lit_float64(40.) *
        c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fahren1_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fahren1:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#12)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_12);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fahren1_SM1 :
      /* SM1:fahren1:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#12)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L6_fahren1_SM1,
        outC->_L5_fahren1_SM1,
        outC->_L4_fahren1_SM1,
        outC->_L3_fahren1_SM1,
        &outC->Context_countDownTimer_12);
      outC->_L1_fahren1_SM1 = outC->Context_countDownTimer_12.abgelaufen;
      outC->_L2_fahren1_SM1 = outC->Context_countDownTimer_12.laufend;
      _269_ready_partial = outC->_L1_fahren1_SM1;
      tr_1_guard_fahren1_SM1 = _269_ready_partial;
      if (tr_1_guard_fahren1_SM1) {
        _272_SM1_fired_partial = SSM_TR_fahren1_anhalten_1_fahren1_SM1;
      }
      else {
        _272_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _271_SM1_reset_nxt_partial = tr_1_guard_fahren1_SM1;
      if (tr_1_guard_fahren1_SM1) {
        _270_SM1_state_nxt_partial = SSM_st_anhalten_SM1;
      }
      else {
        _270_SM1_state_nxt_partial = SSM_st_fahren1_SM1;
      }
      _273_noname = outC->_L2_fahren1_SM1;
      break;
    case SSM_st_fzg_Steht1_SM1 :
      _255_zuendschalter_partial = last_zuendschalter;
      _254_bremspedalKraft_partial = last_bremspedalKraft;
      _253_taste_P_partial = last_taste_P;
      _252_error_partial = last_error;
      _251_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _250_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _249_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      outC->_L5_fzg_Steht1_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht1_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht1_SM1 :
      /* SM1:fzg_Steht1:_L8= */
      if (outC->init1) {
        outC->_L8_fzg_Steht1_SM1 = kcg_true;
      }
      else {
        outC->_L8_fzg_Steht1_SM1 = outC->_L5_fzg_Steht1_SM1;
      }
      outC->_L7_fzg_Steht1_SM1 = aktZeit;
      outC->_L6_fzg_Steht1_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht1_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fzg_Steht1:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#11)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_11);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht1_SM1 :
      /* SM1:fzg_Steht1:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#11)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzg_Steht1_SM1,
        outC->_L5_fzg_Steht1_SM1,
        outC->_L7_fzg_Steht1_SM1,
        outC->_L6_fzg_Steht1_SM1,
        &outC->Context_countDownTimer_11);
      outC->_L9_fzg_Steht1_SM1 = outC->Context_countDownTimer_11.abgelaufen;
      outC->_L10_fzg_Steht1_SM1 = outC->Context_countDownTimer_11.laufend;
      _256_ready_partial = outC->_L9_fzg_Steht1_SM1;
      tr_1_guard_fzg_Steht1_SM1 = _256_ready_partial;
      if (tr_1_guard_fzg_Steht1_SM1) {
        _259_SM1_fired_partial = SSM_TR_fzg_Steht1_parken_1_fzg_Steht1_SM1;
      }
      else {
        _259_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _258_SM1_reset_nxt_partial = tr_1_guard_fzg_Steht1_SM1;
      if (tr_1_guard_fzg_Steht1_SM1) {
        _257_SM1_state_nxt_partial = SSM_st_parken_SM1;
      }
      else {
        _257_SM1_state_nxt_partial = SSM_st_fzg_Steht1_SM1;
      }
      _260_noname = outC->_L10_fzg_Steht1_SM1;
      outC->_L1_fzg_Steht1_SM1 = kcg_lit_float64(0.0);
      _248_gaspedalStellung_partial = outC->_L1_fzg_Steht1_SM1;
      break;
    case SSM_st_EPB_geloest_SM1 :
      _242_zuendschalter_partial = last_zuendschalter;
      _238_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _237_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _236_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _235_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L12_EPB_geloest_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_geloest_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_geloest_SM1 :
      /* SM1:EPB_geloest:_L13= */
      if (outC->init2) {
        outC->_L13_EPB_geloest_SM1 = kcg_true;
      }
      else {
        outC->_L13_EPB_geloest_SM1 = outC->_L12_EPB_geloest_SM1;
      }
      outC->_L9_EPB_geloest_SM1 = aktZeit;
      outC->_L8_EPB_geloest_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_geloest_SM1 :
      if (SM1_reset_sel) {
        /* SM1:EPB_geloest:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_10);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_geloest_SM1 :
      /* SM1:EPB_geloest:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L13_EPB_geloest_SM1,
        outC->_L12_EPB_geloest_SM1,
        outC->_L9_EPB_geloest_SM1,
        outC->_L8_EPB_geloest_SM1,
        &outC->Context_countDownTimer_10);
      outC->_L10_EPB_geloest_SM1 = outC->Context_countDownTimer_10.abgelaufen;
      outC->_L11_EPB_geloest_SM1 = outC->Context_countDownTimer_10.laufend;
      _243_ready_partial = outC->_L10_EPB_geloest_SM1;
      tr_1_guard_EPB_geloest_SM1 = _243_ready_partial;
      if (tr_1_guard_EPB_geloest_SM1) {
        _246_SM1_fired_partial = SSM_TR_EPB_geloest_anfahren_1_EPB_geloest_SM1;
      }
      else {
        _246_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _245_SM1_reset_nxt_partial = tr_1_guard_EPB_geloest_SM1;
      if (tr_1_guard_EPB_geloest_SM1) {
        _244_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      else {
        _244_SM1_state_nxt_partial = SSM_st_EPB_geloest_SM1;
      }
      outC->_L14_EPB_geloest_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      _247_noname = outC->_L11_EPB_geloest_SM1;
      outC->_L6_EPB_geloest_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _241_bremspedalKraft_partial = outC->_L6_EPB_geloest_SM1;
      outC->_L4_EPB_geloest_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _240_taste_P_partial = outC->_L4_EPB_geloest_SM1;
      outC->_L1_EPB_geloest_SM1 = EPB_Bremse;
      outC->_L3_EPB_geloest_SM1 = outC->_L1_EPB_geloest_SM1 !=
        outC->_L14_EPB_geloest_SM1;
      _239_error_partial = outC->_L3_EPB_geloest_SM1;
      break;
    case SSM_st_Taste_P_druecken_SM1 :
      _230_zuendschalter_partial = last_zuendschalter;
      _227_error_partial = last_error;
      _226_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _225_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _224_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _223_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L2_Taste_P_druecken_SM1 = kcg_true;
      _231_ready_partial = outC->_L2_Taste_P_druecken_SM1;
      tr_1_guard_Taste_P_druecken_SM1 = _231_ready_partial;
      if (tr_1_guard_Taste_P_druecken_SM1) {
        _234_SM1_fired_partial =
          SSM_TR_Taste_P_druecken_EPB_geloest_1_Taste_P_druecken_SM1;
      }
      else {
        _234_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _233_SM1_reset_nxt_partial = tr_1_guard_Taste_P_druecken_SM1;
      if (tr_1_guard_Taste_P_druecken_SM1) {
        _232_SM1_state_nxt_partial = SSM_st_EPB_geloest_SM1;
      }
      else {
        _232_SM1_state_nxt_partial = SSM_st_Taste_P_druecken_SM1;
      }
      outC->_L5_Taste_P_druecken_SM1 = tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg;
      outC->_L4_Taste_P_druecken_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      _228_taste_P_partial = outC->_L5_Taste_P_druecken_SM1;
      _229_bremspedalKraft_partial = outC->_L4_Taste_P_druecken_SM1;
      break;
    case SSM_st_parken_SM1 :
      _199_zuendschalter_partial = last_zuendschalter;
      _197_taste_P_partial = last_taste_P;
      _195_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _194_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _192_gaspedalStellung_partial = last_gaspedalStellung;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_parken_SM1 :
      if (SM1_reset_sel) {
        outC->init4 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      /* SM1:parken:SM5: */
      if (outC->init4) {
        outC->SM5_state_sel_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
      }
      else {
        outC->SM5_state_sel_parken_SM1 = outC->SM5_state_nxt_parken_SM1;
      }
      outC->SM5_state_act_parken_SM1 = outC->SM5_state_sel_parken_SM1;
      outC->SM5_clock_parken_SM1 = outC->SM5_state_act_parken_SM1;
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          outC->_L6_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init4) {
        SM5_reset_sel_parken_SM1 = kcg_false;
      }
      else {
        SM5_reset_sel_parken_SM1 = outC->SM5_reset_nxt_parken_SM1;
      }
      switch (outC->SM5_state_sel_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          if (SM5_reset_sel_parken_SM1) {
            outC->init3 = kcg_true;
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
    case SSM_st_parken_SM1 :
      if (SM1_reset_sel) {
        outC->init3 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          /* SM1:parken:SM5:EPB_nicht_angezogen:_L5= */
          if (outC->init3) {
            outC->_L5_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
          }
          else {
            outC->_L5_EPB_nicht_angezogen_SM5_parken_SM1 =
              outC->_L6_EPB_nicht_angezogen_SM5_parken_SM1;
          }
          outC->_L9_EPB_nicht_angezogen_SM5_parken_SM1 = aktZeit;
          outC->_L4_EPB_nicht_angezogen_SM5_parken_SM1 =
            c_5s_warten_AH_testSuite_Pkg_divFahrer;
          break;
        default :
          /* this branch is empty */
          break;
      }
      switch (outC->SM5_state_sel_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          if (SM5_reset_sel_parken_SM1) {
            /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */
            countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
              &outC->Context_countDownTimer_13);
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
    case SSM_st_parken_SM1 :
      if (SM1_reset_sel) {
        /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_13);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      /* SM1:parken:SM5: */
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */
          countDownTimer_AhTypes_Pkg_utils_Pkg(
            outC->_L5_EPB_nicht_angezogen_SM5_parken_SM1,
            outC->_L6_EPB_nicht_angezogen_SM5_parken_SM1,
            outC->_L9_EPB_nicht_angezogen_SM5_parken_SM1,
            outC->_L4_EPB_nicht_angezogen_SM5_parken_SM1,
            &outC->Context_countDownTimer_13);
          outC->_L7_EPB_nicht_angezogen_SM5_parken_SM1 =
            outC->Context_countDownTimer_13.abgelaufen;
          outC->_L8_EPB_nicht_angezogen_SM5_parken_SM1 =
            outC->Context_countDownTimer_13.laufend;
          _205_ready_partial = outC->_L7_EPB_nicht_angezogen_SM5_parken_SM1;
          _200_ready_partial = _205_ready_partial;
          break;
        case SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1 :
          _212_ready_partial = kcg_false;
          _200_ready_partial = _212_ready_partial;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          _219_ready_partial = kcg_false;
          _200_ready_partial = _219_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_parken_SM1 = _200_ready_partial;
      if (tr_1_guard_parken_SM1) {
        _203_SM1_fired_partial = SSM_TR_parken_fzgAbstellen_1_parken_SM1;
      }
      else {
        _203_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _202_SM1_reset_nxt_partial = tr_1_guard_parken_SM1;
      if (tr_1_guard_parken_SM1) {
        _201_SM1_state_nxt_partial = SSM_st_fzgAbstellen_SM1;
      }
      else {
        _201_SM1_state_nxt_partial = SSM_st_parken_SM1;
      }
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          _206_bremspedalKraft_partial = last_bremspedalKraft;
          _208_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->SM5_fired_strong_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
      /* SM1:parken:SM5: */
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          SM5_fired_partial_parken_SM1 = outC->SM5_fired_strong_parken_SM1;
          SM5_reset_nxt_partial_parken_SM1 = kcg_false;
          SM5_state_nxt_partial_parken_SM1 = SSM_st_EPB_nicht_angezogen_SM5_parken_SM1;
          _204_noname = outC->_L8_EPB_nicht_angezogen_SM5_parken_SM1;
          outC->_L2_EPB_nicht_angezogen_SM5_parken_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
          outC->_L1_EPB_nicht_angezogen_SM5_parken_SM1 = EPB_Bremse;
          outC->_L3_EPB_nicht_angezogen_SM5_parken_SM1 =
            outC->_L1_EPB_nicht_angezogen_SM5_parken_SM1 !=
            outC->_L2_EPB_nicht_angezogen_SM5_parken_SM1;
          _207_error_partial = outC->_L3_EPB_nicht_angezogen_SM5_parken_SM1;
          _193_getriebeWahlhebel_partial = _208_getriebeWahlhebel_partial;
          _196_error_partial = _207_error_partial;
          _198_bremspedalKraft_partial = _206_bremspedalKraft_partial;
          outC->SM5_state_nxt_parken_SM1 = SM5_state_nxt_partial_parken_SM1;
          outC->SM5_reset_nxt_parken_SM1 = SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = SM5_fired_partial_parken_SM1;
          break;
        case SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1 :
          _213_bremspedalKraft_partial = last_bremspedalKraft;
          _214_error_partial = last_error;
          tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _209_SM5_fired_partial_parken_SM1 =
              SSM_TR_getriebeWahlhebelNach_P_EPB_nicht_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _209_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _210_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _211_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_EPB_nicht_angezogen_SM5_parken_SM1;
          }
          else {
            _211_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1 =
            getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
          _215_getriebeWahlhebel_partial =
            outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          _193_getriebeWahlhebel_partial = _215_getriebeWahlhebel_partial;
          _196_error_partial = _214_error_partial;
          _198_bremspedalKraft_partial = _213_bremspedalKraft_partial;
          outC->SM5_state_nxt_parken_SM1 = _211_SM5_state_nxt_partial_parken_SM1;
          outC->SM5_reset_nxt_parken_SM1 = _210_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _209_SM5_fired_partial_parken_SM1;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          _221_error_partial = last_error;
          _222_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremseDurchtreten_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _216_SM5_fired_partial_parken_SM1 =
              SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1;
          }
          else {
            _216_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _217_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _218_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _218_SM5_state_nxt_partial_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
          }
          outC->_L1_bremseDurchtreten_SM5_parken_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _220_bremspedalKraft_partial = outC->_L1_bremseDurchtreten_SM5_parken_SM1;
          _193_getriebeWahlhebel_partial = _222_getriebeWahlhebel_partial;
          _196_error_partial = _221_error_partial;
          _198_bremspedalKraft_partial = _220_bremspedalKraft_partial;
          outC->SM5_state_nxt_parken_SM1 = _218_SM5_state_nxt_partial_parken_SM1;
          outC->SM5_reset_nxt_parken_SM1 = _217_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _216_SM5_fired_partial_parken_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init4) {
        SM5_reset_prv_parken_SM1 = kcg_false;
      }
      else {
        SM5_reset_prv_parken_SM1 = outC->SM5_reset_act_parken_SM1;
      }
      outC->SM5_reset_act_parken_SM1 = kcg_false;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _168_zuendschalter_partial = last_zuendschalter;
      _166_taste_P_partial = last_taste_P;
      _165_error_partial = last_error;
      _164_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _163_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_erneutAnfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init6 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_erneutAnfahren_SM1 :
      /* SM1:erneutAnfahren:SM2: */
      if (outC->init6) {
        outC->SM2_state_sel_erneutAnfahren_SM1 =
          SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
      }
      else {
        outC->SM2_state_sel_erneutAnfahren_SM1 = outC->SM2_state_nxt_erneutAnfahren_SM1;
      }
      outC->SM2_state_act_erneutAnfahren_SM1 = outC->SM2_state_sel_erneutAnfahren_SM1;
      outC->SM2_clock_erneutAnfahren_SM1 = outC->SM2_state_act_erneutAnfahren_SM1;
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          outC->_L6_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.4);
          break;
        default :
          /* this branch is empty */
          break;
      }
      /* SM1:erneutAnfahren:SM2: */
      if (outC->init6) {
        SM2_reset_sel_erneutAnfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_erneutAnfahren_SM1 = outC->SM2_reset_nxt_erneutAnfahren_SM1;
      }
      switch (outC->SM2_state_sel_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          if (SM2_reset_sel_erneutAnfahren_SM1) {
            outC->init5 = kcg_true;
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
    case SSM_st_erneutAnfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init5 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_erneutAnfahren_SM1 :
      /* SM1:erneutAnfahren:SM2: */
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          /* SM1:erneutAnfahren:SM2:gasGeben:_L3= */
          if (outC->init5) {
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 =
              outC->_L4_gasGeben_SM2_erneutAnfahren_SM1;
          }
          outC->_L5_gasGeben_SM2_erneutAnfahren_SM1 =
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 >=
            outC->_L6_gasGeben_SM2_erneutAnfahren_SM1;
          _173_ready_partial = outC->_L5_gasGeben_SM2_erneutAnfahren_SM1;
          _169_ready_partial = _173_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _180_ready_partial = kcg_false;
          _169_ready_partial = _180_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_false;
          _188_ready_partial = outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _169_ready_partial = _188_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_erneutAnfahren_SM1 = _169_ready_partial;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _172_SM1_fired_partial = SSM_TR_erneutAnfahren_fahren1_1_erneutAnfahren_SM1;
      }
      else {
        _172_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _171_SM1_reset_nxt_partial = tr_1_guard_erneutAnfahren_SM1;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _170_SM1_state_nxt_partial = SSM_st_fahren1_SM1;
      }
      else {
        _170_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          _175_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->SM2_fired_strong_erneutAnfahren_SM1 =
        SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
      /* SM1:erneutAnfahren:SM2: */
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          SM2_fired_partial_erneutAnfahren_SM1 =
            outC->SM2_fired_strong_erneutAnfahren_SM1;
          SM2_reset_nxt_partial_erneutAnfahren_SM1 = kcg_false;
          SM2_state_nxt_partial_erneutAnfahren_SM1 =
            SSM_st_gasGeben_SM2_erneutAnfahren_SM1;
          outC->_L7_gasGeben_SM2_erneutAnfahren_SM1 =
            cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
          _174_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_erneutAnfahren_SM1;
          outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 =
            outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 +
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _176_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _161_gaspedalStellung_partial = _176_gaspedalStellung_partial;
          _162_getriebeWahlhebel_partial = _175_getriebeWahlhebel_partial;
          _167_bremspedalKraft_partial = _174_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _181_bremspedalKraft_partial = last_bremspedalKraft;
          _183_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _177_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _177_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _178_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _179_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_gasGeben_SM2_erneutAnfahren_SM1;
          }
          else {
            _179_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1 =
            getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _182_getriebeWahlhebel_partial =
            outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          _161_gaspedalStellung_partial = _183_gaspedalStellung_partial;
          _162_getriebeWahlhebel_partial = _182_getriebeWahlhebel_partial;
          _167_bremspedalKraft_partial = _181_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _179_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _178_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _177_SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          _190_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          _191_gaspedalStellung_partial = last_gaspedalStellung;
          _184_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_true;
          if (_184_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _185_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          else {
            _185_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _186_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            _184_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
          if (_184_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _187_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _187_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _189_bremspedalKraft_partial =
            outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _161_gaspedalStellung_partial = _191_gaspedalStellung_partial;
          _162_getriebeWahlhebel_partial = _190_getriebeWahlhebel_partial;
          _167_bremspedalKraft_partial = _189_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _187_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _186_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _185_SM2_fired_partial_erneutAnfahren_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:erneutAnfahren:SM2: */
      if (outC->init6) {
        SM2_reset_prv_erneutAnfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_erneutAnfahren_SM1 = outC->SM2_reset_act_erneutAnfahren_SM1;
      }
      outC->SM2_reset_act_erneutAnfahren_SM1 = kcg_false;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _155_zuendschalter_partial = last_zuendschalter;
      _154_bremspedalKraft_partial = last_bremspedalKraft;
      _153_taste_P_partial = last_taste_P;
      _151_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _150_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _149_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      outC->_L5_fzg_Steht_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht_SM1 :
      if (SM1_reset_sel) {
        outC->init7 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht_SM1 :
      /* SM1:fzg_Steht:_L8= */
      if (outC->init7) {
        outC->_L8_fzg_Steht_SM1 = kcg_true;
      }
      else {
        outC->_L8_fzg_Steht_SM1 = outC->_L5_fzg_Steht_SM1;
      }
      outC->_L7_fzg_Steht_SM1 = aktZeit;
      outC->_L6_fzg_Steht_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_7);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht_SM1 :
      /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzg_Steht_SM1,
        outC->_L5_fzg_Steht_SM1,
        outC->_L7_fzg_Steht_SM1,
        outC->_L6_fzg_Steht_SM1,
        &outC->Context_countDownTimer_7);
      outC->_L9_fzg_Steht_SM1 = outC->Context_countDownTimer_7.abgelaufen;
      outC->_L10_fzg_Steht_SM1 = outC->Context_countDownTimer_7.laufend;
      _156_ready_partial = outC->_L9_fzg_Steht_SM1;
      tr_1_guard_fzg_Steht_SM1 = _156_ready_partial;
      if (tr_1_guard_fzg_Steht_SM1) {
        _159_SM1_fired_partial = SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1;
      }
      else {
        _159_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _158_SM1_reset_nxt_partial = tr_1_guard_fzg_Steht_SM1;
      if (tr_1_guard_fzg_Steht_SM1) {
        _157_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      else {
        _157_SM1_state_nxt_partial = SSM_st_fzg_Steht_SM1;
      }
      outC->_L16_fzg_Steht_SM1 = cockpitAnzeige_Hold;
      outC->_L15_fzg_Steht_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L12_fzg_Steht_SM1 = outC->_L16_fzg_Steht_SM1 == outC->_L15_fzg_Steht_SM1;
      outC->_L4_fzg_Steht_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L2_fzg_Steht_SM1 = EPB_Bremse;
      outC->_L3_fzg_Steht_SM1 = outC->_L2_fzg_Steht_SM1 != outC->_L4_fzg_Steht_SM1;
      outC->_L11_fzg_Steht_SM1 = outC->_L3_fzg_Steht_SM1 | outC->_L12_fzg_Steht_SM1;
      _160_noname = outC->_L10_fzg_Steht_SM1;
      _152_error_partial = outC->_L11_fzg_Steht_SM1;
      outC->_L1_fzg_Steht_SM1 = kcg_lit_float64(0.0);
      _148_gaspedalStellung_partial = outC->_L1_fzg_Steht_SM1;
      break;
    case SSM_st_annaehern_an_Ampel_SM1 :
      _144_ready_partial = kcg_false;
      _143_zuendschalter_partial = last_zuendschalter;
      _141_taste_P_partial = last_taste_P;
      _139_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _138_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _137_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      tr_1_guard_annaehern_an_Ampel_SM1 = v_fzg <= cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      if (tr_1_guard_annaehern_an_Ampel_SM1) {
        _147_SM1_fired_partial =
          SSM_TR_annaehern_an_Ampel_fzg_Steht_1_annaehern_an_Ampel_SM1;
      }
      else {
        _147_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _146_SM1_reset_nxt_partial = tr_1_guard_annaehern_an_Ampel_SM1;
      if (tr_1_guard_annaehern_an_Ampel_SM1) {
        _145_SM1_state_nxt_partial = SSM_st_fzg_Steht_SM1;
      }
      else {
        _145_SM1_state_nxt_partial = SSM_st_annaehern_an_Ampel_SM1;
      }
      outC->_L13_annaehern_an_Ampel_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L12_annaehern_an_Ampel_SM1 = EPB_Bremse;
      outC->_L14_annaehern_an_Ampel_SM1 = outC->_L12_annaehern_an_Ampel_SM1 !=
        outC->_L13_annaehern_an_Ampel_SM1;
      _140_error_partial = outC->_L14_annaehern_an_Ampel_SM1;
      outC->_L11_annaehern_an_Ampel_SM1 = kcg_lit_float64(0.3);
      _142_bremspedalKraft_partial = outC->_L11_annaehern_an_Ampel_SM1;
      outC->_L9_annaehern_an_Ampel_SM1 = kcg_lit_float64(0.0);
      _136_gaspedalStellung_partial = outC->_L9_annaehern_an_Ampel_SM1;
      break;
    case SSM_st_fahren_SM1 :
      _130_zuendschalter_partial = last_zuendschalter;
      _129_bremspedalKraft_partial = last_bremspedalKraft;
      _128_taste_P_partial = last_taste_P;
      _127_error_partial = last_error;
      _126_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _125_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _124_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _123_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L5_fahren_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fahren_SM1 :
      if (SM1_reset_sel) {
        outC->init8 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fahren_SM1 :
      /* SM1:fahren:_L6= */
      if (outC->init8) {
        outC->_L6_fahren_SM1 = kcg_true;
      }
      else {
        outC->_L6_fahren_SM1 = outC->_L5_fahren_SM1;
      }
      outC->_L4_fahren_SM1 = aktZeit;
      outC->_L3_fahren_SM1 = kcg_lit_float64(40.) *
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
      _131_ready_partial = outC->_L1_fahren_SM1;
      tr_1_guard_fahren_SM1 = _131_ready_partial;
      if (tr_1_guard_fahren_SM1) {
        _134_SM1_fired_partial = SSM_TR_fahren_annaehern_an_Ampel_1_fahren_SM1;
      }
      else {
        _134_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _133_SM1_reset_nxt_partial = tr_1_guard_fahren_SM1;
      if (tr_1_guard_fahren_SM1) {
        _132_SM1_state_nxt_partial = SSM_st_annaehern_an_Ampel_SM1;
      }
      else {
        _132_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      _135_noname = outC->_L2_fahren_SM1;
      break;
    case SSM_st_anfahren_SM1 :
      _100_zuendschalter_partial = last_zuendschalter;
      _98_taste_P_partial = last_taste_P;
      _97_error_partial = last_error;
      _96_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _95_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_anfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init10 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahren_SM1 :
      /* SM1:anfahren:SM2: */
      if (outC->init10) {
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
      if (outC->init10) {
        SM2_reset_sel_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_anfahren_SM1 = outC->SM2_reset_nxt_anfahren_SM1;
      }
      switch (outC->SM2_state_sel_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          if (SM2_reset_sel_anfahren_SM1) {
            outC->init9 = kcg_true;
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
        outC->init9 = kcg_true;
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
          if (outC->init9) {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = outC->_L4_gasGeben_SM2_anfahren_SM1;
          }
          outC->_L5_gasGeben_SM2_anfahren_SM1 =
            outC->_L3_gasGeben_SM2_anfahren_SM1 >= outC->_L6_gasGeben_SM2_anfahren_SM1;
          _105_ready_partial = outC->_L5_gasGeben_SM2_anfahren_SM1;
          _101_ready_partial = _105_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _112_ready_partial = kcg_false;
          _101_ready_partial = _112_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_false;
          _119_ready_partial = outC->_L2_bremspedalTreten_SM2_anfahren_SM1;
          _101_ready_partial = _119_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_anfahren_SM1 = _101_ready_partial;
      if (tr_1_guard_anfahren_SM1) {
        _104_SM1_fired_partial = SSM_TR_anfahren_fahren_1_anfahren_SM1;
      }
      else {
        _104_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _103_SM1_reset_nxt_partial = tr_1_guard_anfahren_SM1;
      if (tr_1_guard_anfahren_SM1) {
        _102_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      else {
        _102_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          _107_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          outC->_L7_gasGeben_SM2_anfahren_SM1 =
            cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
          _106_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_anfahren_SM1;
          outC->_L2_gasGeben_SM2_anfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_anfahren_SM1 =
            outC->_L2_gasGeben_SM2_anfahren_SM1 + outC->_L3_gasGeben_SM2_anfahren_SM1;
          _108_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_anfahren_SM1;
          _93_gaspedalStellung_partial = _108_gaspedalStellung_partial;
          _94_getriebeWahlhebel_partial = _107_getriebeWahlhebel_partial;
          _99_bremspedalKraft_partial = _106_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _113_bremspedalKraft_partial = last_bremspedalKraft;
          _115_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _109_SM2_fired_partial_anfahren_SM1 =
              _12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _109_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _110_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _111_SM2_state_nxt_partial_anfahren_SM1 = SSM_st_gasGeben_SM2_anfahren_SM1;
          }
          else {
            _111_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _114_getriebeWahlhebel_partial = outC->_L1_getriebe_auf_D_SM2_anfahren_SM1;
          _93_gaspedalStellung_partial = _115_gaspedalStellung_partial;
          _94_getriebeWahlhebel_partial = _114_getriebeWahlhebel_partial;
          _99_bremspedalKraft_partial = _113_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _111_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _110_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _109_SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          _121_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          _122_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _116_SM2_fired_partial_anfahren_SM1 =
              _13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1;
          }
          else {
            _116_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _117_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _118_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _118_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_anfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_anfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _120_bremspedalKraft_partial = outC->_L1_bremspedalTreten_SM2_anfahren_SM1;
          _93_gaspedalStellung_partial = _122_gaspedalStellung_partial;
          _94_getriebeWahlhebel_partial = _121_getriebeWahlhebel_partial;
          _99_bremspedalKraft_partial = _120_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _118_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _117_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _116_SM2_fired_partial_anfahren_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:anfahren:SM2: */
      if (outC->init10) {
        SM2_reset_prv_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_anfahren_SM1 = outC->SM2_reset_act_anfahren_SM1;
      }
      outC->SM2_reset_act_anfahren_SM1 = kcg_false;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _88_zuendschalter_partial = last_zuendschalter;
      _87_bremspedalKraft_partial = last_bremspedalKraft;
      _85_error_partial = last_error;
      _82_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _81_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L2_anfahrenVorbereiten_SM1 = kcg_true;
      _89_ready_partial = outC->_L2_anfahrenVorbereiten_SM1;
      tr_1_guard_anfahrenVorbereiten_SM1 = _89_ready_partial;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _92_SM1_fired_partial =
          SSM_TR_anfahrenVorbereiten_Taste_P_druecken_1_anfahrenVorbereiten_SM1;
      }
      else {
        _92_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _91_SM1_reset_nxt_partial = tr_1_guard_anfahrenVorbereiten_SM1;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _90_SM1_state_nxt_partial = SSM_st_Taste_P_druecken_SM1;
      }
      else {
        _90_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      outC->_L8_anfahrenVorbereiten_SM1 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
      _83_sicherheitsgurtSchalter_partial = outC->_L8_anfahrenVorbereiten_SM1;
      outC->_L7_anfahrenVorbereiten_SM1 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
      _84_fahrertuerSchalter_partial = outC->_L7_anfahrenVorbereiten_SM1;
      outC->_L6_anfahrenVorbereiten_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _86_taste_P_partial = outC->_L6_anfahrenVorbereiten_SM1;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _76_zuendschalter_partial = last_zuendschalter;
      _73_error_partial = last_error;
      _72_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _71_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _70_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _69_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L3_betriebsbremseLoesen_SM1 = kcg_true;
      _77_ready_partial = outC->_L3_betriebsbremseLoesen_SM1;
      tr_1_guard_betriebsbremseLoesen_SM1 = _77_ready_partial;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _80_SM1_fired_partial =
          SSM_TR_betriebsbremseLoesen_anfahrenVorbereiten_1_betriebsbremseLoesen_SM1;
      }
      else {
        _80_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _79_SM1_reset_nxt_partial = tr_1_guard_betriebsbremseLoesen_SM1;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _78_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      else {
        _78_SM1_state_nxt_partial = SSM_st_betriebsbremseLoesen_SM1;
      }
      outC->_L6_betriebsbremseLoesen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      outC->_L5_betriebsbremseLoesen_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _75_bremspedalKraft_partial = outC->_L5_betriebsbremseLoesen_SM1;
      _74_taste_P_partial = outC->_L6_betriebsbremseLoesen_SM1;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _63_zuendschalter_partial = last_zuendschalter;
      _62_bremspedalKraft_partial = last_bremspedalKraft;
      _61_taste_P_partial = last_taste_P;
      _59_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _58_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _57_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _56_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L20_cockpitanzeigeBleibtAus_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      if (SM1_reset_sel) {
        outC->init11 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L18= */
      if (outC->init11) {
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
      _64_ready_partial = outC->_L21_cockpitanzeigeBleibtAus_SM1;
      tr_1_guard_cockpitanzeigeBleibtAus_SM1 = _64_ready_partial;
      if (tr_1_guard_cockpitanzeigeBleibtAus_SM1) {
        _67_SM1_fired_partial =
          SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _67_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _66_SM1_reset_nxt_partial = tr_1_guard_cockpitanzeigeBleibtAus_SM1;
      if (tr_1_guard_cockpitanzeigeBleibtAus_SM1) {
        _65_SM1_state_nxt_partial = SSM_st_betriebsbremseLoesen_SM1;
      }
      else {
        _65_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      outC->_L27_cockpitanzeigeBleibtAus_SM1 = cockpitAnzeige_EPBMode_Manuell;
      outC->_L26_cockpitanzeigeBleibtAus_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      _68_noname = outC->_L22_cockpitanzeigeBleibtAus_SM1;
      outC->_L14_cockpitanzeigeBleibtAus_SM1 = EPB_Bremse;
      outC->_L16_cockpitanzeigeBleibtAus_SM1 =
        outC->_L14_cockpitanzeigeBleibtAus_SM1 !=
        outC->_L26_cockpitanzeigeBleibtAus_SM1;
      outC->_L9_cockpitanzeigeBleibtAus_SM1 = epbModus_manuell_AhTypes_Pkg_ah_Pkg;
      outC->_L11_cockpitanzeigeBleibtAus_SM1 = epbBetriebsmodus;
      outC->_L10_cockpitanzeigeBleibtAus_SM1 =
        outC->_L11_cockpitanzeigeBleibtAus_SM1 != outC->_L9_cockpitanzeigeBleibtAus_SM1;
      outC->_L4_cockpitanzeigeBleibtAus_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L5_cockpitanzeigeBleibtAus_SM1 =
        outC->_L27_cockpitanzeigeBleibtAus_SM1 != outC->_L4_cockpitanzeigeBleibtAus_SM1;
      outC->_L12_cockpitanzeigeBleibtAus_SM1 =
        outC->_L5_cockpitanzeigeBleibtAus_SM1 | outC->_L10_cockpitanzeigeBleibtAus_SM1 |
        outC->_L16_cockpitanzeigeBleibtAus_SM1;
      _60_error_partial = outC->_L12_cockpitanzeigeBleibtAus_SM1;
      break;
    case SSM_st_manuellModusEingestellt_SM1 :
      _50_zuendschalter_partial = last_zuendschalter;
      _46_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _45_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _44_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _43_gaspedalStellung_partial = last_gaspedalStellung;
      outC->_L6_manuellModusEingestellt_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_manuellModusEingestellt_SM1 :
      if (SM1_reset_sel) {
        outC->init12 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_manuellModusEingestellt_SM1 :
      /* SM1:manuellModusEingestellt:_L5= */
      if (outC->init12) {
        outC->_L5_manuellModusEingestellt_SM1 = kcg_true;
      }
      else {
        outC->_L5_manuellModusEingestellt_SM1 = outC->_L6_manuellModusEingestellt_SM1;
      }
      outC->_L8_manuellModusEingestellt_SM1 = aktZeit;
      outC->_L7_manuellModusEingestellt_SM1 = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_manuellModusEingestellt_SM1 :
      if (SM1_reset_sel) {
        /* SM1:manuellModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_2);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_manuellModusEingestellt_SM1 :
      /* SM1:manuellModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L5_manuellModusEingestellt_SM1,
        outC->_L6_manuellModusEingestellt_SM1,
        outC->_L8_manuellModusEingestellt_SM1,
        outC->_L7_manuellModusEingestellt_SM1,
        &outC->Context_countDownTimer_2);
      outC->_L9_manuellModusEingestellt_SM1 =
        outC->Context_countDownTimer_2.abgelaufen;
      outC->_L10_manuellModusEingestellt_SM1 = outC->Context_countDownTimer_2.laufend;
      _51_ready_partial = outC->_L9_manuellModusEingestellt_SM1;
      tr_1_guard_manuellModusEingestellt_SM1 = _51_ready_partial;
      if (tr_1_guard_manuellModusEingestellt_SM1) {
        _54_SM1_fired_partial =
          SSM_TR_manuellModusEingestellt_cockpitanzeigeBleibtAus_1_manuellModusEingestellt_SM1;
      }
      else {
        _54_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _53_SM1_reset_nxt_partial = tr_1_guard_manuellModusEingestellt_SM1;
      if (tr_1_guard_manuellModusEingestellt_SM1) {
        _52_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _52_SM1_state_nxt_partial = SSM_st_manuellModusEingestellt_SM1;
      }
      outC->_L18_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L17_manuellModusEingestellt_SM1 = cockpitAnzeige_EPBMode_Manuell;
      outC->_L16_manuellModusEingestellt_SM1 =
        outC->_L17_manuellModusEingestellt_SM1 ==
        outC->_L18_manuellModusEingestellt_SM1;
      outC->_L15_manuellModusEingestellt_SM1 = cockpitAnzeige_EPBMode_Automatik;
      outC->_L14_manuellModusEingestellt_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _49_bremspedalKraft_partial = outC->_L14_manuellModusEingestellt_SM1;
      outC->_L11_manuellModusEingestellt_SM1 = !outC->_L9_manuellModusEingestellt_SM1;
      outC->_L2_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L3_manuellModusEingestellt_SM1 =
        outC->_L15_manuellModusEingestellt_SM1 != outC->_L2_manuellModusEingestellt_SM1;
      outC->_L12_manuellModusEingestellt_SM1 =
        outC->_L3_manuellModusEingestellt_SM1 & outC->_L16_manuellModusEingestellt_SM1 &
        outC->_L11_manuellModusEingestellt_SM1;
      _55_noname = outC->_L10_manuellModusEingestellt_SM1;
      outC->_L4_manuellModusEingestellt_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _48_taste_P_partial = outC->_L4_manuellModusEingestellt_SM1;
      _47_error_partial = outC->_L12_manuellModusEingestellt_SM1;
      break;
    case SSM_st_manuellModusEinstellen_SM1 :
      _32_zuendschalter_partial = last_zuendschalter;
      _31_bremspedalKraft_partial = last_bremspedalKraft;
      _28_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _27_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _26_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _25_gaspedalStellung_partial = last_gaspedalStellung;
      outC->manuellModusEinstellen_weakb_clock_SM1 = outC->SM1_fired_strong !=
        _11_SSM_TR_no_trans_SM1;
      outC->_L7_manuellModusEinstellen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgAbgestellt_SM1 :
      _368_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _368_SM1_reset_act_partial;
      break;
    case SSM_st_fzgAbstellen_SM1 :
      _365_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _365_SM1_reset_act_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _362_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _362_SM1_reset_act_partial;
      break;
    case SSM_st_fahren1_SM1 :
      _359_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _359_SM1_reset_act_partial;
      break;
    case SSM_st_fzg_Steht1_SM1 :
      _356_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _356_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_geloest_SM1 :
      _353_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _353_SM1_reset_act_partial;
      break;
    case SSM_st_Taste_P_druecken_SM1 :
      _350_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _350_SM1_reset_act_partial;
      break;
    case SSM_st_parken_SM1 :
      _347_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _347_SM1_reset_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _344_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _344_SM1_reset_act_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _341_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _341_SM1_reset_act_partial;
      break;
    case SSM_st_annaehern_an_Ampel_SM1 :
      _338_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _338_SM1_reset_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _335_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _335_SM1_reset_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _332_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _332_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _329_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _329_SM1_reset_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _326_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _326_SM1_reset_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _323_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _323_SM1_reset_act_partial;
      break;
    case SSM_st_manuellModusEingestellt_SM1 :
      _320_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _320_SM1_reset_act_partial;
      break;
    case SSM_st_manuellModusEinstellen_SM1 :
      _317_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _317_SM1_reset_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _314_SM1_reset_act_partial = tr_1_guard_bremspedalDurchtreten_SM1;
      outC->SM1_reset_act = _314_SM1_reset_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _311_SM1_reset_act_partial = tr_1_guard_zuendungEinschalten_SM1;
      outC->SM1_reset_act = _311_SM1_reset_act_partial;
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
    case SSM_st_fzgAbgestellt_SM1 :
      outC->gaspedalStellung = _298_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _299_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _300_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _301_fahrertuerSchalter_partial;
      outC->error = _302_error_partial;
      outC->taste_P = _303_taste_P_partial;
      outC->bremspedalKraft = _304_bremspedalKraft_partial;
      outC->zuendschalter = _305_zuendschalter_partial;
      outC->ready = _306_ready_partial;
      outC->SM1_state_nxt = _307_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _308_SM1_reset_nxt_partial;
      outC->SM1_fired = _309_SM1_fired_partial;
      break;
    case SSM_st_fzgAbstellen_SM1 :
      outC->gaspedalStellung = _286_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _287_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _288_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _289_fahrertuerSchalter_partial;
      outC->error = _290_error_partial;
      outC->taste_P = _291_taste_P_partial;
      outC->bremspedalKraft = _292_bremspedalKraft_partial;
      outC->zuendschalter = _293_zuendschalter_partial;
      outC->ready = _294_ready_partial;
      outC->SM1_state_nxt = _295_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _296_SM1_reset_nxt_partial;
      outC->SM1_fired = _297_SM1_fired_partial;
      break;
    case SSM_st_anhalten_SM1 :
      outC->gaspedalStellung = _274_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _275_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _276_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _277_fahrertuerSchalter_partial;
      outC->error = _278_error_partial;
      outC->taste_P = _279_taste_P_partial;
      outC->bremspedalKraft = _280_bremspedalKraft_partial;
      outC->zuendschalter = _281_zuendschalter_partial;
      outC->ready = _282_ready_partial;
      outC->SM1_state_nxt = _283_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _284_SM1_reset_nxt_partial;
      outC->SM1_fired = _285_SM1_fired_partial;
      break;
    case SSM_st_fahren1_SM1 :
      outC->gaspedalStellung = _261_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _262_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _263_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _264_fahrertuerSchalter_partial;
      outC->error = _265_error_partial;
      outC->taste_P = _266_taste_P_partial;
      outC->bremspedalKraft = _267_bremspedalKraft_partial;
      outC->zuendschalter = _268_zuendschalter_partial;
      outC->ready = _269_ready_partial;
      outC->SM1_state_nxt = _270_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _271_SM1_reset_nxt_partial;
      outC->SM1_fired = _272_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_fzg_Steht1_SM1 :
      outC->gaspedalStellung = _248_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _249_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _250_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _251_fahrertuerSchalter_partial;
      outC->error = _252_error_partial;
      outC->taste_P = _253_taste_P_partial;
      outC->bremspedalKraft = _254_bremspedalKraft_partial;
      outC->zuendschalter = _255_zuendschalter_partial;
      outC->ready = _256_ready_partial;
      outC->SM1_state_nxt = _257_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _258_SM1_reset_nxt_partial;
      outC->SM1_fired = _259_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_EPB_geloest_SM1 :
      outC->gaspedalStellung = _235_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _236_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _237_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _238_fahrertuerSchalter_partial;
      outC->error = _239_error_partial;
      outC->taste_P = _240_taste_P_partial;
      outC->bremspedalKraft = _241_bremspedalKraft_partial;
      outC->zuendschalter = _242_zuendschalter_partial;
      outC->ready = _243_ready_partial;
      outC->SM1_state_nxt = _244_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _245_SM1_reset_nxt_partial;
      outC->SM1_fired = _246_SM1_fired_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_Taste_P_druecken_SM1 :
      outC->gaspedalStellung = _223_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _224_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _225_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _226_fahrertuerSchalter_partial;
      outC->error = _227_error_partial;
      outC->taste_P = _228_taste_P_partial;
      outC->bremspedalKraft = _229_bremspedalKraft_partial;
      outC->zuendschalter = _230_zuendschalter_partial;
      outC->ready = _231_ready_partial;
      outC->SM1_state_nxt = _232_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _233_SM1_reset_nxt_partial;
      outC->SM1_fired = _234_SM1_fired_partial;
      break;
    case SSM_st_parken_SM1 :
      outC->gaspedalStellung = _192_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _193_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _194_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _195_fahrertuerSchalter_partial;
      outC->error = _196_error_partial;
      outC->taste_P = _197_taste_P_partial;
      outC->bremspedalKraft = _198_bremspedalKraft_partial;
      outC->zuendschalter = _199_zuendschalter_partial;
      outC->ready = _200_ready_partial;
      outC->SM1_state_nxt = _201_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _202_SM1_reset_nxt_partial;
      outC->SM1_fired = _203_SM1_fired_partial;
      outC->init4 = kcg_false;
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_nicht_angezogen_SM5_parken_SM1 :
          outC->init3 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_erneutAnfahren_SM1 :
      outC->gaspedalStellung = _161_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _162_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _163_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _164_fahrertuerSchalter_partial;
      outC->error = _165_error_partial;
      outC->taste_P = _166_taste_P_partial;
      outC->bremspedalKraft = _167_bremspedalKraft_partial;
      outC->zuendschalter = _168_zuendschalter_partial;
      outC->ready = _169_ready_partial;
      outC->SM1_state_nxt = _170_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _171_SM1_reset_nxt_partial;
      outC->SM1_fired = _172_SM1_fired_partial;
      outC->init6 = kcg_false;
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          outC->init5 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_fzg_Steht_SM1 :
      outC->gaspedalStellung = _148_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _149_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _150_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _151_fahrertuerSchalter_partial;
      outC->error = _152_error_partial;
      outC->taste_P = _153_taste_P_partial;
      outC->bremspedalKraft = _154_bremspedalKraft_partial;
      outC->zuendschalter = _155_zuendschalter_partial;
      outC->ready = _156_ready_partial;
      outC->SM1_state_nxt = _157_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _158_SM1_reset_nxt_partial;
      outC->SM1_fired = _159_SM1_fired_partial;
      outC->init7 = kcg_false;
      break;
    case SSM_st_annaehern_an_Ampel_SM1 :
      outC->gaspedalStellung = _136_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _137_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _138_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _139_fahrertuerSchalter_partial;
      outC->error = _140_error_partial;
      outC->taste_P = _141_taste_P_partial;
      outC->bremspedalKraft = _142_bremspedalKraft_partial;
      outC->zuendschalter = _143_zuendschalter_partial;
      outC->ready = _144_ready_partial;
      outC->SM1_state_nxt = _145_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _146_SM1_reset_nxt_partial;
      outC->SM1_fired = _147_SM1_fired_partial;
      break;
    case SSM_st_fahren_SM1 :
      outC->gaspedalStellung = _123_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _124_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _125_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _126_fahrertuerSchalter_partial;
      outC->error = _127_error_partial;
      outC->taste_P = _128_taste_P_partial;
      outC->bremspedalKraft = _129_bremspedalKraft_partial;
      outC->zuendschalter = _130_zuendschalter_partial;
      outC->ready = _131_ready_partial;
      outC->SM1_state_nxt = _132_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _133_SM1_reset_nxt_partial;
      outC->SM1_fired = _134_SM1_fired_partial;
      outC->init8 = kcg_false;
      break;
    case SSM_st_anfahren_SM1 :
      outC->gaspedalStellung = _93_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _94_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _95_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _96_fahrertuerSchalter_partial;
      outC->error = _97_error_partial;
      outC->taste_P = _98_taste_P_partial;
      outC->bremspedalKraft = _99_bremspedalKraft_partial;
      outC->zuendschalter = _100_zuendschalter_partial;
      outC->ready = _101_ready_partial;
      outC->SM1_state_nxt = _102_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _103_SM1_reset_nxt_partial;
      outC->SM1_fired = _104_SM1_fired_partial;
      outC->init10 = kcg_false;
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          outC->init9 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      outC->gaspedalStellung = _81_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _82_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _83_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _84_fahrertuerSchalter_partial;
      outC->error = _85_error_partial;
      outC->taste_P = _86_taste_P_partial;
      outC->bremspedalKraft = _87_bremspedalKraft_partial;
      outC->zuendschalter = _88_zuendschalter_partial;
      outC->ready = _89_ready_partial;
      outC->SM1_state_nxt = _90_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _91_SM1_reset_nxt_partial;
      outC->SM1_fired = _92_SM1_fired_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      outC->gaspedalStellung = _69_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _70_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _71_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _72_fahrertuerSchalter_partial;
      outC->error = _73_error_partial;
      outC->taste_P = _74_taste_P_partial;
      outC->bremspedalKraft = _75_bremspedalKraft_partial;
      outC->zuendschalter = _76_zuendschalter_partial;
      outC->ready = _77_ready_partial;
      outC->SM1_state_nxt = _78_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _79_SM1_reset_nxt_partial;
      outC->SM1_fired = _80_SM1_fired_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->gaspedalStellung = _56_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _57_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _58_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _59_fahrertuerSchalter_partial;
      outC->error = _60_error_partial;
      outC->taste_P = _61_taste_P_partial;
      outC->bremspedalKraft = _62_bremspedalKraft_partial;
      outC->zuendschalter = _63_zuendschalter_partial;
      outC->ready = _64_ready_partial;
      outC->SM1_state_nxt = _65_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _66_SM1_reset_nxt_partial;
      outC->SM1_fired = _67_SM1_fired_partial;
      outC->init11 = kcg_false;
      break;
    case SSM_st_manuellModusEingestellt_SM1 :
      outC->gaspedalStellung = _43_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _44_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _45_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _46_fahrertuerSchalter_partial;
      outC->error = _47_error_partial;
      outC->taste_P = _48_taste_P_partial;
      outC->bremspedalKraft = _49_bremspedalKraft_partial;
      outC->zuendschalter = _50_zuendschalter_partial;
      outC->ready = _51_ready_partial;
      outC->SM1_state_nxt = _52_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _53_SM1_reset_nxt_partial;
      outC->SM1_fired = _54_SM1_fired_partial;
      outC->init12 = kcg_false;
      break;
    case SSM_st_manuellModusEinstellen_SM1 :
      if (outC->SM1_reset_act) {
        outC->init13 = kcg_true;
      }
      /* SM1:manuellModusEinstellen:_L6= */
      if (outC->init13) {
        outC->_L6_manuellModusEinstellen_SM1 = kcg_true;
      }
      else {
        outC->_L6_manuellModusEinstellen_SM1 = outC->_L7_manuellModusEinstellen_SM1;
      }
      outC->_L8_manuellModusEinstellen_SM1 = aktZeit;
      outC->_L10_manuellModusEinstellen_SM1 = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
      if (outC->SM1_reset_act) {
        /* SM1:manuellModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_1);
      }
      /* SM1:manuellModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L6_manuellModusEinstellen_SM1,
        outC->_L7_manuellModusEinstellen_SM1,
        outC->_L8_manuellModusEinstellen_SM1,
        outC->_L10_manuellModusEinstellen_SM1,
        &outC->Context_countDownTimer_1);
      outC->_L4_manuellModusEinstellen_SM1 =
        outC->Context_countDownTimer_1.abgelaufen;
      outC->_L5_manuellModusEinstellen_SM1 = outC->Context_countDownTimer_1.laufend;
      _33_ready_partial = outC->_L4_manuellModusEinstellen_SM1;
      /* SM1:manuellModusEinstellen: */
      if (outC->manuellModusEinstellen_weakb_clock_SM1) {
        _40_SM1_fired_partial = outC->SM1_fired_strong;
        _41_SM1_reset_nxt_partial = kcg_false;
        _42_SM1_state_nxt_partial = SSM_st_manuellModusEinstellen_SM1;
        _34_SM1_state_nxt_partial = _42_SM1_state_nxt_partial;
        _35_SM1_reset_nxt_partial = _41_SM1_reset_nxt_partial;
        _36_SM1_fired_partial = _40_SM1_fired_partial;
      }
      else {
        tr_1_guard_manuellModusEinstellen_SM1 = _33_ready_partial;
        if (tr_1_guard_manuellModusEinstellen_SM1) {
          _37_SM1_fired_partial =
            SSM_TR_manuellModusEinstellen_manuellModusEingestellt_1_manuellModusEinstellen_SM1;
        }
        else {
          _37_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
        }
        _38_SM1_reset_nxt_partial = tr_1_guard_manuellModusEinstellen_SM1;
        if (tr_1_guard_manuellModusEinstellen_SM1) {
          _39_SM1_state_nxt_partial = SSM_st_manuellModusEingestellt_SM1;
        }
        else {
          _39_SM1_state_nxt_partial = SSM_st_manuellModusEinstellen_SM1;
        }
        _34_SM1_state_nxt_partial = _39_SM1_state_nxt_partial;
        _35_SM1_reset_nxt_partial = _38_SM1_reset_nxt_partial;
        _36_SM1_fired_partial = _37_SM1_fired_partial;
      }
      outC->_L26_manuellModusEinstellen_SM1 = tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg;
      outC->_L14_manuellModusEinstellen_SM1 = _33_ready_partial;
      outC->_L16_manuellModusEinstellen_SM1 = !outC->_L14_manuellModusEinstellen_SM1;
      outC->_L11_manuellModusEinstellen_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
      outC->_L13_manuellModusEinstellen_SM1 = epbBetriebsmodus;
      outC->_L15_manuellModusEinstellen_SM1 =
        outC->_L13_manuellModusEinstellen_SM1 == outC->_L11_manuellModusEinstellen_SM1;
      outC->_L17_manuellModusEinstellen_SM1 =
        outC->_L15_manuellModusEinstellen_SM1 | outC->_L16_manuellModusEinstellen_SM1;
      outC->_L25_manuellModusEinstellen_SM1 = !outC->_L17_manuellModusEinstellen_SM1;
      _29_error_partial = outC->_L25_manuellModusEinstellen_SM1;
      noname = outC->_L5_manuellModusEinstellen_SM1;
      _30_taste_P_partial = outC->_L26_manuellModusEinstellen_SM1;
      outC->gaspedalStellung = _25_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _26_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _27_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _28_fahrertuerSchalter_partial;
      outC->error = _29_error_partial;
      outC->taste_P = _30_taste_P_partial;
      outC->bremspedalKraft = _31_bremspedalKraft_partial;
      outC->zuendschalter = _32_zuendschalter_partial;
      outC->ready = _33_ready_partial;
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      outC->init13 = kcg_false;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _21_ready_partial = kcg_false;
      _20_zuendschalter_partial = last_zuendschalter;
      _18_taste_P_partial = last_taste_P;
      _17_error_partial = last_error;
      _16_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _15_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _14_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _13_gaspedalStellung_partial = last_gaspedalStellung;
      _24_SM1_fired_partial = outC->SM1_fired_strong;
      _23_SM1_reset_nxt_partial = kcg_false;
      _22_SM1_state_nxt_partial = SSM_st_bremspedalDurchtreten_SM1;
      outC->_L2_bremspedalDurchtreten_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      _19_bremspedalKraft_partial = outC->_L2_bremspedalDurchtreten_SM1;
      outC->gaspedalStellung = _13_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _14_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _15_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _16_fahrertuerSchalter_partial;
      outC->error = _17_error_partial;
      outC->taste_P = _18_taste_P_partial;
      outC->bremspedalKraft = _19_bremspedalKraft_partial;
      outC->zuendschalter = _20_zuendschalter_partial;
      outC->ready = _21_ready_partial;
      outC->SM1_state_nxt = _22_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _23_SM1_reset_nxt_partial;
      outC->SM1_fired = _24_SM1_fired_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _9_ready_partial = kcg_false;
      _7_bremspedalKraft_partial = last_bremspedalKraft;
      _6_taste_P_partial = last_taste_P;
      _5_error_partial = last_error;
      _4_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _3_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _2_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _1_gaspedalStellung_partial = last_gaspedalStellung;
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_zuendungEinschalten_SM1;
      outC->_L1_zuendungEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      _8_zuendschalter_partial = outC->_L1_zuendungEinschalten_SM1;
      outC->gaspedalStellung = _1_gaspedalStellung_partial;
      outC->getriebeWahlhebel = _2_getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = _3_sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = _4_fahrertuerSchalter_partial;
      outC->error = _5_error_partial;
      outC->taste_P = _6_taste_P_partial;
      outC->bremspedalKraft = _7_bremspedalKraft_partial;
      outC->zuendschalter = _8_zuendschalter_partial;
      outC->ready = _9_ready_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_Start_SM1 :
      ready_partial = kcg_false;
      zuendschalter_partial = last_zuendschalter;
      bremspedalKraft_partial = last_bremspedalKraft;
      taste_P_partial = last_taste_P;
      error_partial = last_error;
      fahrertuerSchalter_partial = last_fahrertuerSchalter;
      sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      getriebeWahlhebel_partial = last_getriebeWahlhebel;
      gaspedalStellung_partial = last_gaspedalStellung;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_Start_SM1;
      outC->gaspedalStellung = gaspedalStellung_partial;
      outC->getriebeWahlhebel = getriebeWahlhebel_partial;
      outC->sicherheitsgurtSchalter = sicherheitsgurtSchalter_partial;
      outC->fahrertuerSchalter = fahrertuerSchalter_partial;
      outC->error = error_partial;
      outC->taste_P = taste_P_partial;
      outC->bremspedalKraft = bremspedalKraft_partial;
      outC->zuendschalter = zuendschalter_partial;
      outC->ready = ready_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void manModus_autoHold_init_AH_testSuite_Pkg_divFahrer(
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = kcg_lit_float64(0.0);
  outC->ready = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Start_SM1;
  outC->SM1_state_sel = SSM_st_Start_SM1;
  outC->_L1_fzgAbgestellt_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L2_fzgAbgestellt_SM1 = kcg_true;
  outC->_L3_fzgAbgestellt_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_fzgAbstellen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L9_anhalten_SM1 = kcg_lit_float64(0.0);
  outC->_L11_anhalten_SM1 = kcg_lit_float64(0.0);
  outC->_L12_anhalten_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_anhalten_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L14_anhalten_SM1 = kcg_true;
  outC->_L6_fahren1_SM1 = kcg_true;
  outC->_L5_fahren1_SM1 = kcg_true;
  outC->_L4_fahren1_SM1 = kcg_lit_float64(0.0);
  outC->_L3_fahren1_SM1 = kcg_lit_float64(0.0);
  outC->_L1_fahren1_SM1 = kcg_true;
  outC->_L2_fahren1_SM1 = kcg_true;
  outC->_L1_fzg_Steht1_SM1 = kcg_lit_float64(0.0);
  outC->_L9_fzg_Steht1_SM1 = kcg_true;
  outC->_L10_fzg_Steht1_SM1 = kcg_true;
  outC->_L8_fzg_Steht1_SM1 = kcg_true;
  outC->_L7_fzg_Steht1_SM1 = kcg_lit_float64(0.0);
  outC->_L6_fzg_Steht1_SM1 = kcg_lit_float64(0.0);
  outC->_L5_fzg_Steht1_SM1 = kcg_true;
  outC->_L1_EPB_geloest_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_geloest_SM1 = kcg_true;
  outC->_L4_EPB_geloest_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L6_EPB_geloest_SM1 = kcg_lit_float64(0.0);
  outC->_L13_EPB_geloest_SM1 = kcg_true;
  outC->_L12_EPB_geloest_SM1 = kcg_true;
  outC->_L10_EPB_geloest_SM1 = kcg_true;
  outC->_L11_EPB_geloest_SM1 = kcg_true;
  outC->_L9_EPB_geloest_SM1 = kcg_lit_float64(0.0);
  outC->_L8_EPB_geloest_SM1 = kcg_lit_float64(0.0);
  outC->_L14_EPB_geloest_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L2_Taste_P_druecken_SM1 = kcg_true;
  outC->_L4_Taste_P_druecken_SM1 = kcg_lit_float64(0.0);
  outC->_L5_Taste_P_druecken_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L1_bremseDurchtreten_SM5_parken_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1 =
    getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L4_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_lit_float64(0.0);
  outC->_L5_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L6_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L8_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L7_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L9_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_lit_float64(0.0);
  outC->_L3_EPB_nicht_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L2_EPB_nicht_angezogen_SM5_parken_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L1_EPB_nicht_angezogen_SM5_parken_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->SM5_clock_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_state_sel_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_state_act_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_fired_strong_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
  outC->SM5_fired_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
  outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_true;
  outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1 =
    getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L7_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L6_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L5_gasGeben_SM2_erneutAnfahren_SM1 = kcg_true;
  outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_clock_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_state_sel_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_state_act_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_fired_strong_erneutAnfahren_SM1 =
    SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
  outC->SM2_fired_erneutAnfahren_SM1 = SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
  outC->_L1_fzg_Steht_SM1 = kcg_lit_float64(0.0);
  outC->_L4_fzg_Steht_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_fzg_Steht_SM1 = kcg_true;
  outC->_L2_fzg_Steht_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L9_fzg_Steht_SM1 = kcg_true;
  outC->_L10_fzg_Steht_SM1 = kcg_true;
  outC->_L8_fzg_Steht_SM1 = kcg_true;
  outC->_L7_fzg_Steht_SM1 = kcg_lit_float64(0.0);
  outC->_L6_fzg_Steht_SM1 = kcg_lit_float64(0.0);
  outC->_L5_fzg_Steht_SM1 = kcg_true;
  outC->_L11_fzg_Steht_SM1 = kcg_true;
  outC->_L12_fzg_Steht_SM1 = kcg_true;
  outC->_L15_fzg_Steht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L16_fzg_Steht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L9_annaehern_an_Ampel_SM1 = kcg_lit_float64(0.0);
  outC->_L11_annaehern_an_Ampel_SM1 = kcg_lit_float64(0.0);
  outC->_L12_annaehern_an_Ampel_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_annaehern_an_Ampel_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L14_annaehern_an_Ampel_SM1 = kcg_true;
  outC->_L6_fahren_SM1 = kcg_true;
  outC->_L5_fahren_SM1 = kcg_true;
  outC->_L4_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_fahren_SM1 = kcg_true;
  outC->_L2_fahren_SM1 = kcg_true;
  outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
  outC->_L1_bremspedalTreten_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L7_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L6_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L5_gasGeben_SM2_anfahren_SM1 = kcg_true;
  outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L2_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_clock_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_state_sel_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_state_act_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_fired_strong_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
  outC->SM2_fired_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
  outC->_L2_anfahrenVorbereiten_SM1 = kcg_true;
  outC->_L6_anfahrenVorbereiten_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L7_anfahrenVorbereiten_SM1 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L8_anfahrenVorbereiten_SM1 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
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
  outC->_L26_cockpitanzeigeBleibtAus_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L27_cockpitanzeigeBleibtAus_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L4_manuellModusEingestellt_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L9_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L10_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L8_manuellModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L7_manuellModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L6_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L5_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L11_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L12_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L14_manuellModusEingestellt_SM1 = kcg_lit_float64(0.0);
  outC->_L15_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L16_manuellModusEingestellt_SM1 = kcg_true;
  outC->_L17_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L18_manuellModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->manuellModusEinstellen_weakb_clock_SM1 = kcg_true;
  outC->_L5_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L4_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L6_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L7_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L8_manuellModusEinstellen_SM1 = kcg_lit_float64(0.0);
  outC->_L10_manuellModusEinstellen_SM1 = kcg_lit_float64(0.0);
  outC->_L11_manuellModusEinstellen_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L13_manuellModusEinstellen_SM1 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L14_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L15_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L16_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L17_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L25_manuellModusEinstellen_SM1 = kcg_true;
  outC->_L26_manuellModusEinstellen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L2_bremspedalDurchtreten_SM1 = kcg_lit_float64(0.0);
  outC->_L1_zuendungEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->SM5_state_nxt_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_reset_act_parken_SM1 = kcg_true;
  outC->SM5_reset_nxt_parken_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_reset_act_erneutAnfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_erneutAnfahren_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_reset_act_anfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_anfahren_SM1 = kcg_true;
  outC->init13 = kcg_true;
  outC->init12 = kcg_true;
  outC->init11 = kcg_true;
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
  outC->taste_HOLD = sw2_off_AhTypes_Pkg_ah_Pkg;
  /* SM1:manuellModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:manuellModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_13);
  /* SM1:EPB_geloest:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
  /* SM1:fzg_Steht1:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#11)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_11);
  /* SM1:fahren1:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#12)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_12);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Start_SM1;
  outC->gaspedalStellung = kcg_lit_float64(0.0);
  outC->getriebeWahlhebel = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->sicherheitsgurtSchalter = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->fahrertuerSchalter = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->error = kcg_false;
  outC->taste_P = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->bremspedalKraft = kcg_lit_float64(0.0);
  outC->zuendschalter = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->mem_aktZeit = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manModus_autoHold_reset_AH_testSuite_Pkg_divFahrer(
  outC_manModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->init13 = kcg_true;
  outC->init12 = kcg_true;
  outC->init11 = kcg_true;
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
  /* SM1:manuellModusEinstellen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_1);
  /* SM1:manuellModusEingestellt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#2)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_2);
  /* SM1:cockpitanzeigeBleibtAus:_L21=(AhTypes_Pkg::utils_Pkg::countDownTimer#3)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_3);
  /* SM1:fahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:parken:SM5:EPB_nicht_angezogen:_L7=(AhTypes_Pkg::utils_Pkg::countDownTimer#13)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_13);
  /* SM1:EPB_geloest:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
  /* SM1:fzg_Steht1:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#11)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_11);
  /* SM1:fahren1:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#12)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_12);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_Start_SM1;
  outC->gaspedalStellung = kcg_lit_float64(0.0);
  outC->getriebeWahlhebel = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->sicherheitsgurtSchalter = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->fahrertuerSchalter = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->error = kcg_false;
  outC->taste_P = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->bremspedalKraft = kcg_lit_float64(0.0);
  outC->zuendschalter = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->mem_aktZeit = kcg_lit_float64(0.0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** manModus_autoHold_AH_testSuite_Pkg_divFahrer.c
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

