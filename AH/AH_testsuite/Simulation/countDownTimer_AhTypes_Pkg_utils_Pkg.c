/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* AhTypes_Pkg::utils_Pkg::countDownTimer/ */
void countDownTimer_AhTypes_Pkg_utils_Pkg(
  /* start/ */
  kcg_bool start,
  /* stop/ */
  kcg_bool stop,
  /* systemZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg systemZeit,
  /* zeitIntervall/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg zeitIntervall,
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC)
{
  kcg_bool tmp;
  /* systemZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg last_systemZeit;

  last_systemZeit = outC->mem_systemZeit;
  outC->mem_systemZeit = systemZeit;
  outC->_L6 = systemZeit;
  outC->Init_MemoryBasic_1_float64 = outC->_L6;
  outC->_L7_MemoryBasic_1_float64 = outC->Init_MemoryBasic_1_float64;
  /* @1/_L6= */
  if (outC->init) {
    outC->_L6_MemoryBasic_1_float64 = outC->_L7_MemoryBasic_1_float64;
  }
  else {
    outC->_L6_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  }
  outC->_L4_FlipFlopReset_1 = outC->_L2_FlipFlopReset_1;
  outC->_L8 = start;
  outC->Set_FlipFlopReset_1 = outC->_L8;
  outC->_L7_FlipFlopReset_1 = outC->Set_FlipFlopReset_1;
  outC->_L11_FlipFlopReset_1 = outC->_L7_FlipFlopReset_1 |
    outC->_L4_FlipFlopReset_1;
  outC->_L9 = stop;
  outC->Reset_FlipFlopReset_1 = outC->_L9;
  outC->_L8_FlipFlopReset_1 = outC->Reset_FlipFlopReset_1;
  outC->_L12_FlipFlopReset_1 = !outC->_L8_FlipFlopReset_1;
  outC->_L14_FlipFlopReset_1 = outC->_L12_FlipFlopReset_1 &
    outC->_L11_FlipFlopReset_1;
  outC->_L19 = !outC->_L9;
  outC->_L18 = outC->_L8 & outC->_L19;
  outC->Init_FlipFlopReset_1 = outC->_L18;
  outC->_L10_FlipFlopReset_1 = outC->Init_FlipFlopReset_1;
  /* @2/_L2= */
  if (outC->init) {
    outC->_L2_FlipFlopReset_1 = outC->_L10_FlipFlopReset_1;
  }
  else {
    outC->_L2_FlipFlopReset_1 = outC->_L14_FlipFlopReset_1;
  }
  outC->FFR_Output_FlipFlopReset_1 = outC->_L2_FlipFlopReset_1;
  outC->_L11 = outC->FFR_Output_FlipFlopReset_1;
  outC->_L14 = outC->_L8 & outC->_L11;
  outC->Write_MemoryBasic_1_float64 = outC->_L14;
  outC->_L5_MemoryBasic_1_float64 = outC->Write_MemoryBasic_1_float64;
  outC->BM_Input_MemoryBasic_1_float64 = outC->_L6;
  outC->_L2_MemoryBasic_1_float64 = outC->BM_Input_MemoryBasic_1_float64;
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_float64) {
    outC->_L4_MemoryBasic_1_float64 = outC->_L2_MemoryBasic_1_float64;
  }
  else {
    outC->_L4_MemoryBasic_1_float64 = outC->_L6_MemoryBasic_1_float64;
  }
  outC->Memorized_MemoryBasic_1_float64 = outC->_L4_MemoryBasic_1_float64;
  outC->_L10 = zeitIntervall;
  outC->_L7 = outC->Memorized_MemoryBasic_1_float64;
  outC->_L2 = outC->_L6 - outC->_L7;
  outC->_L4 = outC->_L2 >= outC->_L10;
  outC->_L13 = outC->_L4 & outC->_L11;
  outC->_L15 = !outC->_L13;
  outC->_L16 = outC->_L15 & outC->_L11;
  outC->laufend = outC->_L16;
  outC->abgelaufen = outC->_L13;
  /* guarantee_stop_stopptDenTimer= */
  if (stop == kcg_true) {
    tmp = (!outC->abgelaufen) & (!outC->laufend);
  }
  else {
    tmp = kcg_true;
  }
  outC->guarantee_stop_stopptDenTimer = tmp;
  outC->assume_zeitIntervall_ist_groesser_0 = zeitIntervall > kcg_lit_float64(0.);
  outC->guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true =
    ((outC->abgelaufen == kcg_true) & (outC->laufend == kcg_true)) == kcg_false;
  outC->assume_systemZeit_ist_immer_groessergleich_0 = systemZeit >=
    kcg_lit_float64(0.);
  outC->assume_systemzeit_ist_monoton_steigend = systemZeit >= last_systemZeit;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void countDownTimer_init_AhTypes_Pkg_utils_Pkg(
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC)
{
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->guarantee_stop_stopptDenTimer = kcg_true;
  outC->assume_zeitIntervall_ist_groesser_0 = kcg_true;
  outC->guarantee_laufendUndAbgelaufen_nichtGleichzeitig_true = kcg_true;
  outC->assume_systemZeit_ist_immer_groessergleich_0 = kcg_true;
  outC->assume_systemzeit_ist_monoton_steigend = kcg_true;
  outC->_L10_FlipFlopReset_1 = kcg_true;
  outC->_L4_FlipFlopReset_1 = kcg_true;
  outC->_L7_FlipFlopReset_1 = kcg_true;
  outC->_L8_FlipFlopReset_1 = kcg_true;
  outC->_L11_FlipFlopReset_1 = kcg_true;
  outC->_L12_FlipFlopReset_1 = kcg_true;
  outC->_L14_FlipFlopReset_1 = kcg_true;
  outC->Set_FlipFlopReset_1 = kcg_true;
  outC->Reset_FlipFlopReset_1 = kcg_true;
  outC->Init_FlipFlopReset_1 = kcg_true;
  outC->FFR_Output_FlipFlopReset_1 = kcg_true;
  outC->_L2_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_MemoryBasic_1_float64 = kcg_true;
  outC->_L6_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L7_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->BM_Input_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Init_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->Write_MemoryBasic_1_float64 = kcg_true;
  outC->Memorized_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_FlipFlopReset_1 = kcg_true;
  outC->_L4_MemoryBasic_1_float64 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->laufend = kcg_true;
  outC->abgelaufen = kcg_true;
  outC->mem_systemZeit = kcg_lit_float64(0.);
}
#endif /* KCG_USER_DEFINED_INIT */


void countDownTimer_reset_AhTypes_Pkg_utils_Pkg(
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg *outC)
{
  outC->init = kcg_true;
  outC->mem_systemZeit = kcg_lit_float64(0.);
}

/*
  Expanded instances for: AhTypes_Pkg::utils_Pkg::countDownTimer/
  @2: (digital::FlipFlopReset#1)
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** countDownTimer_AhTypes_Pkg_utils_Pkg.c
** Generation date: 2020-05-27T15:47:02
*************************************************************$ */

