#ifndef RTW_HEADER_State_Machine_h_
#define RTW_HEADER_State_Machine_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef State_Machine_COMMON_INCLUDES_
#define State_Machine_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "State_Machine_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#ifndef State_Machine_MDLREF_HIDE_CHILD_
typedef struct { boolean_T b2gvkvxgn3 ; boolean_T gclxdcakvt ; boolean_T
iy0ln55fj5 ; boolean_T ac3jxwpfx1 ; boolean_T nxtetm4r2d ; boolean_T
bxrgykazcm ; } buucjg4jzbe ;
#endif
#ifndef State_Machine_MDLREF_HIDE_CHILD_
typedef struct { real32_T fwvnnascsv ; MonitorCellTempModeType p5umhx2wcn ;
MonitorCellVoltageModeType g3ovho4wks ; MonitorCurrLimModeType arjqen10jm ;
uint16_T e4sy3fqdib ; uint16_T mqh1sfm55j ; uint16_T pezxrmzyle ; uint8_T
hdxx350g45 ; uint8_T pw5gfjppr2 ; uint8_T d2e404glzo ; uint8_T kwijeafokq ;
uint8_T iyuj4wipng ; uint8_T lveef0fmtt ; uint8_T mehemjhkpq ; uint8_T
m0cvxe2akc ; uint8_T lqq4grf0hg ; boolean_T mc5dz0bxy4 ; Contact ocgymi4aub ;
Contact ny2n0vimot ; } ajo5azz2auj ;
#endif
#ifndef State_Machine_MDLREF_HIDE_CHILD_
struct nphnkzl1z3p_ { real_T P_0 ; real32_T P_1 ; real32_T P_2 ; real32_T P_3
; real32_T P_4 ; real32_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ;
real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; uint16_T P_12 ; uint8_T P_13 ;
uint8_T P_14 ; } ;
#endif
#ifndef State_Machine_MDLREF_HIDE_CHILD_
struct i3du3bnr0k { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; } ;
#endif
#ifndef State_Machine_MDLREF_HIDE_CHILD_
typedef struct { p4isk5qdk5 rtm ; } dqjxrtn4kxw ;
#endif
extern void fbbdju2hyi ( real32_T * fa1b0a12b3 , Contactors_Cmd * mc35bywmc2
, Faults * j4cf21m101 , BMS_State_Enum * nt5rorpg1b ) ; extern void
awd1kde5gy ( real32_T * fa1b0a12b3 , Faults * j4cf21m101 , BMS_State_Enum *
nt5rorpg1b ) ; extern void State_Machine ( const SRE * jg5y0voasf , const
real32_T edvo1h4h5d [ 96 ] , const real32_T * dh2300l5l2 , const real32_T *
lufgeyu1q4 , const real32_T * i1fk1kqhye , const real32_T * jessxdgyjk ,
const real32_T * kvr4iguryb , const real32_T * pglwzlktfp , const real32_T *
jyfgdhef1c , const real32_T * dv5h5mzyst , const real32_T * lff5okeqnz ,
const real32_T * g2rhhq2a5z , real32_T * fa1b0a12b3 , Contactors_Cmd *
mc35bywmc2 , Faults * j4cf21m101 , BMS_State_Enum * nt5rorpg1b ) ; extern
void nvavifp0ml ( void ) ; extern void co3mxuet1t ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_State_Machine_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_State_Machine_GetDWork ( ) ; extern
void mr_State_Machine_SetDWork ( const mxArray * ssDW ) ; extern void
mr_State_Machine_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_State_Machine_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * State_Machine_GetCAPIStaticMap ( void ) ;
void mr_State_Machine_CreateInitRestoreData ( ) ; void
mr_State_Machine_CopyFromInitRestoreData ( ) ; void
mr_State_Machine_DestroyInitRestoreData ( ) ;
#ifndef State_Machine_MDLREF_HIDE_CHILD_
extern dqjxrtn4kxw dqjxrtn4kx ;
#endif
#ifndef State_Machine_MDLREF_HIDE_CHILD_
extern buucjg4jzbe guzb1fdrpj0 ; extern ajo5azz2auj o5dhcpjtr50 ;
#endif
#endif
