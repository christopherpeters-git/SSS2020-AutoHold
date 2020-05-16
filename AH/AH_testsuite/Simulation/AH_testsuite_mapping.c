/* AH_testsuite_mapping.c */

#include "AH_testsuite_type.h"
#include "AH_testsuite_interface.h"
#include "AH_testsuite_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_147, 4);
DECL_SCOPE(scope_146, 3);
DECL_SCOPE(scope_145, 1);
DECL_SCOPE(scope_144, 2);
DECL_SCOPE(scope_143, 1);
DECL_SCOPE(scope_142, 2);
DECL_SCOPE(scope_141, 10);
DECL_SCOPE(scope_140, 1);
DECL_SCOPE(scope_139, 1);
DECL_SCOPE(scope_138, 24);
DECL_SCOPE(scope_137, 1);
DECL_SCOPE(scope_136, 18);
DECL_SCOPE(scope_135, 1);
DECL_SCOPE(scope_134, 15);
DECL_SCOPE(scope_133, 1);
DECL_SCOPE(scope_132, 24);
DECL_SCOPE(scope_131, 1);
DECL_SCOPE(scope_130, 18);
DECL_SCOPE(scope_129, 5);
DECL_SCOPE(scope_128, 1);
DECL_SCOPE(scope_127, 5);
DECL_SCOPE(scope_126, 9);
DECL_SCOPE(scope_125, 1);
DECL_SCOPE(scope_124, 2);
DECL_SCOPE(scope_123, 6);
DECL_SCOPE(scope_122, 1);
DECL_SCOPE(scope_121, 2);
DECL_SCOPE(scope_120, 1);
DECL_SCOPE(scope_119, 3);
DECL_SCOPE(scope_118, 10);
DECL_SCOPE(scope_117, 1);
DECL_SCOPE(scope_116, 2);
DECL_SCOPE(scope_115, 1);
DECL_SCOPE(scope_114, 12);
DECL_SCOPE(scope_113, 1);
DECL_SCOPE(scope_112, 6);
DECL_SCOPE(scope_111, 1);
DECL_SCOPE(scope_110, 8);
DECL_SCOPE(scope_109, 6);
DECL_SCOPE(scope_108, 1);
DECL_SCOPE(scope_107, 2);
DECL_SCOPE(scope_106, 1);
DECL_SCOPE(scope_105, 3);
DECL_SCOPE(scope_104, 10);
DECL_SCOPE(scope_103, 1);
DECL_SCOPE(scope_102, 2);
DECL_SCOPE(scope_101, 1);
DECL_SCOPE(scope_100, 11);
DECL_SCOPE(scope_99, 1);
DECL_SCOPE(scope_98, 5);
DECL_SCOPE(scope_97, 1);
DECL_SCOPE(scope_96, 13);
DECL_SCOPE(scope_95, 1);
DECL_SCOPE(scope_94, 4);
DECL_SCOPE(scope_93, 1);
DECL_SCOPE(scope_92, 18);
DECL_SCOPE(scope_91, 1);
DECL_SCOPE(scope_90, 15);
DECL_SCOPE(scope_89, 1);
DECL_SCOPE(scope_88, 16);
DECL_SCOPE(scope_87, 1);
DECL_SCOPE(scope_86, 2);
DECL_SCOPE(scope_85, 1);
DECL_SCOPE(scope_84, 2);
DECL_SCOPE(scope_83, 1);
DECL_SCOPE(scope_82, 1);
DECL_SCOPE(scope_81, 29);
DECL_SCOPE(scope_80, 25);
DECL_SCOPE(scope_79, 6);
DECL_SCOPE(scope_78, 1);
DECL_SCOPE(scope_77, 3);
DECL_SCOPE(scope_76, 1);
DECL_SCOPE(scope_75, 3);
DECL_SCOPE(scope_74, 9);
DECL_SCOPE(scope_73, 20);
DECL_SCOPE(scope_72, 19);
DECL_SCOPE(scope_71, 18);
DECL_SCOPE(scope_70, 1);
DECL_SCOPE(scope_69, 1);
DECL_SCOPE(scope_68, 14);
DECL_SCOPE(scope_67, 1);
DECL_SCOPE(scope_66, 3);
DECL_SCOPE(scope_65, 9);
DECL_SCOPE(scope_64, 32);
DECL_SCOPE(scope_63, 1);
DECL_SCOPE(scope_62, 2);
DECL_SCOPE(scope_61, 1);
DECL_SCOPE(scope_60, 2);
DECL_SCOPE(scope_59, 9);
DECL_SCOPE(scope_58, 6);
DECL_SCOPE(scope_57, 33);
DECL_SCOPE(scope_56, 20);
DECL_SCOPE(scope_55, 19);
DECL_SCOPE(scope_54, 1);
DECL_SCOPE(scope_53, 10);
DECL_SCOPE(scope_52, 1);
DECL_SCOPE(scope_51, 10);
DECL_SCOPE(scope_50, 9);
DECL_SCOPE(scope_49, 4);
DECL_SCOPE(scope_48, 26);
DECL_SCOPE(scope_47, 28);
DECL_SCOPE(scope_46, 18);
DECL_SCOPE(scope_45, 1);
DECL_SCOPE(scope_44, 3);
DECL_SCOPE(scope_43, 9);
DECL_SCOPE(scope_42, 1);
DECL_SCOPE(scope_41, 3);
DECL_SCOPE(scope_40, 1);
DECL_SCOPE(scope_39, 3);
DECL_SCOPE(scope_38, 9);
DECL_SCOPE(scope_37, 6);
DECL_SCOPE(scope_36, 9);
DECL_SCOPE(scope_35, 6);
DECL_SCOPE(scope_34, 23);
DECL_SCOPE(scope_33, 12);
DECL_SCOPE(scope_32, 14);
DECL_SCOPE(scope_31, 8);
DECL_SCOPE(scope_30, 28);
DECL_SCOPE(scope_29, 8);
DECL_SCOPE(scope_28, 6);
DECL_SCOPE(scope_27, 6);
DECL_SCOPE(scope_26, 16);
DECL_SCOPE(scope_25, 35);
DECL_SCOPE(scope_24, 77);
DECL_SCOPE(scope_23, 6);
DECL_SCOPE(scope_22, 6);
DECL_SCOPE(scope_21, 2);
DECL_SCOPE(scope_20, 1);
DECL_SCOPE(scope_19, 3);
DECL_SCOPE(scope_18, 11);
DECL_SCOPE(scope_17, 3);
DECL_SCOPE(scope_16, 3);
DECL_SCOPE(scope_15, 3);
DECL_SCOPE(scope_14, 9);
DECL_SCOPE(scope_13, 9);
DECL_SCOPE(scope_12, 55);
DECL_SCOPE(scope_11, 28);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 1);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 3);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 3);
DECL_SCOPE(scope_3, 2);
DECL_SCOPE(scope_2, 43);
DECL_SCOPE(scope_1, 48);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_EPB_SM_SSM_st_epb_arretiert_EPB_SM(void* pHandle) { return *(SSM_ST_EPB_SM*)pHandle == SSM_st_epb_arretiert_EPB_SM; }
static int isActive_SSM_ST_EPB_SM_SSM_st_epb_geloest_EPB_SM(void* pHandle) { return *(SSM_ST_EPB_SM*)pHandle == SSM_st_epb_geloest_EPB_SM; }
static int isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_EPB_angezogen_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_EPB_arretiert_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Start_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Start_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anfahrenAusAutoHold_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anfahrenVorbereiten_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anfahren_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anfahren_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anhaltenMitAutoHold_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anhaltenZumBeenden_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_anhalten_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_anhalten_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_autoHoldEinschalten_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_autoHoldEinschalten_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_automastikModusEinstellen_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_automatikModusEingestellt_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_betriebsbremseLoesen_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_betriebsbremseLoesen_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_bremspedalDurchtreten_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_bremspedalDurchtreten_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_cockpitanzeigeBleibtAus_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_erneutAnfahren_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_erneutAnfahren_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_fahren_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_fahren_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_fzgSteht_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_fzg_Steht_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_haltImAutoHold_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_parken_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_parken_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_zuendungEinschalten_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_zuendungEinschalten_SM1; }
static int isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_bremspedalTreten_SM2_anfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_anfahren_SM1*)pHandle == SSM_st_bremspedalTreten_SM2_anfahren_SM1; }
static int isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_anfahren_SM1*)pHandle == SSM_st_gasGeben_SM2_anfahren_SM1; }
static int isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_getriebe_auf_D_SM2_anfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_anfahren_SM1*)pHandle == SSM_st_getriebe_auf_D_SM2_anfahren_SM1; }
static int isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_erneutAnfahren_SM1*)pHandle == SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1; }
static int isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_erneutAnfahren_SM1*)pHandle == SSM_st_gasGeben_SM2_erneutAnfahren_SM1; }
static int isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1(void* pHandle) { return *(SSM_ST_SM2_erneutAnfahren_SM1*)pHandle == SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1; }
static int isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1(void* pHandle) { return *(SSM_ST_SM4_autoHoldEinschalten_SM1*)pHandle == SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1; }
static int isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1(void* pHandle) { return *(SSM_ST_SM4_autoHoldEinschalten_SM1*)pHandle == SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1; }
static int isActive_SSM_ST_SM5_parken_SM1_SSM_st_EPB_angezogen_SM5_parken_SM1(void* pHandle) { return *(SSM_ST_SM5_parken_SM1*)pHandle == SSM_st_EPB_angezogen_SM5_parken_SM1; }
static int isActive_SSM_ST_SM5_parken_SM1_SSM_st_bremseDurchtreten_SM5_parken_SM1(void* pHandle) { return *(SSM_ST_SM5_parken_SM1*)pHandle == SSM_st_bremseDurchtreten_SM5_parken_SM1; }
static int isActive_SSM_ST_SM5_parken_SM1_SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1(void* pHandle) { return *(SSM_ST_SM5_parken_SM1*)pHandle == SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1; }
static int isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus(void* pHandle) { return *(SSM_ST_SM_Betriebsmodus*)pHandle == SSM_st_automatikModus_SM_Betriebsmodus; }
static int isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus(void* pHandle) { return *(SSM_ST_SM_Betriebsmodus*)pHandle == SSM_st_manuellerModus_SM_Betriebsmodus; }
static int isActive_SSM_TR_EPB_SM_SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM(void* pHandle) { return *(SSM_TR_EPB_SM*)pHandle == SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM; }
static int isActive_SSM_TR_EPB_SM_SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM(void* pHandle) { return *(SSM_TR_EPB_SM*)pHandle == SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM; }
static int isActive_SSM_TR_SM1_SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Start_zuendungEinschalten_1_Start_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Start_zuendungEinschalten_1_Start_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anfahrenAusAutoHold_anhaltenZumBeenden_1_anfahrenAusAutoHold_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anfahrenAusAutoHold_anhaltenZumBeenden_1_anfahrenAusAutoHold_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anfahren_fahren_1_anfahren_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anfahren_fahren_1_anfahren_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_anhalten_fzg_Steht_1_anhalten_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_anhalten_fzg_Steht_1_anhalten_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_autoHoldEinschalten_anhaltenMitAutoHold_1_autoHoldEinschalten_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_autoHoldEinschalten_anhaltenMitAutoHold_1_autoHoldEinschalten_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_erneutAnfahren_autoHoldEinschalten_1_erneutAnfahren_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_erneutAnfahren_autoHoldEinschalten_1_erneutAnfahren_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_fahren_anhalten_1_fahren_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_fahren_anhalten_1_fahren_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_fzgSteht_parken_1_fzgSteht_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_fzgSteht_parken_1_fzgSteht_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_haltImAutoHold_anfahrenAusAutoHold_1_haltImAutoHold_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_haltImAutoHold_anfahrenAusAutoHold_1_haltImAutoHold_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1; }
static int isActive_SSM_TR_SM2_anfahren_SM1__12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1(void* pHandle) { return *(SSM_TR_SM2_anfahren_SM1*)pHandle == _12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1; }
static int isActive_SSM_TR_SM2_anfahren_SM1__13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1(void* pHandle) { return *(SSM_TR_SM2_anfahren_SM1*)pHandle == _13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1; }
static int isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1(void* pHandle) { return *(SSM_TR_SM2_erneutAnfahren_SM1*)pHandle == SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1; }
static int isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1(void* pHandle) { return *(SSM_TR_SM2_erneutAnfahren_SM1*)pHandle == SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1; }
static int isActive_SSM_TR_SM4_autoHoldEinschalten_SM1_SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1(void* pHandle) { return *(SSM_TR_SM4_autoHoldEinschalten_SM1*)pHandle == SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1; }
static int isActive_SSM_TR_SM5_parken_SM1_SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1(void* pHandle) { return *(SSM_TR_SM5_parken_SM1*)pHandle == SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1; }
static int isActive_SSM_TR_SM5_parken_SM1_SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1(void* pHandle) { return *(SSM_TR_SM5_parken_SM1*)pHandle == SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1; }
static int isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus(void* pHandle) { return *(SSM_TR_SM_Betriebsmodus*)pHandle == SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus; }
static int isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus(void* pHandle) { return *(SSM_TR_SM_Betriebsmodus*)pHandle == SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus; }
static int isActive__2_SSM_ST_SM1_SSM_st_AH_aktiv_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_AH_aktiv_SM1; }
static int isActive__2_SSM_ST_SM1_SSM_st_AH_inaktiv_SM1(void* pHandle) { return *(_2_SSM_ST_SM1*)pHandle == SSM_st_AH_inaktiv_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1; }
static int isActive__3_SSM_TR_SM1_SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1(void* pHandle) { return *(_3_SSM_TR_SM1*)pHandle == SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_bremseArretiert_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_bremseGeloest_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_bremseGeloest_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1; }
static int isActive__5_SSM_TR_SM1__9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == _9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_hillHold_inaktiv_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_hillHold_inaktiv_SM1; }
static int isActive__6_SSM_ST_SM1_SSM_st_hilllHold_aktiv_SM1(void* pHandle) { return *(_6_SSM_ST_SM1*)pHandle == SSM_st_hilllHold_aktiv_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1; }
static int isActive__7_SSM_TR_SM1_SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1(void* pHandle) { return *(_7_SSM_TR_SM1*)pHandle == SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }
static int isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg(void* pHandle) { return *(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pHandle == sw2_off_AhTypes_Pkg_ah_Pkg; }
static int isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_on_AhTypes_Pkg_ah_Pkg(void* pHandle) { return *(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pHandle == sw2_on_AhTypes_Pkg_ah_Pkg; }

/* mapping definition */


const MappingEntry scope_147_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "uhrzeit", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_systemUhr_AhTypes_Pkg_utils_Pkg, uhrzeit), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_systemUhr_AhTypes_Pkg_utils_Pkg, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_systemUhr_AhTypes_Pkg_utils_Pkg, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_systemUhr_AhTypes_Pkg_utils_Pkg, _L10), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_147 = {
    "AhTypes_Pkg::utils_Pkg::systemUhr/ systemUhr_AhTypes_Pkg_utils_Pkg",
    scope_147_entries, 4
};

const MappingEntry scope_146_entries[3] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_EPB_angezogen_SM5_parken_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[24], isActive_SSM_ST_SM5_parken_SM1_SSM_st_EPB_angezogen_SM5_parken_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_EPB_angezogen_SM5_parken_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[24], isActive_SSM_ST_SM5_parken_SM1_SSM_st_EPB_angezogen_SM5_parken_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_EPB_angezogen_SM5_parken_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[24], isActive_SSM_ST_SM5_parken_SM1_SSM_st_EPB_angezogen_SM5_parken_SM1, NULL, 1, 2 }
};
const MappingScope scope_146 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:EPB_angezogen:",
    scope_146_entries, 3
};

const MappingEntry scope_145_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_141_entries[6], isActive_SSM_TR_SM5_parken_SM1_SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1, NULL, 1, 0 }
};
const MappingScope scope_145 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:getriebeWahlhebelNach_P:<1",
    scope_145_entries, 1
};

const MappingEntry scope_144_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_141_entries[6], isActive_SSM_TR_SM5_parken_SM1_SSM_TR_getriebeWahlhebelNach_P_EPB_angezogen_1_getriebeWahlhebelNach_P_SM5_parken_SM1, &scope_145, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_getriebeWahlhebelNach_P_SM5_parken_SM1), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[24], isActive_SSM_ST_SM5_parken_SM1_SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1, NULL, 1, 1 }
};
const MappingScope scope_144 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:getriebeWahlhebelNach_P:",
    scope_144_entries, 2
};

const MappingEntry scope_143_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_141_entries[6], isActive_SSM_TR_SM5_parken_SM1_SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1, NULL, 1, 0 }
};
const MappingScope scope_143 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:bremseDurchtreten:<1",
    scope_143_entries, 1
};

const MappingEntry scope_142_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_141_entries[6], isActive_SSM_TR_SM5_parken_SM1_SSM_TR_bremseDurchtreten_getriebeWahlhebelNach_P_1_bremseDurchtreten_SM5_parken_SM1, &scope_143, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_bremseDurchtreten_SM5_parken_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[24], isActive_SSM_ST_SM5_parken_SM1_SSM_st_bremseDurchtreten_SM5_parken_SM1, NULL, 1, 1 }
};
const MappingScope scope_142 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:bremseDurchtreten:",
    scope_142_entries, 2
};

const MappingEntry scope_141_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_state_act_parken_SM1), &_Type_SSM_ST_SM5_parken_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_reset_act_parken_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_state_nxt_parken_SM1), &_Type_SSM_ST_SM5_parken_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_reset_nxt_parken_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_state_sel_parken_SM1), &_Type_SSM_ST_SM5_parken_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_fired_strong_parken_SM1), &_Type_SSM_TR_SM5_parken_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_fired_parken_SM1), &_Type_SSM_TR_SM5_parken_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "bremseDurchtreten:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_SSM_ST_SM5_parken_SM1_SSM_st_bremseDurchtreten_SM5_parken_SM1, &scope_142, 1, 7 },
    /* 8 */ { MAP_STATE, "getriebeWahlhebelNach_P:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_SSM_ST_SM5_parken_SM1_SSM_st_getriebeWahlhebelNach_P_SM5_parken_SM1, &scope_144, 1, 8 },
    /* 9 */ { MAP_STATE, "EPB_angezogen:", NULL, 0, 0, NULL, &scope_141_entries[0], isActive_SSM_ST_SM5_parken_SM1_SSM_st_EPB_angezogen_SM5_parken_SM1, &scope_146, 1, 9 }
};
const MappingScope scope_141 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:SM5:",
    scope_141_entries, 10
};

const MappingEntry scope_140_entries[1] = {
    /* 0 */ { MAP_AUTOMATON, "SM5:", NULL, 0, 0, NULL, NULL, NULL, &scope_141, 1, 0 }
};
const MappingScope scope_140 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:parken:",
    scope_140_entries, 1
};

const MappingEntry scope_139_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fzgSteht_parken_1_fzgSteht_SM1, NULL, 1, 0 }
};
const MappingScope scope_139 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fzgSteht:<1",
    scope_139_entries, 1
};

const MappingEntry scope_138_entries[24] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fzgSteht_parken_1_fzgSteht_SM1, &scope_139, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_fzgSteht_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_fzgSteht_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_fzgSteht_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_fzgSteht_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_fzgSteht_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L41", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L41_fzgSteht_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L40_fzgSteht_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L38_fzgSteht_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L36_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L35", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L35_fzgSteht_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L34_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L32_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L42", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L42_fzgSteht_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L43_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L54", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L54_fzgSteht_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L55_fzgSteht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L57", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L57_fzgSteht_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, NULL, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 10", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_10), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, &scope_34, 1, 23 }
};
const MappingScope scope_138 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fzgSteht:",
    scope_138_entries, 24
};

const MappingEntry scope_137_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1, NULL, 1, 0 }
};
const MappingScope scope_137 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhaltenZumBeenden:<1",
    scope_137_entries, 1
};

const MappingEntry scope_136_entries[18] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhaltenZumBeenden_fzgSteht_1_anhaltenZumBeenden_SM1, &scope_137, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_anhaltenZumBeenden_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_anhaltenZumBeenden_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_anhaltenZumBeenden_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_anhaltenZumBeenden_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L15_anhaltenZumBeenden_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L16_anhaltenZumBeenden_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L17_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L18_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L19_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L20_anhaltenZumBeenden_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L21", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L21_anhaltenZumBeenden_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L22_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L23_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L24_anhaltenZumBeenden_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L25_anhaltenZumBeenden_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L26_anhaltenZumBeenden_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, NULL, 1, 17 }
};
const MappingScope scope_136 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhaltenZumBeenden:",
    scope_136_entries, 18
};

const MappingEntry scope_135_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahrenAusAutoHold_anhaltenZumBeenden_1_anfahrenAusAutoHold_SM1, NULL, 1, 0 }
};
const MappingScope scope_135 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahrenAusAutoHold:<1",
    scope_135_entries, 1
};

const MappingEntry scope_134_entries[15] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahrenAusAutoHold_anhaltenZumBeenden_1_anfahrenAusAutoHold_SM1, &scope_135, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_anfahrenAusAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_anfahrenAusAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_anfahrenAusAutoHold_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_anfahrenAusAutoHold_SM1), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_anfahrenAusAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_anfahrenAusAutoHold_SM1), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_anfahrenAusAutoHold_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_anfahrenAusAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_anfahrenAusAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, NULL, 1, 14 }
};
const MappingScope scope_134 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahrenAusAutoHold:",
    scope_134_entries, 15
};

const MappingEntry scope_133_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_haltImAutoHold_anfahrenAusAutoHold_1_haltImAutoHold_SM1, NULL, 1, 0 }
};
const MappingScope scope_133 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:haltImAutoHold:<1",
    scope_133_entries, 1
};

const MappingEntry scope_132_entries[24] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_haltImAutoHold_anfahrenAusAutoHold_1_haltImAutoHold_SM1, &scope_133, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_haltImAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_haltImAutoHold_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_haltImAutoHold_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_haltImAutoHold_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_haltImAutoHold_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L41", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L41_haltImAutoHold_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L40_haltImAutoHold_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L38_haltImAutoHold_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L36_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L35", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L35_haltImAutoHold_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L34_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L32_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L42", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L42_haltImAutoHold_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L43_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L54", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L54_haltImAutoHold_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L55_haltImAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L57", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L57_haltImAutoHold_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, NULL, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 9", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_9), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, &scope_34, 1, 23 }
};
const MappingScope scope_132 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:haltImAutoHold:",
    scope_132_entries, 24
};

const MappingEntry scope_131_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1, NULL, 1, 0 }
};
const MappingScope scope_131 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhaltenMitAutoHold:<1",
    scope_131_entries, 1
};

const MappingEntry scope_130_entries[18] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1, &scope_131, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_anhaltenMitAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_anhaltenMitAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_anhaltenMitAutoHold_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_anhaltenMitAutoHold_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L15_anhaltenMitAutoHold_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L16_anhaltenMitAutoHold_SM1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L17_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L18_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L19_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L20_anhaltenMitAutoHold_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L21", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L21_anhaltenMitAutoHold_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L22_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L23_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L24_anhaltenMitAutoHold_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L25_anhaltenMitAutoHold_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L26_anhaltenMitAutoHold_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, NULL, 1, 17 }
};
const MappingScope scope_130 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhaltenMitAutoHold:",
    scope_130_entries, 18
};

const MappingEntry scope_129_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_HoldLoesen_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_HoldLoesen_SM4_autoHoldEinschalten_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_HoldLoesen_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_HoldLoesen_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_HoldLoesen_SM4_autoHoldEinschalten_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, NULL, 1, 4 }
};
const MappingScope scope_129 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:SM4:HoldLoesen:",
    scope_129_entries, 5
};

const MappingEntry scope_128_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_126_entries[6], isActive_SSM_TR_SM4_autoHoldEinschalten_SM1_SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1, NULL, 1, 0 }
};
const MappingScope scope_128 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:SM4:HoldDruecken:<1",
    scope_128_entries, 1
};

const MappingEntry scope_127_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_126_entries[6], isActive_SSM_TR_SM4_autoHoldEinschalten_SM1_SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1, &scope_128, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_HoldDruecken_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_HoldDruecken_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_HoldDruecken_SM4_autoHoldEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_HoldDruecken_SM4_autoHoldEinschalten_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[23], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1, NULL, 1, 4 }
};
const MappingScope scope_127 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:SM4:HoldDruecken:",
    scope_127_entries, 5
};

const MappingEntry scope_126_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_state_act_autoHoldEinschalten_SM1), &_Type_SSM_ST_SM4_autoHoldEinschalten_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_reset_act_autoHoldEinschalten_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_state_nxt_autoHoldEinschalten_SM1), &_Type_SSM_ST_SM4_autoHoldEinschalten_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_reset_nxt_autoHoldEinschalten_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_state_sel_autoHoldEinschalten_SM1), &_Type_SSM_ST_SM4_autoHoldEinschalten_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_fired_strong_autoHoldEinschalten_SM1), &_Type_SSM_TR_SM4_autoHoldEinschalten_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_fired_autoHoldEinschalten_SM1), &_Type_SSM_TR_SM4_autoHoldEinschalten_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "HoldDruecken:", NULL, 0, 0, NULL, &scope_126_entries[0], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1, &scope_127, 1, 7 },
    /* 8 */ { MAP_STATE, "HoldLoesen:", NULL, 0, 0, NULL, &scope_126_entries[0], isActive_SSM_ST_SM4_autoHoldEinschalten_SM1_SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1, &scope_129, 1, 8 }
};
const MappingScope scope_126 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:SM4:",
    scope_126_entries, 9
};

const MappingEntry scope_125_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_autoHoldEinschalten_anhaltenMitAutoHold_1_autoHoldEinschalten_SM1, NULL, 1, 0 }
};
const MappingScope scope_125 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:<1",
    scope_125_entries, 1
};

const MappingEntry scope_124_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_autoHoldEinschalten_anhaltenMitAutoHold_1_autoHoldEinschalten_SM1, &scope_125, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM4:", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 1 }
};
const MappingScope scope_124 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:autoHoldEinschalten:",
    scope_124_entries, 2
};

const MappingEntry scope_123_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_gasGeben_SM2_erneutAnfahren_SM1), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_gasGeben_SM2_erneutAnfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_gasGeben_SM2_erneutAnfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_gasGeben_SM2_erneutAnfahren_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_gasGeben_SM2_erneutAnfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_gasGeben_SM2_erneutAnfahren_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, NULL, 1, 5 }
};
const MappingScope scope_123 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:gasGeben:",
    scope_123_entries, 6
};

const MappingEntry scope_122_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_118_entries[6], isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_122 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:getriebe_auf_D:<1",
    scope_122_entries, 1
};

const MappingEntry scope_121_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_118_entries[6], isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_erneutAnfahren_SM1, &scope_122, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_getriebe_auf_D_SM2_erneutAnfahren_SM1), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1, NULL, 1, 1 }
};
const MappingScope scope_121 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:getriebe_auf_D:",
    scope_121_entries, 2
};

const MappingEntry scope_120_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_118_entries[6], isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_120 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:bremspedalTreten:<1",
    scope_120_entries, 1
};

const MappingEntry scope_119_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_118_entries[6], isActive_SSM_TR_SM2_erneutAnfahren_SM1_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_erneutAnfahren_SM1, &scope_120, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_bremspedalTreten_SM2_erneutAnfahren_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_bremspedalTreten_SM2_erneutAnfahren_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[22], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1, NULL, 1, 2 }
};
const MappingScope scope_119 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:bremspedalTreten:",
    scope_119_entries, 3
};

const MappingEntry scope_118_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_act_erneutAnfahren_SM1), &_Type_SSM_ST_SM2_erneutAnfahren_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_reset_act_erneutAnfahren_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_nxt_erneutAnfahren_SM1), &_Type_SSM_ST_SM2_erneutAnfahren_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_reset_nxt_erneutAnfahren_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_sel_erneutAnfahren_SM1), &_Type_SSM_ST_SM2_erneutAnfahren_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_fired_strong_erneutAnfahren_SM1), &_Type_SSM_TR_SM2_erneutAnfahren_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_fired_erneutAnfahren_SM1), &_Type_SSM_TR_SM2_erneutAnfahren_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "bremspedalTreten:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_bremspedalTreten_SM2_erneutAnfahren_SM1, &scope_119, 1, 7 },
    /* 8 */ { MAP_STATE, "getriebe_auf_D:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_getriebe_auf_D_SM2_erneutAnfahren_SM1, &scope_121, 1, 8 },
    /* 9 */ { MAP_STATE, "gasGeben:", NULL, 0, 0, NULL, &scope_118_entries[0], isActive_SSM_ST_SM2_erneutAnfahren_SM1_SSM_st_gasGeben_SM2_erneutAnfahren_SM1, &scope_123, 1, 9 }
};
const MappingScope scope_118 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:SM2:",
    scope_118_entries, 10
};

const MappingEntry scope_117_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_erneutAnfahren_autoHoldEinschalten_1_erneutAnfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_117 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:<1",
    scope_117_entries, 1
};

const MappingEntry scope_116_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_erneutAnfahren_autoHoldEinschalten_1_erneutAnfahren_SM1, &scope_117, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_118, 1, 1 }
};
const MappingScope scope_116 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:erneutAnfahren:",
    scope_116_entries, 2
};

const MappingEntry scope_115_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1, NULL, 1, 0 }
};
const MappingScope scope_115 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fzg_Steht:<1",
    scope_115_entries, 1
};

const MappingEntry scope_114_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fzg_Steht_erneutAnfahren_1_fzg_Steht_SM1, &scope_115, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_fzg_Steht_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_fzg_Steht_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_fzg_Steht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_fzg_Steht_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_fzg_Steht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_fzg_Steht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_fzg_Steht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_fzg_Steht_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_fzg_Steht_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_fzg_Steht_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 8", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_8), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, &scope_34, 1, 11 }
};
const MappingScope scope_114 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fzg_Steht:",
    scope_114_entries, 12
};

const MappingEntry scope_113_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhalten_fzg_Steht_1_anhalten_SM1, NULL, 1, 0 }
};
const MappingScope scope_113 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhalten:<1",
    scope_113_entries, 1
};

const MappingEntry scope_112_entries[6] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anhalten_fzg_Steht_1_anhalten_SM1, &scope_113, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_anhalten_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_anhalten_SM1), &_Type_kcg_float64_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_anhalten_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_anhalten_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_anhalten_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, NULL, 1, 5 }
};
const MappingScope scope_112 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anhalten:",
    scope_112_entries, 6
};

const MappingEntry scope_111_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fahren_anhalten_1_fahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_111 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fahren:<1",
    scope_111_entries, 1
};

const MappingEntry scope_110_entries[8] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_fahren_anhalten_1_fahren_SM1, &scope_111, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_fahren_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_fahren_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_fahren_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_fahren_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_fahren_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_fahren_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 6", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_6), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, &scope_34, 1, 7 }
};
const MappingScope scope_110 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:fahren:",
    scope_110_entries, 8
};

const MappingEntry scope_109_entries[6] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_gasGeben_SM2_anfahren_SM1), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_gasGeben_SM2_anfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_gasGeben_SM2_anfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_gasGeben_SM2_anfahren_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_gasGeben_SM2_anfahren_SM1), &_Type_kcg_float64_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_gasGeben_SM2_anfahren_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, NULL, 1, 5 }
};
const MappingScope scope_109 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:gasGeben:",
    scope_109_entries, 6
};

const MappingEntry scope_108_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_104_entries[6], isActive_SSM_TR_SM2_anfahren_SM1__12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_108 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:getriebe_auf_D:<1",
    scope_108_entries, 1
};

const MappingEntry scope_107_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_104_entries[6], isActive_SSM_TR_SM2_anfahren_SM1__12_SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1, &scope_108, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_getriebe_auf_D_SM2_anfahren_SM1), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_getriebe_auf_D_SM2_anfahren_SM1, NULL, 1, 1 }
};
const MappingScope scope_107 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:getriebe_auf_D:",
    scope_107_entries, 2
};

const MappingEntry scope_106_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_104_entries[6], isActive_SSM_TR_SM2_anfahren_SM1__13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_106 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:bremspedalTreten:<1",
    scope_106_entries, 1
};

const MappingEntry scope_105_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_104_entries[6], isActive_SSM_TR_SM2_anfahren_SM1__13_SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1, &scope_106, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_bremspedalTreten_SM2_anfahren_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_bremspedalTreten_SM2_anfahren_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_bremspedalTreten_SM2_anfahren_SM1), &_Type_kcg_bool_Utils, &scope_80_entries[20], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_bremspedalTreten_SM2_anfahren_SM1, NULL, 1, 2 }
};
const MappingScope scope_105 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:bremspedalTreten:",
    scope_105_entries, 3
};

const MappingEntry scope_104_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_act_anfahren_SM1), &_Type_SSM_ST_SM2_anfahren_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_reset_act_anfahren_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_nxt_anfahren_SM1), &_Type_SSM_ST_SM2_anfahren_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_reset_nxt_anfahren_SM1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_state_sel_anfahren_SM1), &_Type_SSM_ST_SM2_anfahren_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_fired_strong_anfahren_SM1), &_Type_SSM_TR_SM2_anfahren_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_fired_anfahren_SM1), &_Type_SSM_TR_SM2_anfahren_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "bremspedalTreten:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_bremspedalTreten_SM2_anfahren_SM1, &scope_105, 1, 7 },
    /* 8 */ { MAP_STATE, "getriebe_auf_D:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_getriebe_auf_D_SM2_anfahren_SM1, &scope_107, 1, 8 },
    /* 9 */ { MAP_STATE, "gasGeben:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_SSM_ST_SM2_anfahren_SM1_SSM_st_gasGeben_SM2_anfahren_SM1, &scope_109, 1, 9 }
};
const MappingScope scope_104 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:SM2:",
    scope_104_entries, 10
};

const MappingEntry scope_103_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahren_fahren_1_anfahren_SM1, NULL, 1, 0 }
};
const MappingScope scope_103 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:<1",
    scope_103_entries, 1
};

const MappingEntry scope_102_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahren_fahren_1_anfahren_SM1, &scope_103, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_104, 1, 1 }
};
const MappingScope scope_102 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahren:",
    scope_102_entries, 2
};

const MappingEntry scope_101_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1, NULL, 1, 0 }
};
const MappingScope scope_101 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:EPB_arretiert:<1",
    scope_101_entries, 1
};

const MappingEntry scope_100_entries[11] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1, &scope_101, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_EPB_arretiert_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_EPB_arretiert_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_EPB_arretiert_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_EPB_arretiert_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_EPB_arretiert_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_EPB_arretiert_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_EPB_arretiert_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_EPB_arretiert_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L15_EPB_arretiert_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 5", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_5), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, &scope_34, 1, 10 }
};
const MappingScope scope_100 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:EPB_arretiert:",
    scope_100_entries, 11
};

const MappingEntry scope_99_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1, NULL, 1, 0 }
};
const MappingScope scope_99 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahrenVorbereiten:<1",
    scope_99_entries, 1
};

const MappingEntry scope_98_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1, &scope_99, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_anfahrenVorbereiten_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_anfahrenVorbereiten_SM1), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_anfahrenVorbereiten_SM1), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_anfahrenVorbereiten_SM1), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1, NULL, 1, 4 }
};
const MappingScope scope_98 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:anfahrenVorbereiten:",
    scope_98_entries, 5
};

const MappingEntry scope_97_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1, NULL, 1, 0 }
};
const MappingScope scope_97 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:EPB_angezogen:<1",
    scope_97_entries, 1
};

const MappingEntry scope_96_entries[13] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1, &scope_97, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_EPB_angezogen_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_EPB_angezogen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_EPB_angezogen_SM1), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_EPB_angezogen_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_EPB_angezogen_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_EPB_angezogen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_EPB_angezogen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_EPB_angezogen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_EPB_angezogen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_EPB_angezogen_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_EPB_angezogen_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 4", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_4), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, &scope_34, 1, 12 }
};
const MappingScope scope_96 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:EPB_angezogen:",
    scope_96_entries, 13
};

const MappingEntry scope_95_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1, NULL, 1, 0 }
};
const MappingScope scope_95 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:betriebsbremseLoesen:<1",
    scope_95_entries, 1
};

const MappingEntry scope_94_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1, &scope_95, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_betriebsbremseLoesen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_betriebsbremseLoesen_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_betriebsbremseLoesen_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_betriebsbremseLoesen_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_betriebsbremseLoesen_SM1), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_betriebsbremseLoesen_SM1, NULL, 1, 3 }
};
const MappingScope scope_94 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:betriebsbremseLoesen:",
    scope_94_entries, 4
};

const MappingEntry scope_93_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1, NULL, 1, 0 }
};
const MappingScope scope_93 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:cockpitanzeigeBleibtAus:<1",
    scope_93_entries, 1
};

const MappingEntry scope_92_entries[18] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1, &scope_93, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_cockpitanzeigeBleibtAus_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_cockpitanzeigeBleibtAus_SM1), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_cockpitanzeigeBleibtAus_SM1), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_cockpitanzeigeBleibtAus_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L16_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L21_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L22_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L20_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L19_cockpitanzeigeBleibtAus_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L18_cockpitanzeigeBleibtAus_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L23", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L23_cockpitanzeigeBleibtAus_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L25_cockpitanzeigeBleibtAus_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L26_cockpitanzeigeBleibtAus_SM1), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 3", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_3), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, &scope_34, 1, 17 }
};
const MappingScope scope_92 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:cockpitanzeigeBleibtAus:",
    scope_92_entries, 18
};

const MappingEntry scope_91_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1, NULL, 1, 0 }
};
const MappingScope scope_91 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:automatikModusEingestellt:<1",
    scope_91_entries, 1
};

const MappingEntry scope_90_entries[15] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1, &scope_91, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_automatikModusEingestellt_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_automatikModusEingestellt_SM1), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L9_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_automatikModusEingestellt_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_automatikModusEingestellt_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L12_automatikModusEingestellt_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L14", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_automatikModusEingestellt_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L15", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L15_automatikModusEingestellt_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 2", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_2), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, &scope_34, 1, 14 }
};
const MappingScope scope_90 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:automatikModusEingestellt:",
    scope_90_entries, 15
};

const MappingEntry scope_89_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1, NULL, 1, 0 }
};
const MappingScope scope_89 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:automastikModusEinstellen:<1",
    scope_89_entries, 1
};

const MappingEntry scope_88_entries[16] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[6], isActive_SSM_TR_SM1_SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1, &scope_89, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8_automastikModusEinstellen_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10_automastikModusEinstellen_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L11_automastikModusEinstellen_SM1), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L13_automastikModusEinstellen_SM1), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L14_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L15_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L16_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L17_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L25_automastikModusEinstellen_SM1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L26_automastikModusEinstellen_SM1), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, Context_countDownTimer_1), NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, &scope_34, 1, 15 }
};
const MappingScope scope_88 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:automastikModusEinstellen:",
    scope_88_entries, 16
};

const MappingEntry scope_87_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1, NULL, 1, 0 }
};
const MappingScope scope_87 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:bremspedalDurchtreten:<1",
    scope_87_entries, 1
};

const MappingEntry scope_86_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1, &scope_87, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2_bremspedalDurchtreten_SM1), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_bremspedalDurchtreten_SM1, NULL, 1, 1 }
};
const MappingScope scope_86 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:bremspedalDurchtreten:",
    scope_86_entries, 2
};

const MappingEntry scope_85_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1, NULL, 1, 0 }
};
const MappingScope scope_85 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:zuendungEinschalten:<1",
    scope_85_entries, 1
};

const MappingEntry scope_84_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1, &scope_85, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1_zuendungEinschalten_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_zuendungEinschalten_SM1, NULL, 1, 1 }
};
const MappingScope scope_84 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:zuendungEinschalten:",
    scope_84_entries, 2
};

const MappingEntry scope_83_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_Start_zuendungEinschalten_1_Start_SM1, NULL, 1, 0 }
};
const MappingScope scope_83 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:Start:<1",
    scope_83_entries, 1
};

const MappingEntry scope_82_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_81_entries[5], isActive_SSM_TR_SM1_SSM_TR_Start_zuendungEinschalten_1_Start_SM1, &scope_83, 1, 0 }
};
const MappingScope scope_82 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:Start:",
    scope_82_entries, 1
};

const MappingEntry scope_81_entries[29] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Start:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_Start_SM1, &scope_82, 1, 7 },
    /* 8 */ { MAP_STATE, "zuendungEinschalten:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_zuendungEinschalten_SM1, &scope_84, 1, 8 },
    /* 9 */ { MAP_STATE, "bremspedalDurchtreten:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_bremspedalDurchtreten_SM1, &scope_86, 1, 9 },
    /* 10 */ { MAP_STATE, "automastikModusEinstellen:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automastikModusEinstellen_SM1, &scope_88, 1, 10 },
    /* 11 */ { MAP_STATE, "automatikModusEingestellt:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_automatikModusEingestellt_SM1, &scope_90, 1, 11 },
    /* 12 */ { MAP_STATE, "cockpitanzeigeBleibtAus:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_cockpitanzeigeBleibtAus_SM1, &scope_92, 1, 12 },
    /* 13 */ { MAP_STATE, "betriebsbremseLoesen:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_betriebsbremseLoesen_SM1, &scope_94, 1, 13 },
    /* 14 */ { MAP_STATE, "EPB_angezogen:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_angezogen_SM1, &scope_96, 1, 14 },
    /* 15 */ { MAP_STATE, "anfahrenVorbereiten:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenVorbereiten_SM1, &scope_98, 1, 15 },
    /* 16 */ { MAP_STATE, "EPB_arretiert:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_EPB_arretiert_SM1, &scope_100, 1, 16 },
    /* 17 */ { MAP_STATE, "anfahren:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahren_SM1, &scope_102, 1, 17 },
    /* 18 */ { MAP_STATE, "fahren:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fahren_SM1, &scope_110, 1, 18 },
    /* 19 */ { MAP_STATE, "anhalten:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhalten_SM1, &scope_112, 1, 19 },
    /* 20 */ { MAP_STATE, "fzg_Steht:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzg_Steht_SM1, &scope_114, 1, 20 },
    /* 21 */ { MAP_STATE, "erneutAnfahren:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_erneutAnfahren_SM1, &scope_116, 1, 21 },
    /* 22 */ { MAP_STATE, "autoHoldEinschalten:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_autoHoldEinschalten_SM1, &scope_124, 1, 22 },
    /* 23 */ { MAP_STATE, "anhaltenMitAutoHold:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenMitAutoHold_SM1, &scope_130, 1, 23 },
    /* 24 */ { MAP_STATE, "haltImAutoHold:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_haltImAutoHold_SM1, &scope_132, 1, 24 },
    /* 25 */ { MAP_STATE, "anfahrenAusAutoHold:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anfahrenAusAutoHold_SM1, &scope_134, 1, 25 },
    /* 26 */ { MAP_STATE, "anhaltenZumBeenden:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_anhaltenZumBeenden_SM1, &scope_136, 1, 26 },
    /* 27 */ { MAP_STATE, "fzgSteht:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_fzgSteht_SM1, &scope_138, 1, 27 },
    /* 28 */ { MAP_STATE, "parken:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_SSM_ST_SM1_SSM_st_parken_SM1, &scope_140, 1, 28 }
};
const MappingScope scope_81 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrerSM1:",
    scope_81_entries, 29
};

const MappingEntry scope_80_entries[25] = {
    /* 0 */ { MAP_OUTPUT, "zuendschalter", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, zuendschalter), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "getriebeWahlhebel", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, getriebeWahlhebel), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "fahrertuerSchalter", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, fahrertuerSchalter), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "sicherheitsgurtSchalter", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, sicherheitsgurtSchalter), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "taste_P", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, taste_P), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "taste_Hold", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, taste_Hold), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "gaspedalStellung", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, gaspedalStellung), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "bremspedalKraft", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, bremspedalKraft), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "error", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "ready", NULL, sizeof(kcg_bool), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, ready), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L2), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L3), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L4), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L5), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L6), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L7), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L8), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L10", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, _L10), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 19 },
    /* 20 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_SM2_anfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_clock_anfahren_SM1), &_Type_SSM_ST_SM2_anfahren_SM1_Utils, &scope_80_entries[21], isActive_SSM_ST_SM1_SSM_st_anfahren_SM1, NULL, 0, 20 },
    /* 21 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 21 },
    /* 22 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(SSM_ST_SM2_erneutAnfahren_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM2_clock_erneutAnfahren_SM1), &_Type_SSM_ST_SM2_erneutAnfahren_SM1_Utils, &scope_80_entries[21], isActive_SSM_ST_SM1_SSM_st_erneutAnfahren_SM1, NULL, 0, 22 },
    /* 23 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(SSM_ST_SM4_autoHoldEinschalten_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM4_clock_autoHoldEinschalten_SM1), &_Type_SSM_ST_SM4_autoHoldEinschalten_SM1_Utils, &scope_80_entries[21], isActive_SSM_ST_SM1_SSM_st_autoHoldEinschalten_SM1, NULL, 0, 23 },
    /* 24 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(SSM_ST_SM5_parken_SM1), offsetof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer, SM5_clock_parken_SM1), &_Type_SSM_ST_SM5_parken_SM1_Utils, &scope_80_entries[21], isActive_SSM_ST_SM1_SSM_st_parken_SM1, NULL, 0, 24 }
};
const MappingScope scope_80 = {
    "AH_testSuite_Pkg::divFahrer::autoModus_autoHold/ autoModus_autoHold_AH_testSuite_Pkg_divFahrer",
    scope_80_entries, 25
};

const MappingEntry scope_79_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_float64), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Memorized_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L2_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L4_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L5_MemoryBasic_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L6_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L7_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_79 = {
    "AH_Pkg::main_Pkg::EpbCtrl/ EpbCtrl_AH_Pkg_main_Pkg/linear::MemoryBasic 1",
    scope_79_entries, 6
};

const MappingEntry scope_78_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_74_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1, NULL, 1, 0 }
};
const MappingScope scope_78 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_PkgSM1:AH_aktiv:<1",
    scope_78_entries, 1
};

const MappingEntry scope_77_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_74_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1, &scope_78, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L1_AH_aktiv_SM1), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_aktiv_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L2_AH_aktiv_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_aktiv_SM1, NULL, 1, 2 }
};
const MappingScope scope_77 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_PkgSM1:AH_aktiv:",
    scope_77_entries, 3
};

const MappingEntry scope_76_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_74_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1, NULL, 1, 0 }
};
const MappingScope scope_76 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_PkgSM1:AH_inaktiv:<1",
    scope_76_entries, 1
};

const MappingEntry scope_75_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_74_entries[5], isActive__3_SSM_TR_SM1_SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1, &scope_76, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L1_AH_inaktiv_SM1), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_inaktiv_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L2_AH_inaktiv_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_inaktiv_SM1, NULL, 1, 2 }
};
const MappingScope scope_75 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_PkgSM1:AH_inaktiv:",
    scope_75_entries, 3
};

const MappingEntry scope_74_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_state_act), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_state_nxt), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_2_SSM_ST_SM1), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_state_sel), &_Type__2_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_fired_strong), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_3_SSM_TR_SM1), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, SM1_fired), &_Type__3_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "AH_inaktiv:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_inaktiv_SM1, &scope_75, 1, 7 },
    /* 8 */ { MAP_STATE, "AH_aktiv:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive__2_SSM_ST_SM1_SSM_st_AH_aktiv_SM1, &scope_77, 1, 8 }
};
const MappingScope scope_74 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_PkgSM1:",
    scope_74_entries, 9
};

const MappingEntry scope_73_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "deaktivieren", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, deaktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L5), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L14), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L58", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L58), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L59), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L60), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L61), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L62", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L62), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L63), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L55", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L55), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L1", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L1), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L67), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_37, 1, 17 },
    /* 18 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 1", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_1), NULL, NULL, NULL, &scope_27, 1, 18 },
    /* 19 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bremspedalDurchgetreten 2", NULL, sizeof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg), offsetof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg, Context_bremspedalDurchgetreten_2), NULL, NULL, NULL, &scope_49, 1, 19 }
};
const MappingScope scope_73 = {
    "AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus/ deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg",
    scope_73_entries, 20
};

const MappingEntry scope_72_entries[19] = {
    /* 0 */ { MAP_OUTPUT, "aktivieren", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, aktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L1), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L2), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L3), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L4), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L5), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L6), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L8), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L10), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L13), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L14), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L53), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_37, 1, 18 }
};
const MappingScope scope_72 = {
    "AH_Pkg::subf_Pkg::aktiviereAutoHoldModus/ aktiviereAutoHoldModus_AH_Pkg_subf_Pkg",
    scope_72_entries, 19
};

const MappingEntry scope_71_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "modus", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, modus), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "cockpitAnzeige_AutoHoldMode", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, cockpitAnzeige_AutoHoldMode), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "aktiviere", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, aktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "deaktiviere", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, deaktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L2), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L3), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L4), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L5), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L6), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L22), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L23), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L24), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, _L25), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereAutoHoldModus 1", NULL, sizeof(outC_aktiviereAutoHoldModus_AH_Pkg_subf_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, Context_aktiviereAutoHoldModus_1), NULL, NULL, NULL, &scope_72, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::deaktiviereAutoHoldModus 1", NULL, sizeof(outC_deaktiviereAutoHoldModus_AH_Pkg_subf_Pkg), offsetof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg, Context_deaktiviereAutoHoldModus_1), NULL, NULL, NULL, &scope_73, 1, 16 },
    /* 17 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 17 }
};
const MappingScope scope_71 = {
    "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus/ bestimmeAutoHoldModus_AH_Pkg_subf_Pkg",
    scope_71_entries, 18
};

const MappingEntry scope_70_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_65_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1, NULL, 1, 0 }
};
const MappingScope scope_70 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:bremseArretiert:<1",
    scope_70_entries, 1
};

const MappingEntry scope_69_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_65_entries[6], isActive__5_SSM_TR_SM1__9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1, NULL, 1, 0 }
};
const MappingScope scope_69 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:bremseArretiert:<2",
    scope_69_entries, 1
};

const MappingEntry scope_68_entries[14] = {
    /* 0 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_65_entries[6], isActive__5_SSM_TR_SM1__9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1, &scope_69, 1, 0 },
    /* 1 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_65_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1, &scope_70, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L2_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L3_bremseArretiert_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L5_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L4_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L6_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L7_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L8_bremseArretiert_SM1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L10_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L11_bremseArretiert_SM1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L14_bremseArretiert_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, &scope_34, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bremspedalDurchgetreten 2", NULL, sizeof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, Context_bremspedalDurchgetreten_2), NULL, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, &scope_49, 1, 13 }
};
const MappingScope scope_68 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:bremseArretiert:",
    scope_68_entries, 14
};

const MappingEntry scope_67_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_65_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1, NULL, 1, 0 }
};
const MappingScope scope_67 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:bremseGeloest:<1",
    scope_67_entries, 1
};

const MappingEntry scope_66_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_65_entries[5], isActive__5_SSM_TR_SM1_SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1, &scope_67, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L1_bremseGeloest_SM1), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseGeloest_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L2_bremseGeloest_SM1), &_Type_kcg_bool_Utils, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseGeloest_SM1, NULL, 1, 2 }
};
const MappingScope scope_66 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:bremseGeloest:",
    scope_66_entries, 3
};

const MappingEntry scope_65_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_state_act), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_state_nxt), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_state_sel), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_fired_strong), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, SM1_fired), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "bremseGeloest:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseGeloest_SM1, &scope_66, 1, 7 },
    /* 8 */ { MAP_STATE, "bremseArretiert:", NULL, 0, 0, NULL, &scope_65_entries[0], isActive__4_SSM_ST_SM1_SSM_st_bremseArretiert_SM1, &scope_68, 1, 8 }
};
const MappingScope scope_65 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_PkgSM1:",
    scope_65_entries, 9
};

const MappingEntry scope_64_entries[32] = {
    /* 0 */ { MAP_OUTPUT, "cockpitAnzeige_Hold", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, cockpitAnzeige_Hold), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "arretiereBetriebsbremse", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, arretiereBetriebsbremse), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "aktiviereEPB", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, aktiviereEPB), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "arretiereBremse_loc", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, arretiereBremse_loc), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "loeseBremse_loc", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, loeseBremse_loc), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L1), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L2), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L5), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L7), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L9), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L10", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L10), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L12", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L12), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L13", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L13), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L14", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L14), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L15", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L15), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L32), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L34", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L34), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 1", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_1), NULL, NULL, NULL, &scope_27, 1, 29 },
    /* 30 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bremspedalDurchgetreten 1", NULL, sizeof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg), offsetof(outC_autoHold_AH_Pkg_subf_Pkg, _1_Context_bremspedalDurchgetreten_1), NULL, NULL, NULL, &scope_49, 1, 30 },
    /* 31 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_65, 1, 31 }
};
const MappingScope scope_64 = {
    "AH_Pkg::subf_Pkg::autoHold/ autoHold_AH_Pkg_subf_Pkg",
    scope_64_entries, 32
};

const MappingEntry scope_63_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_59_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1, NULL, 1, 0 }
};
const MappingScope scope_63 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_PkgSM1:hilllHold_aktiv:<1",
    scope_63_entries, 1
};

const MappingEntry scope_62_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_59_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1, &scope_63, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L1_hilllHold_aktiv_SM1), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_59_entries[0], isActive__6_SSM_ST_SM1_SSM_st_hilllHold_aktiv_SM1, NULL, 1, 1 }
};
const MappingScope scope_62 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_PkgSM1:hilllHold_aktiv:",
    scope_62_entries, 2
};

const MappingEntry scope_61_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_59_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1, NULL, 1, 0 }
};
const MappingScope scope_61 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_PkgSM1:hillHold_inaktiv:<1",
    scope_61_entries, 1
};

const MappingEntry scope_60_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_59_entries[5], isActive__7_SSM_TR_SM1_SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1, &scope_61, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L1_hillHold_inaktiv_SM1), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_59_entries[0], isActive__6_SSM_ST_SM1_SSM_st_hillHold_inaktiv_SM1, NULL, 1, 1 }
};
const MappingScope scope_60 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_PkgSM1:hillHold_inaktiv:",
    scope_60_entries, 2
};

const MappingEntry scope_59_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_state_act), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_state_nxt), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_6_SSM_ST_SM1), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_state_sel), &_Type__6_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_fired_strong), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_7_SSM_TR_SM1), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, SM1_fired), &_Type__7_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "hillHold_inaktiv:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive__6_SSM_ST_SM1_SSM_st_hillHold_inaktiv_SM1, &scope_60, 1, 7 },
    /* 8 */ { MAP_STATE, "hilllHold_aktiv:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive__6_SSM_ST_SM1_SSM_st_hilllHold_aktiv_SM1, &scope_62, 1, 8 }
};
const MappingScope scope_59 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_PkgSM1:",
    scope_59_entries, 9
};

const MappingEntry scope_58_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_58 = {
    "AH_Pkg::subf_Pkg::deaktiviereHillHold/ deaktiviereHillHold_AH_Pkg_subf_Pkg/math::Abs 1",
    scope_58_entries, 6
};

const MappingEntry scope_57_entries[33] = {
    /* 0 */ { MAP_OUTPUT, "deaktiviere", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, deaktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L1), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L2), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L6), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L9), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L11), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L12), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L23), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L24), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L30", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L30), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L32", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L32), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L34", NULL, sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L34), &_Type_m_in_kg_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L35", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L35), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L36", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L36), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, Context_RisingEdge_2), NULL, NULL, NULL, &scope_37, 1, 29 },
    /* 30 */ { MAP_INSTANCE, "digital::RisingEdge 3", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, Context_RisingEdge_3), NULL, NULL, NULL, &scope_37, 1, 30 },
    /* 31 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_34, 1, 31 },
    /* 32 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_58, 1, 32 }
};
const MappingScope scope_57 = {
    "AH_Pkg::subf_Pkg::deaktiviereHillHold/ deaktiviereHillHold_AH_Pkg_subf_Pkg",
    scope_57_entries, 33
};

const MappingEntry scope_56_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "aktiviere", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, aktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L1), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L2), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L5), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L6), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L7), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L9), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L11), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L12), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 1", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_1), NULL, NULL, NULL, &scope_27, 1, 18 },
    /* 19 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_37, 1, 19 }
};
const MappingScope scope_56 = {
    "AH_Pkg::subf_Pkg::aktiviereHillHold/ aktiviereHillHold_AH_Pkg_subf_Pkg",
    scope_56_entries, 20
};

const MappingEntry scope_55_entries[19] = {
    /* 0 */ { MAP_OUTPUT, "betriebsbremsSperrventil", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, betriebsbremsSperrventil), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "aktiviere", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, aktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "deaktiviere", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, deaktiviere), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L8), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L9", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L9), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L10), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L11), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L12), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L20), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L21), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L22), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L23", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L23), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L25), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L26", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, _L26), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereHillHold 1", NULL, sizeof(outC_aktiviereHillHold_AH_Pkg_subf_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, Context_aktiviereHillHold_1), NULL, NULL, NULL, &scope_56, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::deaktiviereHillHold 1", NULL, sizeof(outC_deaktiviereHillHold_AH_Pkg_subf_Pkg), offsetof(outC_hillHold_AH_Pkg_subf_Pkg, Context_deaktiviereHillHold_1), NULL, NULL, NULL, &scope_57, 1, 17 },
    /* 18 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_59, 1, 18 }
};
const MappingScope scope_55 = {
    "AH_Pkg::subf_Pkg::hillHold/ hillHold_AH_Pkg_subf_Pkg",
    scope_55_entries, 19
};

const MappingEntry scope_54_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_50_entries[5], isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus, NULL, 1, 0 }
};
const MappingScope scope_54 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_PkgSM_Betriebsmodus:manuellerModus:<1",
    scope_54_entries, 1
};

const MappingEntry scope_53_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_50_entries[5], isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus, &scope_54, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L8_manuellerModus_SM_Betriebsmodus), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L5_manuellerModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L6_manuellerModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L4_manuellerModus_SM_Betriebsmodus), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L3_manuellerModus_SM_Betriebsmodus), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L2_manuellerModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L1_manuellerModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L9_manuellerModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, NULL, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 3", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, Context_countDownTimer_3), NULL, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, &scope_34, 1, 9 }
};
const MappingScope scope_53 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_PkgSM_Betriebsmodus:manuellerModus:",
    scope_53_entries, 10
};

const MappingEntry scope_52_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_50_entries[5], isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus, NULL, 1, 0 }
};
const MappingScope scope_52 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_PkgSM_Betriebsmodus:automatikModus:<1",
    scope_52_entries, 1
};

const MappingEntry scope_51_entries[10] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_50_entries[5], isActive_SSM_TR_SM_Betriebsmodus_SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus, &scope_52, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L1_automatikModus_SM_Betriebsmodus), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L4_automatikModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L3_automatikModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L5_automatikModus_SM_Betriebsmodus), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L6_automatikModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L8_automatikModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L9_automatikModus_SM_Betriebsmodus), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L10_automatikModus_SM_Betriebsmodus), &_Type_kcg_bool_Utils, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, NULL, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 2", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, Context_countDownTimer_2), NULL, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, &scope_34, 1, 9 }
};
const MappingScope scope_51 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_PkgSM_Betriebsmodus:automatikModus:",
    scope_51_entries, 10
};

const MappingEntry scope_50_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM_Betriebsmodus), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_state_act), &_Type_SSM_ST_SM_Betriebsmodus_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM_Betriebsmodus), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_state_nxt), &_Type_SSM_ST_SM_Betriebsmodus_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM_Betriebsmodus), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_state_sel), &_Type_SSM_ST_SM_Betriebsmodus_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM_Betriebsmodus), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_fired_strong), &_Type_SSM_TR_SM_Betriebsmodus_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM_Betriebsmodus), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, SM_Betriebsmodus_fired), &_Type_SSM_TR_SM_Betriebsmodus_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "automatikModus:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_automatikModus_SM_Betriebsmodus, &scope_51, 1, 7 },
    /* 8 */ { MAP_STATE, "manuellerModus:", NULL, 0, 0, NULL, &scope_50_entries[0], isActive_SSM_ST_SM_Betriebsmodus_SSM_st_manuellerModus_SM_Betriebsmodus, &scope_53, 1, 8 }
};
const MappingScope scope_50 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_PkgSM_Betriebsmodus:",
    scope_50_entries, 9
};

const MappingEntry scope_49_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "vollDurchgetreten", NULL, sizeof(kcg_bool), offsetof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg, vollDurchgetreten), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg, _L1), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg, _L2), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_49 = {
    "AH_Pkg::subf_Pkg::bremspedalDurchgetreten/ bremspedalDurchgetreten_AH_Pkg_subf_Pkg",
    scope_49_entries, 4
};

const MappingEntry scope_48_entries[26] = {
    /* 0 */ { MAP_OUTPUT, "aktivieren", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, aktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L3), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L9), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L10), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L12), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L15), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L25), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L41), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L42), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_34, 1, 21 },
    /* 22 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_37, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bremspedalDurchgetreten", NULL, sizeof(outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, Context_bremspedalDurchgetreten), NULL, NULL, NULL, &scope_49, 1, 23 },
    /* 24 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, Context_fahrzeugSteht), NULL, NULL, NULL, &scope_27, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg, Context_RisingEdge_2), NULL, NULL, NULL, &scope_37, 1, 25 }
};
const MappingScope scope_48 = {
    "AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus/ aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg",
    scope_48_entries, 26
};

const MappingEntry scope_47_entries[28] = {
    /* 0 */ { MAP_OUTPUT, "aktivieren", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, aktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L3), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L9), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L10), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L12), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L15), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L25), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L26), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L41", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L41), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L42", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L42), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L48), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_34, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, Context_RisingEdge_1), NULL, NULL, NULL, &scope_37, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 1", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_1), NULL, NULL, NULL, &scope_27, 1, 26 },
    /* 27 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg, Context_RisingEdge_2), NULL, NULL, NULL, &scope_37, 1, 27 }
};
const MappingScope scope_47 = {
    "AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus/ aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg",
    scope_47_entries, 28
};

const MappingEntry scope_46_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "epbBetriebsmodus", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, epbBetriebsmodus), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "automatikAnzeigen", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, automatikAnzeigen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "manuellAnzeigen", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, manuellAnzeigen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "automatikAktivieren", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, automatikAktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "manuellAktivieren", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, manuellAktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L43), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L47", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L47), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L48", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L48), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L49", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L49), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L50", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L50), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L51", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L51), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L52", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L52), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L53", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L53), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L54", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, _L54), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereEpbManuellenModus 1", NULL, sizeof(outC_aktiviereEpbManuellenModus_AH_Pkg_subf_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, Context_aktiviereEpbManuellenModus_1), NULL, NULL, NULL, &scope_47, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereEpbAutomatikModus 1", NULL, sizeof(outC_aktiviereEpbAutomatikModus_AH_Pkg_subf_Pkg), offsetof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg, Context_aktiviereEpbAutomatikModus_1), NULL, NULL, NULL, &scope_48, 1, 16 },
    /* 17 */ { MAP_AUTOMATON, "SM_Betriebsmodus:", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 17 }
};
const MappingScope scope_46 = {
    "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus/ bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg",
    scope_46_entries, 18
};

const MappingEntry scope_45_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_38_entries[5], isActive_SSM_TR_EPB_SM_SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM, NULL, 1, 0 }
};
const MappingScope scope_45 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_geloest:<1",
    scope_45_entries, 1
};

const MappingEntry scope_44_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_38_entries[5], isActive_SSM_TR_EPB_SM_SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM, &scope_45, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L3_epb_geloest_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_geloest_EPB_SM, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L4_epb_geloest_EPB_SM), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_geloest_EPB_SM, NULL, 1, 2 }
};
const MappingScope scope_44 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_geloest:",
    scope_44_entries, 3
};

const MappingEntry scope_43_entries[9] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L1_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L2_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L4_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L3_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L5_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L6_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_kcg_bool_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L8_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L9_sw2_off_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, NULL, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, &scope_34, 1, 8 }
};
const MappingScope scope_43 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_arretiert:ZuendschalterWhen:AhTypes_Pkg::ah_Pkg::sw2_off:",
    scope_43_entries, 9
};

const MappingEntry scope_42_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L1_sw2_on_ZuendschalterWhen_epb_arretiert_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_on_AhTypes_Pkg_ah_Pkg, NULL, 1, 0 }
};
const MappingScope scope_42 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_arretiert:ZuendschalterWhen:AhTypes_Pkg::ah_Pkg::sw2_on:",
    scope_42_entries, 1
};

const MappingEntry scope_41_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@active_branch", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, ZuendschalterWhen_clock_epb_arretiert_EPB_SM), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_arretiert_EPB_SM, NULL, 0, 0 },
    /* 1 */ { MAP_MATCH, "AhTypes_Pkg::ah_Pkg::sw2_on:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_on_AhTypes_Pkg_ah_Pkg, &scope_42, 1, 1 },
    /* 2 */ { MAP_MATCH, "AhTypes_Pkg::ah_Pkg::sw2_off:", NULL, 0, 0, NULL, &scope_41_entries[0], isActive_on_off_element_T_AhTypes_Pkg_ah_Pkg_sw2_off_AhTypes_Pkg_ah_Pkg, &scope_43, 1, 2 }
};
const MappingScope scope_41 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_arretiert:ZuendschalterWhen:",
    scope_41_entries, 3
};

const MappingEntry scope_40_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_38_entries[5], isActive_SSM_TR_EPB_SM_SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM, NULL, 1, 0 }
};
const MappingScope scope_40 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_arretiert:<1",
    scope_40_entries, 1
};

const MappingEntry scope_39_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_38_entries[5], isActive_SSM_TR_EPB_SM_SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM, &scope_40, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L1_epb_arretiert_EPB_SM), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_arretiert_EPB_SM, NULL, 1, 1 },
    /* 2 */ { MAP_WHEN, "ZuendschalterWhen:", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 2 }
};
const MappingScope scope_39 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:epb_arretiert:",
    scope_39_entries, 3
};

const MappingEntry scope_38_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_EPB_SM), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_state_act), &_Type_SSM_ST_EPB_SM_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_EPB_SM), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_state_nxt), &_Type_SSM_ST_EPB_SM_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_EPB_SM), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_state_sel), &_Type_SSM_ST_EPB_SM_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_EPB_SM), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_fired_strong), &_Type_SSM_TR_EPB_SM_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_EPB_SM), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_SM_fired), &_Type_SSM_TR_EPB_SM_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "epb_arretiert:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_arretiert_EPB_SM, &scope_39, 1, 7 },
    /* 8 */ { MAP_STATE, "epb_geloest:", NULL, 0, 0, NULL, &scope_38_entries[0], isActive_SSM_ST_EPB_SM_SSM_st_epb_geloest_EPB_SM, &scope_44, 1, 8 }
};
const MappingScope scope_38 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_PkgEPB_SM:",
    scope_38_entries, 9
};

const MappingEntry scope_37_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "RE_Output", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, RE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_37 = {
    "digital::RisingEdge/ RisingEdge_digital",
    scope_37_entries, 6
};

const MappingEntry scope_36_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "FFR_Output", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, FFR_Output_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L10_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L2_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L4_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L7_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L8_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L11_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L12_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L14_FlipFlopReset_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_36 = {
    "AhTypes_Pkg::utils_Pkg::countDownTimer/ countDownTimer_AhTypes_Pkg_utils_Pkg/digital::FlipFlopReset 1",
    scope_36_entries, 9
};

const MappingEntry scope_35_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, Memorized_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L2_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L4_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L5_MemoryBasic_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L6_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L7_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_35 = {
    "AhTypes_Pkg::utils_Pkg::countDownTimer/ countDownTimer_AhTypes_Pkg_utils_Pkg/linear::MemoryBasic 1",
    scope_35_entries, 6
};

const MappingEntry scope_34_entries[23] = {
    /* 0 */ { MAP_OUTPUT, "abgelaufen", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, abgelaufen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "laufend", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, laufend), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L7), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L6), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L10), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 16 },
    /* 17 */ { MAP_EXPANDED, "digital::FlipFlopReset 1", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 17 },
    /* 18 */ { MAP_ASSUME, "assume_systemzeit_ist_monoton_steigend", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, assume_systemzeit_ist_monoton_steigend), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_ASSUME, "assume_systemZeit_ist_immer_groessergleich_0", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, assume_systemZeit_ist_immer_groessergleich_0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_GUARANTEE, "guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_ASSUME, "assume_zeitIntervall_ist_groesser_0", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, assume_zeitIntervall_ist_groesser_0), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_GUARANTEE, "guarantee_stop_stopptDenTimer", NULL, sizeof(kcg_bool), offsetof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg, guarantee_stop_stopptDenTimer), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 }
};
const MappingScope scope_34 = {
    "AhTypes_Pkg::utils_Pkg::countDownTimer/ countDownTimer_AhTypes_Pkg_utils_Pkg",
    scope_34_entries, 23
};

const MappingEntry scope_33_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "notbremsen", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, notbremsen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L3), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L4), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L7), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L8), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::countDownTimer 1", NULL, sizeof(outC_countDownTimer_AhTypes_Pkg_utils_Pkg), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, Context_countDownTimer_1), NULL, NULL, NULL, &scope_34, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg, Context_RisingEdge_2), NULL, NULL, NULL, &scope_37, 1, 11 }
};
const MappingScope scope_33 = {
    "AH_Pkg::subf_Pkg::aktiviereNotbremse/ aktiviereNotbremse_AH_Pkg_subf_Pkg",
    scope_33_entries, 12
};

const MappingEntry scope_32_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "epbDeaktivieren", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, epbDeaktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L3), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L9), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L10), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L12), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L15), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L25), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L28), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 2", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_2), NULL, NULL, NULL, &scope_27, 1, 13 }
};
const MappingScope scope_32 = {
    "AH_Pkg::subf_Pkg::deaktiviereEpbManuell/ deaktiviereEpbManuell_AH_Pkg_subf_Pkg",
    scope_32_entries, 14
};

const MappingEntry scope_31_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "IRII_Output", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, IRII_Output_InRangeInIn_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L10_InRangeInIn_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L12_InRangeInIn_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L13_InRangeInIn_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L2_InRangeInIn_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L4_InRangeInIn_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L8_InRangeInIn_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_ASSUME, "A1", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, A1_InRangeInIn_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_31 = {
    "AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch/ deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg/math::InRangeInIn 1",
    scope_31_entries, 8
};

const MappingEntry scope_30_entries[28] = {
    /* 0 */ { MAP_OUTPUT, "deaktiviereEpb", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, deaktiviereEpb), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L13), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L11), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L9), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L16), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L17), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L18), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L19), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L20), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L21), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L22), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L26), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L30", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L30), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L31", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L31), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L32", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L32), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "math::InRangeInIn 1", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 27 }
};
const MappingScope scope_30 = {
    "AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch/ deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg",
    scope_30_entries, 28
};

const MappingEntry scope_29_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "aktiviereEpb", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, aktiviereEpb), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L20", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L20), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L18), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L17), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg, _L14), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_29 = {
    "AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch/ aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg",
    scope_29_entries, 8
};

const MappingEntry scope_28_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_28 = {
    "AH_Pkg::subf_Pkg::fahrzeugSteht/ fahrzeugSteht_AH_Pkg_subf_Pkg/math::Abs 1",
    scope_28_entries, 6
};

const MappingEntry scope_27_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "steht", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, steht), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L2), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L3), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg, _L5), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 5 }
};
const MappingScope scope_27 = {
    "AH_Pkg::subf_Pkg::fahrzeugSteht/ fahrzeugSteht_AH_Pkg_subf_Pkg",
    scope_27_entries, 6
};

const MappingEntry scope_26_entries[16] = {
    /* 0 */ { MAP_OUTPUT, "epbAktivieren", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, epbAktivieren), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L3), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L4), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L9), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L12), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L13), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L15), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L18), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::fahrzeugSteht 1", NULL, sizeof(outC_fahrzeugSteht_AH_Pkg_subf_Pkg), offsetof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg, Context_fahrzeugSteht_1), NULL, NULL, NULL, &scope_27, 1, 15 }
};
const MappingScope scope_26 = {
    "AH_Pkg::subf_Pkg::aktiviereEpbManuell/ aktiviereEpbManuell_AH_Pkg_subf_Pkg",
    scope_26_entries, 16
};

const MappingEntry scope_25_entries[35] = {
    /* 0 */ { MAP_OUTPUT, "EPB_Bremse", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, EPB_Bremse), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "led_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, led_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "cockpitAnzeige_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, cockpitAnzeige_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "loeseEPB", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, loeseEPB), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "arretiereEPB", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, arretiereEPB), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L2), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L3), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L4), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L6), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L7), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L30), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L29", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L29), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L28), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L27", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L27), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L26), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L25), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L24", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L24), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L22), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L21", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L21), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L20", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L20), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L33", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L33), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereEpbManuell 1", NULL, sizeof(outC_aktiviereEpbManuell_AH_Pkg_subf_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_aktiviereEpbManuell_1), NULL, NULL, NULL, &scope_26, 1, 29 },
    /* 30 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereEpbAutomatisch 1", NULL, sizeof(outC_aktiviereEpbAutomatisch_AH_Pkg_subf_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_aktiviereEpbAutomatisch_1), NULL, NULL, NULL, &scope_29, 1, 30 },
    /* 31 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch 2", NULL, sizeof(outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_deaktiviereEpbAutomatisch_2), NULL, NULL, NULL, &scope_30, 1, 31 },
    /* 32 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::deaktiviereEpbManuell 2", NULL, sizeof(outC_deaktiviereEpbManuell_AH_Pkg_subf_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_deaktiviereEpbManuell_2), NULL, NULL, NULL, &scope_32, 1, 32 },
    /* 33 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::aktiviereNotbremse 1", NULL, sizeof(outC_aktiviereNotbremse_AH_Pkg_subf_Pkg), offsetof(outC_steuereEPB_AH_Pkg_subf_Pkg, Context_aktiviereNotbremse_1), NULL, NULL, NULL, &scope_33, 1, 33 },
    /* 34 */ { MAP_AUTOMATON, "EPB_SM:", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 34 }
};
const MappingScope scope_25 = {
    "AH_Pkg::subf_Pkg::steuereEPB/ steuereEPB_AH_Pkg_subf_Pkg",
    scope_25_entries, 35
};

const MappingEntry scope_24_entries[77] = {
    /* 0 */ { MAP_OUTPUT, "led_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, led_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "cockpitAnzeige_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, cockpitAnzeige_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "cockpitAnzeige_AutoHoldMode", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, cockpitAnzeige_AutoHoldMode), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "cockpitAnzeige_Hold", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, cockpitAnzeige_Hold), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Manuell", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, cockpitAnzeige_EPBMode_Manuell), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Automatik", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, cockpitAnzeige_EPBMode_Automatik), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "EPB_Bremse", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, EPB_Bremse), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "betriebsBremse", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, betriebsBremse), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "betriebsbremsSperrventil", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, betriebsbremsSperrventil), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "epbBetriebsmodus", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, epbBetriebsmodus), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "aktiviereEPB", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, aktiviereEPB), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "arretiereBetriebsbremse", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, arretiereBetriebsbremse), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "epb_bremszustand", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, epb_bremszustand), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "betriebsbremsSperrventil_loc", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, betriebsbremsSperrventil_loc), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L34), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L33", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L33), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L32", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L32), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L35", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L35), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L38", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L38), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L39", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L39), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L42", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L42), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L43", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L43), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L44", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L44), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L45", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L45), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L46", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L46), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L47", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L47), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L48", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L48), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L49", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L49), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L50", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L50), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L51", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L51), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L52", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L52), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L53", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L53), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L54), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L57", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L57), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L56", NULL, sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L56), &_Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L58", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L58), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L59", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L59), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L60", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L60), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L61", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L61), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L62", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L62), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L63", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L63), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L64", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L64), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L65", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L65), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L66", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L66), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L67", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L67), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L68", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L68), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L69", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L69), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L70", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L70), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L71", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L71), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L72", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L72), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L73", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L73), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L74", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L74), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L75", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L75), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L76", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L76), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_LOCAL, "_L77", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L77), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 58 },
    /* 59 */ { MAP_LOCAL, "_L78", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L78), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 59 },
    /* 60 */ { MAP_LOCAL, "_L79", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L79), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 60 },
    /* 61 */ { MAP_LOCAL, "_L80", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L80), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 61 },
    /* 62 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L82), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 62 },
    /* 63 */ { MAP_LOCAL, "_L83", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L83), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 63 },
    /* 64 */ { MAP_LOCAL, "_L85", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L85), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 64 },
    /* 65 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L86), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65 },
    /* 66 */ { MAP_LOCAL, "_L87", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L87), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 66 },
    /* 67 */ { MAP_LOCAL, "_L88", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L88), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 67 },
    /* 68 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L90), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 68 },
    /* 69 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_bool), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L91), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 69 },
    /* 70 */ { MAP_LOCAL, "_L92", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, _L92), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 70 },
    /* 71 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::steuereEPB 1", NULL, sizeof(outC_steuereEPB_AH_Pkg_subf_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Context_steuereEPB_1), NULL, NULL, NULL, &scope_25, 1, 71 },
    /* 72 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus 1", NULL, sizeof(outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Context_bestimmeEpbBetriebsmodus_1), NULL, NULL, NULL, &scope_46, 1, 72 },
    /* 73 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::hillHold 2", NULL, sizeof(outC_hillHold_AH_Pkg_subf_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Context_hillHold_2), NULL, NULL, NULL, &scope_55, 1, 73 },
    /* 74 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::autoHold 2", NULL, sizeof(outC_autoHold_AH_Pkg_subf_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Context_autoHold_2), NULL, NULL, NULL, &scope_64, 1, 74 },
    /* 75 */ { MAP_INSTANCE, "AH_Pkg::subf_Pkg::bestimmeAutoHoldModus 1", NULL, sizeof(outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg), offsetof(outC_EpbCtrl_AH_Pkg_main_Pkg, Context_bestimmeAutoHoldModus_1), NULL, NULL, NULL, &scope_71, 1, 75 },
    /* 76 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_79, 1, 76 }
};
const MappingScope scope_24 = {
    "AH_Pkg::main_Pkg::EpbCtrl/ EpbCtrl_AH_Pkg_main_Pkg",
    scope_24_entries, 77
};

const MappingEntry scope_23_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Memorized", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, Memorized_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L2_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L4_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L5_MemoryBasic_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L6_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L7_MemoryBasic_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_23 = {
    "simEnv_Pkg::mainPkg::fahrzeug/ fahrzeug_simEnv_Pkg_mainPkg/linear::MemoryBasic 1",
    scope_23_entries, 6
};

const MappingEntry scope_22_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "Me_output", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, Me_output_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L2_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L3_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L4_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L6_Mean_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_22 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg/math::Mean 1",
    scope_22_entries, 6
};

const MappingEntry scope_21_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_then_IfBlock2), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L2_then_IfBlock2), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 }
};
const MappingScope scope_21 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock2:then:",
    scope_21_entries, 2
};

const MappingEntry scope_20_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_else_IfBlock2), &_Type_kcg_float64_Utils, &scope_19_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_20 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock2:else:",
    scope_20_entries, 1
};

const MappingEntry scope_19_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, IfBlock2_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_false, &scope_20, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_19_entries[0], isActive_kcg_bool_kcg_true, &scope_21, 1, 2 }
};
const MappingScope scope_19 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock2:",
    scope_19_entries, 3
};

const MappingEntry scope_18_entries[11] = {
    /* 0 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L30_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L29_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L28", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L28_then_IfBlock1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L27_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L26_then_IfBlock1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L25_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L24_then_IfBlock1), &_Type_m_in_kg_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L23_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L22_then_IfBlock1), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L21_then_IfBlock1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "mathext::Square 2", NULL, sizeof(outC_Square_mathext_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, Context_Square_2), NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_17, 1, 10 }
};
const MappingScope scope_18 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock1:then:",
    scope_18_entries, 11
};

const MappingEntry scope_17_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "Square_Out", NULL, sizeof(kcg_float64), offsetof(outC_Square_mathext_float64, Square_Out_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Square_mathext_float64, _L1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Square_mathext_float64, _L2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_17 = {
    "mathext::Square/ Square_mathext_float64",
    scope_17_entries, 3
};

const MappingEntry scope_16_entries[3] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L2_else_IfBlock1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_else_IfBlock1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_15_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1 },
    /* 2 */ { MAP_INSTANCE, "mathext::Square 1", NULL, sizeof(outC_Square_mathext_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, Context_Square_1), NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_17, 1, 2 }
};
const MappingScope scope_16 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock1:else:",
    scope_16_entries, 3
};

const MappingEntry scope_15_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_false, &scope_16, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_15_entries[0], isActive_kcg_bool_kcg_true, &scope_18, 1, 2 }
};
const MappingScope scope_15 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_PkgIfBlock1:",
    scope_15_entries, 3
};

const MappingEntry scope_14_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "LUS_Output", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _1_LUS_Output_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_LimiterUnSymmetrical_2_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L11_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L13_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L15_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L2_LimiterUnSymmetrical_2_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L3_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L9_LimiterUnSymmetrical_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_ASSUME, "A1", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, A1_LimiterUnSymmetrical_2_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_14 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg/pwlinear::LimiterUnSymmetrical 2",
    scope_14_entries, 9
};

const MappingEntry scope_13_entries[9] = {
    /* 0 */ { MAP_OUTPUT, "LUS_Output", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, LUS_Output_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L1_LimiterUnSymmetrical_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L11_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L13_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L15_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L2_LimiterUnSymmetrical_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L3_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L9_LimiterUnSymmetrical_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_ASSUME, "A1", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, A1_LimiterUnSymmetrical_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 }
};
const MappingScope scope_13 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg/pwlinear::LimiterUnSymmetrical 1",
    scope_13_entries, 9
};

const MappingEntry scope_12_entries[55] = {
    /* 0 */ { MAP_OUTPUT, "v_fzg", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, v_fzg), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "s_fzg", NULL, sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, s_fzg), &_Type_s_in_m_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "P_res", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, P_res), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "t1", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, t1), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "t2", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, t2), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "dt", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, dt), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "v1", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, v1), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "v2", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, v2), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "v2_sq", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, v2_sq), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L21), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L22), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L24), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L27", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L27), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L29", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L29), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L30", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L30), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L43", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L43), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L44", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L44), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L46), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L47", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L47), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L62", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L62), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L63", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L63), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L64", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L64), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L65", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L65), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L66", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L66), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L67", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L67), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L68), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L69", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L69), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L70", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L70), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L71", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L71), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L72), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L73", NULL, sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L73), &_Type_m_in_kg_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L74), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L75), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L76", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L76), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L77), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L81), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L82", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L82), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L83", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L83), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_bool), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L84), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L85", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L85), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_float64), offsetof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg, _L86), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_EXPANDED, "pwlinear::LimiterUnSymmetrical 1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 50 },
    /* 51 */ { MAP_EXPANDED, "pwlinear::LimiterUnSymmetrical 2", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 51 },
    /* 52 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 52 },
    /* 53 */ { MAP_IF, "IfBlock2:", NULL, 0, 0, NULL, NULL, NULL, &scope_19, 1, 53 },
    /* 54 */ { MAP_EXPANDED, "math::Mean 1", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 54 }
};
const MappingScope scope_12 = {
    "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg",
    scope_12_entries, 55
};

const MappingEntry scope_11_entries[28] = {
    /* 0 */ { MAP_OUTPUT, "v_fzg", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, v_fzg), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "s_fzg", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, s_fzg), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L6), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L7), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L9), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L10), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L11), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L12), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L15), &_Type_s_in_m_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L14), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L16), &_Type_m_in_kg_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L17), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L18", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L18), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L19", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L19), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L20), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L22", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L22), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L23", NULL, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L23), &_Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L31", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L31), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L32", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, _L32), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik 1", NULL, sizeof(outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg), offsetof(outC_fahrzeug_simEnv_Pkg_mainPkg, Context_fahrDynamik_1), NULL, NULL, NULL, &scope_12, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "linear::MemoryBasic 1", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 27 }
};
const MappingScope scope_11 = {
    "simEnv_Pkg::mainPkg::fahrzeug/ fahrzeug_simEnv_Pkg_mainPkg",
    scope_11_entries, 28
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, _L1_then_IfBlock1), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:then:",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, _L1_then_else_IfBlock1), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:else:then:",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, _L1_then_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_8 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:else:else:then:",
    scope_8_entries, 1
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, _L1_else_else_else_IfBlock1), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, &scope_6_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_7 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:else:else:else:",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_5_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_false, &scope_7, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_kcg_bool_kcg_true, &scope_8, 1, 2 }
};
const MappingScope scope_6 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:else:else:",
    scope_6_entries, 3
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_4_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_false, &scope_6, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_5_entries[0], isActive_kcg_bool_kcg_true, &scope_9, 1, 2 }
};
const MappingScope scope_5 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:else:",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_false, &scope_5, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_4_entries[0], isActive_kcg_bool_kcg_true, &scope_10, 1, 2 }
};
const MappingScope scope_4 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkgIfBlock1:",
    scope_4_entries, 3
};

const MappingEntry scope_3_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "fzgLaengsNeigung", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fahrweg_simEnv_Pkg_mainPkg, fzgLaengsNeigung), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_4, 1, 1 }
};
const MappingScope scope_3 = {
    "simEnv_Pkg::mainPkg::fahrweg/ fahrweg_simEnv_Pkg_mainPkg",
    scope_3_entries, 2
};

const MappingEntry scope_2_entries[43] = {
    /* 0 */ { MAP_OUTPUT, "led_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, led_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "cockpitAnzeige_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, cockpitAnzeige_P), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "cockpitAnzeige_AutoHoldMode", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, cockpitAnzeige_AutoHoldMode), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "cockpitAnzeige_Hold", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, cockpitAnzeige_Hold), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Manuell", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, cockpitAnzeige_EPBMode_Manuell), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Automatik", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, cockpitAnzeige_EPBMode_Automatik), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "betriebsBremse", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, betriebsBremse), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "EPB_Bremse", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, EPB_Bremse), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "v_fzg", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, v_fzg), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "fzgLaengsneigung", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, fzgLaengsneigung), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_OUTPUT, "epbBetriebsmodus", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, epbBetriebsmodus), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "fzgLaengsneigung_loc", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, fzgLaengsneigung_loc), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L1", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L1), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L3), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L2", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L2), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L7), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L18", NULL, sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L18), &_Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L17", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L17), &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L16", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L16), &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L15", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L15), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L14", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L14), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L13", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L13), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L12", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L12), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L11", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L11), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L10), &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L19", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L19), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L22", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L22), &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L24", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L24), &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L25", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L25), &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L26", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L26), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L27", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L27), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L28", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L28), &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L29", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L29), &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L30", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L30), &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L31", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L31), &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L32", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L32), &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L33", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L33), &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L34", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L34), &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L35", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L35), &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L36", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, _L36), &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_INSTANCE, "simEnv_Pkg::mainPkg::fahrweg 1", NULL, sizeof(outC_fahrweg_simEnv_Pkg_mainPkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, Context_fahrweg_1), NULL, NULL, NULL, &scope_3, 1, 40 },
    /* 41 */ { MAP_INSTANCE, "simEnv_Pkg::mainPkg::fahrzeug 1", NULL, sizeof(outC_fahrzeug_simEnv_Pkg_mainPkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, Context_fahrzeug_1), NULL, NULL, NULL, &scope_11, 1, 41 },
    /* 42 */ { MAP_INSTANCE, "AH_Pkg::main_Pkg::EpbCtrl 1", NULL, sizeof(outC_EpbCtrl_AH_Pkg_main_Pkg), offsetof(outC_fzgIntegration_simEnv_Pkg_mainPkg, Context_EpbCtrl_1), NULL, NULL, NULL, &scope_24, 1, 42 }
};
const MappingScope scope_2 = {
    "simEnv_Pkg::mainPkg::fzgIntegration/ fzgIntegration_simEnv_Pkg_mainPkg",
    scope_2_entries, 43
};

const MappingEntry scope_1_entries[48] = {
    /* 0 */ { MAP_OUTPUT, "led_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.led_P, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "cockpitAnzeige_P", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.cockpitAnzeige_P, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "cockpitAnzeige_AutoHoldMode", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.cockpitAnzeige_AutoHoldMode, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "cockpitAnzeige_Hold", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.cockpitAnzeige_Hold, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Manuell", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.cockpitAnzeige_EPBMode_Manuell, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "cockpitAnzeige_EPBMode_Automatik", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.cockpitAnzeige_EPBMode_Automatik, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "betriebsBremse", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.betriebsBremse, &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "EPB_Bremse", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.EPB_Bremse, &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_OUTPUT, "v_fzg", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx.v_fzg, &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_OUTPUT, "fzgLaengsneigung", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx.fzgLaengsneigung, &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_OUTPUT, "aktZeit", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx.aktZeit, &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_OUTPUT, "error", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.error, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_OUTPUT, "epbBetriebsmodus", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx.epbBetriebsmodus, &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L10", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx._L10, &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx._L9, &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L8, &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L7, &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L6", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L6, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L5, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L4, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L3, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L2", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L2, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L1", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L1, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L19", NULL, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L19, &_Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L18", NULL, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L18, &_Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L17", NULL, sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L17, &_Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L16", NULL, sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L16, &_Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L15", NULL, sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L15, &_Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L14, &_Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L13", NULL, sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L13, &_Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L12", NULL, sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L12, &_Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L20", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L20, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L21", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L21, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L22", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L22, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L23", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L23, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L24", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L24, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L25", NULL, sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L25, &_Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L26", NULL, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L26, &_Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L27", NULL, sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L27, &_Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L28", NULL, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx._L28, &_Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L29", NULL, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx._L29, &_Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L31", NULL, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), (size_t)&outputs_ctx._L31, &_Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L32, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L33", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L33, &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L36", NULL, sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg), (size_t)&outputs_ctx._L36, &_Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_INSTANCE, "simEnv_Pkg::mainPkg::fzgIntegration 1", NULL, sizeof(outC_fzgIntegration_simEnv_Pkg_mainPkg), (size_t)&outputs_ctx.Context_fzgIntegration_1, NULL, NULL, NULL, &scope_2, 1, 45 },
    /* 46 */ { MAP_INSTANCE, "AH_testSuite_Pkg::divFahrer::autoModus_autoHold 1", NULL, sizeof(outC_autoModus_autoHold_AH_testSuite_Pkg_divFahrer), (size_t)&outputs_ctx.Context_autoModus_autoHold_1, NULL, NULL, NULL, &scope_80, 1, 46 },
    /* 47 */ { MAP_INSTANCE, "AhTypes_Pkg::utils_Pkg::systemUhr 1", NULL, sizeof(outC_systemUhr_AhTypes_Pkg_utils_Pkg), (size_t)&outputs_ctx.Context_systemUhr_1, NULL, NULL, NULL, &scope_147, 1, 47 }
};
const MappingScope scope_1 = {
    "AH_testSuite_Pkg::tests_Pkg::testAutoModus_autoHold/ testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg",
    scope_1_entries, 48
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "AH_testSuite_Pkg::tests_Pkg::testAutoModus_autoHold", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
