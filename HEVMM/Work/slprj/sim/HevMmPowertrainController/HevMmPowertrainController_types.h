#ifndef RTW_HEADER_HevMmPowertrainController_types_h_
#define RTW_HEADER_HevMmPowertrainController_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_Sensors_
#define DEFINED_TYPEDEF_FOR_Sensors_
typedef struct { real32_T Cell_Voltages [ 96 ] ; real32_T Pack_Voltage ;
real32_T Pack_Current ; real32_T Cell_Temperatures [ 96 ] ; real32_T
Vout_Chgr ; real32_T Vout_Invtr ; } Sensors ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_CurrentLimits_
#define DEFINED_TYPEDEF_FOR_CurrentLimits_
typedef struct { real32_T DischargeCurrentLimit ; real32_T ChargeCurrentLimit
; } CurrentLimits ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Contactors_Cmd_
#define DEFINED_TYPEDEF_FOR_Contactors_Cmd_
typedef struct { boolean_T PosContactorChgrCmd ; boolean_T
PreChargeRelayChgrCmd ; boolean_T NegContactorChgrCmd ; boolean_T
PosContactorInvtrCmd ; boolean_T PreChargeRelayInvtrCmd ; boolean_T
NegContactorInvtrCmd ; uint8_T sl_padding0 [ 2 ] ; } Contactors_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Cmd_
#define DEFINED_TYPEDEF_FOR_BMS_Cmd_
typedef struct { CurrentLimits CurrentLimits_Bus ; real32_T ChargeCurrentReq
; uint8_T sl_padding0 [ 4 ] ; Contactors_Cmd ContactorsCmd_Bus ; boolean_T
BalCmd [ 96 ] ; } BMS_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_yDYxwvnHQNPNUzhao2Ffv_
#define DEFINED_TYPEDEF_FOR_struct_yDYxwvnHQNPNUzhao2Ffv_
typedef struct { real_T pwr [ 17 ] ; real_T spd [ 17 ] ; real_T bsfc [ 17 ] ;
real_T trq [ 17 ] ; real_T idle ; real_T ff [ 17 ] ; real_T pwrin [ 17 ] ; }
struct_yDYxwvnHQNPNUzhao2Ffv ;
#endif
typedef struct n0qkx5oe1w5_ n0qkx5oe1w5 ; typedef struct i4u3s0tmp5
hqx1fw3xj1 ;
#endif
