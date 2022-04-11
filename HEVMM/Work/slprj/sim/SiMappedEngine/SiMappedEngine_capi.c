#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SiMappedEngine_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "SiMappedEngine.h"
#include "SiMappedEngine_capi.h"
#include "SiMappedEngine_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 3 , 0 } , { "PwrTrnsfrd" , 2 , 3 } , { "PwrEngIn" , 0 , - 1 } , {
"PwrEngOut" , 0 , - 1 } , { "PwrNotTrnsfrd" , 1 , 5 } , { "PwrAccssryLoad" ,
0 , - 1 } , { "PwrStored" , 0 , - 1 } , { "" , 3 , 6 } , { "PwrTrnsfrd" , 1 ,
9 } , { "PwrCrkshft" , 0 , - 1 } , { "PwrNotTrnsfrd" , 2 , 10 } , { "PwrFuel"
, 0 , - 1 } , { "PwrLoss" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 4 , 6 , 2 , 3 , 5 , 8 , 10 , 6 , 9 , 11
, 12 } ; static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = {
{ 0 , 0 , TARGET_STRING (
"SiMappedEngine/Electronic Throttle Actuator Dynamics" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 1 ,
TARGET_STRING ( "SiMappedEngine/Accessory Load Model/Lumped Torque Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 9 , TARGET_STRING (
"SiMappedEngine/Actuators/EGR Valve Dynamics" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 3 , 4 ,
TARGET_STRING (
"SiMappedEngine/Actuators/Electronic Throttle Actuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 4 , 7 , TARGET_STRING (
"SiMappedEngine/Actuators/Exhaust Cam Phaser\n Actuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 5 , 6 , TARGET_STRING (
"SiMappedEngine/Actuators/Intake Cam Phaser\n Actuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 6 , 13 , TARGET_STRING (
"SiMappedEngine/Actuators/Swirl Valve Actuator Dynamics" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 7 , 8 ,
TARGET_STRING ( "SiMappedEngine/Actuators/VGT Actuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 8 , 10 , TARGET_STRING (
"SiMappedEngine/Actuators/Variable Compression Ratio\nActuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 9 , 12 , TARGET_STRING (
"SiMappedEngine/Actuators/Variable Intake Runner Length\nActuator Dynamics" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 ,
0 } , { 10 , 11 , TARGET_STRING (
"SiMappedEngine/Actuators/Variable Intake Valve Lift\nActuator Dynamics" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 11 , 5 , TARGET_STRING (
"SiMappedEngine/Actuators/Wastegate Actuator Dynamics" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 12 , 3 ,
TARGET_STRING ( "SiMappedEngine/Three-Way Catalyst/O2 Storage" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 13 , 2 , TARGET_STRING (
"SiMappedEngine/Mapped SI Engine/Engine Crank Angle Calculation/Integrator" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 ,
0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , -
1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 9 , 4 , 7 , 6
, 13 , 8 , 10 , 12 , 11 , 5 , 3 , 2 } ;
#ifndef HOST_CAPI_BUILD
static void SiMappedEngine_InitializeDataAddr ( void * dataAddr [ ] ,
o01jicpr12 * localDW , fge4b0tiis * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> kijvvzfevj ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
drdw254jnf ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> ab5rofxaaf ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> glguipeodw ) ; dataAddr [ 4 ] = (
void * ) ( & localX -> lb4lukiyvr ) ; dataAddr [ 5 ] = ( void * ) ( & localX
-> lhnhr5tk3k ) ; dataAddr [ 6 ] = ( void * ) ( & localX -> fidmx4ulxd ) ;
dataAddr [ 7 ] = ( void * ) ( & localX -> atvjtlenba ) ; dataAddr [ 8 ] = (
void * ) ( & localX -> fbm3jcjp5o ) ; dataAddr [ 9 ] = ( void * ) ( & localX
-> nvpwfbw43a ) ; dataAddr [ 10 ] = ( void * ) ( & localX -> i41jnyahbd ) ;
dataAddr [ 11 ] = ( void * ) ( & localX -> je1gzhjjcy ) ; dataAddr [ 12 ] = (
void * ) ( & localX -> kktgopzeo1 ) ; dataAddr [ 13 ] = ( void * ) ( & localX
-> oqydpnfc0r ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiMappedEngine_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SiMappedEngine_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ; }
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
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 7 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 7 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 13 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 14
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 2429106080U , 2296730745U
, 3894753852U , 483275344U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
SiMappedEngine_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SiMappedEngine_InitializeSystemRan ( dmfysfr1i5 * const
azqpzka5xm , sysRanDType * systemRan [ ] , o01jicpr12 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
azqpzka5xm ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( sysRanDType * ) & localDW -> dmao1hgsdf ; systemRan [ 4 ]
= ( sysRanDType * ) & localDW -> aloeui4q1o ; systemRan [ 5 ] = ( NULL ) ;
systemRan [ 6 ] = ( NULL ) ; systemTid [ 1 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = azqpzka5xm -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 3 ; rtContextSystems [ 4 ] = 4 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SiMappedEngine_InitializeDataMapInfo ( dmfysfr1i5 * const azqpzka5xm ,
o01jicpr12 * localDW , fge4b0tiis * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( azqpzka5xm -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( azqpzka5xm -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( azqpzka5xm -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; SiMappedEngine_InitializeDataAddr ( azqpzka5xm ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
azqpzka5xm -> DataMapInfo . mmi , azqpzka5xm -> DataMapInfo . dataAddress ) ;
SiMappedEngine_InitializeVarDimsAddr ( azqpzka5xm -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( azqpzka5xm -> DataMapInfo .
mmi , azqpzka5xm -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
azqpzka5xm -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
azqpzka5xm -> DataMapInfo . mmi , ( NULL ) ) ;
SiMappedEngine_InitializeLoggingFunctions ( azqpzka5xm -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( azqpzka5xm -> DataMapInfo . mmi ,
azqpzka5xm -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
azqpzka5xm -> DataMapInfo . mmi , & azqpzka5xm -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( azqpzka5xm -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( azqpzka5xm -> DataMapInfo .
mmi , 0 ) ; SiMappedEngine_InitializeSystemRan ( azqpzka5xm , azqpzka5xm ->
DataMapInfo . systemRan , localDW , azqpzka5xm -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( azqpzka5xm -> DataMapInfo .
mmi , azqpzka5xm -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
azqpzka5xm -> DataMapInfo . mmi , azqpzka5xm -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( azqpzka5xm -> DataMapInfo . mmi , & azqpzka5xm ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SiMappedEngine_host_InitializeDataMapInfo (
SiMappedEngine_host_DataMapInfo_T * dataMap , const char * path ) {
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
