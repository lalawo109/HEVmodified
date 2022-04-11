#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "GenMapped_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "GenMapped.h"
#include "GenMapped_capi.h"
#include "GenMapped_private.h"
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
 "GenMapped/Mapped Generator/Mapped Motor Core Speed 2/Maximum Torque and Power /Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void GenMapped_InitializeDataAddr ( void * dataAddr [ ] , nqpjsgqmfb *
localDW , p0m0rjpmhn * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
cfnw0dcqkl ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void GenMapped_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void GenMapped_InitializeLoggingFunctions ( RTWLoggingFcnPtr
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
rtSampleTimeMap , rtDimensionArray } , "float" , { 1724958030U , 2143725448U
, 2289366426U , 4049586593U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
GenMapped_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void GenMapped_InitializeSystemRan ( posc2i5pah * const m2x1s10cgs ,
sysRanDType * systemRan [ ] , nqpjsgqmfb * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( m2x1s10cgs ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> dyyijttbta ;
systemRan [ 2 ] = ( sysRanDType * ) & localDW -> bhnjcoe3zj ; systemRan [ 3 ]
= ( NULL ) ; systemTid [ 1 ] = m2x1s10cgs -> Timing . mdlref_GlobalTID [ 0 ]
; systemTid [ 2 ] = m2x1s10cgs -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid
[ 3 ] = m2x1s10cgs -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 1 ;
rtContextSystems [ 2 ] = 2 ; rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void GenMapped_InitializeDataMapInfo ( posc2i5pah * const m2x1s10cgs ,
nqpjsgqmfb * localDW , p0m0rjpmhn * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( m2x1s10cgs -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( m2x1s10cgs -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( m2x1s10cgs -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; GenMapped_InitializeDataAddr ( m2x1s10cgs ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
m2x1s10cgs -> DataMapInfo . mmi , m2x1s10cgs -> DataMapInfo . dataAddress ) ;
GenMapped_InitializeVarDimsAddr ( m2x1s10cgs -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( m2x1s10cgs -> DataMapInfo . mmi ,
m2x1s10cgs -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( m2x1s10cgs
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( m2x1s10cgs ->
DataMapInfo . mmi , ( NULL ) ) ; GenMapped_InitializeLoggingFunctions (
m2x1s10cgs -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
m2x1s10cgs -> DataMapInfo . mmi , m2x1s10cgs -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( m2x1s10cgs -> DataMapInfo . mmi , &
m2x1s10cgs -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
m2x1s10cgs -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
m2x1s10cgs -> DataMapInfo . mmi , 0 ) ; GenMapped_InitializeSystemRan (
m2x1s10cgs , m2x1s10cgs -> DataMapInfo . systemRan , localDW , m2x1s10cgs ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
m2x1s10cgs -> DataMapInfo . mmi , m2x1s10cgs -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( m2x1s10cgs -> DataMapInfo . mmi , m2x1s10cgs ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( m2x1s10cgs ->
DataMapInfo . mmi , & m2x1s10cgs -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void GenMapped_host_InitializeDataMapInfo ( GenMapped_host_DataMapInfo_T *
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
