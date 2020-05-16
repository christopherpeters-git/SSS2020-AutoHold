/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.h"

/* AH_Pkg::subf_Pkg::deaktiviereEpbAutomatisch/ */
void deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg(
  /* epbBetriebsmodus/ */
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg epbBetriebsmodus,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
  outC->_L31 = cMasGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
  outC->B_InRangeInIn_1_float64 = outC->_L31;
  outC->_L32 = cMinGaspedalStellungFuerEpbLoesen_AhTypes_Pkg_ah_Pkg;
  outC->A_InRangeInIn_1_float64 = outC->_L32;
  outC->A1_InRangeInIn_1_float64 = outC->A_InRangeInIn_1_float64 <=
    outC->B_InRangeInIn_1_float64;
  outC->_L13_InRangeInIn_1_float64 = outC->B_InRangeInIn_1_float64;
  /* _L26= */
  if (outC->init) {
    outC->_L26 = kcg_lit_float64(0.0);
  }
  else {
    outC->_L26 = outC->_L19;
  }
  outC->_L19 = gaspedalStellung;
  outC->IRII_Input_InRangeInIn_1_float64 = outC->_L19;
  outC->_L8_InRangeInIn_1_float64 = outC->IRII_Input_InRangeInIn_1_float64;
  outC->_L12_InRangeInIn_1_float64 = outC->_L13_InRangeInIn_1_float64 >=
    outC->_L8_InRangeInIn_1_float64;
  outC->_L10_InRangeInIn_1_float64 = outC->A_InRangeInIn_1_float64;
  outC->_L4_InRangeInIn_1_float64 = outC->_L8_InRangeInIn_1_float64 >=
    outC->_L10_InRangeInIn_1_float64;
  outC->_L2_InRangeInIn_1_float64 = outC->_L12_InRangeInIn_1_float64 &
    outC->_L4_InRangeInIn_1_float64;
  outC->IRII_Output_InRangeInIn_1_float64 = outC->_L2_InRangeInIn_1_float64;
  outC->_L33 = outC->IRII_Output_InRangeInIn_1_float64;
  outC->_L30 = cLangsamesGaspedalTreten_AhTypes_Pkg_ah_Pkg;
  outC->_L27 = outC->_L19 - outC->_L26;
  outC->_L28 = outC->_L27 < outC->_L30;
  outC->_L29 = outC->_L28 & outC->_L33;
  outC->_L22 = sGurtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = sicherheitsgurtSchalter;
  outC->_L25 = outC->_L18 == outC->_L22;
  outC->_L21 = tuerSchalterGeschlossen_AhTypes_Pkg_ah_Pkg;
  outC->_L17 = fahrertuerSchalter;
  outC->_L24 = outC->_L17 == outC->_L21;
  outC->_L20 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L16 = zuendschalter;
  outC->_L23 = outC->_L16 == outC->_L20;
  outC->_L8 = kcg_true;
  outC->_L10 = kcg_false;
  outC->_L13 = getriebeWahlhebel;
  /* _L15= */
  switch (outC->_L13) {
    case getriebeWahl_R_AhTypes_Pkg_ah_Pkg :
      outC->_L15 = outC->_L8;
      break;
    case getriebeWahl_D_AhTypes_Pkg_ah_Pkg :
      outC->_L15 = outC->_L8;
      break;
    case getriebeWahl_B_AhTypes_Pkg_ah_Pkg :
      outC->_L15 = outC->_L8;
      break;
    default :
      outC->_L15 = outC->_L10;
      break;
  }
  outC->_L9 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = epbBetriebsmodus;
  outC->_L14 = outC->_L11 == outC->_L9;
  outC->_L12 = outC->_L14 & outC->_L15 & outC->_L23 & outC->_L24 & outC->_L25 &
    outC->_L29;
  outC->deaktiviereEpb = outC->_L12;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void deaktiviereEpbAutomatisch_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L21 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L20 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = sGurtNichtAngelegt_AhTypes_Pkg_ah_Pkg;
  outC->_L17 = tuerSchalterOffen_AhTypes_Pkg_ah_Pkg;
  outC->_L16 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L8 = kcg_true;
  outC->_L9 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = kcg_true;
  outC->_L11 = epbModus_automatik_AhTypes_Pkg_ah_Pkg;
  outC->_L12 = kcg_true;
  outC->_L13 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->A1_InRangeInIn_1_float64 = kcg_true;
  outC->_L10_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->_L12_InRangeInIn_1_float64 = kcg_true;
  outC->_L13_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_InRangeInIn_1_float64 = kcg_true;
  outC->_L4_InRangeInIn_1_float64 = kcg_true;
  outC->_L8_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->IRII_Input_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->A_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->B_InRangeInIn_1_float64 = kcg_lit_float64(0.0);
  outC->IRII_Output_InRangeInIn_1_float64 = kcg_true;
  outC->_L19 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->deaktiviereEpb = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void deaktiviereEpbAutomatisch_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereEpbAutomatisch_AH_Pkg_subf_Pkg.c
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

