/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/ma2/Desktop/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */
#ifndef _deaktiviereHillHold_AH_Pkg_subf_Pkg_H_
#define _deaktiviereHillHold_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "RisingEdge_digital.h"
#include "countDownTimer_AhTypes_Pkg_utils_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* deaktiviere/ */ deaktiviere;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L22=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_countDownTimer_AhTypes_Pkg_utils_Pkg /* _L27=(AhTypes_Pkg::utils_Pkg::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_RisingEdge_digital /* _L26=(digital::RisingEdge#3)/ */ Context_RisingEdge_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L1/ */ _L1;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L23/ */ _L23;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L29/ */ _L29;
  t_in_s_T_AhTypes_Pkg_physical_Pkg /* _L30/ */ _L30;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  m_in_kg_T_AhTypes_Pkg_physical_Pkg /* _L34/ */ _L34;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L35/ */ _L35;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L36/ */ _L36;
  kcg_float64 /* _L37/ */ _L37;
} outC_deaktiviereHillHold_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::deaktiviereHillHold/ */
extern void deaktiviereHillHold_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deaktiviereHillHold_reset_AH_Pkg_subf_Pkg(
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deaktiviereHillHold_init_AH_Pkg_subf_Pkg(
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AH_Pkg::subf_Pkg::deaktiviereHillHold/
  @1: (math::Abs#1)
*/

#endif /* _deaktiviereHillHold_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** deaktiviereHillHold_AH_Pkg_subf_Pkg.h
** Generation date: 2020-05-31T13:05:04
*************************************************************$ */

