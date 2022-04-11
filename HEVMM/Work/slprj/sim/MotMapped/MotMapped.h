#ifndef RTW_HEADER_MotMapped_h_
#define RTW_HEADER_MotMapped_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef MotMapped_COMMON_INCLUDES_
#define MotMapped_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "MotMapped_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T ab0a3qipyd ; real_T mtzjssuiwd ; real_T gdpaenpebu ;
real_T a01gtbkkdc ; real_T hhopagdbiz ; } fesxlu2cqn ; typedef struct {
struct { void * AQHandles [ 4 ] ; } bqkpczylct ; int_T eaomksp2zq ; int_T
kkpi1trwxl ; int_T iq5t2gf0jd ; int8_T cyu30i43yo ; int8_T lub41dpovf ;
int8_T mqa4lbhrof ; } p3pfim4mkt ; typedef struct { real_T mluv3mwscn ; }
fvoqvlb0vw ; typedef struct { real_T mluv3mwscn ; } hwxdbzcwm2 ; typedef
struct { boolean_T mluv3mwscn ; } czngammeul ; typedef struct { real_T
mluv3mwscn ; } dneg4jgxjv ; typedef struct { real_T mluv3mwscn ; } cksvq3uzbl
; typedef struct { real_T mluv3mwscn ; } enublvxoqe ; typedef struct { real_T
mqqhqf2htr ; real_T aah1s0dqga ; real_T n422n1zgew ; real_T kl3wovbbut ;
real_T ddtnztynje ; real_T mevnnkofho ; } dgt5cze35z ; struct ne3uetlgnj0_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 [
2 ] ; real_T P_6 [ 2 ] ; real_T P_7 ; real_T P_8 ; real_T P_9 [ 812 ] ;
real_T P_10 [ 29 ] ; real_T P_11 [ 28 ] ; real_T P_12 ; real_T P_13 ; real_T
P_14 ; real_T P_15 ; real_T P_16 ; uint32_T P_17 [ 2 ] ; } ; struct
cbigzvtaaz { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf1 ;
uint8_T rtmDbBufWriteBuf1 ; boolean_T rtmDbBufLastBufWr1 ; real_T
rtmDbBufContT1 [ 2 ] ; int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef
struct { fesxlu2cqn rtb ; p3pfim4mkt rtdw ; hcqe3k1ztj rtm ; } onutnyysg3s ;
extern void hnzlyhuasb ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , hcqe3k1ztj * const hter1htdtu , fesxlu2cqn * localB ,
p3pfim4mkt * localDW , fvoqvlb0vw * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MotMapped_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName ,
int_T * retVal ) ; extern mxArray * mr_MotMapped_GetDWork ( const onutnyysg3s
* mdlrefDW ) ; extern void mr_MotMapped_SetDWork ( onutnyysg3s * mdlrefDW ,
const mxArray * ssDW ) ; extern void mr_MotMapped_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray * mr_MotMapped_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo * MotMapped_GetCAPIStaticMap
( void ) ; extern void hxkjqrn0kl ( hcqe3k1ztj * const hter1htdtu ,
p3pfim4mkt * localDW ) ; extern void pa4dbrumgk ( real_T * aaox3jyzkc ,
fvoqvlb0vw * localX ) ; extern void jrtirprga3 ( fvoqvlb0vw * localX ) ;
extern void mpjkcetq2f ( hcqe3k1ztj * const hter1htdtu , p3pfim4mkt * localDW
) ; extern void ozsrtfbibi ( hcqe3k1ztj * const hter1htdtu , p3pfim4mkt *
localDW ) ; extern void d301sj0o4r ( fesxlu2cqn * localB , hwxdbzcwm2 *
localXdot ) ; extern void e44455tvs0 ( const real_T * d2nufeekey , const
real_T * dvnnnhlsvt , fesxlu2cqn * localB , p3pfim4mkt * localDW , dgt5cze35z
* localZCSV ) ; extern void dqwx4mwrox ( hcqe3k1ztj * const hter1htdtu ,
p3pfim4mkt * localDW ) ; extern void gmfgesfzttTID1 ( void ) ; extern void
MotMapped ( hcqe3k1ztj * const hter1htdtu , const real_T * gd4c12i1sj , const
real_T * d2nufeekey , const real_T * dvnnnhlsvt , real_T * aaox3jyzkc ,
real_T * evc0omvrjb , fesxlu2cqn * localB , p3pfim4mkt * localDW , fvoqvlb0vw
* localX ) ; extern void MotMappedTID1 ( hcqe3k1ztj * const hter1htdtu ,
fesxlu2cqn * localB , p3pfim4mkt * localDW ) ; extern void i3bhu0iqew (
hcqe3k1ztj * const hter1htdtu ) ;
#endif
