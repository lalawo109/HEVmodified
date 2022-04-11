#ifndef RTW_HEADER_CurrPowerLimCalc_types_h_
#define RTW_HEADER_CurrPowerLimCalc_types_h_
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
#ifndef DEFINED_TYPEDEF_FOR_Min_Max_Cells_
#define DEFINED_TYPEDEF_FOR_Min_Max_Cells_
typedef struct { real32_T MinCellVolt ; real32_T MaxCellVolt ; real32_T
MinCellTemp ; real32_T MaxCellTemp ; } Min_Max_Cells ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MinCellVoltDchrgCurrentLimTable_
#define DEFINED_TYPEDEF_FOR_MinCellVoltDchrgCurrentLimTable_
typedef struct { real32_T MinCellVoltage [ 3 ] ; real32_T
DischargeCurrentRate [ 3 ] ; } MinCellVoltDchrgCurrentLimTable ;
#endif
typedef struct laetnnrxsil_ laetnnrxsil ; typedef struct lyxcuhrej1
ajbfpygfl2 ;
#endif
