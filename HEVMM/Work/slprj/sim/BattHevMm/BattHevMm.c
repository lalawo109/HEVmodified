#include "BattHevMm_capi.h"
#include "BattHevMm.h"
#include "BattHevMm_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_BattHevMm [ 42 ] = { { "aev4z3ymkhk" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BattHevMm" } , {
"elznmmk3gd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "m3k3in34ym" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "ksfskbyr5n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "ejunarqxez" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"fdo24kusxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "kjnstpjdkn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "ahbh01difx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "me21traqx5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"jgfmtyvq3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "lbmjmbktaa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "bvjt2dyasw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "aiol3revnb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"j0hpr535lk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "jb3sm1u3ap" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "lnhjatm04o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "ltjmpmh3vs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"fy4wq5pzqc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "p5w5cdbq1y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "kr3mejrg3b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "dtg4uwheoz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"libtzjlftt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "j5ptrezz4w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "lykrquuurp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "BattHevMm" } , { "BattHevMm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "dbry5edkuj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattHevMm" } , {
"csd0qqers3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattHevMm" } , { "oqhewvyiic" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "BattHevMm" } , { "mr_BattHevMm_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "BattHevMm" } , { "mr_BattHevMm_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "BattHevMm" } , { "mr_BattHevMm_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "BattHevMm" } , { "mr_BattHevMm_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattHevMm" } , {
"mr_BattHevMm_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"BattHevMm" } , { "BattHevMm.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "BattHevMm.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"BattHevMm" } } ; elhcfziqcue elhcfziqcu = { 17.68 , 20.8 , { 243.1 , 253.1 ,
263.1 , 273.1 , 283.1 , 298.1 , 313.1 } , { 0.0 , 0.01 , 0.02 , 0.03 , 0.04 ,
0.05 , 0.06 , 0.07 , 0.08 , 0.09 , 0.1 , 0.11 , 0.12 , 0.13 , 0.14 , 0.15 ,
0.16 , 0.17 , 0.18 , 0.19 , 0.2 , 0.21 , 0.22 , 0.23 , 0.24 , 0.25 , 0.26 ,
0.27 , 0.28 , 0.29 , 0.3 , 0.31 , 0.32 , 0.33 , 0.34 , 0.35 , 0.36 , 0.37 ,
0.38 , 0.39 , 0.4 , 0.41 , 0.42 , 0.43 , 0.44 , 0.45 , 0.46 , 0.47 , 0.48 ,
0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 , 0.57 , 0.58 , 0.59 ,
0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 , 0.66 , 0.67 , 0.68 , 0.69 , 0.7 ,
0.71 , 0.72 , 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 , 0.79 , 0.8 , 0.81 ,
0.82 , 0.83 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88 , 0.89 , 0.9 , 0.91 , 0.92 ,
0.93 , 0.94 , 0.95 , 0.96 , 0.97 , 0.98 , 0.99 , 1.0 } , { 0.0 , 0.2 , 0.4 ,
0.6 , 0.8 , 1.0 } , { 2.8 , 3.228 , 3.284 , 3.361 , 3.408 , 3.427 , 3.472 ,
3.477 , 3.493 , 3.504 , 3.516 , 3.528 , 3.537 , 3.545 , 3.555 , 3.561 , 3.566
, 3.576 , 3.587 , 3.589 , 3.594 , 3.6 , 3.608 , 3.61 , 3.616 , 3.619 , 3.626
, 3.632 , 3.637 , 3.64 , 3.645 , 3.646 , 3.652 , 3.655 , 3.658 , 3.661 ,
3.664 , 3.668 , 3.673 , 3.678 , 3.68 , 3.681 , 3.686 , 3.692 , 3.699 , 3.702
, 3.705 , 3.71 , 3.717 , 3.723 , 3.728 , 3.733 , 3.735 , 3.742 , 3.749 ,
3.755 , 3.761 , 3.768 , 3.773 , 3.78 , 3.791 , 3.798 , 3.798 , 3.814 , 3.818
, 3.825 , 3.841 , 3.846 , 3.855 , 3.863 , 3.877 , 3.885 , 3.894 , 3.907 ,
3.919 , 3.926 , 3.935 , 3.944 , 3.954 , 3.964 , 3.974 , 3.988 , 3.998 , 4.014
, 4.029 , 4.034 , 4.047 , 4.065 , 4.074 , 4.086 , 4.097 , 4.131 , 4.126 ,
4.138 , 4.15 , 4.18 , 4.174 , 4.187 , 4.207 , 4.231 , 4.221 } , 1.0 ,
76.19047619047619 , { 0.004364 , 0.003639553 , 0.002828222 , 0.002031 ,
0.001443 , 0.0005603 , 0.001028 , 0.004101 , 0.003643685 , 0.003115375 ,
0.002563 , 0.001825 , 0.0007192 , 0.001338 , 0.00406 , 0.003551349 ,
0.003077128 , 0.002532 , 0.001795 , 0.0006887 , 0.001 , 0.003452 ,
0.003225226 , 0.002939098 , 0.00246 , 0.001778 , 0.0007557 , 0.001536 ,
0.003846 , 0.003513151 , 0.003187746 , 0.002716 , 0.001924 , 0.0007355 ,
0.001546 , 0.004517 , 0.004087354 , 0.00362095 , 0.003047 , 0.002234 ,
0.001014 , 0.002789 } , 0.0 , 100.0 , - 1.0 , - 1.0 , { 6U , 5U } } ; void
lykrquuurp ( oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW ) { if ( (
ssGetSimMode ( b2ubf10tlp -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
b2ubf10tlp -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( b2ubf10tlp
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"BattCrnt" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "BattCrnt" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "BattHevMm/BattCrnt" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "BattCrnt" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( b2ubf10tlp
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , b2ubf10tlp ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> cs0erbyoyh . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , b2ubf10tlp -> DataMapInfo
. mmi . InstanceMap . fullPath , "8084122e-dd2f-4fea-a03b-fa954193da48" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "A" ) ; if (
localDW -> cs0erbyoyh . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> cs0erbyoyh . AQHandles , "&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal (
b2ubf10tlp ) ) ; sdiSetRunStartTime ( localDW -> cs0erbyoyh . AQHandles ,
rtmGetTaskTime ( b2ubf10tlp , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings (
localDW -> cs0erbyoyh . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( localDW -> cs0erbyoyh . AQHandles , loggedName , origSigName , propName ) ;
if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> cs0erbyoyh . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( b2ubf10tlp -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( b2ubf10tlp
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"BattV" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "BattV" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "BattHevMm/Lithium Ion Battery Pack" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "BattV" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( b2ubf10tlp
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , b2ubf10tlp ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> m15skubwpp . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , b2ubf10tlp -> DataMapInfo
. mmi . InstanceMap . fullPath , "848dc71b-058c-4850-9271-966aa9b0fe01" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "V" ) ; if (
localDW -> m15skubwpp . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> m15skubwpp . AQHandles , "&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal (
b2ubf10tlp ) ) ; sdiSetRunStartTime ( localDW -> m15skubwpp . AQHandles ,
rtmGetTaskTime ( b2ubf10tlp , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings (
localDW -> m15skubwpp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( localDW -> m15skubwpp . AQHandles , loggedName , origSigName , propName ) ;
if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> m15skubwpp . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( b2ubf10tlp -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( b2ubf10tlp
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"BattSOC" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "BattSOC" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "BattHevMm/SOC Ratio to %" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "BattSOC" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( b2ubf10tlp
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , b2ubf10tlp ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> blm3siebjb . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , b2ubf10tlp -> DataMapInfo
. mmi . InstanceMap . fullPath , "982f3ce4-6075-49b7-b383-6265c9fc71b7" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> blm3siebjb . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> blm3siebjb . AQHandles , "&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal (
b2ubf10tlp ) ) ; sdiSetRunStartTime ( localDW -> blm3siebjb . AQHandles ,
rtmGetTaskTime ( b2ubf10tlp , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings (
localDW -> blm3siebjb . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName
( localDW -> blm3siebjb . AQHandles , loggedName , origSigName , propName ) ;
if ( forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> blm3siebjb . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } if ( ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( b2ubf10tlp -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( b2ubf10tlp ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( b2ubf10tlp
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"BattHevMm/Lithium Ion Battery Pack/Info Bus/Power Accounting Bus Creator" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 3 ] = { "W" , "W" ,
"W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 3 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrLdBatt" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo
[ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrLossBatt" ) ;
leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions =
childDimsArray1 ; leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 1
; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredBatt" ) ; leafElInfo [ 2 ] . dims
. nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , b2ubf10tlp
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"3bd32314-9dab-4abb-a2fd-5846012d038d" , 3 , leafElInfo , & localDW ->
idqcwcjg24 . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( b2ubf10tlp -> _mdlRefSfcnS , & localDW ->
idqcwcjg24 . AQHandles [ 0 ] , 3 * sizeof ( & localDW -> idqcwcjg24 .
AQHandles [ 0 ] ) ) ; if ( localDW -> idqcwcjg24 . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> idqcwcjg24 . AQHandles [ 0 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( b2ubf10tlp ) ) ; sdiSetRunStartTime
( localDW -> idqcwcjg24 . AQHandles [ 0 ] , rtmGetTaskTime ( b2ubf10tlp , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> idqcwcjg24 . AQHandles [
0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> idqcwcjg24 .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> idqcwcjg24 . AQHandles [ 1 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( b2ubf10tlp ) ) ; sdiSetRunStartTime
( localDW -> idqcwcjg24 . AQHandles [ 1 ] , rtmGetTaskTime ( b2ubf10tlp , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> idqcwcjg24 . AQHandles [
1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> idqcwcjg24 .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> idqcwcjg24 . AQHandles [ 2 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( b2ubf10tlp ) ) ; sdiSetRunStartTime
( localDW -> idqcwcjg24 . AQHandles [ 2 ] , rtmGetTaskTime ( b2ubf10tlp , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> idqcwcjg24 . AQHandles [
2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> idqcwcjg24 .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; } if ( ! isStreamoutAlreadyRegistered ) { }
} } } } void dtg4uwheoz ( oqhewvyiic * const b2ubf10tlp , aiol3revnb *
localDW , ahbh01difx * localX ) { boolean_T tmp ; localDW -> jq13d535s1 = 1 ;
if ( rtmIsFirstInitCond ( b2ubf10tlp ) ) { localX -> hmvfqsu5wh = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( b2ubf10tlp -> _mdlRefSfcnS ) ; localDW ->
jq13d535s1 = ! tmp ; } else { localDW -> jq13d535s1 = 1 ; } } } void
kr3mejrg3b ( oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW ,
ahbh01difx * localX ) { boolean_T tmp ; localDW -> jq13d535s1 = 1 ; if (
rtmIsFirstInitCond ( b2ubf10tlp ) ) { localX -> hmvfqsu5wh = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( b2ubf10tlp -> _mdlRefSfcnS ) ; localDW ->
jq13d535s1 = ! tmp ; } else { localDW -> jq13d535s1 = 1 ; } } } void
BattHevMm ( oqhewvyiic * const b2ubf10tlp , const real_T * p0yeivbp1m , const
real_T * ahovmp4o0h , real_T * a2pxy2ekwb , real_T * ok4qgztbx1 , j0hpr535lk
* localB , aiol3revnb * localDW , ahbh01difx * localX ) { real_T c22pbptsnf_p
; real_T kl5bbvov4n_p ; real_T mktqq01vkv ; { if ( localDW -> cs0erbyoyh .
AQHandles && ssGetLogOutput ( b2ubf10tlp -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> cs0erbyoyh . AQHandles , rtmGetTaskTime ( b2ubf10tlp , 0 ) , (
char * ) p0yeivbp1m + 0 ) ; } } if ( rtmIsMajorTimeStep ( b2ubf10tlp ) ) { if
( localDW -> jq13d535s1 != 0 ) { localX -> hmvfqsu5wh = localB -> c22pbptsnf
; } if ( localX -> hmvfqsu5wh >= elhcfziqcu . P_1 ) { if ( localX ->
hmvfqsu5wh != elhcfziqcu . P_1 ) { localX -> hmvfqsu5wh = elhcfziqcu . P_1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( b2ubf10tlp -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> hmvfqsu5wh <= elhcfziqcu . P_9 ) && ( localX ->
hmvfqsu5wh != elhcfziqcu . P_9 ) ) { localX -> hmvfqsu5wh = elhcfziqcu . P_9
; ssSetBlockStateForSolverChangedAtMajorStep ( b2ubf10tlp -> _mdlRefSfcnS ) ;
} kl5bbvov4n_p = localX -> hmvfqsu5wh ; } else if ( localX -> hmvfqsu5wh >=
elhcfziqcu . P_1 ) { kl5bbvov4n_p = elhcfziqcu . P_1 ; } else if ( localX ->
hmvfqsu5wh <= elhcfziqcu . P_9 ) { kl5bbvov4n_p = elhcfziqcu . P_9 ; } else {
kl5bbvov4n_p = localX -> hmvfqsu5wh ; } c22pbptsnf_p = kl5bbvov4n_p /
elhcfziqcu . P_1 ; mktqq01vkv = look2_binlcapw ( * ahovmp4o0h , c22pbptsnf_p
, elhcfziqcu . P_2 , elhcfziqcu . P_4 , elhcfziqcu . P_8 , elhcfziqcu . P_13
, 7U ) ; kl5bbvov4n_p = 1.0 / elhcfziqcu . P_6 * * p0yeivbp1m ; mktqq01vkv *=
kl5bbvov4n_p ; * ok4qgztbx1 = ( look1_binlcapw ( c22pbptsnf_p , elhcfziqcu .
P_3 , elhcfziqcu . P_5 , 100U ) - mktqq01vkv ) * elhcfziqcu . P_7 ; { if (
localDW -> m15skubwpp . AQHandles && ssGetLogOutput ( b2ubf10tlp ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> m15skubwpp . AQHandles ,
rtmGetTaskTime ( b2ubf10tlp , 0 ) , ( char * ) ok4qgztbx1 + 0 ) ; } } *
a2pxy2ekwb = elhcfziqcu . P_10 * c22pbptsnf_p ; { if ( localDW -> blm3siebjb
. AQHandles && ssGetLogOutput ( b2ubf10tlp -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> blm3siebjb . AQHandles , rtmGetTaskTime (
b2ubf10tlp , 0 ) , ( char * ) a2pxy2ekwb + 0 ) ; } } localB -> n0rpj5rcgh = -
1.0 / ( elhcfziqcu . P_6 * 3600.0 ) * * p0yeivbp1m ; c22pbptsnf_p = *
p0yeivbp1m * * ok4qgztbx1 ; c22pbptsnf_p *= elhcfziqcu . P_11 ; kl5bbvov4n_p
= mktqq01vkv * kl5bbvov4n_p * elhcfziqcu . P_7 * elhcfziqcu . P_6 *
elhcfziqcu . P_12 ; mktqq01vkv = c22pbptsnf_p + kl5bbvov4n_p ; { if ( localDW
-> idqcwcjg24 . AQHandles [ 0 ] && ssGetLogOutput ( b2ubf10tlp ->
_mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> idqcwcjg24 . AQHandles [ 0 ] ,
rtmGetTaskTime ( b2ubf10tlp , 0 ) , ( char * ) & c22pbptsnf_p + 0 ) ;
sdiWriteSignal ( localDW -> idqcwcjg24 . AQHandles [ 1 ] , rtmGetTaskTime (
b2ubf10tlp , 0 ) , ( char * ) & kl5bbvov4n_p + 0 ) ; sdiWriteSignal ( localDW
-> idqcwcjg24 . AQHandles [ 2 ] , rtmGetTaskTime ( b2ubf10tlp , 0 ) , ( char
* ) & mktqq01vkv + 0 ) ; } } } void BattHevMmTID1 ( j0hpr535lk * localB ) {
if ( elhcfziqcu . P_0 > elhcfziqcu . P_1 ) { localB -> c22pbptsnf =
elhcfziqcu . P_1 ; } else { localB -> c22pbptsnf = elhcfziqcu . P_0 ; } }
void p5w5cdbq1y ( aiol3revnb * localDW ) { localDW -> jq13d535s1 = 0 ; } void
p5w5cdbq1yTID1 ( void ) { } void fy4wq5pzqc ( j0hpr535lk * localB ,
ahbh01difx * localX , kjnstpjdkn * localXdot ) { if ( ( ( localX ->
hmvfqsu5wh > elhcfziqcu . P_9 ) && ( localX -> hmvfqsu5wh < elhcfziqcu . P_1
) ) || ( ( localX -> hmvfqsu5wh <= elhcfziqcu . P_9 ) && ( localB ->
n0rpj5rcgh > 0.0 ) ) || ( ( localX -> hmvfqsu5wh >= elhcfziqcu . P_1 ) && (
localB -> n0rpj5rcgh < 0.0 ) ) ) { localXdot -> hmvfqsu5wh = localB ->
n0rpj5rcgh ; } else { localXdot -> hmvfqsu5wh = 0.0 ; } } void ltjmpmh3vs (
oqhewvyiic * const b2ubf10tlp , aiol3revnb * localDW ) { if ( ( ssGetSimMode
( b2ubf10tlp -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( b2ubf10tlp ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> cs0erbyoyh .
AQHandles ) { sdiTerminateStreaming ( & localDW -> cs0erbyoyh . AQHandles ) ;
} } if ( ( ssGetSimMode ( b2ubf10tlp -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( b2ubf10tlp -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> m15skubwpp .
AQHandles ) { sdiTerminateStreaming ( & localDW -> m15skubwpp . AQHandles ) ;
} } if ( ( ssGetSimMode ( b2ubf10tlp -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( b2ubf10tlp -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> blm3siebjb .
AQHandles ) { sdiTerminateStreaming ( & localDW -> blm3siebjb . AQHandles ) ;
} } if ( ( ssGetSimMode ( b2ubf10tlp -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL
) && ( ( b2ubf10tlp -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> idqcwcjg24 .
AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW -> idqcwcjg24 .
AQHandles [ 0 ] ) ; } if ( localDW -> idqcwcjg24 . AQHandles [ 1 ] ) {
sdiTerminateStreaming ( & localDW -> idqcwcjg24 . AQHandles [ 1 ] ) ; } if (
localDW -> idqcwcjg24 . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & localDW
-> idqcwcjg24 . AQHandles [ 2 ] ) ; } } } void lnhjatm04o ( oqhewvyiic *
const b2ubf10tlp ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( b2ubf10tlp -> _mdlRefSfcnS , "BattHevMm" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void libtzjlftt (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , oqhewvyiic
* const b2ubf10tlp , j0hpr535lk * localB , aiol3revnb * localDW , ahbh01difx
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( (
void * ) b2ubf10tlp , 0 , sizeof ( oqhewvyiic ) ) ; b2ubf10tlp -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; b2ubf10tlp -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; b2ubf10tlp -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( b2ubf10tlp -> _mdlRefSfcnS , "BattHevMm" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> n0rpj5rcgh = 0.0
; localB -> c22pbptsnf = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( aiol3revnb ) ) ; BattHevMm_InitializeDataMapInfo ( b2ubf10tlp ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( b2ubf10tlp -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
b2ubf10tlp -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( b2ubf10tlp -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_BattHevMm_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_BattHevMm , 42 ) ; * retVal = 1 ; } static void
mr_BattHevMm_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_BattHevMm_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_BattHevMm_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_BattHevMm_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_BattHevMm_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_BattHevMm_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_BattHevMm_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_BattHevMm_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_BattHevMm_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_BattHevMm_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_BattHevMm_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_BattHevMm_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_BattHevMm_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_BattHevMm_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_BattHevMm_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_BattHevMm_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_BattHevMm_GetDWork ( const aev4z3ymkhk * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_BattHevMm_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.jq13d535s1" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_BattHevMm_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . jq13d535s1 ) , sizeof ( mdlrefDW -> rtdw . jq13d535s1 ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_BattHevMm_SetDWork ( aev4z3ymkhk * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_BattHevMm_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW
, 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_BattHevMm_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . jq13d535s1 ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . jq13d535s1 ) ) ; } } void
mr_BattHevMm_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 542811011U , 2789706299U , 2835644703U , 3307153545U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "BattHevMm" , & chksum [ 0 ] ) ; }
mxArray * mr_BattHevMm_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
