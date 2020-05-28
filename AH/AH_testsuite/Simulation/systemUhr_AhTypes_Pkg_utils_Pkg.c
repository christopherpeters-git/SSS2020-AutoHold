/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "systemUhr_AhTypes_Pkg_utils_Pkg.h"

/* AhTypes_Pkg::utils_Pkg::systemUhr/ */
void systemUhr_AhTypes_Pkg_utils_Pkg(outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC)
{
  outC->_L10 = cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg;
  /* _L9= */
  if (outC->init) {
    outC->_L9 = cZeitincrementProTakt_AhTypes_Pkg_utils_Pkg;
  }
  else {
    outC->_L9 = outC->_L7;
  }
  outC->_L7 = outC->_L10 + outC->_L9;
  outC->uhrzeit = outC->_L9;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void systemUhr_init_AhTypes_Pkg_utils_Pkg(
  outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC)
{
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->uhrzeit = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void systemUhr_reset_AhTypes_Pkg_utils_Pkg(
  outC_systemUhr_AhTypes_Pkg_utils_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** systemUhr_AhTypes_Pkg_utils_Pkg.c
** Generation date: 2020-05-28T14:24:10
*************************************************************$ */

