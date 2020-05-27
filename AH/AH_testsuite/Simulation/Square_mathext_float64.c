/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Square_mathext_float64.h"

/* mathext::Square/ */
void Square_mathext_float64(
  /* Square_In/ */
  kcg_float64 Square_In_float64,
  outC_Square_mathext_float64 *outC)
{
  outC->_L1_float64 = Square_In_float64;
  outC->_L2_float64 = outC->_L1_float64 * outC->_L1_float64;
  outC->Square_Out_float64 = outC->_L2_float64;
}

#ifndef KCG_USER_DEFINED_INIT
void Square_init_mathext_float64(outC_Square_mathext_float64 *outC)
{
  outC->_L2_float64 = kcg_lit_float64(0.0);
  outC->_L1_float64 = kcg_lit_float64(0.0);
  outC->Square_Out_float64 = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Square_reset_mathext_float64(outC_Square_mathext_float64 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Square_mathext_float64.c
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

