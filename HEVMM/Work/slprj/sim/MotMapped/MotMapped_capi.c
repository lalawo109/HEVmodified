#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotMapped_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "MotMapped.h"
#include "MotMapped_capi.h"
#include "MotMapped_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 3 , 0 } , { "PwrTrnsfrd" , 2 , 3 } , { "PwrMtr" , 0 , - 1 } , { "PwrBus" ,
0 , - 1 } , { "PwrNotTrnsfrd" , 1 , 5 } , { "PwrLoss" , 0 , - 1 } , {
"PwrStored" , 1 , 6 } , { "PwrStoredShft" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 4 , 6 , 2 , 3 , 5 , 7 } ; static
rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "MotMapped/Mapped Motor/Mapped Motor Core Speed 2/Maximum Torque and Power /Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void MotMapped_InitializeDataAddr ( void * dataAddr [ ] , p3pfim4mkt *
localDW , fvoqvlb0vw * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
mluv3mwscn ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotMapped_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotMapped_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 8 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 2312033735U , 3811572379U
, 534213192U , 2546577129U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
MotMapped_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void MotMapped_InitializeSystemRan ( hcqe3k1ztj * const hter1htdtu ,
sysRanDType * systemRan [ ] , p3pfim4mkt * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( hter1htdtu ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> mqa4lbhrof ;
systemRan [ 2 ] = ( sysRanDType * ) & localDW -> lub41dpovf ; systemRan [ 3 ]
= ( NULL ) ; systemTid [ 1 ] = hter1htdtu -> Timing . mdlref_GlobalTID [ 0 ]
; systemTid [ 2 ] = hter1htdtu -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid
[ 3 ] = hter1htdtu -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ;
rtContextSystems [ 2 ] = 2 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void MotMapped_InitializeDataMapInfo ( hcqe3k1ztj * const hter1htdtu ,
p3pfim4mkt * localDW , fvoqvlb0vw * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( hter1htdtu -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hter1htdtu -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hter1htdtu -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; MotMapped_InitializeDataAddr ( hter1htdtu ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
hter1htdtu -> DataMapInfo . mmi , hter1htdtu -> DataMapInfo . dataAddress ) ;
MotMapped_InitializeVarDimsAddr ( hter1htdtu -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( hter1htdtu -> DataMapInfo . mmi ,
hter1htdtu -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( hter1htdtu
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( hter1htdtu ->
DataMapInfo . mmi , ( NULL ) ) ; MotMapped_InitializeLoggingFunctions (
hter1htdtu -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
hter1htdtu -> DataMapInfo . mmi , hter1htdtu -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( hter1htdtu -> DataMapInfo . mmi , &
hter1htdtu -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
hter1htdtu -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
hter1htdtu -> DataMapInfo . mmi , 0 ) ; MotMapped_InitializeSystemRan (
hter1htdtu , hter1htdtu -> DataMapInfo . systemRan , localDW , hter1htdtu ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
hter1htdtu -> DataMapInfo . mmi , hter1htdtu -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( hter1htdtu -> DataMapInfo . mmi , hter1htdtu ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( hter1htdtu ->
DataMapInfo . mmi , & hter1htdtu -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void MotMapped_host_InitializeDataMapInfo ( MotMapped_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
