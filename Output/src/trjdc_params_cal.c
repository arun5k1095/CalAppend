/**************************************************************************************************\
 *** 
 *** Simulink model       : Trjdc_Params_1_TL
 *** TargetLink subsystem : Trjdc_Params_1_TL/Trjdc_Params_1_TL/Subsystem/Trjdc_Params_1_TL/TrJdc_Pa
 ***                        rams
 *** Codefile             : trjdc_params_cal.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date :Sep-05-2021  08:49:38
 ***
 *** CODE GENERATOR OPTIONS:
 *** Compiler                            : <unknown>
 *** Target                              : Generic
 *** ANSI-C compatible code              : yes
 *** Optimization level                  : 2
 *** Constant style                      : decimal
 *** Clean code option                   : enabled
 *** Logging mode                        : Do not log anything
 *** Linker sections                     : enabled
 *** Assembler statements                : disabled
 *** Variable name length                : 31 chars
 *** Use global bitfields                : disabled
 *** Stateflow: use of bitfields         : enabled
 *** State activity encoding limit       : 5
 *** Omit zero inits in restart function : enabled
 *** Share fcns between TL subsystems    : disabled
 *** Generate 64bit functions            : disabled
 *** Inlining Threshold                  : 6
 *** Line break limit                    : 100
 *** Target optimized boolean data type  : enabled
 *** Keep saturation elements            : disabled
 *** Extended variable sharing           : disabled
 *** Style definition file               : C:\dSPACE\Matlab\Tl\config\codegen\cconfig.xml
 *** Root style sheet                    : C:\dSPACE\Matlab\Tl\XML\CodeGen\Stylesheets\TL_CSourceCod
 ***                                       eSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** STrJdc_Para1             Trjdc_Params_1_TL/TrJdc_Params
 *** STrJdc_Para2             TrJdc_Params/Subsystem1
 *** STrJdc_Para3             TrJdc_Params/Subsystem2
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 2.3 from 05-Mar-2008
 *** Code generator version  : Build Id 2.3.0.17 from 2008-02-07 15:20:42
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TRJDC_PARAMS_CAL_C_
#define _TRJDC_PARAMS_CAL_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "trjdc_params_cal.h"
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/

#pragma ghs section rodata = ".FLASH_CAL_DATA"
/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 32
\******************************************************************************/

CAL U32 ROM0_LatchTimr_T = 120000;

CAL U32 ROM0_fault_clear_time = 5000;

CAL U32 ROM0_fault_heal_time = 60000;

CAL U32 ROM0_ignition_timeout_cnt = 0;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 16
\******************************************************************************/

CAL U16 ROM0_AutoTrChosn_T_Pt = 0;

CAL U16 ROM0_BldeDirctModeSelTimr_T_Dis_Pt = 0;

CAL U16 ROM0_LoPwModeDrvModeMsgReqActv_Z_Pt = 259;

CAL U16 ROM0_LoPwModeDrvModeMsgReqOff_Z_Pt = 0;

CAL U16 ROM0_LoPwModeDrvModeMsgReqSel_Z_Pt = 275;

CAL U16 ROM0_LoPwModeDrvModeMsgReqTrOff_Z_Pt = 178;

CAL U16 ROM0_LoPwModeMsgDsplyTimr_T_Pt = 5000;

CAL U16 ROM0_MskMissSigAirSusp_Z_Pt = 32;

CAL U16 ROM0_SpeclProgOff_T_Allw_Pt = 500;

CAL U16 ROM0_TrAutoButtnStatsValid_T_Pt = 1000;

CAL U16 ROM0_available_time = 500;

CAL U16 ROM0_blink_time = 250;

CAL U16 ROM0_choosing_msg_time = 2000;

CAL U16 ROM0_chosen_time = 0;

CAL U16 ROM0_defaulting_msg_hold_time = 2000;

CAL U16 ROM0_fault_det_time = 1000;

CAL U16 ROM0_ign_off_det_time = 300;

CAL U16 ROM0_ignition_timeout = 2352;

CAL U16 ROM0_initial_msg_hold_time = 2000;

CAL U16 ROM0_mode_change_timeout = 1000;

CAL U16 ROM0_msg_hold_time = 5000;

CAL U16 ROM0_msg_visible_time = 500;

CAL U16 ROM0_not_available_timeout = 60000;

CAL U16 ROM0_road_chosen_time = 250;

CAL U16 ROM0_rot_pause_time = 0;

CAL U16 ROM0_selected_time = 50;

CAL U16 ROM0_sw_stuck_time = 0;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 8
\******************************************************************************/

CAL Bool ROM0_AdvicSuspHi_B_Enbl_Pt = 0;

CAL Bool ROM0_AirSuspSysPrtcp_B_Pt = 0;

CAL Bool ROM0_ArcPrtcp_B_Pt = 0;

CAL U8 ROM0_BldeIntfcDirctActvBaseMsg_Z_Pt = 16;

CAL Bool ROM0_BldeUseIntfc_B_Pt = 0;

CAL U8 ROM0_CONFIG_A_AV_REQD_BYTE = 6;

CAL U8 ROM0_CONFIG_A_NOT_FITTED_BYTE = 0;

CAL U8 ROM0_EcnmyButtnFaltMsk_Z_Pt = 64;

CAL Bool ROM0_EcnmyModeTout_B_Pt = 1;

CAL U8 ROM0_FAULT_MSG = 144;

CAL U8 ROM0_HiUBattSocThres_Z_Pt = 0;

CAL Bool ROM0_HndlConfgUseIntfc_B_Enbl_Pt = 0;

CAL Bool ROM0_Jdc_B_Fit_Pt = 1;

CAL U8 ROM0_LedSwtchFaltMsk_Z_Pt = 8;

CAL Bool ROM0_LoPwModeApplEnbl_B_Pt = 0;

CAL U8 ROM0_LoPwModeTerrModeReqOn_Z_Pt = 11;

CAL U8 ROM0_LoRngeMsk_Z_Pt = 32;

CAL Bool ROM0_MedFricModeTout_B_Pt = 1;

CAL U8 ROM0_MedFricMode_Z_Pt = 10;

CAL U8 ROM0_Mode1Down_Pt = 6;

CAL U8 ROM0_Mode1Up_Pt = 9;

CAL U8 ROM0_Mode2Up_Pt = 1;

CAL U8 ROM0_Mode3Up_Pt = 9;

CAL U8 ROM0_Mode4Up_Pt = 1;

CAL U8 ROM0_Mode5Up_Pt = 12;

CAL U8 ROM0_ModeMsk_Z_Pt = 7;

CAL U8 ROM0_MskAirSuspAvail_Z_Pt = 128;

CAL U8 ROM0_NUMBER_OF_DTCS = 15;

CAL U8 ROM0_NumMode_Z_Pt = 2;

CAL U8 ROM0_PERFORM = 6;

CAL U8 ROM0_PERFORM_MSG = 6;

CAL Bool ROM0_PREVIEW_OPTION = 0;

CAL U8 ROM0_ROCK_OPTION = 1;

CAL U8 ROM0_STATIONARY_MSG = 240;

CAL Bool ROM0_SandModeTout_B_Pt = 1;

CAL U8 ROM0_TrApplVarnt_Pt = 2;

CAL U8 ROM0_TrJdcParamCol_Z_Pt = 1;

CAL Bool ROM0_mode_air_av_reqd_b = 0;

CAL Bool ROM0_mode_dlct_av_reqd_b = 1;

CAL Bool ROM0_mode_ecm_av_reqd_b = 1;

CAL Bool ROM0_mode_ems_av_reqd_b = 1;

CAL Bool ROM0_mode_scs_av_reqd_b = 1;

CAL Bool ROM0_mode_steer_av_reqd_b = 0;

CAL Bool ROM0_mode_tcm_av_reqd_b = 0;

CAL Bool ROM0_mode_tcu_av_reqd_b = 0;

CAL Bool ROM0_rock_low_range_reqd_b = 0;

CAL U8 ROM0_sys_mode_av_reqd = 7;

CAL U8 ROM0_SYS_INITIALISING[8] = 
{ 17, 17, 17, 17, 17, 17 };
CAL U8 ROM0_SYS_FOLLOWING[8] = 
{ 12, 12, 12, 12, 12, 12, 12 };
// Added manually and Call sheet modified for tool testing purpose 
#pragma ghs section rodata = default

#pragma ghs section data = ".LLSW_RAM_CALIBRATION"
/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 32
\******************************************************************************/

U32 LatchTimr_T = 120000;

U32 fault_clear_time = 5000;

U32 fault_heal_time = 60000;

U32 ignition_timeout_cnt = 0;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 16
\******************************************************************************/

U16 AutoTrChosn_T_Pt = 0;

U16 BldeDirctModeSelTimr_T_Dis_Pt = 0;

U16 LoPwModeDrvModeMsgReqActv_Z_Pt = 259;

U16 LoPwModeDrvModeMsgReqOff_Z_Pt = 0;

U16 LoPwModeDrvModeMsgReqSel_Z_Pt = 275;

U16 LoPwModeDrvModeMsgReqTrOff_Z_Pt = 178;

U16 LoPwModeMsgDsplyTimr_T_Pt = 5000;

U16 MskMissSigAirSusp_Z_Pt = 32;

U16 SpeclProgOff_T_Allw_Pt = 500;

U16 TrAutoButtnStatsValid_T_Pt = 1000;

U16 available_time = 500;

U16 blink_time = 250;

U16 choosing_msg_time = 2000;

U16 chosen_time = 0;

U16 defaulting_msg_hold_time = 2000;

U16 fault_det_time = 1000;

U16 ign_off_det_time = 300;

U16 ignition_timeout = 2352;

U16 initial_msg_hold_time = 2000;

U16 mode_change_timeout = 1000;

U16 msg_hold_time = 5000;

U16 msg_visible_time = 500;

U16 not_available_timeout = 60000;

U16 road_chosen_time = 250;

U16 rot_pause_time = 0;

U16 selected_time = 50;

U16 sw_stuck_time = 0;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 8
\******************************************************************************/

Bool AdvicSuspHi_B_Enbl_Pt = 0;

Bool AirSuspSysPrtcp_B_Pt = 0;

Bool ArcPrtcp_B_Pt = 0;

U8 BldeIntfcDirctActvBaseMsg_Z_Pt = 16;

Bool BldeUseIntfc_B_Pt = 0;

U8 CONFIG_A_AV_REQD_BYTE = 6;

U8 CONFIG_A_NOT_FITTED_BYTE = 0;

U8 EcnmyButtnFaltMsk_Z_Pt = 64;

Bool EcnmyModeTout_B_Pt = 1;

U8 FAULT_MSG = 144;

U8 HiUBattSocThres_Z_Pt = 0;

Bool HndlConfgUseIntfc_B_Enbl_Pt = 0;

Bool Jdc_B_Fit_Pt = 1;

U8 LedSwtchFaltMsk_Z_Pt = 8;

Bool LoPwModeApplEnbl_B_Pt = 0;

U8 LoPwModeTerrModeReqOn_Z_Pt = 11;

U8 LoRngeMsk_Z_Pt = 32;

Bool MedFricModeTout_B_Pt = 1;

U8 MedFricMode_Z_Pt = 10;

U8 Mode1Down_Pt = 6;

U8 Mode1Up_Pt = 9;

U8 Mode2Up_Pt = 1;

U8 Mode3Up_Pt = 9;

U8 Mode4Up_Pt = 1;

U8 Mode5Up_Pt = 12;

U8 ModeMsk_Z_Pt = 7;

U8 MskAirSuspAvail_Z_Pt = 128;

U8 NUMBER_OF_DTCS = 15;

U8 NumMode_Z_Pt = 2;

U8 PERFORM = 6;

U8 PERFORM_MSG = 6;

Bool PREVIEW_OPTION = 0;

U8 ROCK_OPTION = 1;

U8 STATIONARY_MSG = 240;

Bool SandModeTout_B_Pt = 1;

U8 TrApplVarnt_Pt = 2;

U8 TrJdcParamCol_Z_Pt = 1;

Bool mode_air_av_reqd_b = 0;

Bool mode_dlct_av_reqd_b = 1;

Bool mode_ecm_av_reqd_b = 1;

Bool mode_ems_av_reqd_b = 1;

Bool mode_scs_av_reqd_b = 1;

Bool mode_steer_av_reqd_b = 0;

Bool mode_tcm_av_reqd_b = 0;

Bool mode_tcu_av_reqd_b = 0;

Bool rock_low_range_reqd_b = 0;

U8 sys_mode_av_reqd = 7;

U8 SYS_INITIALISING[8] = 
{ 17, 17, 17, 17, 17, 17 };
U8 SYS_FOLLOWING[8] = 
{ 12, 12, 12, 12, 12, 12, 12 };
// Added manually and Call sheet modified for tool testing purpose 
#pragma ghs section data = default

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INLINE FUNCTIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  MODULE LOCAL FUNCTION DEFINITIONS
\*----------------------------------------------------------------------------*/

#endif/*_TRJDC_PARAMS_CAL_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
