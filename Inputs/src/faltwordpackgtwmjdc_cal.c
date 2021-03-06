/**************************************************************************************************\
 *** 
 *** Simulink model       : FaltWordPackGtwmJdc_1_TL
 *** TargetLink subsystem : FaltWordPackGtwmJdc_1_TL/FaltWordPackGtwmJdc_1_TL/Subsystem/FaltWordPack
 ***                        GtwmJdc_1_TL/FaltWordPackGtwmJdc
 *** Codefile             : faltwordpackgtwmjdc_cal.c
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2018-12-21 17:54:48
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
 *** SUBSYS                   CORRESPONDING SIMULINK SUBSYSTEM
 *** SFaltWordPa1             FaltWordPackGtwmJdc_1_TL/FaltWordPackGtwmJdc
 *** SFaltWordPa2             FaltWordPackGtwmJdc/Bitwise LogicalOperator7
 *** SFaltWordPa3             FaltWordPackGtwmJdc/PackSscFaltEnblConds1
 *** SFaltWordPa4             FaltWordPackGtwmJdc/PackSscFaltEnblConds2
 *** SFaltWordPa5             FaltWordPackGtwmJdc/PackSscFaltEnblConds3
 *** SFaltWordPa6             FaltWordPackGtwmJdc/PackSscFaltEnblConds4
 *** SFaltWordPa7             FaltWordPackGtwmJdc/Subsystem
 *** SFaltWordPa8             FaltWordPackGtwmJdc/Subsystem1
 *** SFaltWordPa9             FaltWordPackGtwmJdc/Subsystem10
 *** SFaltWordPa10            FaltWordPackGtwmJdc/Subsystem11
 *** SFaltWordPa11            FaltWordPackGtwmJdc/Subsystem2
 *** SFaltWordPa12            FaltWordPackGtwmJdc/Subsystem3
 *** SFaltWordPa13            FaltWordPackGtwmJdc/Subsystem4
 *** SFaltWordPa14            FaltWordPackGtwmJdc/Subsystem5
 *** SFaltWordPa15            FaltWordPackGtwmJdc/Subsystem6
 *** SFaltWordPa16            FaltWordPackGtwmJdc/Subsystem7
 *** SFaltWordPa17            FaltWordPackGtwmJdc/Subsystem8
 *** SFaltWordPa18            FaltWordPackGtwmJdc/Subsystem9
 *** SFaltWordPa19            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator1
 *** SFaltWordPa20            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator10
 *** SFaltWordPa21            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator11
 *** SFaltWordPa22            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator12
 *** SFaltWordPa23            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator13
 *** SFaltWordPa24            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator14
 *** SFaltWordPa25            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator15
 *** SFaltWordPa26            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator16
 *** SFaltWordPa27            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator17
 *** SFaltWordPa28            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator18
 *** SFaltWordPa29            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator19
 *** SFaltWordPa30            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator2
 *** SFaltWordPa31            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator20
 *** SFaltWordPa32            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator21
 *** SFaltWordPa33            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator22
 *** SFaltWordPa34            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator23
 *** SFaltWordPa35            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator24
 *** SFaltWordPa36            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator25
 *** SFaltWordPa37            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator26
 *** SFaltWordPa38            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator27
 *** SFaltWordPa39            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator28
 *** SFaltWordPa40            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator29
 *** SFaltWordPa41            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator3
 *** SFaltWordPa42            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator30
 *** SFaltWordPa43            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator31
 *** SFaltWordPa44            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator4
 *** SFaltWordPa45            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator5
 *** SFaltWordPa46            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator6
 *** SFaltWordPa47            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator7
 *** SFaltWordPa48            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator8
 *** SFaltWordPa49            FaltWordPackGtwmJdc/PackSscFaltEnblConds1/BitwiseLogical Operator9
 *** SFaltWordPa50            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator1
 *** SFaltWordPa51            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator10
 *** SFaltWordPa52            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator11
 *** SFaltWordPa53            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator12
 *** SFaltWordPa54            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator13
 *** SFaltWordPa55            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator14
 *** SFaltWordPa56            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator15
 *** SFaltWordPa57            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator16
 *** SFaltWordPa58            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator17
 *** SFaltWordPa59            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator18
 *** SFaltWordPa60            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator19
 *** SFaltWordPa61            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator2
 *** SFaltWordPa62            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator20
 *** SFaltWordPa63            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator21
 *** SFaltWordPa64            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator22
 *** SFaltWordPa65            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator23
 *** SFaltWordPa66            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator24
 *** SFaltWordPa67            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator25
 *** SFaltWordPa68            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator26
 *** SFaltWordPa69            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator27
 *** SFaltWordPa70            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator28
 *** SFaltWordPa71            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator29
 *** SFaltWordPa72            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator3
 *** SFaltWordPa73            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator30
 *** SFaltWordPa74            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator31
 *** SFaltWordPa75            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator4
 *** SFaltWordPa76            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator5
 *** SFaltWordPa77            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator6
 *** SFaltWordPa78            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator7
 *** SFaltWordPa79            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator8
 *** SFaltWordPa80            FaltWordPackGtwmJdc/PackSscFaltEnblConds2/BitwiseLogical Operator9
 *** SFaltWordPa81            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator1
 *** SFaltWordPa82            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator10
 *** SFaltWordPa83            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator11
 *** SFaltWordPa84            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator12
 *** SFaltWordPa85            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator13
 *** SFaltWordPa86            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator14
 *** SFaltWordPa87            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator15
 *** SFaltWordPa88            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator16
 *** SFaltWordPa89            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator17
 *** SFaltWordPa90            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator18
 *** SFaltWordPa91            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator19
 *** SFaltWordPa92            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator2
 *** SFaltWordPa93            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator20
 *** SFaltWordPa94            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator21
 *** SFaltWordPa95            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator22
 *** SFaltWordPa96            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator23
 *** SFaltWordPa97            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator24
 *** SFaltWordPa98            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator25
 *** SFaltWordPa99            FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator26
 *** SFaltWordPa100           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator27
 *** SFaltWordPa101           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator28
 *** SFaltWordPa102           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator29
 *** SFaltWordPa103           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator3
 *** SFaltWordPa104           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator30
 *** SFaltWordPa105           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator31
 *** SFaltWordPa106           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator4
 *** SFaltWordPa107           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator5
 *** SFaltWordPa108           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator6
 *** SFaltWordPa109           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator7
 *** SFaltWordPa110           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator8
 *** SFaltWordPa111           FaltWordPackGtwmJdc/PackSscFaltEnblConds3/BitwiseLogical Operator9
 *** SFaltWordPa112           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator1
 *** SFaltWordPa113           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator10
 *** SFaltWordPa114           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator11
 *** SFaltWordPa115           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator12
 *** SFaltWordPa116           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator13
 *** SFaltWordPa117           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator14
 *** SFaltWordPa118           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator15
 *** SFaltWordPa119           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator16
 *** SFaltWordPa120           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator17
 *** SFaltWordPa121           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator18
 *** SFaltWordPa122           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator19
 *** SFaltWordPa123           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator2
 *** SFaltWordPa124           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator20
 *** SFaltWordPa125           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator21
 *** SFaltWordPa126           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator22
 *** SFaltWordPa127           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator23
 *** SFaltWordPa128           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator24
 *** SFaltWordPa129           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator25
 *** SFaltWordPa130           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator26
 *** SFaltWordPa131           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator27
 *** SFaltWordPa132           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator28
 *** SFaltWordPa133           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator29
 *** SFaltWordPa134           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator3
 *** SFaltWordPa135           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator30
 *** SFaltWordPa136           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator31
 *** SFaltWordPa137           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator4
 *** SFaltWordPa138           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator5
 *** SFaltWordPa139           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator6
 *** SFaltWordPa140           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator7
 *** SFaltWordPa141           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator8
 *** SFaltWordPa142           FaltWordPackGtwmJdc/PackSscFaltEnblConds4/BitwiseLogical Operator9
 *** 
 *** SF-NODE   CORRESPONDING STATEFLOW NODE                           DESCRIPTION
 *** 
 *** TargetLink version      : 2.3 from 05-Mar-2008
 *** Code generator version  : Build Id 2.3.0.17 from 2008-02-07 15:20:42
 *** Copyright (c) 2006 dSPACE GmbH
\**************************************************************************************************/

#ifndef _FALTWORDPACKGTWMJDC_CAL_C_
#define _FALTWORDPACKGTWMJDC_CAL_C_

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/
#include "faltwordpackgtwmjdc_cal.h"
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

#pragma section const_type ".FLASH_CAL_DATA" ".FLASH_CAL_DATA"
/******************************************************************************\
   CAL: global calibratable parameters (ROM) | Width: 8
\******************************************************************************/

__declspec (section ".FLASH_CAL_DATA") 
CAL U8 TRDiagEnbl_B = 1 /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;

__declspec (section ".FLASH_CAL_DATA") 
CAL U8 TrJdcDtcEngRunMsk_B_Enbl_Pt = 1 /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;

__declspec (section ".FLASH_CAL_DATA") 
CAL U8 TrJdcDtcFaltMsgReqMsk_B_Enbl_Pt = 1 /* LSB: 2^0 OFF:  0 MIN/MAX:  0 .. 255 */;

#pragma section ".default"

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

#endif/*_FALTWORDPACKGTWMJDC_CAL_C_ */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
