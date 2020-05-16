/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config S:/2020/AHold/AH_01/AH_testsuite/Simulation/config.txt
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */
#ifndef _countDownTimer_AhTypes_Pkg_utils_Pkg_H_
#define _countDownTimer_AhTypes_Pkg_utils_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* abgelaufen/ */ abgelaufen;
  kcg_bool /* laufend/ */ laufend;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* systemZeit/ */ mem_systemZeit;
  kcg_bool init;
  kcg_float64 /* @1/_L4/ */ _L4_MemoryBasic_1_float64;
  kcg_bool /* @2/_L2/ */ _L2_FlipFlopReset_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* --------------------- (-debug) assertions  ---------------------- */
  kcg_bool /* assume_systemzeit_ist_monoton_steigend= */ assume_systemzeit_ist_monoton_steigend;
  kcg_bool /* assume_systemZeit_ist_immer_groessergleich_0= */ assume_systemZeit_ist_immer_groessergleich_0;
  kcg_bool /* guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true= */ guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true;
  kcg_bool /* assume_zeitIntervall_ist_groesser_0= */ assume_zeitIntervall_ist_groesser_0;
  kcg_bool /* guarantee_stop_stopptDenTimer= */ guarantee_stop_stopptDenTimer;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Memorized/ */ Memorized_MemoryBasic_1_float64;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_float64;
  kcg_float64 /* @1/Init/ */ Init_MemoryBasic_1_float64;
  kcg_float64 /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L7/ */ _L7_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L6/ */ _L6_MemoryBasic_1_float64;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_MemoryBasic_1_float64;
  kcg_bool /* @2/FFR_Output/ */ FFR_Output_FlipFlopReset_1;
  kcg_bool /* @2/Init/ */ Init_FlipFlopReset_1;
  kcg_bool /* @2/Reset/ */ Reset_FlipFlopReset_1;
  kcg_bool /* @2/Set/ */ Set_FlipFlopReset_1;
  kcg_bool /* @2/_L14/ */ _L14_FlipFlopReset_1;
  kcg_bool /* @2/_L12/ */ _L12_FlipFlopReset_1;
  kcg_bool /* @2/_L11/ */ _L11_FlipFlopReset_1;
  kcg_bool /* @2/_L8/ */ _L8_FlipFlopReset_1;
  kcg_bool /* @2/_L7/ */ _L7_FlipFlopReset_1;
  kcg_bool /* @2/_L4/ */ _L4_FlipFlopReset_1;
  kcg_bool /* @2/_L10/ */ _L10_FlipFlopReset_1;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L7/ */ _L7;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L4/ */ _L4;
  kcg_float64 /* _L2/ */ _L2;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
} outC_countDownTimer_AhTypes_Pkg_utils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AhTypes_Pkg::utils_Pkg::countDownTimer/ */
extern void countDownTimer_AhTypes_Pkg_utils_Pkg(
  /* start/ */
  kcg_bool start,
  /* stop/ */
  kcg_bool stop,
  /* systemZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg systemZeit,
  /* zeitIntervall/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg zeitIntervall,
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC);

extern void countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void countDownTimer_init_AhTypes_Pkg_utils_Pkg(
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AhTypes_Pkg::utils_Pkg::countDownTimer/
  @1: (linear::MemoryBasic#1)
  @2: (digital::FlipFlopReset#1)
*/

#endif /* _countDownTimer_AhTypes_Pkg_utils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** countDownTimer_AhTypes_Pkg_utils_Pkg.h
** Generation date: 2020-04-28T20:25:02
*************************************************************$ */

