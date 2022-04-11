#include "HevMmPowertrainController_capi.h"
#include "HevMmPowertrainController.h"
#include "HevMmPowertrainController_private.h"
#include "look1_binlcapw.h"
#include "look1_binlcpw.h"
#include "look1_binlxpw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_HevMmPowertrainController [ 46 ] = { {
"atgt3z3mrxh" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "b3pzo15hcw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "h40zbcae5u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "b5hs1vkdgr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "grlsppsksr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "mhmp5xbuny" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "bde32m2vb5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "e3fn4u2ff3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "mqxmvaqeug" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "ay4bqcwl2r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "czss4kubov" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "cddsr1uthy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "b1tiekhjf1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "gwl0mpqxz3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "bzu0bsktg0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "mcbdlpfmvz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "icfbyt3aci" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "n235oatvlv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "gdwj4teckx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "h1hwxc25iw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "lwlfu1onas" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "gxptcijmz5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "oyw30ws1da" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "HevMmPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "i4u3s0tmp5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "hqx1fw3xj1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "mm1igkn4cm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HevMmPowertrainController" } , { "struct_yDYxwvnHQNPNUzhao2Ffv" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "BMS_Cmd" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Contactors_Cmd" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "CurrentLimits" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Sensors" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_HevMmPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HevMmPowertrainController"
} , { "mr_HevMmPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "HevMmPowertrainController" } , {
"mr_HevMmPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "HevMmPowertrainController" } , {
"HevMmPowertrainController.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL )
} , { "HevMmPowertrainController.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "HevMmPowertrainController" } } ; n0qkx5oe1w5 n0qkx5oe1w = { 0.0 ,
2.0 , 1.0 , 2.0 , { 99.2112225513482 , 110.02568665032679 ,
117.75975101662134 , 123.57514890981295 , 128.16605893908212 ,
131.97196720505721 , 135.28506869588196 , 138.30847599261256 ,
141.18967656016903 , 144.04076679074296 , 146.95128071315722 ,
149.99672430008215 , 153.24456875147484 , 156.75874496014742 ,
160.60329841899446 , 164.84565796117465 , 169.55986910411693 } , {
1448.8486246144416 , 1712.9905266903697 , 1980.3360018693643 ,
2249.1155588006095 , 2517.5597061332887 , 2783.8989525165862 ,
3046.3638065996852 , 3303.184777031769 , 3552.5923724620225 ,
3792.8171015396283 , 4022.0894729137704 , 4238.6399952336333 ,
4440.699177148399 , 4626.4975273072532 , 4794.2655543593792 ,
4942.2337669539593 , 5068.6326737401778 } , 1.0 , 1.0 , - 1.0 , 1.0 , 0.0 ,
0.0 , 9.5492965855137211 , { 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 ,
86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 ,
86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 91.8 , 93.84 , 93.84
, 94.86 , 94.86 , 94.86 , 94.86 , 94.86 , 94.86 , 91.8 , 86.7 , 86.7 , 91.8 ,
93.84 , 93.84 , 95.88 , 95.88 , 95.88 , 95.88 , 95.88 , 95.88 , 93.84 , 86.7
, 86.7 , 91.8 , 93.84 , 94.86 , 95.88 , 95.88 , 95.88 , 96.9 , 96.9 , 95.88 ,
94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 94.86 , 95.88 , 96.9 , 96.9 , 96.9 ,
96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 94.86 , 95.88 , 96.9 ,
96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 94.86 ,
95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 ,
93.84 , 93.84 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 ,
86.7 , 91.8 , 93.84 , 93.84 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 ,
94.86 , 86.7 , 86.7 , 89.76 , 93.84 , 93.84 , 95.88 , 96.9 , 96.9 , 96.9 ,
96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 89.76 , 91.8 , 91.8 , 95.88 , 96.9 ,
96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 89.76 , 91.8 , 91.8 ,
95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 89.76 ,
91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7
, 89.76 , 91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 } ,
{ 0.0 , 1600.0 , 3200.0 , 4477.56 , 4800.0 , 6400.0 , 8000.0 , 9600.0 ,
11200.0 , 12800.0 , 14400.0 , 16000.0 } , { 0.0 , 32.142857142857146 ,
64.285714285714292 , 96.428571428571431 , 128.57142857142858 ,
160.71428571428572 , 192.85714285714286 , 225.0 , 257.14285714285717 ,
289.28571428571428 , 321.42857142857144 , 353.57142857142856 ,
385.71428571428572 , 417.85714285714283 , 450.0 } , 0.01 , - 1.0 ,
9.5492965855137211 , { 450.0 , 450.0 , 450.0 , 450.0 , 419.771162404874 ,
314.828371803655 , 251.862697442924 , 209.885581202437 , 179.901926744946 ,
157.414185901828 , 139.923720801625 , 125.931348721462 } , { 0.0 , 1600.0 ,
3200.0 , 4477.56 , 4800.0 , 6400.0 , 8000.0 , 9600.0 , 11200.0 , 12800.0 ,
14400.0 , 16000.0 } , - 1.0 , 0.11931109772175458 , 0.0 , 0.0 , { 0.0 ,
0.181269246922018 } , { 1.0 , - 0.818730753077982 } , 0.0 , 80.0 , 70.0 , 1.0
, 0.0 , 0.5 , { 1448.8486246144416 , 1712.9905266903697 , 1980.3360018693643
, 2249.1155588006095 , 2517.5597061332887 , 2783.8989525165862 ,
3046.3638065996852 , 3303.184777031769 , 3552.5923724620225 ,
3792.8171015396283 , 4022.0894729137704 , 4238.6399952336333 ,
4440.699177148399 , 4626.4975273072532 , 4794.2655543593792 ,
4942.2337669539593 , 5068.6326737401778 } , { 15052.631578947368 ,
19736.842105263157 , 24421.052631578947 , 29105.263157894737 ,
33789.473684210527 , 38473.684210526313 , 43157.894736842107 ,
47842.105263157893 , 52526.315789473687 , 57210.526315789473 ,
61894.73684210526 , 66578.947368421053 , 71263.15789473684 ,
75947.368421052626 , 80631.578947368427 , 85315.789473684214 , 90000.0 } ,
1000.0 , 1000.0 , 9.55 , 2.0 , { 0.0 , 0.181269246922018 } , { 1.0 , -
0.818730753077982 } , 0.0 , { 0.0 , 0.181269246922018 } , { 1.0 , -
0.818730753077982 } , 0.0 , { 0.0 , 0.181269246922018 } , { 1.0 , -
0.818730753077982 } , 0.0 , { 0.0 , 0.09516258196404 } , { 1.0 , -
0.90483741803596 } , 0.0 , 8.273709E+6 , { 1.0 , 0.0 } , { 40.0 , 90.0 } ,
0.0 , 1.0 , 8.381450000000001 , { 0.0 , 0.181269246922018 } , { 1.0 , -
0.818730753077982 } , 0.0 , { 0.0 , 1.0 } , { 0.5 , 1.0 } ,
9.5492965855137211 , { 450.0 , 450.0 , 450.0 , 450.0 , 419.771162404874 ,
314.828371803655 , 251.862697442924 , 209.885581202437 , 179.901926744946 ,
157.414185901828 , 139.923720801625 , 125.931348721462 } , { 0.0 , 1600.0 ,
3200.0 , 4477.56 , 4800.0 , 6400.0 , 8000.0 , 9600.0 , 11200.0 , 12800.0 ,
14400.0 , 16000.0 } , { 0.0 , 0.09516258196404 } , { 1.0 , - 0.90483741803596
} , 0.0 , 0.0 , 0.0 , 50000.0 , 0.0 , 0.0 , 1.0 , 10000.0 ,
0.00055851234195519349 , 0.00055851234195519349 , 254.0 , 8.381450000000001 ,
- 1.0F , - 1.0F , { 11U , 14U } } ; void oyw30ws1da ( hqx1fw3xj1 * const
eccp0szuqa , b1tiekhjf1 * localDW ) { if ( ( ssGetSimMode ( eccp0szuqa ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( eccp0szuqa -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( eccp0szuqa ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( eccp0szuqa
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"TEPC" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "TEPC" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "HevMmPowertrainController/HEV Supervisory Control/Generator and Engine Optimal Supervisory Control/Switch"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "TEPC" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( eccp0szuqa -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , eccp0szuqa ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dtskx0g4pv . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , eccp0szuqa -> DataMapInfo
. mmi . InstanceMap . fullPath , "34e7b45a-ad19-4710-baba-eb6532c66c00" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> dtskx0g4pv . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> dtskx0g4pv . AQHandles , "0.2" , 0 , rtmGetTFinal ( eccp0szuqa ) ) ;
sdiSetRunStartTime ( localDW -> dtskx0g4pv . AQHandles , rtmGetTaskTime (
eccp0szuqa , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
dtskx0g4pv . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> dtskx0g4pv . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> dtskx0g4pv . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } } void h1hwxc25iw ( b1tiekhjf1 *
localDW ) { localDW -> o5uw0yzrm5 = n0qkx5oe1w . P_27 ; localDW -> j3mp5zo0a3
= n0qkx5oe1w . P_41 ; localDW -> empybbqpsj = n0qkx5oe1w . P_44 ; localDW ->
jun5l1pjvk = n0qkx5oe1w . P_47 ; localDW -> poqrn5ogpe = n0qkx5oe1w . P_50 ;
localDW -> ehe42mkfen = n0qkx5oe1w . P_59 ; localDW -> k4zr4prqlp =
n0qkx5oe1w . P_67 ; } void gdwj4teckx ( b1tiekhjf1 * localDW ) { localDW ->
o5uw0yzrm5 = n0qkx5oe1w . P_27 ; localDW -> j3mp5zo0a3 = n0qkx5oe1w . P_41 ;
localDW -> empybbqpsj = n0qkx5oe1w . P_44 ; localDW -> jun5l1pjvk =
n0qkx5oe1w . P_47 ; localDW -> poqrn5ogpe = n0qkx5oe1w . P_50 ; localDW ->
ehe42mkfen = n0qkx5oe1w . P_59 ; localDW -> k4zr4prqlp = n0qkx5oe1w . P_67 ;
} void HevMmPowertrainController ( hqx1fw3xj1 * const eccp0szuqa , const
real_T * abzljv03gm , const real_T * nxoapk5ikb , const real32_T * m20ioenler
, const real32_T * dw03ibqjkm , const real32_T * b2nm3ek32u , real_T *
f3ztcpm4iw , real_T * lrlt51wqwo , real_T * gojjgsaoxh , real_T * omunnrr3xx
, gwl0mpqxz3 * localB , b1tiekhjf1 * localDW ) { real_T cyctskw2ia ; real_T
dhuefjvpid ; real_T dopqernejk ; real_T epy2nqixuy ; real_T nz0eh0ux5u ;
real_T puufwmeucm ; real32_T hqgukexcih ; real32_T njw41rdjnw ; boolean_T
l3y5hr5gdq ; if ( 1 ) { localDW -> pheumjcmyp = ( ( * nxoapk5ikb >=
n0qkx5oe1w . P_28 ) || ( ( ! ( * nxoapk5ikb <= n0qkx5oe1w . P_29 ) ) &&
localDW -> pheumjcmyp ) ) ; if ( localDW -> pheumjcmyp ) { nz0eh0ux5u =
n0qkx5oe1w . P_30 ; } else { nz0eh0ux5u = n0qkx5oe1w . P_31 ; } if (
nz0eh0ux5u >= n0qkx5oe1w . P_32 ) { nz0eh0ux5u = n0qkx5oe1w . P_71 ; } else {
nz0eh0ux5u = n0qkx5oe1w . P_70 ; } dhuefjvpid = look1_binlxpw ( nz0eh0ux5u ,
n0qkx5oe1w . P_34 , n0qkx5oe1w . P_33 , 16U ) ; if ( ! ( dhuefjvpid >
n0qkx5oe1w . P_35 ) ) { dhuefjvpid = n0qkx5oe1w . P_7 ; } if ( dhuefjvpid >=
n0qkx5oe1w . P_36 ) { * f3ztcpm4iw = look1_binlxpw ( dhuefjvpid , n0qkx5oe1w
. P_5 , n0qkx5oe1w . P_4 , 16U ) ; } else { * f3ztcpm4iw = n0qkx5oe1w . P_6 ;
} * lrlt51wqwo = n0qkx5oe1w . P_37 * nz0eh0ux5u / ( n0qkx5oe1w . P_38 *
dhuefjvpid ) ; { if ( localDW -> dtskx0g4pv . AQHandles && ssGetLogOutput (
eccp0szuqa -> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> dtskx0g4pv .
AQHandles , rtmGetTaskTime ( eccp0szuqa , 0 ) , ( char * ) & nz0eh0ux5u + 0 )
; } } epy2nqixuy = n0qkx5oe1w . P_42 [ 1 ] * localDW -> empybbqpsj ; *
omunnrr3xx = n0qkx5oe1w . P_48 [ 1 ] * localDW -> poqrn5ogpe ; l3y5hr5gdq = (
* abzljv03gm > n0qkx5oe1w . P_0 ) ; puufwmeucm = n0qkx5oe1w . P_45 [ 1 ] *
localDW -> jun5l1pjvk * n0qkx5oe1w . P_51 * n0qkx5oe1w . P_75 ; dopqernejk =
look1_binlcpw ( * nxoapk5ikb , n0qkx5oe1w . P_53 , n0qkx5oe1w . P_52 , 1U ) ;
nz0eh0ux5u = muDoubleScalarAbs ( epy2nqixuy ) ; if ( nz0eh0ux5u > n0qkx5oe1w
. P_54 ) { dhuefjvpid = n0qkx5oe1w . P_54 ; } else if ( nz0eh0ux5u <
n0qkx5oe1w . P_55 ) { dhuefjvpid = n0qkx5oe1w . P_55 ; } else { dhuefjvpid =
nz0eh0ux5u ; } dhuefjvpid = n0qkx5oe1w . P_74 / dhuefjvpid * n0qkx5oe1w .
P_56 ; dhuefjvpid = muDoubleScalarMin ( muDoubleScalarMin ( muDoubleScalarMin
( puufwmeucm , localB -> mql0uilfup ) , dopqernejk * dhuefjvpid ) ,
dhuefjvpid ) * look1_binlcpw ( n0qkx5oe1w . P_57 [ 1 ] * localDW ->
ehe42mkfen , n0qkx5oe1w . P_61 , n0qkx5oe1w . P_60 , 1U ) ; if ( l3y5hr5gdq )
{ cyctskw2ia = n0qkx5oe1w . P_39 [ 1 ] * localDW -> j3mp5zo0a3 *
look1_binlcapw ( n0qkx5oe1w . P_18 * epy2nqixuy , n0qkx5oe1w . P_20 ,
n0qkx5oe1w . P_19 , 11U ) ; } else { cyctskw2ia = n0qkx5oe1w . P_21 *
dhuefjvpid * n0qkx5oe1w . P_22 ; } if ( ! ( nz0eh0ux5u < n0qkx5oe1w . P_1 ) )
{ hqgukexcih = n0qkx5oe1w . P_79 * * dw03ibqjkm ; hqgukexcih *= * m20ioenler
; if ( epy2nqixuy * cyctskw2ia >= n0qkx5oe1w . P_11 ) { nz0eh0ux5u =
n0qkx5oe1w . P_8 ; } else { nz0eh0ux5u = n0qkx5oe1w . P_9 ; } dopqernejk =
look2_binlcapw ( muDoubleScalarAbs ( n0qkx5oe1w . P_12 * epy2nqixuy ) ,
muDoubleScalarAbs ( cyctskw2ia ) , n0qkx5oe1w . P_14 , n0qkx5oe1w . P_15 ,
n0qkx5oe1w . P_13 , n0qkx5oe1w . P_81 , 12U ) * n0qkx5oe1w . P_16 ; if ( (
dopqernejk < 0.0 ) && ( nz0eh0ux5u > muDoubleScalarFloor ( nz0eh0ux5u ) ) ) {
nz0eh0ux5u = - muDoubleScalarPower ( - dopqernejk , nz0eh0ux5u ) ; } else {
nz0eh0ux5u = muDoubleScalarPower ( dopqernejk , nz0eh0ux5u ) ; } dopqernejk =
epy2nqixuy * cyctskw2ia * nz0eh0ux5u ; njw41rdjnw = n0qkx5oe1w . P_80 * *
b2nm3ek32u ; njw41rdjnw *= * m20ioenler ; if ( ( ! ( hqgukexcih - dopqernejk
>= n0qkx5oe1w . P_23 ) ) || ( ! ( njw41rdjnw - dopqernejk <= n0qkx5oe1w .
P_24 ) ) ) { if ( ( epy2nqixuy >= - n0qkx5oe1w . P_3 ) && ( epy2nqixuy <=
n0qkx5oe1w . P_3 ) ) { if ( epy2nqixuy >= n0qkx5oe1w . P_10 ) { cyctskw2ia =
n0qkx5oe1w . P_73 ; } else { cyctskw2ia = localB -> amdacivr3o ; } cyctskw2ia
*= 4.0 / ( 3.0 - muDoubleScalarPower ( epy2nqixuy / 2.0 , 2.0 ) ) ; } else {
cyctskw2ia = epy2nqixuy ; } if ( dopqernejk > hqgukexcih ) { dopqernejk =
hqgukexcih ; } else if ( dopqernejk < njw41rdjnw ) { dopqernejk = njw41rdjnw
; } cyctskw2ia = dopqernejk / nz0eh0ux5u / cyctskw2ia ; } } l3y5hr5gdq = ( *
nxoapk5ikb > n0qkx5oe1w . P_2 ) ; epy2nqixuy = look1_binlcapw ( n0qkx5oe1w .
P_62 * epy2nqixuy , n0qkx5oe1w . P_64 , n0qkx5oe1w . P_63 , 11U ) ; if (
l3y5hr5gdq ) { nz0eh0ux5u = epy2nqixuy ; } else { nz0eh0ux5u = n0qkx5oe1w .
P_72 ; } if ( cyctskw2ia > nz0eh0ux5u ) { localB -> ledk0gmzl4 = nz0eh0ux5u ;
} else { epy2nqixuy *= n0qkx5oe1w . P_17 ; if ( cyctskw2ia < epy2nqixuy ) {
localB -> ledk0gmzl4 = epy2nqixuy ; } else { localB -> ledk0gmzl4 =
cyctskw2ia ; } } * gojjgsaoxh = n0qkx5oe1w . P_65 [ 1 ] * localDW ->
k4zr4prqlp ; puufwmeucm -= dhuefjvpid ; if ( puufwmeucm > n0qkx5oe1w . P_68 )
{ puufwmeucm = n0qkx5oe1w . P_68 ; } else if ( puufwmeucm < n0qkx5oe1w . P_69
) { puufwmeucm = n0qkx5oe1w . P_69 ; } localB -> grtdoatb3j = puufwmeucm /
n0qkx5oe1w . P_76 ; } } void HevMmPowertrainControllerTID1 ( gwl0mpqxz3 *
localB ) { localB -> amdacivr3o = - n0qkx5oe1w . P_73 ; localB -> mql0uilfup
= n0qkx5oe1w . P_78 * n0qkx5oe1w . P_77 ; } void n235oatvlv ( const real_T *
abzljv03gm , const real_T * k05qaunm44 , const real_T * f2boldociz , const
real_T * jorakerji0 , const real_T * lwsagdc05s , gwl0mpqxz3 * localB ,
b1tiekhjf1 * localDW ) { real_T denAccum ; if ( 1 ) { denAccum = * jorakerji0
; denAccum -= n0qkx5oe1w . P_26 [ 1 ] * localDW -> o5uw0yzrm5 ; localDW ->
o5uw0yzrm5 = denAccum / n0qkx5oe1w . P_26 [ 0 ] ; denAccum = * abzljv03gm ;
denAccum -= n0qkx5oe1w . P_40 [ 1 ] * localDW -> j3mp5zo0a3 ; localDW ->
j3mp5zo0a3 = denAccum / n0qkx5oe1w . P_40 [ 0 ] ; denAccum = * lwsagdc05s ;
denAccum -= n0qkx5oe1w . P_43 [ 1 ] * localDW -> empybbqpsj ; localDW ->
empybbqpsj = denAccum / n0qkx5oe1w . P_43 [ 0 ] ; denAccum = * k05qaunm44 ;
denAccum -= n0qkx5oe1w . P_46 [ 1 ] * localDW -> jun5l1pjvk ; localDW ->
jun5l1pjvk = denAccum / n0qkx5oe1w . P_46 [ 0 ] ; localDW -> poqrn5ogpe = (
localB -> grtdoatb3j - n0qkx5oe1w . P_49 [ 1 ] * localDW -> poqrn5ogpe ) /
n0qkx5oe1w . P_49 [ 0 ] ; denAccum = * f2boldociz ; denAccum -= n0qkx5oe1w .
P_58 [ 1 ] * localDW -> ehe42mkfen ; localDW -> ehe42mkfen = denAccum /
n0qkx5oe1w . P_58 [ 0 ] ; localDW -> k4zr4prqlp = ( localB -> ledk0gmzl4 -
n0qkx5oe1w . P_66 [ 1 ] * localDW -> k4zr4prqlp ) / n0qkx5oe1w . P_66 [ 0 ] ;
} } void n235oatvlvTID1 ( void ) { } void icfbyt3aci ( hqx1fw3xj1 * const
eccp0szuqa , b1tiekhjf1 * localDW ) { if ( ( ssGetSimMode ( eccp0szuqa ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( eccp0szuqa -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dtskx0g4pv . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dtskx0g4pv . AQHandles ) ; } } } void mcbdlpfmvz ( hqx1fw3xj1 * const
eccp0szuqa ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( eccp0szuqa -> _mdlRefSfcnS , "HevMmPowertrainController"
, "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void lwlfu1onas (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , hqx1fw3xj1
* const eccp0szuqa , gwl0mpqxz3 * localB , b1tiekhjf1 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; n0qkx5oe1w . P_54 = rtInf ;
n0qkx5oe1w . P_68 = rtInf ; ( void ) memset ( ( void * ) eccp0szuqa , 0 ,
sizeof ( hqx1fw3xj1 ) ) ; eccp0szuqa -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; eccp0szuqa -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
eccp0szuqa -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( eccp0szuqa ->
_mdlRefSfcnS , "HevMmPowertrainController" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> ledk0gmzl4 = 0.0
; localB -> grtdoatb3j = 0.0 ; localB -> amdacivr3o = 0.0 ; localB ->
mql0uilfup = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
b1tiekhjf1 ) ) ; localDW -> o5uw0yzrm5 = 0.0 ; localDW -> j3mp5zo0a3 = 0.0 ;
localDW -> empybbqpsj = 0.0 ; localDW -> jun5l1pjvk = 0.0 ; localDW ->
poqrn5ogpe = 0.0 ; localDW -> ehe42mkfen = 0.0 ; localDW -> k4zr4prqlp = 0.0
; HevMmPowertrainController_InitializeDataMapInfo ( eccp0szuqa , localDW ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( eccp0szuqa -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
eccp0szuqa -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( eccp0szuqa -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_HevMmPowertrainController_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_HevMmPowertrainController , 46 ) ; * retVal = 1 ; } static void
mr_HevMmPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_HevMmPowertrainController_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_HevMmPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_HevMmPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HevMmPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_HevMmPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_HevMmPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HevMmPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_HevMmPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_HevMmPowertrainController_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HevMmPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_HevMmPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_HevMmPowertrainController_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_HevMmPowertrainController_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_HevMmPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_HevMmPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HevMmPowertrainController_GetDWork (
const atgt3z3mrxh * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ;
mr_HevMmPowertrainController_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char * rtdwDataFieldNames [ 8 ] = { "mdlrefDW->rtdw.o5uw0yzrm5" ,
"mdlrefDW->rtdw.j3mp5zo0a3" , "mdlrefDW->rtdw.empybbqpsj" ,
"mdlrefDW->rtdw.jun5l1pjvk" , "mdlrefDW->rtdw.poqrn5ogpe" ,
"mdlrefDW->rtdw.ehe42mkfen" , "mdlrefDW->rtdw.k4zr4prqlp" ,
"mdlrefDW->rtdw.pheumjcmyp" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 8 , rtdwDataFieldNames ) ;
mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . o5uw0yzrm5 ) , sizeof ( mdlrefDW -> rtdw .
o5uw0yzrm5 ) ) ; mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . j3mp5zo0a3 ) , sizeof (
mdlrefDW -> rtdw . j3mp5zo0a3 ) ) ;
mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . empybbqpsj ) , sizeof ( mdlrefDW -> rtdw .
empybbqpsj ) ) ; mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . jun5l1pjvk ) , sizeof (
mdlrefDW -> rtdw . jun5l1pjvk ) ) ;
mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( mdlrefDW -> rtdw . poqrn5ogpe ) , sizeof ( mdlrefDW -> rtdw .
poqrn5ogpe ) ) ; mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . ehe42mkfen ) , sizeof (
mdlrefDW -> rtdw . ehe42mkfen ) ) ;
mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( mdlrefDW -> rtdw . k4zr4prqlp ) , sizeof ( mdlrefDW -> rtdw .
k4zr4prqlp ) ) ; mr_HevMmPowertrainController_cacheDataAsMxArray ( rtdwData ,
0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . pheumjcmyp ) , sizeof (
mdlrefDW -> rtdw . pheumjcmyp ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_HevMmPowertrainController_SetDWork ( atgt3z3mrxh * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . o5uw0yzrm5 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
o5uw0yzrm5 ) ) ; mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . j3mp5zo0a3 ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . j3mp5zo0a3 ) ) ;
mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . empybbqpsj ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
empybbqpsj ) ) ; mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . jun5l1pjvk ) , rtdwData , 0 , 3 , sizeof (
mdlrefDW -> rtdw . jun5l1pjvk ) ) ;
mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . poqrn5ogpe ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw .
poqrn5ogpe ) ) ; mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . ehe42mkfen ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . ehe42mkfen ) ) ;
mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . k4zr4prqlp ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
k4zr4prqlp ) ) ; mr_HevMmPowertrainController_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . pheumjcmyp ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . pheumjcmyp ) ) ; } } void
mr_HevMmPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2395327199U , 2030104337U , 2069189292U ,
4002626153U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"HevMmPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_HevMmPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
