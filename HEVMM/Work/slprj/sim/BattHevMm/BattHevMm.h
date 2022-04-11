#ifndef RTW_HEADER_BattHevMm_h_
#define RTW_HEADER_BattHevMm_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef BattHevMm_COMMON_INCLUDES_
#define BattHevMm_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BattHevMm_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_nonfinite.h"
typedef struct { real_T n0rpj5rcgh ; real_T c22pbptsnf ; } j0hpr535lk ;
typedef struct { struct { void * AQHandles ; } cs0erbyoyh ; struct { void *
AQHandles ; } m15skubwpp ; struct { void * AQHandles ; } blm3siebjb ; struct
{ void * AQHandles [ 3 ] ; } idqcwcjg24 ; int_T jq13d535s1 ; } aiol3revnb ;
typedef struct { real_T hmvfqsu5wh ; } ahbh01difx ; typedef struct { real_T
hmvfqsu5wh ; } kjnstpjdkn ; typedef struct { boolean_T hmvfqsu5wh ; }
fdo24kusxm ; typedef struct { real_T hmvfqsu5wh ; } ejunarqxez ; typedef
struct { real_T hmvfqsu5wh ; } ksfskbyr5n ; typedef struct { real_T
hmvfqsu5wh ; } m3k3in34ym ; struct elhcfziqcue_ { real_T P_0 ; real_T P_1 ;
real_T P_2 [ 7 ] ; real_T P_3 [ 101 ] ; real_T P_4 [ 6 ] ; real_T P_5 [ 101 ]
; real_T P_6 ; real_T P_7 ; real_T P_8 [ 42 ] ; real_T P_9 ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; uint32_T P_13 [ 2 ] ; } ; struct csd0qqers3 {
struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { j0hpr535lk rtb ; aiol3revnb rtdw ;
oqhewvyiic rtm ; } aev4z3ymkhk ; extern void libtzjlftt ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , oqhewvyiic * const
b2ubf10tlp , j0hpr535lk * localB , aiol3revnb * localDW , ahbh01difx * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_BattHevMm_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_BattHevMm_GetDWork ( const
aev4z3ymkhk * mdlrefDW ) ; extern void mr_BattHevMm_SetDWork ( aev4z3ymkhk *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_BattHevMm_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_BattHevMm_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BattHevMm_GetCAPIStaticMap ( void ) ; extern
void lykrquuurp ( oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW ) ;
extern void dtg4uwheoz ( oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW
, ahbh01difx * localX ) ; extern void kr3mejrg3b ( oqhewvyiic * const
b2ubf10tlp , aiol3revnb * localDW , ahbh01difx * localX ) ; extern void
ltjmpmh3vs ( oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW ) ; extern
void fy4wq5pzqc ( j0hpr535lk * localB , ahbh01difx * localX , kjnstpjdkn *
localXdot ) ; extern void p5w5cdbq1y ( aiol3revnb * localDW ) ; extern void
p5w5cdbq1yTID1 ( void ) ; extern void BattHevMm ( oqhewvyiic * const
b2ubf10tlp , const real_T * p0yeivbp1m , const real_T * ahovmp4o0h , real_T *
a2pxy2ekwb , real_T * ok4qgztbx1 , j0hpr535lk * localB , aiol3revnb * localDW
, ahbh01difx * localX ) ; extern void BattHevMmTID1 ( j0hpr535lk * localB ) ;
extern void lnhjatm04o ( oqhewvyiic * const b2ubf10tlp ) ;
#endif
