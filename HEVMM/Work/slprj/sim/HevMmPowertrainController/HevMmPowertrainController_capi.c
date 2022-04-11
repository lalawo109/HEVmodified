#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HevMmPowertrainController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "HevMmPowertrainController.h"
#include "HevMmPowertrainController_capi.h"
#include "HevMmPowertrainController_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"HevMmPowertrainController/Motor Speed Input Filter\nTime Constant 50ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1
, - 1 , TARGET_STRING (
"HevMmPowertrainController/Generator Controls/Engine Speed Input Filter" ) ,
TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , -
1 , TARGET_STRING (
 "HevMmPowertrainController/Motor and Brake Controls/Brake Input Filter\nTime Constant 50ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3
, - 1 , TARGET_STRING (
 "HevMmPowertrainController/Motor and Brake Controls/Friction Brake Command Filter\nTime constant 100ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4
, - 1 , TARGET_STRING (
 "HevMmPowertrainController/Motor and Brake Controls/Motor Torque Command Filter\nTime constant 100ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5
, - 1 , TARGET_STRING (
 "HevMmPowertrainController/Motor and Brake Controls/Vehicle Speed Input Filter\nTime Constant 50ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 6
, - 1 , TARGET_STRING (
 "HevMmPowertrainController/HEV Supervisory Control/Motor and Engine Torque Split Supervisory Control/Acc Input Filter\nTime Constant 50ms @Ts"
) , TARGET_STRING ( "states" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0
, - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } }
; static int_T rt_LoggedStateIdxList [ ] = { 2 , 0 , 3 , 4 , 6 , 5 , 1 } ;
#ifndef HOST_CAPI_BUILD
static void HevMmPowertrainController_InitializeDataAddr ( void * dataAddr [
] , b1tiekhjf1 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
empybbqpsj ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> o5uw0yzrm5 ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> jun5l1pjvk ) ; dataAddr [ 3 ] = (
void * ) ( & localDW -> poqrn5ogpe ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> k4zr4prqlp ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
ehe42mkfen ) ; dataAddr [ 6 ] = ( void * ) ( & localDW -> j3mp5zo0a3 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HevMmPowertrainController_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void HevMmPowertrainController_InitializeLoggingFunctions (
RTWLoggingFcnPtr loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ;
loggingPtrs [ 1 ] = ( NULL ) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3
] = ( NULL ) ; loggingPtrs [ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ;
loggingPtrs [ 6 ] = ( NULL ) ; }
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
} ; static const real_T rtcapiStoredFloats [ ] = { 0.2 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 14 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 14 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 7 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3266520773U , 2219462364U , 209247582U , 1997137981U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * HevMmPowertrainController_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void HevMmPowertrainController_InitializeSystemRan ( hqx1fw3xj1 *
const eccp0szuqa , sysRanDType * systemRan [ ] , b1tiekhjf1 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
eccp0szuqa ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan
[ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ;
systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ]
= ( NULL ) ; systemTid [ 1 ] = rootTid ; systemTid [ 2 ] = rootTid ;
systemTid [ 3 ] = rootTid ; systemTid [ 4 ] = rootTid ; systemTid [ 5 ] =
rootTid ; systemTid [ 6 ] = rootTid ; systemTid [ 7 ] = rootTid ; systemTid [
8 ] = rootTid ; systemTid [ 9 ] = rootTid ; systemTid [ 10 ] = rootTid ;
systemTid [ 11 ] = rootTid ; systemTid [ 12 ] = rootTid ; systemTid [ 13 ] =
rootTid ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ;
rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ; rtContextSystems [
3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [ 5 ] = 0 ;
rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ; rtContextSystems [
8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [ 10 ] = 0 ;
rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ; rtContextSystems
[ 13 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void HevMmPowertrainController_InitializeDataMapInfo ( hqx1fw3xj1 * const
eccp0szuqa , b1tiekhjf1 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( eccp0szuqa -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( eccp0szuqa -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( eccp0szuqa -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; HevMmPowertrainController_InitializeDataAddr (
eccp0szuqa -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( eccp0szuqa -> DataMapInfo . mmi , eccp0szuqa ->
DataMapInfo . dataAddress ) ; HevMmPowertrainController_InitializeVarDimsAddr
( eccp0szuqa -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap
( eccp0szuqa -> DataMapInfo . mmi , eccp0szuqa -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetPath ( eccp0szuqa -> DataMapInfo . mmi , ( NULL
) ) ; rtwCAPI_SetFullPath ( eccp0szuqa -> DataMapInfo . mmi , ( NULL ) ) ;
HevMmPowertrainController_InitializeLoggingFunctions ( eccp0szuqa ->
DataMapInfo . loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( eccp0szuqa ->
DataMapInfo . mmi , eccp0szuqa -> DataMapInfo . loggingPtrs ) ;
rtwCAPI_SetInstanceLoggingInfo ( eccp0szuqa -> DataMapInfo . mmi , &
eccp0szuqa -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
eccp0szuqa -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
eccp0szuqa -> DataMapInfo . mmi , 0 ) ;
HevMmPowertrainController_InitializeSystemRan ( eccp0szuqa , eccp0szuqa ->
DataMapInfo . systemRan , localDW , eccp0szuqa -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( eccp0szuqa -> DataMapInfo .
mmi , eccp0szuqa -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
eccp0szuqa -> DataMapInfo . mmi , eccp0szuqa -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( eccp0szuqa -> DataMapInfo . mmi , & eccp0szuqa ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void HevMmPowertrainController_host_InitializeDataMapInfo (
HevMmPowertrainController_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL
) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
