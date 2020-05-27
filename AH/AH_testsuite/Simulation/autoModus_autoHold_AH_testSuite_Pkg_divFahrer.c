/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "autoModus_autoHold_AH_testSuite_Pkg_divFahrer.h"

/* AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ */
void autoModus_autoHold_AH_testSuite_Pkg_divFahrer(
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
  outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
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
  kcg_bool _141_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _142_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _143_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _144_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _145_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _146_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _147_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _148_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _149_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _150_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _151_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:bremspedalTreten:<1> */
  kcg_bool tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _152_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _153_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _154_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _155_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _156_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _157_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _158_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _159_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _160_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _161_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _162_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _163_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _164_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _165_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _166_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _167_error_partial;
  /* ready/ */
  kcg_bool _168_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _169_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _170_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _171_SM1_fired_partial;
  /* SM1:fahren:<1> */
  kcg_bool tr_1_guard_fahren_SM1;
  kcg_bool _172_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _173_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _174_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _175_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _176_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _177_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _178_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _179_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _180_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _181_error_partial;
  /* ready/ */
  kcg_bool _182_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _183_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _184_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _185_SM1_fired_partial;
  /* SM1:anhalten:<1> */
  kcg_bool tr_1_guard_anhalten_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _186_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _187_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _188_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _189_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _190_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _191_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _192_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _193_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _194_error_partial;
  /* ready/ */
  kcg_bool _195_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _196_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _197_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _198_SM1_fired_partial;
  /* SM1:fzg_Steht:<1> */
  kcg_bool tr_1_guard_fzg_Steht_SM1;
  kcg_bool _199_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _200_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _201_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _202_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _203_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _204_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _205_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _206_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _207_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _208_error_partial;
  /* ready/ */
  kcg_bool _209_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _210_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _211_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _212_SM1_fired_partial;
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
  kcg_bool _213_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _214_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _215_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _216_getriebeWahlhebel_partial;
  /* SM1:erneutAnfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _217_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _218_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _219_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _220_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _221_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _222_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _223_getriebeWahlhebel_partial;
  /* SM1:erneutAnfahren:SM2:bremspedalTreten:<1> */
  kcg_bool _224_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _225_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _226_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _227_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _228_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _229_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _230_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _231_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _232_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _233_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _234_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _235_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _236_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _237_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _238_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _239_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _240_error_partial;
  /* ready/ */
  kcg_bool _241_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _242_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _243_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _244_SM1_fired_partial;
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
  kcg_bool _245_ready_partial;
  /* error/ */
  kcg_bool _246_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _247_taste_Hold_partial;
  /* SM1:autoHoldEinschalten:SM4:HoldDruecken:<1> */
  kcg_bool tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_TR_SM4_autoHoldEinschalten_SM1 _248_SM4_fired_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool _249_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_ST_SM4_autoHoldEinschalten_SM1 _250_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
  /* ready/ */
  kcg_bool _251_ready_partial;
  /* error/ */
  kcg_bool _252_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _253_taste_Hold_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _254_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _255_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _256_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _257_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _258_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _259_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _260_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _261_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _262_error_partial;
  /* ready/ */
  kcg_bool _263_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _264_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _265_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _266_SM1_fired_partial;
  /* SM1:anhaltenMitAutoHold:<1> */
  kcg_bool tr_1_guard_anhaltenMitAutoHold_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _267_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _268_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _269_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _270_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _271_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _272_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _273_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _274_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _275_error_partial;
  /* ready/ */
  kcg_bool _276_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _277_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _278_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _279_SM1_fired_partial;
  /* SM1:haltImAutoHold:<1> */
  kcg_bool tr_1_guard_haltImAutoHold_SM1;
  kcg_bool _280_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _281_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _282_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _283_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _284_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _285_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _286_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _287_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _288_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _289_error_partial;
  /* ready/ */
  kcg_bool _290_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _291_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _292_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _293_SM1_fired_partial;
  /* SM1:anfahrenAusAutoHold:<1> */
  kcg_bool tr_1_guard_anfahrenAusAutoHold_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _294_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _295_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _296_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _297_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _298_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _299_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _300_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _301_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _302_error_partial;
  /* ready/ */
  kcg_bool _303_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _304_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _305_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _306_SM1_fired_partial;
  /* SM1:anhaltenZumBeenden:<1> */
  kcg_bool tr_1_guard_anhaltenZumBeenden_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _307_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _308_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _309_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _310_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _311_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _312_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _313_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _314_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _315_error_partial;
  /* ready/ */
  kcg_bool _316_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _317_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _318_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _319_SM1_fired_partial;
  /* SM1:fzgSteht:<1> */
  kcg_bool tr_1_guard_fzgSteht_SM1;
  kcg_bool _320_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _321_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _322_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _323_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _324_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _325_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _326_taste_Hold_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _327_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _328_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _329_error_partial;
  /* ready/ */
  kcg_bool _330_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _331_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _332_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _333_SM1_fired_partial;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_prv_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_sel_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 SM5_state_nxt_partial_parken_SM1;
  /* error/ */
  kcg_bool _334_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _335_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _336_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:getriebeWahlhebelNach_P:<1> */
  kcg_bool tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _337_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _338_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _339_SM5_state_nxt_partial_parken_SM1;
  /* error/ */
  kcg_bool _340_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _341_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _342_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:bremseDurchtreten:<1> */
  kcg_bool tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _343_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _344_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _345_SM5_state_nxt_partial_parken_SM1;
  /* error/ */
  kcg_bool _346_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _347_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _348_getriebeWahlhebel_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Start:<1> */
  kcg_bool tr_1_guard_Start_SM1;
  /* SM1: */
  SSM_ST_SM1 _349_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _350_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _351_SM1_fired_strong_partial;
  /* SM1:zuendungEinschalten:<1> */
  kcg_bool tr_1_guard_zuendungEinschalten_SM1;
  /* SM1: */
  SSM_ST_SM1 _352_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _353_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _354_SM1_fired_strong_partial;
  /* SM1:bremspedalDurchtreten:<1> */
  kcg_bool tr_1_guard_bremspedalDurchtreten_SM1;
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
  /* SM1: */
  SSM_ST_SM1 _370_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _371_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _372_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _373_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _374_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _375_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _376_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _377_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _378_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _379_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _380_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _381_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _382_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _383_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _384_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _385_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _386_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _387_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _388_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _389_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _390_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _391_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _392_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _393_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _394_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _395_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _396_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _397_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _398_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _399_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _400_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _401_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _402_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _403_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _404_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _405_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _406_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _407_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _408_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _409_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _410_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _411_SM1_fired_strong_partial;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _412_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _413_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _414_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _415_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _416_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _417_noname;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg _418_noname;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg _419_noname;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _420_noname;
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
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_parken_SM1 :
      _409_SM1_state_act_partial = SSM_st_parken_SM1;
      outC->SM1_state_act = _409_SM1_state_act_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _406_SM1_state_act_partial = SSM_st_fzgSteht_SM1;
      outC->SM1_state_act = _406_SM1_state_act_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _403_SM1_state_act_partial = SSM_st_anhaltenZumBeenden_SM1;
      outC->SM1_state_act = _403_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      _400_SM1_state_act_partial = SSM_st_anfahrenAusAutoHold_SM1;
      outC->SM1_state_act = _400_SM1_state_act_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _397_SM1_state_act_partial = SSM_st_haltImAutoHold_SM1;
      outC->SM1_state_act = _397_SM1_state_act_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _394_SM1_state_act_partial = SSM_st_anhaltenMitAutoHold_SM1;
      outC->SM1_state_act = _394_SM1_state_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _391_SM1_state_act_partial = SSM_st_autoHoldEinschalten_SM1;
      outC->SM1_state_act = _391_SM1_state_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _388_SM1_state_act_partial = SSM_st_erneutAnfahren_SM1;
      outC->SM1_state_act = _388_SM1_state_act_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _385_SM1_state_act_partial = SSM_st_fzg_Steht_SM1;
      outC->SM1_state_act = _385_SM1_state_act_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _382_SM1_state_act_partial = SSM_st_anhalten_SM1;
      outC->SM1_state_act = _382_SM1_state_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _379_SM1_state_act_partial = SSM_st_fahren_SM1;
      outC->SM1_state_act = _379_SM1_state_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _376_SM1_state_act_partial = SSM_st_anfahren_SM1;
      outC->SM1_state_act = _376_SM1_state_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _373_SM1_state_act_partial = SSM_st_EPB_arretiert_SM1;
      outC->SM1_state_act = _373_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _370_SM1_state_act_partial = SSM_st_anfahrenVorbereiten_SM1;
      outC->SM1_state_act = _370_SM1_state_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _367_SM1_state_act_partial = SSM_st_EPB_angezogen_SM1;
      outC->SM1_state_act = _367_SM1_state_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _364_SM1_state_act_partial = SSM_st_betriebsbremseLoesen_SM1;
      outC->SM1_state_act = _364_SM1_state_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _361_SM1_state_act_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      outC->SM1_state_act = _361_SM1_state_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _358_SM1_state_act_partial = SSM_st_automatikModusEingestellt_SM1;
      outC->SM1_state_act = _358_SM1_state_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _355_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      outC->SM1_state_act = _355_SM1_state_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      tr_1_guard_bremspedalDurchtreten_SM1 = aktZeit >= kcg_lit_float64(3.0);
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _352_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      }
      else {
        _352_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      outC->SM1_state_act = _352_SM1_state_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      tr_1_guard_zuendungEinschalten_SM1 = aktZeit >= kcg_lit_float64(2.0);
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _349_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      else {
        _349_SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      outC->SM1_state_act = _349_SM1_state_act_partial;
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
    case SSM_st_parken_SM1 :
      _330_ready_partial = kcg_false;
      _327_gaspedalStellung_partial = last_gaspedalStellung;
      _326_taste_Hold_partial = last_taste_Hold;
      _325_taste_P_partial = last_taste_P;
      _324_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _323_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _321_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_parken_SM1 :
      _411_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _411_SM1_fired_strong_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _408_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _408_SM1_fired_strong_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _405_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _405_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      _402_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _402_SM1_fired_strong_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _399_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _399_SM1_fired_strong_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _396_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _396_SM1_fired_strong_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _393_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _393_SM1_fired_strong_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _390_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _390_SM1_fired_strong_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _387_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _387_SM1_fired_strong_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _384_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _384_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren_SM1 :
      _381_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _381_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _378_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _378_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _375_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _375_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _372_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _372_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _369_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _369_SM1_fired_strong_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _366_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _366_SM1_fired_strong_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _363_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _363_SM1_fired_strong_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _360_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _360_SM1_fired_strong_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _357_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _357_SM1_fired_strong_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _354_SM1_fired_strong_partial =
          SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1;
      }
      else {
        _354_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _354_SM1_fired_strong_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _351_SM1_fired_strong_partial =
          SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1;
      }
      else {
        _351_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _351_SM1_fired_strong_partial;
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
    case SSM_st_parken_SM1 :
      _333_SM1_fired_partial = outC->SM1_fired_strong;
      _332_SM1_reset_nxt_partial = kcg_false;
      _331_SM1_state_nxt_partial = SSM_st_parken_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_parken_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      /* SM1:parken:SM5: */
      if (outC->init) {
        outC->SM5_state_sel_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
      }
      else {
        outC->SM5_state_sel_parken_SM1 = outC->SM5_state_nxt_parken_SM1;
      }
      outC->SM5_state_act_parken_SM1 = outC->SM5_state_sel_parken_SM1;
      outC->SM5_clock_parken_SM1 = outC->SM5_state_act_parken_SM1;
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_angezogen_SM5_parken_SM1 :
          _335_bremspedalKraft_partial = last_bremspedalKraft;
          _336_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->SM5_fired_strong_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
      /* SM1:parken:SM5: */
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_angezogen_SM5_parken_SM1 :
          SM5_fired_partial_parken_SM1 = outC->SM5_fired_strong_parken_SM1;
          SM5_reset_nxt_partial_parken_SM1 = kcg_false;
          SM5_state_nxt_partial_parken_SM1 = SSM_st_EPB_angezogen_SM5_parken_SM1;
          outC->_L2_EPB_angezogen_SM5_parken_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
          outC->_L1_EPB_angezogen_SM5_parken_SM1 = EPB_Bremse;
          outC->_L3_EPB_angezogen_SM5_parken_SM1 =
            outC->_L1_EPB_angezogen_SM5_parken_SM1 !=
            outC->_L2_EPB_angezogen_SM5_parken_SM1;
          _334_error_partial = outC->_L3_EPB_angezogen_SM5_parken_SM1;
          _322_getriebeWahlhebel_partial = _336_getriebeWahlhebel_partial;
          _328_bremspedalKraft_partial = _335_bremspedalKraft_partial;
          _329_error_partial = _334_error_partial;
          outC->SM5_state_nxt_parken_SM1 = SM5_state_nxt_partial_parken_SM1;
          break;
        case SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1 :
          _340_error_partial = last_error;
          _341_bremspedalKraft_partial = last_bremspedalKraft;
          tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _337_SM5_fired_partial_parken_SM1 =
              SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _337_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _338_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _339_SM5_state_nxt_partial_parken_SM1 = SSM_st_EPB_angezogen_SM5_parken_SM1;
          }
          else {
            _339_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1 =
            getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
          _342_getriebeWahlhebel_partial =
            outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          _322_getriebeWahlhebel_partial = _342_getriebeWahlhebel_partial;
          _328_bremspedalKraft_partial = _341_bremspedalKraft_partial;
          _329_error_partial = _340_error_partial;
          outC->SM5_state_nxt_parken_SM1 = _339_SM5_state_nxt_partial_parken_SM1;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          _346_error_partial = last_error;
          _348_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremseDurchtreten_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _343_SM5_fired_partial_parken_SM1 =
              SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1;
          }
          else {
            _343_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _344_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _345_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _345_SM5_state_nxt_partial_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
          }
          outC->_L1_bremseDurchtreten_SM5_parken_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _347_bremspedalKraft_partial = outC->_L1_bremseDurchtreten_SM5_parken_SM1;
          _322_getriebeWahlhebel_partial = _348_getriebeWahlhebel_partial;
          _328_bremspedalKraft_partial = _347_bremspedalKraft_partial;
          _329_error_partial = _346_error_partial;
          outC->SM5_state_nxt_parken_SM1 = _345_SM5_state_nxt_partial_parken_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init) {
        SM5_reset_sel_parken_SM1 = kcg_false;
      }
      else {
        SM5_reset_sel_parken_SM1 = outC->SM5_reset_nxt_parken_SM1;
      }
      /* SM1:parken:SM5: */
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_angezogen_SM5_parken_SM1 :
          outC->SM5_reset_nxt_parken_SM1 = SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = SM5_fired_partial_parken_SM1;
          break;
        case SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1 :
          outC->SM5_reset_nxt_parken_SM1 = _338_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _337_SM5_fired_partial_parken_SM1;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          outC->SM5_reset_nxt_parken_SM1 = _344_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _343_SM5_fired_partial_parken_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init) {
        SM5_reset_prv_parken_SM1 = kcg_false;
      }
      else {
        SM5_reset_prv_parken_SM1 = outC->SM5_reset_act_parken_SM1;
      }
      outC->SM5_reset_act_parken_SM1 = kcg_false;
      break;
    case SSM_st_fzgSteht_SM1 :
      _312_taste_Hold_partial = last_taste_Hold;
      _311_taste_P_partial = last_taste_P;
      _310_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _309_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _308_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _307_zuendschalter_partial = last_zuendschalter;
      outC->_L5_fzgSteht_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L8= */
      if (outC->init1) {
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
        /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_10);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzgSteht_SM1,
        outC->_L5_fzgSteht_SM1,
        outC->_L7_fzgSteht_SM1,
        outC->_L6_fzgSteht_SM1,
        &outC->Context_countDownTimer_10);
      outC->_L9_fzgSteht_SM1 = outC->Context_countDownTimer_10.abgelaufen;
      outC->_L10_fzgSteht_SM1 = outC->Context_countDownTimer_10.laufend;
      _316_ready_partial = outC->_L9_fzgSteht_SM1;
      tr_1_guard_fzgSteht_SM1 = _316_ready_partial;
      if (tr_1_guard_fzgSteht_SM1) {
        _319_SM1_fired_partial = SSM_TR_fzgSteht_parken_1_fzgSteht_SM1;
      }
      else {
        _319_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _318_SM1_reset_nxt_partial = tr_1_guard_fzgSteht_SM1;
      if (tr_1_guard_fzgSteht_SM1) {
        _317_SM1_state_nxt_partial = SSM_st_parken_SM1;
      }
      else {
        _317_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      }
      outC->_L57_fzgSteht_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      outC->_L54_fzgSteht_SM1 = betriebsBremse;
      outC->_L55_fzgSteht_SM1 = outC->_L54_fzgSteht_SM1 <= outC->_L57_fzgSteht_SM1;
      outC->_L1_fzgSteht_SM1 = kcg_lit_float64(0.0);
      _314_bremspedalKraft_partial = outC->_L1_fzgSteht_SM1;
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
      _320_noname = outC->_L10_fzgSteht_SM1;
      _315_error_partial = outC->_L36_fzgSteht_SM1;
      _313_gaspedalStellung_partial = outC->_L1_fzgSteht_SM1;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _299_taste_Hold_partial = last_taste_Hold;
      _298_taste_P_partial = last_taste_P;
      _297_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _296_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _295_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _294_zuendschalter_partial = last_zuendschalter;
      outC->_L15_anhaltenZumBeenden_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L16_anhaltenZumBeenden_SM1 = v_fzg;
      outC->_L17_anhaltenZumBeenden_SM1 = outC->_L16_anhaltenZumBeenden_SM1 >
        outC->_L15_anhaltenZumBeenden_SM1;
      outC->_L24_anhaltenZumBeenden_SM1 = !outC->_L17_anhaltenZumBeenden_SM1;
      _303_ready_partial = outC->_L24_anhaltenZumBeenden_SM1;
      tr_1_guard_anhaltenZumBeenden_SM1 = _303_ready_partial;
      if (tr_1_guard_anhaltenZumBeenden_SM1) {
        _306_SM1_fired_partial =
          SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1;
      }
      else {
        _306_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _305_SM1_reset_nxt_partial = tr_1_guard_anhaltenZumBeenden_SM1;
      if (tr_1_guard_anhaltenZumBeenden_SM1) {
        _304_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      }
      else {
        _304_SM1_state_nxt_partial = SSM_st_anhaltenZumBeenden_SM1;
      }
      outC->_L26_anhaltenZumBeenden_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      outC->_L11_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.3);
      /* SM1:anhaltenZumBeenden:_L25= */
      if (outC->_L17_anhaltenZumBeenden_SM1) {
        outC->_L25_anhaltenZumBeenden_SM1 = outC->_L11_anhaltenZumBeenden_SM1;
      }
      else {
        outC->_L25_anhaltenZumBeenden_SM1 = outC->_L26_anhaltenZumBeenden_SM1;
      }
      outC->_L21_anhaltenZumBeenden_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L20_anhaltenZumBeenden_SM1 = cockpitAnzeige_Hold;
      outC->_L22_anhaltenZumBeenden_SM1 = outC->_L20_anhaltenZumBeenden_SM1 !=
        outC->_L21_anhaltenZumBeenden_SM1;
      outC->_L13_anhaltenZumBeenden_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L12_anhaltenZumBeenden_SM1 = EPB_Bremse;
      outC->_L14_anhaltenZumBeenden_SM1 = outC->_L12_anhaltenZumBeenden_SM1 !=
        outC->_L13_anhaltenZumBeenden_SM1;
      outC->_L23_anhaltenZumBeenden_SM1 = outC->_L14_anhaltenZumBeenden_SM1 |
        outC->_L22_anhaltenZumBeenden_SM1;
      outC->_L19_anhaltenZumBeenden_SM1 = kcg_false;
      /* SM1:anhaltenZumBeenden:_L18= */
      if (outC->_L17_anhaltenZumBeenden_SM1) {
        outC->_L18_anhaltenZumBeenden_SM1 = outC->_L23_anhaltenZumBeenden_SM1;
      }
      else {
        outC->_L18_anhaltenZumBeenden_SM1 = outC->_L19_anhaltenZumBeenden_SM1;
      }
      _302_error_partial = outC->_L18_anhaltenZumBeenden_SM1;
      _301_bremspedalKraft_partial = outC->_L25_anhaltenZumBeenden_SM1;
      outC->_L9_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
      _300_gaspedalStellung_partial = outC->_L9_anhaltenZumBeenden_SM1;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      _286_taste_Hold_partial = last_taste_Hold;
      _285_taste_P_partial = last_taste_P;
      _284_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _283_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _282_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _281_zuendschalter_partial = last_zuendschalter;
      outC->_L1_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.4);
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_anfahrenAusAutoHold_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahrenAusAutoHold_SM1 :
      /* SM1:anfahrenAusAutoHold:_L6= */
      if (outC->init2) {
        outC->_L6_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
      }
      else {
        outC->_L6_anfahrenAusAutoHold_SM1 = outC->_L5_anfahrenAusAutoHold_SM1;
      }
      outC->_L2_anfahrenAusAutoHold_SM1 = outC->_L6_anfahrenAusAutoHold_SM1 >=
        outC->_L1_anfahrenAusAutoHold_SM1;
      _290_ready_partial = outC->_L2_anfahrenAusAutoHold_SM1;
      tr_1_guard_anfahrenAusAutoHold_SM1 = _290_ready_partial;
      if (tr_1_guard_anfahrenAusAutoHold_SM1) {
        _293_SM1_fired_partial =
          SSM_TR_anfahrenAusAutoHold_anhaltenZumBeenden_1_anfahrenAusAutoHold_SM1;
      }
      else {
        _293_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _292_SM1_reset_nxt_partial = tr_1_guard_anfahrenAusAutoHold_SM1;
      if (tr_1_guard_anfahrenAusAutoHold_SM1) {
        _291_SM1_state_nxt_partial = SSM_st_anhaltenZumBeenden_SM1;
      }
      else {
        _291_SM1_state_nxt_partial = SSM_st_anfahrenAusAutoHold_SM1;
      }
      /* SM1:anfahrenAusAutoHold:_L14= */
      if (outC->init2) {
        outC->_L14_anfahrenAusAutoHold_SM1 = kcg_false;
      }
      else {
        outC->_L14_anfahrenAusAutoHold_SM1 = outC->_L8_anfahrenAusAutoHold_SM1;
      }
      outC->_L13_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.1);
      outC->_L11_anfahrenAusAutoHold_SM1 = betriebsBremse;
      outC->_L12_anfahrenAusAutoHold_SM1 = outC->_L11_anfahrenAusAutoHold_SM1 >
        outC->_L13_anfahrenAusAutoHold_SM1;
      outC->_L10_anfahrenAusAutoHold_SM1 = kcg_false;
      /* SM1:anfahrenAusAutoHold:_L9= */
      if (outC->_L14_anfahrenAusAutoHold_SM1) {
        outC->_L9_anfahrenAusAutoHold_SM1 = outC->_L12_anfahrenAusAutoHold_SM1;
      }
      else {
        outC->_L9_anfahrenAusAutoHold_SM1 = outC->_L10_anfahrenAusAutoHold_SM1;
      }
      outC->_L7_anfahrenAusAutoHold_SM1 =
        cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
      outC->_L8_anfahrenAusAutoHold_SM1 = outC->_L6_anfahrenAusAutoHold_SM1 >=
        outC->_L7_anfahrenAusAutoHold_SM1;
      _289_error_partial = outC->_L9_anfahrenAusAutoHold_SM1;
      outC->_L3_anfahrenAusAutoHold_SM1 = cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
      outC->_L5_anfahrenAusAutoHold_SM1 = outC->_L3_anfahrenAusAutoHold_SM1 +
        outC->_L6_anfahrenAusAutoHold_SM1;
      outC->_L4_anfahrenAusAutoHold_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _287_gaspedalStellung_partial = outC->_L6_anfahrenAusAutoHold_SM1;
      _288_bremspedalKraft_partial = outC->_L4_anfahrenAusAutoHold_SM1;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _272_taste_Hold_partial = last_taste_Hold;
      _271_taste_P_partial = last_taste_P;
      _270_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _269_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _268_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _267_zuendschalter_partial = last_zuendschalter;
      outC->_L5_haltImAutoHold_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_haltImAutoHold_SM1 :
      if (SM1_reset_sel) {
        outC->init3 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_haltImAutoHold_SM1 :
      /* SM1:haltImAutoHold:_L8= */
      if (outC->init3) {
        outC->_L8_haltImAutoHold_SM1 = kcg_true;
      }
      else {
        outC->_L8_haltImAutoHold_SM1 = outC->_L5_haltImAutoHold_SM1;
      }
      outC->_L7_haltImAutoHold_SM1 = aktZeit;
      outC->_L6_haltImAutoHold_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_haltImAutoHold_SM1 :
      if (SM1_reset_sel) {
        /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#9)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_9);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_haltImAutoHold_SM1 :
      /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#9)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_haltImAutoHold_SM1,
        outC->_L5_haltImAutoHold_SM1,
        outC->_L7_haltImAutoHold_SM1,
        outC->_L6_haltImAutoHold_SM1,
        &outC->Context_countDownTimer_9);
      outC->_L9_haltImAutoHold_SM1 = outC->Context_countDownTimer_9.abgelaufen;
      outC->_L10_haltImAutoHold_SM1 = outC->Context_countDownTimer_9.laufend;
      _276_ready_partial = outC->_L9_haltImAutoHold_SM1;
      tr_1_guard_haltImAutoHold_SM1 = _276_ready_partial;
      if (tr_1_guard_haltImAutoHold_SM1) {
        _279_SM1_fired_partial =
          SSM_TR_haltImAutoHold_anfahrenAusAutoHold_1_haltImAutoHold_SM1;
      }
      else {
        _279_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _278_SM1_reset_nxt_partial = tr_1_guard_haltImAutoHold_SM1;
      if (tr_1_guard_haltImAutoHold_SM1) {
        _277_SM1_state_nxt_partial = SSM_st_anfahrenAusAutoHold_SM1;
      }
      else {
        _277_SM1_state_nxt_partial = SSM_st_haltImAutoHold_SM1;
      }
      outC->_L57_haltImAutoHold_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      outC->_L54_haltImAutoHold_SM1 = betriebsBremse;
      outC->_L55_haltImAutoHold_SM1 = outC->_L54_haltImAutoHold_SM1 <=
        outC->_L57_haltImAutoHold_SM1;
      outC->_L1_haltImAutoHold_SM1 = kcg_lit_float64(0.0);
      _274_bremspedalKraft_partial = outC->_L1_haltImAutoHold_SM1;
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
      _280_noname = outC->_L10_haltImAutoHold_SM1;
      _275_error_partial = outC->_L36_haltImAutoHold_SM1;
      _273_gaspedalStellung_partial = outC->_L1_haltImAutoHold_SM1;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _259_taste_Hold_partial = last_taste_Hold;
      _258_taste_P_partial = last_taste_P;
      _257_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _256_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _255_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _254_zuendschalter_partial = last_zuendschalter;
      outC->_L15_anhaltenMitAutoHold_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L16_anhaltenMitAutoHold_SM1 = v_fzg;
      outC->_L17_anhaltenMitAutoHold_SM1 = outC->_L16_anhaltenMitAutoHold_SM1 >
        outC->_L15_anhaltenMitAutoHold_SM1;
      outC->_L24_anhaltenMitAutoHold_SM1 = !outC->_L17_anhaltenMitAutoHold_SM1;
      _263_ready_partial = outC->_L24_anhaltenMitAutoHold_SM1;
      tr_1_guard_anhaltenMitAutoHold_SM1 = _263_ready_partial;
      if (tr_1_guard_anhaltenMitAutoHold_SM1) {
        _266_SM1_fired_partial =
          SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1;
      }
      else {
        _266_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _265_SM1_reset_nxt_partial = tr_1_guard_anhaltenMitAutoHold_SM1;
      if (tr_1_guard_anhaltenMitAutoHold_SM1) {
        _264_SM1_state_nxt_partial = SSM_st_haltImAutoHold_SM1;
      }
      else {
        _264_SM1_state_nxt_partial = SSM_st_anhaltenMitAutoHold_SM1;
      }
      outC->_L26_anhaltenMitAutoHold_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      outC->_L11_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.3);
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
      _262_error_partial = outC->_L18_anhaltenMitAutoHold_SM1;
      _261_bremspedalKraft_partial = outC->_L25_anhaltenMitAutoHold_SM1;
      outC->_L9_anhaltenMitAutoHold_SM1 = kcg_lit_float64(0.0);
      _260_gaspedalStellung_partial = outC->_L9_anhaltenMitAutoHold_SM1;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _239_bremspedalKraft_partial = last_bremspedalKraft;
      _238_gaspedalStellung_partial = last_gaspedalStellung;
      _236_taste_P_partial = last_taste_P;
      _235_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _234_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _233_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _232_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_autoHoldEinschalten_SM1 :
      if (SM1_reset_sel) {
        outC->init4 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_autoHoldEinschalten_SM1 :
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init4) {
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
          _245_ready_partial = outC->_L5_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _241_ready_partial = _245_ready_partial;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          _251_ready_partial = kcg_false;
          _241_ready_partial = _251_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_autoHoldEinschalten_SM1 = _241_ready_partial;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _244_SM1_fired_partial =
          SSM_TR_autoHoldEinschalten_anhaltenMitAutoHold_1_autoHoldEinschalten_SM1;
      }
      else {
        _244_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _243_SM1_reset_nxt_partial = tr_1_guard_autoHoldEinschalten_SM1;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _242_SM1_state_nxt_partial = SSM_st_anhaltenMitAutoHold_SM1;
      }
      else {
        _242_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
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
          _246_error_partial = outC->_L4_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          _247_taste_Hold_partial = outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _237_taste_Hold_partial = _247_taste_Hold_partial;
          _240_error_partial = _246_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1 = kcg_true;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _248_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _248_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
          }
          _249_SM4_reset_nxt_partial_autoHoldEinschalten_SM1 =
            tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _250_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _250_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            cockpitAnzeige_AutoHoldMode;
          outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 !=
            outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _252_error_partial = outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
          _253_taste_Hold_partial = outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _237_taste_Hold_partial = _253_taste_Hold_partial;
          _240_error_partial = _252_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            _250_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init4) {
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
            _249_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
          outC->SM4_fired_autoHoldEinschalten_SM1 =
            _248_SM4_fired_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init4) {
        SM4_reset_prv_autoHoldEinschalten_SM1 = kcg_false;
      }
      else {
        SM4_reset_prv_autoHoldEinschalten_SM1 =
          outC->SM4_reset_act_autoHoldEinschalten_SM1;
      }
      outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_false;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _208_error_partial = last_error;
      _205_taste_Hold_partial = last_taste_Hold;
      _204_taste_P_partial = last_taste_P;
      _203_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _202_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _200_zuendschalter_partial = last_zuendschalter;
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
          _213_ready_partial = outC->_L5_gasGeben_SM2_erneutAnfahren_SM1;
          _209_ready_partial = _213_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _220_ready_partial = kcg_false;
          _209_ready_partial = _220_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_false;
          _228_ready_partial = outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _209_ready_partial = _228_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_erneutAnfahren_SM1 = _209_ready_partial;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _212_SM1_fired_partial =
          SSM_TR_erneutAnfahren_autoHoldEinschalten_1_erneutAnfahren_SM1;
      }
      else {
        _212_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _211_SM1_reset_nxt_partial = tr_1_guard_erneutAnfahren_SM1;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _210_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
      }
      else {
        _210_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          _216_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          _214_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_erneutAnfahren_SM1;
          outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 =
            outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 +
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _215_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _201_getriebeWahlhebel_partial = _216_getriebeWahlhebel_partial;
          _206_gaspedalStellung_partial = _215_gaspedalStellung_partial;
          _207_bremspedalKraft_partial = _214_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _221_bremspedalKraft_partial = last_bremspedalKraft;
          _222_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _217_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _217_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _218_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _219_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_gasGeben_SM2_erneutAnfahren_SM1;
          }
          else {
            _219_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1 =
            getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _223_getriebeWahlhebel_partial =
            outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          _201_getriebeWahlhebel_partial = _223_getriebeWahlhebel_partial;
          _206_gaspedalStellung_partial = _222_gaspedalStellung_partial;
          _207_bremspedalKraft_partial = _221_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _219_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _218_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _217_SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          _230_gaspedalStellung_partial = last_gaspedalStellung;
          _231_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          _224_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_true;
          if (_224_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _225_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          else {
            _225_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _226_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            _224_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
          if (_224_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _227_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _227_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _229_bremspedalKraft_partial =
            outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _201_getriebeWahlhebel_partial = _231_getriebeWahlhebel_partial;
          _206_gaspedalStellung_partial = _230_gaspedalStellung_partial;
          _207_bremspedalKraft_partial = _229_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _227_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _226_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _225_SM2_fired_partial_erneutAnfahren_SM1;
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
      _193_bremspedalKraft_partial = last_bremspedalKraft;
      _191_taste_Hold_partial = last_taste_Hold;
      _190_taste_P_partial = last_taste_P;
      _189_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _188_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _187_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _186_zuendschalter_partial = last_zuendschalter;
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
        /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_8);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht_SM1 :
      /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzg_Steht_SM1,
        outC->_L5_fzg_Steht_SM1,
        outC->_L7_fzg_Steht_SM1,
        outC->_L6_fzg_Steht_SM1,
        &outC->Context_countDownTimer_8);
      outC->_L9_fzg_Steht_SM1 = outC->Context_countDownTimer_8.abgelaufen;
      outC->_L10_fzg_Steht_SM1 = outC->Context_countDownTimer_8.laufend;
      _195_ready_partial = outC->_L9_fzg_Steht_SM1;
      tr_1_guard_fzg_Steht_SM1 = _195_ready_partial;
      if (tr_1_guard_fzg_Steht_SM1) {
        _198_SM1_fired_partial = SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1;
      }
      else {
        _198_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _197_SM1_reset_nxt_partial = tr_1_guard_fzg_Steht_SM1;
      if (tr_1_guard_fzg_Steht_SM1) {
        _196_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      else {
        _196_SM1_state_nxt_partial = SSM_st_fzg_Steht_SM1;
      }
      _199_noname = outC->_L10_fzg_Steht_SM1;
      outC->_L4_fzg_Steht_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L2_fzg_Steht_SM1 = EPB_Bremse;
      outC->_L3_fzg_Steht_SM1 = outC->_L2_fzg_Steht_SM1 != outC->_L4_fzg_Steht_SM1;
      _194_error_partial = outC->_L3_fzg_Steht_SM1;
      outC->_L1_fzg_Steht_SM1 = kcg_lit_float64(0.0);
      _192_gaspedalStellung_partial = outC->_L1_fzg_Steht_SM1;
      break;
    case SSM_st_anhalten_SM1 :
      _182_ready_partial = kcg_false;
      _178_taste_Hold_partial = last_taste_Hold;
      _177_taste_P_partial = last_taste_P;
      _176_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _175_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _174_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _173_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_anhalten_SM1 = v_fzg <= cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      if (tr_1_guard_anhalten_SM1) {
        _185_SM1_fired_partial = SSM_TR_anhalten_fzg_Steht_1_anhalten_SM1;
      }
      else {
        _185_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _184_SM1_reset_nxt_partial = tr_1_guard_anhalten_SM1;
      if (tr_1_guard_anhalten_SM1) {
        _183_SM1_state_nxt_partial = SSM_st_fzg_Steht_SM1;
      }
      else {
        _183_SM1_state_nxt_partial = SSM_st_anhalten_SM1;
      }
      outC->_L13_anhalten_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L12_anhalten_SM1 = EPB_Bremse;
      outC->_L14_anhalten_SM1 = outC->_L12_anhalten_SM1 != outC->_L13_anhalten_SM1;
      _181_error_partial = outC->_L14_anhalten_SM1;
      outC->_L11_anhalten_SM1 = kcg_lit_float64(0.3);
      _180_bremspedalKraft_partial = outC->_L11_anhalten_SM1;
      outC->_L9_anhalten_SM1 = kcg_lit_float64(0.0);
      _179_gaspedalStellung_partial = outC->_L9_anhalten_SM1;
      break;
    case SSM_st_fahren_SM1 :
      _167_error_partial = last_error;
      _166_bremspedalKraft_partial = last_bremspedalKraft;
      _165_gaspedalStellung_partial = last_gaspedalStellung;
      _164_taste_Hold_partial = last_taste_Hold;
      _163_taste_P_partial = last_taste_P;
      _162_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _161_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _160_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _159_zuendschalter_partial = last_zuendschalter;
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
      _168_ready_partial = outC->_L1_fahren_SM1;
      tr_1_guard_fahren_SM1 = _168_ready_partial;
      if (tr_1_guard_fahren_SM1) {
        _171_SM1_fired_partial = SSM_TR_fahren_anhalten_1_fahren_SM1;
      }
      else {
        _171_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _170_SM1_reset_nxt_partial = tr_1_guard_fahren_SM1;
      if (tr_1_guard_fahren_SM1) {
        _169_SM1_state_nxt_partial = SSM_st_anhalten_SM1;
      }
      else {
        _169_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      _172_noname = outC->_L2_fahren_SM1;
      break;
    case SSM_st_anfahren_SM1 :
      _136_error_partial = last_error;
      _133_taste_Hold_partial = last_taste_Hold;
      _132_taste_P_partial = last_taste_P;
      _131_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _130_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _128_zuendschalter_partial = last_zuendschalter;
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
          _141_ready_partial = outC->_L5_gasGeben_SM2_anfahren_SM1;
          _137_ready_partial = _141_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _148_ready_partial = kcg_false;
          _137_ready_partial = _148_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_false;
          _155_ready_partial = outC->_L2_bremspedalTreten_SM2_anfahren_SM1;
          _137_ready_partial = _155_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_anfahren_SM1 = _137_ready_partial;
      if (tr_1_guard_anfahren_SM1) {
        _140_SM1_fired_partial = SSM_TR_anfahren_fahren_1_anfahren_SM1;
      }
      else {
        _140_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _139_SM1_reset_nxt_partial = tr_1_guard_anfahren_SM1;
      if (tr_1_guard_anfahren_SM1) {
        _138_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      else {
        _138_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          _144_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          _143_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L2_gasGeben_SM2_anfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_anfahren_SM1 =
            outC->_L2_gasGeben_SM2_anfahren_SM1 + outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L7_gasGeben_SM2_anfahren_SM1 =
            cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
          _142_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_anfahren_SM1;
          _129_getriebeWahlhebel_partial = _144_getriebeWahlhebel_partial;
          _134_gaspedalStellung_partial = _143_gaspedalStellung_partial;
          _135_bremspedalKraft_partial = _142_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _149_bremspedalKraft_partial = last_bremspedalKraft;
          _150_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _145_SM2_fired_partial_anfahren_SM1 =
              _12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _145_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _146_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _147_SM2_state_nxt_partial_anfahren_SM1 = SSM_st_gasGeben_SM2_anfahren_SM1;
          }
          else {
            _147_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _151_getriebeWahlhebel_partial = outC->_L1_getriebe_auf_D_SM2_anfahren_SM1;
          _129_getriebeWahlhebel_partial = _151_getriebeWahlhebel_partial;
          _134_gaspedalStellung_partial = _150_gaspedalStellung_partial;
          _135_bremspedalKraft_partial = _149_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _147_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _146_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _145_SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          _157_gaspedalStellung_partial = last_gaspedalStellung;
          _158_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _152_SM2_fired_partial_anfahren_SM1 =
              _13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1;
          }
          else {
            _152_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _153_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _154_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _154_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_anfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_anfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _156_bremspedalKraft_partial = outC->_L1_bremspedalTreten_SM2_anfahren_SM1;
          _129_getriebeWahlhebel_partial = _158_getriebeWahlhebel_partial;
          _134_gaspedalStellung_partial = _157_gaspedalStellung_partial;
          _135_bremspedalKraft_partial = _156_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _154_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _153_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _152_SM2_fired_partial_anfahren_SM1;
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
        outC->init11 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_SM1 :
      /* SM1:EPB_arretiert:_L13= */
      if (outC->init11) {
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
        outC->init12 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_angezogen_SM1 :
      /* SM1:EPB_angezogen:_L13= */
      if (outC->init12) {
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
        outC->init13 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L18= */
      if (outC->init13) {
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
        outC->init14 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_automatikModusEingestellt_SM1 :
      /* SM1:automatikModusEingestellt:_L5= */
      if (outC->init14) {
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
    case SSM_st_parken_SM1 :
      _410_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _410_SM1_reset_act_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _407_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _407_SM1_reset_act_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _404_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _404_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      _401_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _401_SM1_reset_act_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      _398_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _398_SM1_reset_act_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      _395_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _395_SM1_reset_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _392_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _392_SM1_reset_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _389_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _389_SM1_reset_act_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      _386_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _386_SM1_reset_act_partial;
      break;
    case SSM_st_anhalten_SM1 :
      _383_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _383_SM1_reset_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _380_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _380_SM1_reset_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _377_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _377_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _374_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _374_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _371_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _371_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _368_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _368_SM1_reset_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _365_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _365_SM1_reset_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _362_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _362_SM1_reset_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _359_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _359_SM1_reset_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _356_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _356_SM1_reset_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _353_SM1_reset_act_partial = tr_1_guard_bremspedalDurchtreten_SM1;
      outC->SM1_reset_act = _353_SM1_reset_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _350_SM1_reset_act_partial = tr_1_guard_zuendungEinschalten_SM1;
      outC->SM1_reset_act = _350_SM1_reset_act_partial;
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
    case SSM_st_parken_SM1 :
      outC->zuendschalter = _321_zuendschalter_partial;
      outC->getriebeWahlhebel = _322_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _323_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _324_sicherheitsgurtSchalter_partial;
      outC->taste_P = _325_taste_P_partial;
      outC->taste_Hold = _326_taste_Hold_partial;
      outC->gaspedalStellung = _327_gaspedalStellung_partial;
      outC->bremspedalKraft = _328_bremspedalKraft_partial;
      outC->error = _329_error_partial;
      outC->ready = _330_ready_partial;
      outC->SM1_state_nxt = _331_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _332_SM1_reset_nxt_partial;
      outC->SM1_fired = _333_SM1_fired_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      outC->zuendschalter = _307_zuendschalter_partial;
      outC->getriebeWahlhebel = _308_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _309_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _310_sicherheitsgurtSchalter_partial;
      outC->taste_P = _311_taste_P_partial;
      outC->taste_Hold = _312_taste_Hold_partial;
      outC->gaspedalStellung = _313_gaspedalStellung_partial;
      outC->bremspedalKraft = _314_bremspedalKraft_partial;
      outC->error = _315_error_partial;
      outC->ready = _316_ready_partial;
      outC->SM1_state_nxt = _317_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _318_SM1_reset_nxt_partial;
      outC->SM1_fired = _319_SM1_fired_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      outC->zuendschalter = _294_zuendschalter_partial;
      outC->getriebeWahlhebel = _295_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _296_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _297_sicherheitsgurtSchalter_partial;
      outC->taste_P = _298_taste_P_partial;
      outC->taste_Hold = _299_taste_Hold_partial;
      outC->gaspedalStellung = _300_gaspedalStellung_partial;
      outC->bremspedalKraft = _301_bremspedalKraft_partial;
      outC->error = _302_error_partial;
      outC->ready = _303_ready_partial;
      outC->SM1_state_nxt = _304_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _305_SM1_reset_nxt_partial;
      outC->SM1_fired = _306_SM1_fired_partial;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      outC->zuendschalter = _281_zuendschalter_partial;
      outC->getriebeWahlhebel = _282_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _283_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _284_sicherheitsgurtSchalter_partial;
      outC->taste_P = _285_taste_P_partial;
      outC->taste_Hold = _286_taste_Hold_partial;
      outC->gaspedalStellung = _287_gaspedalStellung_partial;
      outC->bremspedalKraft = _288_bremspedalKraft_partial;
      outC->error = _289_error_partial;
      outC->ready = _290_ready_partial;
      outC->SM1_state_nxt = _291_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _292_SM1_reset_nxt_partial;
      outC->SM1_fired = _293_SM1_fired_partial;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      outC->zuendschalter = _267_zuendschalter_partial;
      outC->getriebeWahlhebel = _268_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _269_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _270_sicherheitsgurtSchalter_partial;
      outC->taste_P = _271_taste_P_partial;
      outC->taste_Hold = _272_taste_Hold_partial;
      outC->gaspedalStellung = _273_gaspedalStellung_partial;
      outC->bremspedalKraft = _274_bremspedalKraft_partial;
      outC->error = _275_error_partial;
      outC->ready = _276_ready_partial;
      outC->SM1_state_nxt = _277_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _278_SM1_reset_nxt_partial;
      outC->SM1_fired = _279_SM1_fired_partial;
      break;
    case SSM_st_anhaltenMitAutoHold_SM1 :
      outC->zuendschalter = _254_zuendschalter_partial;
      outC->getriebeWahlhebel = _255_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _256_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _257_sicherheitsgurtSchalter_partial;
      outC->taste_P = _258_taste_P_partial;
      outC->taste_Hold = _259_taste_Hold_partial;
      outC->gaspedalStellung = _260_gaspedalStellung_partial;
      outC->bremspedalKraft = _261_bremspedalKraft_partial;
      outC->error = _262_error_partial;
      outC->ready = _263_ready_partial;
      outC->SM1_state_nxt = _264_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _265_SM1_reset_nxt_partial;
      outC->SM1_fired = _266_SM1_fired_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->zuendschalter = _232_zuendschalter_partial;
      outC->getriebeWahlhebel = _233_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _234_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _235_sicherheitsgurtSchalter_partial;
      outC->taste_P = _236_taste_P_partial;
      outC->taste_Hold = _237_taste_Hold_partial;
      outC->gaspedalStellung = _238_gaspedalStellung_partial;
      outC->bremspedalKraft = _239_bremspedalKraft_partial;
      outC->error = _240_error_partial;
      outC->ready = _241_ready_partial;
      outC->SM1_state_nxt = _242_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _243_SM1_reset_nxt_partial;
      outC->SM1_fired = _244_SM1_fired_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      outC->zuendschalter = _200_zuendschalter_partial;
      outC->getriebeWahlhebel = _201_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _202_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _203_sicherheitsgurtSchalter_partial;
      outC->taste_P = _204_taste_P_partial;
      outC->taste_Hold = _205_taste_Hold_partial;
      outC->gaspedalStellung = _206_gaspedalStellung_partial;
      outC->bremspedalKraft = _207_bremspedalKraft_partial;
      outC->error = _208_error_partial;
      outC->ready = _209_ready_partial;
      outC->SM1_state_nxt = _210_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _211_SM1_reset_nxt_partial;
      outC->SM1_fired = _212_SM1_fired_partial;
      break;
    case SSM_st_fzg_Steht_SM1 :
      outC->zuendschalter = _186_zuendschalter_partial;
      outC->getriebeWahlhebel = _187_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _188_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _189_sicherheitsgurtSchalter_partial;
      outC->taste_P = _190_taste_P_partial;
      outC->taste_Hold = _191_taste_Hold_partial;
      outC->gaspedalStellung = _192_gaspedalStellung_partial;
      outC->bremspedalKraft = _193_bremspedalKraft_partial;
      outC->error = _194_error_partial;
      outC->ready = _195_ready_partial;
      outC->SM1_state_nxt = _196_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _197_SM1_reset_nxt_partial;
      outC->SM1_fired = _198_SM1_fired_partial;
      break;
    case SSM_st_anhalten_SM1 :
      outC->zuendschalter = _173_zuendschalter_partial;
      outC->getriebeWahlhebel = _174_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _175_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _176_sicherheitsgurtSchalter_partial;
      outC->taste_P = _177_taste_P_partial;
      outC->taste_Hold = _178_taste_Hold_partial;
      outC->gaspedalStellung = _179_gaspedalStellung_partial;
      outC->bremspedalKraft = _180_bremspedalKraft_partial;
      outC->error = _181_error_partial;
      outC->ready = _182_ready_partial;
      outC->SM1_state_nxt = _183_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _184_SM1_reset_nxt_partial;
      outC->SM1_fired = _185_SM1_fired_partial;
      break;
    case SSM_st_fahren_SM1 :
      outC->zuendschalter = _159_zuendschalter_partial;
      outC->getriebeWahlhebel = _160_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _161_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _162_sicherheitsgurtSchalter_partial;
      outC->taste_P = _163_taste_P_partial;
      outC->taste_Hold = _164_taste_Hold_partial;
      outC->gaspedalStellung = _165_gaspedalStellung_partial;
      outC->bremspedalKraft = _166_bremspedalKraft_partial;
      outC->error = _167_error_partial;
      outC->ready = _168_ready_partial;
      outC->SM1_state_nxt = _169_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _170_SM1_reset_nxt_partial;
      outC->SM1_fired = _171_SM1_fired_partial;
      break;
    case SSM_st_anfahren_SM1 :
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
        outC->init15 = kcg_true;
      }
      /* SM1:automastikModusEinstellen:_L6= */
      if (outC->init15) {
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
  outC->_L10 = fzgLaengsneigung;
  _420_noname = outC->_L10;
  outC->_L8 = EPB_Bremse;
  _419_noname = outC->_L8;
  outC->_L7 = betriebsBremse;
  _418_noname = outC->_L7;
  outC->_L6 = cockpitAnzeige_EPBMode_Automatik;
  _417_noname = outC->_L6;
  outC->_L5 = cockpitAnzeige_EPBMode_Manuell;
  _416_noname = outC->_L5;
  outC->_L4 = cockpitAnzeige_Hold;
  _415_noname = outC->_L4;
  outC->_L3 = cockpitAnzeige_AutoHoldMode;
  _414_noname = outC->_L3;
  outC->_L2 = cockpitAnzeige_P;
  _413_noname = outC->_L2;
  outC->_L1 = led_P;
  _412_noname = outC->_L1;
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      outC->init = kcg_false;
      break;
    case SSM_st_fzgSteht_SM1 :
      outC->init1 = kcg_false;
      break;
    case SSM_st_anfahrenAusAutoHold_SM1 :
      outC->init2 = kcg_false;
      break;
    case SSM_st_haltImAutoHold_SM1 :
      outC->init3 = kcg_false;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->init4 = kcg_false;
      break;
    case SSM_st_erneutAnfahren_SM1 :
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
      outC->init7 = kcg_false;
      break;
    case SSM_st_fahren_SM1 :
      outC->init8 = kcg_false;
      break;
    case SSM_st_anfahren_SM1 :
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
    case SSM_st_EPB_arretiert_SM1 :
      outC->init11 = kcg_false;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      outC->init12 = kcg_false;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->init13 = kcg_false;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      outC->init14 = kcg_false;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      outC->init15 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void autoModus_autoHold_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L8 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L2 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->ready = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Start_SM1;
  outC->SM1_state_sel = SSM_st_Start_SM1;
  outC->_L1_bremseDurchtreten_SM5_parken_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1 =
    getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_angezogen_SM5_parken_SM1 = kcg_true;
  outC->_L2_EPB_angezogen_SM5_parken_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L1_EPB_angezogen_SM5_parken_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->SM5_clock_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_state_sel_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_state_act_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_fired_strong_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
  outC->SM5_fired_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
  outC->_L1_fzgSteht_SM1 = kcg_lit_float64(0.0);
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
  outC->_L9_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L11_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L12_anhaltenZumBeenden_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_anhaltenZumBeenden_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L14_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L15_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L16_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L17_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L18_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L19_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L20_anhaltenZumBeenden_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L21_anhaltenZumBeenden_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L22_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L23_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L24_anhaltenZumBeenden_SM1 = kcg_true;
  outC->_L25_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L26_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
  outC->_L6_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L4_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L3_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L2_anfahrenAusAutoHold_SM1 = kcg_true;
  outC->_L1_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L7_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L9_anfahrenAusAutoHold_SM1 = kcg_true;
  outC->_L10_anfahrenAusAutoHold_SM1 = kcg_true;
  outC->_L11_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L12_anfahrenAusAutoHold_SM1 = kcg_true;
  outC->_L13_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L14_anfahrenAusAutoHold_SM1 = kcg_true;
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
  outC->_L9_anhalten_SM1 = kcg_lit_float64(0.0);
  outC->_L11_anhalten_SM1 = kcg_lit_float64(0.0);
  outC->_L12_anhalten_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L13_anhalten_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L14_anhalten_SM1 = kcg_true;
  outC->_L6_fahren_SM1 = kcg_true;
  outC->_L5_fahren_SM1 = kcg_true;
  outC->_L4_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_fahren_SM1 = kcg_true;
  outC->_L2_fahren_SM1 = kcg_true;
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
  outC->SM5_state_nxt_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
  outC->SM5_reset_act_parken_SM1 = kcg_true;
  outC->SM5_reset_nxt_parken_SM1 = kcg_true;
  outC->_L5_anfahrenAusAutoHold_SM1 = kcg_lit_float64(0.0);
  outC->_L8_anfahrenAusAutoHold_SM1 = kcg_true;
  outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_true;
  outC->SM4_reset_nxt_autoHoldEinschalten_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_reset_act_erneutAnfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_erneutAnfahren_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_reset_act_anfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_anfahren_SM1 = kcg_true;
  outC->init15 = kcg_true;
  outC->init14 = kcg_true;
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
  /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_8);
  /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#9)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_9);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
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
void autoModus_autoHold_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->init15 = kcg_true;
  outC->init14 = kcg_true;
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
  /* SM1:fzg_Steht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_8);
  /* SM1:haltImAutoHold:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#9)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_9);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
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
** autoModus_autoHold_AH_testSuite_Pkg_divFahrer.c
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

