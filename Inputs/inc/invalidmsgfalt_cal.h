/**************************************************************************************************\
 *** 
 *** Simulink model       : InvalidMsgFalt_1_TL
 *** TargetLink subsystem : InvalidMsgFalt_1_TL/InvalidMsgFalt_1_TL/Subsystem/InvalidMsgFalt_1_TL/In
 ***                        validMsgFalt
 *** Codefile             : invalidmsgfalt_cal.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2019-04-12 14:02:38
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
 *** Style definition file               : C:\56748_Release 2013A\Matlab\Tl\config\codegen\cconfig.x
 ***                                       ml
 *** Root style sheet                    : C:\56748_Release 2013A\Matlab\Tl\XML\CodeGen\Stylesheets\
 ***                                       TL_CSourceCodeSS.xsl
 *** Enable Multirate codegeneration     : disabled
 *** Add model checksum                  : disabled
 ***
 *** TargetLink version      : 2.3 from 05-Mar-2008
 *** Code generator version  : Build Id 2.3.0.17 from 2008-02-07 15:20:42
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _INVALIDMSGFALT_CAL_H_
#define _INVALIDMSGFALT_CAL_H_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "tl_defines_InvalidMsg.h"
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
extern CAL U32 DTC_Req_Invd_Pt[4] /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;
extern CAL U32 MaskWord_Invd_CH_Pt[4] /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 4294967295 */;

/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 16
\******************************************************************************/
extern CAL U16 MaskWord_Invd_CO_Pt[4] /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 MaskWord_Invd_FR_Pt[4] /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;
extern CAL U16 SscGTwmInvdSigIDAry_Zs[128] /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 65535 */;

/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

#endif/*_INVALIDMSGFALT_CAL_H_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/