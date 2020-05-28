/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer.h"

/* AH_testSuite_Pkg::divFahrer::autoModus_Notbremsung/ */
void autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer(
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
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC)
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
  kcg_float64 gaspedalStellung_partial;
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
  kcg_float64 _7_gaspedalStellung_partial;
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
  kcg_float64 _20_gaspedalStellung_partial;
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
  kcg_float64 _33_gaspedalStellung_partial;
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
  kcg_float64 _52_gaspedalStellung_partial;
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
  kcg_float64 _66_gaspedalStellung_partial;
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
  kcg_float64 _80_gaspedalStellung_partial;
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
  kcg_float64 _93_gaspedalStellung_partial;
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
  kcg_float64 _107_gaspedalStellung_partial;
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
  kcg_float64 _120_gaspedalStellung_partial;
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
  kcg_float64 _134_gaspedalStellung_partial;
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
  kcg_float64 _143_gaspedalStellung_partial;
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
  kcg_float64 _150_gaspedalStellung_partial;
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
  kcg_float64 _157_gaspedalStellung_partial;
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
  kcg_float64 _165_gaspedalStellung_partial;
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
  kcg_float64 _179_gaspedalStellung_partial;
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
  /* SM1:NotbremsungAusloesen:<1> */
  kcg_bool tr_1_guard_NotbremsungAusloesen_SM1;
  kcg_bool _186_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _187_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _188_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _189_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _190_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _191_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _192_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _193_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _194_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _195_error_partial;
  /* ready/ */
  kcg_bool _196_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _197_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _198_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _199_SM1_fired_partial;
  /* SM1:Notbremse:<1> */
  kcg_bool tr_1_guard_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  kcg_bool SM6_reset_prv_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  kcg_bool SM6_reset_sel_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  SSM_TR_SM6_Notbremse_SM1 SM6_fired_partial_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  kcg_bool SM6_reset_nxt_partial_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  SSM_ST_SM6_Notbremse_SM1 SM6_state_nxt_partial_Notbremse_SM1;
  /* error/ */
  kcg_bool _200_error_partial;
  /* gaspedalStellung/ */
  kcg_float64 _201_gaspedalStellung_partial;
  /* SM1:Notbremse:SM6:Fuss_vom_Gas:<1> */
  kcg_bool tr_1_guard_Fuss_vom_Gas_SM6_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  SSM_TR_SM6_Notbremse_SM1 _202_SM6_fired_partial_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  kcg_bool _203_SM6_reset_nxt_partial_Notbremse_SM1;
  /* SM1:Notbremse:SM6: */
  SSM_ST_SM6_Notbremse_SM1 _204_SM6_state_nxt_partial_Notbremse_SM1;
  /* error/ */
  kcg_bool _205_error_partial;
  /* gaspedalStellung/ */
  kcg_float64 _206_gaspedalStellung_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _207_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _208_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _209_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _210_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _211_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _212_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _213_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _214_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _215_error_partial;
  /* ready/ */
  kcg_bool _216_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _217_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _218_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _219_SM1_fired_partial;
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
  kcg_bool _220_ready_partial;
  /* error/ */
  kcg_bool _221_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _222_taste_Hold_partial;
  /* SM1:autoHoldEinschalten:SM4:HoldDruecken:<1> */
  kcg_bool tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_TR_SM4_autoHoldEinschalten_SM1 _223_SM4_fired_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  kcg_bool _224_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
  /* SM1:autoHoldEinschalten:SM4: */
  SSM_ST_SM4_autoHoldEinschalten_SM1 _225_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
  /* ready/ */
  kcg_bool _226_ready_partial;
  /* error/ */
  kcg_bool _227_error_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _228_taste_Hold_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _229_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _230_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _231_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _232_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _233_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _234_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _235_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _236_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _237_error_partial;
  /* ready/ */
  kcg_bool _238_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _239_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _240_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _241_SM1_fired_partial;
  /* SM1:EPB_druecken:<1> */
  kcg_bool tr_1_guard_EPB_druecken_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _242_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _243_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _244_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _245_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _246_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _247_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _248_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _249_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _250_error_partial;
  /* ready/ */
  kcg_bool _251_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _252_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _253_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _254_SM1_fired_partial;
  /* SM1:EPB_gedrueckt:<1> */
  kcg_bool tr_1_guard_EPB_gedrueckt_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _255_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _256_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _257_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _258_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _259_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _260_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _261_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _262_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _263_error_partial;
  /* ready/ */
  kcg_bool _264_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _265_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _266_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _267_SM1_fired_partial;
  /* SM1:Fzg_Abstellen:<1> */
  kcg_bool tr_1_guard_Fzg_Abstellen_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _268_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _269_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _270_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _271_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _272_taste_P_partial;
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg _273_taste_Hold_partial;
  /* gaspedalStellung/ */
  kcg_float64 _274_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _275_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _276_error_partial;
  /* ready/ */
  kcg_bool _277_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _278_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _279_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _280_SM1_fired_partial;
  kcg_bool _281_noname;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Start:<1> */
  kcg_bool tr_1_guard_Start_SM1;
  /* SM1: */
  SSM_ST_SM1 _282_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _283_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _284_SM1_fired_strong_partial;
  /* SM1:zuendungEinschalten:<1> */
  kcg_bool tr_1_guard_zuendungEinschalten_SM1;
  /* SM1: */
  SSM_ST_SM1 _285_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _286_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _287_SM1_fired_strong_partial;
  /* SM1:bremspedalDurchtreten:<1> */
  kcg_bool tr_1_guard_bremspedalDurchtreten_SM1;
  /* SM1: */
  SSM_ST_SM1 _288_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _289_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _290_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _291_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _292_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _293_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _294_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _295_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _296_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _297_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _298_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _299_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _300_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _301_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _302_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _303_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _304_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _305_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _306_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _307_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _308_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _309_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _310_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _311_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _312_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _313_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _314_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _315_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _316_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _317_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _318_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _319_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _320_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _321_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _322_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _323_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _324_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _325_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _326_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _327_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _328_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _329_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _330_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _331_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _332_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _333_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _334_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _335_SM1_fired_strong_partial;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _336_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _337_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _338_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _339_noname;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg _340_noname;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _341_noname;
  /* error/ */
  kcg_bool last_error;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg last_bremspedalKraft;
  /* gaspedalStellung/ */
  kcg_float64 last_gaspedalStellung;
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
    case SSM_st_EPB_gezogen_SM1 :
      _333_SM1_state_act_partial = SSM_st_EPB_gezogen_SM1;
      outC->SM1_state_act = _333_SM1_state_act_partial;
      break;
    case SSM_st_Fzg_Abstellen_SM1 :
      _330_SM1_state_act_partial = SSM_st_Fzg_Abstellen_SM1;
      outC->SM1_state_act = _330_SM1_state_act_partial;
      break;
    case SSM_st_EPB_gedrueckt_SM1 :
      _327_SM1_state_act_partial = SSM_st_EPB_gedrueckt_SM1;
      outC->SM1_state_act = _327_SM1_state_act_partial;
      break;
    case SSM_st_EPB_druecken_SM1 :
      _324_SM1_state_act_partial = SSM_st_EPB_druecken_SM1;
      outC->SM1_state_act = _324_SM1_state_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _321_SM1_state_act_partial = SSM_st_autoHoldEinschalten_SM1;
      outC->SM1_state_act = _321_SM1_state_act_partial;
      break;
    case SSM_st_Notbremse_SM1 :
      _318_SM1_state_act_partial = SSM_st_Notbremse_SM1;
      outC->SM1_state_act = _318_SM1_state_act_partial;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
      _315_SM1_state_act_partial = SSM_st_NotbremsungAusloesen_SM1;
      outC->SM1_state_act = _315_SM1_state_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _312_SM1_state_act_partial = SSM_st_fahren_SM1;
      outC->SM1_state_act = _312_SM1_state_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _309_SM1_state_act_partial = SSM_st_anfahren_SM1;
      outC->SM1_state_act = _309_SM1_state_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _306_SM1_state_act_partial = SSM_st_EPB_arretiert_SM1;
      outC->SM1_state_act = _306_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _303_SM1_state_act_partial = SSM_st_anfahrenVorbereiten_SM1;
      outC->SM1_state_act = _303_SM1_state_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _300_SM1_state_act_partial = SSM_st_EPB_angezogen_SM1;
      outC->SM1_state_act = _300_SM1_state_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _297_SM1_state_act_partial = SSM_st_betriebsbremseLoesen_SM1;
      outC->SM1_state_act = _297_SM1_state_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _294_SM1_state_act_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      outC->SM1_state_act = _294_SM1_state_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _291_SM1_state_act_partial = SSM_st_automatikModusEingestellt_SM1;
      outC->SM1_state_act = _291_SM1_state_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _288_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      outC->SM1_state_act = _288_SM1_state_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      tr_1_guard_bremspedalDurchtreten_SM1 = aktZeit >= kcg_lit_float64(3.0);
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _285_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      }
      else {
        _285_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      outC->SM1_state_act = _285_SM1_state_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      tr_1_guard_zuendungEinschalten_SM1 = aktZeit >= kcg_lit_float64(2.0);
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _282_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      else {
        _282_SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      outC->SM1_state_act = _282_SM1_state_act_partial;
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
    case SSM_st_EPB_gezogen_SM1 :
      _275_bremspedalKraft_partial = last_bremspedalKraft;
      _274_gaspedalStellung_partial = last_gaspedalStellung;
      _273_taste_Hold_partial = last_taste_Hold;
      _272_taste_P_partial = last_taste_P;
      _271_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _270_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _269_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _268_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_gezogen_SM1 :
      _335_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _335_SM1_fired_strong_partial;
      break;
    case SSM_st_Fzg_Abstellen_SM1 :
      _332_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _332_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_gedrueckt_SM1 :
      _329_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _329_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_druecken_SM1 :
      _326_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _326_SM1_fired_strong_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _323_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _323_SM1_fired_strong_partial;
      break;
    case SSM_st_Notbremse_SM1 :
      _320_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _320_SM1_fired_strong_partial;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
      _317_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _317_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren_SM1 :
      _314_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _314_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _311_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _311_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _308_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _308_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _305_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _305_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _302_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _302_SM1_fired_strong_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _299_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _299_SM1_fired_strong_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _296_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _296_SM1_fired_strong_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _293_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _293_SM1_fired_strong_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _290_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _290_SM1_fired_strong_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _287_SM1_fired_strong_partial =
          SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1;
      }
      else {
        _287_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _287_SM1_fired_strong_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _284_SM1_fired_strong_partial =
          SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1;
      }
      else {
        _284_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _284_SM1_fired_strong_partial;
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
    case SSM_st_EPB_gezogen_SM1 :
      _280_SM1_fired_partial = outC->SM1_fired_strong;
      _279_SM1_reset_nxt_partial = kcg_false;
      _278_SM1_state_nxt_partial = SSM_st_EPB_gezogen_SM1;
      outC->_L29_EPB_gezogen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_gezogen_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_gezogen_SM1 :
      /* SM1:EPB_gezogen:_L33= */
      if (outC->init) {
        outC->_L33_EPB_gezogen_SM1 = kcg_true;
      }
      else {
        outC->_L33_EPB_gezogen_SM1 = outC->_L29_EPB_gezogen_SM1;
      }
      outC->_L32_EPB_gezogen_SM1 = c_5s_warten_AH_testSuite_Pkg_divFahrer;
      outC->_L28_EPB_gezogen_SM1 = aktZeit;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_gezogen_SM1 :
      if (SM1_reset_sel) {
        /* SM1:EPB_gezogen:_L30=(AhTypes_Pkg::utils_Pkg::countDownTimer#23)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_23);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_gezogen_SM1 :
      /* SM1:EPB_gezogen:_L30=(AhTypes_Pkg::utils_Pkg::countDownTimer#23)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L33_EPB_gezogen_SM1,
        outC->_L29_EPB_gezogen_SM1,
        outC->_L28_EPB_gezogen_SM1,
        outC->_L32_EPB_gezogen_SM1,
        &outC->Context_countDownTimer_23);
      outC->_L30_EPB_gezogen_SM1 = outC->Context_countDownTimer_23.abgelaufen;
      outC->_L31_EPB_gezogen_SM1 = outC->Context_countDownTimer_23.laufend;
      _277_ready_partial = outC->_L30_EPB_gezogen_SM1;
      _281_noname = outC->_L31_EPB_gezogen_SM1;
      outC->_L10_EPB_gezogen_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L9_EPB_gezogen_SM1 = EPB_Bremse;
      outC->_L8_EPB_gezogen_SM1 = outC->_L9_EPB_gezogen_SM1 ==
        outC->_L10_EPB_gezogen_SM1;
      outC->_L7_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L6_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L5_EPB_gezogen_SM1 = cockpitAnzeige_P;
      outC->_L4_EPB_gezogen_SM1 = led_P;
      outC->_L2_EPB_gezogen_SM1 = outC->_L5_EPB_gezogen_SM1 ==
        outC->_L7_EPB_gezogen_SM1;
      outC->_L1_EPB_gezogen_SM1 = outC->_L4_EPB_gezogen_SM1 ==
        outC->_L6_EPB_gezogen_SM1;
      outC->_L3_EPB_gezogen_SM1 = outC->_L1_EPB_gezogen_SM1 |
        outC->_L2_EPB_gezogen_SM1 | outC->_L8_EPB_gezogen_SM1;
      _276_error_partial = outC->_L3_EPB_gezogen_SM1;
      break;
    case SSM_st_Fzg_Abstellen_SM1 :
      _264_ready_partial = kcg_false;
      _263_error_partial = last_error;
      _262_bremspedalKraft_partial = last_bremspedalKraft;
      _261_gaspedalStellung_partial = last_gaspedalStellung;
      _260_taste_Hold_partial = last_taste_Hold;
      _259_taste_P_partial = last_taste_P;
      _258_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _257_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _255_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_Fzg_Abstellen_SM1 = kcg_true;
      if (tr_1_guard_Fzg_Abstellen_SM1) {
        _267_SM1_fired_partial = SSM_TR_Fzg_Abstellen_EPB_gezogen_1_Fzg_Abstellen_SM1;
      }
      else {
        _267_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _266_SM1_reset_nxt_partial = tr_1_guard_Fzg_Abstellen_SM1;
      if (tr_1_guard_Fzg_Abstellen_SM1) {
        _265_SM1_state_nxt_partial = SSM_st_EPB_gezogen_SM1;
      }
      else {
        _265_SM1_state_nxt_partial = SSM_st_Fzg_Abstellen_SM1;
      }
      outC->_L2_Fzg_Abstellen_SM1 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
      _256_getriebeWahlhebel_partial = outC->_L2_Fzg_Abstellen_SM1;
      break;
    case SSM_st_EPB_gedrueckt_SM1 :
      _251_ready_partial = kcg_false;
      _249_bremspedalKraft_partial = last_bremspedalKraft;
      _248_gaspedalStellung_partial = last_gaspedalStellung;
      _247_taste_Hold_partial = last_taste_Hold;
      _246_taste_P_partial = last_taste_P;
      _245_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _244_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _243_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _242_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_EPB_gedrueckt_SM1 = kcg_true;
      if (tr_1_guard_EPB_gedrueckt_SM1) {
        _254_SM1_fired_partial = SSM_TR_EPB_gedrueckt_Fzg_Abstellen_1_EPB_gedrueckt_SM1;
      }
      else {
        _254_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _253_SM1_reset_nxt_partial = tr_1_guard_EPB_gedrueckt_SM1;
      if (tr_1_guard_EPB_gedrueckt_SM1) {
        _252_SM1_state_nxt_partial = SSM_st_Fzg_Abstellen_SM1;
      }
      else {
        _252_SM1_state_nxt_partial = SSM_st_EPB_gedrueckt_SM1;
      }
      outC->_L10_EPB_gedrueckt_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L9_EPB_gedrueckt_SM1 = EPB_Bremse;
      outC->_L8_EPB_gedrueckt_SM1 = outC->_L9_EPB_gedrueckt_SM1 ==
        outC->_L10_EPB_gedrueckt_SM1;
      outC->_L7_EPB_gedrueckt_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L6_EPB_gedrueckt_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      outC->_L5_EPB_gedrueckt_SM1 = cockpitAnzeige_P;
      outC->_L4_EPB_gedrueckt_SM1 = led_P;
      outC->_L2_EPB_gedrueckt_SM1 = outC->_L5_EPB_gedrueckt_SM1 ==
        outC->_L7_EPB_gedrueckt_SM1;
      outC->_L1_EPB_gedrueckt_SM1 = outC->_L4_EPB_gedrueckt_SM1 ==
        outC->_L6_EPB_gedrueckt_SM1;
      outC->_L3_EPB_gedrueckt_SM1 = outC->_L1_EPB_gedrueckt_SM1 |
        outC->_L2_EPB_gedrueckt_SM1 | outC->_L8_EPB_gedrueckt_SM1;
      _250_error_partial = outC->_L3_EPB_gedrueckt_SM1;
      break;
    case SSM_st_EPB_druecken_SM1 :
      _238_ready_partial = kcg_false;
      _237_error_partial = last_error;
      _236_bremspedalKraft_partial = last_bremspedalKraft;
      _235_gaspedalStellung_partial = last_gaspedalStellung;
      _234_taste_Hold_partial = last_taste_Hold;
      _232_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _231_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _230_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _229_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_EPB_druecken_SM1 = kcg_true;
      if (tr_1_guard_EPB_druecken_SM1) {
        _241_SM1_fired_partial = SSM_TR_EPB_druecken_EPB_gedrueckt_1_EPB_druecken_SM1;
      }
      else {
        _241_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _240_SM1_reset_nxt_partial = tr_1_guard_EPB_druecken_SM1;
      if (tr_1_guard_EPB_druecken_SM1) {
        _239_SM1_state_nxt_partial = SSM_st_EPB_gedrueckt_SM1;
      }
      else {
        _239_SM1_state_nxt_partial = SSM_st_EPB_druecken_SM1;
      }
      outC->_L1_EPB_druecken_SM1 = tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg;
      _233_taste_P_partial = outC->_L1_EPB_druecken_SM1;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _214_bremspedalKraft_partial = last_bremspedalKraft;
      _213_gaspedalStellung_partial = last_gaspedalStellung;
      _211_taste_P_partial = last_taste_P;
      _210_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _209_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _208_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _207_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_autoHoldEinschalten_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_autoHoldEinschalten_SM1 :
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init1) {
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
          _220_ready_partial = outC->_L5_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _216_ready_partial = _220_ready_partial;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          _226_ready_partial = kcg_false;
          _216_ready_partial = _226_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_autoHoldEinschalten_SM1 = _216_ready_partial;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _219_SM1_fired_partial =
          SSM_TR_autoHoldEinschalten_cockpitanzeigeBleibtAus_1_autoHoldEinschalten_SM1;
      }
      else {
        _219_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _218_SM1_reset_nxt_partial = tr_1_guard_autoHoldEinschalten_SM1;
      if (tr_1_guard_autoHoldEinschalten_SM1) {
        _217_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _217_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
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
          _221_error_partial = outC->_L4_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          _222_taste_Hold_partial = outC->_L1_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          _212_taste_Hold_partial = _222_taste_Hold_partial;
          _215_error_partial = _221_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        case SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1 :
          tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1 = kcg_true;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _223_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _223_SM4_fired_partial_autoHoldEinschalten_SM1 =
              SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
          }
          _224_SM4_reset_nxt_partial_autoHoldEinschalten_SM1 =
            tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          if (tr_1_guard_HoldDruecken_SM4_autoHoldEinschalten_SM1) {
            _225_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1;
          }
          else {
            _225_SM4_state_nxt_partial_autoHoldEinschalten_SM1 =
              SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          }
          outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
          outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            cockpitAnzeige_AutoHoldMode;
          outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1 =
            outC->_L2_HoldDruecken_SM4_autoHoldEinschalten_SM1 !=
            outC->_L3_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _227_error_partial = outC->_L4_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
          _228_taste_Hold_partial = outC->_L1_HoldDruecken_SM4_autoHoldEinschalten_SM1;
          _212_taste_Hold_partial = _228_taste_Hold_partial;
          _215_error_partial = _227_error_partial;
          outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
            _225_SM4_state_nxt_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init1) {
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
            _224_SM4_reset_nxt_partial_autoHoldEinschalten_SM1;
          outC->SM4_fired_autoHoldEinschalten_SM1 =
            _223_SM4_fired_partial_autoHoldEinschalten_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:autoHoldEinschalten:SM4: */
      if (outC->init1) {
        SM4_reset_prv_autoHoldEinschalten_SM1 = kcg_false;
      }
      else {
        SM4_reset_prv_autoHoldEinschalten_SM1 =
          outC->SM4_reset_act_autoHoldEinschalten_SM1;
      }
      outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_false;
      break;
    case SSM_st_Notbremse_SM1 :
      _196_ready_partial = kcg_false;
      _194_bremspedalKraft_partial = last_bremspedalKraft;
      _192_taste_Hold_partial = last_taste_Hold;
      _191_taste_P_partial = last_taste_P;
      _190_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _189_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _188_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _187_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_Notbremse_SM1 = v_fzg <= cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      if (tr_1_guard_Notbremse_SM1) {
        _199_SM1_fired_partial = SSM_TR_Notbremse_EPB_druecken_1_Notbremse_SM1;
      }
      else {
        _199_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _198_SM1_reset_nxt_partial = tr_1_guard_Notbremse_SM1;
      if (tr_1_guard_Notbremse_SM1) {
        _197_SM1_state_nxt_partial = SSM_st_EPB_druecken_SM1;
      }
      else {
        _197_SM1_state_nxt_partial = SSM_st_Notbremse_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_Notbremse_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_Notbremse_SM1 :
      /* SM1:Notbremse:SM6: */
      if (outC->init2) {
        outC->SM6_state_sel_Notbremse_SM1 = SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
      }
      else {
        outC->SM6_state_sel_Notbremse_SM1 = outC->SM6_state_nxt_Notbremse_SM1;
      }
      outC->SM6_state_act_Notbremse_SM1 = outC->SM6_state_sel_Notbremse_SM1;
      outC->SM6_clock_Notbremse_SM1 = outC->SM6_state_act_Notbremse_SM1;
      switch (outC->SM6_clock_Notbremse_SM1) {
        case SSM_st_EPB_angezogen_SM6_Notbremse_SM1 :
          _201_gaspedalStellung_partial = last_gaspedalStellung;
          break;
        default :
          /* this branch is empty */
          break;
      }
      outC->SM6_fired_strong_Notbremse_SM1 = SSM_TR_no_trans_SM6_Notbremse_SM1;
      /* SM1:Notbremse:SM6: */
      switch (outC->SM6_clock_Notbremse_SM1) {
        case SSM_st_EPB_angezogen_SM6_Notbremse_SM1 :
          SM6_fired_partial_Notbremse_SM1 = outC->SM6_fired_strong_Notbremse_SM1;
          SM6_reset_nxt_partial_Notbremse_SM1 = kcg_false;
          SM6_state_nxt_partial_Notbremse_SM1 = SSM_st_EPB_angezogen_SM6_Notbremse_SM1;
          outC->_L3_EPB_angezogen_SM6_Notbremse_SM1 = EPB_Bremse;
          outC->_L2_EPB_angezogen_SM6_Notbremse_SM1 =
            pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
          outC->_L1_EPB_angezogen_SM6_Notbremse_SM1 =
            outC->_L3_EPB_angezogen_SM6_Notbremse_SM1 !=
            outC->_L2_EPB_angezogen_SM6_Notbremse_SM1;
          _200_error_partial = outC->_L1_EPB_angezogen_SM6_Notbremse_SM1;
          _193_gaspedalStellung_partial = _201_gaspedalStellung_partial;
          _195_error_partial = _200_error_partial;
          outC->SM6_state_nxt_Notbremse_SM1 = SM6_state_nxt_partial_Notbremse_SM1;
          break;
        case SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1 :
          _205_error_partial = last_error;
          tr_1_guard_Fuss_vom_Gas_SM6_Notbremse_SM1 = kcg_true;
          if (tr_1_guard_Fuss_vom_Gas_SM6_Notbremse_SM1) {
            _202_SM6_fired_partial_Notbremse_SM1 =
              SSM_TR_Fuss_vom_Gas_EPB_angezogen_1_Fuss_vom_Gas_SM6_Notbremse_SM1;
          }
          else {
            _202_SM6_fired_partial_Notbremse_SM1 = SSM_TR_no_trans_SM6_Notbremse_SM1;
          }
          _203_SM6_reset_nxt_partial_Notbremse_SM1 =
            tr_1_guard_Fuss_vom_Gas_SM6_Notbremse_SM1;
          if (tr_1_guard_Fuss_vom_Gas_SM6_Notbremse_SM1) {
            _204_SM6_state_nxt_partial_Notbremse_SM1 =
              SSM_st_EPB_angezogen_SM6_Notbremse_SM1;
          }
          else {
            _204_SM6_state_nxt_partial_Notbremse_SM1 =
              SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
          }
          outC->_L1_Fuss_vom_Gas_SM6_Notbremse_SM1 =
            cGaspedalLosgelassen_AhTypes_Pkg_ah_Pkg;
          _206_gaspedalStellung_partial = outC->_L1_Fuss_vom_Gas_SM6_Notbremse_SM1;
          _193_gaspedalStellung_partial = _206_gaspedalStellung_partial;
          _195_error_partial = _205_error_partial;
          outC->SM6_state_nxt_Notbremse_SM1 = _204_SM6_state_nxt_partial_Notbremse_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:Notbremse:SM6: */
      if (outC->init2) {
        SM6_reset_sel_Notbremse_SM1 = kcg_false;
      }
      else {
        SM6_reset_sel_Notbremse_SM1 = outC->SM6_reset_nxt_Notbremse_SM1;
      }
      /* SM1:Notbremse:SM6: */
      switch (outC->SM6_clock_Notbremse_SM1) {
        case SSM_st_EPB_angezogen_SM6_Notbremse_SM1 :
          outC->SM6_reset_nxt_Notbremse_SM1 = SM6_reset_nxt_partial_Notbremse_SM1;
          outC->SM6_fired_Notbremse_SM1 = SM6_fired_partial_Notbremse_SM1;
          break;
        case SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1 :
          outC->SM6_reset_nxt_Notbremse_SM1 = _203_SM6_reset_nxt_partial_Notbremse_SM1;
          outC->SM6_fired_Notbremse_SM1 = _202_SM6_fired_partial_Notbremse_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:Notbremse:SM6: */
      if (outC->init2) {
        SM6_reset_prv_Notbremse_SM1 = kcg_false;
      }
      else {
        SM6_reset_prv_Notbremse_SM1 = outC->SM6_reset_act_Notbremse_SM1;
      }
      outC->SM6_reset_act_Notbremse_SM1 = kcg_false;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
      _181_error_partial = last_error;
      _180_bremspedalKraft_partial = last_bremspedalKraft;
      _179_gaspedalStellung_partial = last_gaspedalStellung;
      _178_taste_Hold_partial = last_taste_Hold;
      _176_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _175_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _174_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _173_zuendschalter_partial = last_zuendschalter;
      outC->_L2_NotbremsungAusloesen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_NotbremsungAusloesen_SM1 :
      if (SM1_reset_sel) {
        outC->init3 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NotbremsungAusloesen_SM1 :
      /* SM1:NotbremsungAusloesen:_L3= */
      if (outC->init3) {
        outC->_L3_NotbremsungAusloesen_SM1 = kcg_true;
      }
      else {
        outC->_L3_NotbremsungAusloesen_SM1 = outC->_L2_NotbremsungAusloesen_SM1;
      }
      outC->_L7_NotbremsungAusloesen_SM1 = aktZeit;
      outC->_L8_NotbremsungAusloesen_SM1 = cNotbremsDelay_AhTypes_Pkg_ah_Pkg;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_NotbremsungAusloesen_SM1 :
      if (SM1_reset_sel) {
        /* SM1:NotbremsungAusloesen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_10);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NotbremsungAusloesen_SM1 :
      /* SM1:NotbremsungAusloesen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L3_NotbremsungAusloesen_SM1,
        outC->_L2_NotbremsungAusloesen_SM1,
        outC->_L7_NotbremsungAusloesen_SM1,
        outC->_L8_NotbremsungAusloesen_SM1,
        &outC->Context_countDownTimer_10);
      outC->_L4_NotbremsungAusloesen_SM1 = outC->Context_countDownTimer_10.abgelaufen;
      outC->_L5_NotbremsungAusloesen_SM1 = outC->Context_countDownTimer_10.laufend;
      _182_ready_partial = outC->_L4_NotbremsungAusloesen_SM1;
      tr_1_guard_NotbremsungAusloesen_SM1 = _182_ready_partial;
      if (tr_1_guard_NotbremsungAusloesen_SM1) {
        _185_SM1_fired_partial =
          SSM_TR_NotbremsungAusloesen_Notbremse_1_NotbremsungAusloesen_SM1;
      }
      else {
        _185_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _184_SM1_reset_nxt_partial = tr_1_guard_NotbremsungAusloesen_SM1;
      if (tr_1_guard_NotbremsungAusloesen_SM1) {
        _183_SM1_state_nxt_partial = SSM_st_Notbremse_SM1;
      }
      else {
        _183_SM1_state_nxt_partial = SSM_st_NotbremsungAusloesen_SM1;
      }
      _186_noname = outC->_L5_NotbremsungAusloesen_SM1;
      outC->_L1_NotbremsungAusloesen_SM1 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
      _177_taste_P_partial = outC->_L1_NotbremsungAusloesen_SM1;
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
        _171_SM1_fired_partial = SSM_TR_fahren_NotbremsungAusloesen_1_fahren_SM1;
      }
      else {
        _171_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _170_SM1_reset_nxt_partial = tr_1_guard_fahren_SM1;
      if (tr_1_guard_fahren_SM1) {
        _169_SM1_state_nxt_partial = SSM_st_NotbremsungAusloesen_SM1;
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
        outC->init6 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahren_SM1 :
      /* SM1:anfahren:SM2: */
      if (outC->init6) {
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
      if (outC->init6) {
        SM2_reset_sel_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_anfahren_SM1 = outC->SM2_reset_nxt_anfahren_SM1;
      }
      switch (outC->SM2_state_sel_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          if (SM2_reset_sel_anfahren_SM1) {
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
    case SSM_st_anfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init5 = kcg_true;
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
          if (outC->init5) {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = outC->_L4_gasGeben_SM2_anfahren_SM1;
          }
          outC->_L8_gasGeben_SM2_anfahren_SM1 =
            outC->_L3_gasGeben_SM2_anfahren_SM1 >= outC->_L6_gasGeben_SM2_anfahren_SM1;
          _141_ready_partial = outC->_L8_gasGeben_SM2_anfahren_SM1;
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
              SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1;
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
              SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1;
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
      if (outC->init6) {
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
        outC->init7 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_SM1 :
      /* SM1:EPB_arretiert:_L13= */
      if (outC->init7) {
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
        outC->init8 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_angezogen_SM1 :
      /* SM1:EPB_angezogen:_L13= */
      if (outC->init8) {
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
        outC->init9 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L18= */
      if (outC->init9) {
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
        outC->init10 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_automatikModusEingestellt_SM1 :
      /* SM1:automatikModusEingestellt:_L5= */
      if (outC->init10) {
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
          SSM_TR_automatikModusEingestellt_autoHoldEinschalten_1_automatikModusEingestellt_SM1;
      }
      else {
        _58_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _57_SM1_reset_nxt_partial = tr_1_guard_automatikModusEingestellt_SM1;
      if (tr_1_guard_automatikModusEingestellt_SM1) {
        _56_SM1_state_nxt_partial = SSM_st_autoHoldEinschalten_SM1;
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
    case SSM_st_EPB_gezogen_SM1 :
      _334_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _334_SM1_reset_act_partial;
      break;
    case SSM_st_Fzg_Abstellen_SM1 :
      _331_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _331_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_gedrueckt_SM1 :
      _328_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _328_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_druecken_SM1 :
      _325_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _325_SM1_reset_act_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      _322_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _322_SM1_reset_act_partial;
      break;
    case SSM_st_Notbremse_SM1 :
      _319_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _319_SM1_reset_act_partial;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
      _316_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _316_SM1_reset_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _313_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _313_SM1_reset_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _310_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _310_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_arretiert_SM1 :
      _307_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _307_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _304_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _304_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _301_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _301_SM1_reset_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _298_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _298_SM1_reset_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _295_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _295_SM1_reset_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _292_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _292_SM1_reset_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _289_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _289_SM1_reset_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _286_SM1_reset_act_partial = tr_1_guard_bremspedalDurchtreten_SM1;
      outC->SM1_reset_act = _286_SM1_reset_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _283_SM1_reset_act_partial = tr_1_guard_zuendungEinschalten_SM1;
      outC->SM1_reset_act = _283_SM1_reset_act_partial;
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
    case SSM_st_EPB_gezogen_SM1 :
      outC->zuendschalter = _268_zuendschalter_partial;
      outC->getriebeWahlhebel = _269_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _270_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _271_sicherheitsgurtSchalter_partial;
      outC->taste_P = _272_taste_P_partial;
      outC->taste_Hold = _273_taste_Hold_partial;
      outC->gaspedalStellung = _274_gaspedalStellung_partial;
      outC->bremspedalKraft = _275_bremspedalKraft_partial;
      outC->error = _276_error_partial;
      outC->ready = _277_ready_partial;
      outC->SM1_state_nxt = _278_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _279_SM1_reset_nxt_partial;
      outC->SM1_fired = _280_SM1_fired_partial;
      break;
    case SSM_st_Fzg_Abstellen_SM1 :
      outC->zuendschalter = _255_zuendschalter_partial;
      outC->getriebeWahlhebel = _256_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _257_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _258_sicherheitsgurtSchalter_partial;
      outC->taste_P = _259_taste_P_partial;
      outC->taste_Hold = _260_taste_Hold_partial;
      outC->gaspedalStellung = _261_gaspedalStellung_partial;
      outC->bremspedalKraft = _262_bremspedalKraft_partial;
      outC->error = _263_error_partial;
      outC->ready = _264_ready_partial;
      outC->SM1_state_nxt = _265_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _266_SM1_reset_nxt_partial;
      outC->SM1_fired = _267_SM1_fired_partial;
      break;
    case SSM_st_EPB_gedrueckt_SM1 :
      outC->zuendschalter = _242_zuendschalter_partial;
      outC->getriebeWahlhebel = _243_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _244_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _245_sicherheitsgurtSchalter_partial;
      outC->taste_P = _246_taste_P_partial;
      outC->taste_Hold = _247_taste_Hold_partial;
      outC->gaspedalStellung = _248_gaspedalStellung_partial;
      outC->bremspedalKraft = _249_bremspedalKraft_partial;
      outC->error = _250_error_partial;
      outC->ready = _251_ready_partial;
      outC->SM1_state_nxt = _252_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _253_SM1_reset_nxt_partial;
      outC->SM1_fired = _254_SM1_fired_partial;
      break;
    case SSM_st_EPB_druecken_SM1 :
      outC->zuendschalter = _229_zuendschalter_partial;
      outC->getriebeWahlhebel = _230_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _231_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _232_sicherheitsgurtSchalter_partial;
      outC->taste_P = _233_taste_P_partial;
      outC->taste_Hold = _234_taste_Hold_partial;
      outC->gaspedalStellung = _235_gaspedalStellung_partial;
      outC->bremspedalKraft = _236_bremspedalKraft_partial;
      outC->error = _237_error_partial;
      outC->ready = _238_ready_partial;
      outC->SM1_state_nxt = _239_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _240_SM1_reset_nxt_partial;
      outC->SM1_fired = _241_SM1_fired_partial;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->zuendschalter = _207_zuendschalter_partial;
      outC->getriebeWahlhebel = _208_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _209_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _210_sicherheitsgurtSchalter_partial;
      outC->taste_P = _211_taste_P_partial;
      outC->taste_Hold = _212_taste_Hold_partial;
      outC->gaspedalStellung = _213_gaspedalStellung_partial;
      outC->bremspedalKraft = _214_bremspedalKraft_partial;
      outC->error = _215_error_partial;
      outC->ready = _216_ready_partial;
      outC->SM1_state_nxt = _217_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _218_SM1_reset_nxt_partial;
      outC->SM1_fired = _219_SM1_fired_partial;
      break;
    case SSM_st_Notbremse_SM1 :
      outC->zuendschalter = _187_zuendschalter_partial;
      outC->getriebeWahlhebel = _188_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _189_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _190_sicherheitsgurtSchalter_partial;
      outC->taste_P = _191_taste_P_partial;
      outC->taste_Hold = _192_taste_Hold_partial;
      outC->gaspedalStellung = _193_gaspedalStellung_partial;
      outC->bremspedalKraft = _194_bremspedalKraft_partial;
      outC->error = _195_error_partial;
      outC->ready = _196_ready_partial;
      outC->SM1_state_nxt = _197_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _198_SM1_reset_nxt_partial;
      outC->SM1_fired = _199_SM1_fired_partial;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
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
        outC->init11 = kcg_true;
      }
      /* SM1:automastikModusEinstellen:_L6= */
      if (outC->init11) {
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
  _341_noname = outC->_L10;
  outC->_L7 = betriebsBremse;
  _340_noname = outC->_L7;
  outC->_L6 = cockpitAnzeige_EPBMode_Automatik;
  _339_noname = outC->_L6;
  outC->_L5 = cockpitAnzeige_EPBMode_Manuell;
  _338_noname = outC->_L5;
  outC->_L4 = cockpitAnzeige_Hold;
  _337_noname = outC->_L4;
  outC->_L3 = cockpitAnzeige_AutoHoldMode;
  _336_noname = outC->_L3;
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_gezogen_SM1 :
      outC->init = kcg_false;
      break;
    case SSM_st_autoHoldEinschalten_SM1 :
      outC->init1 = kcg_false;
      break;
    case SSM_st_Notbremse_SM1 :
      outC->init2 = kcg_false;
      break;
    case SSM_st_NotbremsungAusloesen_SM1 :
      outC->init3 = kcg_false;
      break;
    case SSM_st_fahren_SM1 :
      outC->init4 = kcg_false;
      break;
    case SSM_st_anfahren_SM1 :
      outC->init6 = kcg_false;
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          outC->init5 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_EPB_arretiert_SM1 :
      outC->init7 = kcg_false;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      outC->init8 = kcg_false;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->init9 = kcg_false;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      outC->init10 = kcg_false;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      outC->init11 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void autoModus_Notbremsung_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L4 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L3 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->ready = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Start_SM1;
  outC->SM1_state_sel = SSM_st_Start_SM1;
  outC->_L1_EPB_gezogen_SM1 = kcg_true;
  outC->_L2_EPB_gezogen_SM1 = kcg_true;
  outC->_L3_EPB_gezogen_SM1 = kcg_true;
  outC->_L4_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L6_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L7_EPB_gezogen_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L8_EPB_gezogen_SM1 = kcg_true;
  outC->_L9_EPB_gezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L10_EPB_gezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L33_EPB_gezogen_SM1 = kcg_true;
  outC->_L32_EPB_gezogen_SM1 = kcg_lit_float64(0.0);
  outC->_L30_EPB_gezogen_SM1 = kcg_true;
  outC->_L31_EPB_gezogen_SM1 = kcg_true;
  outC->_L29_EPB_gezogen_SM1 = kcg_true;
  outC->_L28_EPB_gezogen_SM1 = kcg_lit_float64(0.0);
  outC->_L2_Fzg_Abstellen_SM1 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L1_EPB_gedrueckt_SM1 = kcg_true;
  outC->_L2_EPB_gedrueckt_SM1 = kcg_true;
  outC->_L3_EPB_gedrueckt_SM1 = kcg_true;
  outC->_L4_EPB_gedrueckt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L5_EPB_gedrueckt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L6_EPB_gedrueckt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L7_EPB_gedrueckt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L8_EPB_gedrueckt_SM1 = kcg_true;
  outC->_L9_EPB_gedrueckt_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L10_EPB_gedrueckt_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L1_EPB_druecken_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
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
  outC->_L1_Fuss_vom_Gas_SM6_Notbremse_SM1 = kcg_lit_float64(0.0);
  outC->_L1_EPB_angezogen_SM6_Notbremse_SM1 = kcg_true;
  outC->_L2_EPB_angezogen_SM6_Notbremse_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_angezogen_SM6_Notbremse_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->SM6_clock_Notbremse_SM1 = SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
  outC->SM6_state_sel_Notbremse_SM1 = SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
  outC->SM6_state_act_Notbremse_SM1 = SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
  outC->SM6_fired_strong_Notbremse_SM1 = SSM_TR_no_trans_SM6_Notbremse_SM1;
  outC->SM6_fired_Notbremse_SM1 = SSM_TR_no_trans_SM6_Notbremse_SM1;
  outC->_L1_NotbremsungAusloesen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
  outC->_L7_NotbremsungAusloesen_SM1 = kcg_lit_float64(0.0);
  outC->_L4_NotbremsungAusloesen_SM1 = kcg_true;
  outC->_L5_NotbremsungAusloesen_SM1 = kcg_true;
  outC->_L3_NotbremsungAusloesen_SM1 = kcg_true;
  outC->_L2_NotbremsungAusloesen_SM1 = kcg_true;
  outC->_L8_NotbremsungAusloesen_SM1 = kcg_lit_float64(0.0);
  outC->_L6_fahren_SM1 = kcg_true;
  outC->_L5_fahren_SM1 = kcg_true;
  outC->_L4_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_fahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_fahren_SM1 = kcg_true;
  outC->_L2_fahren_SM1 = kcg_true;
  outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
  outC->_L1_bremspedalTreten_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L8_gasGeben_SM2_anfahren_SM1 = kcg_true;
  outC->_L2_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
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
  outC->SM4_state_nxt_autoHoldEinschalten_SM1 =
    SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
  outC->SM4_reset_act_autoHoldEinschalten_SM1 = kcg_true;
  outC->SM4_reset_nxt_autoHoldEinschalten_SM1 = kcg_true;
  outC->SM6_state_nxt_Notbremse_SM1 = SSM_st_Fuss_vom_Gas_SM6_Notbremse_SM1;
  outC->SM6_reset_act_Notbremse_SM1 = kcg_true;
  outC->SM6_reset_nxt_Notbremse_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_reset_act_anfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_anfahren_SM1 = kcg_true;
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
  /* SM1:NotbremsungAusloesen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
  /* SM1:EPB_gezogen:_L30=(AhTypes_Pkg::utils_Pkg::countDownTimer#23)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_23);
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
void autoModus_Notbremsung_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer *outC)
{
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
  /* SM1:NotbremsungAusloesen:_L4=(AhTypes_Pkg::utils_Pkg::countDownTimer#10)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_10);
  /* SM1:EPB_gezogen:_L30=(AhTypes_Pkg::utils_Pkg::countDownTimer#23)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_23);
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
** autoModus_Notbremsung_AH_testSuite_Pkg_divFahrer.c
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

