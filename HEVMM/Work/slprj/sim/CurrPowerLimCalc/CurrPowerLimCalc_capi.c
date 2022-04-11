#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "CurrPowerLimCalc_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#else
#include "builtin_typeid_types.h"
#include "CurrPowerLimCalc.h"
#include "CurrPowerLimCalc_capi.h"
#include "CurrPowerLimCalc_private.h"
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
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static TARGET_CONST
rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 }
} ; static int_T rtContextSystems [ 2 ] ; static rtwCAPI_LoggingMetaInfo
loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1172235695U , 2347710508U , 1251717667U , 3934526920U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * CurrPowerLimCalc_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void CurrPowerLimCalc_InitializeSystemRan ( ajbfpygfl2 * const
mnfuu5uxb5 , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( mnfuu5uxb5 ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = bpvrateqsu [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void CurrPowerLimCalc_InitializeDataMapInfo ( ajbfpygfl2 * const mnfuu5uxb5 ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( mnfuu5uxb5 ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( mnfuu5uxb5 -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( mnfuu5uxb5 -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( mnfuu5uxb5 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath ( mnfuu5uxb5 ->
DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetInstanceLoggingInfo ( mnfuu5uxb5
-> DataMapInfo . mmi , & mnfuu5uxb5 -> DataMapInfo . mmiLogInstanceInfo ) ;
rtwCAPI_SetChildMMIArray ( mnfuu5uxb5 -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( mnfuu5uxb5 -> DataMapInfo . mmi , 0 ) ;
CurrPowerLimCalc_InitializeSystemRan ( mnfuu5uxb5 , mnfuu5uxb5 -> DataMapInfo
. systemRan , mnfuu5uxb5 -> DataMapInfo . systemTid , sysRanPtr , contextTid
) ; rtwCAPI_SetSystemRan ( mnfuu5uxb5 -> DataMapInfo . mmi , mnfuu5uxb5 ->
DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( mnfuu5uxb5 -> DataMapInfo
. mmi , mnfuu5uxb5 -> DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap (
mnfuu5uxb5 -> DataMapInfo . mmi , & bpvrateqsu [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void CurrPowerLimCalc_host_InitializeDataMapInfo (
CurrPowerLimCalc_host_DataMapInfo_T * dataMap , const char * path ) {
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
