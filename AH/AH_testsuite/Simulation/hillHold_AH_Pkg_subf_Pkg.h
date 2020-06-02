/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/Simon/SSS2020-AutoHold/AH/AH_testsuite/Simulation/config.txt
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */
#ifndef _hillHold_AH_Pkg_subf_Pkg_H_
#define _hillHold_AH_Pkg_subf_Pkg_H_

#include "kcg_types.h"
#include "deaktiviereHillHold_AH_Pkg_subf_Pkg.h"
#include "aktiviereHillHold_AH_Pkg_subf_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* betriebsbremsSperrventil/ */ betriebsbremsSperrventil;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_aktiviereHillHold_AH_Pkg_subf_Pkg /* _L1=(AH_Pkg::subf_Pkg::aktiviereHillHold#1)/ */ Context_aktiviereHillHold_1;
  outC_deaktiviereHillHold_AH_Pkg_subf_Pkg /* _L2=(AH_Pkg::subf_Pkg::deaktiviereHillHold#1)/ */ Context_deaktiviereHillHold_1;
  /* ------------------ clocks of observable data -------------------- */
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:hillHold_inaktiv:_L1/ */ _L1_hillHold_inaktiv_SM1;
  betriebsbremsSperrventil_T_AhTypes_Pkg_ah_Pkg /* SM1:hilllHold_aktiv:_L1/ */ _L1_hilllHold_aktiv_SM1;
  _6_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _7_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* aktiviere/ */ aktiviere;
  kcg_bool /* deaktiviere/ */ deaktiviere;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L8/ */ _L8;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L9/ */ _L9;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L10/ */ _L10;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L11/ */ _L11;
  v_in_mps_T_AhTypes_Pkg_physical_Pkg /* _L12/ */ _L12;
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg /* _L20/ */ _L20;
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg /* _L21/ */ _L21;
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg /* _L22/ */ _L22;
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg /* _L23/ */ _L23;
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg /* _L25/ */ _L25;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L26/ */ _L26;
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg /* _L27/ */ _L27;
} outC_hillHold_AH_Pkg_subf_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* AH_Pkg::subf_Pkg::hillHold/ */
extern void hillHold_AH_Pkg_subf_Pkg(
  /* zuendschalter/ */
  zuendSchalter_T_AhTypes_Pkg_ah_Pkg zuendschalter,
  /* getriebeWahlhebel/ */
  getriebeWahlhebel_T_AhTypes_Pkg_ah_Pkg getriebeWahlhebel,
  /* bremspedalKraft/ */
  bremspedalkraft_T_AhTypes_Pkg_ah_Pkg bremspedalKraft,
  /* gaspedalStellung/ */
  gaspedalstellung_T_AhTypes_Pkg_ah_Pkg gaspedalStellung,
  /* v_fzg/ */
  v_in_mps_T_AhTypes_Pkg_physical_Pkg v_fzg,
  /* EPB_Bremse/ */
  epbBremszustand_T_AhTypes_Pkg_ah_Pkg EPB_Bremse,
  /* fzgLaengsNeigung/ */
  angle_in_rad_T_AhTypes_Pkg_physical_Pkg fzgLaengsNeigung,
  /* aktZeit/ */
  t_in_s_T_AhTypes_Pkg_physical_Pkg aktZeit,
  outC_hillHold_AH_Pkg_subf_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void hillHold_reset_AH_Pkg_subf_Pkg(outC_hillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void hillHold_init_AH_Pkg_subf_Pkg(outC_hillHold_AH_Pkg_subf_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _hillHold_AH_Pkg_subf_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** hillHold_AH_Pkg_subf_Pkg.h
** Generation date: 2020-06-02T11:32:44
*************************************************************$ */

