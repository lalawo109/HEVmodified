#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME SiMappedEngine_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "SiMappedEngine_types.h"
#include "SiMappedEngine.h"
#include "SiMappedEngine_private.h"
extern const clm0vbftja ivpkvqrd1a ; const char *
rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) { fge4b0tiis * localX = (
fge4b0tiis * ) ssGetContStates ( S ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { obfkhtmwsvj * dw = (
obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; real_T * o_o_B_6_20 = ( real_T * )
ssGetOutputPortSignal ( S , 30 ) ; real_T * o_o_B_6_21 = ( real_T * )
ssGetOutputPortSignal ( S , 31 ) ; real_T * o_o_B_6_22 = ( real_T * )
ssGetOutputPortSignal ( S , 32 ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; ob0r0v13wu ( o_o_B_6_20 , o_o_B_6_21 , o_o_B_6_22 ,
o_o_o_o_B_6_24 , localX ) ; ssSetPeriodicContState ( S , 0 , 2 , 0 , 720 ) ;
} static void mdlReset ( SimStruct * S ) { obfkhtmwsvj * dw = ( obfkhtmwsvj *
) ssGetDWork ( S , 0 ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; n1130jkiif ( o_o_o_o_B_6_24 , localX ) ; } static
void mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { obfkhtmwsvj * dw
= ( obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; real_T const * i_hhvxbcamly = (
real_T * ) ssGetInputPortSignal ( S , 12 ) ; real_T const * i_plvpjig3ro = (
real_T * ) ssGetInputPortSignal ( S , 17 ) ; real_T * o_B_6_1 = ( real_T * )
ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_B_6_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_6_3 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_6_4 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_6_5 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_6_6 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_6_7 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_6_8 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_6_9 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_B_6_10 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_6_11 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_6_12 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_6_13 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_B_6_14 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_6_15 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_B_6_16 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; real_T * o_o_B_6_17 = ( real_T * )
ssGetOutputPortSignal ( S , 18 ) ; real_T * o_B_6_18 = ( real_T * )
ssGetOutputPortSignal ( S , 19 ) ; real_T * o_B_6_19 = ( real_T * )
ssGetOutputPortSignal ( S , 29 ) ; real_T * o_o_B_6_20 = ( real_T * )
ssGetOutputPortSignal ( S , 30 ) ; real_T * o_o_B_6_21 = ( real_T * )
ssGetOutputPortSignal ( S , 31 ) ; real_T * o_o_B_6_22 = ( real_T * )
ssGetOutputPortSignal ( S , 32 ) ; real_T * o_B_6_23 = ( real_T * )
ssGetOutputPortSignal ( S , 33 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; if ( tid == 0 ) { SiMappedEngine ( & ( dw -> rtm ) ,
i_hhvxbcamly , i_plvpjig3ro , o_B_6_1 , o_o_B_6_2 , o_B_6_3 , o_B_6_4 ,
o_B_6_5 , o_B_6_6 , o_B_6_7 , o_B_6_8 , o_B_6_9 , o_B_6_10 , o_B_6_11 ,
o_B_6_12 , o_B_6_13 , o_B_6_14 , o_B_6_15 , o_B_6_16 , o_o_B_6_17 , o_B_6_18
, o_B_6_19 , o_o_B_6_20 , o_o_B_6_21 , o_o_B_6_22 , o_B_6_23 , & ( dw -> rtb
) , & ( dw -> rtdw ) , localX ) ; gxcx4c1tkl ( ) ; } } static void
mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo -> genericFcn != (
NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 14 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetNumPeriodicContStates ( S , 1 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
19 , 41 ) ; if ( ! ssSetNumInputPorts ( S , 19 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "ms" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 5 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 5 ,
false ) ; ssSetInputPortSampleTime ( S , 5 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 5 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 6 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 6 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 6 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 6 , 1 ) ; ssSetInputPortOptimOpts ( S
, 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 6 ,
false ) ; ssSetInputPortSampleTime ( S , 6 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 6 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 7 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 7 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 7 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 7 , 1 ) ; ssSetInputPortOptimOpts ( S
, 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 7 ,
false ) ; ssSetInputPortSampleTime ( S , 7 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 7 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 8 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 8 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 8 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 8 , 1 ) ; ssSetInputPortOptimOpts ( S
, 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 8 ,
false ) ; ssSetInputPortSampleTime ( S , 8 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 8 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 9 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 9 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 9 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 9 , 1 ) ; ssSetInputPortOptimOpts ( S
, 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 9 ,
false ) ; ssSetInputPortSampleTime ( S , 9 , 0.0 ) ; ssSetInputPortOffsetTime
( S , 9 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 10 , 1 ) )
return ; ssSetInputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 10 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 10 , 1 ) ; ssSetInputPortOptimOpts ( S
, 10 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 10 ,
false ) ; ssSetInputPortSampleTime ( S , 10 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 10 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 11 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 11 , 1 ) ; ssSetInputPortOptimOpts ( S
, 11 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 11 ,
false ) ; ssSetInputPortSampleTime ( S , 11 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 11 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 12 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 12 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 12 , 1 ) ; ssSetInputPortOptimOpts ( S
, 12 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 12 ,
false ) ; ssSetInputPortSampleTime ( S , 12 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 12 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 13 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 13 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 13 , 1 ) ; ssSetInputPortOptimOpts ( S
, 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 13 ,
false ) ; ssSetInputPortSampleTime ( S , 13 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 13 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 14 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 14 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 14 , 1 ) ; ssSetInputPortOptimOpts ( S
, 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 14 ,
false ) ; ssSetInputPortSampleTime ( S , 14 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 14 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 15 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 15 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 15 , 1 ) ; ssSetInputPortOptimOpts ( S
, 15 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 15 ,
false ) ; ssSetInputPortSampleTime ( S , 15 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 15 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 16 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "Pa" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 16 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 16 , 1 ) ; ssSetInputPortOptimOpts ( S
, 16 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 16 ,
false ) ; ssSetInputPortSampleTime ( S , 16 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 16 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 17 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 17 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 17 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 17 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rev/min" , & unitIdReg ) ;
if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 17 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 17 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 17 , 1 ) ; ssSetInputPortOptimOpts ( S
, 17 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 17 ,
false ) ; ssSetInputPortSampleTime ( S , 17 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 17 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 18 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 18 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 18 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 18 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 18 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 18 , 0 ) ;
ssSetInputPortRequiredContiguous ( S , 18 , 1 ) ; ssSetInputPortOptimOpts ( S
, 18 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 18 ,
false ) ; ssSetInputPortSampleTime ( S , 18 , 0.0 ) ;
ssSetInputPortOffsetTime ( S , 18 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S ,
41 ) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "N*m" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 1 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rev/min" , & unitIdReg ) ;
if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
1 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 1 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 1 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 2 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 2 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "Pa" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 2 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 2 , 0 ) ; ssSetOutputPortDiscreteValuedOutput
( S , 2 , 0 ) ; ssSetOutputPortOkToMerge ( S , 2 , SS_OK_TO_MERGE_CONDITIONAL
) ; ssSetOutputPortICAttributes ( S , 2 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 3 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 3 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 3 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 3 , 0 ) ; ssSetOutputPortDiscreteValuedOutput
( S , 3 , 0 ) ; ssSetOutputPortOkToMerge ( S , 3 , SS_OK_TO_MERGE_CONDITIONAL
) ; ssSetOutputPortICAttributes ( S , 3 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 4 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 4 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 4 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
4 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 4 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 4 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 4 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 5 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 5 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 5 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
5 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 5 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 5 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 5 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 6 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 6 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 6 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
6 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 6 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 6 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 6 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 7 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 7 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "deg" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 7 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
7 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 7 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 7 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 7 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 8 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 8 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 8 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
8 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 8 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 8 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 8 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 9 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 9 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 9 , 0.0 ) ; ssSetOutputPortOffsetTime ( S ,
9 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 9 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 9 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 9 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 10 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 10 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 10 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 10 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 10 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 10 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 10 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 10 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 11 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 11 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 11 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 11 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 11 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 11 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 12 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 12 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 12 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 12 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 12 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 12 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 12 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 13 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 13 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 13 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 13 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 13 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 13 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 14 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 14 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 14 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 14 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 14 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 14 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 15 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "m^3/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 15 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 15 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 15 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 15 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 15 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 15 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 16 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 16 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 16 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 16 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 16 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 16 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 16 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 17 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 17 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 17 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 17 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 17 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 17 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 17 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 17 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 17 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 17 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 17 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 18 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 18 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 18 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 18 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 18 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 18 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 18 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 18 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 18 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 18 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 18 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 19 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 19 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 19 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 19 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 19 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 19 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 19 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 19 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 19 , SS_NOT_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 19 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 19 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 20 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 20 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 20 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 20 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "rad/s" , & unitIdReg ) ; if
( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 20 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 20 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 20 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 20 , 0 ) ; ssSetOutputPortOkToMerge
( S , 20 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
20 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 20 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 21
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 21 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 21 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 21 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 21 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 21 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 21 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 21 , 0 ) ; ssSetOutputPortOkToMerge
( S , 21 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
21 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 21 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 22
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 22 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 22 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 22 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "1" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 22 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 22 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 22 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 22 , 0 ) ; ssSetOutputPortOkToMerge
( S , 22 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
22 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 22 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 23
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 23 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 23 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 23 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 23 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 23 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 23 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 23 , 0 ) ; ssSetOutputPortOkToMerge
( S , 23 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
23 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 23 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 24
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 24 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 24 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 24 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 24 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 24 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 24 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 24 , 0 ) ; ssSetOutputPortOkToMerge
( S , 24 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
24 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 24 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 25
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 25 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 25 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 25 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "%" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 25 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 25 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 25 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 25 , 0 ) ; ssSetOutputPortOkToMerge
( S , 25 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
25 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 25 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 26
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 26 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 26 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 26 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 26 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 26 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 26 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 26 , 0 ) ; ssSetOutputPortOkToMerge
( S , 26 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
26 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 26 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 27
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 27 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 27 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 27 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 27 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 27 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 27 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 27 , 0 ) ; ssSetOutputPortOkToMerge
( S , 27 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
27 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 27 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 28
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 28 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 28 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 28 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 28 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 28 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 28 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 28 , 0 ) ; ssSetOutputPortOkToMerge
( S , 28 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
28 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 28 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 29
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 29 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 29 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 29 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "g/kW/hr" , & unitIdReg ) ;
if ( unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 29 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 29 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 29 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 29 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 29 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 29 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 29 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 30 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 30 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 30 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 30 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 30 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 30 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 30 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 30 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 30 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 30 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 30 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 31 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 31 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 31 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 31 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 31 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 31 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 31 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 31 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 31 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 31 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 31 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 32 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 32 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 32 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 32 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 32 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 32 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 32 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 32 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 32 , SS_OK_TO_MERGE ) ;
ssSetOutputPortICAttributes ( S , 32 , false , true , false ) ;
ssSetOutputPortOptimOpts ( S , 32 , SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 33 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 33 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 33 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 33 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "kg/s" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 33 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 33 , 0.0 ) ; ssSetOutputPortOffsetTime ( S
, 33 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 33 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 33 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 33 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 33 , SS_NOT_REUSABLE_AND_LOCAL ) ; if ( !
ssSetOutputPortVectorDimension ( S , 34 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 34 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 34 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 34 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 34 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 34 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 34 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 34 , 0 ) ; ssSetOutputPortOkToMerge
( S , 34 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
34 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 34 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 35
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 35 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 35 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 35 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 35 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 35 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 35 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 35 , 0 ) ; ssSetOutputPortOkToMerge
( S , 35 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
35 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 35 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 36
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 36 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 36 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 36 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "Pa" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 36 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 36 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 36 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 36 , 0 ) ; ssSetOutputPortOkToMerge
( S , 36 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
36 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 36 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 37
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 37 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 37 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 37 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "K" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 37 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 37 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 37 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 37 , 0 ) ; ssSetOutputPortOkToMerge
( S , 37 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
37 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 37 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 38
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 38 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 38 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 38 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 38 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 38 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 38 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 38 , 0 ) ; ssSetOutputPortOkToMerge
( S , 38 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
38 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 38 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 39
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 39 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 39 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 39 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 39 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 39 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 39 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 39 , 0 ) ; ssSetOutputPortOkToMerge
( S , 39 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
39 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 39 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 40
, 1 ) ) return ; ssSetOutputPortDimensionsMode ( S , 40 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 40 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 40 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 40 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 40 , mxGetInf ( ) ) ;
ssSetOutputPortOffsetTime ( S , 40 , 0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 40 , 0 ) ; ssSetOutputPortOkToMerge
( S , 40 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S ,
40 , false , true , false ) ; ssSetOutputPortOptimOpts ( S , 40 ,
SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetSimStateCompliance ( S ,
USE_CUSTOM_SIM_STATE ) ; mr_SiMappedEngine_RegisterSimStateChecksum ( S ) ;
ssSetNumSampleTimes ( S , 4 ) ; ssSetParameterTuningCompliance ( S , true ) ;
ssSetNumRWork ( S , 0 ) ; ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ;
ssSetNumModes ( S , 0 ) ; { int_T zcsIdx = 0 ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "UprLim" ) ; ssSetZcSignalType ( S , zcsIdx
, SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "LwrLim" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx ,
1 ) ; ssSetZcSignalName ( S , zcsIdx , "IfInput" ) ; ssSetZcSignalType ( S ,
zcsIdx , SL_ZCS_TYPE_CONT ) ; ssSetZcSignalZcEventType ( S , zcsIdx ,
SL_ZCS_EVENT_ALL ) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ;
} ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 2 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 2 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 3 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 3 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 4 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 4 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 5 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 5 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 6 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 6 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 7 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 7 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 8 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 8 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 9 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 9 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 10 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 10 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 11 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 11 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 12 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 12 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 13 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 13 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 14 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 14 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 15 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 15 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 16 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 16 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 17 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 17 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 18 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 18 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 19 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 19 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 20 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 20 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 21 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 21 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 22 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 22 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 23 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 23 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 24 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 24 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 25 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 25 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 26 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 26 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 27 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 27 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 28 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 28 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 29 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 29 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 30 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 30 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 31 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 31 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 32 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 32 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 33 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 33 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 34 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 34 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 35 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 35 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 36 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 36 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 37 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 37 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 38 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 38 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 39 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 39 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 40 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 40 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 6 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 7 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 8 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 9 , 0 ) ; ssSetInputPortIsNotDerivPort ( S
, 10 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 11 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 12 , 0 ) ; ssSetInputPortIsNotDerivPort (
S , 13 , 0 ) ; ssSetInputPortIsNotDerivPort ( S , 14 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 15 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 16 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 17 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 18 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:LoggingBlockDoesNotSupportMultiExecInstancesWithCustomMsg\" pr=\"d\"><arguments><arg type=\"encoded\">UwBpAE0AYQBwAHAAZQBkAEUAbgBnAGkAbgBlAC8AQQBjAGMAZQBzAHMAbwByAHkAIABMAG8AYQBkACAATQBvAGQAZQBsAC8AUABvAHcAZQByACAAQQBjAGMAbwB1AG4AdABpAG4AZwAgAEIAdQBzACAAQwByAGUAYQB0AG8AcgAAAA==</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments><hs><h>AAAABaB/+UDL</h></hs><causes><diag id=\"Simulink:logLoadBlocks:SigLogMultiExecInsNoBusSupportMsg\" pr=\"d\"><msg encoded=\"yes\">TwBuAGwAeQAgAG4AbwBuAC0AYgB1AHMAIABzAGkAZwBuAGEAbABzACAAYwBhAG4AIABiAGUAIABsAG8AZwBnAGUAZAAgAGkAbgBzAGkAZABlACAARgBvAHIAIABFAGEAYwBoACAAcwB1AGIAcwB5AHMAdABlAG0AcwAuAAAA</msg></diag></causes></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_SiMappedEngine_MdlInfoRegFcn ( S , "SiMappedEngine" , & retVal ) ; if ( !
retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( obfkhtmwsvj ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.4" ) ; ssSetNeedAbsoluteTime ( S ,
1 ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) {
ssSetSampleTime ( S , 0 , 0 ) ; ssSetOffsetTime ( S , 0 , 0 ) ;
ssSetSampleTime ( S , 1 , 0 ) ; ssSetOffsetTime ( S , 1 , 1 ) ;
ssSetSampleTime ( S , 2 , mxGetInf ( ) ) ; ssSetOffsetTime ( S , 2 , 0 ) ;
ssSetSampleTime ( S , 3 , rtInf ) ; ssSetOffsetTime ( S , 3 , rtInf ) ;
return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { obfkhtmwsvj * dw = (
obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; void * sysRanPtr = ( NULL ) ; int sysTid =
0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid ( S , &
sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } ht2eemxshs ( S ,
slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 2 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , localX , sysRanPtr , sysTid , ( ( NULL ) ) , (
( NULL ) ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm .
DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) {
_GenericFcn fcn = S -> mdlInfo -> genericFcn ; } apgeqmx21v ( & ( dw -> rtm )
, & ( dw -> rtdw ) ) ; }
#define MDL_START
static void mdlStart ( SimStruct * S ) { obfkhtmwsvj * dw = ( obfkhtmwsvj * )
ssGetDWork ( S , 0 ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; e3hpwcezeu ( & ( dw -> rtm ) ,
o_o_o_o_B_6_24 , & ( dw -> rtdw ) ) ; }
#define RTW_GENERATED_DISABLE
static void mdlDisable ( SimStruct * S ) { obfkhtmwsvj * dw = ( obfkhtmwsvj *
) ssGetDWork ( S , 0 ) ; lnpw5sh2z3 ( & ( dw -> rtm ) , & ( dw -> rtdw ) ) ;
return ; } static void mdlOutputs ( SimStruct * S , int_T tid ) { obfkhtmwsvj
* dw = ( obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; real_T const * i_hhvxbcamly =
( real_T * ) ssGetInputPortSignal ( S , 12 ) ; real_T const * i_plvpjig3ro =
( real_T * ) ssGetInputPortSignal ( S , 17 ) ; real_T * o_B_6_1 = ( real_T *
) ssGetOutputPortSignal ( S , 0 ) ; real_T * o_o_B_6_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_B_6_3 = ( real_T * )
ssGetOutputPortSignal ( S , 4 ) ; real_T * o_B_6_4 = ( real_T * )
ssGetOutputPortSignal ( S , 5 ) ; real_T * o_B_6_5 = ( real_T * )
ssGetOutputPortSignal ( S , 6 ) ; real_T * o_B_6_6 = ( real_T * )
ssGetOutputPortSignal ( S , 7 ) ; real_T * o_B_6_7 = ( real_T * )
ssGetOutputPortSignal ( S , 8 ) ; real_T * o_B_6_8 = ( real_T * )
ssGetOutputPortSignal ( S , 9 ) ; real_T * o_B_6_9 = ( real_T * )
ssGetOutputPortSignal ( S , 10 ) ; real_T * o_B_6_10 = ( real_T * )
ssGetOutputPortSignal ( S , 11 ) ; real_T * o_B_6_11 = ( real_T * )
ssGetOutputPortSignal ( S , 12 ) ; real_T * o_B_6_12 = ( real_T * )
ssGetOutputPortSignal ( S , 13 ) ; real_T * o_B_6_13 = ( real_T * )
ssGetOutputPortSignal ( S , 14 ) ; real_T * o_B_6_14 = ( real_T * )
ssGetOutputPortSignal ( S , 15 ) ; real_T * o_B_6_15 = ( real_T * )
ssGetOutputPortSignal ( S , 16 ) ; real_T * o_B_6_16 = ( real_T * )
ssGetOutputPortSignal ( S , 17 ) ; real_T * o_o_B_6_17 = ( real_T * )
ssGetOutputPortSignal ( S , 18 ) ; real_T * o_B_6_18 = ( real_T * )
ssGetOutputPortSignal ( S , 19 ) ; real_T * o_B_6_19 = ( real_T * )
ssGetOutputPortSignal ( S , 29 ) ; real_T * o_o_B_6_20 = ( real_T * )
ssGetOutputPortSignal ( S , 30 ) ; real_T * o_o_B_6_21 = ( real_T * )
ssGetOutputPortSignal ( S , 31 ) ; real_T * o_o_B_6_22 = ( real_T * )
ssGetOutputPortSignal ( S , 32 ) ; real_T * o_B_6_23 = ( real_T * )
ssGetOutputPortSignal ( S , 33 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; real_T * o_o_o_o_B_6_24 = ( real_T * )
ssGetOutputPortSignal ( S , 35 ) ; if ( tid == PARAMETER_TUNING_TID ) {
SiMappedEngineTID2 ( o_o_o_o_B_6_24 , & ( dw -> rtb ) ) ; } if ( tid !=
CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { if ( ssIsSampleHit ( S , 0 ,
tid ) || ssIsMinorTimeStep ( S ) ) { SiMappedEngine ( & ( dw -> rtm ) ,
i_hhvxbcamly , i_plvpjig3ro , o_B_6_1 , o_o_B_6_2 , o_B_6_3 , o_B_6_4 ,
o_B_6_5 , o_B_6_6 , o_B_6_7 , o_B_6_8 , o_B_6_9 , o_B_6_10 , o_B_6_11 ,
o_B_6_12 , o_B_6_13 , o_B_6_14 , o_B_6_15 , o_B_6_16 , o_o_B_6_17 , o_B_6_18
, o_B_6_19 , o_o_B_6_20 , o_o_B_6_21 , o_o_B_6_22 , o_B_6_23 , & ( dw -> rtb
) , & ( dw -> rtdw ) , localX ) ; } } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { obfkhtmwsvj * dw = (
obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; if ( ssIsSampleHit ( S , 0 , tid ) ) {
gxcx4c1tkl ( ) ; } return ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { obfkhtmwsvj * dw = (
obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; real_T * o_o_B_6_2 = ( real_T * )
ssGetOutputPortSignal ( S , 1 ) ; real_T * o_o_B_6_17 = ( real_T * )
ssGetOutputPortSignal ( S , 18 ) ; e5ydmz2av1 * localZCSV = ( e5ydmz2av1 * )
ssGetNonsampledZCs ( S ) ; gofm1sxsii ( o_o_B_6_2 , o_o_B_6_17 , localZCSV )
; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { obfkhtmwsvj * dw = (
obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; real_T const * i_knzyws4xoq = ( real_T
* ) ssGetInputPortSignal ( S , 0 ) ; real_T const * i_diuuspptpy = ( real_T *
) ssGetInputPortSignal ( S , 1 ) ; real_T const * i_ebbdxzo1x3 = ( real_T * )
ssGetInputPortSignal ( S , 5 ) ; real_T const * i_hfydlywqwv = ( real_T * )
ssGetInputPortSignal ( S , 6 ) ; real_T const * i_i4xuiqvzoa = ( real_T * )
ssGetInputPortSignal ( S , 7 ) ; real_T const * i_jbws0igab0 = ( real_T * )
ssGetInputPortSignal ( S , 8 ) ; real_T const * i_kol3thjnst = ( real_T * )
ssGetInputPortSignal ( S , 9 ) ; real_T const * i_cwcisy5ii1 = ( real_T * )
ssGetInputPortSignal ( S , 10 ) ; real_T const * i_pvk4kpp2zk = ( real_T * )
ssGetInputPortSignal ( S , 11 ) ; real_T const * i_lftrwhjbdh = ( real_T * )
ssGetInputPortSignal ( S , 13 ) ; real_T const * i_eewhbkgbad = ( real_T * )
ssGetInputPortSignal ( S , 14 ) ; fge4b0tiis * localX = ( fge4b0tiis * )
ssGetContStates ( S ) ; af1kriqllf * localXdot = ( af1kriqllf * ) ssGetdX ( S
) ; apevzx5nn2 ( i_knzyws4xoq , i_diuuspptpy , i_ebbdxzo1x3 , i_hfydlywqwv ,
i_i4xuiqvzoa , i_jbws0igab0 , i_kol3thjnst , i_cwcisy5ii1 , i_pvk4kpp2zk ,
i_lftrwhjbdh , i_eewhbkgbad , & ( dw -> rtb ) , localX , localXdot ) ; }
static void mdlTerminate ( SimStruct * S ) { obfkhtmwsvj * dw = ( obfkhtmwsvj
* ) ssGetDWork ( S , 0 ) ; eluttkodxn ( & ( dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { obfkhtmwsvj * dw =
( obfkhtmwsvj * ) ssGetDWork ( S , 0 ) ; oao54o31k0 ( & ( dw -> rtm ) , & (
dw -> rtdw ) ) ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { const fge4b0tiis
* localX = ( const fge4b0tiis * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fge4b0tiis ) ; mxArray * storedX = mxCreateNumericMatrix
( 1 , numBytes , mxUINT8_CLASS , mxREAL ) ; UINT8_T * rawData = ( UINT8_T * )
mxGetData ( storedX ) ; memcpy ( & rawData [ 0 ] , localX , numBytes ) ;
mxSetFieldByNumber ( ss , 0 , 0 , storedX ) ; } { mxArray * mdlrefDW =
mr_SiMappedEngine_GetDWork ( ssGetDWork ( S , 0 ) ) ; mxSetFieldByNumber ( ss
, 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_SiMappedEngine_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss ,
0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar (
( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) { {
fge4b0tiis * localX = ( fge4b0tiis * ) ssGetContStates ( S ) ; const size_t
numBytes = sizeof ( fge4b0tiis ) ; const mxArray * storedX =
mxGetFieldByNumber ( ss , 0 , 0 ) ; const UINT8_T * rawData = ( const UINT8_T
* ) mxGetData ( storedX ) ; memcpy ( localX , & rawData [ 0 ] , numBytes ) ;
} mr_SiMappedEngine_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss
, 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber (
ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
