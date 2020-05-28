/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "bremspedalDurchgetreten_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::bremspedalDurchgetreten/ */
void bremspedalDurchgetreten_AH_Pkg_subf_Pkg(
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC)
{
  outC->_L2 = cBremspedalkraftDurchgetreten_AhTypes_Pkg_ah_Pkg;
  outC->_L1 = bremspedalKraft;
  outC->_L3 = outC->_L1 >= outC->_L2;
  outC->vollDurchgetreten = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void bremspedalDurchgetreten_init_AH_Pkg_subf_Pkg(
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->vollDurchgetreten = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void bremspedalDurchgetreten_reset_AH_Pkg_subf_Pkg(
  outC_bremspedalDurchgetreten_AH_Pkg_subf_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** bremspedalDurchgetreten_AH_Pkg_subf_Pkg.c
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

