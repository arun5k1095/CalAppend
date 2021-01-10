/**************************************************************************************************\
 *** 
 *** Simulink model       : Trjdc_Params_1_TL
 *** TargetLink subsystem : Trjdc_Params_1_TL/Trjdc_Params_1_TL/Subsystem/Trjdc_Params_1_TL/TrJdc_Pa
 ***                        rams
 *** Codefile             : trjdc_params_cal.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2018-02-06 12:05:46
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
 *** TargetLink version      : 2.3 from 05-Mar-2008
 *** Code generator version  : Build Id 2.3.0.17 from 2008-02-07 15:20:42
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _TRJDC_PARAMS_CAL_H_
#define _TRJDC_PARAMS_CAL_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines_TrJdc_Para.h"
#include "tl_basetypes.h"
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

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 32
\******************************************************************************/
extern CAL U32 LatchTimr_T /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;
extern CAL U32 fault_clear_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;
extern CAL U32 fault_heal_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;
extern CAL U32 ignition_timeout_cnt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 16
\******************************************************************************/
extern CAL U16 AutoTrChosn_T_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 BldeDirctModeSelTimr_T_Dis_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 LoPwModeDrvModeMsgReqActv_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 LoPwModeDrvModeMsgReqOff_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 LoPwModeDrvModeMsgReqSel_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 LoPwModeDrvModeMsgReqTrOff_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 LoPwModeMsgDsplyTimr_T_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 MskMissSigAirSusp_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 SpeclProgOff_T_Allw_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 TrAutoButtnStatsValid_T_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 available_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 blink_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 choosing_msg_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 chosen_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 defaulting_msg_hold_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 fault_det_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 ign_off_det_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 ignition_timeout /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 initial_msg_hold_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 mode_change_timeout /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 msg_hold_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 msg_visible_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 not_available_timeout /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 road_chosen_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 rot_pause_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 selected_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 sw_stuck_time /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 8
\******************************************************************************/
extern CAL Bool AdvicSuspHi_B_Enbl_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool AirSuspSysPrtcp_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool ArcPrtcp_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 BldeIntfcDirctActvBaseMsg_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool BldeUseIntfc_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 CONFIG_A_AV_REQD_BYTE /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 CONFIG_A_NOT_FITTED_BYTE /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 EcnmyButtnFaltMsk_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool EcnmyModeTout_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 FAULT_MSG /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 HiUBattSocThres_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool HndlConfgUseIntfc_B_Enbl_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool Jdc_B_Fit_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 LedSwtchFaltMsk_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool LoPwModeApplEnbl_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 LoPwModeTerrModeReqOn_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 LoRngeMsk_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool MedFricModeTout_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 MedFricMode_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode1Down_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode1Up_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode2Up_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode3Up_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode4Up_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 Mode5Up_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 ModeMsk_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 MskAirSuspAvail_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 NUMBER_OF_DTCS /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 NumMode_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 PERFORM /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 PERFORM_MSG /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool PREVIEW_OPTION /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 ROCK_OPTION /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 STATIONARY_MSG /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool SandModeTout_B_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 TrApplVarnt_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL U8 TrJdcParamCol_Z_Pt /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;
extern CAL Bool mode_air_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_dlct_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_ecm_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_ems_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_scs_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_steer_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_tcm_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool mode_tcu_av_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL Bool rock_low_range_reqd_b /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 1 */;
extern CAL U8 sys_mode_av_reqd /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_TRJDC_PARAMS_CAL_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
