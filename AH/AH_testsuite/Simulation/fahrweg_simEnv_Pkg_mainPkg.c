/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fahrweg_simEnv_Pkg_mainPkg.h"

/* simEnv_Pkg::mainPkg::fahrweg/ */
void fahrweg_simEnv_Pkg_mainPkg(
  /* s_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg s_fzg,
  outC_fahrweg_simEnv_Pkg_mainPkg *outC)
{
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung_partial;
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _1_fzgLaengsNeigung_partial;
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _2_fzgLaengsNeigung_partial;
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _3_fzgLaengsNeigung_partial;
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _4_fzgLaengsNeigung_partial;
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg _5_fzgLaengsNeigung_partial;

  outC->IfBlock1_clock = (s_fzg >= cS_00_simEnv_Pkg_mainPkg) & (s_fzg <
      cS_01_simEnv_Pkg_mainPkg);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = cSteigung_00_simEnv_Pkg_mainPkg;
    fzgLaengsNeigung_partial = outC->_L1_then_IfBlock1;
    outC->fzgLaengsNeigung = fzgLaengsNeigung_partial;
  }
  else {
    outC->else_clock_IfBlock1 = (s_fzg >= cS_01_simEnv_Pkg_mainPkg) & (s_fzg <
        cS_02_simEnv_Pkg_mainPkg);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = cSteigung_5grad_simEnv_Pkg_mainPkg;
      _5_fzgLaengsNeigung_partial = outC->_L1_then_else_IfBlock1;
      _1_fzgLaengsNeigung_partial = _5_fzgLaengsNeigung_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = (s_fzg >= cS_02_simEnv_Pkg_mainPkg) &
        (s_fzg < cS_03_simEnv_Pkg_mainPkg);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = - cSteigung_5grad_simEnv_Pkg_mainPkg;
        _2_fzgLaengsNeigung_partial = outC->_L1_then_else_else_IfBlock1;
        _4_fzgLaengsNeigung_partial = _2_fzgLaengsNeigung_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock1 = cSteigung_00_simEnv_Pkg_mainPkg;
        _3_fzgLaengsNeigung_partial = outC->_L1_else_else_else_IfBlock1;
        _4_fzgLaengsNeigung_partial = _3_fzgLaengsNeigung_partial;
      }
      _1_fzgLaengsNeigung_partial = _4_fzgLaengsNeigung_partial;
    }
    outC->fzgLaengsNeigung = _1_fzgLaengsNeigung_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void fahrweg_init_simEnv_Pkg_mainPkg(outC_fahrweg_simEnv_Pkg_mainPkg *outC)
{
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_then_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->fzgLaengsNeigung = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fahrweg_reset_simEnv_Pkg_mainPkg(outC_fahrweg_simEnv_Pkg_mainPkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrweg_simEnv_Pkg_mainPkg.c
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

