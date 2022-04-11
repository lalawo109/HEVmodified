#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "DrivetrainHevMm_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "DrivetrainHevMm.h"
#include "DrivetrainHevMm_capi.h"
#include "DrivetrainHevMm_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 3 , 0 } , { "PwrTrnsfrd" , 2 , 3 } , { "PwrR" , 0 , - 1 } , { "PwrC" , 0 ,
- 1 } , { "PwrNotTrnsfrd" , 1 , 5 } , { "PwrDampLoss" , 0 , - 1 } , {
"PwrStored" , 1 , 6 } , { "PwrStoredShft" , 0 , - 1 } , { "" , 3 , 7 } , {
"PwrTrnsfrd" , 3 , 10 } , { "PwrDriveshft" , 0 , - 1 } , { "PwrAxl1" , 0 , -
1 } , { "PwrAxl2" , 0 , - 1 } , { "PwrNotTrnsfrd" , 2 , 13 } , {
"PwrMechLoss" , 0 , - 1 } , { "" , 3 , 15 } , { "PwrTrnsfrd" , 3 , 18 } , {
"PwrMot" , 0 , - 1 } , { "PwrDriveshft" , 0 , - 1 } , { "PwrTransOut" , 0 , -
1 } , { "PwrNotTrnsfrd" , 0 , - 1 } , { "PwrStored" , 0 , - 1 } , { "" , 3 ,
21 } , { "PwrTrnsfrd" , 3 , 24 } , { "PwrEng" , 0 , - 1 } , { "PwrGen" , 0 ,
- 1 } , { "PwrTransIn" , 0 , - 1 } , { "" , 3 , 27 } , { "PwrTrnsfrd" , 5 ,
30 } , { "PwrFxExt" , 0 , - 1 } , { "PwrFzExt" , 0 , - 1 } , { "PwrMyExt" , 0
, - 1 } , { "PwrFwF" , 0 , - 1 } , { "PwrFwR" , 0 , - 1 } , { "PwrNotTrnsfrd"
, 6 , 35 } , { "PwrFsF" , 0 , - 1 } , { "PwrFsR" , 0 , - 1 } , { "PwrFxDrag"
, 0 , - 1 } , { "PwrFzDrag" , 0 , - 1 } , { "PwrMyDrag" , 0 , - 1 } , {
"PwrFsb" , 0 , - 1 } , { "PwrStored" , 6 , 41 } , { "PwrStoredGrvty" , 0 , -
1 } , { "PwrStoredxdot" , 0 , - 1 } , { "PwrStoredzdot" , 0 , - 1 } , {
"PwrStoredq" , 0 , - 1 } , { "PwrStoredFsFzSprng" , 0 , - 1 } , {
"PwrStoredFsRzSprng" , 0 , - 1 } , { "" , 3 , 47 } , { "PwrTrnsfrd" , 3 , 50
} , { "PwrRoad" , 0 , - 1 } , { "PwrAxlTrq" , 0 , - 1 } , { "PwrFz" , 0 , - 1
} , { "PwrNotTrnsfrd" , 5 , 53 } , { "PwrSlip" , 0 , - 1 } , { "PwrMyRoll" ,
0 , - 1 } , { "PwrMyBrk" , 0 , - 1 } , { "PwrMyb" , 0 , - 1 } , { "PwrFzDamp"
, 0 , - 1 } , { "PwrStored" , 4 , 58 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 4 , 6 , 2 , 3 , 5 , 7 , 9 , 13 , 6 , 10
, 11 , 12 , 14 , 5 , 16 , 20 , 21 , 17 , 18 , 19 , 23 , 20 , 21 , 24 , 25 ,
26 , 28 , 34 , 41 , 29 , 30 , 31 , 32 , 33 , 35 , 36 , 37 , 38 , 39 , 40 , 42
, 43 , 44 , 45 , 46 , 47 , 49 , 53 , 59 , 50 , 51 , 52 , 54 , 55 , 56 , 57 ,
58 , 44 , 45 , 46 , 42 } ; static rtwCAPI_Signals rtBlockSignals [ ] = { { 0
, 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States
rtBlockStates [ ] = { { 0 , 2 , TARGET_STRING (
"DrivetrainHevMm/Vehicle/Integrator" ) , TARGET_STRING ( "" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 1 , 22 , TARGET_STRING (
 "DrivetrainHevMm/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 2 , 17 , TARGET_STRING (
"DrivetrainHevMm/Subsystem/Gearbox/Ideal Gear Tin/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 , 0
} , { 3 , 13 , TARGET_STRING (
"DrivetrainHevMm/Subsystem1/Gearbox/Ideal Gear Tin/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 , 1 , - 1 , 0
} , { 4 , 23 , TARGET_STRING (
 "DrivetrainHevMm/Differential and Compliance/Front Wheel Drive/Open Differential/Open Differential/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 5 , 21 , TARGET_STRING (
 "DrivetrainHevMm/Driveshaft Compliance/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 6 , 4 , TARGET_STRING (
 "DrivetrainHevMm/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Position"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 7 , 6 , TARGET_STRING (
 "DrivetrainHevMm/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/Theta"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 8 , 0 , TARGET_STRING (
 "DrivetrainHevMm/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/U,w"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 9 , 7 , TARGET_STRING (
 "DrivetrainHevMm/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/3DOF (Body Axes)/q"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 10 , 9 , TARGET_STRING (
 "DrivetrainHevMm/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 11 , 10 , TARGET_STRING (
 "DrivetrainHevMm/Wheels and Brakes/Longitudinal Wheel - Front 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 12 , 11 , TARGET_STRING (
 "DrivetrainHevMm/Wheels and Brakes/Longitudinal Wheel - Rear 1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 13 , 8 , TARGET_STRING (
 "DrivetrainHevMm/Differential and Compliance/Front Wheel Drive/Front Axle Compliance 1/Torsional Compliance Linear 2way/Torsional Compliance Linear/Cont LPF IC Dyn/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 14 , 12 , TARGET_STRING (
 "DrivetrainHevMm/Vehicle/Vehicle Body 3 DOF Longitudinal/Vehicle Body 3dof/Bus Creation/Body Frame/Longitudinal 3DOF/Integrator3"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 13 , 11 , 10 ,
14 , 12 , 2 , 3 , 0 , 4 , 6 , 7 , 8 , 5 , 9 } ;
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevMm_InitializeDataAddr ( void * dataAddr [ ] ,
ehse3th4zp * localDW , fykwo0psgw * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> hraqykvaar [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localX ->
nh2dbkmvjf ) ; dataAddr [ 2 ] = ( void * ) ( & localX -> pv1jzhid2l [ 0 ] ) ;
dataAddr [ 3 ] = ( void * ) ( & localX -> br2dkhawvd [ 0 ] ) ; dataAddr [ 4 ]
= ( void * ) ( & localX -> erlmu4zdcj [ 0 ] ) ; dataAddr [ 5 ] = ( void * ) (
& localX -> amyxfl3mjz ) ; dataAddr [ 6 ] = ( void * ) ( & localX ->
cpy0pcrfd3 [ 0 ] ) ; dataAddr [ 7 ] = ( void * ) ( & localX -> oozo5jsycm ) ;
dataAddr [ 8 ] = ( void * ) ( & localX -> olvmgosyfj [ 0 ] ) ; dataAddr [ 9 ]
= ( void * ) ( & localX -> ezqeipksvq ) ; dataAddr [ 10 ] = ( void * ) ( &
localX -> ng3mqfsk5k ) ; dataAddr [ 11 ] = ( void * ) ( & localX ->
or31ohgoam ) ; dataAddr [ 12 ] = ( void * ) ( & localX -> m4nry4wry4 ) ;
dataAddr [ 13 ] = ( void * ) ( & localX -> alcm3anqzx ) ; dataAddr [ 14 ] = (
void * ) ( & localX -> fybl3cn4or ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevMm_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevMm_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; loggingPtrs [ 3 ] = ( NULL ) ; loggingPtrs
[ 4 ] = ( NULL ) ; loggingPtrs [ 5 ] = ( NULL ) ; loggingPtrs [ 6 ] = ( NULL
) ; loggingPtrs [ 7 ] = ( NULL ) ; loggingPtrs [ 8 ] = ( NULL ) ; loggingPtrs
[ 9 ] = ( NULL ) ; loggingPtrs [ 10 ] = ( NULL ) ; loggingPtrs [ 11 ] = (
NULL ) ; loggingPtrs [ 12 ] = ( NULL ) ; loggingPtrs [ 13 ] = ( NULL ) ;
loggingPtrs [ 14 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 2 , 1
, 1 , 1 , 4 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 27 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 27 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 60 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 15
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 3543998687U , 702038267U ,
1364277832U , 1038321892U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
DrivetrainHevMm_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void DrivetrainHevMm_InitializeSystemRan ( kfhpy22huf * const
o4xdvdrcy3 , sysRanDType * systemRan [ ] , ehse3th4zp * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
o4xdvdrcy3 ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( sysRanDType * ) &
localDW -> d1n3vr0b4vr [ 0 ] . p415byht2n . fwkj5qvlln . bgjp4ffgxq ;
systemRan [ 8 ] = ( sysRanDType * ) & localDW -> d1n3vr0b4vr [ 0 ] .
p415byht2n . fwkj5qvlln . f5zwgi3o42 ; systemRan [ 9 ] = ( sysRanDType * ) &
localDW -> d1n3vr0b4vr [ 0 ] . p415byht2n . fwkj5qvlln . awrdzndn2k ;
systemRan [ 10 ] = ( sysRanDType * ) & localDW -> d1n3vr0b4vr [ 0 ] .
p415byht2n . fwkj5qvlln . mj0ybniwyi ; systemRan [ 11 ] = ( NULL ) ;
systemRan [ 12 ] = ( NULL ) ; systemRan [ 13 ] = ( NULL ) ; systemRan [ 14 ]
= ( NULL ) ; systemRan [ 15 ] = ( NULL ) ; systemRan [ 16 ] = ( NULL ) ;
systemRan [ 17 ] = ( sysRanDType * ) & localDW -> cmhxmwey2y [ 0 ] .
p415byht2n . fwkj5qvlln . bgjp4ffgxq ; systemRan [ 18 ] = ( sysRanDType * ) &
localDW -> cmhxmwey2y [ 0 ] . p415byht2n . fwkj5qvlln . f5zwgi3o42 ;
systemRan [ 19 ] = ( sysRanDType * ) & localDW -> cmhxmwey2y [ 0 ] .
p415byht2n . fwkj5qvlln . awrdzndn2k ; systemRan [ 20 ] = ( sysRanDType * ) &
localDW -> cmhxmwey2y [ 0 ] . p415byht2n . fwkj5qvlln . mj0ybniwyi ;
systemRan [ 21 ] = ( NULL ) ; systemRan [ 22 ] = ( NULL ) ; systemRan [ 23 ]
= ( NULL ) ; systemRan [ 24 ] = ( NULL ) ; systemRan [ 25 ] = ( NULL ) ;
systemRan [ 26 ] = ( NULL ) ; systemTid [ 1 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 20 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 9 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 19 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 1 ] ; systemTid [ 7 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 17 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = o4xdvdrcy3 -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 9 ; rtContextSystems [
10 ] = 10 ; rtContextSystems [ 11 ] = 0 ; rtContextSystems [ 12 ] = 0 ;
rtContextSystems [ 13 ] = 0 ; rtContextSystems [ 14 ] = 0 ; rtContextSystems
[ 15 ] = 0 ; rtContextSystems [ 16 ] = 0 ; rtContextSystems [ 17 ] = 17 ;
rtContextSystems [ 18 ] = 18 ; rtContextSystems [ 19 ] = 19 ;
rtContextSystems [ 20 ] = 20 ; rtContextSystems [ 21 ] = 0 ; rtContextSystems
[ 22 ] = 0 ; rtContextSystems [ 23 ] = 0 ; rtContextSystems [ 24 ] = 0 ;
rtContextSystems [ 25 ] = 0 ; rtContextSystems [ 26 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void DrivetrainHevMm_InitializeDataMapInfo ( kfhpy22huf * const o4xdvdrcy3 ,
ehse3th4zp * localDW , fykwo0psgw * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( o4xdvdrcy3 -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( o4xdvdrcy3 -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( o4xdvdrcy3 -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; DrivetrainHevMm_InitializeDataAddr ( o4xdvdrcy3 ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
o4xdvdrcy3 -> DataMapInfo . mmi , o4xdvdrcy3 -> DataMapInfo . dataAddress ) ;
DrivetrainHevMm_InitializeVarDimsAddr ( o4xdvdrcy3 -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( o4xdvdrcy3 -> DataMapInfo .
mmi , o4xdvdrcy3 -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
o4xdvdrcy3 -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
o4xdvdrcy3 -> DataMapInfo . mmi , ( NULL ) ) ;
DrivetrainHevMm_InitializeLoggingFunctions ( o4xdvdrcy3 -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( o4xdvdrcy3 -> DataMapInfo . mmi ,
o4xdvdrcy3 -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
o4xdvdrcy3 -> DataMapInfo . mmi , & o4xdvdrcy3 -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( o4xdvdrcy3 -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( o4xdvdrcy3 -> DataMapInfo .
mmi , 0 ) ; DrivetrainHevMm_InitializeSystemRan ( o4xdvdrcy3 , o4xdvdrcy3 ->
DataMapInfo . systemRan , localDW , o4xdvdrcy3 -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( o4xdvdrcy3 -> DataMapInfo .
mmi , o4xdvdrcy3 -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
o4xdvdrcy3 -> DataMapInfo . mmi , o4xdvdrcy3 -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( o4xdvdrcy3 -> DataMapInfo . mmi , & o4xdvdrcy3 ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void DrivetrainHevMm_host_InitializeDataMapInfo (
DrivetrainHevMm_host_DataMapInfo_T * dataMap , const char * path ) {
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
