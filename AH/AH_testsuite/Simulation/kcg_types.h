/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* AhTypes_Pkg::ah_Pkg::autoholdModus_T/ */
typedef enum kcg_tag_autoholdModus_T_AhTypes_Pkg_ah_Pkg {
  ahm_off_AhTypes_Pkg_ah_Pkg,
  ahm_on_AhTypes_Pkg_ah_Pkg
} autoholdModus_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::sicherheitsgurt_zustand_T/ */
typedef enum kcg_tag_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg {
  sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg,
  sGurtAngelegt_AhTypes_Pkg_ah_Pkg
} sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::tuerSchalter_T/ */
typedef enum kcg_tag_tuerSchalter_T_AhTypes_Pkg_ah_Pkg {
  tuerSchalterOffen_AhTypes_Pkg_ah_Pkg,
  tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg
} tuerSchalter_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::epbBetriebsmodus_T/ */
typedef enum kcg_tag_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg {
  epbModus_automatik_AhTypes_Pkg_ah_Pkg,
  epbModus_manuell_AhTypes_Pkg_ah_Pkg
} epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::tasterP_T/ */
typedef enum kcg_tag_tasterP_T_AhTypes_Pkg_ah_Pkg {
  tasterP_aus_AhTypes_Pkg_ah_Pkg,
  tasterP_gezogen_AhTypes_Pkg_ah_Pkg,
  tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg
} tasterP_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::betriebsbremsSperrventil_T/ */
typedef enum kcg_tag_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg {
  bbs_frei_AhTypes_Pkg_ah_Pkg,
  bbs_gesperrt_AhTypes_Pkg_ah_Pkg
} betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::epbBremszustand_T/ */
typedef enum kcg_tag_epbBremszustand_T_AhTypes_Pkg_ah_Pkg {
  pBremse_angezogen_AhTypes_Pkg_ah_Pkg,
  pBremse_frei_AhTypes_Pkg_ah_Pkg
} epbBremszustand_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::on_off_element_T/ */
typedef enum kcg_tag_on_off_element_T_AhTypes_Pkg_ah_Pkg {
  sw2_off_AhTypes_Pkg_ah_Pkg,
  sw2_on_AhTypes_Pkg_ah_Pkg
} on_off_element_T_AhTypes_Pkg_ah_Pkg;
/* AhTypes_Pkg::ah_Pkg::getriebeWahlhebel_T/ */
typedef enum kcg_tag_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg {
  getriebeWahl_P_AhTypes_Pkg_ah_Pkg,
  getriebeWahl_R_AhTypes_Pkg_ah_Pkg,
  getriebeWahl_N_AhTypes_Pkg_ah_Pkg,
  getriebeWahl_D_AhTypes_Pkg_ah_Pkg,
  getriebeWahl_B_AhTypes_Pkg_ah_Pkg
} getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg;
/* AH_Pkg::subf_Pkg::steuereEPB/EPB_SM: */
typedef enum kcg_tag_SSM_TR_EPB_SM {
  SSM_TR_no_trans_EPB_SM,
  SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM,
  SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM
} SSM_TR_EPB_SM;
/* AH_Pkg::subf_Pkg::steuereEPB/EPB_SM: */
typedef enum kcg_tag_SSM_ST_EPB_SM {
  SSM_st_epb_arretiert_EPB_SM,
  SSM_st_epb_geloest_EPB_SM
} SSM_ST_EPB_SM;
/* AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/SM_Betriebsmodus: */
typedef enum kcg_tag_SSM_TR_SM_Betriebsmodus {
  SSM_TR_no_trans_SM_Betriebsmodus,
  SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus,
  SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus
} SSM_TR_SM_Betriebsmodus;
/* AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/SM_Betriebsmodus: */
typedef enum kcg_tag_SSM_ST_SM_Betriebsmodus {
  SSM_st_automatikModus_SM_Betriebsmodus,
  SSM_st_manuellerModus_SM_Betriebsmodus
} SSM_ST_SM_Betriebsmodus;
/* AH_Pkg::subf_Pkg::hillHold/SM1: */
typedef enum kcg_tag__7_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1,
  SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1
} _7_SSM_TR_SM1;
/* AH_Pkg::subf_Pkg::hillHold/SM1: */
typedef enum kcg_tag__6_SSM_ST_SM1 {
  SSM_st_hillHold_inaktiv_SM1,
  SSM_st_hilllHold_aktiv_SM1
} _6_SSM_ST_SM1;
/* AH_Pkg::subf_Pkg::autoHold/SM1: */
typedef enum kcg_tag__5_SSM_TR_SM1 {
  _8_SSM_TR_no_trans_SM1,
  SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1,
  SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1,
  _9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1
} _5_SSM_TR_SM1;
/* AH_Pkg::subf_Pkg::autoHold/SM1: */
typedef enum kcg_tag__4_SSM_ST_SM1 {
  SSM_st_bremseGeloest_SM1,
  SSM_st_bremseArretiert_SM1
} _4_SSM_ST_SM1;
/* AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/SM1: */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  _10_SSM_TR_no_trans_SM1,
  SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1,
  SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1
} _3_SSM_TR_SM1;
/* AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/SM1: */
typedef enum kcg_tag__2_SSM_ST_SM1 {
  SSM_st_AH_inaktiv_SM1,
  SSM_st_AH_aktiv_SM1
} _2_SSM_ST_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  _11_SSM_TR_no_trans_SM1,
  SSM_TR_Start_zuendungEinschalten_1_Start_SM1,
  SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1,
  SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1,
  SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1,
  SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1,
  SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1,
  SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1,
  SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1,
  SSM_TR_anfahrenVorbereiten_EPB_arretiert_und_HHVentil_frei_1_anfahrenVorbereiten_SM1,
  SSM_TR_EPB_arretiert_und_HHVentil_frei_anfahren_1_EPB_arretiert_und_HHVentil_frei_SM1,
  SSM_TR_anfahren_fahren_1_anfahren_SM1,
  SSM_TR_fahren_haltenAmBerg_1_fahren_SM1,
  SSM_TR_haltenAmBerg_fzg_Steht_HHVentil_gesperrt_1_haltenAmBerg_SM1,
  SSM_TR_fzg_Steht_HHVentil_gesperrt_zurueckrollen_1_fzg_Steht_HHVentil_gesperrt_SM1,
  SSM_TR_erneutAnfahren_weiterfahren_1_erneutAnfahren_SM1,
  SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1,
  SSM_TR_fzgSteht_parken_1_fzgSteht_SM1,
  SSM_TR_weiterfahren_anhaltenZumBeenden_1_weiterfahren_SM1,
  SSM_TR_zurueckrollen_erneutAnfahren_1_zurueckrollen_SM1
} SSM_TR_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Start_SM1,
  SSM_st_zuendungEinschalten_SM1,
  SSM_st_bremspedalDurchtreten_SM1,
  SSM_st_automastikModusEinstellen_SM1,
  SSM_st_automatikModusEingestellt_SM1,
  SSM_st_cockpitanzeigeBleibtAus_SM1,
  SSM_st_betriebsbremseLoesen_SM1,
  SSM_st_EPB_angezogen_SM1,
  SSM_st_anfahrenVorbereiten_SM1,
  SSM_st_EPB_arretiert_und_HHVentil_frei_SM1,
  SSM_st_anfahren_SM1,
  SSM_st_fahren_SM1,
  SSM_st_haltenAmBerg_SM1,
  SSM_st_fzg_Steht_HHVentil_gesperrt_SM1,
  SSM_st_erneutAnfahren_SM1,
  SSM_st_anhaltenZumBeenden_SM1,
  SSM_st_fzgSteht_SM1,
  SSM_st_parken_SM1,
  SSM_st_weiterfahren_SM1,
  SSM_st_zurueckrollen_SM1
} SSM_ST_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:anfahren:SM2: */
typedef enum kcg_tag_SSM_TR_SM2_anfahren_SM1 {
  SSM_TR_no_trans_SM2_anfahren_SM1,
  _13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1,
  _12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1
} SSM_TR_SM2_anfahren_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:anfahren:SM2: */
typedef enum kcg_tag_SSM_ST_SM2_anfahren_SM1 {
  SSM_st_bremspedalTreten_SM2_anfahren_SM1,
  SSM_st_getriebe_auf_D_SM2_anfahren_SM1,
  SSM_st_gasGeben_SM2_anfahren_SM1
} SSM_ST_SM2_anfahren_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:erneutAnfahren:SM2: */
typedef enum kcg_tag_SSM_TR_SM2_erneutAnfahren_SM1 {
  SSM_TR_no_trans_SM2_erneutAnfahren_SM1,
  SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1,
  SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1
} SSM_TR_SM2_erneutAnfahren_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:erneutAnfahren:SM2: */
typedef enum kcg_tag_SSM_ST_SM2_erneutAnfahren_SM1 {
  SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1,
  SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1,
  SSM_st_gasGeben_SM2_erneutAnfahren_SM1
} SSM_ST_SM2_erneutAnfahren_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:parken:SM5: */
typedef enum kcg_tag_SSM_TR_SM5_parken_SM1 {
  SSM_TR_no_trans_SM5_parken_SM1,
  SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1,
  SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1
} SSM_TR_SM5_parken_SM1;
/* AH_testSuite_Pkg::divFahrer::autoModus_o_autoHold_HillHold/SM1:parken:SM5: */
typedef enum kcg_tag_SSM_ST_SM5_parken_SM1 {
  SSM_st_bremseDurchtreten_SM5_parken_SM1,
  SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1,
  SSM_st_EPB_angezogen_SM5_parken_SM1
} SSM_ST_SM5_parken_SM1;
/* AhTypes_Pkg::ah_Pkg::tasterHold_T/ */
typedef on_off_element_T_AhTypes_Pkg_ah_Pkg tasterHold_T_AhTypes_Pkg_ah_Pkg;

/* AhTypes_Pkg::ah_Pkg::zuendSchalter_T/ */
typedef on_off_element_T_AhTypes_Pkg_ah_Pkg zuendSchalter_T_AhTypes_Pkg_ah_Pkg;

/* AhTypes_Pkg::physical_Pkg::p_in_W_T/ */
typedef kcg_float64 p_in_W_T_AhTypes_Pkg_physical_Pkg;

/* AhTypes_Pkg::physical_Pkg::m_in_kg_T/ */
typedef kcg_float64 m_in_kg_T_AhTypes_Pkg_physical_Pkg;

/* AhTypes_Pkg::physical_Pkg::s_in_m_T/ */
typedef kcg_float64 s_in_m_T_AhTypes_Pkg_physical_Pkg;

/* AhTypes_Pkg::ah_Pkg::bremspedalkraft_T/ */
typedef kcg_float64 bremspedalkraft_T_AhTypes_Pkg_ah_Pkg;

/* AhTypes_Pkg::ah_Pkg::betriebsbremsdruck_T/ */
typedef kcg_float64 betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg;

/* AhTypes_Pkg::ah_Pkg::gaspedalstellung_T/ */
typedef kcg_float64 gaspedalstellung_T_AhTypes_Pkg_ah_Pkg;

/* AhTypes_Pkg::physical_Pkg::v_in_mps_T/ */
typedef kcg_float64 v_in_mps_T_AhTypes_Pkg_physical_Pkg;

/* AhTypes_Pkg::physical_Pkg::angle_in_rad_T/ */
typedef kcg_float64 angle_in_rad_T_AhTypes_Pkg_physical_Pkg;

/* AhTypes_Pkg::physical_Pkg::t_in_s_T/ */
typedef kcg_float64 t_in_s_T_AhTypes_Pkg_physical_Pkg;

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

