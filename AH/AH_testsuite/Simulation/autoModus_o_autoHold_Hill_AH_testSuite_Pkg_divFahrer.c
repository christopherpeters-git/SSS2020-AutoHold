/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer.h"

/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold_gefaelle/ */
void autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer(
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
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC)
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _6_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _7_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _8_error_partial;
  /* ready/ */
  kcg_bool _9_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _10_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _11_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _12_SM1_fired_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _13_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _14_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _15_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _16_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _17_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _18_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _19_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _20_error_partial;
  /* ready/ */
  kcg_bool _21_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _22_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _23_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _24_SM1_fired_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _25_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _26_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _27_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _28_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _29_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _30_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _31_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _32_error_partial;
  /* ready/ */
  kcg_bool _33_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _34_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _35_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _36_SM1_fired_partial;
  kcg_bool noname;
  /* SM1:automastikModusEinstellen:<1> */
  kcg_bool tr_1_guard_automastikModusEinstellen_SM1;
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
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _43_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _44_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _45_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _46_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _47_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _48_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _49_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _50_error_partial;
  /* ready/ */
  kcg_bool _51_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _52_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _53_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _54_SM1_fired_partial;
  /* SM1:automatikModusEingestellt:<1> */
  kcg_bool tr_1_guard_automatikModusEingestellt_SM1;
  kcg_bool _55_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _56_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _57_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _58_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _59_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _60_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _61_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _62_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _63_error_partial;
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
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _69_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _70_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _71_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _72_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _73_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _74_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _75_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _76_error_partial;
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
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _81_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _82_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _83_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _84_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _85_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _86_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _87_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _88_error_partial;
  /* ready/ */
  kcg_bool _89_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _90_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _91_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _92_SM1_fired_partial;
  /* SM1:EPB_angezogen:<1> */
  kcg_bool tr_1_guard_EPB_angezogen_SM1;
  kcg_bool _93_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _94_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _95_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _96_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _97_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _98_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _99_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _100_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _101_error_partial;
  /* ready/ */
  kcg_bool _102_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _103_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _104_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _105_SM1_fired_partial;
  /* SM1:anfahrenVorbereiten:<1> */
  kcg_bool tr_1_guard_anfahrenVorbereiten_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _106_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _107_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _108_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _109_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _110_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _111_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _112_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _113_error_partial;
  /* ready/ */
  kcg_bool _114_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _115_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _116_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _117_SM1_fired_partial;
  /* SM1:EPB_arretiert_und_HHVentil_frei:<1> */
  kcg_bool tr_1_guard_EPB_arretiert_und_HHVentil_frei_SM1;
  kcg_bool _118_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _119_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _120_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _121_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _122_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _123_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _124_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _125_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _126_error_partial;
  /* ready/ */
  kcg_bool _127_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _128_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _129_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _130_SM1_fired_partial;
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
  kcg_bool _131_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _132_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _133_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _134_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _135_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _136_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _137_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _138_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _139_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _140_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _141_getriebeWahlhebel_partial;
  /* SM1:anfahren:SM2:bremspedalTreten:<1> */
  kcg_bool tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_TR_SM2_anfahren_SM1 _142_SM2_fired_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  kcg_bool _143_SM2_reset_nxt_partial_anfahren_SM1;
  /* SM1:anfahren:SM2: */
  SSM_ST_SM2_anfahren_SM1 _144_SM2_state_nxt_partial_anfahren_SM1;
  /* ready/ */
  kcg_bool _145_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _146_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _147_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _148_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _149_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _150_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _151_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _152_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _153_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _154_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _155_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _156_error_partial;
  /* ready/ */
  kcg_bool _157_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _158_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _159_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _160_SM1_fired_partial;
  /* SM1:fahren:<1> */
  kcg_bool tr_1_guard_fahren_SM1;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _161_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _162_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _163_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _164_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _165_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _166_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _167_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _168_error_partial;
  /* ready/ */
  kcg_bool _169_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _170_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _171_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _172_SM1_fired_partial;
  /* SM1:haltenAmBerg:<1> */
  kcg_bool tr_1_guard_haltenAmBerg_SM1;
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _178_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _179_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _180_error_partial;
  /* ready/ */
  kcg_bool _181_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _182_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _183_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _184_SM1_fired_partial;
  /* SM1:fzg_Steht_HHVentil_gesperrt:<1> */
  kcg_bool tr_1_guard_fzg_Steht_HHVentil_gesperrt_SM1;
  kcg_bool _185_noname;
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _191_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _192_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _193_error_partial;
  /* ready/ */
  kcg_bool _194_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _195_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _196_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _197_SM1_fired_partial;
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
  kcg_bool _198_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _199_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _200_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _201_getriebeWahlhebel_partial;
  /* SM1:erneutAnfahren:SM2:getriebe_auf_D:<1> */
  kcg_bool tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _202_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _203_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _204_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _205_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _206_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _207_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _208_getriebeWahlhebel_partial;
  /* SM1:erneutAnfahren:SM2:bremspedalTreten:<1> */
  kcg_bool _209_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_TR_SM2_erneutAnfahren_SM1 _210_SM2_fired_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  kcg_bool _211_SM2_reset_nxt_partial_erneutAnfahren_SM1;
  /* SM1:erneutAnfahren:SM2: */
  SSM_ST_SM2_erneutAnfahren_SM1 _212_SM2_state_nxt_partial_erneutAnfahren_SM1;
  /* ready/ */
  kcg_bool _213_ready_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _214_bremspedalKraft_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _215_gaspedalStellung_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _216_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _217_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _218_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _219_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _220_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _221_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _222_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _223_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _224_error_partial;
  /* ready/ */
  kcg_bool _225_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _226_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _227_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _228_SM1_fired_partial;
  /* SM1:anhaltenZumBeenden:<1> */
  kcg_bool tr_1_guard_anhaltenZumBeenden_SM1;
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _234_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _235_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _236_error_partial;
  /* ready/ */
  kcg_bool _237_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _238_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _239_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _240_SM1_fired_partial;
  /* SM1:fzgSteht:<1> */
  kcg_bool tr_1_guard_fzgSteht_SM1;
  kcg_bool _241_noname;
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _247_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _248_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _249_error_partial;
  /* ready/ */
  kcg_bool _250_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _251_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _252_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _253_SM1_fired_partial;
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
  kcg_bool _254_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _255_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _256_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:getriebeWahlhebelNach_P:<1> */
  kcg_bool tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _257_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _258_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _259_SM5_state_nxt_partial_parken_SM1;
  /* error/ */
  kcg_bool _260_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _261_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _262_getriebeWahlhebel_partial;
  /* SM1:parken:SM5:bremseDurchtreten:<1> */
  kcg_bool tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_TR_SM5_parken_SM1 _263_SM5_fired_partial_parken_SM1;
  /* SM1:parken:SM5: */
  kcg_bool _264_SM5_reset_nxt_partial_parken_SM1;
  /* SM1:parken:SM5: */
  SSM_ST_SM5_parken_SM1 _265_SM5_state_nxt_partial_parken_SM1;
  /* error/ */
  kcg_bool _266_error_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _267_bremspedalKraft_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _268_getriebeWahlhebel_partial;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _269_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _270_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _271_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _272_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _273_taste_P_partial;
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _274_gaspedalStellung_partial;
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
  /* SM1:weiterfahren:<1> */
  kcg_bool tr_1_guard_weiterfahren_SM1;
  kcg_bool _281_noname;
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg _282_zuendschalter_partial;
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg _283_getriebeWahlhebel_partial;
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg _284_fahrertuerSchalter_partial;
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg _285_sicherheitsgurtSchalter_partial;
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg _286_taste_P_partial;
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
  /* SM1:Bremspedal_loesen:<1> */
  kcg_bool tr_1_guard_Bremspedal_loesen_SM1;
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
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg _299_gaspedalStellung_partial;
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg _300_bremspedalKraft_partial;
  /* error/ */
  kcg_bool _301_error_partial;
  /* ready/ */
  kcg_bool _302_ready_partial;
  /* SM1: */
  SSM_ST_SM1 _303_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _304_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _305_SM1_fired_partial;
  /* SM1:Bremsen:<1> */
  kcg_bool tr_1_guard_Bremsen_SM1;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:Start:<1> */
  kcg_bool tr_1_guard_Start_SM1;
  /* SM1: */
  SSM_ST_SM1 _306_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _307_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _308_SM1_fired_strong_partial;
  /* SM1:zuendungEinschalten:<1> */
  kcg_bool tr_1_guard_zuendungEinschalten_SM1;
  /* SM1: */
  SSM_ST_SM1 _309_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _310_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _311_SM1_fired_strong_partial;
  /* SM1:bremspedalDurchtreten:<1> */
  kcg_bool tr_1_guard_bremspedalDurchtreten_SM1;
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
  /* SM1: */
  SSM_ST_SM1 _336_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _337_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _338_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _339_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _340_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _341_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _342_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _343_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _344_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _345_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _346_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _347_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _348_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _349_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _350_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _351_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _352_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _353_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _354_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _355_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _356_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _357_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _358_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _359_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _360_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _361_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _362_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _363_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _364_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _365_SM1_fired_strong_partial;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _366_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _367_noname;
  on_off_element_T_AhTypes_Pkg_ah_Pkg _368_noname;
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
  outC->_L15 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->taste_Hold = outC->_L15;
  outC->_L14 = cockpitAnzeige_EPBMode_Manuell;
  _368_noname = outC->_L14;
  outC->_L13 = cockpitAnzeige_P;
  _367_noname = outC->_L13;
  outC->_L12 = led_P;
  _366_noname = outC->_L12;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Bremsen_SM1 :
      _363_SM1_state_act_partial = SSM_st_Bremsen_SM1;
      outC->SM1_state_act = _363_SM1_state_act_partial;
      break;
    case SSM_st_Bremspedal_loesen_SM1 :
      _360_SM1_state_act_partial = SSM_st_Bremspedal_loesen_SM1;
      outC->SM1_state_act = _360_SM1_state_act_partial;
      break;
    case SSM_st_weiterfahren_SM1 :
      _357_SM1_state_act_partial = SSM_st_weiterfahren_SM1;
      outC->SM1_state_act = _357_SM1_state_act_partial;
      break;
    case SSM_st_parken_SM1 :
      _354_SM1_state_act_partial = SSM_st_parken_SM1;
      outC->SM1_state_act = _354_SM1_state_act_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _351_SM1_state_act_partial = SSM_st_fzgSteht_SM1;
      outC->SM1_state_act = _351_SM1_state_act_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _348_SM1_state_act_partial = SSM_st_anhaltenZumBeenden_SM1;
      outC->SM1_state_act = _348_SM1_state_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _345_SM1_state_act_partial = SSM_st_erneutAnfahren_SM1;
      outC->SM1_state_act = _345_SM1_state_act_partial;
      break;
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      _342_SM1_state_act_partial = SSM_st_fzg_Steht_HHVentil_gesperrt_SM1;
      outC->SM1_state_act = _342_SM1_state_act_partial;
      break;
    case SSM_st_haltenAmBerg_SM1 :
      _339_SM1_state_act_partial = SSM_st_haltenAmBerg_SM1;
      outC->SM1_state_act = _339_SM1_state_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _336_SM1_state_act_partial = SSM_st_fahren_SM1;
      outC->SM1_state_act = _336_SM1_state_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _333_SM1_state_act_partial = SSM_st_anfahren_SM1;
      outC->SM1_state_act = _333_SM1_state_act_partial;
      break;
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      _330_SM1_state_act_partial = SSM_st_EPB_arretiert_und_HHVentil_frei_SM1;
      outC->SM1_state_act = _330_SM1_state_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _327_SM1_state_act_partial = SSM_st_anfahrenVorbereiten_SM1;
      outC->SM1_state_act = _327_SM1_state_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _324_SM1_state_act_partial = SSM_st_EPB_angezogen_SM1;
      outC->SM1_state_act = _324_SM1_state_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _321_SM1_state_act_partial = SSM_st_betriebsbremseLoesen_SM1;
      outC->SM1_state_act = _321_SM1_state_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _318_SM1_state_act_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      outC->SM1_state_act = _318_SM1_state_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _315_SM1_state_act_partial = SSM_st_automatikModusEingestellt_SM1;
      outC->SM1_state_act = _315_SM1_state_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _312_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      outC->SM1_state_act = _312_SM1_state_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      tr_1_guard_bremspedalDurchtreten_SM1 = aktZeit >= kcg_lit_float64(3.0);
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _309_SM1_state_act_partial = SSM_st_automastikModusEinstellen_SM1;
      }
      else {
        _309_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      outC->SM1_state_act = _309_SM1_state_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      tr_1_guard_zuendungEinschalten_SM1 = aktZeit >= kcg_lit_float64(2.0);
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _306_SM1_state_act_partial = SSM_st_bremspedalDurchtreten_SM1;
      }
      else {
        _306_SM1_state_act_partial = SSM_st_zuendungEinschalten_SM1;
      }
      outC->SM1_state_act = _306_SM1_state_act_partial;
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
    case SSM_st_Bremsen_SM1 :
      _302_ready_partial = kcg_false;
      _301_error_partial = last_error;
      _298_taste_P_partial = last_taste_P;
      _297_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _296_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _295_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _294_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_Bremsen_SM1 = kcg_true;
      if (tr_1_guard_Bremsen_SM1) {
        _305_SM1_fired_partial = SSM_TR_Bremsen_fzgSteht_1_Bremsen_SM1;
      }
      else {
        _305_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _304_SM1_reset_nxt_partial = tr_1_guard_Bremsen_SM1;
      if (tr_1_guard_Bremsen_SM1) {
        _303_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      }
      else {
        _303_SM1_state_nxt_partial = SSM_st_Bremsen_SM1;
      }
      outC->_L2_Bremsen_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _300_bremspedalKraft_partial = outC->_L2_Bremsen_SM1;
      outC->_L1_Bremsen_SM1 = cGaspedalLosgelassen_AhTypes_Pkg_ah_Pkg;
      _299_gaspedalStellung_partial = outC->_L1_Bremsen_SM1;
      break;
    case SSM_st_Bremspedal_loesen_SM1 :
      _290_ready_partial = kcg_false;
      _289_error_partial = last_error;
      _287_gaspedalStellung_partial = last_gaspedalStellung;
      _286_taste_P_partial = last_taste_P;
      _285_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _284_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _283_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _282_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_Bremspedal_loesen_SM1 = kcg_true;
      if (tr_1_guard_Bremspedal_loesen_SM1) {
        _293_SM1_fired_partial =
          SSM_TR_Bremspedal_loesen_fzg_Steht_HHVentil_gesperrt_1_Bremspedal_loesen_SM1;
      }
      else {
        _293_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _292_SM1_reset_nxt_partial = tr_1_guard_Bremspedal_loesen_SM1;
      if (tr_1_guard_Bremspedal_loesen_SM1) {
        _291_SM1_state_nxt_partial = SSM_st_fzg_Steht_HHVentil_gesperrt_SM1;
      }
      else {
        _291_SM1_state_nxt_partial = SSM_st_Bremspedal_loesen_SM1;
      }
      outC->_L1_Bremspedal_loesen_SM1 = kcg_lit_float64(0.0);
      _288_bremspedalKraft_partial = outC->_L1_Bremspedal_loesen_SM1;
      break;
    case SSM_st_weiterfahren_SM1 :
      _275_bremspedalKraft_partial = last_bremspedalKraft;
      _274_gaspedalStellung_partial = last_gaspedalStellung;
      _273_taste_P_partial = last_taste_P;
      _272_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _271_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _270_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _269_zuendschalter_partial = last_zuendschalter;
      outC->_L5_weiterfahren_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_weiterfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_weiterfahren_SM1 :
      /* SM1:weiterfahren:_L6= */
      if (outC->init) {
        outC->_L6_weiterfahren_SM1 = kcg_true;
      }
      else {
        outC->_L6_weiterfahren_SM1 = outC->_L5_weiterfahren_SM1;
      }
      outC->_L4_weiterfahren_SM1 = aktZeit;
      outC->_L3_weiterfahren_SM1 = kcg_lit_float64(40.) *
        c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_weiterfahren_SM1 :
      if (SM1_reset_sel) {
        /* SM1:weiterfahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_8);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_weiterfahren_SM1 :
      /* SM1:weiterfahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L6_weiterfahren_SM1,
        outC->_L5_weiterfahren_SM1,
        outC->_L4_weiterfahren_SM1,
        outC->_L3_weiterfahren_SM1,
        &outC->Context_countDownTimer_8);
      outC->_L1_weiterfahren_SM1 = outC->Context_countDownTimer_8.abgelaufen;
      outC->_L2_weiterfahren_SM1 = outC->Context_countDownTimer_8.laufend;
      _277_ready_partial = outC->_L1_weiterfahren_SM1;
      tr_1_guard_weiterfahren_SM1 = _277_ready_partial;
      if (tr_1_guard_weiterfahren_SM1) {
        _280_SM1_fired_partial =
          SSM_TR_weiterfahren_anhaltenZumBeenden_1_weiterfahren_SM1;
      }
      else {
        _280_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _279_SM1_reset_nxt_partial = tr_1_guard_weiterfahren_SM1;
      if (tr_1_guard_weiterfahren_SM1) {
        _278_SM1_state_nxt_partial = SSM_st_anhaltenZumBeenden_SM1;
      }
      else {
        _278_SM1_state_nxt_partial = SSM_st_weiterfahren_SM1;
      }
      outC->_L8_weiterfahren_SM1 = bbs_gesperrt_AhTypes_Pkg_ah_Pkg;
      outC->_L7_weiterfahren_SM1 = betriebsbremssperrventil;
      outC->_L9_weiterfahren_SM1 = outC->_L7_weiterfahren_SM1 ==
        outC->_L8_weiterfahren_SM1;
      _276_error_partial = outC->_L9_weiterfahren_SM1;
      _281_noname = outC->_L2_weiterfahren_SM1;
      break;
    case SSM_st_parken_SM1 :
      _250_ready_partial = kcg_false;
      _247_gaspedalStellung_partial = last_gaspedalStellung;
      _246_taste_P_partial = last_taste_P;
      _245_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _244_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _242_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_Bremsen_SM1 :
      _365_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _365_SM1_fired_strong_partial;
      break;
    case SSM_st_Bremspedal_loesen_SM1 :
      _362_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _362_SM1_fired_strong_partial;
      break;
    case SSM_st_weiterfahren_SM1 :
      _359_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _359_SM1_fired_strong_partial;
      break;
    case SSM_st_parken_SM1 :
      _356_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _356_SM1_fired_strong_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _353_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _353_SM1_fired_strong_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _350_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _350_SM1_fired_strong_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _347_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _347_SM1_fired_strong_partial;
      break;
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      _344_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _344_SM1_fired_strong_partial;
      break;
    case SSM_st_haltenAmBerg_SM1 :
      _341_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _341_SM1_fired_strong_partial;
      break;
    case SSM_st_fahren_SM1 :
      _338_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _338_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _335_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _335_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      _332_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _332_SM1_fired_strong_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _329_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _329_SM1_fired_strong_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _326_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _326_SM1_fired_strong_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _323_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _323_SM1_fired_strong_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _320_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _320_SM1_fired_strong_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _317_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _317_SM1_fired_strong_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _314_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _314_SM1_fired_strong_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      if (tr_1_guard_bremspedalDurchtreten_SM1) {
        _311_SM1_fired_strong_partial =
          SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1;
      }
      else {
        _311_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _311_SM1_fired_strong_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      if (tr_1_guard_zuendungEinschalten_SM1) {
        _308_SM1_fired_strong_partial =
          SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1;
      }
      else {
        _308_SM1_fired_strong_partial = _11_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _308_SM1_fired_strong_partial;
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
      _253_SM1_fired_partial = outC->SM1_fired_strong;
      _252_SM1_reset_nxt_partial = kcg_false;
      _251_SM1_state_nxt_partial = SSM_st_parken_SM1;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_parken_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_parken_SM1 :
      /* SM1:parken:SM5: */
      if (outC->init1) {
        outC->SM5_state_sel_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
      }
      else {
        outC->SM5_state_sel_parken_SM1 = outC->SM5_state_nxt_parken_SM1;
      }
      outC->SM5_state_act_parken_SM1 = outC->SM5_state_sel_parken_SM1;
      outC->SM5_clock_parken_SM1 = outC->SM5_state_act_parken_SM1;
      switch (outC->SM5_clock_parken_SM1) {
        case SSM_st_EPB_angezogen_SM5_parken_SM1 :
          _255_bremspedalKraft_partial = last_bremspedalKraft;
          _256_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          _254_error_partial = outC->_L3_EPB_angezogen_SM5_parken_SM1;
          _243_getriebeWahlhebel_partial = _256_getriebeWahlhebel_partial;
          _248_bremspedalKraft_partial = _255_bremspedalKraft_partial;
          _249_error_partial = _254_error_partial;
          outC->SM5_state_nxt_parken_SM1 = SM5_state_nxt_partial_parken_SM1;
          break;
        case SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1 :
          _260_error_partial = last_error;
          _261_bremspedalKraft_partial = last_bremspedalKraft;
          tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _257_SM5_fired_partial_parken_SM1 =
              SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _257_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _258_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1;
          if (tr_1_guard_getriebeWahlhebelNach_P_SM5_parken_SM1) {
            _259_SM5_state_nxt_partial_parken_SM1 = SSM_st_EPB_angezogen_SM5_parken_SM1;
          }
          else {
            _259_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1 =
            getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
          _262_getriebeWahlhebel_partial =
            outC->_L1_getriebeWahlhebelNach_P_SM5_parken_SM1;
          _243_getriebeWahlhebel_partial = _262_getriebeWahlhebel_partial;
          _248_bremspedalKraft_partial = _261_bremspedalKraft_partial;
          _249_error_partial = _260_error_partial;
          outC->SM5_state_nxt_parken_SM1 = _259_SM5_state_nxt_partial_parken_SM1;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          _266_error_partial = last_error;
          _268_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremseDurchtreten_SM5_parken_SM1 = kcg_true;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _263_SM5_fired_partial_parken_SM1 =
              SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1;
          }
          else {
            _263_SM5_fired_partial_parken_SM1 = SSM_TR_no_trans_SM5_parken_SM1;
          }
          _264_SM5_reset_nxt_partial_parken_SM1 =
            tr_1_guard_bremseDurchtreten_SM5_parken_SM1;
          if (tr_1_guard_bremseDurchtreten_SM5_parken_SM1) {
            _265_SM5_state_nxt_partial_parken_SM1 =
              SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1;
          }
          else {
            _265_SM5_state_nxt_partial_parken_SM1 = SSM_st_bremseDurchtreten_SM5_parken_SM1;
          }
          outC->_L1_bremseDurchtreten_SM5_parken_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _267_bremspedalKraft_partial = outC->_L1_bremseDurchtreten_SM5_parken_SM1;
          _243_getriebeWahlhebel_partial = _268_getriebeWahlhebel_partial;
          _248_bremspedalKraft_partial = _267_bremspedalKraft_partial;
          _249_error_partial = _266_error_partial;
          outC->SM5_state_nxt_parken_SM1 = _265_SM5_state_nxt_partial_parken_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init1) {
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
          outC->SM5_reset_nxt_parken_SM1 = _258_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _257_SM5_fired_partial_parken_SM1;
          break;
        case SSM_st_bremseDurchtreten_SM5_parken_SM1 :
          outC->SM5_reset_nxt_parken_SM1 = _264_SM5_reset_nxt_partial_parken_SM1;
          outC->SM5_fired_parken_SM1 = _263_SM5_fired_partial_parken_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:parken:SM5: */
      if (outC->init1) {
        SM5_reset_prv_parken_SM1 = kcg_false;
      }
      else {
        SM5_reset_prv_parken_SM1 = outC->SM5_reset_act_parken_SM1;
      }
      outC->SM5_reset_act_parken_SM1 = kcg_false;
      break;
    case SSM_st_fzgSteht_SM1 :
      _235_bremspedalKraft_partial = last_bremspedalKraft;
      _234_gaspedalStellung_partial = last_gaspedalStellung;
      _233_taste_P_partial = last_taste_P;
      _232_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _231_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _230_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _229_zuendschalter_partial = last_zuendschalter;
      outC->_L5_fzgSteht_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzgSteht_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L8= */
      if (outC->init2) {
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
        /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_7);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzgSteht_SM1 :
      /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzgSteht_SM1,
        outC->_L5_fzgSteht_SM1,
        outC->_L7_fzgSteht_SM1,
        outC->_L6_fzgSteht_SM1,
        &outC->Context_countDownTimer_7);
      outC->_L9_fzgSteht_SM1 = outC->Context_countDownTimer_7.abgelaufen;
      outC->_L10_fzgSteht_SM1 = outC->Context_countDownTimer_7.laufend;
      _237_ready_partial = outC->_L9_fzgSteht_SM1;
      tr_1_guard_fzgSteht_SM1 = _237_ready_partial;
      if (tr_1_guard_fzgSteht_SM1) {
        _240_SM1_fired_partial = SSM_TR_fzgSteht_parken_1_fzgSteht_SM1;
      }
      else {
        _240_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _239_SM1_reset_nxt_partial = tr_1_guard_fzgSteht_SM1;
      if (tr_1_guard_fzgSteht_SM1) {
        _238_SM1_state_nxt_partial = SSM_st_parken_SM1;
      }
      else {
        _238_SM1_state_nxt_partial = SSM_st_fzgSteht_SM1;
      }
      outC->_L57_fzgSteht_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      outC->_L54_fzgSteht_SM1 = betriebsBremse;
      outC->_L55_fzgSteht_SM1 = outC->_L54_fzgSteht_SM1 > outC->_L57_fzgSteht_SM1;
      outC->_L42_fzgSteht_SM1 = cockpitAnzeige_AutoHoldMode;
      outC->_L35_fzgSteht_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
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
      _241_noname = outC->_L10_fzgSteht_SM1;
      _236_error_partial = outC->_L36_fzgSteht_SM1;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _221_taste_P_partial = last_taste_P;
      _220_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _219_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _218_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _217_zuendschalter_partial = last_zuendschalter;
      outC->_L15_anhaltenZumBeenden_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L16_anhaltenZumBeenden_SM1 = v_fzg;
      outC->_L17_anhaltenZumBeenden_SM1 = outC->_L16_anhaltenZumBeenden_SM1 >
        outC->_L15_anhaltenZumBeenden_SM1;
      outC->_L24_anhaltenZumBeenden_SM1 = !outC->_L17_anhaltenZumBeenden_SM1;
      _225_ready_partial = outC->_L24_anhaltenZumBeenden_SM1;
      tr_1_guard_anhaltenZumBeenden_SM1 = _225_ready_partial;
      if (tr_1_guard_anhaltenZumBeenden_SM1) {
        _228_SM1_fired_partial =
          SSM_TR_anhaltenZumBeenden_Bremsen_1_anhaltenZumBeenden_SM1;
      }
      else {
        _228_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _227_SM1_reset_nxt_partial = tr_1_guard_anhaltenZumBeenden_SM1;
      if (tr_1_guard_anhaltenZumBeenden_SM1) {
        _226_SM1_state_nxt_partial = SSM_st_Bremsen_SM1;
      }
      else {
        _226_SM1_state_nxt_partial = SSM_st_anhaltenZumBeenden_SM1;
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
      _224_error_partial = outC->_L18_anhaltenZumBeenden_SM1;
      _223_bremspedalKraft_partial = outC->_L25_anhaltenZumBeenden_SM1;
      outC->_L9_anhaltenZumBeenden_SM1 = kcg_lit_float64(0.0);
      _222_gaspedalStellung_partial = outC->_L9_anhaltenZumBeenden_SM1;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _193_error_partial = last_error;
      _190_taste_P_partial = last_taste_P;
      _189_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _188_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _186_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_erneutAnfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init4 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_erneutAnfahren_SM1 :
      /* SM1:erneutAnfahren:SM2: */
      if (outC->init4) {
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
      if (outC->init4) {
        SM2_reset_sel_erneutAnfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_erneutAnfahren_SM1 = outC->SM2_reset_nxt_erneutAnfahren_SM1;
      }
      switch (outC->SM2_state_sel_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          if (SM2_reset_sel_erneutAnfahren_SM1) {
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
    case SSM_st_erneutAnfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init3 = kcg_true;
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
          if (outC->init3) {
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 =
              outC->_L4_gasGeben_SM2_erneutAnfahren_SM1;
          }
          outC->_L5_gasGeben_SM2_erneutAnfahren_SM1 =
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1 >=
            outC->_L6_gasGeben_SM2_erneutAnfahren_SM1;
          _198_ready_partial = outC->_L5_gasGeben_SM2_erneutAnfahren_SM1;
          _194_ready_partial = _198_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _205_ready_partial = kcg_false;
          _194_ready_partial = _205_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_false;
          _213_ready_partial = outC->_L2_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _194_ready_partial = _213_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_erneutAnfahren_SM1 = _194_ready_partial;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _197_SM1_fired_partial =
          SSM_TR_erneutAnfahren_weiterfahren_1_erneutAnfahren_SM1;
      }
      else {
        _197_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _196_SM1_reset_nxt_partial = tr_1_guard_erneutAnfahren_SM1;
      if (tr_1_guard_erneutAnfahren_SM1) {
        _195_SM1_state_nxt_partial = SSM_st_weiterfahren_SM1;
      }
      else {
        _195_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          _201_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          _199_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_erneutAnfahren_SM1;
          outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 =
            outC->_L2_gasGeben_SM2_erneutAnfahren_SM1 +
            outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _200_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_erneutAnfahren_SM1;
          _187_getriebeWahlhebel_partial = _201_getriebeWahlhebel_partial;
          _191_gaspedalStellung_partial = _200_gaspedalStellung_partial;
          _192_bremspedalKraft_partial = _199_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1 :
          _206_bremspedalKraft_partial = last_bremspedalKraft;
          _207_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _202_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _202_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _203_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_erneutAnfahren_SM1) {
            _204_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_gasGeben_SM2_erneutAnfahren_SM1;
          }
          else {
            _204_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1 =
            getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _208_getriebeWahlhebel_partial =
            outC->_L1_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          _187_getriebeWahlhebel_partial = _208_getriebeWahlhebel_partial;
          _191_gaspedalStellung_partial = _207_gaspedalStellung_partial;
          _192_bremspedalKraft_partial = _206_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _204_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _203_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _202_SM2_fired_partial_erneutAnfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1 :
          _215_gaspedalStellung_partial = last_gaspedalStellung;
          _216_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          _209_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1 = kcg_true;
          if (_209_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _210_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          else {
            _210_SM2_fired_partial_erneutAnfahren_SM1 =
              SSM_TR_no_trans_SM2_erneutAnfahren_SM1;
          }
          _211_SM2_reset_nxt_partial_erneutAnfahren_SM1 =
            _209_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1;
          if (_209_tr_1_guard_bremspedalTreten_SM2_erneutAnfahren_SM1) {
            _212_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1;
          }
          else {
            _212_SM2_state_nxt_partial_erneutAnfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _214_bremspedalKraft_partial =
            outC->_L1_bremspedalTreten_SM2_erneutAnfahren_SM1;
          _187_getriebeWahlhebel_partial = _216_getriebeWahlhebel_partial;
          _191_gaspedalStellung_partial = _215_gaspedalStellung_partial;
          _192_bremspedalKraft_partial = _214_bremspedalKraft_partial;
          outC->SM2_state_nxt_erneutAnfahren_SM1 =
            _212_SM2_state_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_reset_nxt_erneutAnfahren_SM1 =
            _211_SM2_reset_nxt_partial_erneutAnfahren_SM1;
          outC->SM2_fired_erneutAnfahren_SM1 = _210_SM2_fired_partial_erneutAnfahren_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:erneutAnfahren:SM2: */
      if (outC->init4) {
        SM2_reset_prv_erneutAnfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_erneutAnfahren_SM1 = outC->SM2_reset_act_erneutAnfahren_SM1;
      }
      outC->SM2_reset_act_erneutAnfahren_SM1 = kcg_false;
      break;
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      _179_bremspedalKraft_partial = last_bremspedalKraft;
      _178_gaspedalStellung_partial = last_gaspedalStellung;
      _177_taste_P_partial = last_taste_P;
      _176_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _175_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _174_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _173_zuendschalter_partial = last_zuendschalter;
      outC->_L5_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      if (SM1_reset_sel) {
        outC->init5 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      /* SM1:fzg_Steht_HHVentil_gesperrt:_L8= */
      if (outC->init5) {
        outC->_L8_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
      }
      else {
        outC->_L8_fzg_Steht_HHVentil_gesperrt_SM1 =
          outC->_L5_fzg_Steht_HHVentil_gesperrt_SM1;
      }
      outC->_L7_fzg_Steht_HHVentil_gesperrt_SM1 = aktZeit;
      outC->_L6_fzg_Steht_HHVentil_gesperrt_SM1 =
        c_1s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      if (SM1_reset_sel) {
        /* SM1:fzg_Steht_HHVentil_gesperrt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_6);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      /* SM1:fzg_Steht_HHVentil_gesperrt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L8_fzg_Steht_HHVentil_gesperrt_SM1,
        outC->_L5_fzg_Steht_HHVentil_gesperrt_SM1,
        outC->_L7_fzg_Steht_HHVentil_gesperrt_SM1,
        outC->_L6_fzg_Steht_HHVentil_gesperrt_SM1,
        &outC->Context_countDownTimer_6);
      outC->_L9_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->Context_countDownTimer_6.abgelaufen;
      outC->_L10_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->Context_countDownTimer_6.laufend;
      _181_ready_partial = outC->_L9_fzg_Steht_HHVentil_gesperrt_SM1;
      tr_1_guard_fzg_Steht_HHVentil_gesperrt_SM1 = _181_ready_partial;
      if (tr_1_guard_fzg_Steht_HHVentil_gesperrt_SM1) {
        _184_SM1_fired_partial =
          SSM_TR_fzg_Steht_HHVentil_gesperrt_erneutAnfahren_1_fzg_Steht_HHVentil_gesperrt_SM1;
      }
      else {
        _184_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _183_SM1_reset_nxt_partial = tr_1_guard_fzg_Steht_HHVentil_gesperrt_SM1;
      if (tr_1_guard_fzg_Steht_HHVentil_gesperrt_SM1) {
        _182_SM1_state_nxt_partial = SSM_st_erneutAnfahren_SM1;
      }
      else {
        _182_SM1_state_nxt_partial = SSM_st_fzg_Steht_HHVentil_gesperrt_SM1;
      }
      outC->_L21_fzg_Steht_HHVentil_gesperrt_SM1 = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      outC->_L17_fzg_Steht_HHVentil_gesperrt_SM1 = v_fzg;
      outC->_L20_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->_L17_fzg_Steht_HHVentil_gesperrt_SM1 >
        outC->_L21_fzg_Steht_HHVentil_gesperrt_SM1;
      outC->_L15_fzg_Steht_HHVentil_gesperrt_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L14_fzg_Steht_HHVentil_gesperrt_SM1 = betriebsbremssperrventil;
      outC->_L12_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->_L14_fzg_Steht_HHVentil_gesperrt_SM1 ==
        outC->_L15_fzg_Steht_HHVentil_gesperrt_SM1;
      outC->_L4_fzg_Steht_HHVentil_gesperrt_SM1 = pBremse_frei_AhTypes_Pkg_ah_Pkg;
      outC->_L2_fzg_Steht_HHVentil_gesperrt_SM1 = EPB_Bremse;
      outC->_L3_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->_L2_fzg_Steht_HHVentil_gesperrt_SM1 !=
        outC->_L4_fzg_Steht_HHVentil_gesperrt_SM1;
      outC->_L11_fzg_Steht_HHVentil_gesperrt_SM1 =
        outC->_L3_fzg_Steht_HHVentil_gesperrt_SM1 |
        outC->_L12_fzg_Steht_HHVentil_gesperrt_SM1 |
        outC->_L20_fzg_Steht_HHVentil_gesperrt_SM1;
      _185_noname = outC->_L10_fzg_Steht_HHVentil_gesperrt_SM1;
      _180_error_partial = outC->_L11_fzg_Steht_HHVentil_gesperrt_SM1;
      break;
    case SSM_st_haltenAmBerg_SM1 :
      _169_ready_partial = kcg_false;
      _168_error_partial = last_error;
      _165_taste_P_partial = last_taste_P;
      _164_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _163_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _162_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _161_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_haltenAmBerg_SM1 = v_fzg <= cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
      if (tr_1_guard_haltenAmBerg_SM1) {
        _172_SM1_fired_partial =
          SSM_TR_haltenAmBerg_Bremspedal_loesen_1_haltenAmBerg_SM1;
      }
      else {
        _172_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _171_SM1_reset_nxt_partial = tr_1_guard_haltenAmBerg_SM1;
      if (tr_1_guard_haltenAmBerg_SM1) {
        _170_SM1_state_nxt_partial = SSM_st_Bremspedal_loesen_SM1;
      }
      else {
        _170_SM1_state_nxt_partial = SSM_st_haltenAmBerg_SM1;
      }
      outC->_L15_haltenAmBerg_SM1 = kcg_lit_float64(0.3);
      _167_bremspedalKraft_partial = outC->_L15_haltenAmBerg_SM1;
      outC->_L9_haltenAmBerg_SM1 = kcg_lit_float64(0.0);
      _166_gaspedalStellung_partial = outC->_L9_haltenAmBerg_SM1;
      break;
    case SSM_st_fahren_SM1 :
      _157_ready_partial = kcg_false;
      _156_error_partial = last_error;
      _155_bremspedalKraft_partial = last_bremspedalKraft;
      _154_gaspedalStellung_partial = last_gaspedalStellung;
      _153_taste_P_partial = last_taste_P;
      _152_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _151_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _150_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _149_zuendschalter_partial = last_zuendschalter;
      tr_1_guard_fahren_SM1 = fzgLaengsneigung < kcg_lit_float64(0.0);
      if (tr_1_guard_fahren_SM1) {
        _160_SM1_fired_partial = SSM_TR_fahren_haltenAmBerg_1_fahren_SM1;
      }
      else {
        _160_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _159_SM1_reset_nxt_partial = tr_1_guard_fahren_SM1;
      if (tr_1_guard_fahren_SM1) {
        _158_SM1_state_nxt_partial = SSM_st_haltenAmBerg_SM1;
      }
      else {
        _158_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      break;
    case SSM_st_anfahren_SM1 :
      _126_error_partial = last_error;
      _123_taste_P_partial = last_taste_P;
      _122_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _121_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _119_zuendschalter_partial = last_zuendschalter;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_anfahren_SM1 :
      if (SM1_reset_sel) {
        outC->init7 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_anfahren_SM1 :
      /* SM1:anfahren:SM2: */
      if (outC->init7) {
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
      if (outC->init7) {
        SM2_reset_sel_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_anfahren_SM1 = outC->SM2_reset_nxt_anfahren_SM1;
      }
      switch (outC->SM2_state_sel_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          if (SM2_reset_sel_anfahren_SM1) {
            outC->init6 = kcg_true;
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
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          /* SM1:anfahren:SM2:gasGeben:_L3= */
          if (outC->init6) {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
          }
          else {
            outC->_L3_gasGeben_SM2_anfahren_SM1 = outC->_L4_gasGeben_SM2_anfahren_SM1;
          }
          outC->_L5_gasGeben_SM2_anfahren_SM1 =
            outC->_L3_gasGeben_SM2_anfahren_SM1 >= outC->_L6_gasGeben_SM2_anfahren_SM1;
          _131_ready_partial = outC->_L5_gasGeben_SM2_anfahren_SM1;
          _127_ready_partial = _131_ready_partial;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _138_ready_partial = kcg_false;
          _127_ready_partial = _138_ready_partial;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          outC->_L2_bremspedalTreten_SM2_anfahren_SM1 = kcg_false;
          _145_ready_partial = outC->_L2_bremspedalTreten_SM2_anfahren_SM1;
          _127_ready_partial = _145_ready_partial;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      tr_1_guard_anfahren_SM1 = _127_ready_partial;
      if (tr_1_guard_anfahren_SM1) {
        _130_SM1_fired_partial = SSM_TR_anfahren_fahren_1_anfahren_SM1;
      }
      else {
        _130_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _129_SM1_reset_nxt_partial = tr_1_guard_anfahren_SM1;
      if (tr_1_guard_anfahren_SM1) {
        _128_SM1_state_nxt_partial = SSM_st_fahren_SM1;
      }
      else {
        _128_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          _134_getriebeWahlhebel_partial = last_getriebeWahlhebel;
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
          _133_gaspedalStellung_partial = outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L2_gasGeben_SM2_anfahren_SM1 =
            cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
          outC->_L4_gasGeben_SM2_anfahren_SM1 =
            outC->_L2_gasGeben_SM2_anfahren_SM1 + outC->_L3_gasGeben_SM2_anfahren_SM1;
          outC->_L7_gasGeben_SM2_anfahren_SM1 =
            cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
          _132_bremspedalKraft_partial = outC->_L7_gasGeben_SM2_anfahren_SM1;
          _120_getriebeWahlhebel_partial = _134_getriebeWahlhebel_partial;
          _124_gaspedalStellung_partial = _133_gaspedalStellung_partial;
          _125_bremspedalKraft_partial = _132_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_getriebe_auf_D_SM2_anfahren_SM1 :
          _139_bremspedalKraft_partial = last_bremspedalKraft;
          _140_gaspedalStellung_partial = last_gaspedalStellung;
          tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _135_SM2_fired_partial_anfahren_SM1 =
              _12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _135_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _136_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1;
          if (tr_1_guard_getriebe_auf_D_SM2_anfahren_SM1) {
            _137_SM2_state_nxt_partial_anfahren_SM1 = SSM_st_gasGeben_SM2_anfahren_SM1;
          }
          else {
            _137_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          outC->_L1_getriebe_auf_D_SM2_anfahren_SM1 = getriebeWahl_D_AhTypes_Pkg_ah_Pkg;
          _141_getriebeWahlhebel_partial = outC->_L1_getriebe_auf_D_SM2_anfahren_SM1;
          _120_getriebeWahlhebel_partial = _141_getriebeWahlhebel_partial;
          _124_gaspedalStellung_partial = _140_gaspedalStellung_partial;
          _125_bremspedalKraft_partial = _139_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _137_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _136_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _135_SM2_fired_partial_anfahren_SM1;
          break;
        case SSM_st_bremspedalTreten_SM2_anfahren_SM1 :
          _147_gaspedalStellung_partial = last_gaspedalStellung;
          _148_getriebeWahlhebel_partial = last_getriebeWahlhebel;
          tr_1_guard_bremspedalTreten_SM2_anfahren_SM1 = kcg_true;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _142_SM2_fired_partial_anfahren_SM1 =
              _13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1;
          }
          else {
            _142_SM2_fired_partial_anfahren_SM1 = SSM_TR_no_trans_SM2_anfahren_SM1;
          }
          _143_SM2_reset_nxt_partial_anfahren_SM1 =
            tr_1_guard_bremspedalTreten_SM2_anfahren_SM1;
          if (tr_1_guard_bremspedalTreten_SM2_anfahren_SM1) {
            _144_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_getriebe_auf_D_SM2_anfahren_SM1;
          }
          else {
            _144_SM2_state_nxt_partial_anfahren_SM1 =
              SSM_st_bremspedalTreten_SM2_anfahren_SM1;
          }
          outC->_L1_bremspedalTreten_SM2_anfahren_SM1 =
            cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
          _146_bremspedalKraft_partial = outC->_L1_bremspedalTreten_SM2_anfahren_SM1;
          _120_getriebeWahlhebel_partial = _148_getriebeWahlhebel_partial;
          _124_gaspedalStellung_partial = _147_gaspedalStellung_partial;
          _125_bremspedalKraft_partial = _146_bremspedalKraft_partial;
          outC->SM2_state_nxt_anfahren_SM1 = _144_SM2_state_nxt_partial_anfahren_SM1;
          outC->SM2_reset_nxt_anfahren_SM1 = _143_SM2_reset_nxt_partial_anfahren_SM1;
          outC->SM2_fired_anfahren_SM1 = _142_SM2_fired_partial_anfahren_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:anfahren:SM2: */
      if (outC->init7) {
        SM2_reset_prv_anfahren_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_anfahren_SM1 = outC->SM2_reset_act_anfahren_SM1;
      }
      outC->SM2_reset_act_anfahren_SM1 = kcg_false;
      break;
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      _112_bremspedalKraft_partial = last_bremspedalKraft;
      _111_gaspedalStellung_partial = last_gaspedalStellung;
      _110_taste_P_partial = last_taste_P;
      _109_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _108_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _107_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _106_zuendschalter_partial = last_zuendschalter;
      outC->_L12_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      if (SM1_reset_sel) {
        outC->init8 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      /* SM1:EPB_arretiert_und_HHVentil_frei:_L13= */
      if (outC->init8) {
        outC->_L13_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
      }
      else {
        outC->_L13_EPB_arretiert_und_HHVentil_frei_SM1 =
          outC->_L12_EPB_arretiert_und_HHVentil_frei_SM1;
      }
      outC->_L9_EPB_arretiert_und_HHVentil_frei_SM1 = aktZeit;
      outC->_L8_EPB_arretiert_und_HHVentil_frei_SM1 =
        c_5s_warten_AH_testSuite_Pkg_divFahrer;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      if (SM1_reset_sel) {
        /* SM1:EPB_arretiert_und_HHVentil_frei:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
        countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
          &outC->Context_countDownTimer_5);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      /* SM1:EPB_arretiert_und_HHVentil_frei:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
      countDownTimer_AhTypes_Pkg_utils_Pkg(
        outC->_L13_EPB_arretiert_und_HHVentil_frei_SM1,
        outC->_L12_EPB_arretiert_und_HHVentil_frei_SM1,
        outC->_L9_EPB_arretiert_und_HHVentil_frei_SM1,
        outC->_L8_EPB_arretiert_und_HHVentil_frei_SM1,
        &outC->Context_countDownTimer_5);
      outC->_L10_EPB_arretiert_und_HHVentil_frei_SM1 =
        outC->Context_countDownTimer_5.abgelaufen;
      outC->_L11_EPB_arretiert_und_HHVentil_frei_SM1 =
        outC->Context_countDownTimer_5.laufend;
      _114_ready_partial = outC->_L10_EPB_arretiert_und_HHVentil_frei_SM1;
      tr_1_guard_EPB_arretiert_und_HHVentil_frei_SM1 = _114_ready_partial;
      if (tr_1_guard_EPB_arretiert_und_HHVentil_frei_SM1) {
        _117_SM1_fired_partial =
          SSM_TR_EPB_arretiert_und_HHVentil_frei_anfahren_1_EPB_arretiert_und_HHVentil_frei_SM1;
      }
      else {
        _117_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _116_SM1_reset_nxt_partial = tr_1_guard_EPB_arretiert_und_HHVentil_frei_SM1;
      if (tr_1_guard_EPB_arretiert_und_HHVentil_frei_SM1) {
        _115_SM1_state_nxt_partial = SSM_st_anfahren_SM1;
      }
      else {
        _115_SM1_state_nxt_partial = SSM_st_EPB_arretiert_und_HHVentil_frei_SM1;
      }
      outC->_L19_EPB_arretiert_und_HHVentil_frei_SM1 =
        bbs_gesperrt_AhTypes_Pkg_ah_Pkg;
      outC->_L18_EPB_arretiert_und_HHVentil_frei_SM1 = betriebsbremssperrventil;
      outC->_L17_EPB_arretiert_und_HHVentil_frei_SM1 =
        outC->_L18_EPB_arretiert_und_HHVentil_frei_SM1 ==
        outC->_L19_EPB_arretiert_und_HHVentil_frei_SM1;
      outC->_L15_EPB_arretiert_und_HHVentil_frei_SM1 =
        pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L1_EPB_arretiert_und_HHVentil_frei_SM1 = EPB_Bremse;
      outC->_L3_EPB_arretiert_und_HHVentil_frei_SM1 =
        outC->_L1_EPB_arretiert_und_HHVentil_frei_SM1 !=
        outC->_L15_EPB_arretiert_und_HHVentil_frei_SM1;
      outC->_L16_EPB_arretiert_und_HHVentil_frei_SM1 =
        outC->_L3_EPB_arretiert_und_HHVentil_frei_SM1 |
        outC->_L17_EPB_arretiert_und_HHVentil_frei_SM1;
      _118_noname = outC->_L11_EPB_arretiert_und_HHVentil_frei_SM1;
      _113_error_partial = outC->_L16_EPB_arretiert_und_HHVentil_frei_SM1;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _101_error_partial = last_error;
      _100_bremspedalKraft_partial = last_bremspedalKraft;
      _99_gaspedalStellung_partial = last_gaspedalStellung;
      _95_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _94_zuendschalter_partial = last_zuendschalter;
      outC->_L2_anfahrenVorbereiten_SM1 = kcg_true;
      _102_ready_partial = outC->_L2_anfahrenVorbereiten_SM1;
      tr_1_guard_anfahrenVorbereiten_SM1 = _102_ready_partial;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _105_SM1_fired_partial =
          SSM_TR_anfahrenVorbereiten_EPB_arretiert_und_HHVentil_frei_1_anfahrenVorbereiten_SM1;
      }
      else {
        _105_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _104_SM1_reset_nxt_partial = tr_1_guard_anfahrenVorbereiten_SM1;
      if (tr_1_guard_anfahrenVorbereiten_SM1) {
        _103_SM1_state_nxt_partial = SSM_st_EPB_arretiert_und_HHVentil_frei_SM1;
      }
      else {
        _103_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      outC->_L8_anfahrenVorbereiten_SM1 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
      _97_sicherheitsgurtSchalter_partial = outC->_L8_anfahrenVorbereiten_SM1;
      outC->_L7_anfahrenVorbereiten_SM1 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
      _96_fahrertuerSchalter_partial = outC->_L7_anfahrenVorbereiten_SM1;
      outC->_L6_anfahrenVorbereiten_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _98_taste_P_partial = outC->_L6_anfahrenVorbereiten_SM1;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _86_gaspedalStellung_partial = last_gaspedalStellung;
      _84_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _83_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _82_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _81_zuendschalter_partial = last_zuendschalter;
      outC->_L12_EPB_angezogen_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_EPB_angezogen_SM1 :
      if (SM1_reset_sel) {
        outC->init9 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_EPB_angezogen_SM1 :
      /* SM1:EPB_angezogen:_L13= */
      if (outC->init9) {
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
      _89_ready_partial = outC->_L10_EPB_angezogen_SM1;
      tr_1_guard_EPB_angezogen_SM1 = _89_ready_partial;
      if (tr_1_guard_EPB_angezogen_SM1) {
        _92_SM1_fired_partial =
          SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1;
      }
      else {
        _92_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _91_SM1_reset_nxt_partial = tr_1_guard_EPB_angezogen_SM1;
      if (tr_1_guard_EPB_angezogen_SM1) {
        _90_SM1_state_nxt_partial = SSM_st_anfahrenVorbereiten_SM1;
      }
      else {
        _90_SM1_state_nxt_partial = SSM_st_EPB_angezogen_SM1;
      }
      _93_noname = outC->_L11_EPB_angezogen_SM1;
      outC->_L7_EPB_angezogen_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L6_EPB_angezogen_SM1 = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _87_bremspedalKraft_partial = outC->_L6_EPB_angezogen_SM1;
      outC->_L4_EPB_angezogen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _85_taste_P_partial = outC->_L4_EPB_angezogen_SM1;
      outC->_L1_EPB_angezogen_SM1 = EPB_Bremse;
      outC->_L3_EPB_angezogen_SM1 = outC->_L1_EPB_angezogen_SM1 !=
        outC->_L7_EPB_angezogen_SM1;
      _88_error_partial = outC->_L3_EPB_angezogen_SM1;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _76_error_partial = last_error;
      _74_gaspedalStellung_partial = last_gaspedalStellung;
      _72_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _71_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _70_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _69_zuendschalter_partial = last_zuendschalter;
      outC->_L3_betriebsbremseLoesen_SM1 = kcg_true;
      _77_ready_partial = outC->_L3_betriebsbremseLoesen_SM1;
      tr_1_guard_betriebsbremseLoesen_SM1 = _77_ready_partial;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _80_SM1_fired_partial =
          SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1;
      }
      else {
        _80_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _79_SM1_reset_nxt_partial = tr_1_guard_betriebsbremseLoesen_SM1;
      if (tr_1_guard_betriebsbremseLoesen_SM1) {
        _78_SM1_state_nxt_partial = SSM_st_EPB_angezogen_SM1;
      }
      else {
        _78_SM1_state_nxt_partial = SSM_st_betriebsbremseLoesen_SM1;
      }
      outC->_L6_betriebsbremseLoesen_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      outC->_L5_betriebsbremseLoesen_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _75_bremspedalKraft_partial = outC->_L5_betriebsbremseLoesen_SM1;
      _73_taste_P_partial = outC->_L6_betriebsbremseLoesen_SM1;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _62_bremspedalKraft_partial = last_bremspedalKraft;
      _61_gaspedalStellung_partial = last_gaspedalStellung;
      _60_taste_P_partial = last_taste_P;
      _59_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _58_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _57_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _56_zuendschalter_partial = last_zuendschalter;
      outC->_L20_cockpitanzeigeBleibtAus_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      if (SM1_reset_sel) {
        outC->init10 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      /* SM1:cockpitanzeigeBleibtAus:_L18= */
      if (outC->init10) {
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
      outC->_L26_cockpitanzeigeBleibtAus_SM1 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L25_cockpitanzeigeBleibtAus_SM1 = cockpitAnzeige_EPBMode_Automatik;
      _68_noname = outC->_L22_cockpitanzeigeBleibtAus_SM1;
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
      _63_error_partial = outC->_L12_cockpitanzeigeBleibtAus_SM1;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _48_gaspedalStellung_partial = last_gaspedalStellung;
      _46_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _45_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _44_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _43_zuendschalter_partial = last_zuendschalter;
      outC->_L6_automatikModusEingestellt_SM1 = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_automatikModusEingestellt_SM1 :
      if (SM1_reset_sel) {
        outC->init11 = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_automatikModusEingestellt_SM1 :
      /* SM1:automatikModusEingestellt:_L5= */
      if (outC->init11) {
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
      _51_ready_partial = outC->_L9_automatikModusEingestellt_SM1;
      tr_1_guard_automatikModusEingestellt_SM1 = _51_ready_partial;
      if (tr_1_guard_automatikModusEingestellt_SM1) {
        _54_SM1_fired_partial =
          SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1;
      }
      else {
        _54_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
      }
      _53_SM1_reset_nxt_partial = tr_1_guard_automatikModusEingestellt_SM1;
      if (tr_1_guard_automatikModusEingestellt_SM1) {
        _52_SM1_state_nxt_partial = SSM_st_cockpitanzeigeBleibtAus_SM1;
      }
      else {
        _52_SM1_state_nxt_partial = SSM_st_automatikModusEingestellt_SM1;
      }
      outC->_L15_automatikModusEingestellt_SM1 = cockpitAnzeige_EPBMode_Automatik;
      outC->_L14_automatikModusEingestellt_SM1 =
        cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
      _49_bremspedalKraft_partial = outC->_L14_automatikModusEingestellt_SM1;
      outC->_L11_automatikModusEingestellt_SM1 =
        !outC->_L9_automatikModusEingestellt_SM1;
      outC->_L2_automatikModusEingestellt_SM1 = sw2_off_AhTypes_Pkg_ah_Pkg;
      outC->_L3_automatikModusEingestellt_SM1 =
        outC->_L15_automatikModusEingestellt_SM1 !=
        outC->_L2_automatikModusEingestellt_SM1;
      outC->_L12_automatikModusEingestellt_SM1 =
        outC->_L3_automatikModusEingestellt_SM1 &
        outC->_L11_automatikModusEingestellt_SM1;
      _55_noname = outC->_L10_automatikModusEingestellt_SM1;
      outC->_L4_automatikModusEingestellt_SM1 = tasterP_aus_AhTypes_Pkg_ah_Pkg;
      _47_taste_P_partial = outC->_L4_automatikModusEingestellt_SM1;
      _50_error_partial = outC->_L12_automatikModusEingestellt_SM1;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _31_bremspedalKraft_partial = last_bremspedalKraft;
      _30_gaspedalStellung_partial = last_gaspedalStellung;
      _28_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _27_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _26_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _25_zuendschalter_partial = last_zuendschalter;
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
    case SSM_st_Bremsen_SM1 :
      _364_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _364_SM1_reset_act_partial;
      break;
    case SSM_st_Bremspedal_loesen_SM1 :
      _361_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _361_SM1_reset_act_partial;
      break;
    case SSM_st_weiterfahren_SM1 :
      _358_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _358_SM1_reset_act_partial;
      break;
    case SSM_st_parken_SM1 :
      _355_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _355_SM1_reset_act_partial;
      break;
    case SSM_st_fzgSteht_SM1 :
      _352_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _352_SM1_reset_act_partial;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      _349_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _349_SM1_reset_act_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      _346_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _346_SM1_reset_act_partial;
      break;
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      _343_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _343_SM1_reset_act_partial;
      break;
    case SSM_st_haltenAmBerg_SM1 :
      _340_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _340_SM1_reset_act_partial;
      break;
    case SSM_st_fahren_SM1 :
      _337_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _337_SM1_reset_act_partial;
      break;
    case SSM_st_anfahren_SM1 :
      _334_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _334_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      _331_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _331_SM1_reset_act_partial;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      _328_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _328_SM1_reset_act_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      _325_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _325_SM1_reset_act_partial;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      _322_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _322_SM1_reset_act_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      _319_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _319_SM1_reset_act_partial;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      _316_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _316_SM1_reset_act_partial;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      _313_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _313_SM1_reset_act_partial;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _310_SM1_reset_act_partial = tr_1_guard_bremspedalDurchtreten_SM1;
      outC->SM1_reset_act = _310_SM1_reset_act_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _307_SM1_reset_act_partial = tr_1_guard_zuendungEinschalten_SM1;
      outC->SM1_reset_act = _307_SM1_reset_act_partial;
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
    case SSM_st_Bremsen_SM1 :
      outC->zuendschalter = _294_zuendschalter_partial;
      outC->getriebeWahlhebel = _295_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _296_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _297_sicherheitsgurtSchalter_partial;
      outC->taste_P = _298_taste_P_partial;
      outC->gaspedalStellung = _299_gaspedalStellung_partial;
      outC->bremspedalKraft = _300_bremspedalKraft_partial;
      outC->error = _301_error_partial;
      outC->ready = _302_ready_partial;
      outC->SM1_state_nxt = _303_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _304_SM1_reset_nxt_partial;
      outC->SM1_fired = _305_SM1_fired_partial;
      break;
    case SSM_st_Bremspedal_loesen_SM1 :
      outC->zuendschalter = _282_zuendschalter_partial;
      outC->getriebeWahlhebel = _283_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _284_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _285_sicherheitsgurtSchalter_partial;
      outC->taste_P = _286_taste_P_partial;
      outC->gaspedalStellung = _287_gaspedalStellung_partial;
      outC->bremspedalKraft = _288_bremspedalKraft_partial;
      outC->error = _289_error_partial;
      outC->ready = _290_ready_partial;
      outC->SM1_state_nxt = _291_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _292_SM1_reset_nxt_partial;
      outC->SM1_fired = _293_SM1_fired_partial;
      break;
    case SSM_st_weiterfahren_SM1 :
      outC->zuendschalter = _269_zuendschalter_partial;
      outC->getriebeWahlhebel = _270_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _271_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _272_sicherheitsgurtSchalter_partial;
      outC->taste_P = _273_taste_P_partial;
      outC->gaspedalStellung = _274_gaspedalStellung_partial;
      outC->bremspedalKraft = _275_bremspedalKraft_partial;
      outC->error = _276_error_partial;
      outC->ready = _277_ready_partial;
      outC->SM1_state_nxt = _278_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _279_SM1_reset_nxt_partial;
      outC->SM1_fired = _280_SM1_fired_partial;
      outC->init = kcg_false;
      break;
    case SSM_st_parken_SM1 :
      outC->zuendschalter = _242_zuendschalter_partial;
      outC->getriebeWahlhebel = _243_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _244_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _245_sicherheitsgurtSchalter_partial;
      outC->taste_P = _246_taste_P_partial;
      outC->gaspedalStellung = _247_gaspedalStellung_partial;
      outC->bremspedalKraft = _248_bremspedalKraft_partial;
      outC->error = _249_error_partial;
      outC->ready = _250_ready_partial;
      outC->SM1_state_nxt = _251_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _252_SM1_reset_nxt_partial;
      outC->SM1_fired = _253_SM1_fired_partial;
      outC->init1 = kcg_false;
      break;
    case SSM_st_fzgSteht_SM1 :
      outC->zuendschalter = _229_zuendschalter_partial;
      outC->getriebeWahlhebel = _230_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _231_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _232_sicherheitsgurtSchalter_partial;
      outC->taste_P = _233_taste_P_partial;
      outC->gaspedalStellung = _234_gaspedalStellung_partial;
      outC->bremspedalKraft = _235_bremspedalKraft_partial;
      outC->error = _236_error_partial;
      outC->ready = _237_ready_partial;
      outC->SM1_state_nxt = _238_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _239_SM1_reset_nxt_partial;
      outC->SM1_fired = _240_SM1_fired_partial;
      outC->init2 = kcg_false;
      break;
    case SSM_st_anhaltenZumBeenden_SM1 :
      outC->zuendschalter = _217_zuendschalter_partial;
      outC->getriebeWahlhebel = _218_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _219_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _220_sicherheitsgurtSchalter_partial;
      outC->taste_P = _221_taste_P_partial;
      outC->gaspedalStellung = _222_gaspedalStellung_partial;
      outC->bremspedalKraft = _223_bremspedalKraft_partial;
      outC->error = _224_error_partial;
      outC->ready = _225_ready_partial;
      outC->SM1_state_nxt = _226_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _227_SM1_reset_nxt_partial;
      outC->SM1_fired = _228_SM1_fired_partial;
      break;
    case SSM_st_erneutAnfahren_SM1 :
      outC->zuendschalter = _186_zuendschalter_partial;
      outC->getriebeWahlhebel = _187_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _188_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _189_sicherheitsgurtSchalter_partial;
      outC->taste_P = _190_taste_P_partial;
      outC->gaspedalStellung = _191_gaspedalStellung_partial;
      outC->bremspedalKraft = _192_bremspedalKraft_partial;
      outC->error = _193_error_partial;
      outC->ready = _194_ready_partial;
      outC->SM1_state_nxt = _195_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _196_SM1_reset_nxt_partial;
      outC->SM1_fired = _197_SM1_fired_partial;
      outC->init4 = kcg_false;
      switch (outC->SM2_clock_erneutAnfahren_SM1) {
        case SSM_st_gasGeben_SM2_erneutAnfahren_SM1 :
          outC->init3 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_fzg_Steht_HHVentil_gesperrt_SM1 :
      outC->zuendschalter = _173_zuendschalter_partial;
      outC->getriebeWahlhebel = _174_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _175_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _176_sicherheitsgurtSchalter_partial;
      outC->taste_P = _177_taste_P_partial;
      outC->gaspedalStellung = _178_gaspedalStellung_partial;
      outC->bremspedalKraft = _179_bremspedalKraft_partial;
      outC->error = _180_error_partial;
      outC->ready = _181_ready_partial;
      outC->SM1_state_nxt = _182_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _183_SM1_reset_nxt_partial;
      outC->SM1_fired = _184_SM1_fired_partial;
      outC->init5 = kcg_false;
      break;
    case SSM_st_haltenAmBerg_SM1 :
      outC->zuendschalter = _161_zuendschalter_partial;
      outC->getriebeWahlhebel = _162_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _163_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _164_sicherheitsgurtSchalter_partial;
      outC->taste_P = _165_taste_P_partial;
      outC->gaspedalStellung = _166_gaspedalStellung_partial;
      outC->bremspedalKraft = _167_bremspedalKraft_partial;
      outC->error = _168_error_partial;
      outC->ready = _169_ready_partial;
      outC->SM1_state_nxt = _170_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _171_SM1_reset_nxt_partial;
      outC->SM1_fired = _172_SM1_fired_partial;
      break;
    case SSM_st_fahren_SM1 :
      outC->zuendschalter = _149_zuendschalter_partial;
      outC->getriebeWahlhebel = _150_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _151_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _152_sicherheitsgurtSchalter_partial;
      outC->taste_P = _153_taste_P_partial;
      outC->gaspedalStellung = _154_gaspedalStellung_partial;
      outC->bremspedalKraft = _155_bremspedalKraft_partial;
      outC->error = _156_error_partial;
      outC->ready = _157_ready_partial;
      outC->SM1_state_nxt = _158_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _159_SM1_reset_nxt_partial;
      outC->SM1_fired = _160_SM1_fired_partial;
      break;
    case SSM_st_anfahren_SM1 :
      outC->zuendschalter = _119_zuendschalter_partial;
      outC->getriebeWahlhebel = _120_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _121_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _122_sicherheitsgurtSchalter_partial;
      outC->taste_P = _123_taste_P_partial;
      outC->gaspedalStellung = _124_gaspedalStellung_partial;
      outC->bremspedalKraft = _125_bremspedalKraft_partial;
      outC->error = _126_error_partial;
      outC->ready = _127_ready_partial;
      outC->SM1_state_nxt = _128_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _129_SM1_reset_nxt_partial;
      outC->SM1_fired = _130_SM1_fired_partial;
      outC->init7 = kcg_false;
      switch (outC->SM2_clock_anfahren_SM1) {
        case SSM_st_gasGeben_SM2_anfahren_SM1 :
          outC->init6 = kcg_false;
          break;
        default :
          /* this branch is empty */
          break;
      }
      break;
    case SSM_st_EPB_arretiert_und_HHVentil_frei_SM1 :
      outC->zuendschalter = _106_zuendschalter_partial;
      outC->getriebeWahlhebel = _107_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _108_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _109_sicherheitsgurtSchalter_partial;
      outC->taste_P = _110_taste_P_partial;
      outC->gaspedalStellung = _111_gaspedalStellung_partial;
      outC->bremspedalKraft = _112_bremspedalKraft_partial;
      outC->error = _113_error_partial;
      outC->ready = _114_ready_partial;
      outC->SM1_state_nxt = _115_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _116_SM1_reset_nxt_partial;
      outC->SM1_fired = _117_SM1_fired_partial;
      outC->init8 = kcg_false;
      break;
    case SSM_st_anfahrenVorbereiten_SM1 :
      outC->zuendschalter = _94_zuendschalter_partial;
      outC->getriebeWahlhebel = _95_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _96_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _97_sicherheitsgurtSchalter_partial;
      outC->taste_P = _98_taste_P_partial;
      outC->gaspedalStellung = _99_gaspedalStellung_partial;
      outC->bremspedalKraft = _100_bremspedalKraft_partial;
      outC->error = _101_error_partial;
      outC->ready = _102_ready_partial;
      outC->SM1_state_nxt = _103_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _104_SM1_reset_nxt_partial;
      outC->SM1_fired = _105_SM1_fired_partial;
      break;
    case SSM_st_EPB_angezogen_SM1 :
      outC->zuendschalter = _81_zuendschalter_partial;
      outC->getriebeWahlhebel = _82_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _83_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _84_sicherheitsgurtSchalter_partial;
      outC->taste_P = _85_taste_P_partial;
      outC->gaspedalStellung = _86_gaspedalStellung_partial;
      outC->bremspedalKraft = _87_bremspedalKraft_partial;
      outC->error = _88_error_partial;
      outC->ready = _89_ready_partial;
      outC->SM1_state_nxt = _90_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _91_SM1_reset_nxt_partial;
      outC->SM1_fired = _92_SM1_fired_partial;
      outC->init9 = kcg_false;
      break;
    case SSM_st_betriebsbremseLoesen_SM1 :
      outC->zuendschalter = _69_zuendschalter_partial;
      outC->getriebeWahlhebel = _70_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _71_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _72_sicherheitsgurtSchalter_partial;
      outC->taste_P = _73_taste_P_partial;
      outC->gaspedalStellung = _74_gaspedalStellung_partial;
      outC->bremspedalKraft = _75_bremspedalKraft_partial;
      outC->error = _76_error_partial;
      outC->ready = _77_ready_partial;
      outC->SM1_state_nxt = _78_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _79_SM1_reset_nxt_partial;
      outC->SM1_fired = _80_SM1_fired_partial;
      break;
    case SSM_st_cockpitanzeigeBleibtAus_SM1 :
      outC->zuendschalter = _56_zuendschalter_partial;
      outC->getriebeWahlhebel = _57_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _58_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _59_sicherheitsgurtSchalter_partial;
      outC->taste_P = _60_taste_P_partial;
      outC->gaspedalStellung = _61_gaspedalStellung_partial;
      outC->bremspedalKraft = _62_bremspedalKraft_partial;
      outC->error = _63_error_partial;
      outC->ready = _64_ready_partial;
      outC->SM1_state_nxt = _65_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _66_SM1_reset_nxt_partial;
      outC->SM1_fired = _67_SM1_fired_partial;
      outC->init10 = kcg_false;
      break;
    case SSM_st_automatikModusEingestellt_SM1 :
      outC->zuendschalter = _43_zuendschalter_partial;
      outC->getriebeWahlhebel = _44_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _45_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _46_sicherheitsgurtSchalter_partial;
      outC->taste_P = _47_taste_P_partial;
      outC->gaspedalStellung = _48_gaspedalStellung_partial;
      outC->bremspedalKraft = _49_bremspedalKraft_partial;
      outC->error = _50_error_partial;
      outC->ready = _51_ready_partial;
      outC->SM1_state_nxt = _52_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _53_SM1_reset_nxt_partial;
      outC->SM1_fired = _54_SM1_fired_partial;
      outC->init11 = kcg_false;
      break;
    case SSM_st_automastikModusEinstellen_SM1 :
      if (outC->SM1_reset_act) {
        outC->init12 = kcg_true;
      }
      /* SM1:automastikModusEinstellen:_L6= */
      if (outC->init12) {
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
      _33_ready_partial = outC->_L4_automastikModusEinstellen_SM1;
      /* SM1:automastikModusEinstellen: */
      if (outC->automastikModusEinstellen_weakb_clock_SM1) {
        _40_SM1_fired_partial = outC->SM1_fired_strong;
        _41_SM1_reset_nxt_partial = kcg_false;
        _42_SM1_state_nxt_partial = SSM_st_automastikModusEinstellen_SM1;
        _34_SM1_state_nxt_partial = _42_SM1_state_nxt_partial;
        _35_SM1_reset_nxt_partial = _41_SM1_reset_nxt_partial;
        _36_SM1_fired_partial = _40_SM1_fired_partial;
      }
      else {
        tr_1_guard_automastikModusEinstellen_SM1 = _33_ready_partial;
        if (tr_1_guard_automastikModusEinstellen_SM1) {
          _37_SM1_fired_partial =
            SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1;
        }
        else {
          _37_SM1_fired_partial = _11_SSM_TR_no_trans_SM1;
        }
        _38_SM1_reset_nxt_partial = tr_1_guard_automastikModusEinstellen_SM1;
        if (tr_1_guard_automastikModusEinstellen_SM1) {
          _39_SM1_state_nxt_partial = SSM_st_automatikModusEingestellt_SM1;
        }
        else {
          _39_SM1_state_nxt_partial = SSM_st_automastikModusEinstellen_SM1;
        }
        _34_SM1_state_nxt_partial = _39_SM1_state_nxt_partial;
        _35_SM1_reset_nxt_partial = _38_SM1_reset_nxt_partial;
        _36_SM1_fired_partial = _37_SM1_fired_partial;
      }
      outC->_L26_automastikModusEinstellen_SM1 = tasterP_gezogen_AhTypes_Pkg_ah_Pkg;
      outC->_L14_automastikModusEinstellen_SM1 = _33_ready_partial;
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
      _32_error_partial = outC->_L25_automastikModusEinstellen_SM1;
      noname = outC->_L5_automastikModusEinstellen_SM1;
      _29_taste_P_partial = outC->_L26_automastikModusEinstellen_SM1;
      outC->zuendschalter = _25_zuendschalter_partial;
      outC->getriebeWahlhebel = _26_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _27_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _28_sicherheitsgurtSchalter_partial;
      outC->taste_P = _29_taste_P_partial;
      outC->gaspedalStellung = _30_gaspedalStellung_partial;
      outC->bremspedalKraft = _31_bremspedalKraft_partial;
      outC->error = _32_error_partial;
      outC->ready = _33_ready_partial;
      outC->SM1_state_nxt = _34_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _35_SM1_reset_nxt_partial;
      outC->SM1_fired = _36_SM1_fired_partial;
      outC->init12 = kcg_false;
      break;
    case SSM_st_bremspedalDurchtreten_SM1 :
      _21_ready_partial = kcg_false;
      _20_error_partial = last_error;
      _18_gaspedalStellung_partial = last_gaspedalStellung;
      _17_taste_P_partial = last_taste_P;
      _16_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _15_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _14_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _13_zuendschalter_partial = last_zuendschalter;
      _24_SM1_fired_partial = outC->SM1_fired_strong;
      _23_SM1_reset_nxt_partial = kcg_false;
      _22_SM1_state_nxt_partial = SSM_st_bremspedalDurchtreten_SM1;
      outC->_L2_bremspedalDurchtreten_SM1 =
        cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
      _19_bremspedalKraft_partial = outC->_L2_bremspedalDurchtreten_SM1;
      outC->zuendschalter = _13_zuendschalter_partial;
      outC->getriebeWahlhebel = _14_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _15_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _16_sicherheitsgurtSchalter_partial;
      outC->taste_P = _17_taste_P_partial;
      outC->gaspedalStellung = _18_gaspedalStellung_partial;
      outC->bremspedalKraft = _19_bremspedalKraft_partial;
      outC->error = _20_error_partial;
      outC->ready = _21_ready_partial;
      outC->SM1_state_nxt = _22_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _23_SM1_reset_nxt_partial;
      outC->SM1_fired = _24_SM1_fired_partial;
      break;
    case SSM_st_zuendungEinschalten_SM1 :
      _9_ready_partial = kcg_false;
      _8_error_partial = last_error;
      _7_bremspedalKraft_partial = last_bremspedalKraft;
      _6_gaspedalStellung_partial = last_gaspedalStellung;
      _5_taste_P_partial = last_taste_P;
      _4_sicherheitsgurtSchalter_partial = last_sicherheitsgurtSchalter;
      _3_fahrertuerSchalter_partial = last_fahrertuerSchalter;
      _2_getriebeWahlhebel_partial = last_getriebeWahlhebel;
      _12_SM1_fired_partial = outC->SM1_fired_strong;
      _11_SM1_reset_nxt_partial = kcg_false;
      _10_SM1_state_nxt_partial = SSM_st_zuendungEinschalten_SM1;
      outC->_L1_zuendungEinschalten_SM1 = sw2_on_AhTypes_Pkg_ah_Pkg;
      _1_zuendschalter_partial = outC->_L1_zuendungEinschalten_SM1;
      outC->zuendschalter = _1_zuendschalter_partial;
      outC->getriebeWahlhebel = _2_getriebeWahlhebel_partial;
      outC->fahrertuerSchalter = _3_fahrertuerSchalter_partial;
      outC->sicherheitsgurtSchalter = _4_sicherheitsgurtSchalter_partial;
      outC->taste_P = _5_taste_P_partial;
      outC->gaspedalStellung = _6_gaspedalStellung_partial;
      outC->bremspedalKraft = _7_bremspedalKraft_partial;
      outC->error = _8_error_partial;
      outC->ready = _9_ready_partial;
      outC->SM1_state_nxt = _10_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _11_SM1_reset_nxt_partial;
      outC->SM1_fired = _12_SM1_fired_partial;
      break;
    case SSM_st_Start_SM1 :
      ready_partial = kcg_false;
      error_partial = last_error;
      bremspedalKraft_partial = last_bremspedalKraft;
      gaspedalStellung_partial = last_gaspedalStellung;
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
}

#ifndef KCG_USER_DEFINED_INIT
void autoModus_o_autoHold_Hill_init_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC)
{
  outC->_L15 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L14 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L13 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->ready = kcg_true;
  outC->SM1_fired = _11_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _11_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_Start_SM1;
  outC->SM1_state_sel = SSM_st_Start_SM1;
  outC->_L2_Bremsen_SM1 = kcg_lit_float64(0.0);
  outC->_L1_Bremsen_SM1 = kcg_lit_float64(0.0);
  outC->_L1_Bremspedal_loesen_SM1 = kcg_lit_float64(0.0);
  outC->_L6_weiterfahren_SM1 = kcg_true;
  outC->_L5_weiterfahren_SM1 = kcg_true;
  outC->_L4_weiterfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L3_weiterfahren_SM1 = kcg_lit_float64(0.0);
  outC->_L1_weiterfahren_SM1 = kcg_true;
  outC->_L2_weiterfahren_SM1 = kcg_true;
  outC->_L7_weiterfahren_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L8_weiterfahren_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L9_weiterfahren_SM1 = kcg_true;
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
  outC->_L4_fzg_Steht_HHVentil_gesperrt_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L2_fzg_Steht_HHVentil_gesperrt_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L9_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L10_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L8_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L7_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_lit_float64(0.0);
  outC->_L6_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_lit_float64(0.0);
  outC->_L5_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L11_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L12_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L14_fzg_Steht_HHVentil_gesperrt_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L15_fzg_Steht_HHVentil_gesperrt_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L17_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_lit_float64(0.0);
  outC->_L20_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_true;
  outC->_L21_fzg_Steht_HHVentil_gesperrt_SM1 = kcg_lit_float64(0.0);
  outC->_L9_haltenAmBerg_SM1 = kcg_lit_float64(0.0);
  outC->_L15_haltenAmBerg_SM1 = kcg_lit_float64(0.0);
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
  outC->_L1_EPB_arretiert_und_HHVentil_frei_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L3_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L13_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L12_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L10_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L11_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L9_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_lit_float64(0.0);
  outC->_L8_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_lit_float64(0.0);
  outC->_L15_EPB_arretiert_und_HHVentil_frei_SM1 =
    pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L16_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L17_EPB_arretiert_und_HHVentil_frei_SM1 = kcg_true;
  outC->_L18_EPB_arretiert_und_HHVentil_frei_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L19_EPB_arretiert_und_HHVentil_frei_SM1 = bbs_frei_AhTypes_Pkg_ah_Pkg;
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
  outC->_L4_gasGeben_SM2_erneutAnfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_erneutAnfahren_SM1 =
    SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1;
  outC->SM2_reset_act_erneutAnfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_erneutAnfahren_SM1 = kcg_true;
  outC->_L4_gasGeben_SM2_anfahren_SM1 = kcg_lit_float64(0.0);
  outC->SM2_state_nxt_anfahren_SM1 = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
  outC->SM2_reset_act_anfahren_SM1 = kcg_true;
  outC->SM2_reset_nxt_anfahren_SM1 = kcg_true;
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
  /* SM1:EPB_arretiert_und_HHVentil_frei:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_5);
  /* SM1:fzg_Steht_HHVentil_gesperrt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_init_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:weiterfahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
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
void autoModus_o_autoHold_Hill_reset_AH_testSuite_Pkg_divFahrer(
  outC_autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer *outC)
{
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
  /* SM1:EPB_arretiert_und_HHVentil_frei:_L10=(AhTypes_Pkg::utils_Pkg::countDownTimer#5)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_5);
  /* SM1:fzg_Steht_HHVentil_gesperrt:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#6)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_6);
  /* SM1:fzgSteht:_L9=(AhTypes_Pkg::utils_Pkg::countDownTimer#7)/ */
  countDownTimer_reset_AhTypes_Pkg_utils_Pkg(&outC->Context_countDownTimer_7);
  /* SM1:weiterfahren:_L1=(AhTypes_Pkg::utils_Pkg::countDownTimer#8)/ */
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
** autoModus_o_autoHold_Hill_AH_testSuite_Pkg_divFahrer.c
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

