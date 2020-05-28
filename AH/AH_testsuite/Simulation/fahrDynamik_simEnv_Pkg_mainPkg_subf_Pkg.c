/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg.h"

/* simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ */
void fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* gaspedalstellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalstellung,
  /* bremsdruck/ */
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg bremsdruck,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  /* maxAntriebsleistung/ */
  p_in_W_T_AhTypes_Pkg_physical_Pkg maxAntriebsleistung,
  /* maxBremsleistung/ */
  p_in_W_T_AhTypes_Pkg_physical_Pkg maxBremsleistung,
  /* fzgMasse/ */
  m_in_kg_T_AhTypes_Pkg_physical_Pkg fzgMasse,
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC)
{
  /* v2/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v2_partial;
  /* v2/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg _1_v2_partial;
  /* v2_sq/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v2_sq_partial;
  /* v2_sq/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg _2_v2_sq_partial;
  t_in_s_T_AhTypes_Pkg_physical_Pkg noname;
  t_in_s_T_AhTypes_Pkg_physical_Pkg _3_noname;
  /* v2/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg last_v2;

  outC->_L26 = kcg_lit_float64(1.0);
  outC->HighLimit_LimiterUnSymmetrical_1_float64 = outC->_L26;
  outC->_L25 = kcg_lit_float64(0.0);
  outC->LowLimit_LimiterUnSymmetrical_1_float64 = outC->_L25;
  outC->A1_LimiterUnSymmetrical_1_float64 =
    outC->LowLimit_LimiterUnSymmetrical_1_float64 <=
    outC->HighLimit_LimiterUnSymmetrical_1_float64;
  outC->_L22 = gaspedalstellung;
  outC->LUS_Input_LimiterUnSymmetrical_1_float64 = outC->_L22;
  outC->_L3_LimiterUnSymmetrical_1_float64 =
    outC->LUS_Input_LimiterUnSymmetrical_1_float64;
  outC->_L13_LimiterUnSymmetrical_1_float64 =
    outC->LowLimit_LimiterUnSymmetrical_1_float64;
  outC->_L2_LimiterUnSymmetrical_1_float64 =
    outC->_L3_LimiterUnSymmetrical_1_float64 <=
    outC->_L13_LimiterUnSymmetrical_1_float64;
  /* @1/_L11= */
  if (outC->_L2_LimiterUnSymmetrical_1_float64) {
    outC->_L11_LimiterUnSymmetrical_1_float64 =
      outC->_L13_LimiterUnSymmetrical_1_float64;
  }
  else {
    outC->_L11_LimiterUnSymmetrical_1_float64 =
      outC->_L3_LimiterUnSymmetrical_1_float64;
  }
  outC->_L15_LimiterUnSymmetrical_1_float64 =
    outC->HighLimit_LimiterUnSymmetrical_1_float64;
  outC->_L1_LimiterUnSymmetrical_1_float64 =
    outC->_L3_LimiterUnSymmetrical_1_float64 >=
    outC->_L15_LimiterUnSymmetrical_1_float64;
  /* @1/_L9= */
  if (outC->_L1_LimiterUnSymmetrical_1_float64) {
    outC->_L9_LimiterUnSymmetrical_1_float64 =
      outC->_L15_LimiterUnSymmetrical_1_float64;
  }
  else {
    outC->_L9_LimiterUnSymmetrical_1_float64 =
      outC->_L11_LimiterUnSymmetrical_1_float64;
  }
  outC->LUS_Output_LimiterUnSymmetrical_1_float64 =
    outC->_L9_LimiterUnSymmetrical_1_float64;
  outC->_L32 = kcg_lit_float64(1.0);
  outC->_2_HighLimit_LimiterUnSymmetrical_2_float64 = outC->_L32;
  outC->_L31 = kcg_lit_float64(0.0);
  outC->LowLimit_LimiterUnSymmetrical_2_float64 = outC->_L31;
  outC->A1_LimiterUnSymmetrical_2_float64 =
    outC->LowLimit_LimiterUnSymmetrical_2_float64 <=
    outC->_2_HighLimit_LimiterUnSymmetrical_2_float64;
  outC->_L30 = bremsdruck;
  outC->_3_LUS_Input_LimiterUnSymmetrical_2_float64 = outC->_L30;
  outC->_L3_LimiterUnSymmetrical_2_float64 =
    outC->_3_LUS_Input_LimiterUnSymmetrical_2_float64;
  outC->_L13_LimiterUnSymmetrical_2_float64 =
    outC->LowLimit_LimiterUnSymmetrical_2_float64;
  outC->_L2_LimiterUnSymmetrical_2_float64 =
    outC->_L3_LimiterUnSymmetrical_2_float64 <=
    outC->_L13_LimiterUnSymmetrical_2_float64;
  /* @2/_L11= */
  if (outC->_L2_LimiterUnSymmetrical_2_float64) {
    outC->_L11_LimiterUnSymmetrical_2_float64 =
      outC->_L13_LimiterUnSymmetrical_2_float64;
  }
  else {
    outC->_L11_LimiterUnSymmetrical_2_float64 =
      outC->_L3_LimiterUnSymmetrical_2_float64;
  }
  outC->_L15_LimiterUnSymmetrical_2_float64 =
    outC->_2_HighLimit_LimiterUnSymmetrical_2_float64;
  outC->_L1_LimiterUnSymmetrical_2_float64 =
    outC->_L3_LimiterUnSymmetrical_2_float64 >=
    outC->_L15_LimiterUnSymmetrical_2_float64;
  /* @2/_L9= */
  if (outC->_L1_LimiterUnSymmetrical_2_float64) {
    outC->_L9_LimiterUnSymmetrical_2_float64 =
      outC->_L15_LimiterUnSymmetrical_2_float64;
  }
  else {
    outC->_L9_LimiterUnSymmetrical_2_float64 =
      outC->_L11_LimiterUnSymmetrical_2_float64;
  }
  outC->_1_LUS_Output_LimiterUnSymmetrical_2_float64 =
    outC->_L9_LimiterUnSymmetrical_2_float64;
  outC->_L6_Mean_1_float64 = kcg_lit_float64(2.);
  last_v2 = outC->v2;
  /* _L44= */
  if (outC->init) {
    outC->_L44 = kcg_lit_float64(0.0);
  }
  else {
    outC->_L44 = outC->_L43;
  }
  outC->_L43 = aktZeit;
  outC->_L46 = outC->_L43 - outC->_L44;
  outC->dt = outC->_L46;
  outC->IfBlock1_clock = (outC->dt > cEpsilon_AhTypes_Pkg_physical_Pkg) &
    (fzgMasse > cEpsilon_AhTypes_Pkg_physical_Pkg);
  outC->_L47 = last_v2;
  outC->v1 = outC->_L47;
  if (outC->IfBlock1_clock) {
    outC->_L26_then_IfBlock1 = outC->dt;
    outC->_L24_then_IfBlock1 = fzgMasse;
  }
  else {
    outC->_L2_else_IfBlock1 = outC->v1;
    /* IfBlock1:else:_L1=(mathext::Square#1)/ */
    Square_mathext_float64(outC->_L2_else_IfBlock1, &outC->Context_Square_1);
    outC->_L1_else_IfBlock1 = outC->Context_Square_1.Square_Out_float64;
    _2_v2_sq_partial = outC->_L1_else_IfBlock1;
  }
  outC->_L29 = maxBremsleistung;
  outC->_L27 = outC->_1_LUS_Output_LimiterUnSymmetrical_2_float64;
  outC->_L37 = outC->_L27 * outC->_L29;
  outC->_L75 = kcg_lit_float64(0.1);
  outC->_L73 = fzgMasse;
  outC->_L70 = fzgLaengsNeigung;
  outC->_L71 = /* _L71=(mathext::SinR#1)/ */
    SinR64_mathext_mathextimpl(outC->_L70);
  outC->_L72 = outC->_L71 * outC->_L73 * outC->_L75;
  outC->_L86 = kcg_lit_float64(0.0);
  outC->_L21 = maxAntriebsleistung;
  outC->_L24 = outC->LUS_Output_LimiterUnSymmetrical_1_float64;
  outC->_L28 = outC->_L24 * outC->_L21;
  outC->_L81 = kcg_lit_float64(0.0);
  outC->_L76 = getriebeWahlhebel;
  /* _L77= */
  switch (outC->_L76) {
    case getriebeWahl_R_AhTypes_Pkg_ah_Pkg :
      outC->_L77 = outC->_L28;
      break;
    case getriebeWahl_D_AhTypes_Pkg_ah_Pkg :
      outC->_L77 = outC->_L28;
      break;
    case getriebeWahl_B_AhTypes_Pkg_ah_Pkg :
      outC->_L77 = outC->_L28;
      break;
    default :
      outC->_L77 = outC->_L81;
      break;
  }
  outC->_L83 = sw2_on_AhTypes_Pkg_ah_Pkg;
  outC->_L82 = zuendschalter;
  outC->_L84 = outC->_L82 == outC->_L83;
  /* _L85= */
  if (outC->_L84) {
    outC->_L85 = outC->_L77;
  }
  else {
    outC->_L85 = outC->_L86;
  }
  outC->_L74 = outC->_L85 - outC->_L72;
  outC->_L40 = outC->_L74 - outC->_L37;
  outC->P_res = outC->_L40;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L22_then_IfBlock1 = outC->P_res;
    outC->_L23_then_IfBlock1 = kcg_lit_float64(2.0);
    outC->_L29_then_IfBlock1 = outC->_L23_then_IfBlock1 * outC->_L22_then_IfBlock1;
    outC->_L30_then_IfBlock1 = outC->_L29_then_IfBlock1 / outC->_L24_then_IfBlock1;
    outC->_L25_then_IfBlock1 = outC->_L30_then_IfBlock1 * outC->_L26_then_IfBlock1;
    outC->_L28_then_IfBlock1 = outC->v1;
    /* IfBlock1:then:_L21=(mathext::Square#2)/ */
    Square_mathext_float64(outC->_L28_then_IfBlock1, &outC->Context_Square_2);
    outC->_L21_then_IfBlock1 = outC->Context_Square_2.Square_Out_float64;
    outC->_L27_then_IfBlock1 = outC->_L21_then_IfBlock1 + outC->_L25_then_IfBlock1;
    v2_sq_partial = outC->_L27_then_IfBlock1;
    outC->v2_sq = v2_sq_partial;
  }
  else {
    outC->v2_sq = _2_v2_sq_partial;
  }
  outC->IfBlock2_clock = outC->v2_sq > cEpsilon_AhTypes_Pkg_physical_Pkg;
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    outC->_L2_then_IfBlock2 = outC->v2_sq;
    outC->_L1_then_IfBlock2 = /* IfBlock2:then:_L1=(mathext::SqrtR#1)/ */
      SqrtR64_mathext_mathextimpl(outC->_L2_then_IfBlock2);
    v2_partial = outC->_L1_then_IfBlock2;
    outC->v2 = v2_partial;
  }
  else {
    outC->_L1_else_IfBlock2 = kcg_lit_float64(0.0);
    _1_v2_partial = outC->_L1_else_IfBlock2;
    outC->v2 = _1_v2_partial;
  }
  outC->_L67 = outC->v2;
  outC->I2_Mean_1_float64 = outC->_L67;
  outC->_L2_Mean_1_float64 = outC->I2_Mean_1_float64;
  outC->_L66 = outC->v1;
  outC->I1_Mean_1_float64 = outC->_L66;
  outC->_L1_Mean_1_float64 = outC->I1_Mean_1_float64;
  outC->_L4_Mean_1_float64 = outC->_L1_Mean_1_float64 + outC->_L2_Mean_1_float64;
  outC->_L3_Mean_1_float64 = outC->_L4_Mean_1_float64 / outC->_L6_Mean_1_float64;
  outC->Me_output_Mean_1_float64 = outC->_L3_Mean_1_float64;
  outC->_L69 = outC->v2;
  outC->v_fzg = outC->_L69;
  outC->_L64 = outC->dt;
  outC->_L65 = outC->Me_output_Mean_1_float64;
  outC->_L68 = outC->_L65 * outC->_L64;
  outC->t1 = outC->_L44;
  outC->_L62 = outC->t1;
  _3_noname = outC->_L62;
  outC->t2 = outC->_L43;
  outC->_L63 = outC->t2;
  noname = outC->_L63;
  /* _L19= */
  if (outC->init) {
    outC->_L19 = kcg_lit_float64(0.0);
  }
  else {
    outC->_L19 = outC->_L20;
  }
  outC->_L20 = outC->_L68 + outC->_L19;
  outC->s_fzg = outC->_L20;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void fahrDynamik_init_simEnv_Pkg_mainPkg_subf_Pkg(
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC)
{
  outC->_L86 = kcg_lit_float64(0.0);
  outC->_L85 = kcg_lit_float64(0.0);
  outC->_L84 = kcg_true;
  outC->_L83 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L82 = sw2_off_AhTypes_Pkg_ah_Pkg;
  outC->_L81 = kcg_lit_float64(0.0);
  outC->_L77 = kcg_lit_float64(0.0);
  outC->_L76 = getriebeWahl_P_AhTypes_Pkg_ah_Pkg;
  outC->_L75 = kcg_lit_float64(0.0);
  outC->_L74 = kcg_lit_float64(0.0);
  outC->_L73 = kcg_lit_float64(0.0);
  outC->_L72 = kcg_lit_float64(0.0);
  outC->_L71 = kcg_lit_float64(0.0);
  outC->_L70 = kcg_lit_float64(0.0);
  outC->_L69 = kcg_lit_float64(0.0);
  outC->_L68 = kcg_lit_float64(0.0);
  outC->_L67 = kcg_lit_float64(0.0);
  outC->_L66 = kcg_lit_float64(0.0);
  outC->_L65 = kcg_lit_float64(0.0);
  outC->_L64 = kcg_lit_float64(0.0);
  outC->_L63 = kcg_lit_float64(0.0);
  outC->_L62 = kcg_lit_float64(0.0);
  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L46 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->v2_sq = kcg_lit_float64(0.0);
  outC->v1 = kcg_lit_float64(0.0);
  outC->dt = kcg_lit_float64(0.0);
  outC->t2 = kcg_lit_float64(0.0);
  outC->t1 = kcg_lit_float64(0.0);
  outC->P_res = kcg_lit_float64(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->_L2_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L30_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L29_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L28_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L27_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L26_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L25_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L24_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L23_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L22_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L21_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_else_IfBlock2 = kcg_lit_float64(0.0);
  outC->_L1_then_IfBlock2 = kcg_lit_float64(0.0);
  outC->_L2_then_IfBlock2 = kcg_lit_float64(0.0);
  outC->_L1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L4_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->_L6_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->Me_output_Mean_1_float64 = kcg_lit_float64(0.0);
  outC->A1_LimiterUnSymmetrical_2_float64 = kcg_true;
  outC->_L1_LimiterUnSymmetrical_2_float64 = kcg_true;
  outC->_L11_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_L13_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_L15_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_L2_LimiterUnSymmetrical_2_float64 = kcg_true;
  outC->_L3_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_L9_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_3_LUS_Input_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->LowLimit_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_2_HighLimit_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->_1_LUS_Output_LimiterUnSymmetrical_2_float64 = kcg_lit_float64(0.0);
  outC->A1_LimiterUnSymmetrical_1_float64 = kcg_true;
  outC->_L1_LimiterUnSymmetrical_1_float64 = kcg_true;
  outC->_L11_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->_L13_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->_L15_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_LimiterUnSymmetrical_1_float64 = kcg_true;
  outC->_L3_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->_L9_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->LUS_Input_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->LowLimit_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->HighLimit_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->LUS_Output_LimiterUnSymmetrical_1_float64 = kcg_lit_float64(0.0);
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->s_fzg = kcg_lit_float64(0.0);
  outC->v_fzg = kcg_lit_float64(0.0);
  /* IfBlock1:then:_L21=(mathext::Square#2)/ */
  Square_init_mathext_float64(&outC->Context_Square_2);
  /* IfBlock1:else:_L1=(mathext::Square#1)/ */
  Square_init_mathext_float64(&outC->Context_Square_1);
  outC->v2 = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void fahrDynamik_reset_simEnv_Pkg_mainPkg_subf_Pkg(
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC)
{
  outC->init = kcg_true;
  /* IfBlock1:then:_L21=(mathext::Square#2)/ */
  Square_reset_mathext_float64(&outC->Context_Square_2);
  /* IfBlock1:else:_L1=(mathext::Square#1)/ */
  Square_reset_mathext_float64(&outC->Context_Square_1);
  outC->v2 = kcg_lit_float64(0.0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/
  @1: (pwlinear::LimiterUnSymmetrical#1)
  @2: (pwlinear::LimiterUnSymmetrical#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg.c
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

