#ifndef RTW_HEADER_Balancing_Logic_h_
#define RTW_HEADER_Balancing_Logic_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Balancing_Logic_COMMON_INCLUDES_
#define Balancing_Logic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Balancing_Logic_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
typedef struct { real32_T glp0l1ho05 ; uint16_T ccxac5o4kq ; uint8_T
gnyrdmyuxm ; uint8_T ac0tbtqrx2 ; uint8_T i54z0hkjtn ; boolean_T pob3wezsqj ;
} j10xpbsu3na ;
#endif
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
struct lxa3t2om5y0_ { real32_T P_0 ; int16_T P_1 ; int16_T P_2 ; int16_T P_3
; boolean_T P_4 ; } ;
#endif
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
struct cloku3k300 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 3 ] ;
int_T systemTid [ 3 ] ; } DataMapInfo ; } ;
#endif
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
typedef struct { j5fbhmpe40 rtm ; } j3u401rovaa ;
#endif
extern void ke3bmpbgy1 ( boolean_T n0dhexuye5 [ 96 ] ) ; extern void
epo0ltx0d0 ( boolean_T n0dhexuye5 [ 96 ] ) ; extern void Balancing_Logic (
const BMS_State_Enum * enyqnwlxig , const real32_T icxju2bicn [ 96 ] , const
real32_T * ija4kayim5 , const real32_T * ojgf0gssql , boolean_T n0dhexuye5 [
96 ] ) ; extern void fqfmn1ydgn ( void ) ; extern void evmer3ke3c ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Balancing_Logic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Balancing_Logic_GetDWork (
) ; extern void mr_Balancing_Logic_SetDWork ( const mxArray * ssDW ) ; extern
void mr_Balancing_Logic_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Balancing_Logic_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Balancing_Logic_GetCAPIStaticMap ( void ) ;
void mr_Balancing_Logic_CreateInitRestoreData ( ) ; void
mr_Balancing_Logic_CopyFromInitRestoreData ( ) ; void
mr_Balancing_Logic_DestroyInitRestoreData ( ) ;
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
extern j3u401rovaa j3u401rova ;
#endif
#ifndef Balancing_Logic_MDLREF_HIDE_CHILD_
extern j10xpbsu3na ipz30jq5ukn ;
#endif
#endif
