#ifndef RTW_HEADER_BMS_Software_types_h_
#define RTW_HEADER_BMS_Software_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_
typedef enum { SRE_Balancing = 0 , SRE_Charging , SRE_Driving } SRE ;
#endif
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
#ifndef DEFINED_TYPEDEF_FOR_Faults_
#define DEFINED_TYPEDEF_FOR_Faults_
typedef struct { boolean_T VoltSensor ; boolean_T OverCurrent ; boolean_T
HighTemp ; boolean_T LowTemp ; boolean_T OverVolt ; boolean_T UnderVolt ;
boolean_T Charger ; boolean_T Inverter ; } Faults ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SOC_Est_
#define DEFINED_TYPEDEF_FOR_SOC_Est_
typedef struct { real32_T SOC_CC ; real32_T SOC_UKF ; real32_T SOC_EKF ;
uint8_T sl_padding0 [ 4 ] ; } SOC_Est ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Cmd_
#define DEFINED_TYPEDEF_FOR_BMS_Cmd_
typedef struct { CurrentLimits CurrentLimits_Bus ; real32_T ChargeCurrentReq
; uint8_T sl_padding0 [ 4 ] ; Contactors_Cmd ContactorsCmd_Bus ; boolean_T
BalCmd [ 96 ] ; } BMS_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_
typedef enum { BMS_State_Enum_BMS_Standby = 0 , BMS_State_Enum_BMS_Charging ,
BMS_State_Enum_BMS_Driving , BMS_State_Enum_BMS_Fault } BMS_State_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Info_
#define DEFINED_TYPEDEF_FOR_BMS_Info_
typedef struct { Faults Faults_Bus ; BMS_State_Enum BMS_State ; uint8_T
sl_padding0 [ 4 ] ; SOC_Est SOC ; } BMS_Info ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Min_Max_Cells_
#define DEFINED_TYPEDEF_FOR_Min_Max_Cells_
typedef struct { real32_T MinCellVolt ; real32_T MaxCellVolt ; real32_T
MinCellTemp ; real32_T MaxCellTemp ; } Min_Max_Cells ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_x2LFwNpwdYZuwkeIFkH2PB_
#define DEFINED_TYPEDEF_FOR_struct_x2LFwNpwdYZuwkeIFkH2PB_
typedef struct { real_T Cell_Voltages [ 96 ] ; real_T Pack_Voltage ; real_T
Pack_Current ; real_T Cell_Temperatures [ 96 ] ; real_T Vout_Chgr ; real_T
Vout_Invtr ; } struct_x2LFwNpwdYZuwkeIFkH2PB ;
#endif
typedef struct kct10ynowd5_ kct10ynowd5 ; typedef struct mar534cglo
cd3pbbexvj ;
#endif
