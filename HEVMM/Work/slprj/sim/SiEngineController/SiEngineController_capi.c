#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SiEngineController_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "SiEngineController.h"
#include "SiEngineController_capi.h"
#include "SiEngineController_private.h"
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
, TARGET_STRING ( "SiEngineController/Start Stop Logic/Unit Delay" ) ,
TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , -
1 , TARGET_STRING ( "SiEngineController/Start Stop Logic/Unit Delay1" ) ,
TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , -
1 , TARGET_STRING (
 "SiEngineController/SI Controller/Controllers/Idle Speed Control/Idle Speed Control/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3
, - 1 , TARGET_STRING (
 "SiEngineController/SI Controller/Estimators/Intake Air Flow/Air Mass Fraction/Unit Delay1"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 4
, - 1 , TARGET_STRING (
 "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Decay/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 5
, - 1 , TARGET_STRING (
 "SiEngineController/SI Controller/Controllers/Fuel/AFR Command/AFR Command/Startup Lambda Offset/Lambda Start Delta Initialization/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0
, - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } }
; static int_T rt_LoggedStateIdxList [ ] = { 1 , 2 , 3 , 0 , 5 , 4 } ;
#ifndef HOST_CAPI_BUILD
static void SiEngineController_InitializeDataAddr ( void * dataAddr [ ] ,
co1aiayk40 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
jtmeqk4xme ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> lkhjghyslx ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> fqln1ajymu ) ; dataAddr [ 3 ] = (
void * ) ( & localDW -> bululxmkr4 ) ; dataAddr [ 4 ] = ( void * ) ( &
localDW -> fv1i1vle1p ) ; dataAddr [ 5 ] = ( void * ) ( & localDW ->
opdpculhtu ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiEngineController_InitializeVarDimsAddr ( int32_T * vardimsAddr
[ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiEngineController_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; }
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
} ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static
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
) , 0 } , { rtBlockStates , 6 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3955507086U , 2068522155U , 2769695064U , 4162049874U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SiEngineController_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SiEngineController_InitializeSystemRan ( fjokl4fytp * const
hxsxflkffh , sysRanDType * systemRan [ ] , co1aiayk40 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
hxsxflkffh ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( sysRanDType * ) &
localDW -> lvpstwozqm ; systemRan [ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL
) ; systemRan [ 10 ] = ( NULL ) ; systemRan [ 11 ] = ( NULL ) ; systemRan [
12 ] = ( NULL ) ; systemRan [ 13 ] = ( NULL ) ; systemTid [ 1 ] = hxsxflkffh
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = hxsxflkffh -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SiEngineController_InitializeDataMapInfo ( fjokl4fytp * const hxsxflkffh
, co1aiayk40 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( hxsxflkffh -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( hxsxflkffh -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( hxsxflkffh -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; SiEngineController_InitializeDataAddr ( hxsxflkffh
-> DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
hxsxflkffh -> DataMapInfo . mmi , hxsxflkffh -> DataMapInfo . dataAddress ) ;
SiEngineController_InitializeVarDimsAddr ( hxsxflkffh -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( hxsxflkffh -> DataMapInfo .
mmi , hxsxflkffh -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
hxsxflkffh -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
hxsxflkffh -> DataMapInfo . mmi , ( NULL ) ) ;
SiEngineController_InitializeLoggingFunctions ( hxsxflkffh -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( hxsxflkffh -> DataMapInfo . mmi ,
hxsxflkffh -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
hxsxflkffh -> DataMapInfo . mmi , & hxsxflkffh -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( hxsxflkffh -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( hxsxflkffh -> DataMapInfo .
mmi , 0 ) ; SiEngineController_InitializeSystemRan ( hxsxflkffh , hxsxflkffh
-> DataMapInfo . systemRan , localDW , hxsxflkffh -> DataMapInfo . systemTid
, sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( hxsxflkffh -> DataMapInfo
. mmi , hxsxflkffh -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
hxsxflkffh -> DataMapInfo . mmi , hxsxflkffh -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( hxsxflkffh -> DataMapInfo . mmi , & hxsxflkffh ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SiEngineController_host_InitializeDataMapInfo (
SiEngineController_host_DataMapInfo_T * dataMap , const char * path ) {
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
