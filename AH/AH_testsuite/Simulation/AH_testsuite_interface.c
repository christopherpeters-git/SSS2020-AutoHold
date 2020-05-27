#include "AH_testsuite_interface.h"
#include "AH_testsuite_type.h"
#include "AH_testsuite_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "185d4ae8b931dd7ee3481caac3a2a487";
const char* _SCSIM_SmuTypesCheckSum = "6757860ac1d8ce9bd3fc91d925ceefb8";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    testAutoModus_autoHold_init_AH_testSuite_Pkg_tests_Pkg(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    testAutoModus_autoHold_reset_AH_testSuite_Pkg_tests_Pkg(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable != NULL && 
        pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_PkgCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg(&outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg));
    pCurrent += sizeof(outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg));
    pCurrent += sizeof(outC_testAutoModus_autoHold_AH_testSuite_Pkg_tests_Pkg);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

