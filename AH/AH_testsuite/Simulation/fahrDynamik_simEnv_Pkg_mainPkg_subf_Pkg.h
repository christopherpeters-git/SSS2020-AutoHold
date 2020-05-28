/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */
#ifndef _fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg_H_
#define _fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Square_mathext_float64.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v_fzg/ */ v_fzg;
  s_in_m_T_AhTypes_Pkg_physical_Pkg /* s_fzg/ */ s_fzg;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v2/ */ v2;
  kcg_float64 /* _L20/ */ _L20;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L43/ */ _L43;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Square_mathext_float64 /* IfBlock1:then:_L21=(mathext::Square#2)/ */ Context_Square_2;
  outC_Square_mathext_float64 /* IfBlock1:else:_L1=(mathext::Square#1)/ */ Context_Square_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock2: */ IfBlock2_clock;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* @1/A1= */ A1_LimiterUnSymmetrical_1_float64;
  kcg_bool /* @2/A1= */ A1_LimiterUnSymmetrical_2_float64;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/LUS_Output/ */ LUS_Output_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/HighLimit/ */ HighLimit_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/LowLimit/ */ LowLimit_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/LUS_Input/ */ LUS_Input_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/_L9/ */ _L9_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_LimiterUnSymmetrical_1_float64;
  kcg_bool /* @1/_L2/ */ _L2_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/_L15/ */ _L15_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/_L13/ */ _L13_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @1/_L11/ */ _L11_LimiterUnSymmetrical_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_LimiterUnSymmetrical_1_float64;
  kcg_float64 /* @2/LUS_Output/ */ _1_LUS_Output_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/HighLimit/ */ _2_HighLimit_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/LowLimit/ */ LowLimit_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/LUS_Input/ */ _3_LUS_Input_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/_L9/ */ _L9_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/_L3/ */ _L3_LimiterUnSymmetrical_2_float64;
  kcg_bool /* @2/_L2/ */ _L2_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/_L15/ */ _L15_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/_L13/ */ _L13_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @2/_L11/ */ _L11_LimiterUnSymmetrical_2_float64;
  kcg_bool /* @2/_L1/ */ _L1_LimiterUnSymmetrical_2_float64;
  kcg_float64 /* @3/Me_output/ */ Me_output_Mean_1_float64;
  kcg_float64 /* @3/I2/ */ I2_Mean_1_float64;
  kcg_float64 /* @3/I1/ */ I1_Mean_1_float64;
  kcg_float64 /* @3/_L6/ */ _L6_Mean_1_float64;
  kcg_float64 /* @3/_L4/ */ _L4_Mean_1_float64;
  kcg_float64 /* @3/_L3/ */ _L3_Mean_1_float64;
  kcg_float64 /* @3/_L2/ */ _L2_Mean_1_float64;
  kcg_float64 /* @3/_L1/ */ _L1_Mean_1_float64;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock2:then:_L2/ */ _L2_then_IfBlock2;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock2:then:_L1/ */ _L1_then_IfBlock2;
  kcg_float64 /* IfBlock2:else:_L1/ */ _L1_else_IfBlock2;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L23/ */ _L23_then_IfBlock1;
  m_in_kg_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L24/ */ _L24_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L25/ */ _L25_then_IfBlock1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L26/ */ _L26_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L27/ */ _L27_then_IfBlock1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:then:_L28/ */ _L28_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L29/ */ _L29_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L30/ */ _L30_then_IfBlock1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* P_res/ */ P_res;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* t1/ */ t1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* t2/ */ t2;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* dt/ */ dt;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v1/ */ v1;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v2_sq/ */ v2_sq;
  kcg_float64 /* _L19/ */ _L19;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L21/ */ _L21;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L24/ */ _L24;
  kcg_float64 /* _L25/ */ _L25;
  kcg_float64 /* _L26/ */ _L26;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L27/ */ _L27;
  kcg_float64 /* _L28/ */ _L28;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L29/ */ _L29;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L30/ */ _L30;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L40/ */ _L40;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L44/ */ _L44;
  kcg_float64 /* _L46/ */ _L46;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L47/ */ _L47;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L62/ */ _L62;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L63/ */ _L63;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L64/ */ _L64;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L65/ */ _L65;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L66/ */ _L66;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L67/ */ _L67;
  kcg_float64 /* _L68/ */ _L68;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L69/ */ _L69;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L70/ */ _L70;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L71/ */ _L71;
  kcg_float64 /* _L72/ */ _L72;
  m_in_kg_T_AhTypes_Pkg_physical_Pkg /* _L73/ */ _L73;
  kcg_float64 /* _L74/ */ _L74;
  kcg_float64 /* _L75/ */ _L75;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L76/ */ _L76;
  kcg_float64 /* _L77/ */ _L77;
  kcg_float64 /* _L81/ */ _L81;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L82/ */ _L82;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_float64 /* _L85/ */ _L85;
  kcg_float64 /* _L86/ */ _L86;
} outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/ */
extern void fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg(
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
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fahrDynamik_reset_simEnv_Pkg_mainPkg_subf_Pkg(
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fahrDynamik_init_simEnv_Pkg_mainPkg_subf_Pkg(
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik/
  @1: (pwlinear::LimiterUnSymmetrical#1)
  @2: (pwlinear::LimiterUnSymmetrical#2)
  @3: (math::Mean#1)
*/

#endif /* _fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg.h
** Generation date: 2020-05-28T14:24:09
*************************************************************$ */

