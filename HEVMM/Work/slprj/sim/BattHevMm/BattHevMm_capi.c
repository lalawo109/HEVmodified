#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BattHevMm_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "BattHevMm.h"
#include "BattHevMm_capi.h"
#include "BattHevMm_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 3 , 0 } , { "PwrTrnsfrd" , 1 , 3 } , { "PwrLdBatt" , 0 , - 1 } , {
"PwrNotTrnsfrd" , 1 , 4 } , { "PwrLossBatt" , 0 , - 1 } , { "PwrStored" , 1 ,
5 } , { "PwrStoredBatt" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 3 , 5 , 2 , 4 , 6 } ; static
rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "BattHevMm/Lithium Ion Battery Pack/Datasheet Battery Internal/Datasheet Battery/Charge Model/Integrator\nLimited"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void BattHevMm_InitializeDataAddr ( void * dataAddr [ ] , aiol3revnb *
localDW , ahbh01difx * localX ) { dataAddr [ 0 ] = ( void * ) ( & localX ->
hmvfqsu5wh ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattHevMm_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] ) {
vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BattHevMm_InitializeLoggingFunctions ( RTWLoggingFcnPtr
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
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 7 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 178186071U , 3523894066U ,
1675699559U , 2599566414U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
BattHevMm_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BattHevMm_InitializeSystemRan ( oqhewvyiic * const b2ubf10tlp ,
sysRanDType * systemRan [ ] , aiol3revnb * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( b2ubf10tlp ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ] = b2ubf10tlp ->
Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BattHevMm_InitializeDataMapInfo ( oqhewvyiic * const b2ubf10tlp ,
aiol3revnb * localDW , ahbh01difx * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( b2ubf10tlp -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( b2ubf10tlp -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( b2ubf10tlp -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; BattHevMm_InitializeDataAddr ( b2ubf10tlp ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
b2ubf10tlp -> DataMapInfo . mmi , b2ubf10tlp -> DataMapInfo . dataAddress ) ;
BattHevMm_InitializeVarDimsAddr ( b2ubf10tlp -> DataMapInfo . vardimsAddress
) ; rtwCAPI_SetVarDimsAddressMap ( b2ubf10tlp -> DataMapInfo . mmi ,
b2ubf10tlp -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath ( b2ubf10tlp
-> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( b2ubf10tlp ->
DataMapInfo . mmi , ( NULL ) ) ; BattHevMm_InitializeLoggingFunctions (
b2ubf10tlp -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs (
b2ubf10tlp -> DataMapInfo . mmi , b2ubf10tlp -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( b2ubf10tlp -> DataMapInfo . mmi , &
b2ubf10tlp -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
b2ubf10tlp -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
b2ubf10tlp -> DataMapInfo . mmi , 0 ) ; BattHevMm_InitializeSystemRan (
b2ubf10tlp , b2ubf10tlp -> DataMapInfo . systemRan , localDW , b2ubf10tlp ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
b2ubf10tlp -> DataMapInfo . mmi , b2ubf10tlp -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( b2ubf10tlp -> DataMapInfo . mmi , b2ubf10tlp ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( b2ubf10tlp ->
DataMapInfo . mmi , & b2ubf10tlp -> Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BattHevMm_host_InitializeDataMapInfo ( BattHevMm_host_DataMapInfo_T *
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
