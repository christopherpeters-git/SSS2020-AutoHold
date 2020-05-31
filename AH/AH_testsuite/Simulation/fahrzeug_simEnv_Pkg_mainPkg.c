/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fahrzeug_simEnv_Pkg_mainPkg.h"

/* simEnv_Pkg::mainPkg::fahrzeug/ */
void fahrzeug_simEnv_Pkg_mainPkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* betriebsBremse/ */
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg betriebsBremse,
  /* betriebsbremsSperrventil/ */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg betriebsbremsSperrventil,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_fahrzeug_simEnv_Pkg_mainPkg *outC)
{
  outC->_L10 = betriebsBremse;
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L23 = cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg;
  outC->_L22 = cFzgMaxEPBLeistung_AhTypes_Pkg_fzg_Pkg;
  outC->_L25 = outC->_L22 / outC->_L23;
  outC->_L9 = EPB_Bremse;
  outC->_L19 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L21 = outC->_L19 == outC->_L9;
  /* _L26= */
  if (outC->_L21) {
    outC->_L26 = outC->_L25;
  }
  else {
    outC->_L26 = outC->_L27;
  }
  outC->_L28 = outC->_L26 + outC->_L10;
  outC->Init_MemoryBasic_1_float64 = outC->_L28;
  outC->_L7_MemoryBasic_1_float64 = outC->Init_MemoryBasic_1_float64;
  /* @1/_L6= */
  if (outC->init) {
    outC->_L6_MemoryBasic_1_float64 = outC->_L7_MemoryBasic_1_float64;
  }
  else {
    outC->_L6_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  }
  outC->_L20 = bbs_gesperrt_AhTypes_Pkg_ah_Pkg;
  outC->_L11 = betriebsbremsSperrventil;
  outC->_L29 = outC->_L11 != outC->_L20;
  outC->Write_MemoryBasic_1_float64 = outC->_L29;
  outC->_L5_MemoryBasic_1_float64 = outC->Write_MemoryBasic_1_float64;
  outC->BM_Input_MemoryBasic_1_float64 = outC->_L28;
  outC->_L2_MemoryBasic_1_float64 = outC->BM_Input_MemoryBasic_1_float64;
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_float64) {
    outC->_L4_MemoryBasic_1_float64 = outC->_L2_MemoryBasic_1_float64;
  }
  else {
    outC->_L4_MemoryBasic_1_float64 = outC->_L6_MemoryBasic_1_float64;
  }
  outC->Memorized_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  outC->_L32 = getriebeWahlhebel;
  outC->_L31 = zuendschalter;
  outC->_L30 = outC->Memorized_MemoryBasic_1_float64;
  outC->_L18 = cFzgMaxMotorleistung_AhTypes_Pkg_fzg_Pkg;
  outC->_L17 = cFzgMaxBetriebsbremsleistung_AhTypes_Pkg_fzg_Pkg;
  outC->_L16 = cFzgMasse_AhTypes_Pkg_fzg_Pkg;
  outC->_L6 = gaspedalStellung;
  outC->_L7 = fzgLaengsNeigung;
  outC->_L12 = aktZeit;
  /* _L14=(simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik#1)/ */
  fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg(
    outC->_L31,
    outC->_L32,
    outC->_L6,
    outC->_L30,
    outC->_L7,
    outC->_L12,
    outC->_L18,
    outC->_L17,
    outC->_L16,
    &outC->Context_fahrDynamik_1);
  outC->_L14 = outC->Context_fahrDynamik_1.v_fzg;
  outC->_L15 = outC->Context_fahrDynamik_1.s_fzg;
  outC->s_fzg = outC->_L15;
  outC->v_fzg = outC->_L14;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void fahrzeug_init_simEnv_Pkg_mainPkg(outC_fahrzeug_simEnv_Pkg_mainPkg *outC)
{
  outC->_L32 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L31 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_true;
  outC->_L20 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L19 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = bbs_frei_AhTypes_Pkg_ah_Pkg;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = pBremse_angezogen_AhTypes_Pkg_ah_Pkg;
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L2_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_MemoryBasic_1_float64 = kcg_true;
  outC->_L6_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L7_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->BM_Input_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Init_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Write_MemoryBasic_1_float64 = kcg_true;
  outC->Memorized_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->s_fzg = kcg_lit_float64(0.0);
  outC->v_fzg = kcg_lit_float64(0.0);
  /* _L14=(simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik#1)/ */
  fahrDynamik_init_simEnv_Pkg_mainPkg_subf_Pkg(&outC->Context_fahrDynamik_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fahrzeug_reset_simEnv_Pkg_mainPkg(outC_fahrzeug_simEnv_Pkg_mainPkg *outC)
{
  outC->init = kcg_true;
  /* _L14=(simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik#1)/ */
  fahrDynamik_reset_simEnv_Pkg_mainPkg_subf_Pkg(&outC->Context_fahrDynamik_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: simEnv_Pkg::mainPkg::fahrzeug/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrzeug_simEnv_Pkg_mainPkg.c
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

