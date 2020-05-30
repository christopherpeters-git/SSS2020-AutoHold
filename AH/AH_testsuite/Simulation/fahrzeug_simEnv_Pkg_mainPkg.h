/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Repositories/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */
#ifndef _fahrzeug_simEnv_Pkg_mainPkg_H_
#define _fahrzeug_simEnv_Pkg_mainPkg_H_

#include "kcg_types.h"
#include "fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* v_fzg/ */ v_fzg;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* s_fzg/ */ s_fzg;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* @1/_L4/ */ _L4_MemoryBasic_1_float64;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_fahrDynamik_simEnv_Pkg_mainPkg_subf_Pkg /* _L14=(simEnv_Pkg::mainPkg::subf_Pkg::fahrDynamik#1)/ */ Context_fahrDynamik_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Memorized/ */ Memorized_MemoryBasic_1_float64;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_float64;
  kcg_float64 /* @1/Init/ */ Init_MemoryBasic_1_float64;
  kcg_float64 /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L7/ */ _L7_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L6/ */ _L6_MemoryBasic_1_float64;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_MemoryBasic_1_float64;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L7/ */ _L7;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L12/ */ _L12;
  s_in_m_T_AhTypes_Pkg_physical_Pkg /* _L15/ */ _L15;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L14/ */ _L14;
  m_in_kg_T_AhTypes_Pkg_physical_Pkg /* _L16/ */ _L16;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L17/ */ _L17;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L18/ */ _L18;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L19/ */ _L19;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L22/ */ _L22;
  p_in_W_T_AhTypes_Pkg_physical_Pkg /* _L23/ */ _L23;
  kcg_float64 /* _L25/ */ _L25;
  kcg_float64 /* _L26/ */ _L26;
  kcg_float64 /* _L27/ */ _L27;
  kcg_float64 /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_float64 /* _L30/ */ _L30;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L31/ */ _L31;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L32/ */ _L32;
} outC_fahrzeug_simEnv_Pkg_mainPkg;

/* ===========  node initialization and cycle functions  =========== */
/* simEnv_Pkg::mainPkg::fahrzeug/ */
extern void fahrzeug_simEnv_Pkg_mainPkg(
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
  outC_fahrzeug_simEnv_Pkg_mainPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void fahrzeug_reset_simEnv_Pkg_mainPkg(
  outC_fahrzeug_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void fahrzeug_init_simEnv_Pkg_mainPkg(
  outC_fahrzeug_simEnv_Pkg_mainPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: simEnv_Pkg::mainPkg::fahrzeug/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _fahrzeug_simEnv_Pkg_mainPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** fahrzeug_simEnv_Pkg_mainPkg.h
** Generation date: 2020-05-30T21:27:49
*************************************************************$ */

