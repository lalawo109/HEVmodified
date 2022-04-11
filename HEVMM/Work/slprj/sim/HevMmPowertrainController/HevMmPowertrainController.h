#ifndef RTW_HEADER_HevMmPowertrainController_h_
#define RTW_HEADER_HevMmPowertrainController_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef HevMmPowertrainController_COMMON_INCLUDES_
#define HevMmPowertrainController_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HevMmPowertrainController_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T ledk0gmzl4 ; real_T grtdoatb3j ; real_T amdacivr3o ;
real_T mql0uilfup ; } gwl0mpqxz3 ; typedef struct { real_T o5uw0yzrm5 ;
real_T j3mp5zo0a3 ; real_T empybbqpsj ; real_T jun5l1pjvk ; real_T poqrn5ogpe
; real_T ehe42mkfen ; real_T k4zr4prqlp ; struct { void * AQHandles ; }
dtskx0g4pv ; boolean_T pheumjcmyp ; } b1tiekhjf1 ; typedef struct { const
real_T oofcsr5te3 ; } czss4kubov ; struct n0qkx5oe1w5_ { real_T P_0 ; real_T
P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 [ 17 ] ; real_T P_5 [ 17 ] ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11
; real_T P_12 ; real_T P_13 [ 180 ] ; real_T P_14 [ 12 ] ; real_T P_15 [ 15 ]
; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 [ 12 ] ; real_T P_20
[ 12 ] ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25
[ 2 ] ; real_T P_26 [ 2 ] ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T
P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 [ 17 ] ; real_T P_34 [ 17 ] ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 [ 2 ] ;
real_T P_40 [ 2 ] ; real_T P_41 ; real_T P_42 [ 2 ] ; real_T P_43 [ 2 ] ;
real_T P_44 ; real_T P_45 [ 2 ] ; real_T P_46 [ 2 ] ; real_T P_47 ; real_T
P_48 [ 2 ] ; real_T P_49 [ 2 ] ; real_T P_50 ; real_T P_51 ; real_T P_52 [ 2
] ; real_T P_53 [ 2 ] ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57
[ 2 ] ; real_T P_58 [ 2 ] ; real_T P_59 ; real_T P_60 [ 2 ] ; real_T P_61 [ 2
] ; real_T P_62 ; real_T P_63 [ 12 ] ; real_T P_64 [ 12 ] ; real_T P_65 [ 2 ]
; real_T P_66 [ 2 ] ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ;
real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T
P_76 ; real_T P_77 ; real_T P_78 ; real32_T P_79 ; real32_T P_80 ; uint32_T
P_81 [ 2 ] ; } ; struct i4u3s0tmp5 { struct SimStruct_tag * _mdlRefSfcnS ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 7 ] ; int32_T * vardimsAddress [ 7
] ; RTWLoggingFcnPtr loggingPtrs [ 7 ] ; sysRanDType * systemRan [ 14 ] ;
int_T systemTid [ 14 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2
] ; } Timing ; } ; typedef struct { gwl0mpqxz3 rtb ; b1tiekhjf1 rtdw ;
hqx1fw3xj1 rtm ; } atgt3z3mrxh ; extern void lwlfu1onas ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , hqx1fw3xj1 * const
eccp0szuqa , gwl0mpqxz3 * localB , b1tiekhjf1 * localDW , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_HevMmPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_HevMmPowertrainController_GetDWork ( const atgt3z3mrxh * mdlrefDW ) ;
extern void mr_HevMmPowertrainController_SetDWork ( atgt3z3mrxh * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_HevMmPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_HevMmPowertrainController_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
HevMmPowertrainController_GetCAPIStaticMap ( void ) ; extern void oyw30ws1da
( hqx1fw3xj1 * const eccp0szuqa , b1tiekhjf1 * localDW ) ; extern void
h1hwxc25iw ( b1tiekhjf1 * localDW ) ; extern void gdwj4teckx ( b1tiekhjf1 *
localDW ) ; extern void icfbyt3aci ( hqx1fw3xj1 * const eccp0szuqa ,
b1tiekhjf1 * localDW ) ; extern void n235oatvlv ( const real_T * abzljv03gm ,
const real_T * k05qaunm44 , const real_T * f2boldociz , const real_T *
jorakerji0 , const real_T * lwsagdc05s , gwl0mpqxz3 * localB , b1tiekhjf1 *
localDW ) ; extern void n235oatvlvTID1 ( void ) ; extern void
HevMmPowertrainController ( hqx1fw3xj1 * const eccp0szuqa , const real_T *
abzljv03gm , const real_T * nxoapk5ikb , const real32_T * m20ioenler , const
real32_T * dw03ibqjkm , const real32_T * b2nm3ek32u , real_T * f3ztcpm4iw ,
real_T * lrlt51wqwo , real_T * gojjgsaoxh , real_T * omunnrr3xx , gwl0mpqxz3
* localB , b1tiekhjf1 * localDW ) ; extern void HevMmPowertrainControllerTID1
( gwl0mpqxz3 * localB ) ; extern void mcbdlpfmvz ( hqx1fw3xj1 * const
eccp0szuqa ) ;
#endif
