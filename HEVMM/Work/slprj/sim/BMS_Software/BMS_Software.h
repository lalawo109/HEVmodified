#ifndef RTW_HEADER_BMS_Software_h_
#define RTW_HEADER_BMS_Software_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef BMS_Software_COMMON_INCLUDES_
#define BMS_Software_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BMS_Software_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
#define CurrPowerLimCalc_MDLREF_HIDE_CHILD_
#endif
#include "CurrPowerLimCalc.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
#define State_Machine_MDLREF_HIDE_CHILD_
#endif
#include "State_Machine.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
#define SOC_Estimation_MDLREF_HIDE_CHILD_
#endif
#include "SOC_Estimation.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
#define Balancing_Logic_MDLREF_HIDE_CHILD_
#endif
#include "Balancing_Logic.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
#define BMS_Out_MDLREF_HIDE_CHILD_
#endif
#include "BMS_Out.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
typedef struct { Sensors jq0ossisql ; Min_Max_Cells bl4hjm2him ; Faults
evha2hdvlk ; CurrentLimits n2uw5uk3rh ; Contactors_Cmd p1dlvucvoj ; real32_T
aoyum4feu4 ; real32_T jkwwg3gcab ; real32_T agcfvy5100 ; real32_T grtefm4hbc
; real32_T e44twu5nes [ 96 ] ; real32_T apmmzkn5yt ; real32_T dkwllhtqsa ;
BMS_State_Enum pxfbuczwdr ; BMS_State_Enum pf0xdiiedd ; boolean_T nu2sri2lsl
[ 96 ] ; } ileupueoitq ;
#endif
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
typedef struct { Sensors mxdhgdid02 ; real32_T n2ameds1fm [ 96 ] ; real32_T
i2tf05hw2l ; real32_T o0s3ih4c5l ; BMS_State_Enum bbwsqcmbyb ; } dwxujua4he2
;
#endif
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
struct kct10ynowd5_ { Sensors P_1 ; } ;
#endif
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
struct mar534cglo { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; rtwCAPI_ModelMappingInfo * childMMI
[ 5 ] ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo
; } ;
#endif
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
typedef struct { cd3pbbexvj rtm ; } hcoepnnprex ;
#endif
extern real_T rtP_BattSocInit ; extern void nzo0dhvfq4 ( void ) ; extern void
hy4zrtbl2l ( void ) ; extern void igzgwxk4wl ( void ) ; extern void
hvmwpriba1 ( void ) ; extern void bi1sv5wb4n ( void ) ; extern void
bzlntq4fju ( const Sensors * bw0jkduw4i ) ; extern void bzlntq4fjuTID2 ( void
) ; extern void BMS_Software ( const SRE * mzvuetpgie , boolean_T *
hxpjmzven2 , boolean_T * cll2qfmtgx , boolean_T * d2mkyedv2u , boolean_T *
af0zpblzf1 , boolean_T * enfplctspi , boolean_T * nzrfu2eq1r , boolean_T *
ku42qe24ds , boolean_T * fy1of2hhab , BMS_State_Enum * ovrgqo2r22 , real32_T
* cthtzpvx1t , real32_T * duqyf0i5jd , real32_T * crgbjxocb1 , BMS_Cmd *
kkomik0owi ) ; extern void BMS_SoftwareTID2 ( void ) ; extern void hwt4nru52w
( void ) ; extern void gwi0ifigyi ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_BMS_Software_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_BMS_Software_GetDWork ( ) ; extern
void mr_BMS_Software_SetDWork ( const mxArray * ssDW ) ; extern void
mr_BMS_Software_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_BMS_Software_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BMS_Software_GetCAPIStaticMap ( void ) ;
extern const Sensors BMS_Software_rtZSensors ; extern const CurrentLimits
BMS_Software_rtZCurrentLimits ; extern const Min_Max_Cells
BMS_Software_rtZMin_Max_Cells ; void mr_BMS_Software_CreateInitRestoreData (
) ; void mr_BMS_Software_CopyFromInitRestoreData ( ) ; void
mr_BMS_Software_DestroyInitRestoreData ( ) ;
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
extern hcoepnnprex hcoepnnpre ;
#endif
#ifndef BMS_Software_MDLREF_HIDE_CHILD_
extern ileupueoitq gss51yw2wvo ; extern dwxujua4he2 klvauzhxrgs ;
#endif
#endif
