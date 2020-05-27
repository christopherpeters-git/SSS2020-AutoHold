/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Christopher/Nextcloud/Ostfalia/4. Semester/SoftwareSichereSysteme/Scade_Loesung/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */
#ifndef _EpbCtrl_AH_Pkg_main_Pkg_H_
#define _EpbCtrl_AH_Pkg_main_Pkg_H_

#include "kcg_types.h"
#include "bestimmeAutoHoldModus_AH_Pkg_subf_Pkg.h"
#include "autoHold_AH_Pkg_subf_Pkg.h"
#include "hillHold_AH_Pkg_subf_Pkg.h"
#include "bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg.h"
#include "steuereEPB_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* led_P/ */ led_P;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_P/ */ cockpitAnzeige_P;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_AutoHoldMode/ */ cockpitAnzeige_AutoHoldMode;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_Hold/ */ cockpitAnzeige_Hold;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_EPBMode_Manuell/ */ cockpitAnzeige_EPBMode_Manuell;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* cockpitAnzeige_EPBMode_Automatik/ */ cockpitAnzeige_EPBMode_Automatik;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* EPB_Bremse/ */ EPB_Bremse;
  betriebsbremsdruck_T_AhTypes_Pkg_ah_Pkg /* betriebsBremse/ */ betriebsBremse;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* betriebsbremsSperrventil/ */ betriebsbremsSperrventil;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* epbBetriebsmodus/ */ epbBetriebsmodus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* @1/_L4/ */ _L4_MemoryBasic_1_float64;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_hillHold_AH_Pkg_subf_Pkg /* _L38=(AH_Pkg::subf_Pkg::hillHold#2)/ */ Context_hillHold_2;
  outC_steuereEPB_AH_Pkg_subf_Pkg /* _L32=(AH_Pkg::subf_Pkg::steuereEPB#1)/ */ Context_steuereEPB_1;
  outC_autoHold_AH_Pkg_subf_Pkg /* _L39=(AH_Pkg::subf_Pkg::autoHold#2)/ */ Context_autoHold_2;
  outC_bestimmeAutoHoldModus_AH_Pkg_subf_Pkg /* _L56=(AH_Pkg::subf_Pkg::bestimmeAutoHoldModus#1)/ */ Context_bestimmeAutoHoldModus_1;
  outC_bestimmeEpbBetriebsmodus_AH_Pkg_subf_Pkg /* _L35=(AH_Pkg::subf_Pkg::bestimmeEpbBetriebsmodus#1)/ */ Context_bestimmeEpbBetriebsmodus_1;
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
  kcg_bool /* aktiviereEPB/ */ aktiviereEPB;
  kcg_bool /* arretiereBetriebsbremse/ */ arretiereBetriebsbremse;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* epb_bremszustand/ */ epb_bremszustand;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* betriebsbremsSperrventil_loc/ */ betriebsbremsSperrventil_loc;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L34/ */ _L34;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L33/ */ _L33;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L32/ */ _L32;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L36/ */ _L36;
  epbBetriebsmodus_T_AhTypes_Pkg_ah_Pkg /* _L35/ */ _L35;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L38/ */ _L38;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L42/ */ _L42;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L43/ */ _L43;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L44/ */ _L44;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L45/ */ _L45;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L46/ */ _L46;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L47/ */ _L47;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L48/ */ _L48;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L49/ */ _L49;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L50/ */ _L50;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L51/ */ _L51;
  tasterP_T_AhTypes_Pkg_ah_Pkg /* _L52/ */ _L52;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L57/ */ _L57;
  autoholdModus_T_AhTypes_Pkg_ah_Pkg /* _L56/ */ _L56;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L58/ */ _L58;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L59/ */ _L59;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L60/ */ _L60;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L61/ */ _L61;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L62/ */ _L62;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L63/ */ _L63;
  tasterHold_T_AhTypes_Pkg_ah_Pkg /* _L64/ */ _L64;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L65/ */ _L65;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L66/ */ _L66;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L67/ */ _L67;
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg /* _L68/ */ _L68;
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg /* _L69/ */ _L69;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L70/ */ _L70;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L71/ */ _L71;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L72/ */ _L72;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L73/ */ _L73;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L74/ */ _L74;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L75/ */ _L75;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L76/ */ _L76;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L77/ */ _L77;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L78/ */ _L78;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L79/ */ _L79;
  on_off_element_T_AhTypes_Pkg_ah_Pkg /* _L80/ */ _L80;
  kcg_bool /* _L82/ */ _L82;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L83/ */ _L83;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L87/ */ _L87;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* _L88/ */ _L88;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L92/ */ _L92;
} outC_EpbCtrl_AH_Pkg_main_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::main_Pkg::EpbCtrl/ */
extern void EpbCtrl_AH_Pkg_main_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* fahrertuerSchalter/ */
  tuerSchalter_T_AhTypes_Pkg_ah_Pkg fahrertuerSchalter,
  /* sicherheitsgurtSchalter/ */
  sicherheitsgurt_zustand_T_AhTypes_Pkg_ah_Pkg sicherheitsgurtSchalter,
  /* taste_P/ */
  tasterP_T_AhTypes_Pkg_ah_Pkg taste_P,
  /* taste_Hold/ */
  tasterHold_T_AhTypes_Pkg_ah_Pkg taste_Hold,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_EpbCtrl_AH_Pkg_main_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EpbCtrl_reset_AH_Pkg_main_Pkg(outC_EpbCtrl_AH_Pkg_main_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EpbCtrl_init_AH_Pkg_main_Pkg(outC_EpbCtrl_AH_Pkg_main_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: AH_Pkg::main_Pkg::EpbCtrl/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _EpbCtrl_AH_Pkg_main_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EpbCtrl_AH_Pkg_main_Pkg.h
** Generation date: 2020-05-27T11:32:07
*************************************************************$ */

