#ifndef RTW_HEADER_BMS_Out_types_h_
#define RTW_HEADER_BMS_Out_types_h_
#include "rtwtypes.h"
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
#ifndef DEFINED_TYPEDEF_FOR_Faults_
#define DEFINED_TYPEDEF_FOR_Faults_
typedef struct { boolean_T VoltSensor ; boolean_T OverCurrent ; boolean_T
HighTemp ; boolean_T LowTemp ; boolean_T OverVolt ; boolean_T UnderVolt ;
boolean_T Charger ; boolean_T Inverter ; } Faults ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_
typedef enum { BMS_State_Enum_BMS_Standby = 0 , BMS_State_Enum_BMS_Charging ,
BMS_State_Enum_BMS_Driving , BMS_State_Enum_BMS_Fault } BMS_State_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SOC_Est_
#define DEFINED_TYPEDEF_FOR_SOC_Est_
typedef struct { real32_T SOC_CC ; real32_T SOC_UKF ; real32_T SOC_EKF ;
uint8_T sl_padding0 [ 4 ] ; } SOC_Est ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Info_
#define DEFINED_TYPEDEF_FOR_BMS_Info_
typedef struct { Faults Faults_Bus ; BMS_State_Enum BMS_State ; uint8_T
sl_padding0 [ 4 ] ; SOC_Est SOC ; } BMS_Info ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Cmd_
#define DEFINED_TYPEDEF_FOR_BMS_Cmd_
typedef struct { CurrentLimits CurrentLimits_Bus ; real32_T ChargeCurrentReq
; uint8_T sl_padding0 [ 4 ] ; Contactors_Cmd ContactorsCmd_Bus ; boolean_T
BalCmd [ 96 ] ; } BMS_Cmd ;
#endif
typedef struct gzm11elq4x hlrpif31cr ;
#endif
