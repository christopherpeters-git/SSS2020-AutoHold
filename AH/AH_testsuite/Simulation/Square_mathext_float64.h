/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */
#ifndef _Square_mathext_float64_H_
#define _Square_mathext_float64_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Square_Out/ */ Square_Out_float64;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1_float64;
  kcg_float64 /* _L2/ */ _L2_float64;
} outC_Square_mathext_float64;

/* ===========  node initialization and cycle functions  =========== */
/* mathext::Square/ */
extern void Square_mathext_float64(
  /* Square_In/ */
  kcg_float64 Square_In_float64,
  outC_Square_mathext_float64 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Square_reset_mathext_float64(outC_Square_mathext_float64 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Square_init_mathext_float64(outC_Square_mathext_float64 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Square_mathext_float64_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Square_mathext_float64.h
** Generation date: 2020-06-01T11:36:30
*************************************************************$ */

