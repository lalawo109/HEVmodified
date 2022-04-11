#ifndef RTW_HEADER_SOC_Estimation_types_h_
#define RTW_HEADER_SOC_Estimation_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_
typedef enum { BMS_State_Enum_BMS_Standby = 0 , BMS_State_Enum_BMS_Charging ,
BMS_State_Enum_BMS_Driving , BMS_State_Enum_BMS_Fault } BMS_State_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Sensors_
#define DEFINED_TYPEDEF_FOR_Sensors_
typedef struct { real32_T Cell_Voltages [ 96 ] ; real32_T Pack_Voltage ;
real32_T Pack_Current ; real32_T Cell_Temperatures [ 96 ] ; real32_T
Vout_Chgr ; real32_T Vout_Invtr ; } Sensors ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SOC_Est_
#define DEFINED_TYPEDEF_FOR_SOC_Est_
typedef struct { real32_T SOC_CC ; real32_T SOC_UKF ; real32_T SOC_EKF ;
uint8_T sl_padding0 [ 4 ] ; } SOC_Est ;
#endif
typedef struct jy3u04is5jr_ jy3u04is5jr ; typedef struct omhym1uzw2
egzjadadgd ;
#endif
