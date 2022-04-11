#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SOC_Estimation_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "SOC_Estimation.h"
#include "SOC_Estimation_capi.h"
#include "SOC_Estimation_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 16 , TARGET_STRING (
"SOC_Estimation/Coulomb Counting" ) , TARGET_STRING ( "SOC_CC" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 14 , TARGET_STRING ( "SOC_Estimation/UKF_EKF_1TC" ) ,
TARGET_STRING ( "SOC_UKF" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 6 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC" ) , TARGET_STRING ( "SOC_EKF" ) , 1 , 0 , 0 , 0
, 0 } , { 3 , 16 , TARGET_STRING (
"SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 6 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC/SOC" ) , TARGET_STRING ( "SOC_EKF" ) , 0 , 0 , 0
, 0 , 0 } , { 5 , 14 , TARGET_STRING ( "SOC_Estimation/UKF_EKF_1TC/SOC1" ) ,
TARGET_STRING ( "SOC_UKF" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 6 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC/EKF/Output" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 7 , 14 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 0 } , { 8 , 6 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC/EKF/Output/Data Store Read" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 14 , TARGET_STRING (
"SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem/Data Store Read" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 10 , - 1 ,
TARGET_STRING ( "SOC_Estimation/Coulomb Counting/Discrete-Time\nIntegrator" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 ,
- 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & jxmwlezzui4 . bu4mepp0on ) ; dataAddr [ 1 ] =
( void * ) ( & jxmwlezzui4 . cjy5nvic03 [ 0 ] ) ; dataAddr [ 2 ] = ( void * )
( & jxmwlezzui4 . aipstqw5b1 [ 0 ] ) ; dataAddr [ 3 ] = ( void * ) ( &
jxmwlezzui4 . bu4mepp0on ) ; dataAddr [ 4 ] = ( void * ) ( & jxmwlezzui4 .
aipstqw5b1 [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) ( & jxmwlezzui4 . cjy5nvic03
[ 0 ] ) ; dataAddr [ 6 ] = ( void * ) ( & jxmwlezzui4 . aipstqw5b1 [ 0 ] ) ;
dataAddr [ 7 ] = ( void * ) ( & jxmwlezzui4 . cjy5nvic03 [ 0 ] ) ; dataAddr [
8 ] = ( void * ) ( & jxmwlezzui4 . aipstqw5b1 [ 0 ] ) ; dataAddr [ 9 ] = (
void * ) ( & jxmwlezzui4 . cjy5nvic03 [ 0 ] ) ; dataAddr [ 10 ] = ( void * )
( & m3hvauf25pt . pe4apvu41x ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 17 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 ,
"SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" , 0 , 0 } , { 1 ,
0 , "SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem/Data Store Read" , 0 , 0 } , {
2 , 0 , "SOC_Estimation/UKF_EKF_1TC/EKF/Output/Data Store Read" , 0 , 0 } , {
3 , 0 , "SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" , 0 , 0 }
, { 4 , 0 , "SOC_Estimation/UKF_EKF_1TC/EKF/Output/Data Store Read" , 0 , 15
} , { 5 , 0 , "SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem/Data Store Read" , 0
, 15 } , { 6 , 0 , "SOC_Estimation/UKF_EKF_1TC/EKF/Output/Data Store Read" ,
0 , 15 } , { 7 , 0 ,
"SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem/Data Store Read" , 0 , 15 } , { 8 ,
0 , "SOC_Estimation/UKF_EKF_1TC/EKF/Output/Data Store Read" , 0 , 15 } , { 9
, 0 , "SOC_Estimation/UKF_EKF_1TC/UKF/Subsystem/Data Store Read" , 0 , 15 } }
; static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 17 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 10 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2012719364U , 1148323552U , 4089270501U , 68210365U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SOC_Estimation_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeSystemRan ( egzjadadgd * const
j1wfl5js5r , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( j1wfl5js5r ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) &
m3hvauf25pt . daqdwg0npq ; systemRan [ 2 ] = ( sysRanDType * ) & m3hvauf25pt
. h2jujrkgf4 ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( sysRanDType *
) & m3hvauf25pt . ot1jgphbkl ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] =
( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan [ 8 ] = ( NULL ) ;
systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( sysRanDType * ) &
m3hvauf25pt . i3sw2osvsj ; systemRan [ 11 ] = ( NULL ) ; systemRan [ 12 ] = (
NULL ) ; systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ] = ( NULL ) ;
systemRan [ 15 ] = ( sysRanDType * ) & m3hvauf25pt . my442usii3 ; systemRan [
16 ] = ( NULL ) ; systemTid [ 3 ] = dvyla3jdqx [ 0 ] ; systemTid [ 4 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 5 ] = dvyla3jdqx [ 0 ] ; systemTid [ 13 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 6 ] = dvyla3jdqx [ 0 ] ; systemTid [ 7 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 8 ] = dvyla3jdqx [ 0 ] ; systemTid [ 9 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 10 ] = dvyla3jdqx [ 0 ] ; systemTid [ 11 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 12 ] = dvyla3jdqx [ 0 ] ; systemTid [ 14 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 15 ] = dvyla3jdqx [ 0 ] ; systemTid [ 1 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 2 ] = dvyla3jdqx [ 0 ] ; systemTid [ 16 ] =
dvyla3jdqx [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ;
rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ; rtContextSystems [
3 ] = 4 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [ 5 ] = 15 ;
rtContextSystems [ 6 ] = 15 ; rtContextSystems [ 7 ] = 15 ; rtContextSystems
[ 8 ] = 15 ; rtContextSystems [ 9 ] = 10 ; rtContextSystems [ 10 ] = 10 ;
rtContextSystems [ 11 ] = 15 ; rtContextSystems [ 12 ] = 15 ;
rtContextSystems [ 13 ] = 15 ; rtContextSystems [ 14 ] = 15 ;
rtContextSystems [ 15 ] = 15 ; rtContextSystems [ 16 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SOC_Estimation_InitializeDataMapInfo ( egzjadadgd * const j1wfl5js5r ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( j1wfl5js5r ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( j1wfl5js5r -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( j1wfl5js5r -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; SOC_Estimation_InitializeDataAddr (
j1wfl5js5r -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
j1wfl5js5r -> DataMapInfo . mmi , j1wfl5js5r -> DataMapInfo . dataAddress ) ;
SOC_Estimation_InitializeVarDimsAddr ( j1wfl5js5r -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( j1wfl5js5r -> DataMapInfo .
mmi , j1wfl5js5r -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
j1wfl5js5r -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
j1wfl5js5r -> DataMapInfo . mmi , ( NULL ) ) ;
SOC_Estimation_InitializeLoggingFunctions ( j1wfl5js5r -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( j1wfl5js5r -> DataMapInfo . mmi ,
j1wfl5js5r -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
j1wfl5js5r -> DataMapInfo . mmi , & j1wfl5js5r -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( j1wfl5js5r -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( j1wfl5js5r -> DataMapInfo .
mmi , 0 ) ; SOC_Estimation_InitializeSystemRan ( j1wfl5js5r , j1wfl5js5r ->
DataMapInfo . systemRan , j1wfl5js5r -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( j1wfl5js5r -> DataMapInfo . mmi ,
j1wfl5js5r -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( j1wfl5js5r
-> DataMapInfo . mmi , j1wfl5js5r -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( j1wfl5js5r -> DataMapInfo . mmi , & dvyla3jdqx [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SOC_Estimation_host_InitializeDataMapInfo (
SOC_Estimation_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
