#include "AH_testsuite_type.h"

#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"

#include "kcg_types.h"

#include "SmuConfig.h"

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */
#define UNUSED(x) (void)(x)
#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** Constants 
 ****************************************************************/

#include "kcg_consts.h"

static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_c_5s_warten_AH_testSuite_Pkg_divFahrer = c_5s_warten_AH_testSuite_Pkg_divFahrer;
static s_in_m_T_AhTypes_Pkg_physical_Pkg const TU_cS_00_simEnv_Pkg_mainPkg = cS_00_simEnv_Pkg_mainPkg;
static s_in_m_T_AhTypes_Pkg_physical_Pkg const TU_cS_01_simEnv_Pkg_mainPkg = cS_01_simEnv_Pkg_mainPkg;
static s_in_m_T_AhTypes_Pkg_physical_Pkg const TU_cS_02_simEnv_Pkg_mainPkg = cS_02_simEnv_Pkg_mainPkg;
static s_in_m_T_AhTypes_Pkg_physical_Pkg const TU_cS_03_simEnv_Pkg_mainPkg = cS_03_simEnv_Pkg_mainPkg;
static angle_in_rad_T_AhTypes_Pkg_physical_Pkg const TU_cSteigung_00_simEnv_Pkg_mainPkg = cSteigung_00_simEnv_Pkg_mainPkg;
static angle_in_rad_T_AhTypes_Pkg_physical_Pkg const TU_cSteigung_5grad_simEnv_Pkg_mainPkg = cSteigung_5grad_simEnv_Pkg_mainPkg;
static kcg_float64 const TU_pi_AhTypes_Pkg_physical_Pkg = pi_AhTypes_Pkg_physical_Pkg;
static kcg_float64 const TU_cEpsilon_AhTypes_Pkg_physical_Pkg = cEpsilon_AhTypes_Pkg_physical_Pkg;
static v_in_mps_T_AhTypes_Pkg_physical_Pkg const TU_cV_FzgSteht_AhTypes_Pkg_ah_Pkg = cV_FzgSteht_AhTypes_Pkg_ah_Pkg;
static gaspedalstellung_T_AhTypes_Pkg_ah_Pkg const TU_cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg = cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
static gaspedalstellung_T_AhTypes_Pkg_ah_Pkg const TU_cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg = cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
static gaspedalstellung_T_AhTypes_Pkg_ah_Pkg const TU_cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg = cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
static betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg const TU_cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg = cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cNotbremsDelay_AhTypes_Pkg_ah_Pkg = cNotbremsDelay_AhTypes_Pkg_ah_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg = cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cEpbModusDelay_AhTypes_Pkg_ah_Pkg = cEpbModusDelay_AhTypes_Pkg_ah_Pkg;
static bremspedalkraft_T_AhTypes_Pkg_ah_Pkg const TU_cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg = cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg = cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg;
static kcg_float64 const TU_cSteigung2GaspedalFaktor_AhTypes_Pkg_ah_Pkg = cSteigung2GaspedalFaktor_AhTypes_Pkg_ah_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg = cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg;
static m_in_kg_T_AhTypes_Pkg_physical_Pkg const TU_cFzgMasse_AhTypes_Pkg_fzg_Pkg = cFzgMasse_AhTypes_Pkg_fzg_Pkg;
static p_in_W_T_AhTypes_Pkg_physical_Pkg const TU_cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg = cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg;
static p_in_W_T_AhTypes_Pkg_physical_Pkg const TU_cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg = cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg;
static p_in_W_T_AhTypes_Pkg_physical_Pkg const TU_cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg = cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg;
static t_in_s_T_AhTypes_Pkg_physical_Pkg const TU_cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg = cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg;

/****************************************************************
 ** _2_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _2_SSM_ST_SM1_values[] = {
    { "AH_inaktiv", SSM_st_AH_inaktiv_SM1},
    { "AH_inaktiv", SSM_st_AH_inaktiv_SM1},
    { "AH_aktiv", SSM_st_AH_aktiv_SM1},
    { "AH_aktiv", SSM_st_AH_aktiv_SM1},
};
const int _2_SSM_ST_SM1_nb_values = 4;

int _2_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_2_SSM_ST_SM1*)pValue, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__2_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _2_SSM_ST_SM1 rTemp;
    return string_to__2_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__2_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_2_SSM_ST_SM1*)pValue = (_2_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__2_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

int is__2_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_SSM_ST_SM1VTable);
    }
    return 1;
}

int _2_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_2_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_2_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__2_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_SSM_ST_SM1VTable != NULL
        && pSim_2_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_2_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_2_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_2_SSM_ST_SM1*)pValue1), (int)(*(_2_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_2_SSM_ST_SM1_values, _2_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__2_SSM_ST_SM1(void *pValue)
{
    *(_2_SSM_ST_SM1*)pValue = SSM_st_AH_inaktiv_SM1;
    return 1;
}

int release__2_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__2_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_2_SSM_ST_SM1*)pToValue) = *((_2_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__2_SSM_ST_SM1_Utils = {
    _2_SSM_ST_SM1_to_string,
    check__2_SSM_ST_SM1_string,
    string_to__2_SSM_ST_SM1,
    is__2_SSM_ST_SM1_double_conversion_allowed,
    _2_SSM_ST_SM1_to_double,
    is__2_SSM_ST_SM1_long_conversion_allowed,
    _2_SSM_ST_SM1_to_long,
    compare__2_SSM_ST_SM1,
    get__2_SSM_ST_SM1_signature,
    init__2_SSM_ST_SM1,
    release__2_SSM_ST_SM1,
    copy__2_SSM_ST_SM1,
    sizeof(_2_SSM_ST_SM1)
};

/****************************************************************
 ** _3_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _3_SSM_TR_SM1_values[] = {
    { "_10_SSM_TR_no_trans_SM1", _10_SSM_TR_no_trans_SM1},
    { "_10_SSM_TR_no_trans_SM1", _10_SSM_TR_no_trans_SM1},
    { "SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1", SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1},
    { "SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1", SSM_TR_AH_inaktiv_AH_aktiv_1_AH_inaktiv_SM1},
    { "SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1", SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1},
    { "SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1", SSM_TR_AH_aktiv_AH_inaktiv_1_AH_aktiv_SM1},
};
const int _3_SSM_TR_SM1_nb_values = 6;

int _3_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_3_SSM_TR_SM1*)pValue, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__3_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _3_SSM_TR_SM1 rTemp;
    return string_to__3_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__3_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_3_SSM_TR_SM1*)pValue = (_3_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__3_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

int is__3_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_SSM_TR_SM1VTable);
    }
    return 1;
}

int _3_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_3_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_3_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__3_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_SSM_TR_SM1VTable != NULL
        && pSim_3_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_3_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_3_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_3_SSM_TR_SM1*)pValue1), (int)(*(_3_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_3_SSM_TR_SM1_values, _3_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__3_SSM_TR_SM1(void *pValue)
{
    *(_3_SSM_TR_SM1*)pValue = _10_SSM_TR_no_trans_SM1;
    return 1;
}

int release__3_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__3_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_3_SSM_TR_SM1*)pToValue) = *((_3_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__3_SSM_TR_SM1_Utils = {
    _3_SSM_TR_SM1_to_string,
    check__3_SSM_TR_SM1_string,
    string_to__3_SSM_TR_SM1,
    is__3_SSM_TR_SM1_double_conversion_allowed,
    _3_SSM_TR_SM1_to_double,
    is__3_SSM_TR_SM1_long_conversion_allowed,
    _3_SSM_TR_SM1_to_long,
    compare__3_SSM_TR_SM1,
    get__3_SSM_TR_SM1_signature,
    init__3_SSM_TR_SM1,
    release__3_SSM_TR_SM1,
    copy__3_SSM_TR_SM1,
    sizeof(_3_SSM_TR_SM1)
};

/****************************************************************
 ** _4_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_4_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_4_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _4_SSM_ST_SM1_values[] = {
    { "bremseGeloest", SSM_st_bremseGeloest_SM1},
    { "bremseGeloest", SSM_st_bremseGeloest_SM1},
    { "bremseArretiert", SSM_st_bremseArretiert_SM1},
    { "bremseArretiert", SSM_st_bremseArretiert_SM1},
};
const int _4_SSM_ST_SM1_nb_values = 4;

int _4_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_4_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_4_SSM_ST_SM1*)pValue, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__4_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _4_SSM_ST_SM1 rTemp;
    return string_to__4_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__4_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_4_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_4_SSM_ST_SM1*)pValue = (_4_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__4_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

int is__4_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_4_SSM_ST_SM1VTable);
    }
    return 1;
}

int _4_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_4_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_4_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_4_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__4_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_4_SSM_ST_SM1VTable != NULL
        && pSim_4_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_4_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_4_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_4_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_4_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_4_SSM_ST_SM1*)pValue1), (int)(*(_4_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__4_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_4_SSM_ST_SM1_values, _4_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__4_SSM_ST_SM1(void *pValue)
{
    *(_4_SSM_ST_SM1*)pValue = SSM_st_bremseGeloest_SM1;
    return 1;
}

int release__4_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__4_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_4_SSM_ST_SM1*)pToValue) = *((_4_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__4_SSM_ST_SM1_Utils = {
    _4_SSM_ST_SM1_to_string,
    check__4_SSM_ST_SM1_string,
    string_to__4_SSM_ST_SM1,
    is__4_SSM_ST_SM1_double_conversion_allowed,
    _4_SSM_ST_SM1_to_double,
    is__4_SSM_ST_SM1_long_conversion_allowed,
    _4_SSM_ST_SM1_to_long,
    compare__4_SSM_ST_SM1,
    get__4_SSM_ST_SM1_signature,
    init__4_SSM_ST_SM1,
    release__4_SSM_ST_SM1,
    copy__4_SSM_ST_SM1,
    sizeof(_4_SSM_ST_SM1)
};

/****************************************************************
 ** _5_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_5_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_5_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _5_SSM_TR_SM1_values[] = {
    { "_8_SSM_TR_no_trans_SM1", _8_SSM_TR_no_trans_SM1},
    { "_8_SSM_TR_no_trans_SM1", _8_SSM_TR_no_trans_SM1},
    { "SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1", SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1},
    { "SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1", SSM_TR_bremseGeloest_bremseArretiert_1_bremseGeloest_SM1},
    { "SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1", SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1},
    { "SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1", SSM_TR_bremseArretiert_bremseGeloest_1_bremseArretiert_SM1},
    { "_9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1", _9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1},
    { "_9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1", _9_SSM_TR_bremseArretiert_bremseGeloest_2_bremseArretiert_SM1},
};
const int _5_SSM_TR_SM1_nb_values = 8;

int _5_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_5_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_5_SSM_TR_SM1*)pValue, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__5_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _5_SSM_TR_SM1 rTemp;
    return string_to__5_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__5_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_5_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_5_SSM_TR_SM1*)pValue = (_5_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__5_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

int is__5_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_5_SSM_TR_SM1VTable);
    }
    return 1;
}

int _5_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_5_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_5_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_5_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__5_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_5_SSM_TR_SM1VTable != NULL
        && pSim_5_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_5_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_5_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_5_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_5_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_5_SSM_TR_SM1*)pValue1), (int)(*(_5_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__5_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_5_SSM_TR_SM1_values, _5_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__5_SSM_TR_SM1(void *pValue)
{
    *(_5_SSM_TR_SM1*)pValue = _8_SSM_TR_no_trans_SM1;
    return 1;
}

int release__5_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__5_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_5_SSM_TR_SM1*)pToValue) = *((_5_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__5_SSM_TR_SM1_Utils = {
    _5_SSM_TR_SM1_to_string,
    check__5_SSM_TR_SM1_string,
    string_to__5_SSM_TR_SM1,
    is__5_SSM_TR_SM1_double_conversion_allowed,
    _5_SSM_TR_SM1_to_double,
    is__5_SSM_TR_SM1_long_conversion_allowed,
    _5_SSM_TR_SM1_to_long,
    compare__5_SSM_TR_SM1,
    get__5_SSM_TR_SM1_signature,
    init__5_SSM_TR_SM1,
    release__5_SSM_TR_SM1,
    copy__5_SSM_TR_SM1,
    sizeof(_5_SSM_TR_SM1)
};

/****************************************************************
 ** _6_SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_6_SSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_6_SSM_ST_SM1VTable;
#endif

static SimEnumValUtils _6_SSM_ST_SM1_values[] = {
    { "hillHold_inaktiv", SSM_st_hillHold_inaktiv_SM1},
    { "hillHold_inaktiv", SSM_st_hillHold_inaktiv_SM1},
    { "hilllHold_aktiv", SSM_st_hilllHold_aktiv_SM1},
    { "hilllHold_aktiv", SSM_st_hilllHold_aktiv_SM1},
};
const int _6_SSM_ST_SM1_nb_values = 4;

int _6_SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_6_SSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_6_SSM_ST_SM1*)pValue, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__6_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static _6_SSM_ST_SM1 rTemp;
    return string_to__6_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to__6_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_6_SSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_6_SSM_ST_SM1*)pValue = (_6_SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is__6_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

int is__6_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_6_SSM_ST_SM1VTable);
    }
    return 1;
}

int _6_SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_6_SSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_6_SSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((_6_SSM_ST_SM1*)pValue);
    return 1;
}

void compare__6_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_6_SSM_ST_SM1VTable != NULL
        && pSim_6_SSM_ST_SM1VTable->m_version >= Scv612
        && pSim_6_SSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_6_SSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_6_SSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_6_SSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_6_SSM_ST_SM1*)pValue1), (int)(*(_6_SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__6_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_6_SSM_ST_SM1_values, _6_SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__6_SSM_ST_SM1(void *pValue)
{
    *(_6_SSM_ST_SM1*)pValue = SSM_st_hillHold_inaktiv_SM1;
    return 1;
}

int release__6_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__6_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((_6_SSM_ST_SM1*)pToValue) = *((_6_SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__6_SSM_ST_SM1_Utils = {
    _6_SSM_ST_SM1_to_string,
    check__6_SSM_ST_SM1_string,
    string_to__6_SSM_ST_SM1,
    is__6_SSM_ST_SM1_double_conversion_allowed,
    _6_SSM_ST_SM1_to_double,
    is__6_SSM_ST_SM1_long_conversion_allowed,
    _6_SSM_ST_SM1_to_long,
    compare__6_SSM_ST_SM1,
    get__6_SSM_ST_SM1_signature,
    init__6_SSM_ST_SM1,
    release__6_SSM_ST_SM1,
    copy__6_SSM_ST_SM1,
    sizeof(_6_SSM_ST_SM1)
};

/****************************************************************
 ** _7_SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_7_SSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_7_SSM_TR_SM1VTable;
#endif

static SimEnumValUtils _7_SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1", SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1},
    { "SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1", SSM_TR_hillHold_inaktiv_hilllHold_aktiv_1_hillHold_inaktiv_SM1},
    { "SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1", SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1},
    { "SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1", SSM_TR_hilllHold_aktiv_hillHold_inaktiv_1_hilllHold_aktiv_SM1},
};
const int _7_SSM_TR_SM1_nb_values = 6;

int _7_SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_7_SSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(_7_SSM_TR_SM1*)pValue, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check__7_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static _7_SSM_TR_SM1 rTemp;
    return string_to__7_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to__7_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSim_7_SSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, _7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(_7_SSM_TR_SM1*)pValue = (_7_SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is__7_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

int is__7_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_7_SSM_TR_SM1VTable);
    }
    return 1;
}

int _7_SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSim_7_SSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSim_7_SSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((_7_SSM_TR_SM1*)pValue);
    return 1;
}

void compare__7_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_7_SSM_TR_SM1VTable != NULL
        && pSim_7_SSM_TR_SM1VTable->m_version >= Scv612
        && pSim_7_SSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSim_7_SSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_7_SSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_7_SSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(_7_SSM_TR_SM1*)pValue1), (int)(*(_7_SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__7_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(_7_SSM_TR_SM1_values, _7_SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init__7_SSM_TR_SM1(void *pValue)
{
    *(_7_SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

int release__7_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy__7_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((_7_SSM_TR_SM1*)pToValue) = *((_7_SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type__7_SSM_TR_SM1_Utils = {
    _7_SSM_TR_SM1_to_string,
    check__7_SSM_TR_SM1_string,
    string_to__7_SSM_TR_SM1,
    is__7_SSM_TR_SM1_double_conversion_allowed,
    _7_SSM_TR_SM1_to_double,
    is__7_SSM_TR_SM1_long_conversion_allowed,
    _7_SSM_TR_SM1_to_long,
    compare__7_SSM_TR_SM1,
    get__7_SSM_TR_SM1_signature,
    init__7_SSM_TR_SM1,
    release__7_SSM_TR_SM1,
    copy__7_SSM_TR_SM1,
    sizeof(_7_SSM_TR_SM1)
};

/****************************************************************
 ** angle_in_rad_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const angle_in_rad_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "simEnv_Pkg::mainPkg::cSteigung_00", &TU_cSteigung_00_simEnv_Pkg_mainPkg },
    { "cSteigung_00", &TU_cSteigung_00_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cSteigung_5grad", &TU_cSteigung_5grad_simEnv_Pkg_mainPkg },
    { "cSteigung_5grad", &TU_cSteigung_5grad_simEnv_Pkg_mainPkg },
};

int angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static angle_in_rad_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, angle_in_rad_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimangle_in_rad_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_angle_in_rad_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((angle_in_rad_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((angle_in_rad_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_Utils = {
    angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_angle_in_rad_T_AhTypes_Pkg_physical_Pkg,
    is_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    angle_in_rad_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_angle_in_rad_T_AhTypes_Pkg_physical_Pkg,
    get_angle_in_rad_T_AhTypes_Pkg_physical_Pkg_signature,
    init_angle_in_rad_T_AhTypes_Pkg_physical_Pkg,
    release_angle_in_rad_T_AhTypes_Pkg_physical_Pkg,
    copy_angle_in_rad_T_AhTypes_Pkg_physical_Pkg,
    sizeof(angle_in_rad_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** autoholdModus_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils autoholdModus_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::ahm_off", ahm_off_AhTypes_Pkg_ah_Pkg},
    { "ahm_off", ahm_off_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::ahm_on", ahm_on_AhTypes_Pkg_ah_Pkg},
    { "ahm_on", ahm_on_AhTypes_Pkg_ah_Pkg},
};
const int autoholdModus_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue, autoholdModus_T_AhTypes_Pkg_ah_Pkg_values, autoholdModus_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_autoholdModus_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static autoholdModus_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_autoholdModus_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_autoholdModus_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, autoholdModus_T_AhTypes_Pkg_ah_Pkg_values, autoholdModus_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue = (autoholdModus_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_autoholdModus_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_autoholdModus_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_autoholdModus_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimautoholdModus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_autoholdModus_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(autoholdModus_T_AhTypes_Pkg_ah_Pkg_values, autoholdModus_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_autoholdModus_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pValue = ahm_off_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_autoholdModus_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_autoholdModus_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((autoholdModus_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_autoholdModus_T_AhTypes_Pkg_ah_Pkg_Utils = {
    autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_autoholdModus_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_autoholdModus_T_AhTypes_Pkg_ah_Pkg,
    is_autoholdModus_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_autoholdModus_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    autoholdModus_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_autoholdModus_T_AhTypes_Pkg_ah_Pkg,
    get_autoholdModus_T_AhTypes_Pkg_ah_Pkg_signature,
    init_autoholdModus_T_AhTypes_Pkg_ah_Pkg,
    release_autoholdModus_T_AhTypes_Pkg_ah_Pkg,
    copy_autoholdModus_T_AhTypes_Pkg_ah_Pkg,
    sizeof(autoholdModus_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimConstValUtils const betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_constants[] = {
    { "AhTypes_Pkg::ah_Pkg::cBremspedalkraftDurchgetreten", &TU_cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg },
    { "cBremspedalkraftDurchgetreten", &TU_cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg },
};

int betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_constants, sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_constants) / sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_constants[0]), sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimbetriebsbremsdruck_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_Utils = {
    betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg,
    is_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg,
    get_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg_signature,
    init_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg,
    release_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg,
    copy_betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg,
    sizeof(betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::bbs_frei", bbs_frei_AhTypes_Pkg_ah_Pkg},
    { "bbs_frei", bbs_frei_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::bbs_gesperrt", bbs_gesperrt_AhTypes_Pkg_ah_Pkg},
    { "bbs_gesperrt", bbs_gesperrt_AhTypes_Pkg_ah_Pkg},
};
const int betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue, betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_values, betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_values, betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue = (betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimbetriebsbremsSperrventil_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_values, betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pValue = bbs_frei_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_Utils = {
    betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg,
    is_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg,
    get_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg_signature,
    init_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg,
    release_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg,
    copy_betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg,
    sizeof(betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** bremspedalkraft_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimConstValUtils const bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_constants[] = {
    { "AhTypes_Pkg::ah_Pkg::cBremspedalkraftLosgelassen", &TU_cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg },
    { "cBremspedalkraftLosgelassen", &TU_cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg },
};

int bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static bremspedalkraft_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_constants, sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_constants) / sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_constants[0]), sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimbremspedalkraft_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((bremspedalkraft_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((bremspedalkraft_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_Utils = {
    bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg,
    is_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg,
    get_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg_signature,
    init_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg,
    release_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg,
    copy_bremspedalkraft_T_AhTypes_Pkg_ah_Pkg,
    sizeof(bremspedalkraft_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::epbModus_automatik", epbModus_automatik_AhTypes_Pkg_ah_Pkg},
    { "epbModus_automatik", epbModus_automatik_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::epbModus_manuell", epbModus_manuell_AhTypes_Pkg_ah_Pkg},
    { "epbModus_manuell", epbModus_manuell_AhTypes_Pkg_ah_Pkg},
};
const int epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue, epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_values, epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_values, epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue = (epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimepbBetriebsmodus_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_values, epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pValue = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_Utils = {
    epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg,
    is_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg,
    get_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg_signature,
    init_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg,
    release_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg,
    copy_epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg,
    sizeof(epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** epbBremszustand_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils epbBremszustand_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::pBremse_angezogen", pBremse_angezogen_AhTypes_Pkg_ah_Pkg},
    { "pBremse_angezogen", pBremse_angezogen_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::pBremse_frei", pBremse_frei_AhTypes_Pkg_ah_Pkg},
    { "pBremse_frei", pBremse_frei_AhTypes_Pkg_ah_Pkg},
};
const int epbBremszustand_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue, epbBremszustand_T_AhTypes_Pkg_ah_Pkg_values, epbBremszustand_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static epbBremszustand_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, epbBremszustand_T_AhTypes_Pkg_ah_Pkg_values, epbBremszustand_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue = (epbBremszustand_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimepbBremszustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(epbBremszustand_T_AhTypes_Pkg_ah_Pkg_values, epbBremszustand_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pValue = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_epbBremszustand_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((epbBremszustand_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_Utils = {
    epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_epbBremszustand_T_AhTypes_Pkg_ah_Pkg,
    is_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    epbBremszustand_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_epbBremszustand_T_AhTypes_Pkg_ah_Pkg,
    get_epbBremszustand_T_AhTypes_Pkg_ah_Pkg_signature,
    init_epbBremszustand_T_AhTypes_Pkg_ah_Pkg,
    release_epbBremszustand_T_AhTypes_Pkg_ah_Pkg,
    copy_epbBremszustand_T_AhTypes_Pkg_ah_Pkg,
    sizeof(epbBremszustand_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** gaspedalstellung_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimConstValUtils const gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_constants[] = {
    { "AhTypes_Pkg::ah_Pkg::cLangsamesGaspedalTreten", &TU_cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg },
    { "cLangsamesGaspedalTreten", &TU_cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMasGaspedalStellungFuerEpbLoesen", &TU_cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "cMasGaspedalStellungFuerEpbLoesen", &TU_cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMinGaspedalStellungFuerEpbLoesen", &TU_cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "cMinGaspedalStellungFuerEpbLoesen", &TU_cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
};

int gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static gaspedalstellung_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_constants, sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_constants) / sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_constants[0]), sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimgaspedalstellung_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((gaspedalstellung_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((gaspedalstellung_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_Utils = {
    gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg,
    is_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg,
    get_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg_signature,
    init_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg,
    release_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg,
    copy_gaspedalstellung_T_AhTypes_Pkg_ah_Pkg,
    sizeof(gaspedalstellung_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::getriebeWahl_P", getriebeWahl_P_AhTypes_Pkg_ah_Pkg},
    { "getriebeWahl_P", getriebeWahl_P_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::getriebeWahl_R", getriebeWahl_R_AhTypes_Pkg_ah_Pkg},
    { "getriebeWahl_R", getriebeWahl_R_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::getriebeWahl_N", getriebeWahl_N_AhTypes_Pkg_ah_Pkg},
    { "getriebeWahl_N", getriebeWahl_N_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::getriebeWahl_D", getriebeWahl_D_AhTypes_Pkg_ah_Pkg},
    { "getriebeWahl_D", getriebeWahl_D_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::getriebeWahl_B", getriebeWahl_B_AhTypes_Pkg_ah_Pkg},
    { "getriebeWahl_B", getriebeWahl_B_AhTypes_Pkg_ah_Pkg},
};
const int getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_nb_values = 10;

int getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue, getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_values, getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_values, getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue = (getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimgetriebeWahlhebel_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_values, getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pValue = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_Utils = {
    getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg,
    is_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg,
    get_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg_signature,
    init_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg,
    release_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg,
    copy_getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg,
    sizeof(getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, (void*)&rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int init_kcg_bool(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

int release_kcg_bool(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_bool(void *pToValue, const void *pFromValue)
{
    *((kcg_bool*)pToValue) = *((kcg_bool*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    init_kcg_bool,
    release_kcg_bool,
    copy_kcg_bool,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, (void*)&rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int init_kcg_char(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

int release_kcg_char(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_char(void *pToValue, const void *pFromValue)
{
    *((kcg_char*)pToValue) = *((kcg_char*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    init_kcg_char,
    release_kcg_char,
    copy_kcg_char,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceFloat;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceFloat
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int init_kcg_float32(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

int release_kcg_float32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float32(void *pToValue, const void *pFromValue)
{
    *((kcg_float32*)pToValue) = *((kcg_float32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    init_kcg_float32,
    release_kcg_float32,
    copy_kcg_float32,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

static SimConstValUtils const kcg_float64_constants[] = {
    { "AH_testSuite_Pkg::divFahrer::c_5s_warten", &TU_c_5s_warten_AH_testSuite_Pkg_divFahrer },
    { "c_5s_warten", &TU_c_5s_warten_AH_testSuite_Pkg_divFahrer },
    { "simEnv_Pkg::mainPkg::cS_00", &TU_cS_00_simEnv_Pkg_mainPkg },
    { "cS_00", &TU_cS_00_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_01", &TU_cS_01_simEnv_Pkg_mainPkg },
    { "cS_01", &TU_cS_01_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_02", &TU_cS_02_simEnv_Pkg_mainPkg },
    { "cS_02", &TU_cS_02_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_03", &TU_cS_03_simEnv_Pkg_mainPkg },
    { "cS_03", &TU_cS_03_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cSteigung_00", &TU_cSteigung_00_simEnv_Pkg_mainPkg },
    { "cSteigung_00", &TU_cSteigung_00_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cSteigung_5grad", &TU_cSteigung_5grad_simEnv_Pkg_mainPkg },
    { "cSteigung_5grad", &TU_cSteigung_5grad_simEnv_Pkg_mainPkg },
    { "AhTypes_Pkg::physical_Pkg::pi", &TU_pi_AhTypes_Pkg_physical_Pkg },
    { "pi", &TU_pi_AhTypes_Pkg_physical_Pkg },
    { "AhTypes_Pkg::physical_Pkg::cEpsilon", &TU_cEpsilon_AhTypes_Pkg_physical_Pkg },
    { "cEpsilon", &TU_cEpsilon_AhTypes_Pkg_physical_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cV_FzgSteht", &TU_cV_FzgSteht_AhTypes_Pkg_ah_Pkg },
    { "cV_FzgSteht", &TU_cV_FzgSteht_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cLangsamesGaspedalTreten", &TU_cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg },
    { "cLangsamesGaspedalTreten", &TU_cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMasGaspedalStellungFuerEpbLoesen", &TU_cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "cMasGaspedalStellungFuerEpbLoesen", &TU_cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMinGaspedalStellungFuerEpbLoesen", &TU_cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "cMinGaspedalStellungFuerEpbLoesen", &TU_cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cBremspedalkraftDurchgetreten", &TU_cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg },
    { "cBremspedalkraftDurchgetreten", &TU_cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cNotbremsDelay", &TU_cNotbremsDelay_AhTypes_Pkg_ah_Pkg },
    { "cNotbremsDelay", &TU_cNotbremsDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cLedP_NachleuchtDelay", &TU_cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg },
    { "cLedP_NachleuchtDelay", &TU_cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cEpbModusDelay", &TU_cEpbModusDelay_AhTypes_Pkg_ah_Pkg },
    { "cEpbModusDelay", &TU_cEpbModusDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cBremspedalkraftLosgelassen", &TU_cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg },
    { "cBremspedalkraftLosgelassen", &TU_cBremspedalkraftLosgelassen_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMaxHillHoldAktivzeit", &TU_cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg },
    { "cMaxHillHoldAktivzeit", &TU_cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cSteigung2GaspedalFaktor", &TU_cSteigung2GaspedalFaktor_AhTypes_Pkg_ah_Pkg },
    { "cSteigung2GaspedalFaktor", &TU_cSteigung2GaspedalFaktor_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cWartenBisEPBnachAutoHold", &TU_cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg },
    { "cWartenBisEPBnachAutoHold", &TU_cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMasse", &TU_cFzgMasse_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMasse", &TU_cFzgMasse_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxBetriebsbremsleistung", &TU_cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxBetriebsbremsleistung", &TU_cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxMotorleistung", &TU_cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxMotorleistung", &TU_cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxEPBLeistung", &TU_cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxEPBLeistung", &TU_cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::utils_Pkg::cZeitincrementProTakt", &TU_cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg },
    { "cZeitincrementProTakt", &TU_cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg },
};

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, kcg_float64_constants, sizeof(kcg_float64_constants) / sizeof(kcg_float64_constants[0]), sizeof(kcg_float64), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    if (!pTol)
        pTol = (SimTolerance*)&defaultSimToleranceDouble;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == (SimTolerance*)&defaultSimToleranceDouble
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int init_kcg_float64(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

int release_kcg_float64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_float64(void *pToValue, const void *pFromValue)
{
    *((kcg_float64*)pToValue) = *((kcg_float64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    init_kcg_float64,
    release_kcg_float64,
    copy_kcg_float64,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int init_kcg_int16(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

int release_kcg_int16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int16(void *pToValue, const void *pFromValue)
{
    *((kcg_int16*)pToValue) = *((kcg_int16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    init_kcg_int16,
    release_kcg_int16,
    copy_kcg_int16,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int init_kcg_int32(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

int release_kcg_int32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int32(void *pToValue, const void *pFromValue)
{
    *((kcg_int32*)pToValue) = *((kcg_int32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    init_kcg_int32,
    release_kcg_int32,
    copy_kcg_int32,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int init_kcg_int64(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

int release_kcg_int64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int64(void *pToValue, const void *pFromValue)
{
    *((kcg_int64*)pToValue) = *((kcg_int64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    init_kcg_int64,
    release_kcg_int64,
    copy_kcg_int64,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int init_kcg_int8(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

int release_kcg_int8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_int8(void *pToValue, const void *pFromValue)
{
    *((kcg_int8*)pToValue) = *((kcg_int8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    init_kcg_int8,
    release_kcg_int8,
    copy_kcg_int8,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, (void*)&rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int init_kcg_size(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

int release_kcg_size(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_size(void *pToValue, const void *pFromValue)
{
    *((kcg_size*)pToValue) = *((kcg_size*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    init_kcg_size,
    release_kcg_size,
    copy_kcg_size,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int init_kcg_uint16(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

int release_kcg_uint16(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint16(void *pToValue, const void *pFromValue)
{
    *((kcg_uint16*)pToValue) = *((kcg_uint16*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    init_kcg_uint16,
    release_kcg_uint16,
    copy_kcg_uint16,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int init_kcg_uint32(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

int release_kcg_uint32(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint32(void *pToValue, const void *pFromValue)
{
    *((kcg_uint32*)pToValue) = *((kcg_uint32*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    init_kcg_uint32,
    release_kcg_uint32,
    copy_kcg_uint32,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int init_kcg_uint64(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

int release_kcg_uint64(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint64(void *pToValue, const void *pFromValue)
{
    *((kcg_uint64*)pToValue) = *((kcg_uint64*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    init_kcg_uint64,
    release_kcg_uint64,
    copy_kcg_uint64,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, (void*)&rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int init_kcg_uint8(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

int release_kcg_uint8(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_kcg_uint8(void *pToValue, const void *pFromValue)
{
    *((kcg_uint8*)pToValue) = *((kcg_uint8*)pFromValue);
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    init_kcg_uint8,
    release_kcg_uint8,
    copy_kcg_uint8,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** m_in_kg_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const m_in_kg_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "AhTypes_Pkg::fzg_Pkg::cFzgMasse", &TU_cFzgMasse_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMasse", &TU_cFzgMasse_AhTypes_Pkg_fzg_Pkg },
};

int m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_m_in_kg_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static m_in_kg_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_m_in_kg_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_m_in_kg_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, m_in_kg_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_m_in_kg_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_m_in_kg_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_m_in_kg_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimm_in_kg_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_m_in_kg_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_m_in_kg_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_m_in_kg_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_m_in_kg_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((m_in_kg_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((m_in_kg_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_m_in_kg_T_AhTypes_Pkg_physical_Pkg_Utils = {
    m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_m_in_kg_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_m_in_kg_T_AhTypes_Pkg_physical_Pkg,
    is_m_in_kg_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_m_in_kg_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    m_in_kg_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_m_in_kg_T_AhTypes_Pkg_physical_Pkg,
    get_m_in_kg_T_AhTypes_Pkg_physical_Pkg_signature,
    init_m_in_kg_T_AhTypes_Pkg_physical_Pkg,
    release_m_in_kg_T_AhTypes_Pkg_physical_Pkg,
    copy_m_in_kg_T_AhTypes_Pkg_physical_Pkg,
    sizeof(m_in_kg_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** on_off_element_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils on_off_element_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::sw2_off", sw2_off_AhTypes_Pkg_ah_Pkg},
    { "sw2_off", sw2_off_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::sw2_on", sw2_on_AhTypes_Pkg_ah_Pkg},
    { "sw2_on", sw2_on_AhTypes_Pkg_ah_Pkg},
};
const int on_off_element_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int on_off_element_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue, on_off_element_T_AhTypes_Pkg_ah_Pkg_values, on_off_element_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_on_off_element_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static on_off_element_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_on_off_element_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_on_off_element_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, on_off_element_T_AhTypes_Pkg_ah_Pkg_values, on_off_element_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue = (on_off_element_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_on_off_element_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int on_off_element_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_on_off_element_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int on_off_element_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_on_off_element_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimon_off_element_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_on_off_element_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(on_off_element_T_AhTypes_Pkg_ah_Pkg_values, on_off_element_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_on_off_element_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(on_off_element_T_AhTypes_Pkg_ah_Pkg*)pValue = sw2_off_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_on_off_element_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_on_off_element_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((on_off_element_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((on_off_element_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_on_off_element_T_AhTypes_Pkg_ah_Pkg_Utils = {
    on_off_element_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_on_off_element_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_on_off_element_T_AhTypes_Pkg_ah_Pkg,
    is_on_off_element_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    on_off_element_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_on_off_element_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    on_off_element_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_on_off_element_T_AhTypes_Pkg_ah_Pkg,
    get_on_off_element_T_AhTypes_Pkg_ah_Pkg_signature,
    init_on_off_element_T_AhTypes_Pkg_ah_Pkg,
    release_on_off_element_T_AhTypes_Pkg_ah_Pkg,
    copy_on_off_element_T_AhTypes_Pkg_ah_Pkg,
    sizeof(on_off_element_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** p_in_W_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const p_in_W_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxBetriebsbremsleistung", &TU_cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxBetriebsbremsleistung", &TU_cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxMotorleistung", &TU_cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxMotorleistung", &TU_cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg },
    { "AhTypes_Pkg::fzg_Pkg::cFzgMaxEPBLeistung", &TU_cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg },
    { "cFzgMaxEPBLeistung", &TU_cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg },
};

int p_in_W_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_p_in_W_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static p_in_W_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_p_in_W_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_p_in_W_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, p_in_W_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_p_in_W_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int p_in_W_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_p_in_W_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int p_in_W_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_p_in_W_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimp_in_W_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_p_in_W_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_p_in_W_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_p_in_W_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_p_in_W_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((p_in_W_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((p_in_W_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_p_in_W_T_AhTypes_Pkg_physical_Pkg_Utils = {
    p_in_W_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_p_in_W_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_p_in_W_T_AhTypes_Pkg_physical_Pkg,
    is_p_in_W_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    p_in_W_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_p_in_W_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    p_in_W_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_p_in_W_T_AhTypes_Pkg_physical_Pkg,
    get_p_in_W_T_AhTypes_Pkg_physical_Pkg_signature,
    init_p_in_W_T_AhTypes_Pkg_physical_Pkg,
    release_p_in_W_T_AhTypes_Pkg_physical_Pkg,
    copy_p_in_W_T_AhTypes_Pkg_physical_Pkg,
    sizeof(p_in_W_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** s_in_m_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const s_in_m_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "simEnv_Pkg::mainPkg::cS_00", &TU_cS_00_simEnv_Pkg_mainPkg },
    { "cS_00", &TU_cS_00_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_01", &TU_cS_01_simEnv_Pkg_mainPkg },
    { "cS_01", &TU_cS_01_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_02", &TU_cS_02_simEnv_Pkg_mainPkg },
    { "cS_02", &TU_cS_02_simEnv_Pkg_mainPkg },
    { "simEnv_Pkg::mainPkg::cS_03", &TU_cS_03_simEnv_Pkg_mainPkg },
    { "cS_03", &TU_cS_03_simEnv_Pkg_mainPkg },
};

int s_in_m_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_s_in_m_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static s_in_m_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_s_in_m_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_s_in_m_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, s_in_m_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_s_in_m_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int s_in_m_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_s_in_m_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int s_in_m_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_s_in_m_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSims_in_m_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_s_in_m_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_s_in_m_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_s_in_m_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_s_in_m_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((s_in_m_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((s_in_m_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_s_in_m_T_AhTypes_Pkg_physical_Pkg_Utils = {
    s_in_m_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_s_in_m_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_s_in_m_T_AhTypes_Pkg_physical_Pkg,
    is_s_in_m_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    s_in_m_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_s_in_m_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    s_in_m_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_s_in_m_T_AhTypes_Pkg_physical_Pkg,
    get_s_in_m_T_AhTypes_Pkg_physical_Pkg_signature,
    init_s_in_m_T_AhTypes_Pkg_physical_Pkg,
    release_s_in_m_T_AhTypes_Pkg_physical_Pkg,
    copy_s_in_m_T_AhTypes_Pkg_physical_Pkg,
    sizeof(s_in_m_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::sGurtNichtAngelegt", sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg},
    { "sGurtNichtAngelegt", sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::sGurtAngelegt", sGurtAngelegt_AhTypes_Pkg_ah_Pkg},
    { "sGurtAngelegt", sGurtAngelegt_AhTypes_Pkg_ah_Pkg},
};
const int sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue, sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_values, sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_values, sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue = (sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsicherheitsgurt_zustand_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_values, sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pValue = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_Utils = {
    sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg,
    is_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg,
    get_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg_signature,
    init_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg,
    release_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg,
    copy_sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg,
    sizeof(sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** SSM_ST_EPB_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_EPB_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_EPB_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_EPB_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_EPB_SMVTable;
#endif

static SimEnumValUtils SSM_ST_EPB_SM_values[] = {
    { "epb_arretiert", SSM_st_epb_arretiert_EPB_SM},
    { "epb_arretiert", SSM_st_epb_arretiert_EPB_SM},
    { "epb_geloest", SSM_st_epb_geloest_EPB_SM},
    { "epb_geloest", SSM_st_epb_geloest_EPB_SM},
};
const int SSM_ST_EPB_SM_nb_values = 4;

int SSM_ST_EPB_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_EPB_SMVTable != NULL
        && pSimSSM_ST_EPB_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_EPB_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_EPB_SM*)pValue, SSM_ST_EPB_SM_values, SSM_ST_EPB_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_EPB_SM_string(const char *str, char **endptr)
{
    static SSM_ST_EPB_SM rTemp;
    return string_to_SSM_ST_EPB_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_EPB_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_EPB_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_EPB_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_EPB_SM_values, SSM_ST_EPB_SM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_EPB_SM*)pValue = (SSM_ST_EPB_SM)nTemp;
    }
    return nRet;
}

int is_SSM_ST_EPB_SM_double_conversion_allowed()
{
    if (pSimSSM_ST_EPB_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_EPB_SMVTable);
    }
    return 1;
}

int SSM_ST_EPB_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_EPB_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_EPB_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_EPB_SM*)pValue);
    return 1;
}

int is_SSM_ST_EPB_SM_long_conversion_allowed()
{
    if (pSimSSM_ST_EPB_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_EPB_SMVTable);
    }
    return 1;
}

int SSM_ST_EPB_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_EPB_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_EPB_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_EPB_SM*)pValue);
    return 1;
}

void compare_SSM_ST_EPB_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_EPB_SMVTable != NULL
        && pSimSSM_ST_EPB_SMVTable->m_version >= Scv612
        && pSimSSM_ST_EPB_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_EPB_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_EPB_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_EPB_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_EPB_SM*)pValue1), (int)(*(SSM_ST_EPB_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_EPB_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_EPB_SM_values, SSM_ST_EPB_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_EPB_SM(void *pValue)
{
    *(SSM_ST_EPB_SM*)pValue = SSM_st_epb_arretiert_EPB_SM;
    return 1;
}

int release_SSM_ST_EPB_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_EPB_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_EPB_SM*)pToValue) = *((SSM_ST_EPB_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_EPB_SM_Utils = {
    SSM_ST_EPB_SM_to_string,
    check_SSM_ST_EPB_SM_string,
    string_to_SSM_ST_EPB_SM,
    is_SSM_ST_EPB_SM_double_conversion_allowed,
    SSM_ST_EPB_SM_to_double,
    is_SSM_ST_EPB_SM_long_conversion_allowed,
    SSM_ST_EPB_SM_to_long,
    compare_SSM_ST_EPB_SM,
    get_SSM_ST_EPB_SM_signature,
    init_SSM_ST_EPB_SM,
    release_SSM_ST_EPB_SM,
    copy_SSM_ST_EPB_SM,
    sizeof(SSM_ST_EPB_SM)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "Start", SSM_st_Start_SM1},
    { "Start", SSM_st_Start_SM1},
    { "zuendungEinschalten", SSM_st_zuendungEinschalten_SM1},
    { "zuendungEinschalten", SSM_st_zuendungEinschalten_SM1},
    { "bremspedalDurchtreten", SSM_st_bremspedalDurchtreten_SM1},
    { "bremspedalDurchtreten", SSM_st_bremspedalDurchtreten_SM1},
    { "automastikModusEinstellen", SSM_st_automastikModusEinstellen_SM1},
    { "automastikModusEinstellen", SSM_st_automastikModusEinstellen_SM1},
    { "automatikModusEingestellt", SSM_st_automatikModusEingestellt_SM1},
    { "automatikModusEingestellt", SSM_st_automatikModusEingestellt_SM1},
    { "cockpitanzeigeBleibtAus", SSM_st_cockpitanzeigeBleibtAus_SM1},
    { "cockpitanzeigeBleibtAus", SSM_st_cockpitanzeigeBleibtAus_SM1},
    { "betriebsbremseLoesen", SSM_st_betriebsbremseLoesen_SM1},
    { "betriebsbremseLoesen", SSM_st_betriebsbremseLoesen_SM1},
    { "EPB_angezogen", SSM_st_EPB_angezogen_SM1},
    { "EPB_angezogen", SSM_st_EPB_angezogen_SM1},
    { "anfahrenVorbereiten", SSM_st_anfahrenVorbereiten_SM1},
    { "anfahrenVorbereiten", SSM_st_anfahrenVorbereiten_SM1},
    { "EPB_arretiert", SSM_st_EPB_arretiert_SM1},
    { "EPB_arretiert", SSM_st_EPB_arretiert_SM1},
    { "autoHoldEinschalten", SSM_st_autoHoldEinschalten_SM1},
    { "autoHoldEinschalten", SSM_st_autoHoldEinschalten_SM1},
    { "fahren", SSM_st_fahren_SM1},
    { "fahren", SSM_st_fahren_SM1},
    { "anfahren", SSM_st_anfahren_SM1},
    { "anfahren", SSM_st_anfahren_SM1},
    { "anhaltenMitAutoHold", SSM_st_anhaltenMitAutoHold_SM1},
    { "anhaltenMitAutoHold", SSM_st_anhaltenMitAutoHold_SM1},
    { "haltImAutoHold", SSM_st_haltImAutoHold_SM1},
    { "haltImAutoHold", SSM_st_haltImAutoHold_SM1},
    { "fzgSteht", SSM_st_fzgSteht_SM1},
    { "fzgSteht", SSM_st_fzgSteht_SM1},
};
const int SSM_ST_SM1_nb_values = 32;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM1(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_Start_SM1;
    return 1;
}

int release_SSM_ST_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM1*)pToValue) = *((SSM_ST_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    init_SSM_ST_SM1,
    release_SSM_ST_SM1,
    copy_SSM_ST_SM1,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_ST_SM2_anfahren_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM2_anfahren_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM2_anfahren_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM2_anfahren_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM2_anfahren_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM2_anfahren_SM1_values[] = {
    { "bremspedalTreten", SSM_st_bremspedalTreten_SM2_anfahren_SM1},
    { "bremspedalTreten", SSM_st_bremspedalTreten_SM2_anfahren_SM1},
    { "getriebe_auf_D", SSM_st_getriebe_auf_D_SM2_anfahren_SM1},
    { "getriebe_auf_D", SSM_st_getriebe_auf_D_SM2_anfahren_SM1},
    { "gasGeben", SSM_st_gasGeben_SM2_anfahren_SM1},
    { "gasGeben", SSM_st_gasGeben_SM2_anfahren_SM1},
};
const int SSM_ST_SM2_anfahren_SM1_nb_values = 6;

int SSM_ST_SM2_anfahren_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL
        && pSimSSM_ST_SM2_anfahren_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM2_anfahren_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM2_anfahren_SM1*)pValue, SSM_ST_SM2_anfahren_SM1_values, SSM_ST_SM2_anfahren_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM2_anfahren_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM2_anfahren_SM1 rTemp;
    return string_to_SSM_ST_SM2_anfahren_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM2_anfahren_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM2_anfahren_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM2_anfahren_SM1_values, SSM_ST_SM2_anfahren_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM2_anfahren_SM1*)pValue = (SSM_ST_SM2_anfahren_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM2_anfahren_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM2_anfahren_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM2_anfahren_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM2_anfahren_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM2_anfahren_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM2_anfahren_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM2_anfahren_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM2_anfahren_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM2_anfahren_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM2_anfahren_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM2_anfahren_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM2_anfahren_SM1VTable != NULL
        && pSimSSM_ST_SM2_anfahren_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM2_anfahren_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM2_anfahren_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM2_anfahren_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM2_anfahren_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM2_anfahren_SM1*)pValue1), (int)(*(SSM_ST_SM2_anfahren_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM2_anfahren_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM2_anfahren_SM1_values, SSM_ST_SM2_anfahren_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM2_anfahren_SM1(void *pValue)
{
    *(SSM_ST_SM2_anfahren_SM1*)pValue = SSM_st_bremspedalTreten_SM2_anfahren_SM1;
    return 1;
}

int release_SSM_ST_SM2_anfahren_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM2_anfahren_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM2_anfahren_SM1*)pToValue) = *((SSM_ST_SM2_anfahren_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM2_anfahren_SM1_Utils = {
    SSM_ST_SM2_anfahren_SM1_to_string,
    check_SSM_ST_SM2_anfahren_SM1_string,
    string_to_SSM_ST_SM2_anfahren_SM1,
    is_SSM_ST_SM2_anfahren_SM1_double_conversion_allowed,
    SSM_ST_SM2_anfahren_SM1_to_double,
    is_SSM_ST_SM2_anfahren_SM1_long_conversion_allowed,
    SSM_ST_SM2_anfahren_SM1_to_long,
    compare_SSM_ST_SM2_anfahren_SM1,
    get_SSM_ST_SM2_anfahren_SM1_signature,
    init_SSM_ST_SM2_anfahren_SM1,
    release_SSM_ST_SM2_anfahren_SM1,
    copy_SSM_ST_SM2_anfahren_SM1,
    sizeof(SSM_ST_SM2_anfahren_SM1)
};

/****************************************************************
 ** SSM_ST_SM4_autoHoldEinschalten_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM4_autoHoldEinschalten_SM1_values[] = {
    { "HoldDruecken", SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1},
    { "HoldDruecken", SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1},
    { "HoldLoesen", SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1},
    { "HoldLoesen", SSM_st_HoldLoesen_SM4_autoHoldEinschalten_SM1},
};
const int SSM_ST_SM4_autoHoldEinschalten_SM1_nb_values = 4;

int SSM_ST_SM4_autoHoldEinschalten_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL
        && pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue, SSM_ST_SM4_autoHoldEinschalten_SM1_values, SSM_ST_SM4_autoHoldEinschalten_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM4_autoHoldEinschalten_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM4_autoHoldEinschalten_SM1 rTemp;
    return string_to_SSM_ST_SM4_autoHoldEinschalten_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM4_autoHoldEinschalten_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM4_autoHoldEinschalten_SM1_values, SSM_ST_SM4_autoHoldEinschalten_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue = (SSM_ST_SM4_autoHoldEinschalten_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM4_autoHoldEinschalten_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM4_autoHoldEinschalten_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM4_autoHoldEinschalten_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM4_autoHoldEinschalten_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM4_autoHoldEinschalten_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable != NULL
        && pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue1), (int)(*(SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM4_autoHoldEinschalten_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM4_autoHoldEinschalten_SM1_values, SSM_ST_SM4_autoHoldEinschalten_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM4_autoHoldEinschalten_SM1(void *pValue)
{
    *(SSM_ST_SM4_autoHoldEinschalten_SM1*)pValue = SSM_st_HoldDruecken_SM4_autoHoldEinschalten_SM1;
    return 1;
}

int release_SSM_ST_SM4_autoHoldEinschalten_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM4_autoHoldEinschalten_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM4_autoHoldEinschalten_SM1*)pToValue) = *((SSM_ST_SM4_autoHoldEinschalten_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM4_autoHoldEinschalten_SM1_Utils = {
    SSM_ST_SM4_autoHoldEinschalten_SM1_to_string,
    check_SSM_ST_SM4_autoHoldEinschalten_SM1_string,
    string_to_SSM_ST_SM4_autoHoldEinschalten_SM1,
    is_SSM_ST_SM4_autoHoldEinschalten_SM1_double_conversion_allowed,
    SSM_ST_SM4_autoHoldEinschalten_SM1_to_double,
    is_SSM_ST_SM4_autoHoldEinschalten_SM1_long_conversion_allowed,
    SSM_ST_SM4_autoHoldEinschalten_SM1_to_long,
    compare_SSM_ST_SM4_autoHoldEinschalten_SM1,
    get_SSM_ST_SM4_autoHoldEinschalten_SM1_signature,
    init_SSM_ST_SM4_autoHoldEinschalten_SM1,
    release_SSM_ST_SM4_autoHoldEinschalten_SM1,
    copy_SSM_ST_SM4_autoHoldEinschalten_SM1,
    sizeof(SSM_ST_SM4_autoHoldEinschalten_SM1)
};

/****************************************************************
 ** SSM_ST_SM_Betriebsmodus 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM_BetriebsmodusVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM_BetriebsmodusVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM_BetriebsmodusVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM_BetriebsmodusVTable;
#endif

static SimEnumValUtils SSM_ST_SM_Betriebsmodus_values[] = {
    { "automatikModus", SSM_st_automatikModus_SM_Betriebsmodus},
    { "automatikModus", SSM_st_automatikModus_SM_Betriebsmodus},
    { "manuellerModus", SSM_st_manuellerModus_SM_Betriebsmodus},
    { "manuellerModus", SSM_st_manuellerModus_SM_Betriebsmodus},
};
const int SSM_ST_SM_Betriebsmodus_nb_values = 4;

int SSM_ST_SM_Betriebsmodus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL
        && pSimSSM_ST_SM_BetriebsmodusVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM_BetriebsmodusVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM_Betriebsmodus*)pValue, SSM_ST_SM_Betriebsmodus_values, SSM_ST_SM_Betriebsmodus_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM_Betriebsmodus_string(const char *str, char **endptr)
{
    static SSM_ST_SM_Betriebsmodus rTemp;
    return string_to_SSM_ST_SM_Betriebsmodus(str, (void*)&rTemp, endptr);
}

int string_to_SSM_ST_SM_Betriebsmodus(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM_BetriebsmodusVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM_Betriebsmodus_values, SSM_ST_SM_Betriebsmodus_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM_Betriebsmodus*)pValue = (SSM_ST_SM_Betriebsmodus)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM_Betriebsmodus_double_conversion_allowed()
{
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM_BetriebsmodusVTable);
    }
    return 1;
}

int SSM_ST_SM_Betriebsmodus_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM_BetriebsmodusVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM_Betriebsmodus*)pValue);
    return 1;
}

int is_SSM_ST_SM_Betriebsmodus_long_conversion_allowed()
{
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM_BetriebsmodusVTable);
    }
    return 1;
}

int SSM_ST_SM_Betriebsmodus_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM_BetriebsmodusVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM_Betriebsmodus*)pValue);
    return 1;
}

void compare_SSM_ST_SM_Betriebsmodus(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM_BetriebsmodusVTable != NULL
        && pSimSSM_ST_SM_BetriebsmodusVTable->m_version >= Scv612
        && pSimSSM_ST_SM_BetriebsmodusVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM_BetriebsmodusVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM_BetriebsmodusVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM_BetriebsmodusVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM_Betriebsmodus*)pValue1), (int)(*(SSM_ST_SM_Betriebsmodus*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM_Betriebsmodus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM_Betriebsmodus_values, SSM_ST_SM_Betriebsmodus_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_ST_SM_Betriebsmodus(void *pValue)
{
    *(SSM_ST_SM_Betriebsmodus*)pValue = SSM_st_automatikModus_SM_Betriebsmodus;
    return 1;
}

int release_SSM_ST_SM_Betriebsmodus(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_ST_SM_Betriebsmodus(void *pToValue, const void *pFromValue)
{
    *((SSM_ST_SM_Betriebsmodus*)pToValue) = *((SSM_ST_SM_Betriebsmodus*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM_Betriebsmodus_Utils = {
    SSM_ST_SM_Betriebsmodus_to_string,
    check_SSM_ST_SM_Betriebsmodus_string,
    string_to_SSM_ST_SM_Betriebsmodus,
    is_SSM_ST_SM_Betriebsmodus_double_conversion_allowed,
    SSM_ST_SM_Betriebsmodus_to_double,
    is_SSM_ST_SM_Betriebsmodus_long_conversion_allowed,
    SSM_ST_SM_Betriebsmodus_to_long,
    compare_SSM_ST_SM_Betriebsmodus,
    get_SSM_ST_SM_Betriebsmodus_signature,
    init_SSM_ST_SM_Betriebsmodus,
    release_SSM_ST_SM_Betriebsmodus,
    copy_SSM_ST_SM_Betriebsmodus,
    sizeof(SSM_ST_SM_Betriebsmodus)
};

/****************************************************************
 ** SSM_TR_EPB_SM 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_EPB_SMVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_EPB_SMVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_EPB_SMVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_EPB_SMVTable;
#endif

static SimEnumValUtils SSM_TR_EPB_SM_values[] = {
    { "SSM_TR_no_trans_EPB_SM", SSM_TR_no_trans_EPB_SM},
    { "SSM_TR_no_trans_EPB_SM", SSM_TR_no_trans_EPB_SM},
    { "SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM", SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM},
    { "SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM", SSM_TR_epb_arretiert_epb_geloest_1_epb_arretiert_EPB_SM},
    { "SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM", SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM},
    { "SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM", SSM_TR_epb_geloest_epb_arretiert_1_epb_geloest_EPB_SM},
};
const int SSM_TR_EPB_SM_nb_values = 6;

int SSM_TR_EPB_SM_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_EPB_SMVTable != NULL
        && pSimSSM_TR_EPB_SMVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_EPB_SMVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_EPB_SM*)pValue, SSM_TR_EPB_SM_values, SSM_TR_EPB_SM_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_EPB_SM_string(const char *str, char **endptr)
{
    static SSM_TR_EPB_SM rTemp;
    return string_to_SSM_TR_EPB_SM(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_EPB_SM(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_EPB_SMVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_EPB_SMVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_EPB_SM_values, SSM_TR_EPB_SM_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_EPB_SM*)pValue = (SSM_TR_EPB_SM)nTemp;
    }
    return nRet;
}

int is_SSM_TR_EPB_SM_double_conversion_allowed()
{
    if (pSimSSM_TR_EPB_SMVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_EPB_SMVTable);
    }
    return 1;
}

int SSM_TR_EPB_SM_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_EPB_SMVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_EPB_SMVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_EPB_SM*)pValue);
    return 1;
}

int is_SSM_TR_EPB_SM_long_conversion_allowed()
{
    if (pSimSSM_TR_EPB_SMVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_EPB_SMVTable);
    }
    return 1;
}

int SSM_TR_EPB_SM_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_EPB_SMVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_EPB_SMVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_EPB_SM*)pValue);
    return 1;
}

void compare_SSM_TR_EPB_SM(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_EPB_SMVTable != NULL
        && pSimSSM_TR_EPB_SMVTable->m_version >= Scv612
        && pSimSSM_TR_EPB_SMVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_EPB_SMVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_EPB_SMVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_EPB_SMVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_EPB_SM*)pValue1), (int)(*(SSM_TR_EPB_SM*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_EPB_SM_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_EPB_SM_values, SSM_TR_EPB_SM_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_EPB_SM(void *pValue)
{
    *(SSM_TR_EPB_SM*)pValue = SSM_TR_no_trans_EPB_SM;
    return 1;
}

int release_SSM_TR_EPB_SM(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_EPB_SM(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_EPB_SM*)pToValue) = *((SSM_TR_EPB_SM*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_EPB_SM_Utils = {
    SSM_TR_EPB_SM_to_string,
    check_SSM_TR_EPB_SM_string,
    string_to_SSM_TR_EPB_SM,
    is_SSM_TR_EPB_SM_double_conversion_allowed,
    SSM_TR_EPB_SM_to_double,
    is_SSM_TR_EPB_SM_long_conversion_allowed,
    SSM_TR_EPB_SM_to_long,
    compare_SSM_TR_EPB_SM,
    get_SSM_TR_EPB_SM_signature,
    init_SSM_TR_EPB_SM,
    release_SSM_TR_EPB_SM,
    copy_SSM_TR_EPB_SM,
    sizeof(SSM_TR_EPB_SM)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "_11_SSM_TR_no_trans_SM1", _11_SSM_TR_no_trans_SM1},
    { "_11_SSM_TR_no_trans_SM1", _11_SSM_TR_no_trans_SM1},
    { "SSM_TR_Start_zuendungEinschalten_1_Start_SM1", SSM_TR_Start_zuendungEinschalten_1_Start_SM1},
    { "SSM_TR_Start_zuendungEinschalten_1_Start_SM1", SSM_TR_Start_zuendungEinschalten_1_Start_SM1},
    { "SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1", SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1},
    { "SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1", SSM_TR_zuendungEinschalten_bremspedalDurchtreten_1_zuendungEinschalten_SM1},
    { "SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1", SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1},
    { "SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1", SSM_TR_bremspedalDurchtreten_automastikModusEinstellen_1_bremspedalDurchtreten_SM1},
    { "SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1", SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1},
    { "SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1", SSM_TR_automastikModusEinstellen_automatikModusEingestellt_1_automastikModusEinstellen_SM1},
    { "SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1", SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1},
    { "SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1", SSM_TR_automatikModusEingestellt_cockpitanzeigeBleibtAus_1_automatikModusEingestellt_SM1},
    { "SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1", SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1},
    { "SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1", SSM_TR_cockpitanzeigeBleibtAus_betriebsbremseLoesen_1_cockpitanzeigeBleibtAus_SM1},
    { "SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1", SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1},
    { "SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1", SSM_TR_betriebsbremseLoesen_EPB_angezogen_1_betriebsbremseLoesen_SM1},
    { "SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1", SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1},
    { "SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1", SSM_TR_EPB_angezogen_anfahrenVorbereiten_1_EPB_angezogen_SM1},
    { "SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1", SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1},
    { "SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1", SSM_TR_anfahrenVorbereiten_EPB_arretiert_1_anfahrenVorbereiten_SM1},
    { "SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1", SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1},
    { "SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1", SSM_TR_EPB_arretiert_anfahren_1_EPB_arretiert_SM1},
    { "SSM_TR_autoHoldEinschalten_fahren_1_autoHoldEinschalten_SM1", SSM_TR_autoHoldEinschalten_fahren_1_autoHoldEinschalten_SM1},
    { "SSM_TR_autoHoldEinschalten_fahren_1_autoHoldEinschalten_SM1", SSM_TR_autoHoldEinschalten_fahren_1_autoHoldEinschalten_SM1},
    { "SSM_TR_fahren_anhaltenMitAutoHold_1_fahren_SM1", SSM_TR_fahren_anhaltenMitAutoHold_1_fahren_SM1},
    { "SSM_TR_fahren_anhaltenMitAutoHold_1_fahren_SM1", SSM_TR_fahren_anhaltenMitAutoHold_1_fahren_SM1},
    { "SSM_TR_anfahren_autoHoldEinschalten_1_anfahren_SM1", SSM_TR_anfahren_autoHoldEinschalten_1_anfahren_SM1},
    { "SSM_TR_anfahren_autoHoldEinschalten_1_anfahren_SM1", SSM_TR_anfahren_autoHoldEinschalten_1_anfahren_SM1},
    { "SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1", SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1},
    { "SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1", SSM_TR_anhaltenMitAutoHold_haltImAutoHold_1_anhaltenMitAutoHold_SM1},
    { "SSM_TR_haltImAutoHold_fzgSteht_1_haltImAutoHold_SM1", SSM_TR_haltImAutoHold_fzgSteht_1_haltImAutoHold_SM1},
    { "SSM_TR_haltImAutoHold_fzgSteht_1_haltImAutoHold_SM1", SSM_TR_haltImAutoHold_fzgSteht_1_haltImAutoHold_SM1},
};
const int SSM_TR_SM1_nb_values = 32;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM1(void *pValue)
{
    *(SSM_TR_SM1*)pValue = _11_SSM_TR_no_trans_SM1;
    return 1;
}

int release_SSM_TR_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM1*)pToValue) = *((SSM_TR_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    init_SSM_TR_SM1,
    release_SSM_TR_SM1,
    copy_SSM_TR_SM1,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** SSM_TR_SM2_anfahren_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM2_anfahren_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM2_anfahren_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM2_anfahren_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM2_anfahren_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM2_anfahren_SM1_values[] = {
    { "SSM_TR_no_trans_SM2_anfahren_SM1", SSM_TR_no_trans_SM2_anfahren_SM1},
    { "SSM_TR_no_trans_SM2_anfahren_SM1", SSM_TR_no_trans_SM2_anfahren_SM1},
    { "SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1", SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1},
    { "SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1", SSM_TR_bremspedalTreten_getriebe_auf_D_1_bremspedalTreten_SM2_anfahren_SM1},
    { "SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1", SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1},
    { "SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1", SSM_TR_getriebe_auf_D_gasGeben_1_getriebe_auf_D_SM2_anfahren_SM1},
};
const int SSM_TR_SM2_anfahren_SM1_nb_values = 6;

int SSM_TR_SM2_anfahren_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL
        && pSimSSM_TR_SM2_anfahren_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM2_anfahren_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM2_anfahren_SM1*)pValue, SSM_TR_SM2_anfahren_SM1_values, SSM_TR_SM2_anfahren_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM2_anfahren_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM2_anfahren_SM1 rTemp;
    return string_to_SSM_TR_SM2_anfahren_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM2_anfahren_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM2_anfahren_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM2_anfahren_SM1_values, SSM_TR_SM2_anfahren_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM2_anfahren_SM1*)pValue = (SSM_TR_SM2_anfahren_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM2_anfahren_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM2_anfahren_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM2_anfahren_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM2_anfahren_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM2_anfahren_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM2_anfahren_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM2_anfahren_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM2_anfahren_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM2_anfahren_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM2_anfahren_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM2_anfahren_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM2_anfahren_SM1VTable != NULL
        && pSimSSM_TR_SM2_anfahren_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM2_anfahren_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM2_anfahren_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM2_anfahren_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM2_anfahren_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM2_anfahren_SM1*)pValue1), (int)(*(SSM_TR_SM2_anfahren_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM2_anfahren_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM2_anfahren_SM1_values, SSM_TR_SM2_anfahren_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM2_anfahren_SM1(void *pValue)
{
    *(SSM_TR_SM2_anfahren_SM1*)pValue = SSM_TR_no_trans_SM2_anfahren_SM1;
    return 1;
}

int release_SSM_TR_SM2_anfahren_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM2_anfahren_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM2_anfahren_SM1*)pToValue) = *((SSM_TR_SM2_anfahren_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM2_anfahren_SM1_Utils = {
    SSM_TR_SM2_anfahren_SM1_to_string,
    check_SSM_TR_SM2_anfahren_SM1_string,
    string_to_SSM_TR_SM2_anfahren_SM1,
    is_SSM_TR_SM2_anfahren_SM1_double_conversion_allowed,
    SSM_TR_SM2_anfahren_SM1_to_double,
    is_SSM_TR_SM2_anfahren_SM1_long_conversion_allowed,
    SSM_TR_SM2_anfahren_SM1_to_long,
    compare_SSM_TR_SM2_anfahren_SM1,
    get_SSM_TR_SM2_anfahren_SM1_signature,
    init_SSM_TR_SM2_anfahren_SM1,
    release_SSM_TR_SM2_anfahren_SM1,
    copy_SSM_TR_SM2_anfahren_SM1,
    sizeof(SSM_TR_SM2_anfahren_SM1)
};

/****************************************************************
 ** SSM_TR_SM4_autoHoldEinschalten_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM4_autoHoldEinschalten_SM1_values[] = {
    { "SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1", SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1},
    { "SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1", SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1},
    { "SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1", SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1},
    { "SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1", SSM_TR_HoldDruecken_HoldLoesen_1_HoldDruecken_SM4_autoHoldEinschalten_SM1},
};
const int SSM_TR_SM4_autoHoldEinschalten_SM1_nb_values = 4;

int SSM_TR_SM4_autoHoldEinschalten_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL
        && pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue, SSM_TR_SM4_autoHoldEinschalten_SM1_values, SSM_TR_SM4_autoHoldEinschalten_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM4_autoHoldEinschalten_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM4_autoHoldEinschalten_SM1 rTemp;
    return string_to_SSM_TR_SM4_autoHoldEinschalten_SM1(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM4_autoHoldEinschalten_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM4_autoHoldEinschalten_SM1_values, SSM_TR_SM4_autoHoldEinschalten_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue = (SSM_TR_SM4_autoHoldEinschalten_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM4_autoHoldEinschalten_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM4_autoHoldEinschalten_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM4_autoHoldEinschalten_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM4_autoHoldEinschalten_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM4_autoHoldEinschalten_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable != NULL
        && pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM4_autoHoldEinschalten_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue1), (int)(*(SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM4_autoHoldEinschalten_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM4_autoHoldEinschalten_SM1_values, SSM_TR_SM4_autoHoldEinschalten_SM1_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM4_autoHoldEinschalten_SM1(void *pValue)
{
    *(SSM_TR_SM4_autoHoldEinschalten_SM1*)pValue = SSM_TR_no_trans_SM4_autoHoldEinschalten_SM1;
    return 1;
}

int release_SSM_TR_SM4_autoHoldEinschalten_SM1(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM4_autoHoldEinschalten_SM1(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM4_autoHoldEinschalten_SM1*)pToValue) = *((SSM_TR_SM4_autoHoldEinschalten_SM1*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM4_autoHoldEinschalten_SM1_Utils = {
    SSM_TR_SM4_autoHoldEinschalten_SM1_to_string,
    check_SSM_TR_SM4_autoHoldEinschalten_SM1_string,
    string_to_SSM_TR_SM4_autoHoldEinschalten_SM1,
    is_SSM_TR_SM4_autoHoldEinschalten_SM1_double_conversion_allowed,
    SSM_TR_SM4_autoHoldEinschalten_SM1_to_double,
    is_SSM_TR_SM4_autoHoldEinschalten_SM1_long_conversion_allowed,
    SSM_TR_SM4_autoHoldEinschalten_SM1_to_long,
    compare_SSM_TR_SM4_autoHoldEinschalten_SM1,
    get_SSM_TR_SM4_autoHoldEinschalten_SM1_signature,
    init_SSM_TR_SM4_autoHoldEinschalten_SM1,
    release_SSM_TR_SM4_autoHoldEinschalten_SM1,
    copy_SSM_TR_SM4_autoHoldEinschalten_SM1,
    sizeof(SSM_TR_SM4_autoHoldEinschalten_SM1)
};

/****************************************************************
 ** SSM_TR_SM_Betriebsmodus 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM_BetriebsmodusVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM_BetriebsmodusVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM_BetriebsmodusVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM_BetriebsmodusVTable;
#endif

static SimEnumValUtils SSM_TR_SM_Betriebsmodus_values[] = {
    { "SSM_TR_no_trans_SM_Betriebsmodus", SSM_TR_no_trans_SM_Betriebsmodus},
    { "SSM_TR_no_trans_SM_Betriebsmodus", SSM_TR_no_trans_SM_Betriebsmodus},
    { "SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus", SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus},
    { "SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus", SSM_TR_automatikModus_manuellerModus_1_automatikModus_SM_Betriebsmodus},
    { "SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus", SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus},
    { "SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus", SSM_TR_manuellerModus_automatikModus_1_manuellerModus_SM_Betriebsmodus},
};
const int SSM_TR_SM_Betriebsmodus_nb_values = 6;

int SSM_TR_SM_Betriebsmodus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL
        && pSimSSM_TR_SM_BetriebsmodusVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM_BetriebsmodusVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM_Betriebsmodus*)pValue, SSM_TR_SM_Betriebsmodus_values, SSM_TR_SM_Betriebsmodus_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM_Betriebsmodus_string(const char *str, char **endptr)
{
    static SSM_TR_SM_Betriebsmodus rTemp;
    return string_to_SSM_TR_SM_Betriebsmodus(str, (void*)&rTemp, endptr);
}

int string_to_SSM_TR_SM_Betriebsmodus(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM_BetriebsmodusVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM_Betriebsmodus_values, SSM_TR_SM_Betriebsmodus_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM_Betriebsmodus*)pValue = (SSM_TR_SM_Betriebsmodus)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM_Betriebsmodus_double_conversion_allowed()
{
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM_BetriebsmodusVTable);
    }
    return 1;
}

int SSM_TR_SM_Betriebsmodus_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM_BetriebsmodusVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM_Betriebsmodus*)pValue);
    return 1;
}

int is_SSM_TR_SM_Betriebsmodus_long_conversion_allowed()
{
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM_BetriebsmodusVTable);
    }
    return 1;
}

int SSM_TR_SM_Betriebsmodus_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM_BetriebsmodusVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM_Betriebsmodus*)pValue);
    return 1;
}

void compare_SSM_TR_SM_Betriebsmodus(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM_BetriebsmodusVTable != NULL
        && pSimSSM_TR_SM_BetriebsmodusVTable->m_version >= Scv612
        && pSimSSM_TR_SM_BetriebsmodusVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM_BetriebsmodusVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM_BetriebsmodusVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM_BetriebsmodusVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM_Betriebsmodus*)pValue1), (int)(*(SSM_TR_SM_Betriebsmodus*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM_Betriebsmodus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM_Betriebsmodus_values, SSM_TR_SM_Betriebsmodus_nb_values, pfnStrAppend, pStrObj);
}

int init_SSM_TR_SM_Betriebsmodus(void *pValue)
{
    *(SSM_TR_SM_Betriebsmodus*)pValue = SSM_TR_no_trans_SM_Betriebsmodus;
    return 1;
}

int release_SSM_TR_SM_Betriebsmodus(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_SSM_TR_SM_Betriebsmodus(void *pToValue, const void *pFromValue)
{
    *((SSM_TR_SM_Betriebsmodus*)pToValue) = *((SSM_TR_SM_Betriebsmodus*)pFromValue);
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM_Betriebsmodus_Utils = {
    SSM_TR_SM_Betriebsmodus_to_string,
    check_SSM_TR_SM_Betriebsmodus_string,
    string_to_SSM_TR_SM_Betriebsmodus,
    is_SSM_TR_SM_Betriebsmodus_double_conversion_allowed,
    SSM_TR_SM_Betriebsmodus_to_double,
    is_SSM_TR_SM_Betriebsmodus_long_conversion_allowed,
    SSM_TR_SM_Betriebsmodus_to_long,
    compare_SSM_TR_SM_Betriebsmodus,
    get_SSM_TR_SM_Betriebsmodus_signature,
    init_SSM_TR_SM_Betriebsmodus,
    release_SSM_TR_SM_Betriebsmodus,
    copy_SSM_TR_SM_Betriebsmodus,
    sizeof(SSM_TR_SM_Betriebsmodus)
};

/****************************************************************
 ** t_in_s_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const t_in_s_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "AH_testSuite_Pkg::divFahrer::c_5s_warten", &TU_c_5s_warten_AH_testSuite_Pkg_divFahrer },
    { "c_5s_warten", &TU_c_5s_warten_AH_testSuite_Pkg_divFahrer },
    { "AhTypes_Pkg::ah_Pkg::cNotbremsDelay", &TU_cNotbremsDelay_AhTypes_Pkg_ah_Pkg },
    { "cNotbremsDelay", &TU_cNotbremsDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cLedP_NachleuchtDelay", &TU_cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg },
    { "cLedP_NachleuchtDelay", &TU_cLedP_NachleuchtDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cEpbModusDelay", &TU_cEpbModusDelay_AhTypes_Pkg_ah_Pkg },
    { "cEpbModusDelay", &TU_cEpbModusDelay_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cMaxHillHoldAktivzeit", &TU_cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg },
    { "cMaxHillHoldAktivzeit", &TU_cMaxHillHoldAktivzeit_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::ah_Pkg::cWartenBisEPBnachAutoHold", &TU_cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg },
    { "cWartenBisEPBnachAutoHold", &TU_cWartenBisEPBnachAutoHold_AhTypes_Pkg_ah_Pkg },
    { "AhTypes_Pkg::utils_Pkg::cZeitincrementProTakt", &TU_cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg },
    { "cZeitincrementProTakt", &TU_cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg },
};

int t_in_s_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_t_in_s_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static t_in_s_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_t_in_s_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_t_in_s_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, t_in_s_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_t_in_s_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int t_in_s_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_t_in_s_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int t_in_s_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_t_in_s_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimt_in_s_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_t_in_s_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_t_in_s_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_t_in_s_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_t_in_s_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((t_in_s_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((t_in_s_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_t_in_s_T_AhTypes_Pkg_physical_Pkg_Utils = {
    t_in_s_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_t_in_s_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_t_in_s_T_AhTypes_Pkg_physical_Pkg,
    is_t_in_s_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    t_in_s_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_t_in_s_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    t_in_s_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_t_in_s_T_AhTypes_Pkg_physical_Pkg,
    get_t_in_s_T_AhTypes_Pkg_physical_Pkg_signature,
    init_t_in_s_T_AhTypes_Pkg_physical_Pkg,
    release_t_in_s_T_AhTypes_Pkg_physical_Pkg,
    copy_t_in_s_T_AhTypes_Pkg_physical_Pkg,
    sizeof(t_in_s_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** tasterHold_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable;
#endif

int tasterHold_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_tasterHold_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static tasterHold_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_tasterHold_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_tasterHold_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_on_off_element_T_AhTypes_Pkg_ah_Pkg(str, pValue, endptr);
    }
    return nRet;
}

int is_tasterHold_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_on_off_element_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed();
}

int tasterHold_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_double(pValue, nValue);
}

int is_tasterHold_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_on_off_element_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed();
}

int tasterHold_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_long(pValue, nValue);
}

void compare_tasterHold_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtasterHold_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_on_off_element_T_AhTypes_Pkg_ah_Pkg(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_tasterHold_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_on_off_element_T_AhTypes_Pkg_ah_Pkg_signature(pfnStrAppend, pStrObj);
}

int init_tasterHold_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    init_on_off_element_T_AhTypes_Pkg_ah_Pkg(pValue);
    return 1;
}

int release_tasterHold_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_tasterHold_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((tasterHold_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((tasterHold_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_tasterHold_T_AhTypes_Pkg_ah_Pkg_Utils = {
    tasterHold_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_tasterHold_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_tasterHold_T_AhTypes_Pkg_ah_Pkg,
    is_tasterHold_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    tasterHold_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_tasterHold_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    tasterHold_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_tasterHold_T_AhTypes_Pkg_ah_Pkg,
    get_tasterHold_T_AhTypes_Pkg_ah_Pkg_signature,
    init_tasterHold_T_AhTypes_Pkg_ah_Pkg,
    release_tasterHold_T_AhTypes_Pkg_ah_Pkg,
    copy_tasterHold_T_AhTypes_Pkg_ah_Pkg,
    sizeof(tasterHold_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** tasterP_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils tasterP_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::tasterP_aus", tasterP_aus_AhTypes_Pkg_ah_Pkg},
    { "tasterP_aus", tasterP_aus_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::tasterP_gezogen", tasterP_gezogen_AhTypes_Pkg_ah_Pkg},
    { "tasterP_gezogen", tasterP_gezogen_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::tasterP_gedrueckt", tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg},
    { "tasterP_gedrueckt", tasterP_gedrueckt_AhTypes_Pkg_ah_Pkg},
};
const int tasterP_T_AhTypes_Pkg_ah_Pkg_nb_values = 6;

int tasterP_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue, tasterP_T_AhTypes_Pkg_ah_Pkg_values, tasterP_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_tasterP_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static tasterP_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_tasterP_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_tasterP_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, tasterP_T_AhTypes_Pkg_ah_Pkg_values, tasterP_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue = (tasterP_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_tasterP_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int tasterP_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_tasterP_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int tasterP_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_tasterP_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtasterP_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_tasterP_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(tasterP_T_AhTypes_Pkg_ah_Pkg_values, tasterP_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_tasterP_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(tasterP_T_AhTypes_Pkg_ah_Pkg*)pValue = tasterP_aus_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_tasterP_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_tasterP_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((tasterP_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((tasterP_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_tasterP_T_AhTypes_Pkg_ah_Pkg_Utils = {
    tasterP_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_tasterP_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_tasterP_T_AhTypes_Pkg_ah_Pkg,
    is_tasterP_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    tasterP_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_tasterP_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    tasterP_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_tasterP_T_AhTypes_Pkg_ah_Pkg,
    get_tasterP_T_AhTypes_Pkg_ah_Pkg_signature,
    init_tasterP_T_AhTypes_Pkg_ah_Pkg,
    release_tasterP_T_AhTypes_Pkg_ah_Pkg,
    copy_tasterP_T_AhTypes_Pkg_ah_Pkg,
    sizeof(tasterP_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** tuerSchalter_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable;
#endif

static SimEnumValUtils tuerSchalter_T_AhTypes_Pkg_ah_Pkg_values[] = {
    { "AhTypes_Pkg::ah_Pkg::tuerSchalterOffen", tuerSchalterOffen_AhTypes_Pkg_ah_Pkg},
    { "tuerSchalterOffen", tuerSchalterOffen_AhTypes_Pkg_ah_Pkg},
    { "AhTypes_Pkg::ah_Pkg::tuerSchalterGeschlossen", tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg},
    { "tuerSchalterGeschlossen", tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg},
};
const int tuerSchalter_T_AhTypes_Pkg_ah_Pkg_nb_values = 4;

int tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue, tuerSchalter_T_AhTypes_Pkg_ah_Pkg_values, tuerSchalter_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj); 
}

int check_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static tuerSchalter_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, tuerSchalter_T_AhTypes_Pkg_ah_Pkg_values, tuerSchalter_T_AhTypes_Pkg_ah_Pkg_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue = (tuerSchalter_T_AhTypes_Pkg_ah_Pkg)nTemp;
    }
    return nRet;
}

int is_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (double)*((tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

int is_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return 1;
}

int tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    *nValue = (long)*((tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue);
    return 1;
}

void compare_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtuerSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue1), (int)(*(tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue2));
    }
    UNUSED(pTol);
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(tuerSchalter_T_AhTypes_Pkg_ah_Pkg_values, tuerSchalter_T_AhTypes_Pkg_ah_Pkg_nb_values, pfnStrAppend, pStrObj);
}

int init_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    *(tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pValue = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
    return 1;
}

int release_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_tuerSchalter_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((tuerSchalter_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_Utils = {
    tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_tuerSchalter_T_AhTypes_Pkg_ah_Pkg,
    is_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    tuerSchalter_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_tuerSchalter_T_AhTypes_Pkg_ah_Pkg,
    get_tuerSchalter_T_AhTypes_Pkg_ah_Pkg_signature,
    init_tuerSchalter_T_AhTypes_Pkg_ah_Pkg,
    release_tuerSchalter_T_AhTypes_Pkg_ah_Pkg,
    copy_tuerSchalter_T_AhTypes_Pkg_ah_Pkg,
    sizeof(tuerSchalter_T_AhTypes_Pkg_ah_Pkg)
};

/****************************************************************
 ** v_in_mps_T_AhTypes_Pkg_physical_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable_defined
    extern struct SimTypeVTable *pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable;
  #else 
    struct SimTypeVTable *pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable;
#endif

static SimConstValUtils const v_in_mps_T_AhTypes_Pkg_physical_Pkg_constants[] = {
    { "AhTypes_Pkg::ah_Pkg::cV_FzgSteht", &TU_cV_FzgSteht_AhTypes_Pkg_ah_Pkg },
    { "cV_FzgSteht", &TU_cV_FzgSteht_AhTypes_Pkg_ah_Pkg },
};

int v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return kcg_float64_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_v_in_mps_T_AhTypes_Pkg_physical_Pkg_string(const char *str, char **endptr)
{
    static v_in_mps_T_AhTypes_Pkg_physical_Pkg rTemp;
    return string_to_v_in_mps_T_AhTypes_Pkg_physical_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_v_in_mps_T_AhTypes_Pkg_physical_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable, pValue, endptr);
    }
    if (nRet == 0 && pConverter->m_pfnStringToConstant) {
        nRet = pConverter->m_pfnStringToConstant(str, pValue, v_in_mps_T_AhTypes_Pkg_physical_Pkg_constants, sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg_constants) / sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg_constants[0]), sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg), endptr);
        if (nRet != 0) {
            return 2;
        }
    }
    if (nRet == 0) {
        nRet = string_to_kcg_float64(str, pValue, endptr);
    }
    return nRet;
}

int is_v_in_mps_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed()
{
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_double_conversion_allowed();
}

int v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_double(pValue, nValue);
}

int is_v_in_mps_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed()
{
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable);
    }
    return is_kcg_float64_long_conversion_allowed();
}

int v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable, nValue);
    }
    return kcg_float64_to_long(pValue, nValue);
}

void compare_v_in_mps_T_AhTypes_Pkg_physical_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable != NULL
        && pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv612
        && pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare != NULL) {
        if (pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimv_in_mps_T_AhTypes_Pkg_physical_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_kcg_float64(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_v_in_mps_T_AhTypes_Pkg_physical_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_kcg_float64_signature(pfnStrAppend, pStrObj);
}

int init_v_in_mps_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    init_kcg_float64(pValue);
    return 1;
}

int release_v_in_mps_T_AhTypes_Pkg_physical_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_v_in_mps_T_AhTypes_Pkg_physical_Pkg(void *pToValue, const void *pFromValue)
{
    *((v_in_mps_T_AhTypes_Pkg_physical_Pkg*)pToValue) = *((v_in_mps_T_AhTypes_Pkg_physical_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_v_in_mps_T_AhTypes_Pkg_physical_Pkg_Utils = {
    v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_string,
    check_v_in_mps_T_AhTypes_Pkg_physical_Pkg_string,
    string_to_v_in_mps_T_AhTypes_Pkg_physical_Pkg,
    is_v_in_mps_T_AhTypes_Pkg_physical_Pkg_double_conversion_allowed,
    v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_double,
    is_v_in_mps_T_AhTypes_Pkg_physical_Pkg_long_conversion_allowed,
    v_in_mps_T_AhTypes_Pkg_physical_Pkg_to_long,
    compare_v_in_mps_T_AhTypes_Pkg_physical_Pkg,
    get_v_in_mps_T_AhTypes_Pkg_physical_Pkg_signature,
    init_v_in_mps_T_AhTypes_Pkg_physical_Pkg,
    release_v_in_mps_T_AhTypes_Pkg_physical_Pkg,
    copy_v_in_mps_T_AhTypes_Pkg_physical_Pkg,
    sizeof(v_in_mps_T_AhTypes_Pkg_physical_Pkg)
};

/****************************************************************
 ** zuendSchalter_T_AhTypes_Pkg_ah_Pkg 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable_defined
    extern struct SimTypeVTable *pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable;
  #else 
    struct SimTypeVTable *pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable;
#endif

int zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_string(pValue, pfnStrAppend, pStrObj);
}

int check_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_string(const char *str, char **endptr)
{
    static zuendSchalter_T_AhTypes_Pkg_ah_Pkg rTemp;
    return string_to_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(str, (void*)&rTemp, endptr);
}

int string_to_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        nRet = string_to_VTable(str, pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = string_to_on_off_element_T_AhTypes_Pkg_ah_Pkg(str, pValue, endptr);
    }
    return nRet;
}

int is_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed()
{
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_on_off_element_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed();
}

int zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_double(const void *pValue, double *nValue)
{
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_double(pValue, pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_double(pValue, nValue);
}

int is_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed()
{
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable);
    }
    return is_on_off_element_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed();
}

int zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_long(const void *pValue, long *nValue)
{
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL) {
        return VTable_to_long(pValue, pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable, nValue);
    }
    return on_off_element_T_AhTypes_Pkg_ah_Pkg_to_long(pValue, nValue);
}

void compare_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable != NULL
        && pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv612
        && pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare != NULL) {
        if (pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimzuendSchalter_T_AhTypes_Pkg_ah_PkgVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        compare_on_off_element_T_AhTypes_Pkg_ah_Pkg(pResult, pValue1, pValue2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return get_on_off_element_T_AhTypes_Pkg_ah_Pkg_signature(pfnStrAppend, pStrObj);
}

int init_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    init_on_off_element_T_AhTypes_Pkg_ah_Pkg(pValue);
    return 1;
}

int release_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(void *pValue)
{
    UNUSED(pValue);
    return 1;
}

int copy_zuendSchalter_T_AhTypes_Pkg_ah_Pkg(void *pToValue, const void *pFromValue)
{
    *((zuendSchalter_T_AhTypes_Pkg_ah_Pkg*)pToValue) = *((zuendSchalter_T_AhTypes_Pkg_ah_Pkg*)pFromValue);
    return 1;
}

SimTypeUtils _Type_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_Utils = {
    zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_string,
    check_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_string,
    string_to_zuendSchalter_T_AhTypes_Pkg_ah_Pkg,
    is_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_double_conversion_allowed,
    zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_double,
    is_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_long_conversion_allowed,
    zuendSchalter_T_AhTypes_Pkg_ah_Pkg_to_long,
    compare_zuendSchalter_T_AhTypes_Pkg_ah_Pkg,
    get_zuendSchalter_T_AhTypes_Pkg_ah_Pkg_signature,
    init_zuendSchalter_T_AhTypes_Pkg_ah_Pkg,
    release_zuendSchalter_T_AhTypes_Pkg_ah_Pkg,
    copy_zuendSchalter_T_AhTypes_Pkg_ah_Pkg,
    sizeof(zuendSchalter_T_AhTypes_Pkg_ah_Pkg)
};

