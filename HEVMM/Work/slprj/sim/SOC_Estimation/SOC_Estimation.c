#include "SOC_Estimation_capi.h"
#include "SOC_Estimation.h"
#include "SOC_Estimation_private.h"
#include "look1_iflf_binlxpw.h"
#include "look1_iflf_pbinlxpw.h"
#include "look2_iflf_pbinlcpw.h"
#include "trisolve_n7TRiGBu.h"
#include "xaxpy_IQ2dDuYr.h"
#include "xdotc_L9OWMrp6.h"
#include "xgemv_r0VDt5Ig.h"
#include "xgemv_wWs4ocix.h"
#include "xnrm2_5NL5eOB3.h"
#include "xnrm2_Anysr1Sx.h"
#include "xnrm2_oi0rQuNS.h"
#include "xrot_VJS4xnBw.h"
#include "xscal_YC54Gy7j.h"
#include "xscal_o5SXdvJf.h"
#include "xswap_sOCliIB6.h"
int_T dvyla3jdqx [ 2 ] ; static RegMdlInfo rtMdlInfo_SOC_Estimation [ 103 ] =
{ { "k0usdjdmyh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "iwpbna3nzk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "ffgemfhq3z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "jw4tf0p5wf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "c4nu3af0am" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "pumtzseyq3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "g5klqpxour" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "lfgvecv0kd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "bauhu3elwg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "dgs450w3cw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "nccxwrx5ud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "ldold5ubd1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "aw0ry0dq2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "lgpwz0u0ydd" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 ,
( void * ) "SOC_Estimation" } , { "lgpwz0u0yd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "cvzxv4ktc5y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "eqjixet00ib" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "fgeftxmpge5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "lnoovscpr0t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "ohraxrjqyx2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "jl1gn3n14pp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "lqlgmpxtaft" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "bwktun3tvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "h2zwd4xdarx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "mfgbkriadaf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "eyairrb1z1t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "cgl1fjb0mky" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "hnvysp1jca0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "cvzxv4ktc5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "eqjixet00i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "fgeftxmpge" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "lnoovscpr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "ohraxrjqyx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "jl1gn3n14p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "lqlgmpxtaf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "h2zwd4xdar" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "mfgbkriada" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "eyairrb1z1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "cgl1fjb0mk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "hnvysp1jca" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "jz0daukglw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "k5yohwlgmv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "cefw35nic3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "gjpw0ezevr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "f4ikgzst5j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "h41aqbjehq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "cketgpc2z3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "ekir1iaqx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "acaeyrlq5y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "bbmdfwr4m4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "pwsaco3r21" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "jybkwubq5i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "fvdosu3j2l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "hodgefqf4m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "e0kbzcq1r4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "atu141s5pl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "kbofx52f2p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "okm1tr3efy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "ifqmvckqsc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
0 , ( void * ) "MATLAB Function" } , { "SOC_Estimation" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"batteryStateFcn_Const" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void
* ) "SOC_Estimation" } , { "batteryStateFcn_Term" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryStateFcn_CleanupRTR" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "SOC_Estimation" } , { "batteryStateFcn_Init" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryStateFcn_initialize" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "SOC_Estimation" } , { "batteryStateFcn_Start" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryStateFcn_SetupRTR" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "SOC_Estimation" } , { "batteryStateFcn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"State Transition Function" } , { "batteryMeasurementFcn_Const" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryMeasurementFcn_Term" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "SOC_Estimation" } , { "batteryMeasurementFcn_CleanupRTR" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryMeasurementFcn_Init" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "SOC_Estimation" } , { "batteryMeasurementFcn_initialize" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryMeasurementFcn_Start" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "SOC_Estimation" } , { "batteryMeasurementFcn_SetupRTR" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "batteryMeasurementFcn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void
* ) "Measurement Function" } , { "cvfhosdrdr0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "dvyla3jdqx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "m3hvauf25pt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "jxmwlezzui4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "omhym1uzw2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "egzjadadgd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "SOC_Est" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "Sensors" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "BMS_State_Enum_BMS_Fault" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 3 , (
void * ) "BMS_State_Enum" } , { "BMS_State_Enum_BMS_Driving" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 2 , ( void * ) "BMS_State_Enum" } , {
"BMS_State_Enum_BMS_Charging" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 1 , ( void
* ) "BMS_State_Enum" } , { "BMS_State_Enum_BMS_Standby" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 0 , ( void * ) "BMS_State_Enum" } , {
"BMS_State_Enum" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_SOC_Estimation_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SOC_Estimation" } , { "mr_SOC_Estimation_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "SOC_Estimation" } , { "SOC_Estimation.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "SOC_Estimation.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "SOC_Estimation" } } ; jy3u04is5jr eyairrb1z1 = {
BMS_State_Enum_BMS_Fault , 0.0F , 0.0F , { 1.0E-5F , 0.0F , 0.0F , 1.0E-5F }
, 0.0F , 0.316227764F , 0.0F , { 0.00316227763F , 0.0F , 0.0F , 1.0F } , {
0.8F , 0.0F } , { 1.0E-5F , 0.0F , 0.0F , 1.0E-5F } , 0.0F , 0.316227764F ,
0.0F , { 0.00316227763F , 0.0F , 0.0F , 1.0F } , { 0.8F , 0.0F } , {
2.67308092F , 2.74411678F , 2.80408621F , 2.86247706F , 2.90851068F ,
2.94904304F , 2.98298478F , 3.01467109F , 3.04031491F , 3.06256819F ,
3.08180976F , 3.09994221F , 3.11745667F , 3.13310719F , 3.14873981F ,
3.16419744F , 3.17727733F , 3.19043279F , 3.20375037F , 3.21707153F ,
3.22926F , 3.23838687F , 3.24757981F , 3.25652456F , 3.26973104F ,
3.27907872F , 3.28845739F , 3.29628801F , 3.30383563F , 3.31128025F ,
3.31879926F , 3.32628298F , 3.33376384F , 3.34116316F , 3.34852505F ,
3.35647535F , 3.36484241F , 3.37328362F , 3.38170648F , 3.39014363F ,
3.39794469F , 3.40539837F , 3.41272855F , 3.41984272F , 3.42670655F ,
3.43344903F , 3.44051099F , 3.44873261F , 3.4570868F , 3.46582556F ,
3.47477365F , 3.48373628F , 3.4896512F , 3.49841356F , 3.50736904F ,
3.51647806F , 3.52530336F , 3.53411913F , 3.54267859F , 3.55033374F ,
3.55815887F , 3.56643F , 3.57503271F , 3.58374047F , 3.59241605F ,
3.60091186F , 3.60802174F , 3.61442113F , 3.62083F , 3.62724F , 3.63372207F ,
3.64028358F , 3.64661384F , 3.65236092F , 3.65810847F , 3.66385603F ,
3.66878462F , 3.67336369F , 3.67809629F , 3.68319178F , 3.6877265F ,
3.69208407F , 3.69629025F , 3.69977617F , 3.70365858F , 3.7075479F ,
3.70768666F , 3.70807457F , 3.70883322F , 3.70973849F , 3.70832109F ,
3.70600867F , 3.7034328F , 3.69654465F , 3.68847656F , 3.67341614F ,
3.65676856F , 3.64495325F , 3.63312936F , 3.62574744F , 2.69983792F ,
2.77709556F , 2.85458231F , 2.91946864F , 2.97417855F , 3.02000618F ,
3.05929136F , 3.09496474F , 3.12674475F , 3.15718889F , 3.17923903F ,
3.20182872F , 3.2218771F , 3.23960638F , 3.2564137F , 3.27304411F ,
3.28468394F , 3.29631591F , 3.30778456F , 3.3193233F , 3.32977605F ,
3.34045267F , 3.35113692F , 3.36175F , 3.37419772F , 3.38176036F ,
3.38896823F , 3.39630628F , 3.40364456F , 3.41052532F , 3.41729116F ,
3.42384505F , 3.43043089F , 3.43702936F , 3.44346571F , 3.44969583F ,
3.45565343F , 3.46183825F , 3.46879673F , 3.47592F , 3.48304272F , 3.4902029F
, 3.49736309F , 3.50452232F , 3.51157403F , 3.51840425F , 3.52516413F ,
3.53279614F , 3.54042673F , 3.54809189F , 3.55593276F , 3.56416F ,
3.57136416F , 3.57823539F , 3.58518028F , 3.59216332F , 3.60022044F ,
3.60825133F , 3.61611772F , 3.62397814F , 3.63228464F , 3.64055276F ,
3.64915776F , 3.65831685F , 3.66724467F , 3.67603207F , 3.68467927F ,
3.69268489F , 3.70000792F , 3.7066226F , 3.71323967F , 3.71991706F ,
3.72669101F , 3.73355603F , 3.7404089F , 3.747262F , 3.7541151F , 3.75993943F
, 3.76526666F , 3.77086949F , 3.77689505F , 3.78371739F , 3.79088449F ,
3.79765511F , 3.80461192F , 3.81184578F , 3.81918454F , 3.82705235F ,
3.83434558F , 3.83914F , 3.84343719F , 3.84728456F , 3.8508234F , 3.85355043F
, 3.85568261F , 3.85700679F , 3.85756111F , 3.85964108F , 3.8632915F ,
3.87138796F , 3.01162195F , 3.08575654F , 3.14177489F , 3.18631816F ,
3.22334957F , 3.25390124F , 3.27878881F , 3.30070353F , 3.32118535F ,
3.33873224F , 3.35681272F , 3.37271023F , 3.38793254F , 3.40246129F ,
3.41323876F , 3.42274046F , 3.4323051F , 3.44127059F , 3.45046091F ,
3.46050024F , 3.47059441F , 3.47754574F , 3.48403883F , 3.49083257F ,
3.4976263F , 3.50414419F , 3.51006198F , 3.51650786F , 3.52300024F ,
3.52949286F , 3.53574157F , 3.54126501F , 3.54599118F , 3.55084205F ,
3.55569196F , 3.56052375F , 3.56532049F , 3.56979942F , 3.57444119F ,
3.57904315F , 3.58364487F , 3.5884037F , 3.59316754F , 3.59914041F ,
3.60536838F , 3.61166F , 3.61797357F , 3.62428689F , 3.63060021F ,
3.63762045F , 3.64493084F , 3.65193772F , 3.65894485F , 3.66595173F ,
3.67346621F , 3.68205595F , 3.69093394F , 3.69981217F , 3.70876932F ,
3.71776342F , 3.72686791F , 3.73538876F , 3.74389648F , 3.75240326F ,
3.76046491F , 3.76888752F , 3.77790236F , 3.7868433F , 3.79578424F ,
3.80453634F , 3.8123579F , 3.820328F , 3.82829595F , 3.83626413F ,
3.84436274F , 3.85250735F , 3.86057854F , 3.86864972F , 3.87672091F ,
3.88493609F , 3.89310646F , 3.90173841F , 3.91095185F , 3.92144537F ,
3.9324038F , 3.9437356F , 3.95558619F , 3.96743298F , 3.97920036F ,
3.99089789F , 4.00334215F , 4.01527119F , 4.02728415F , 4.03909397F ,
4.04916286F , 4.05870771F , 4.06775188F , 4.07651F , 4.08674431F ,
4.10407209F , 2.86240172F , 3.10368538F , 3.25034714F , 3.34855413F ,
3.43064809F , 3.42185521F , 3.43050981F , 3.44071293F , 3.43267536F ,
3.43025875F , 3.43051362F , 3.43443799F , 3.43994069F , 3.44405103F ,
3.44988346F , 3.45851636F , 3.46631F , 3.47225595F , 3.47824335F ,
3.48483872F , 3.49127555F , 3.49831772F , 3.50604987F , 3.51339436F ,
3.52423501F , 3.5305202F , 3.53700924F , 3.54240537F , 3.54695272F ,
3.55247545F , 3.55830145F , 3.5641458F , 3.56982803F , 3.57592201F ,
3.58175683F , 3.58730483F , 3.59289575F , 3.59854031F , 3.60416389F ,
3.6094985F , 3.61495066F , 3.62019539F , 3.62451482F , 3.62831068F ,
3.6322155F , 3.63719416F , 3.64236712F , 3.64750814F , 3.65489864F ,
3.66263843F , 3.6703229F , 3.67776775F , 3.68485093F , 3.69169879F ,
3.69854712F , 3.70623779F , 3.71435189F , 3.72287607F , 3.73153329F ,
3.74024868F , 3.74903F , 3.75819039F , 3.7671988F , 3.77604914F , 3.78489494F
, 3.79314542F , 3.80097508F , 3.80951762F , 3.81839395F , 3.82729816F ,
3.83602571F , 3.84474516F , 3.85371232F , 3.8626852F , 3.87167692F , 3.88082F
, 3.89033604F , 3.90009975F , 3.909863F , 3.91930509F , 3.92779636F ,
3.93615389F , 3.94514394F , 3.95563102F , 3.9668F , 3.97742462F , 3.98777723F
, 3.99837661F , 4.01049376F , 4.02354F , 4.03719044F , 4.05066299F ,
4.06346226F , 4.07581663F , 4.08661699F , 4.09638071F , 4.1039629F ,
4.11105728F , 4.12278128F , 4.13075447F } , { 0.01F , 0.02F , 0.03F , 0.04F ,
0.05F , 0.06F , 0.07F , 0.08F , 0.09F , 0.1F , 0.11F , 0.12F , 0.13F , 0.14F
, 0.15F , 0.16F , 0.17F , 0.18F , 0.19F , 0.2F , 0.21F , 0.22F , 0.23F ,
0.24F , 0.25F , 0.26F , 0.27F , 0.28F , 0.29F , 0.3F , 0.31F , 0.32F , 0.33F
, 0.34F , 0.35F , 0.36F , 0.37F , 0.38F , 0.39F , 0.4F , 0.41F , 0.42F ,
0.43F , 0.44F , 0.45F , 0.46F , 0.47F , 0.48F , 0.49F , 0.5F , 0.51F , 0.52F
, 0.53F , 0.54F , 0.55F , 0.56F , 0.57F , 0.58F , 0.59F , 0.6F , 0.61F ,
0.62F , 0.63F , 0.64F , 0.65F , 0.66F , 0.67F , 0.68F , 0.69F , 0.7F , 0.71F
, 0.72F , 0.73F , 0.74F , 0.75F , 0.76F , 0.77F , 0.78F , 0.79F , 0.8F ,
0.81F , 0.82F , 0.83F , 0.84F , 0.85F , 0.86F , 0.87F , 0.88F , 0.89F , 0.9F
, 0.91F , 0.92F , 0.93F , 0.94F , 0.95F , 0.96F , 0.97F , 0.98F , 0.99F ,
1.0F } , { - 10.0F , 0.0F , 25.0F , 40.0F } , { 0.0569026768F , 0.0575506948F
, 0.0576730929F , 0.0575627387F , 0.0573787354F , 0.0571931116F ,
0.0568199977F , 0.0564119257F , 0.0561974347F , 0.0560805649F , 0.0557640903F
, 0.055275809F , 0.0548189431F , 0.0544259325F , 0.0540274754F ,
0.0535758659F , 0.053135F , 0.0528572537F , 0.0526355617F , 0.0524146557F ,
0.0521579459F , 0.0518223159F , 0.0514768958F , 0.0510675237F , 0.0505095981F
, 0.0501945317F , 0.0498797186F , 0.0495373979F , 0.0491644107F ,
0.0487654097F , 0.0483761467F , 0.0479678F , 0.0475582406F , 0.047132019F ,
0.0467023626F , 0.0463891104F , 0.0461612716F , 0.0459600314F , 0.0457715F ,
0.0455912165F , 0.0454018787F , 0.0452074744F , 0.0450811312F , 0.0449739769F
, 0.0447708629F , 0.0444996543F , 0.0442323685F , 0.0439894162F , 0.0437955F
, 0.0437196158F , 0.0436915569F , 0.0436667912F , 0.043632403F ,
0.0436558798F , 0.0437040031F , 0.043750789F , 0.0437259115F , 0.0436988734F
, 0.0436679386F , 0.0434822217F , 0.0433374494F , 0.0432862304F ,
0.0432852693F , 0.0432893038F , 0.0432858504F , 0.0432410799F , 0.0430326499F
, 0.0428344123F , 0.042637337F , 0.0424403399F , 0.042283833F , 0.0421769209F
, 0.0420870557F , 0.0419817418F , 0.0418765172F , 0.0417713895F ,
0.0415647104F , 0.0412865095F , 0.0410431027F , 0.040882457F , 0.040836826F ,
0.0409391373F , 0.0411278941F , 0.0412898399F , 0.0415413231F , 0.0417924747F
, 0.0420200862F , 0.0422646366F , 0.0425714776F , 0.0428474657F ,
0.0428844169F , 0.0428897105F , 0.0428519621F , 0.0422520377F , 0.0414291359F
, 0.0404053293F , 0.0393067934F , 0.0380965956F , 0.0365474448F ,
0.0347308069F , 0.0629164279F , 0.0627185255F , 0.062749F , 0.0627417862F ,
0.0630054548F , 0.0629534274F , 0.0622819401F , 0.0616713762F , 0.061160475F
, 0.0606394857F , 0.0599400289F , 0.059433084F , 0.0591735579F ,
0.0588843897F , 0.0582944304F , 0.0577169247F , 0.0571944267F , 0.0566694736F
, 0.0560950264F , 0.0555648915F , 0.0551851466F , 0.0548830926F ,
0.0545831509F , 0.0542615242F , 0.0536780171F , 0.053223446F , 0.0527386926F
, 0.0523578823F , 0.0519762672F , 0.0515887216F , 0.051193364F ,
0.0507492535F , 0.0503072664F , 0.049857311F , 0.0493952371F , 0.0489222854F
, 0.0484349057F , 0.0479937494F , 0.0477065258F , 0.0474590734F ,
0.0472286567F , 0.0470104516F , 0.0467923023F , 0.046573855F , 0.0464149453F
, 0.0462885872F , 0.0460768379F , 0.045792792F , 0.0455084406F ,
0.0452374145F , 0.0450287126F , 0.0449373387F , 0.0448813625F , 0.0448212773F
, 0.0448025465F , 0.0448023528F , 0.0448471904F , 0.044842314F , 0.04479599F
, 0.0447481684F , 0.0446455628F , 0.0444498397F , 0.0443398952F ,
0.0443358645F , 0.0443361849F , 0.0443347469F , 0.0443011895F , 0.0441188887F
, 0.0439093F , 0.043697428F , 0.0434857234F , 0.0433079265F , 0.0431885906F ,
0.0430951528F , 0.0429917797F , 0.0428884365F , 0.042785123F , 0.0425623655F
, 0.0422613174F , 0.042023059F , 0.0418812297F , 0.0419069827F ,
0.0420814939F , 0.0423005484F , 0.0425425F , 0.0428467877F , 0.0431555547F ,
0.0434957221F , 0.0438413136F , 0.0442856327F , 0.044428736F , 0.0445149243F
, 0.0445599072F , 0.0442026034F , 0.0434919447F , 0.0426037908F ,
0.0416152477F , 0.040499229F , 0.0390045196F , 0.0371542461F , 0.108383588F ,
0.104276456F , 0.097507365F , 0.0937501267F , 0.0893819481F , 0.0854644701F ,
0.0817575529F , 0.0789657161F , 0.0763700381F , 0.0743500069F , 0.0728433579F
, 0.0716898292F , 0.0709947497F , 0.0701675341F , 0.0687296614F ,
0.0673712343F , 0.0662158132F , 0.0650205687F , 0.063858144F , 0.0632667616F
, 0.0628323779F , 0.0619128F , 0.0610362887F , 0.0603620186F , 0.0596877523F
, 0.0589554571F , 0.0582121275F , 0.0577538F , 0.057305187F , 0.0568565726F ,
0.056356661F , 0.055788964F , 0.0551527143F , 0.0546601638F , 0.054167673F ,
0.0536763072F , 0.0531776063F , 0.0526119247F , 0.0520712286F , 0.0515036769F
, 0.0509361215F , 0.0503587909F , 0.0497811399F , 0.0494179F , 0.0491061099F
, 0.0488178208F , 0.0485440642F , 0.0482703075F , 0.0479965508F ,
0.0478381477F , 0.047706794F , 0.0473712161F , 0.0470356382F , 0.0467000641F
, 0.0464310683F , 0.0463210084F , 0.0462716147F , 0.0462222211F ,
0.0462261215F , 0.0462489426F , 0.0463125035F , 0.0462585948F , 0.046201922F
, 0.0461444892F , 0.0458836891F , 0.0457208678F , 0.0456935242F ,
0.0456707887F , 0.0456480533F , 0.045585636F , 0.0453236885F , 0.045085948F ,
0.0448483303F , 0.044610709F , 0.0444608964F , 0.0443618968F , 0.0442474484F
, 0.0441330038F , 0.0440185554F , 0.0437935852F , 0.0434800684F ,
0.0432636626F , 0.0431695543F , 0.0433145389F , 0.0436166525F , 0.043911539F
, 0.0443155169F , 0.0447170362F , 0.0451426581F , 0.0455784276F ,
0.0461653359F , 0.0463666953F , 0.0465478487F , 0.046677433F , 0.0460938551F
, 0.0452312268F , 0.0442160442F , 0.0431407765F , 0.0415552258F ,
0.0395514183F , 0.108526908F , 0.117675088F , 0.123235725F , 0.126959205F ,
0.130071759F , 0.117604479F , 0.109861739F , 0.102688268F , 0.0951920822F ,
0.0894406F , 0.0847290605F , 0.0808654428F , 0.0781008154F , 0.0758200958F ,
0.074075371F , 0.0730483904F , 0.0717775077F , 0.0699809939F , 0.068553F ,
0.0673110262F , 0.0660358295F , 0.0649721622F , 0.0643472299F , 0.0636607334F
, 0.0624196418F , 0.0615766495F , 0.060847789F , 0.0600710362F ,
0.0592638329F , 0.0586485565F , 0.0581628643F , 0.0576814413F , 0.0571630821F
, 0.0566027F , 0.0559767559F , 0.0554420054F , 0.0549394153F , 0.0544394441F
, 0.0539328977F , 0.0533601977F , 0.052806478F , 0.0522246361F ,
0.0516279638F , 0.0510048755F , 0.0504060239F , 0.0500208586F , 0.0496864915F
, 0.0493730642F , 0.0491017289F , 0.0488348752F , 0.0485982336F ,
0.0484362729F , 0.0482062511F , 0.0478436947F , 0.0474812798F , 0.0471587703F
, 0.0469509251F , 0.0468571335F , 0.0467936508F , 0.0467628762F ,
0.0467665158F , 0.0468131825F , 0.0467928089F , 0.0467327498F , 0.0466713F ,
0.0464405343F , 0.0462435223F , 0.0461914688F , 0.0461714044F , 0.0461527035F
, 0.0460937582F , 0.0458350778F , 0.0456007458F , 0.0453665778F ,
0.0451429747F , 0.0450065434F , 0.0449148081F , 0.0448130779F , 0.0447111912F
, 0.0445693396F , 0.0442949645F , 0.0439888425F , 0.0438010134F ,
0.0438064784F , 0.0440286361F , 0.0443156F , 0.0446421206F , 0.0450238101F ,
0.0454416312F , 0.0458946973F , 0.046458859F , 0.046814736F , 0.047015518F ,
0.0471624248F , 0.046723213F , 0.0458819643F , 0.044820834F , 0.0436752588F ,
0.0421113372F , 0.039904695F } , { 0.01F , 0.02F , 0.03F , 0.04F , 0.05F ,
0.06F , 0.07F , 0.08F , 0.09F , 0.1F , 0.11F , 0.12F , 0.13F , 0.14F , 0.15F
, 0.16F , 0.17F , 0.18F , 0.19F , 0.2F , 0.21F , 0.22F , 0.23F , 0.24F ,
0.25F , 0.26F , 0.27F , 0.28F , 0.29F , 0.3F , 0.31F , 0.32F , 0.33F , 0.34F
, 0.35F , 0.36F , 0.37F , 0.38F , 0.39F , 0.4F , 0.41F , 0.42F , 0.43F ,
0.44F , 0.45F , 0.46F , 0.47F , 0.48F , 0.49F , 0.5F , 0.51F , 0.52F , 0.53F
, 0.54F , 0.55F , 0.56F , 0.57F , 0.58F , 0.59F , 0.6F , 0.61F , 0.62F ,
0.63F , 0.64F , 0.65F , 0.66F , 0.67F , 0.68F , 0.69F , 0.7F , 0.71F , 0.72F
, 0.73F , 0.74F , 0.75F , 0.76F , 0.77F , 0.78F , 0.79F , 0.8F , 0.81F ,
0.82F , 0.83F , 0.84F , 0.85F , 0.86F , 0.87F , 0.88F , 0.89F , 0.9F , 0.91F
, 0.92F , 0.93F , 0.94F , 0.95F , 0.96F , 0.97F , 0.98F , 0.99F , 1.0F } , {
- 10.0F , 0.0F , 25.0F , 40.0F } , { 4.04528284F , 4.1962266F , 4.8F ,
4.73962259F } , { - 10.0F , 0.0F , 25.0F , 40.0F } , - 3600.0F , { 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F ,
0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F , 0.0035F
, 0.0035F } , { 0.01F , 0.02F , 0.03F , 0.04F , 0.05F , 0.06F , 0.07F , 0.08F
, 0.09F , 0.1F , 0.11F , 0.12F , 0.13F , 0.14F , 0.15F , 0.16F , 0.17F ,
0.18F , 0.19F , 0.2F , 0.21F , 0.22F , 0.23F , 0.24F , 0.25F , 0.26F , 0.27F
, 0.28F , 0.29F , 0.3F , 0.31F , 0.32F , 0.33F , 0.34F , 0.35F , 0.36F ,
0.37F , 0.38F , 0.39F , 0.4F , 0.41F , 0.42F , 0.43F , 0.44F , 0.45F , 0.46F
, 0.47F , 0.48F , 0.49F , 0.5F , 0.51F , 0.52F , 0.53F , 0.54F , 0.55F ,
0.56F , 0.57F , 0.58F , 0.59F , 0.6F , 0.61F , 0.62F , 0.63F , 0.64F , 0.65F
, 0.66F , 0.67F , 0.68F , 0.69F , 0.7F , 0.71F , 0.72F , 0.73F , 0.74F ,
0.75F , 0.76F , 0.77F , 0.78F , 0.79F , 0.8F , 0.81F , 0.82F , 0.83F , 0.84F
, 0.85F , 0.86F , 0.87F , 0.88F , 0.89F , 0.9F , 0.91F , 0.92F , 0.93F ,
0.94F , 0.95F , 0.96F , 0.97F , 0.98F , 0.99F , 1.0F } , { - 10.0F , 0.0F ,
25.0F , 40.0F } , { 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F ,
5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F , 5000.0F
, 5000.0F , 5000.0F , 5000.0F , 5000.0F } , { 0.01F , 0.02F , 0.03F , 0.04F ,
0.05F , 0.06F , 0.07F , 0.08F , 0.09F , 0.1F , 0.11F , 0.12F , 0.13F , 0.14F
, 0.15F , 0.16F , 0.17F , 0.18F , 0.19F , 0.2F , 0.21F , 0.22F , 0.23F ,
0.24F , 0.25F , 0.26F , 0.27F , 0.28F , 0.29F , 0.3F , 0.31F , 0.32F , 0.33F
, 0.34F , 0.35F , 0.36F , 0.37F , 0.38F , 0.39F , 0.4F , 0.41F , 0.42F ,
0.43F , 0.44F , 0.45F , 0.46F , 0.47F , 0.48F , 0.49F , 0.5F , 0.51F , 0.52F
, 0.53F , 0.54F , 0.55F , 0.56F , 0.57F , 0.58F , 0.59F , 0.6F , 0.61F ,
0.62F , 0.63F , 0.64F , 0.65F , 0.66F , 0.67F , 0.68F , 0.69F , 0.7F , 0.71F
, 0.72F , 0.73F , 0.74F , 0.75F , 0.76F , 0.77F , 0.78F , 0.79F , 0.8F ,
0.81F , 0.82F , 0.83F , 0.84F , 0.85F , 0.86F , 0.87F , 0.88F , 0.89F , 0.9F
, 0.91F , 0.92F , 0.93F , 0.94F , 0.95F , 0.96F , 0.97F , 0.98F , 0.99F ,
1.0F } , { - 10.0F , 0.0F , 25.0F , 40.0F } , 0.1F , - 1.0F , 0.1F , 1.0F ,
0.0F , { 125.40377F , 130.083023F , 148.8F , 146.928299F } , { - 10.0F , 0.0F
, 25.0F , 40.0F } , 0.000277777785F , { 99U , 3U } , { 99U , 3U } , { 99U ,
3U } , { 99U , 3U } , false , false , true , true , true , true } ;
lgpwz0u0ydd lgpwz0u0yd ; hnvysp1jca0 jxmwlezzui4 ; cgl1fjb0mky m3hvauf25pt ;
static real32_T dur1esazxj ( int32_T n , const real32_T x [ 3 ] , int32_T ix0
) ; static void aqlphemgt0 ( real32_T Rs , const real32_T x [ 2 ] , const
real32_T S [ 4 ] , real32_T * zEstimated , real32_T Pxy [ 2 ] , real32_T * Sy
, real32_T dHdx [ 2 ] , real32_T * Rsqrt ) ; static void au5yvxgoja ( int32_T
m , int32_T n , real32_T alpha1 , int32_T ix0 , const real32_T y [ 2 ] ,
real32_T A [ 6 ] , int32_T ia0 ) ; static void ig4z3fn454 ( const real32_T A
[ 4 ] , real32_T S [ 4 ] , const real32_T Ns [ 2 ] ) ; static void ptvhp1sup0
( int32_T m , int32_T n , const real32_T A [ 8 ] , int32_T ia0 , const
real32_T x [ 8 ] , int32_T ix0 , real32_T y [ 2 ] ) ; static void npuopwc4oi
( int32_T m , int32_T n , real32_T alpha1 , int32_T ix0 , const real32_T y [
2 ] , real32_T A [ 8 ] , int32_T ia0 ) ; static void ouqwqhg05q ( const
real32_T A [ 4 ] , real32_T S [ 4 ] , const real32_T Ns [ 4 ] ) ; static
real32_T e2waoby4jy ( int32_T n , const real32_T x [ 4 ] , int32_T ix0 ) ;
static void mcq03og2j3 ( real32_T x , real32_T y , real32_T * c , real32_T *
s , real32_T * r ) ; static void opch223rhp ( real32_T * S , real32_T U ) ;
static void ols4jmmy3q ( const real32_T meanWeights [ 2 ] , real32_T
covWeights [ 2 ] , real32_T OOM , real32_T Y1 , real32_T Y2 [ 4 ] , const
real32_T X1 [ 2 ] , real32_T X2 [ 8 ] , real32_T * Ymean , real32_T * Sy ,
real32_T Pxy [ 2 ] ) ; static real32_T os21szobce ( int32_T n , const
real32_T x [ 2 ] , int32_T ix0 ) ; static void gspjo3duox ( real32_T Rs ,
const real32_T X1 [ 2 ] , const real32_T S [ 4 ] , real32_T alpha , real32_T
beta , real32_T kappa , real32_T * Ymean , real32_T Pxy [ 2 ] , real32_T * Sy
) ; static void jnelmoh0y1 ( const real32_T A [ 8 ] , real32_T Q [ 8 ] ,
real32_T R [ 4 ] ) ; static void jvxi1futgc ( real32_T * a , real32_T * b ,
real32_T * c , real32_T * s ) ; static void j2ajyr3qbc ( const real32_T A [ 4
] , real32_T U [ 4 ] , real32_T s [ 2 ] , real32_T V [ 4 ] ) ; static void
hhfsakcgr3 ( int32_T m , int32_T n , real32_T alpha1 , int32_T ix0 , const
real32_T y [ 2 ] , real32_T A [ 4 ] , int32_T ia0 ) ; static void iin5uzh4b1
( const real32_T A [ 4 ] , real32_T Q [ 4 ] , real32_T R [ 4 ] ) ; static
void mzaeaudewc ( const real32_T meanWeights [ 2 ] , real32_T covWeights [ 2
] , real32_T OOM , real32_T Y1 [ 2 ] , real32_T Y2 [ 8 ] , const real32_T X1
[ 2 ] , real32_T X2 [ 8 ] , real32_T Ymean [ 2 ] , real32_T Sy [ 4 ] ,
real32_T Pxy [ 4 ] ) ; const real32_T * jz0daukglw ; void ifqmvckqsc ( const
real32_T f0wc1ea4xi [ 4 ] , aw0ry0dq2h * localB ) { int32_T i ; for ( i = 0 ;
i < 2 ; i ++ ) { localB -> bl2v4xsqis [ i ] = 0.0F ; localB -> bl2v4xsqis [ i
] += f0wc1ea4xi [ i ] * f0wc1ea4xi [ 0 ] ; localB -> bl2v4xsqis [ i ] +=
f0wc1ea4xi [ i + 2 ] * f0wc1ea4xi [ 2 ] ; localB -> bl2v4xsqis [ i + 2 ] =
0.0F ; localB -> bl2v4xsqis [ i + 2 ] += f0wc1ea4xi [ i ] * f0wc1ea4xi [ 1 ]
; localB -> bl2v4xsqis [ i + 2 ] += f0wc1ea4xi [ i + 2 ] * f0wc1ea4xi [ 3 ] ;
} } void batteryMeasurementFcn ( const real32_T la5ehudzvt [ 2 ] , real32_T *
oagcr5zdbe ) { jxmwlezzui4 . ltasdsu0o5 = jxmwlezzui4 . mjiaqz0pes ;
jxmwlezzui4 . h4f2j434s4 = jz0daukglw [ 0 ] ; jxmwlezzui4 . plcabgpetd [ 0 ]
= la5ehudzvt [ 0 ] ; jxmwlezzui4 . plcabgpetd [ 1 ] = la5ehudzvt [ 1 ] ;
jxmwlezzui4 . ipj3ahugm4 = look2_iflf_pbinlcpw ( jxmwlezzui4 . plcabgpetd [ 0
] , jxmwlezzui4 . h4f2j434s4 , eyairrb1z1 . P_17 , eyairrb1z1 . P_18 ,
eyairrb1z1 . P_16 , m3hvauf25pt . hlj3p0pr2a , eyairrb1z1 . P_39 , 100U ) ;
jxmwlezzui4 . iwfwusoewe = look2_iflf_pbinlcpw ( jxmwlezzui4 . plcabgpetd [ 0
] , jxmwlezzui4 . h4f2j434s4 , eyairrb1z1 . P_20 , eyairrb1z1 . P_21 ,
eyairrb1z1 . P_19 , m3hvauf25pt . m52mkkb2kh , eyairrb1z1 . P_40 , 100U ) ;
jxmwlezzui4 . pnd1fmd50q = jxmwlezzui4 . iwfwusoewe * jxmwlezzui4 .
ltasdsu0o5 ; jxmwlezzui4 . cqn0icddjb = ( jxmwlezzui4 . ipj3ahugm4 -
jxmwlezzui4 . pnd1fmd50q ) - jxmwlezzui4 . plcabgpetd [ 1 ] ; * oagcr5zdbe =
jxmwlezzui4 . cqn0icddjb ; m3hvauf25pt . daqdwg0npq = 4 ; } void
batteryStateFcn ( const real32_T jggkfxmmpj [ 2 ] , real32_T amko35jlzj [ 2 ]
) { jxmwlezzui4 . kvpj3ph4f1 = jxmwlezzui4 . mjiaqz0pes ; jxmwlezzui4 .
iyqvvj15w1 = jz0daukglw [ 0 ] ; jxmwlezzui4 . jwzntsfb3o [ 0 ] = jggkfxmmpj [
0 ] ; jxmwlezzui4 . jwzntsfb3o [ 1 ] = jggkfxmmpj [ 1 ] ; jxmwlezzui4 .
mxe2rvde5a = look1_iflf_pbinlxpw ( jxmwlezzui4 . iyqvvj15w1 , eyairrb1z1 .
P_23 , eyairrb1z1 . P_22 , & m3hvauf25pt . pda2iy0azm , 3U ) ; jxmwlezzui4 .
akddtgrwkg = eyairrb1z1 . P_24 * jxmwlezzui4 . mxe2rvde5a ; jxmwlezzui4 .
fvs0zwjjz1 = jxmwlezzui4 . kvpj3ph4f1 / jxmwlezzui4 . akddtgrwkg ;
jxmwlezzui4 . dogb1dt21i = look2_iflf_pbinlcpw ( jxmwlezzui4 . jwzntsfb3o [ 0
] , jxmwlezzui4 . iyqvvj15w1 , eyairrb1z1 . P_26 , eyairrb1z1 . P_27 ,
eyairrb1z1 . P_25 , m3hvauf25pt . jyj2203tpf , eyairrb1z1 . P_41 , 100U ) ;
jxmwlezzui4 . ehfdhf1wl4 = look2_iflf_pbinlcpw ( jxmwlezzui4 . jwzntsfb3o [ 0
] , jxmwlezzui4 . iyqvvj15w1 , eyairrb1z1 . P_29 , eyairrb1z1 . P_30 ,
eyairrb1z1 . P_28 , m3hvauf25pt . clpdwbuv1f , eyairrb1z1 . P_42 , 100U ) ;
jxmwlezzui4 . bzz5iy524d = jxmwlezzui4 . dogb1dt21i * jxmwlezzui4 .
ehfdhf1wl4 ; jxmwlezzui4 . j0arte2jy2 = jxmwlezzui4 . jwzntsfb3o [ 1 ] /
jxmwlezzui4 . bzz5iy524d ; jxmwlezzui4 . pc2d15dlqu = jxmwlezzui4 .
kvpj3ph4f1 / jxmwlezzui4 . ehfdhf1wl4 ; jxmwlezzui4 . o4qe35nyzf =
jxmwlezzui4 . pc2d15dlqu - jxmwlezzui4 . j0arte2jy2 ; jxmwlezzui4 .
e40fo04v2l [ 0 ] = jxmwlezzui4 . fvs0zwjjz1 * eyairrb1z1 . P_31 ; jxmwlezzui4
. e40fo04v2l [ 1 ] = jxmwlezzui4 . o4qe35nyzf * eyairrb1z1 . P_31 ;
jxmwlezzui4 . flogsdoezf [ 0 ] = jxmwlezzui4 . jwzntsfb3o [ 0 ] + jxmwlezzui4
. e40fo04v2l [ 0 ] ; amko35jlzj [ 0 ] = jxmwlezzui4 . flogsdoezf [ 0 ] ;
jxmwlezzui4 . flogsdoezf [ 1 ] = jxmwlezzui4 . jwzntsfb3o [ 1 ] + jxmwlezzui4
. e40fo04v2l [ 1 ] ; amko35jlzj [ 1 ] = jxmwlezzui4 . flogsdoezf [ 1 ] ;
m3hvauf25pt . h2jujrkgf4 = 4 ; } static real32_T dur1esazxj ( int32_T n ,
const real32_T x [ 3 ] , int32_T ix0 ) { real32_T y ; y = 0.0F ; if ( n >= 1
) { if ( n == 1 ) { y = muSingleScalarAbs ( x [ ix0 - 1 ] ) ; } else {
jxmwlezzui4 . scale_o2tow3gxzm = 1.29246971E-26F ; jxmwlezzui4 . kend = ( ix0
+ n ) - 1 ; jxmwlezzui4 . k = ix0 ; while ( jxmwlezzui4 . k <= jxmwlezzui4 .
kend ) { jxmwlezzui4 . absxk_ipgns4eet5 = muSingleScalarAbs ( x [ jxmwlezzui4
. k - 1 ] ) ; if ( jxmwlezzui4 . absxk_ipgns4eet5 > jxmwlezzui4 .
scale_o2tow3gxzm ) { jxmwlezzui4 . t_fkr0r45bcn = jxmwlezzui4 .
scale_o2tow3gxzm / jxmwlezzui4 . absxk_ipgns4eet5 ; y = y * jxmwlezzui4 .
t_fkr0r45bcn * jxmwlezzui4 . t_fkr0r45bcn + 1.0F ; jxmwlezzui4 .
scale_o2tow3gxzm = jxmwlezzui4 . absxk_ipgns4eet5 ; } else { jxmwlezzui4 .
t_fkr0r45bcn = jxmwlezzui4 . absxk_ipgns4eet5 / jxmwlezzui4 .
scale_o2tow3gxzm ; y += jxmwlezzui4 . t_fkr0r45bcn * jxmwlezzui4 .
t_fkr0r45bcn ; } jxmwlezzui4 . k ++ ; } y = jxmwlezzui4 . scale_o2tow3gxzm *
muSingleScalarSqrt ( y ) ; } } return y ; } static void aqlphemgt0 ( real32_T
Rs , const real32_T x [ 2 ] , const real32_T S [ 4 ] , real32_T * zEstimated
, real32_T Pxy [ 2 ] , real32_T * Sy , real32_T dHdx [ 2 ] , real32_T * Rsqrt
) { egzjadadgd * const j1wfl5js5r = & ( lgpwz0u0yd . rtm ) ; void * args [ 2
] ; void * b_args [ 2 ] ; void * c_args [ 2 ] ; jxmwlezzui4 . c_x_dapv3jlyq5
[ 0 ] = x [ 0 ] ; jxmwlezzui4 . c_x_dapv3jlyq5 [ 1 ] = x [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i20 = 0 ;
jxmwlezzui4 . i20 < 2 ; jxmwlezzui4 . i20 ++ ) { jxmwlezzui4 . c_x_al00mdgrv4
[ jxmwlezzui4 . i20 ] = jxmwlezzui4 . c_x_dapv3jlyq5 [ jxmwlezzui4 . i20 ] ;
} batteryMeasurementFcn ( jxmwlezzui4 . c_x_al00mdgrv4 , & jxmwlezzui4 .
z_as0qznsxlv ) ; } else { args [ 0U ] = ( void * ) & jxmwlezzui4 .
c_x_dapv3jlyq5 ; args [ 1U ] = ( void * ) & jxmwlezzui4 . z_as0qznsxlv ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryMeasurementFcn" , 2 , & args [ 0U ] ) ; } jxmwlezzui4 . fState [ 0 ]
= x [ 0 ] ; jxmwlezzui4 . fState [ 1 ] = x [ 1 ] ; jxmwlezzui4 .
epsilon_ifotjnizh4 = muSingleScalarMax ( 0.000345266977F , 0.000345266977F *
muSingleScalarAbs ( x [ 0 ] ) ) ; jxmwlezzui4 . fState [ 0 ] = x [ 0 ] +
jxmwlezzui4 . epsilon_ifotjnizh4 ; if ( slIsRapidAcceleratorSimulating ( ) )
{ for ( jxmwlezzui4 . i21 = 0 ; jxmwlezzui4 . i21 < 2 ; jxmwlezzui4 . i21 ++
) { jxmwlezzui4 . fState_fdinthrxmb [ jxmwlezzui4 . i21 ] = jxmwlezzui4 .
fState [ jxmwlezzui4 . i21 ] ; } batteryMeasurementFcn ( jxmwlezzui4 .
fState_fdinthrxmb , & jxmwlezzui4 . imz_ltu3syw14q ) ; } else { c_args [ 0U ]
= ( void * ) & jxmwlezzui4 . fState ; c_args [ 1U ] = ( void * ) &
jxmwlezzui4 . imz_ltu3syw14q ; slcsInvokeSimulinkFunctionVoidArgs (
j1wfl5js5r -> _mdlRefSfcnS , "batteryMeasurementFcn" , 2 , & c_args [ 0U ] )
; } jxmwlezzui4 . b_x_ojunzewo4f = jxmwlezzui4 . imz_ltu3syw14q - jxmwlezzui4
. z_as0qznsxlv ; dHdx [ 0 ] = jxmwlezzui4 . b_x_ojunzewo4f / jxmwlezzui4 .
epsilon_ifotjnizh4 ; jxmwlezzui4 . fState [ 0 ] = x [ 0 ] ; jxmwlezzui4 .
fState [ 1 ] = x [ 1 ] ; jxmwlezzui4 . epsilon_ifotjnizh4 = muSingleScalarMax
( 0.000345266977F , 0.000345266977F * muSingleScalarAbs ( x [ 1 ] ) ) ;
jxmwlezzui4 . fState [ 1 ] = x [ 1 ] + jxmwlezzui4 . epsilon_ifotjnizh4 ; if
( slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i22 = 0 ;
jxmwlezzui4 . i22 < 2 ; jxmwlezzui4 . i22 ++ ) { jxmwlezzui4 .
fState_jzx3amusab [ jxmwlezzui4 . i22 ] = jxmwlezzui4 . fState [ jxmwlezzui4
. i22 ] ; } batteryMeasurementFcn ( jxmwlezzui4 . fState_jzx3amusab , &
jxmwlezzui4 . imz_ltu3syw14q ) ; } else { c_args [ 0U ] = ( void * ) &
jxmwlezzui4 . fState ; c_args [ 1U ] = ( void * ) & jxmwlezzui4 .
imz_ltu3syw14q ; slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r ->
_mdlRefSfcnS , "batteryMeasurementFcn" , 2 , & c_args [ 0U ] ) ; }
jxmwlezzui4 . b_x_ojunzewo4f = jxmwlezzui4 . imz_ltu3syw14q - jxmwlezzui4 .
z_as0qznsxlv ; dHdx [ 1 ] = jxmwlezzui4 . b_x_ojunzewo4f / jxmwlezzui4 .
epsilon_ifotjnizh4 ; * Rsqrt = Rs ; jxmwlezzui4 . d_x_ezqlmfzvpq [ 0 ] = x [
0 ] ; jxmwlezzui4 . d_x_ezqlmfzvpq [ 1 ] = x [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i23 = 0 ;
jxmwlezzui4 . i23 < 2 ; jxmwlezzui4 . i23 ++ ) { jxmwlezzui4 . d_x_bjvjhhzy4i
[ jxmwlezzui4 . i23 ] = jxmwlezzui4 . d_x_ezqlmfzvpq [ jxmwlezzui4 . i23 ] ;
} batteryMeasurementFcn ( jxmwlezzui4 . d_x_bjvjhhzy4i , zEstimated ) ; }
else { b_args [ 0U ] = ( void * ) & jxmwlezzui4 . d_x_ezqlmfzvpq ; b_args [
1U ] = ( void * ) zEstimated ; slcsInvokeSimulinkFunctionVoidArgs (
j1wfl5js5r -> _mdlRefSfcnS , "batteryMeasurementFcn" , 2 , & b_args [ 0U ] )
; } for ( jxmwlezzui4 . knt_p4u43j1tg5 = 0 ; jxmwlezzui4 . knt_p4u43j1tg5 < 2
; jxmwlezzui4 . knt_p4u43j1tg5 ++ ) { jxmwlezzui4 . S [ jxmwlezzui4 .
knt_p4u43j1tg5 ] = 0.0F ; jxmwlezzui4 . z_as0qznsxlv = jxmwlezzui4 . S [
jxmwlezzui4 . knt_p4u43j1tg5 ] ; jxmwlezzui4 . z_as0qznsxlv += S [
jxmwlezzui4 . knt_p4u43j1tg5 ] * S [ 0 ] ; jxmwlezzui4 . S [ jxmwlezzui4 .
knt_p4u43j1tg5 ] = jxmwlezzui4 . z_as0qznsxlv ; jxmwlezzui4 . z_as0qznsxlv =
jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 ] ; jxmwlezzui4 . z_as0qznsxlv
+= S [ jxmwlezzui4 . knt_p4u43j1tg5 + 2 ] * S [ 2 ] ; jxmwlezzui4 . S [
jxmwlezzui4 . knt_p4u43j1tg5 ] = jxmwlezzui4 . z_as0qznsxlv ; jxmwlezzui4 .
imz_ltu3syw14q = jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 ] * dHdx [ 0
] ; jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 + 2 ] = 0.0F ; jxmwlezzui4
. z_as0qznsxlv = jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 + 2 ] ;
jxmwlezzui4 . z_as0qznsxlv += S [ jxmwlezzui4 . knt_p4u43j1tg5 ] * S [ 1 ] ;
jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 + 2 ] = jxmwlezzui4 .
z_as0qznsxlv ; jxmwlezzui4 . z_as0qznsxlv = jxmwlezzui4 . S [ jxmwlezzui4 .
knt_p4u43j1tg5 + 2 ] ; jxmwlezzui4 . z_as0qznsxlv += S [ jxmwlezzui4 .
knt_p4u43j1tg5 + 2 ] * S [ 3 ] ; jxmwlezzui4 . S [ jxmwlezzui4 .
knt_p4u43j1tg5 + 2 ] = jxmwlezzui4 . z_as0qznsxlv ; jxmwlezzui4 .
imz_ltu3syw14q += jxmwlezzui4 . S [ jxmwlezzui4 . knt_p4u43j1tg5 + 2 ] * dHdx
[ 1 ] ; Pxy [ jxmwlezzui4 . knt_p4u43j1tg5 ] = jxmwlezzui4 . imz_ltu3syw14q ;
} jxmwlezzui4 . z_as0qznsxlv = 0.0F ; jxmwlezzui4 . z_as0qznsxlv += S [ 0 ] *
dHdx [ 0 ] ; jxmwlezzui4 . z_as0qznsxlv += S [ 1 ] * dHdx [ 1 ] ; jxmwlezzui4
. fState [ 0 ] = jxmwlezzui4 . z_as0qznsxlv ; jxmwlezzui4 . z_as0qznsxlv =
0.0F ; jxmwlezzui4 . z_as0qznsxlv += dHdx [ 0 ] * S [ 2 ] ; jxmwlezzui4 .
z_as0qznsxlv += dHdx [ 1 ] * S [ 3 ] ; jxmwlezzui4 . fState [ 1 ] =
jxmwlezzui4 . z_as0qznsxlv ; jxmwlezzui4 . A_g2mlkqadfk [ 0 ] = jxmwlezzui4 .
fState [ 0 ] ; jxmwlezzui4 . A_g2mlkqadfk [ 1 ] = jxmwlezzui4 . fState [ 1 ]
; jxmwlezzui4 . A_g2mlkqadfk [ 2 ] = Rs ; jxmwlezzui4 . z_as0qznsxlv =
jxmwlezzui4 . A_g2mlkqadfk [ 0 ] ; jxmwlezzui4 . imz_ltu3syw14q = dur1esazxj
( 2 , jxmwlezzui4 . A_g2mlkqadfk , 2 ) ; if ( jxmwlezzui4 . imz_ltu3syw14q !=
0.0F ) { jxmwlezzui4 . imz_ltu3syw14q = muSingleScalarHypot ( jxmwlezzui4 .
A_g2mlkqadfk [ 0 ] , jxmwlezzui4 . imz_ltu3syw14q ) ; if ( jxmwlezzui4 .
A_g2mlkqadfk [ 0 ] >= 0.0F ) { jxmwlezzui4 . imz_ltu3syw14q = - jxmwlezzui4 .
imz_ltu3syw14q ; } if ( muSingleScalarAbs ( jxmwlezzui4 . imz_ltu3syw14q ) <
9.86076132E-32F ) { jxmwlezzui4 . knt_p4u43j1tg5 = - 1 ; do { jxmwlezzui4 .
knt_p4u43j1tg5 ++ ; jxmwlezzui4 . aoffset = 1 ; while ( jxmwlezzui4 . aoffset
+ 1 <= 3 ) { jxmwlezzui4 . A_g2mlkqadfk [ jxmwlezzui4 . aoffset ] *=
1.01412048E+31F ; jxmwlezzui4 . aoffset ++ ; } jxmwlezzui4 . imz_ltu3syw14q
*= 1.01412048E+31F ; jxmwlezzui4 . z_as0qznsxlv *= 1.01412048E+31F ; } while
( ! ( muSingleScalarAbs ( jxmwlezzui4 . imz_ltu3syw14q ) >= 9.86076132E-32F )
) ; jxmwlezzui4 . imz_ltu3syw14q = muSingleScalarHypot ( jxmwlezzui4 .
z_as0qznsxlv , dur1esazxj ( 2 , jxmwlezzui4 . A_g2mlkqadfk , 2 ) ) ; if (
jxmwlezzui4 . z_as0qznsxlv >= 0.0F ) { jxmwlezzui4 . imz_ltu3syw14q = -
jxmwlezzui4 . imz_ltu3syw14q ; } jxmwlezzui4 . aoffset = 0 ; while (
jxmwlezzui4 . aoffset <= jxmwlezzui4 . knt_p4u43j1tg5 ) { jxmwlezzui4 .
imz_ltu3syw14q *= 9.86076132E-32F ; jxmwlezzui4 . aoffset ++ ; } jxmwlezzui4
. z_as0qznsxlv = jxmwlezzui4 . imz_ltu3syw14q ; } else { jxmwlezzui4 .
z_as0qznsxlv = jxmwlezzui4 . imz_ltu3syw14q ; } } jxmwlezzui4 . A_g2mlkqadfk
[ 0 ] = jxmwlezzui4 . z_as0qznsxlv ; * Sy = jxmwlezzui4 . A_g2mlkqadfk [ 0 ]
; } static void au5yvxgoja ( int32_T m , int32_T n , real32_T alpha1 ,
int32_T ix0 , const real32_T y [ 2 ] , real32_T A [ 6 ] , int32_T ia0 ) { if
( ! ( alpha1 == 0.0F ) ) { jxmwlezzui4 . jA_g2zhzn021n = ia0 - 1 ;
jxmwlezzui4 . jy_ex1giwvd5a = 0 ; jxmwlezzui4 . j_h22x25zmds = 0 ; while (
jxmwlezzui4 . j_h22x25zmds <= n - 1 ) { if ( y [ jxmwlezzui4 . jy_ex1giwvd5a
] != 0.0F ) { jxmwlezzui4 . temp_lmeaga4sr3 = y [ jxmwlezzui4 . jy_ex1giwvd5a
] * alpha1 ; jxmwlezzui4 . ix_fi0130k5dq = ix0 ; jxmwlezzui4 . ijA_chiskqqvhf
= jxmwlezzui4 . jA_g2zhzn021n ; jxmwlezzui4 . b_eikkpx0qsf = m + jxmwlezzui4
. jA_g2zhzn021n ; while ( jxmwlezzui4 . ijA_chiskqqvhf + 1 <= jxmwlezzui4 .
b_eikkpx0qsf ) { A [ jxmwlezzui4 . ijA_chiskqqvhf ] += A [ jxmwlezzui4 .
ix_fi0130k5dq - 1 ] * jxmwlezzui4 . temp_lmeaga4sr3 ; jxmwlezzui4 .
ix_fi0130k5dq ++ ; jxmwlezzui4 . ijA_chiskqqvhf ++ ; } } jxmwlezzui4 .
jy_ex1giwvd5a ++ ; jxmwlezzui4 . jA_g2zhzn021n += 3 ; jxmwlezzui4 .
j_h22x25zmds ++ ; } } } static void ig4z3fn454 ( const real32_T A [ 4 ] ,
real32_T S [ 4 ] , const real32_T Ns [ 2 ] ) { int32_T exitg1 ; for (
jxmwlezzui4 . knt_ao3bw4rxqa = 0 ; jxmwlezzui4 . knt_ao3bw4rxqa < 2 ;
jxmwlezzui4 . knt_ao3bw4rxqa ++ ) { jxmwlezzui4 . coffset_olzclp30in =
jxmwlezzui4 . knt_ao3bw4rxqa << 1 ; jxmwlezzui4 . s_gxhmnjv5xa = S [ 0 ] * A
[ jxmwlezzui4 . knt_ao3bw4rxqa ] ; jxmwlezzui4 . s_gxhmnjv5xa += A [
jxmwlezzui4 . knt_ao3bw4rxqa + 2 ] * S [ 1 ] ; jxmwlezzui4 . y_cv5hdgrwft [
jxmwlezzui4 . coffset_olzclp30in ] = jxmwlezzui4 . s_gxhmnjv5xa ; jxmwlezzui4
. s_gxhmnjv5xa = S [ 2 ] * A [ jxmwlezzui4 . knt_ao3bw4rxqa ] ; jxmwlezzui4 .
s_gxhmnjv5xa += A [ jxmwlezzui4 . knt_ao3bw4rxqa + 2 ] * S [ 3 ] ;
jxmwlezzui4 . y_cv5hdgrwft [ jxmwlezzui4 . coffset_olzclp30in + 1 ] =
jxmwlezzui4 . s_gxhmnjv5xa ; } jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] =
jxmwlezzui4 . y_cv5hdgrwft [ 0 ] ; jxmwlezzui4 . b_A_cl54gopm0x [ 1 ] =
jxmwlezzui4 . y_cv5hdgrwft [ 1 ] ; jxmwlezzui4 . b_A_cl54gopm0x [ 2 ] = Ns [
0 ] ; jxmwlezzui4 . tau_idx_0_o32uf0f2k4 = 0.0F ; jxmwlezzui4 .
work_ju13rw2h0m [ 0 ] = 0.0F ; jxmwlezzui4 . b_A_cl54gopm0x [ 3 ] =
jxmwlezzui4 . y_cv5hdgrwft [ 2 ] ; jxmwlezzui4 . b_A_cl54gopm0x [ 4 ] =
jxmwlezzui4 . y_cv5hdgrwft [ 3 ] ; jxmwlezzui4 . b_A_cl54gopm0x [ 5 ] = Ns [
1 ] ; jxmwlezzui4 . work_ju13rw2h0m [ 1 ] = 0.0F ; jxmwlezzui4 .
atmp_covwwkkf2n = jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] ; jxmwlezzui4 .
s_gxhmnjv5xa = xnrm2_oi0rQuNS ( 2 , jxmwlezzui4 . b_A_cl54gopm0x , 2 ) ; if (
jxmwlezzui4 . s_gxhmnjv5xa != 0.0F ) { jxmwlezzui4 . s_gxhmnjv5xa =
muSingleScalarHypot ( jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] , jxmwlezzui4 .
s_gxhmnjv5xa ) ; if ( jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] >= 0.0F ) {
jxmwlezzui4 . s_gxhmnjv5xa = - jxmwlezzui4 . s_gxhmnjv5xa ; } if (
muSingleScalarAbs ( jxmwlezzui4 . s_gxhmnjv5xa ) < 9.86076132E-32F ) {
jxmwlezzui4 . knt_ao3bw4rxqa = - 1 ; do { jxmwlezzui4 . knt_ao3bw4rxqa ++ ;
jxmwlezzui4 . aoffset_bbahwrwppi = 1 ; while ( jxmwlezzui4 .
aoffset_bbahwrwppi + 1 <= 3 ) { jxmwlezzui4 . b_A_cl54gopm0x [ jxmwlezzui4 .
aoffset_bbahwrwppi ] *= 1.01412048E+31F ; jxmwlezzui4 . aoffset_bbahwrwppi ++
; } jxmwlezzui4 . s_gxhmnjv5xa *= 1.01412048E+31F ; jxmwlezzui4 .
atmp_covwwkkf2n *= 1.01412048E+31F ; } while ( ! ( muSingleScalarAbs (
jxmwlezzui4 . s_gxhmnjv5xa ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 .
s_gxhmnjv5xa = muSingleScalarHypot ( jxmwlezzui4 . atmp_covwwkkf2n ,
xnrm2_oi0rQuNS ( 2 , jxmwlezzui4 . b_A_cl54gopm0x , 2 ) ) ; if ( jxmwlezzui4
. atmp_covwwkkf2n >= 0.0F ) { jxmwlezzui4 . s_gxhmnjv5xa = - jxmwlezzui4 .
s_gxhmnjv5xa ; } jxmwlezzui4 . tau_idx_0_o32uf0f2k4 = ( jxmwlezzui4 .
s_gxhmnjv5xa - jxmwlezzui4 . atmp_covwwkkf2n ) / jxmwlezzui4 . s_gxhmnjv5xa ;
jxmwlezzui4 . atmp_covwwkkf2n = 1.0F / ( jxmwlezzui4 . atmp_covwwkkf2n -
jxmwlezzui4 . s_gxhmnjv5xa ) ; jxmwlezzui4 . aoffset_bbahwrwppi = 1 ; while (
jxmwlezzui4 . aoffset_bbahwrwppi + 1 <= 3 ) { jxmwlezzui4 . b_A_cl54gopm0x [
jxmwlezzui4 . aoffset_bbahwrwppi ] *= jxmwlezzui4 . atmp_covwwkkf2n ;
jxmwlezzui4 . aoffset_bbahwrwppi ++ ; } jxmwlezzui4 . coffset_olzclp30in = 0
; while ( jxmwlezzui4 . coffset_olzclp30in <= jxmwlezzui4 . knt_ao3bw4rxqa )
{ jxmwlezzui4 . s_gxhmnjv5xa *= 9.86076132E-32F ; jxmwlezzui4 .
coffset_olzclp30in ++ ; } jxmwlezzui4 . atmp_covwwkkf2n = jxmwlezzui4 .
s_gxhmnjv5xa ; } else { jxmwlezzui4 . tau_idx_0_o32uf0f2k4 = ( jxmwlezzui4 .
s_gxhmnjv5xa - jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] ) / jxmwlezzui4 .
s_gxhmnjv5xa ; jxmwlezzui4 . atmp_covwwkkf2n = 1.0F / ( jxmwlezzui4 .
b_A_cl54gopm0x [ 0 ] - jxmwlezzui4 . s_gxhmnjv5xa ) ; jxmwlezzui4 .
coffset_olzclp30in = 1 ; while ( jxmwlezzui4 . coffset_olzclp30in + 1 <= 3 )
{ jxmwlezzui4 . b_A_cl54gopm0x [ jxmwlezzui4 . coffset_olzclp30in ] *=
jxmwlezzui4 . atmp_covwwkkf2n ; jxmwlezzui4 . coffset_olzclp30in ++ ; }
jxmwlezzui4 . atmp_covwwkkf2n = jxmwlezzui4 . s_gxhmnjv5xa ; } } jxmwlezzui4
. b_A_cl54gopm0x [ 0 ] = jxmwlezzui4 . atmp_covwwkkf2n ; jxmwlezzui4 .
s_gxhmnjv5xa = jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] ; jxmwlezzui4 .
b_A_cl54gopm0x [ 0 ] = 1.0F ; if ( jxmwlezzui4 . tau_idx_0_o32uf0f2k4 != 0.0F
) { jxmwlezzui4 . knt_ao3bw4rxqa = 3 ; jxmwlezzui4 . coffset_olzclp30in = 2 ;
while ( ( jxmwlezzui4 . knt_ao3bw4rxqa > 0 ) && ( jxmwlezzui4 .
b_A_cl54gopm0x [ jxmwlezzui4 . coffset_olzclp30in ] == 0.0F ) ) { jxmwlezzui4
. knt_ao3bw4rxqa -- ; jxmwlezzui4 . coffset_olzclp30in -- ; } jxmwlezzui4 .
coffset_olzclp30in = 1 ; jxmwlezzui4 . aoffset_bbahwrwppi = 0 ; do { exitg1 =
0 ; if ( jxmwlezzui4 . aoffset_bbahwrwppi + 4 <= jxmwlezzui4 . knt_ao3bw4rxqa
+ 3 ) { if ( jxmwlezzui4 . b_A_cl54gopm0x [ jxmwlezzui4 . aoffset_bbahwrwppi
+ 3 ] != 0.0F ) { exitg1 = 1 ; } else { jxmwlezzui4 . aoffset_bbahwrwppi ++ ;
} } else { jxmwlezzui4 . coffset_olzclp30in = 0 ; exitg1 = 1 ; } } while (
exitg1 == 0 ) ; } else { jxmwlezzui4 . knt_ao3bw4rxqa = 0 ; jxmwlezzui4 .
coffset_olzclp30in = 0 ; } if ( jxmwlezzui4 . knt_ao3bw4rxqa > 0 ) {
xgemv_wWs4ocix ( jxmwlezzui4 . knt_ao3bw4rxqa , jxmwlezzui4 .
coffset_olzclp30in , jxmwlezzui4 . b_A_cl54gopm0x , 4 , jxmwlezzui4 .
b_A_cl54gopm0x , 1 , jxmwlezzui4 . work_ju13rw2h0m ) ; au5yvxgoja (
jxmwlezzui4 . knt_ao3bw4rxqa , jxmwlezzui4 . coffset_olzclp30in , -
jxmwlezzui4 . tau_idx_0_o32uf0f2k4 , 1 , jxmwlezzui4 . work_ju13rw2h0m ,
jxmwlezzui4 . b_A_cl54gopm0x , 4 ) ; } jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] =
jxmwlezzui4 . s_gxhmnjv5xa ; jxmwlezzui4 . atmp_covwwkkf2n = jxmwlezzui4 .
b_A_cl54gopm0x [ 4 ] ; jxmwlezzui4 . s_gxhmnjv5xa = xnrm2_oi0rQuNS ( 1 ,
jxmwlezzui4 . b_A_cl54gopm0x , 6 ) ; if ( jxmwlezzui4 . s_gxhmnjv5xa != 0.0F
) { jxmwlezzui4 . s_gxhmnjv5xa = muSingleScalarHypot ( jxmwlezzui4 .
b_A_cl54gopm0x [ 4 ] , jxmwlezzui4 . s_gxhmnjv5xa ) ; if ( jxmwlezzui4 .
b_A_cl54gopm0x [ 4 ] >= 0.0F ) { jxmwlezzui4 . s_gxhmnjv5xa = - jxmwlezzui4 .
s_gxhmnjv5xa ; } if ( muSingleScalarAbs ( jxmwlezzui4 . s_gxhmnjv5xa ) <
9.86076132E-32F ) { jxmwlezzui4 . knt_ao3bw4rxqa = - 1 ; do { jxmwlezzui4 .
knt_ao3bw4rxqa ++ ; jxmwlezzui4 . aoffset_bbahwrwppi = 5 ; while (
jxmwlezzui4 . aoffset_bbahwrwppi + 1 <= 6 ) { jxmwlezzui4 . b_A_cl54gopm0x [
jxmwlezzui4 . aoffset_bbahwrwppi ] *= 1.01412048E+31F ; jxmwlezzui4 .
aoffset_bbahwrwppi ++ ; } jxmwlezzui4 . s_gxhmnjv5xa *= 1.01412048E+31F ;
jxmwlezzui4 . atmp_covwwkkf2n *= 1.01412048E+31F ; } while ( ! (
muSingleScalarAbs ( jxmwlezzui4 . s_gxhmnjv5xa ) >= 9.86076132E-32F ) ) ;
jxmwlezzui4 . s_gxhmnjv5xa = muSingleScalarHypot ( jxmwlezzui4 .
atmp_covwwkkf2n , xnrm2_oi0rQuNS ( 1 , jxmwlezzui4 . b_A_cl54gopm0x , 6 ) ) ;
if ( jxmwlezzui4 . atmp_covwwkkf2n >= 0.0F ) { jxmwlezzui4 . s_gxhmnjv5xa = -
jxmwlezzui4 . s_gxhmnjv5xa ; } jxmwlezzui4 . atmp_covwwkkf2n = 1.0F / (
jxmwlezzui4 . atmp_covwwkkf2n - jxmwlezzui4 . s_gxhmnjv5xa ) ; jxmwlezzui4 .
aoffset_bbahwrwppi = 5 ; while ( jxmwlezzui4 . aoffset_bbahwrwppi + 1 <= 6 )
{ jxmwlezzui4 . b_A_cl54gopm0x [ jxmwlezzui4 . aoffset_bbahwrwppi ] *=
jxmwlezzui4 . atmp_covwwkkf2n ; jxmwlezzui4 . aoffset_bbahwrwppi ++ ; }
jxmwlezzui4 . coffset_olzclp30in = 0 ; while ( jxmwlezzui4 .
coffset_olzclp30in <= jxmwlezzui4 . knt_ao3bw4rxqa ) { jxmwlezzui4 .
s_gxhmnjv5xa *= 9.86076132E-32F ; jxmwlezzui4 . coffset_olzclp30in ++ ; }
jxmwlezzui4 . atmp_covwwkkf2n = jxmwlezzui4 . s_gxhmnjv5xa ; } else {
jxmwlezzui4 . atmp_covwwkkf2n = 1.0F / ( jxmwlezzui4 . b_A_cl54gopm0x [ 4 ] -
jxmwlezzui4 . s_gxhmnjv5xa ) ; jxmwlezzui4 . coffset_olzclp30in = 5 ; while (
jxmwlezzui4 . coffset_olzclp30in + 1 <= 6 ) { jxmwlezzui4 . b_A_cl54gopm0x [
jxmwlezzui4 . coffset_olzclp30in ] *= jxmwlezzui4 . atmp_covwwkkf2n ;
jxmwlezzui4 . coffset_olzclp30in ++ ; } jxmwlezzui4 . atmp_covwwkkf2n =
jxmwlezzui4 . s_gxhmnjv5xa ; } } jxmwlezzui4 . b_A_cl54gopm0x [ 4 ] =
jxmwlezzui4 . atmp_covwwkkf2n ; jxmwlezzui4 . y_cv5hdgrwft [ 0 ] =
jxmwlezzui4 . b_A_cl54gopm0x [ 0 ] ; jxmwlezzui4 . coffset_olzclp30in = 0 ;
while ( jxmwlezzui4 . coffset_olzclp30in <= 1 ) { jxmwlezzui4 . y_cv5hdgrwft
[ jxmwlezzui4 . coffset_olzclp30in + 2 ] = jxmwlezzui4 . b_A_cl54gopm0x [
jxmwlezzui4 . coffset_olzclp30in + 3 ] ; jxmwlezzui4 . coffset_olzclp30in ++
; } S [ 0 ] = jxmwlezzui4 . y_cv5hdgrwft [ 0 ] ; S [ 1 ] = jxmwlezzui4 .
y_cv5hdgrwft [ 2 ] ; S [ 2 ] = 0.0F ; S [ 3 ] = jxmwlezzui4 . y_cv5hdgrwft [
3 ] ; } static void ptvhp1sup0 ( int32_T m , int32_T n , const real32_T A [ 8
] , int32_T ia0 , const real32_T x [ 8 ] , int32_T ix0 , real32_T y [ 2 ] ) {
if ( ( m != 0 ) && ( n != 0 ) ) { jxmwlezzui4 . b_iy = 0 ; while (
jxmwlezzui4 . b_iy <= n - 1 ) { y [ jxmwlezzui4 . b_iy ] = 0.0F ; jxmwlezzui4
. b_iy ++ ; } jxmwlezzui4 . b_iy = 0 ; jxmwlezzui4 . b_af2thr01pj = ( ( n - 1
) << 2 ) + ia0 ; jxmwlezzui4 . iac = ia0 ; while ( jxmwlezzui4 . iac <=
jxmwlezzui4 . b_af2thr01pj ) { jxmwlezzui4 . ix_daul3jxkyn = ix0 ;
jxmwlezzui4 . c_fme3ifz5tm = 0.0F ; jxmwlezzui4 . d = ( jxmwlezzui4 . iac + m
) - 1 ; jxmwlezzui4 . ia = jxmwlezzui4 . iac ; while ( jxmwlezzui4 . ia <=
jxmwlezzui4 . d ) { jxmwlezzui4 . c_fme3ifz5tm += A [ jxmwlezzui4 . ia - 1 ]
* x [ jxmwlezzui4 . ix_daul3jxkyn - 1 ] ; jxmwlezzui4 . ix_daul3jxkyn ++ ;
jxmwlezzui4 . ia ++ ; } y [ jxmwlezzui4 . b_iy ] += jxmwlezzui4 .
c_fme3ifz5tm ; jxmwlezzui4 . b_iy ++ ; jxmwlezzui4 . iac += 4 ; } } } static
void npuopwc4oi ( int32_T m , int32_T n , real32_T alpha1 , int32_T ix0 ,
const real32_T y [ 2 ] , real32_T A [ 8 ] , int32_T ia0 ) { if ( ! ( alpha1
== 0.0F ) ) { jxmwlezzui4 . jA = ia0 - 1 ; jxmwlezzui4 . jy = 0 ; jxmwlezzui4
. j = 0 ; while ( jxmwlezzui4 . j <= n - 1 ) { if ( y [ jxmwlezzui4 . jy ] !=
0.0F ) { jxmwlezzui4 . temp_fft32lqtda = y [ jxmwlezzui4 . jy ] * alpha1 ;
jxmwlezzui4 . ix = ix0 ; jxmwlezzui4 . ijA = jxmwlezzui4 . jA ; jxmwlezzui4 .
b = m + jxmwlezzui4 . jA ; while ( jxmwlezzui4 . ijA + 1 <= jxmwlezzui4 . b )
{ A [ jxmwlezzui4 . ijA ] += A [ jxmwlezzui4 . ix - 1 ] * jxmwlezzui4 .
temp_fft32lqtda ; jxmwlezzui4 . ix ++ ; jxmwlezzui4 . ijA ++ ; } }
jxmwlezzui4 . jy ++ ; jxmwlezzui4 . jA += 4 ; jxmwlezzui4 . j ++ ; } } }
static void ouqwqhg05q ( const real32_T A [ 4 ] , real32_T S [ 4 ] , const
real32_T Ns [ 4 ] ) { int32_T exitg1 ; for ( jxmwlezzui4 . knt_ekaxkojgre = 0
; jxmwlezzui4 . knt_ekaxkojgre < 2 ; jxmwlezzui4 . knt_ekaxkojgre ++ ) {
jxmwlezzui4 . coffset_appanwio2d = jxmwlezzui4 . knt_ekaxkojgre << 1 ;
jxmwlezzui4 . s_izlwqhinl5 = S [ 0 ] * A [ jxmwlezzui4 . knt_ekaxkojgre ] ;
jxmwlezzui4 . s_izlwqhinl5 += A [ jxmwlezzui4 . knt_ekaxkojgre + 2 ] * S [ 1
] ; jxmwlezzui4 . y [ jxmwlezzui4 . coffset_appanwio2d ] = jxmwlezzui4 .
s_izlwqhinl5 ; jxmwlezzui4 . s_izlwqhinl5 = S [ 2 ] * A [ jxmwlezzui4 .
knt_ekaxkojgre ] ; jxmwlezzui4 . s_izlwqhinl5 += A [ jxmwlezzui4 .
knt_ekaxkojgre + 2 ] * S [ 3 ] ; jxmwlezzui4 . y [ jxmwlezzui4 .
coffset_appanwio2d + 1 ] = jxmwlezzui4 . s_izlwqhinl5 ; } jxmwlezzui4 . b_A [
0 ] = jxmwlezzui4 . y [ 0 ] ; jxmwlezzui4 . b_A [ 2 ] = Ns [ 0 ] ;
jxmwlezzui4 . b_A [ 1 ] = jxmwlezzui4 . y [ 1 ] ; jxmwlezzui4 . b_A [ 3 ] =
Ns [ 2 ] ; jxmwlezzui4 . tau_idx_0 = 0.0F ; jxmwlezzui4 . work [ 0 ] = 0.0F ;
jxmwlezzui4 . b_A [ 4 ] = jxmwlezzui4 . y [ 2 ] ; jxmwlezzui4 . b_A [ 6 ] =
Ns [ 1 ] ; jxmwlezzui4 . b_A [ 5 ] = jxmwlezzui4 . y [ 3 ] ; jxmwlezzui4 .
b_A [ 7 ] = Ns [ 3 ] ; jxmwlezzui4 . work [ 1 ] = 0.0F ; jxmwlezzui4 . atmp =
jxmwlezzui4 . b_A [ 0 ] ; jxmwlezzui4 . s_izlwqhinl5 = xnrm2_Anysr1Sx ( 3 ,
jxmwlezzui4 . b_A , 2 ) ; if ( jxmwlezzui4 . s_izlwqhinl5 != 0.0F ) {
jxmwlezzui4 . s_izlwqhinl5 = muSingleScalarHypot ( jxmwlezzui4 . b_A [ 0 ] ,
jxmwlezzui4 . s_izlwqhinl5 ) ; if ( jxmwlezzui4 . b_A [ 0 ] >= 0.0F ) {
jxmwlezzui4 . s_izlwqhinl5 = - jxmwlezzui4 . s_izlwqhinl5 ; } if (
muSingleScalarAbs ( jxmwlezzui4 . s_izlwqhinl5 ) < 9.86076132E-32F ) {
jxmwlezzui4 . knt_ekaxkojgre = - 1 ; do { jxmwlezzui4 . knt_ekaxkojgre ++ ;
jxmwlezzui4 . aoffset_jdc3mylhw0 = 1 ; while ( jxmwlezzui4 .
aoffset_jdc3mylhw0 + 1 <= 4 ) { jxmwlezzui4 . b_A [ jxmwlezzui4 .
aoffset_jdc3mylhw0 ] *= 1.01412048E+31F ; jxmwlezzui4 . aoffset_jdc3mylhw0 ++
; } jxmwlezzui4 . s_izlwqhinl5 *= 1.01412048E+31F ; jxmwlezzui4 . atmp *=
1.01412048E+31F ; } while ( ! ( muSingleScalarAbs ( jxmwlezzui4 .
s_izlwqhinl5 ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 . s_izlwqhinl5 =
muSingleScalarHypot ( jxmwlezzui4 . atmp , xnrm2_Anysr1Sx ( 3 , jxmwlezzui4 .
b_A , 2 ) ) ; if ( jxmwlezzui4 . atmp >= 0.0F ) { jxmwlezzui4 . s_izlwqhinl5
= - jxmwlezzui4 . s_izlwqhinl5 ; } jxmwlezzui4 . tau_idx_0 = ( jxmwlezzui4 .
s_izlwqhinl5 - jxmwlezzui4 . atmp ) / jxmwlezzui4 . s_izlwqhinl5 ;
jxmwlezzui4 . atmp = 1.0F / ( jxmwlezzui4 . atmp - jxmwlezzui4 . s_izlwqhinl5
) ; jxmwlezzui4 . aoffset_jdc3mylhw0 = 1 ; while ( jxmwlezzui4 .
aoffset_jdc3mylhw0 + 1 <= 4 ) { jxmwlezzui4 . b_A [ jxmwlezzui4 .
aoffset_jdc3mylhw0 ] *= jxmwlezzui4 . atmp ; jxmwlezzui4 . aoffset_jdc3mylhw0
++ ; } jxmwlezzui4 . coffset_appanwio2d = 0 ; while ( jxmwlezzui4 .
coffset_appanwio2d <= jxmwlezzui4 . knt_ekaxkojgre ) { jxmwlezzui4 .
s_izlwqhinl5 *= 9.86076132E-32F ; jxmwlezzui4 . coffset_appanwio2d ++ ; }
jxmwlezzui4 . atmp = jxmwlezzui4 . s_izlwqhinl5 ; } else { jxmwlezzui4 .
tau_idx_0 = ( jxmwlezzui4 . s_izlwqhinl5 - jxmwlezzui4 . b_A [ 0 ] ) /
jxmwlezzui4 . s_izlwqhinl5 ; jxmwlezzui4 . atmp = 1.0F / ( jxmwlezzui4 . b_A
[ 0 ] - jxmwlezzui4 . s_izlwqhinl5 ) ; jxmwlezzui4 . coffset_appanwio2d = 1 ;
while ( jxmwlezzui4 . coffset_appanwio2d + 1 <= 4 ) { jxmwlezzui4 . b_A [
jxmwlezzui4 . coffset_appanwio2d ] *= jxmwlezzui4 . atmp ; jxmwlezzui4 .
coffset_appanwio2d ++ ; } jxmwlezzui4 . atmp = jxmwlezzui4 . s_izlwqhinl5 ; }
} jxmwlezzui4 . b_A [ 0 ] = jxmwlezzui4 . atmp ; jxmwlezzui4 . s_izlwqhinl5 =
jxmwlezzui4 . b_A [ 0 ] ; jxmwlezzui4 . b_A [ 0 ] = 1.0F ; if ( jxmwlezzui4 .
tau_idx_0 != 0.0F ) { jxmwlezzui4 . knt_ekaxkojgre = 4 ; jxmwlezzui4 .
coffset_appanwio2d = 3 ; while ( ( jxmwlezzui4 . knt_ekaxkojgre > 0 ) && (
jxmwlezzui4 . b_A [ jxmwlezzui4 . coffset_appanwio2d ] == 0.0F ) ) {
jxmwlezzui4 . knt_ekaxkojgre -- ; jxmwlezzui4 . coffset_appanwio2d -- ; }
jxmwlezzui4 . coffset_appanwio2d = 1 ; jxmwlezzui4 . aoffset_jdc3mylhw0 = 0 ;
do { exitg1 = 0 ; if ( jxmwlezzui4 . aoffset_jdc3mylhw0 + 5 <= jxmwlezzui4 .
knt_ekaxkojgre + 4 ) { if ( jxmwlezzui4 . b_A [ jxmwlezzui4 .
aoffset_jdc3mylhw0 + 4 ] != 0.0F ) { exitg1 = 1 ; } else { jxmwlezzui4 .
aoffset_jdc3mylhw0 ++ ; } } else { jxmwlezzui4 . coffset_appanwio2d = 0 ;
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } else { jxmwlezzui4 .
knt_ekaxkojgre = 0 ; jxmwlezzui4 . coffset_appanwio2d = 0 ; } if (
jxmwlezzui4 . knt_ekaxkojgre > 0 ) { ptvhp1sup0 ( jxmwlezzui4 .
knt_ekaxkojgre , jxmwlezzui4 . coffset_appanwio2d , jxmwlezzui4 . b_A , 5 ,
jxmwlezzui4 . b_A , 1 , jxmwlezzui4 . work ) ; npuopwc4oi ( jxmwlezzui4 .
knt_ekaxkojgre , jxmwlezzui4 . coffset_appanwio2d , - jxmwlezzui4 . tau_idx_0
, 1 , jxmwlezzui4 . work , jxmwlezzui4 . b_A , 5 ) ; } jxmwlezzui4 . b_A [ 0
] = jxmwlezzui4 . s_izlwqhinl5 ; jxmwlezzui4 . atmp = jxmwlezzui4 . b_A [ 5 ]
; jxmwlezzui4 . s_izlwqhinl5 = xnrm2_Anysr1Sx ( 2 , jxmwlezzui4 . b_A , 7 ) ;
if ( jxmwlezzui4 . s_izlwqhinl5 != 0.0F ) { jxmwlezzui4 . s_izlwqhinl5 =
muSingleScalarHypot ( jxmwlezzui4 . b_A [ 5 ] , jxmwlezzui4 . s_izlwqhinl5 )
; if ( jxmwlezzui4 . b_A [ 5 ] >= 0.0F ) { jxmwlezzui4 . s_izlwqhinl5 = -
jxmwlezzui4 . s_izlwqhinl5 ; } if ( muSingleScalarAbs ( jxmwlezzui4 .
s_izlwqhinl5 ) < 9.86076132E-32F ) { jxmwlezzui4 . knt_ekaxkojgre = - 1 ; do
{ jxmwlezzui4 . knt_ekaxkojgre ++ ; jxmwlezzui4 . aoffset_jdc3mylhw0 = 6 ;
while ( jxmwlezzui4 . aoffset_jdc3mylhw0 + 1 <= 8 ) { jxmwlezzui4 . b_A [
jxmwlezzui4 . aoffset_jdc3mylhw0 ] *= 1.01412048E+31F ; jxmwlezzui4 .
aoffset_jdc3mylhw0 ++ ; } jxmwlezzui4 . s_izlwqhinl5 *= 1.01412048E+31F ;
jxmwlezzui4 . atmp *= 1.01412048E+31F ; } while ( ! ( muSingleScalarAbs (
jxmwlezzui4 . s_izlwqhinl5 ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 .
s_izlwqhinl5 = muSingleScalarHypot ( jxmwlezzui4 . atmp , xnrm2_Anysr1Sx ( 2
, jxmwlezzui4 . b_A , 7 ) ) ; if ( jxmwlezzui4 . atmp >= 0.0F ) { jxmwlezzui4
. s_izlwqhinl5 = - jxmwlezzui4 . s_izlwqhinl5 ; } jxmwlezzui4 . atmp = 1.0F /
( jxmwlezzui4 . atmp - jxmwlezzui4 . s_izlwqhinl5 ) ; jxmwlezzui4 .
aoffset_jdc3mylhw0 = 6 ; while ( jxmwlezzui4 . aoffset_jdc3mylhw0 + 1 <= 8 )
{ jxmwlezzui4 . b_A [ jxmwlezzui4 . aoffset_jdc3mylhw0 ] *= jxmwlezzui4 .
atmp ; jxmwlezzui4 . aoffset_jdc3mylhw0 ++ ; } jxmwlezzui4 .
coffset_appanwio2d = 0 ; while ( jxmwlezzui4 . coffset_appanwio2d <=
jxmwlezzui4 . knt_ekaxkojgre ) { jxmwlezzui4 . s_izlwqhinl5 *=
9.86076132E-32F ; jxmwlezzui4 . coffset_appanwio2d ++ ; } jxmwlezzui4 . atmp
= jxmwlezzui4 . s_izlwqhinl5 ; } else { jxmwlezzui4 . atmp = 1.0F / (
jxmwlezzui4 . b_A [ 5 ] - jxmwlezzui4 . s_izlwqhinl5 ) ; jxmwlezzui4 .
coffset_appanwio2d = 6 ; while ( jxmwlezzui4 . coffset_appanwio2d + 1 <= 8 )
{ jxmwlezzui4 . b_A [ jxmwlezzui4 . coffset_appanwio2d ] *= jxmwlezzui4 .
atmp ; jxmwlezzui4 . coffset_appanwio2d ++ ; } jxmwlezzui4 . atmp =
jxmwlezzui4 . s_izlwqhinl5 ; } } jxmwlezzui4 . b_A [ 5 ] = jxmwlezzui4 . atmp
; jxmwlezzui4 . y [ 0 ] = jxmwlezzui4 . b_A [ 0 ] ; jxmwlezzui4 .
coffset_appanwio2d = 0 ; while ( jxmwlezzui4 . coffset_appanwio2d <= 1 ) {
jxmwlezzui4 . y [ jxmwlezzui4 . coffset_appanwio2d + 2 ] = jxmwlezzui4 . b_A
[ jxmwlezzui4 . coffset_appanwio2d + 4 ] ; jxmwlezzui4 . coffset_appanwio2d
++ ; } S [ 0 ] = jxmwlezzui4 . y [ 0 ] ; S [ 1 ] = jxmwlezzui4 . y [ 2 ] ; S
[ 2 ] = 0.0F ; S [ 3 ] = jxmwlezzui4 . y [ 3 ] ; } static real32_T e2waoby4jy
( int32_T n , const real32_T x [ 4 ] , int32_T ix0 ) { real32_T y ; y = 0.0F
; if ( n >= 1 ) { if ( n == 1 ) { y = muSingleScalarAbs ( x [ ix0 - 1 ] ) ; }
else { jxmwlezzui4 . scale_mcke2mvmgq = 1.29246971E-26F ; jxmwlezzui4 .
kend_ieu0h5zwzh = ( ix0 + n ) - 1 ; jxmwlezzui4 . k_occ0bygi5g = ix0 ; while
( jxmwlezzui4 . k_occ0bygi5g <= jxmwlezzui4 . kend_ieu0h5zwzh ) { jxmwlezzui4
. absxk_h34q0rd5y0 = muSingleScalarAbs ( x [ jxmwlezzui4 . k_occ0bygi5g - 1 ]
) ; if ( jxmwlezzui4 . absxk_h34q0rd5y0 > jxmwlezzui4 . scale_mcke2mvmgq ) {
jxmwlezzui4 . t_csvudntq5v = jxmwlezzui4 . scale_mcke2mvmgq / jxmwlezzui4 .
absxk_h34q0rd5y0 ; y = y * jxmwlezzui4 . t_csvudntq5v * jxmwlezzui4 .
t_csvudntq5v + 1.0F ; jxmwlezzui4 . scale_mcke2mvmgq = jxmwlezzui4 .
absxk_h34q0rd5y0 ; } else { jxmwlezzui4 . t_csvudntq5v = jxmwlezzui4 .
absxk_h34q0rd5y0 / jxmwlezzui4 . scale_mcke2mvmgq ; y += jxmwlezzui4 .
t_csvudntq5v * jxmwlezzui4 . t_csvudntq5v ; } jxmwlezzui4 . k_occ0bygi5g ++ ;
} y = jxmwlezzui4 . scale_mcke2mvmgq * muSingleScalarSqrt ( y ) ; } } return
y ; } static void mcq03og2j3 ( real32_T x , real32_T y , real32_T * c ,
real32_T * s , real32_T * r ) { jxmwlezzui4 . absx = muSingleScalarAbs ( x )
; jxmwlezzui4 . absy = muSingleScalarAbs ( y ) ; if ( jxmwlezzui4 . absy ==
0.0F ) { * c = 1.0F ; * s = 0.0F ; * r = x ; } else if ( jxmwlezzui4 . absx
== 0.0F ) { * c = 0.0F ; * s = 1.0F ; * r = y ; } else { jxmwlezzui4 . absy
+= jxmwlezzui4 . absx ; jxmwlezzui4 . xx = x / jxmwlezzui4 . absy ;
jxmwlezzui4 . yy = y / jxmwlezzui4 . absy ; jxmwlezzui4 . absx =
muSingleScalarAbs ( jxmwlezzui4 . xx ) ; jxmwlezzui4 . rho =
muSingleScalarHypot ( jxmwlezzui4 . absx , muSingleScalarAbs ( jxmwlezzui4 .
yy ) ) ; * c = jxmwlezzui4 . absx / jxmwlezzui4 . rho ; jxmwlezzui4 . xx /=
jxmwlezzui4 . absx ; * s = jxmwlezzui4 . xx * jxmwlezzui4 . yy / jxmwlezzui4
. rho ; jxmwlezzui4 . rho *= jxmwlezzui4 . absy ; * r = jxmwlezzui4 . rho *
jxmwlezzui4 . xx ; } } static void opch223rhp ( real32_T * S , real32_T U ) {
jxmwlezzui4 . R = * S ; jxmwlezzui4 . p = 0 ; jxmwlezzui4 .
errorCondition_cuicvykoli = ( * S == 0.0F ) ; if ( jxmwlezzui4 .
errorCondition_cuicvykoli ) { jxmwlezzui4 . p = 2 ; } else { jxmwlezzui4 .
s_ax3wx1gs5w = U / * S ; jxmwlezzui4 . nrmx = muSingleScalarAbs ( jxmwlezzui4
. s_ax3wx1gs5w ) ; if ( jxmwlezzui4 . nrmx >= 1.0F ) { jxmwlezzui4 . p = 1 ;
} else { mcq03og2j3 ( muSingleScalarSqrt ( 1.0F - jxmwlezzui4 . nrmx *
jxmwlezzui4 . nrmx ) , jxmwlezzui4 . s_ax3wx1gs5w , & jxmwlezzui4 . R , &
jxmwlezzui4 . c_evg4t2fsev , & jxmwlezzui4 . alpha ) ; jxmwlezzui4 . R =
jxmwlezzui4 . R * * S - jxmwlezzui4 . c_evg4t2fsev * 0.0F ; } } * S =
jxmwlezzui4 . R ; if ( jxmwlezzui4 . p != 0 ) { jxmwlezzui4 . s_ax3wx1gs5w =
jxmwlezzui4 . R * jxmwlezzui4 . R - U * U ; if ( ( ! muSingleScalarIsInf (
jxmwlezzui4 . s_ax3wx1gs5w ) ) && ( ! muSingleScalarIsNaN ( jxmwlezzui4 .
s_ax3wx1gs5w ) ) ) { jxmwlezzui4 . nrmx = 1.0F ; if ( jxmwlezzui4 .
s_ax3wx1gs5w != 0.0F ) { jxmwlezzui4 . s_ax3wx1gs5w = muSingleScalarAbs (
jxmwlezzui4 . s_ax3wx1gs5w ) ; } } else { jxmwlezzui4 . s_ax3wx1gs5w = (
rtNaNF ) ; jxmwlezzui4 . nrmx = ( rtNaNF ) ; } jxmwlezzui4 . s_ax3wx1gs5w =
muSingleScalarSqrt ( jxmwlezzui4 . s_ax3wx1gs5w ) ; * S = jxmwlezzui4 . nrmx
* jxmwlezzui4 . s_ax3wx1gs5w ; } } static void ols4jmmy3q ( const real32_T
meanWeights [ 2 ] , real32_T covWeights [ 2 ] , real32_T OOM , real32_T Y1 ,
real32_T Y2 [ 4 ] , const real32_T X1 [ 2 ] , real32_T X2 [ 8 ] , real32_T *
Ymean , real32_T * Sy , real32_T Pxy [ 2 ] ) { * Ymean = Y1 * meanWeights [ 0
] ; * Ymean += Y2 [ 0 ] * meanWeights [ 1 ] ; * Ymean += Y2 [ 1 ] *
meanWeights [ 1 ] ; * Ymean += meanWeights [ 1 ] * Y2 [ 2 ] ; * Ymean +=
meanWeights [ 1 ] * Y2 [ 3 ] ; * Ymean *= OOM ; Y1 -= * Ymean ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = Y2 [ 0 ] ; jxmwlezzui4 . signOOM_p5h3gwuwqg -= * Ymean ;
Y2 [ 0 ] = jxmwlezzui4 . signOOM_p5h3gwuwqg ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = Y2 [ 1 ] ; jxmwlezzui4 . signOOM_p5h3gwuwqg -= * Ymean ;
Y2 [ 1 ] = jxmwlezzui4 . signOOM_p5h3gwuwqg ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = Y2 [ 2 ] ; jxmwlezzui4 . signOOM_p5h3gwuwqg -= * Ymean ;
Y2 [ 2 ] = jxmwlezzui4 . signOOM_p5h3gwuwqg ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = Y2 [ 3 ] ; jxmwlezzui4 . signOOM_p5h3gwuwqg -= * Ymean ;
Y2 [ 3 ] = jxmwlezzui4 . signOOM_p5h3gwuwqg ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = muSingleScalarSign ( OOM ) ; jxmwlezzui4 . covWeights =
covWeights [ 0 ] ; jxmwlezzui4 . covWeights *= jxmwlezzui4 .
signOOM_p5h3gwuwqg ; covWeights [ 0 ] = jxmwlezzui4 . covWeights ;
jxmwlezzui4 . covWeights = covWeights [ 1 ] ; jxmwlezzui4 . covWeights *=
jxmwlezzui4 . signOOM_p5h3gwuwqg ; covWeights [ 1 ] = jxmwlezzui4 .
covWeights ; OOM *= jxmwlezzui4 . signOOM_p5h3gwuwqg ; jxmwlezzui4 .
signOOM_p5h3gwuwqg = muSingleScalarSqrt ( OOM ) ; jxmwlezzui4 . covWeights =
muSingleScalarSqrt ( covWeights [ 1 ] ) ; jxmwlezzui4 . A [ 0 ] = jxmwlezzui4
. covWeights * Y2 [ 0 ] ; jxmwlezzui4 . A [ 1 ] = jxmwlezzui4 . covWeights *
Y2 [ 1 ] ; jxmwlezzui4 . A [ 2 ] = jxmwlezzui4 . covWeights * Y2 [ 2 ] ;
jxmwlezzui4 . A [ 3 ] = jxmwlezzui4 . covWeights * Y2 [ 3 ] ; jxmwlezzui4 .
covWeights = jxmwlezzui4 . A [ 0 ] ; jxmwlezzui4 . xnorm = e2waoby4jy ( 3 ,
jxmwlezzui4 . A , 2 ) ; if ( jxmwlezzui4 . xnorm != 0.0F ) { jxmwlezzui4 .
xnorm = muSingleScalarHypot ( jxmwlezzui4 . A [ 0 ] , jxmwlezzui4 . xnorm ) ;
if ( jxmwlezzui4 . A [ 0 ] >= 0.0F ) { jxmwlezzui4 . xnorm = - jxmwlezzui4 .
xnorm ; } if ( muSingleScalarAbs ( jxmwlezzui4 . xnorm ) < 9.86076132E-32F )
{ jxmwlezzui4 . knt_pcqitb31bm = - 1 ; do { jxmwlezzui4 . knt_pcqitb31bm ++ ;
jxmwlezzui4 . b_k_pxv1dlndn0 = 1 ; while ( jxmwlezzui4 . b_k_pxv1dlndn0 + 1
<= 4 ) { jxmwlezzui4 . A [ jxmwlezzui4 . b_k_pxv1dlndn0 ] *= 1.01412048E+31F
; jxmwlezzui4 . b_k_pxv1dlndn0 ++ ; } jxmwlezzui4 . xnorm *= 1.01412048E+31F
; jxmwlezzui4 . covWeights *= 1.01412048E+31F ; } while ( ! (
muSingleScalarAbs ( jxmwlezzui4 . xnorm ) >= 9.86076132E-32F ) ) ;
jxmwlezzui4 . xnorm = muSingleScalarHypot ( jxmwlezzui4 . covWeights ,
e2waoby4jy ( 3 , jxmwlezzui4 . A , 2 ) ) ; if ( jxmwlezzui4 . covWeights >=
0.0F ) { jxmwlezzui4 . xnorm = - jxmwlezzui4 . xnorm ; } jxmwlezzui4 .
b_k_pxv1dlndn0 = 0 ; while ( jxmwlezzui4 . b_k_pxv1dlndn0 <= jxmwlezzui4 .
knt_pcqitb31bm ) { jxmwlezzui4 . xnorm *= 9.86076132E-32F ; jxmwlezzui4 .
b_k_pxv1dlndn0 ++ ; } jxmwlezzui4 . covWeights = jxmwlezzui4 . xnorm ; } else
{ jxmwlezzui4 . covWeights = jxmwlezzui4 . xnorm ; } } jxmwlezzui4 . A [ 0 ]
= jxmwlezzui4 . covWeights ; if ( muSingleScalarSign ( covWeights [ 0 ] ) ==
1.0F ) { mcq03og2j3 ( jxmwlezzui4 . A [ 0 ] , Y1 , & jxmwlezzui4 . covWeights
, & jxmwlezzui4 . xnorm , & jxmwlezzui4 . S_afnsueciae ) ; * Sy = jxmwlezzui4
. signOOM_p5h3gwuwqg * jxmwlezzui4 . S_afnsueciae ; } else { jxmwlezzui4 .
covWeights = jxmwlezzui4 . A [ 0 ] ; opch223rhp ( & jxmwlezzui4 . covWeights
, Y1 ) ; * Sy = jxmwlezzui4 . signOOM_p5h3gwuwqg * jxmwlezzui4 . covWeights ;
} for ( jxmwlezzui4 . knt_pcqitb31bm = 0 ; jxmwlezzui4 . knt_pcqitb31bm < 4 ;
jxmwlezzui4 . knt_pcqitb31bm ++ ) { jxmwlezzui4 . covWeights = X2 [
jxmwlezzui4 . knt_pcqitb31bm << 1 ] ; jxmwlezzui4 . covWeights -= X1 [ 0 ] ;
X2 [ jxmwlezzui4 . knt_pcqitb31bm << 1 ] = jxmwlezzui4 . covWeights ;
jxmwlezzui4 . covWeights = X2 [ ( jxmwlezzui4 . knt_pcqitb31bm << 1 ) + 1 ] ;
jxmwlezzui4 . covWeights -= X1 [ 1 ] ; X2 [ ( jxmwlezzui4 . knt_pcqitb31bm <<
1 ) + 1 ] = jxmwlezzui4 . covWeights ; } jxmwlezzui4 . signOOM_p5h3gwuwqg =
covWeights [ 1 ] * OOM ; for ( jxmwlezzui4 . knt_pcqitb31bm = 0 ; jxmwlezzui4
. knt_pcqitb31bm < 2 ; jxmwlezzui4 . knt_pcqitb31bm ++ ) { jxmwlezzui4 .
covWeights = X2 [ jxmwlezzui4 . knt_pcqitb31bm ] * Y2 [ 0 ] ; jxmwlezzui4 .
covWeights += X2 [ jxmwlezzui4 . knt_pcqitb31bm + 2 ] * Y2 [ 1 ] ;
jxmwlezzui4 . covWeights += X2 [ jxmwlezzui4 . knt_pcqitb31bm + 4 ] * Y2 [ 2
] ; jxmwlezzui4 . covWeights += X2 [ jxmwlezzui4 . knt_pcqitb31bm + 6 ] * Y2
[ 3 ] ; Pxy [ jxmwlezzui4 . knt_pcqitb31bm ] = jxmwlezzui4 . covWeights *
jxmwlezzui4 . signOOM_p5h3gwuwqg ; } } static real32_T os21szobce ( int32_T n
, const real32_T x [ 2 ] , int32_T ix0 ) { real32_T y ; y = 0.0F ; if ( n >=
1 ) { if ( n == 1 ) { y = muSingleScalarAbs ( x [ ix0 - 1 ] ) ; } else {
jxmwlezzui4 . scale_l5yj2lrthv = 1.29246971E-26F ; jxmwlezzui4 .
kend_oxmcy3hihv = ( ix0 + n ) - 1 ; jxmwlezzui4 . k_kkejeebp3v = ix0 ; while
( jxmwlezzui4 . k_kkejeebp3v <= jxmwlezzui4 . kend_oxmcy3hihv ) { jxmwlezzui4
. absxk_h255b31ynd = muSingleScalarAbs ( x [ jxmwlezzui4 . k_kkejeebp3v - 1 ]
) ; if ( jxmwlezzui4 . absxk_h255b31ynd > jxmwlezzui4 . scale_l5yj2lrthv ) {
jxmwlezzui4 . t_mert0vuy2i = jxmwlezzui4 . scale_l5yj2lrthv / jxmwlezzui4 .
absxk_h255b31ynd ; y = y * jxmwlezzui4 . t_mert0vuy2i * jxmwlezzui4 .
t_mert0vuy2i + 1.0F ; jxmwlezzui4 . scale_l5yj2lrthv = jxmwlezzui4 .
absxk_h255b31ynd ; } else { jxmwlezzui4 . t_mert0vuy2i = jxmwlezzui4 .
absxk_h255b31ynd / jxmwlezzui4 . scale_l5yj2lrthv ; y += jxmwlezzui4 .
t_mert0vuy2i * jxmwlezzui4 . t_mert0vuy2i ; } jxmwlezzui4 . k_kkejeebp3v ++ ;
} y = jxmwlezzui4 . scale_l5yj2lrthv * muSingleScalarSqrt ( y ) ; } } return
y ; } static void gspjo3duox ( real32_T Rs , const real32_T X1 [ 2 ] , const
real32_T S [ 4 ] , real32_T alpha , real32_T beta , real32_T kappa , real32_T
* Ymean , real32_T Pxy [ 2 ] , real32_T * Sy ) { egzjadadgd * const
j1wfl5js5r = & ( lgpwz0u0yd . rtm ) ; void * args [ 2 ] ; void * b_args [ 2 ]
; jxmwlezzui4 . c_h522xzlxvt = alpha * alpha * ( kappa + 2.0F ) ; jxmwlezzui4
. Wmean [ 0 ] = 1.0F - 2.0F / jxmwlezzui4 . c_h522xzlxvt ; jxmwlezzui4 .
Wmean [ 1 ] = 1.0F / ( 2.0F * jxmwlezzui4 . c_h522xzlxvt ) ; jxmwlezzui4 .
Wcov [ 0 ] = ( ( 1.0F - alpha * alpha ) + beta ) + jxmwlezzui4 . Wmean [ 0 ]
; jxmwlezzui4 . Wcov [ 1 ] = jxmwlezzui4 . Wmean [ 1 ] ; if ( jxmwlezzui4 .
Wmean [ 0 ] != 0.0F ) { jxmwlezzui4 . OOM = jxmwlezzui4 . Wmean [ 0 ] ;
jxmwlezzui4 . Wmean_c0dok3111h = jxmwlezzui4 . Wmean [ 0 ] ; jxmwlezzui4 .
Wcov_pxqvlbal2i = jxmwlezzui4 . Wcov [ 0 ] ; jxmwlezzui4 . Wmean_ctvw0tpkon =
jxmwlezzui4 . Wmean [ 0 ] ; jxmwlezzui4 . Wmean_ctvw0tpkon /= jxmwlezzui4 .
Wmean_c0dok3111h ; jxmwlezzui4 . Wcov_pxqvlbal2i /= jxmwlezzui4 . OOM ;
jxmwlezzui4 . Wmean [ 0 ] = jxmwlezzui4 . Wmean_ctvw0tpkon ; jxmwlezzui4 .
Wcov [ 0 ] = jxmwlezzui4 . Wcov_pxqvlbal2i ; jxmwlezzui4 . Wcov_pxqvlbal2i =
jxmwlezzui4 . Wcov [ 1 ] ; jxmwlezzui4 . Wmean_ctvw0tpkon = jxmwlezzui4 .
Wmean [ 1 ] ; jxmwlezzui4 . Wmean_ctvw0tpkon /= jxmwlezzui4 .
Wmean_c0dok3111h ; jxmwlezzui4 . Wcov_pxqvlbal2i /= jxmwlezzui4 . OOM ;
jxmwlezzui4 . Wmean [ 1 ] = jxmwlezzui4 . Wmean_ctvw0tpkon ; jxmwlezzui4 .
Wcov [ 1 ] = jxmwlezzui4 . Wcov_pxqvlbal2i ; } else { jxmwlezzui4 . OOM =
1.0F ; } jxmwlezzui4 . c_h522xzlxvt = muSingleScalarSqrt ( jxmwlezzui4 .
c_h522xzlxvt ) ; jxmwlezzui4 . Wmean_c0dok3111h = jxmwlezzui4 . c_h522xzlxvt
* S [ 0 ] ; jxmwlezzui4 . X2 [ 0 ] = jxmwlezzui4 . Wmean_c0dok3111h ;
jxmwlezzui4 . X2 [ 4 ] = - jxmwlezzui4 . Wmean_c0dok3111h ; jxmwlezzui4 .
Wmean_c0dok3111h = jxmwlezzui4 . c_h522xzlxvt * S [ 1 ] ; jxmwlezzui4 . X2 [
1 ] = jxmwlezzui4 . Wmean_c0dok3111h ; jxmwlezzui4 . X2 [ 5 ] = - jxmwlezzui4
. Wmean_c0dok3111h ; jxmwlezzui4 . Wmean_c0dok3111h = jxmwlezzui4 .
c_h522xzlxvt * S [ 2 ] ; jxmwlezzui4 . X2 [ 2 ] = jxmwlezzui4 .
Wmean_c0dok3111h ; jxmwlezzui4 . X2 [ 6 ] = - jxmwlezzui4 . Wmean_c0dok3111h
; jxmwlezzui4 . Wmean_c0dok3111h = jxmwlezzui4 . c_h522xzlxvt * S [ 3 ] ;
jxmwlezzui4 . X2 [ 3 ] = jxmwlezzui4 . Wmean_c0dok3111h ; jxmwlezzui4 . X2 [
7 ] = - jxmwlezzui4 . Wmean_c0dok3111h ; for ( jxmwlezzui4 . knt = 0 ;
jxmwlezzui4 . knt < 4 ; jxmwlezzui4 . knt ++ ) { jxmwlezzui4 . c_h522xzlxvt =
jxmwlezzui4 . X2 [ jxmwlezzui4 . knt << 1 ] ; jxmwlezzui4 . c_h522xzlxvt +=
X1 [ 0 ] ; jxmwlezzui4 . X2 [ jxmwlezzui4 . knt << 1 ] = jxmwlezzui4 .
c_h522xzlxvt ; jxmwlezzui4 . c_h522xzlxvt = jxmwlezzui4 . X2 [ ( jxmwlezzui4
. knt << 1 ) + 1 ] ; jxmwlezzui4 . c_h522xzlxvt += X1 [ 1 ] ; jxmwlezzui4 .
X2 [ ( jxmwlezzui4 . knt << 1 ) + 1 ] = jxmwlezzui4 . c_h522xzlxvt ; } for (
jxmwlezzui4 . knt = 0 ; jxmwlezzui4 . knt < 4 ; jxmwlezzui4 . knt ++ ) {
jxmwlezzui4 . b_x_lnjdk5wtww [ 0 ] = jxmwlezzui4 . X2 [ jxmwlezzui4 . knt <<
1 ] ; jxmwlezzui4 . b_x_lnjdk5wtww [ 1 ] = jxmwlezzui4 . X2 [ ( jxmwlezzui4 .
knt << 1 ) + 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) { for (
jxmwlezzui4 . i19 = 0 ; jxmwlezzui4 . i19 < 2 ; jxmwlezzui4 . i19 ++ ) {
jxmwlezzui4 . b_x_bnlywzniup [ jxmwlezzui4 . i19 ] = jxmwlezzui4 .
b_x_lnjdk5wtww [ jxmwlezzui4 . i19 ] ; } batteryMeasurementFcn ( jxmwlezzui4
. b_x_bnlywzniup , & jxmwlezzui4 . tempY_jacdjrqyev ) ; } else { b_args [ 0U
] = ( void * ) & jxmwlezzui4 . b_x_lnjdk5wtww ; b_args [ 1U ] = ( void * ) &
jxmwlezzui4 . tempY_jacdjrqyev ; slcsInvokeSimulinkFunctionVoidArgs (
j1wfl5js5r -> _mdlRefSfcnS , "batteryMeasurementFcn" , 2 , & b_args [ 0U ] )
; } jxmwlezzui4 . Y2_pbm3vprmfu [ jxmwlezzui4 . knt ] = jxmwlezzui4 .
tempY_jacdjrqyev ; } jxmwlezzui4 . x_bsqwvugooi [ 0 ] = X1 [ 0 ] ;
jxmwlezzui4 . x_bsqwvugooi [ 1 ] = X1 [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i18 = 0 ;
jxmwlezzui4 . i18 < 2 ; jxmwlezzui4 . i18 ++ ) { jxmwlezzui4 . x_hv2ho1zopz [
jxmwlezzui4 . i18 ] = jxmwlezzui4 . x_bsqwvugooi [ jxmwlezzui4 . i18 ] ; }
batteryMeasurementFcn ( jxmwlezzui4 . x_hv2ho1zopz , & jxmwlezzui4 .
tempY_jacdjrqyev ) ; } else { args [ 0U ] = ( void * ) & jxmwlezzui4 .
x_bsqwvugooi ; args [ 1U ] = ( void * ) & jxmwlezzui4 . tempY_jacdjrqyev ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryMeasurementFcn" , 2 , & args [ 0U ] ) ; } ols4jmmy3q ( jxmwlezzui4 .
Wmean , jxmwlezzui4 . Wcov , jxmwlezzui4 . OOM , jxmwlezzui4 .
tempY_jacdjrqyev , jxmwlezzui4 . Y2_pbm3vprmfu , X1 , jxmwlezzui4 . X2 ,
Ymean , & jxmwlezzui4 . c_h522xzlxvt , Pxy ) ; jxmwlezzui4 . Wmean [ 0 ] =
jxmwlezzui4 . c_h522xzlxvt ; jxmwlezzui4 . Wmean [ 1 ] = Rs ; jxmwlezzui4 .
OOM = jxmwlezzui4 . Wmean [ 0 ] ; jxmwlezzui4 . tempY_jacdjrqyev = os21szobce
( 1 , jxmwlezzui4 . Wmean , 2 ) ; if ( jxmwlezzui4 . tempY_jacdjrqyev != 0.0F
) { jxmwlezzui4 . tempY_jacdjrqyev = muSingleScalarHypot ( jxmwlezzui4 .
Wmean [ 0 ] , jxmwlezzui4 . tempY_jacdjrqyev ) ; if ( jxmwlezzui4 . Wmean [ 0
] >= 0.0F ) { jxmwlezzui4 . tempY_jacdjrqyev = - jxmwlezzui4 .
tempY_jacdjrqyev ; } if ( muSingleScalarAbs ( jxmwlezzui4 . tempY_jacdjrqyev
) < 9.86076132E-32F ) { jxmwlezzui4 . knt = - 1 ; do { jxmwlezzui4 . knt ++ ;
jxmwlezzui4 . Wmean [ 1 ] *= 1.01412048E+31F ; jxmwlezzui4 . tempY_jacdjrqyev
*= 1.01412048E+31F ; jxmwlezzui4 . OOM *= 1.01412048E+31F ; } while ( ! (
muSingleScalarAbs ( jxmwlezzui4 . tempY_jacdjrqyev ) >= 9.86076132E-32F ) ) ;
jxmwlezzui4 . tempY_jacdjrqyev = muSingleScalarHypot ( jxmwlezzui4 . OOM ,
os21szobce ( 1 , jxmwlezzui4 . Wmean , 2 ) ) ; if ( jxmwlezzui4 . OOM >= 0.0F
) { jxmwlezzui4 . tempY_jacdjrqyev = - jxmwlezzui4 . tempY_jacdjrqyev ; }
jxmwlezzui4 . b_k = 0 ; while ( jxmwlezzui4 . b_k <= jxmwlezzui4 . knt ) {
jxmwlezzui4 . tempY_jacdjrqyev *= 9.86076132E-32F ; jxmwlezzui4 . b_k ++ ; }
jxmwlezzui4 . OOM = jxmwlezzui4 . tempY_jacdjrqyev ; } else { jxmwlezzui4 .
OOM = jxmwlezzui4 . tempY_jacdjrqyev ; } } jxmwlezzui4 . Wmean [ 0 ] =
jxmwlezzui4 . OOM ; * Sy = jxmwlezzui4 . Wmean [ 0 ] ; } static void
jnelmoh0y1 ( const real32_T A [ 8 ] , real32_T Q [ 8 ] , real32_T R [ 4 ] ) {
int32_T exitg1 ; for ( jxmwlezzui4 . c_lastc = 0 ; jxmwlezzui4 . c_lastc < 8
; jxmwlezzui4 . c_lastc ++ ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 .
c_lastc ] = A [ jxmwlezzui4 . c_lastc ] ; } jxmwlezzui4 .
tau_idx_0_cnk35bhqvj = 0.0F ; jxmwlezzui4 . work_jz50ptvnrg [ 0 ] = 0.0F ;
jxmwlezzui4 . tau_idx_1 = 0.0F ; jxmwlezzui4 . work_jz50ptvnrg [ 1 ] = 0.0F ;
jxmwlezzui4 . atmp_mvr1suhnoo = jxmwlezzui4 . b_A_mbvzarwird [ 0 ] ;
jxmwlezzui4 . xnorm_mjmkwwa5je = xnrm2_Anysr1Sx ( 3 , jxmwlezzui4 .
b_A_mbvzarwird , 2 ) ; if ( jxmwlezzui4 . xnorm_mjmkwwa5je != 0.0F ) {
jxmwlezzui4 . xnorm_mjmkwwa5je = muSingleScalarHypot ( jxmwlezzui4 .
b_A_mbvzarwird [ 0 ] , jxmwlezzui4 . xnorm_mjmkwwa5je ) ; if ( jxmwlezzui4 .
b_A_mbvzarwird [ 0 ] >= 0.0F ) { jxmwlezzui4 . xnorm_mjmkwwa5je = -
jxmwlezzui4 . xnorm_mjmkwwa5je ; } if ( muSingleScalarAbs ( jxmwlezzui4 .
xnorm_mjmkwwa5je ) < 9.86076132E-32F ) { jxmwlezzui4 . knt_axzrpos33g = - 1 ;
do { jxmwlezzui4 . knt_axzrpos33g ++ ; jxmwlezzui4 . lastc = 1 ; while (
jxmwlezzui4 . lastc + 1 <= 4 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 .
lastc ] *= 1.01412048E+31F ; jxmwlezzui4 . lastc ++ ; } jxmwlezzui4 .
xnorm_mjmkwwa5je *= 1.01412048E+31F ; jxmwlezzui4 . atmp_mvr1suhnoo *=
1.01412048E+31F ; } while ( ! ( muSingleScalarAbs ( jxmwlezzui4 .
xnorm_mjmkwwa5je ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 . xnorm_mjmkwwa5je =
muSingleScalarHypot ( jxmwlezzui4 . atmp_mvr1suhnoo , xnrm2_Anysr1Sx ( 3 ,
jxmwlezzui4 . b_A_mbvzarwird , 2 ) ) ; if ( jxmwlezzui4 . atmp_mvr1suhnoo >=
0.0F ) { jxmwlezzui4 . xnorm_mjmkwwa5je = - jxmwlezzui4 . xnorm_mjmkwwa5je ;
} jxmwlezzui4 . tau_idx_0_cnk35bhqvj = ( jxmwlezzui4 . xnorm_mjmkwwa5je -
jxmwlezzui4 . atmp_mvr1suhnoo ) / jxmwlezzui4 . xnorm_mjmkwwa5je ;
jxmwlezzui4 . atmp_mvr1suhnoo = 1.0F / ( jxmwlezzui4 . atmp_mvr1suhnoo -
jxmwlezzui4 . xnorm_mjmkwwa5je ) ; jxmwlezzui4 . lastc = 1 ; while (
jxmwlezzui4 . lastc + 1 <= 4 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 .
lastc ] *= jxmwlezzui4 . atmp_mvr1suhnoo ; jxmwlezzui4 . lastc ++ ; }
jxmwlezzui4 . c_lastc = 0 ; while ( jxmwlezzui4 . c_lastc <= jxmwlezzui4 .
knt_axzrpos33g ) { jxmwlezzui4 . xnorm_mjmkwwa5je *= 9.86076132E-32F ;
jxmwlezzui4 . c_lastc ++ ; } jxmwlezzui4 . atmp_mvr1suhnoo = jxmwlezzui4 .
xnorm_mjmkwwa5je ; } else { jxmwlezzui4 . tau_idx_0_cnk35bhqvj = (
jxmwlezzui4 . xnorm_mjmkwwa5je - jxmwlezzui4 . b_A_mbvzarwird [ 0 ] ) /
jxmwlezzui4 . xnorm_mjmkwwa5je ; jxmwlezzui4 . atmp_mvr1suhnoo = 1.0F / (
jxmwlezzui4 . b_A_mbvzarwird [ 0 ] - jxmwlezzui4 . xnorm_mjmkwwa5je ) ;
jxmwlezzui4 . c_lastc = 1 ; while ( jxmwlezzui4 . c_lastc + 1 <= 4 ) {
jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 . c_lastc ] *= jxmwlezzui4 .
atmp_mvr1suhnoo ; jxmwlezzui4 . c_lastc ++ ; } jxmwlezzui4 . atmp_mvr1suhnoo
= jxmwlezzui4 . xnorm_mjmkwwa5je ; } } jxmwlezzui4 . b_A_mbvzarwird [ 0 ] =
jxmwlezzui4 . atmp_mvr1suhnoo ; jxmwlezzui4 . xnorm_mjmkwwa5je = jxmwlezzui4
. b_A_mbvzarwird [ 0 ] ; jxmwlezzui4 . b_A_mbvzarwird [ 0 ] = 1.0F ; if (
jxmwlezzui4 . tau_idx_0_cnk35bhqvj != 0.0F ) { jxmwlezzui4 . knt_axzrpos33g =
4 ; jxmwlezzui4 . c_lastc = 3 ; while ( ( jxmwlezzui4 . knt_axzrpos33g > 0 )
&& ( jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 . c_lastc ] == 0.0F ) ) {
jxmwlezzui4 . knt_axzrpos33g -- ; jxmwlezzui4 . c_lastc -- ; } jxmwlezzui4 .
c_lastc = 1 ; jxmwlezzui4 . lastc = 0 ; do { exitg1 = 0 ; if ( jxmwlezzui4 .
lastc + 5 <= jxmwlezzui4 . knt_axzrpos33g + 4 ) { if ( jxmwlezzui4 .
b_A_mbvzarwird [ jxmwlezzui4 . lastc + 4 ] != 0.0F ) { exitg1 = 1 ; } else {
jxmwlezzui4 . lastc ++ ; } } else { jxmwlezzui4 . c_lastc = 0 ; exitg1 = 1 ;
} } while ( exitg1 == 0 ) ; } else { jxmwlezzui4 . knt_axzrpos33g = 0 ;
jxmwlezzui4 . c_lastc = 0 ; } if ( jxmwlezzui4 . knt_axzrpos33g > 0 ) {
ptvhp1sup0 ( jxmwlezzui4 . knt_axzrpos33g , jxmwlezzui4 . c_lastc ,
jxmwlezzui4 . b_A_mbvzarwird , 5 , jxmwlezzui4 . b_A_mbvzarwird , 1 ,
jxmwlezzui4 . work_jz50ptvnrg ) ; npuopwc4oi ( jxmwlezzui4 . knt_axzrpos33g ,
jxmwlezzui4 . c_lastc , - jxmwlezzui4 . tau_idx_0_cnk35bhqvj , 1 ,
jxmwlezzui4 . work_jz50ptvnrg , jxmwlezzui4 . b_A_mbvzarwird , 5 ) ; }
jxmwlezzui4 . b_A_mbvzarwird [ 0 ] = jxmwlezzui4 . xnorm_mjmkwwa5je ;
jxmwlezzui4 . atmp_mvr1suhnoo = jxmwlezzui4 . b_A_mbvzarwird [ 5 ] ;
jxmwlezzui4 . xnorm_mjmkwwa5je = xnrm2_Anysr1Sx ( 2 , jxmwlezzui4 .
b_A_mbvzarwird , 7 ) ; if ( jxmwlezzui4 . xnorm_mjmkwwa5je != 0.0F ) {
jxmwlezzui4 . xnorm_mjmkwwa5je = muSingleScalarHypot ( jxmwlezzui4 .
b_A_mbvzarwird [ 5 ] , jxmwlezzui4 . xnorm_mjmkwwa5je ) ; if ( jxmwlezzui4 .
b_A_mbvzarwird [ 5 ] >= 0.0F ) { jxmwlezzui4 . xnorm_mjmkwwa5je = -
jxmwlezzui4 . xnorm_mjmkwwa5je ; } if ( muSingleScalarAbs ( jxmwlezzui4 .
xnorm_mjmkwwa5je ) < 9.86076132E-32F ) { jxmwlezzui4 . knt_axzrpos33g = - 1 ;
do { jxmwlezzui4 . knt_axzrpos33g ++ ; jxmwlezzui4 . lastc = 6 ; while (
jxmwlezzui4 . lastc + 1 <= 8 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 .
lastc ] *= 1.01412048E+31F ; jxmwlezzui4 . lastc ++ ; } jxmwlezzui4 .
xnorm_mjmkwwa5je *= 1.01412048E+31F ; jxmwlezzui4 . atmp_mvr1suhnoo *=
1.01412048E+31F ; } while ( ! ( muSingleScalarAbs ( jxmwlezzui4 .
xnorm_mjmkwwa5je ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 . xnorm_mjmkwwa5je =
muSingleScalarHypot ( jxmwlezzui4 . atmp_mvr1suhnoo , xnrm2_Anysr1Sx ( 2 ,
jxmwlezzui4 . b_A_mbvzarwird , 7 ) ) ; if ( jxmwlezzui4 . atmp_mvr1suhnoo >=
0.0F ) { jxmwlezzui4 . xnorm_mjmkwwa5je = - jxmwlezzui4 . xnorm_mjmkwwa5je ;
} jxmwlezzui4 . tau_idx_1 = ( jxmwlezzui4 . xnorm_mjmkwwa5je - jxmwlezzui4 .
atmp_mvr1suhnoo ) / jxmwlezzui4 . xnorm_mjmkwwa5je ; jxmwlezzui4 .
atmp_mvr1suhnoo = 1.0F / ( jxmwlezzui4 . atmp_mvr1suhnoo - jxmwlezzui4 .
xnorm_mjmkwwa5je ) ; jxmwlezzui4 . lastc = 6 ; while ( jxmwlezzui4 . lastc +
1 <= 8 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 . lastc ] *=
jxmwlezzui4 . atmp_mvr1suhnoo ; jxmwlezzui4 . lastc ++ ; } jxmwlezzui4 .
c_lastc = 0 ; while ( jxmwlezzui4 . c_lastc <= jxmwlezzui4 . knt_axzrpos33g )
{ jxmwlezzui4 . xnorm_mjmkwwa5je *= 9.86076132E-32F ; jxmwlezzui4 . c_lastc
++ ; } jxmwlezzui4 . atmp_mvr1suhnoo = jxmwlezzui4 . xnorm_mjmkwwa5je ; }
else { jxmwlezzui4 . tau_idx_1 = ( jxmwlezzui4 . xnorm_mjmkwwa5je -
jxmwlezzui4 . b_A_mbvzarwird [ 5 ] ) / jxmwlezzui4 . xnorm_mjmkwwa5je ;
jxmwlezzui4 . atmp_mvr1suhnoo = 1.0F / ( jxmwlezzui4 . b_A_mbvzarwird [ 5 ] -
jxmwlezzui4 . xnorm_mjmkwwa5je ) ; jxmwlezzui4 . c_lastc = 6 ; while (
jxmwlezzui4 . c_lastc + 1 <= 8 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4
. c_lastc ] *= jxmwlezzui4 . atmp_mvr1suhnoo ; jxmwlezzui4 . c_lastc ++ ; }
jxmwlezzui4 . atmp_mvr1suhnoo = jxmwlezzui4 . xnorm_mjmkwwa5je ; } }
jxmwlezzui4 . b_A_mbvzarwird [ 5 ] = jxmwlezzui4 . atmp_mvr1suhnoo ; R [ 0 ]
= jxmwlezzui4 . b_A_mbvzarwird [ 0 ] ; R [ 1 ] = 0.0F ; jxmwlezzui4 .
work_jz50ptvnrg [ 0 ] = 0.0F ; jxmwlezzui4 . c_lastc = 0 ; while (
jxmwlezzui4 . c_lastc <= 1 ) { R [ jxmwlezzui4 . c_lastc + 2 ] = jxmwlezzui4
. b_A_mbvzarwird [ jxmwlezzui4 . c_lastc + 4 ] ; jxmwlezzui4 . c_lastc ++ ; }
jxmwlezzui4 . work_jz50ptvnrg [ 1 ] = 0.0F ; jxmwlezzui4 . lastc = 6 ; while
( jxmwlezzui4 . lastc + 1 <= 8 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4
. lastc ] *= - jxmwlezzui4 . tau_idx_1 ; jxmwlezzui4 . lastc ++ ; }
jxmwlezzui4 . b_A_mbvzarwird [ 5 ] = 1.0F - jxmwlezzui4 . tau_idx_1 ;
jxmwlezzui4 . b_A_mbvzarwird [ 4 ] = 0.0F ; jxmwlezzui4 . b_A_mbvzarwird [ 0
] = 1.0F ; if ( jxmwlezzui4 . tau_idx_0_cnk35bhqvj != 0.0F ) { jxmwlezzui4 .
c_lastc = 4 ; jxmwlezzui4 . lastc = 5 ; while ( ( jxmwlezzui4 . c_lastc > 0 )
&& ( jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 . lastc - 2 ] == 0.0F ) ) {
jxmwlezzui4 . c_lastc -- ; jxmwlezzui4 . lastc -- ; } jxmwlezzui4 . lastc = 1
; jxmwlezzui4 . knt_axzrpos33g = 5 ; do { exitg1 = 0 ; if ( jxmwlezzui4 .
knt_axzrpos33g <= jxmwlezzui4 . c_lastc + 4 ) { if ( jxmwlezzui4 .
b_A_mbvzarwird [ jxmwlezzui4 . knt_axzrpos33g - 1 ] != 0.0F ) { exitg1 = 1 ;
} else { jxmwlezzui4 . knt_axzrpos33g ++ ; } } else { jxmwlezzui4 . lastc = 0
; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } else { jxmwlezzui4 . c_lastc = 0
; jxmwlezzui4 . lastc = 0 ; } if ( jxmwlezzui4 . c_lastc > 0 ) { ptvhp1sup0 (
jxmwlezzui4 . c_lastc , jxmwlezzui4 . lastc , jxmwlezzui4 . b_A_mbvzarwird ,
5 , jxmwlezzui4 . b_A_mbvzarwird , 1 , jxmwlezzui4 . work_jz50ptvnrg ) ;
npuopwc4oi ( jxmwlezzui4 . c_lastc , jxmwlezzui4 . lastc , - jxmwlezzui4 .
tau_idx_0_cnk35bhqvj , 1 , jxmwlezzui4 . work_jz50ptvnrg , jxmwlezzui4 .
b_A_mbvzarwird , 5 ) ; } jxmwlezzui4 . lastc = 1 ; while ( jxmwlezzui4 .
lastc + 1 <= 4 ) { jxmwlezzui4 . b_A_mbvzarwird [ jxmwlezzui4 . lastc ] *= -
jxmwlezzui4 . tau_idx_0_cnk35bhqvj ; jxmwlezzui4 . lastc ++ ; } jxmwlezzui4 .
b_A_mbvzarwird [ 0 ] = 1.0F - jxmwlezzui4 . tau_idx_0_cnk35bhqvj ; for (
jxmwlezzui4 . c_lastc = 0 ; jxmwlezzui4 . c_lastc < 2 ; jxmwlezzui4 . c_lastc
++ ) { Q [ jxmwlezzui4 . c_lastc << 2 ] = jxmwlezzui4 . b_A_mbvzarwird [
jxmwlezzui4 . c_lastc << 2 ] ; Q [ ( jxmwlezzui4 . c_lastc << 2 ) + 1 ] =
jxmwlezzui4 . b_A_mbvzarwird [ ( jxmwlezzui4 . c_lastc << 2 ) + 1 ] ; Q [ (
jxmwlezzui4 . c_lastc << 2 ) + 2 ] = jxmwlezzui4 . b_A_mbvzarwird [ (
jxmwlezzui4 . c_lastc << 2 ) + 2 ] ; Q [ ( jxmwlezzui4 . c_lastc << 2 ) + 3 ]
= jxmwlezzui4 . b_A_mbvzarwird [ ( jxmwlezzui4 . c_lastc << 2 ) + 3 ] ; } }
static void jvxi1futgc ( real32_T * a , real32_T * b , real32_T * c ,
real32_T * s ) { jxmwlezzui4 . roe = * b ; jxmwlezzui4 . absa =
muSingleScalarAbs ( * a ) ; jxmwlezzui4 . absb = muSingleScalarAbs ( * b ) ;
if ( jxmwlezzui4 . absa > jxmwlezzui4 . absb ) { jxmwlezzui4 . roe = * a ; }
jxmwlezzui4 . scale_m3ybdk4ikc = jxmwlezzui4 . absa + jxmwlezzui4 . absb ; if
( jxmwlezzui4 . scale_m3ybdk4ikc == 0.0F ) { * s = 0.0F ; * c = 1.0F ; * a =
0.0F ; * b = 0.0F ; } else { jxmwlezzui4 . ads = jxmwlezzui4 . absa /
jxmwlezzui4 . scale_m3ybdk4ikc ; jxmwlezzui4 . bds = jxmwlezzui4 . absb /
jxmwlezzui4 . scale_m3ybdk4ikc ; jxmwlezzui4 . scale_m3ybdk4ikc *=
muSingleScalarSqrt ( jxmwlezzui4 . ads * jxmwlezzui4 . ads + jxmwlezzui4 .
bds * jxmwlezzui4 . bds ) ; if ( jxmwlezzui4 . roe < 0.0F ) { jxmwlezzui4 .
scale_m3ybdk4ikc = - jxmwlezzui4 . scale_m3ybdk4ikc ; } * c = * a /
jxmwlezzui4 . scale_m3ybdk4ikc ; * s = * b / jxmwlezzui4 . scale_m3ybdk4ikc ;
if ( jxmwlezzui4 . absa > jxmwlezzui4 . absb ) { * b = * s ; } else if ( * c
!= 0.0F ) { * b = 1.0F / * c ; } else { * b = 1.0F ; } * a = jxmwlezzui4 .
scale_m3ybdk4ikc ; } } static void j2ajyr3qbc ( const real32_T A [ 4 ] ,
real32_T U [ 4 ] , real32_T s [ 2 ] , real32_T V [ 4 ] ) { boolean_T exitg1 ;
jxmwlezzui4 . b_A_bhxxfovxdy [ 0 ] = A [ 0 ] ; jxmwlezzui4 . b_A_bhxxfovxdy [
1 ] = A [ 1 ] ; jxmwlezzui4 . b_A_bhxxfovxdy [ 2 ] = A [ 2 ] ; jxmwlezzui4 .
b_A_bhxxfovxdy [ 3 ] = A [ 3 ] ; jxmwlezzui4 . nrm = xnrm2_5NL5eOB3 ( A ) ;
if ( jxmwlezzui4 . nrm > 0.0F ) { if ( A [ 0 ] < 0.0F ) { jxmwlezzui4 . b_s [
0 ] = - jxmwlezzui4 . nrm ; } else { jxmwlezzui4 . b_s [ 0 ] = jxmwlezzui4 .
nrm ; } if ( muSingleScalarAbs ( jxmwlezzui4 . b_s [ 0 ] ) >= 9.86076132E-32F
) { xscal_o5SXdvJf ( 1.0F / jxmwlezzui4 . b_s [ 0 ] , jxmwlezzui4 .
b_A_bhxxfovxdy ) ; } else { jxmwlezzui4 . b_A_bhxxfovxdy [ 0 ] /= jxmwlezzui4
. b_s [ 0 ] ; jxmwlezzui4 . b_A_bhxxfovxdy [ 1 ] /= jxmwlezzui4 . b_s [ 0 ] ;
} jxmwlezzui4 . b_A_bhxxfovxdy [ 0 ] ++ ; jxmwlezzui4 . b_s [ 0 ] = -
jxmwlezzui4 . b_s [ 0 ] ; xaxpy_IQ2dDuYr ( - ( xdotc_L9OWMrp6 ( jxmwlezzui4 .
b_A_bhxxfovxdy , jxmwlezzui4 . b_A_bhxxfovxdy ) / jxmwlezzui4 .
b_A_bhxxfovxdy [ 0 ] ) , jxmwlezzui4 . b_A_bhxxfovxdy ) ; } else {
jxmwlezzui4 . b_s [ 0 ] = 0.0F ; } jxmwlezzui4 . b_s [ 1 ] = jxmwlezzui4 .
b_A_bhxxfovxdy [ 3 ] ; jxmwlezzui4 . e [ 0 ] = jxmwlezzui4 . b_A_bhxxfovxdy [
2 ] ; jxmwlezzui4 . e [ 1 ] = 0.0F ; U [ 0 ] = jxmwlezzui4 . b_A_bhxxfovxdy [
0 ] ; U [ 2 ] = 0.0F ; U [ 1 ] = jxmwlezzui4 . b_A_bhxxfovxdy [ 1 ] ;
jxmwlezzui4 . m = 0 ; U [ 3 ] = 1.0F ; if ( jxmwlezzui4 . b_s [ 0 ] != 0.0F )
{ xaxpy_IQ2dDuYr ( - ( xdotc_L9OWMrp6 ( U , U ) / U [ 0 ] ) , U ) ;
jxmwlezzui4 . nrm = U [ 0 ] ; jxmwlezzui4 . nrm = - jxmwlezzui4 . nrm ; U [ 0
] = jxmwlezzui4 . nrm ; jxmwlezzui4 . nrm = U [ 1 ] ; jxmwlezzui4 . nrm = -
jxmwlezzui4 . nrm ; U [ 1 ] = jxmwlezzui4 . nrm ; U [ 0 ] ++ ; } else { U [ 1
] = 0.0F ; U [ 0 ] = 1.0F ; } V [ 2 ] = 0.0F ; V [ 3 ] = 1.0F ; V [ 1 ] =
0.0F ; V [ 0 ] = 1.0F ; jxmwlezzui4 . ztest = jxmwlezzui4 . e [ 0 ] ; if (
jxmwlezzui4 . b_s [ 0 ] != 0.0F ) { jxmwlezzui4 . rt = muSingleScalarAbs (
jxmwlezzui4 . b_s [ 0 ] ) ; jxmwlezzui4 . nrm = jxmwlezzui4 . b_s [ 0 ] /
jxmwlezzui4 . rt ; jxmwlezzui4 . b_s [ 0 ] = jxmwlezzui4 . rt ; jxmwlezzui4 .
ztest /= jxmwlezzui4 . nrm ; xscal_YC54Gy7j ( jxmwlezzui4 . nrm , U , 1 ) ; }
if ( jxmwlezzui4 . ztest != 0.0F ) { jxmwlezzui4 . rt = muSingleScalarAbs (
jxmwlezzui4 . ztest ) ; jxmwlezzui4 . nrm = jxmwlezzui4 . rt / jxmwlezzui4 .
ztest ; jxmwlezzui4 . ztest = jxmwlezzui4 . rt ; jxmwlezzui4 . b_s [ 1 ] *=
jxmwlezzui4 . nrm ; xscal_YC54Gy7j ( jxmwlezzui4 . nrm , V , 3 ) ; }
jxmwlezzui4 . e [ 0 ] = jxmwlezzui4 . ztest ; jxmwlezzui4 . ztest =
jxmwlezzui4 . e [ 0 ] ; if ( jxmwlezzui4 . b_s [ 1 ] != 0.0F ) { jxmwlezzui4
. rt = muSingleScalarAbs ( jxmwlezzui4 . b_s [ 1 ] ) ; jxmwlezzui4 . nrm =
jxmwlezzui4 . b_s [ 1 ] / jxmwlezzui4 . rt ; jxmwlezzui4 . b_s [ 1 ] =
jxmwlezzui4 . rt ; xscal_YC54Gy7j ( jxmwlezzui4 . nrm , U , 3 ) ; }
jxmwlezzui4 . e [ 0 ] = jxmwlezzui4 . ztest ; jxmwlezzui4 . iter = 0 ;
jxmwlezzui4 . nrm = muSingleScalarMax ( jxmwlezzui4 . b_s [ 0 ] , jxmwlezzui4
. e [ 0 ] ) ; jxmwlezzui4 . nrm = muSingleScalarMax ( jxmwlezzui4 . nrm ,
muSingleScalarMax ( jxmwlezzui4 . b_s [ 1 ] , 0.0F ) ) ; while ( (
jxmwlezzui4 . m + 2 > 0 ) && ( jxmwlezzui4 . iter < 75 ) ) { jxmwlezzui4 . q
= jxmwlezzui4 . m + 1 ; exitg1 = false ; while ( ! ( exitg1 || ( jxmwlezzui4
. q == 0 ) ) ) { jxmwlezzui4 . rt = muSingleScalarAbs ( jxmwlezzui4 . e [ 0 ]
) ; if ( ( jxmwlezzui4 . rt <= ( muSingleScalarAbs ( jxmwlezzui4 . b_s [ 0 ]
) + muSingleScalarAbs ( jxmwlezzui4 . b_s [ 1 ] ) ) * 1.1920929E-7F ) || ( (
jxmwlezzui4 . rt <= 9.86076132E-32F ) || ( ( jxmwlezzui4 . iter > 20 ) && (
jxmwlezzui4 . rt <= 1.1920929E-7F * jxmwlezzui4 . nrm ) ) ) ) { jxmwlezzui4 .
e [ 0 ] = 0.0F ; exitg1 = true ; } else { jxmwlezzui4 . q = 0 ; } } if (
jxmwlezzui4 . m + 1 == jxmwlezzui4 . q ) { jxmwlezzui4 . kase = 4 ; } else {
jxmwlezzui4 . qs = jxmwlezzui4 . m + 2 ; jxmwlezzui4 . kase = jxmwlezzui4 . m
+ 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( jxmwlezzui4 . kase >=
jxmwlezzui4 . q ) ) { jxmwlezzui4 . qs = jxmwlezzui4 . kase ; if (
jxmwlezzui4 . kase == jxmwlezzui4 . q ) { exitg1 = true ; } else {
jxmwlezzui4 . rt = 0.0F ; if ( jxmwlezzui4 . kase < jxmwlezzui4 . m + 2 ) {
jxmwlezzui4 . rt = muSingleScalarAbs ( jxmwlezzui4 . e [ jxmwlezzui4 . kase -
1 ] ) ; } if ( jxmwlezzui4 . kase > jxmwlezzui4 . q + 1 ) { jxmwlezzui4 . rt
+= muSingleScalarAbs ( jxmwlezzui4 . e [ 0 ] ) ; } jxmwlezzui4 . ztest =
muSingleScalarAbs ( jxmwlezzui4 . b_s [ jxmwlezzui4 . kase - 1 ] ) ; if ( (
jxmwlezzui4 . ztest <= 1.1920929E-7F * jxmwlezzui4 . rt ) || ( jxmwlezzui4 .
ztest <= 9.86076132E-32F ) ) { jxmwlezzui4 . b_s [ jxmwlezzui4 . kase - 1 ] =
0.0F ; exitg1 = true ; } else { jxmwlezzui4 . kase -- ; } } } if (
jxmwlezzui4 . qs == jxmwlezzui4 . q ) { jxmwlezzui4 . kase = 3 ; } else if (
jxmwlezzui4 . m + 2 == jxmwlezzui4 . qs ) { jxmwlezzui4 . kase = 1 ; } else {
jxmwlezzui4 . kase = 2 ; jxmwlezzui4 . q = jxmwlezzui4 . qs ; } } switch (
jxmwlezzui4 . kase ) { case 1 : jxmwlezzui4 . rt = jxmwlezzui4 . e [
jxmwlezzui4 . m ] ; jxmwlezzui4 . e [ jxmwlezzui4 . m ] = 0.0F ; jxmwlezzui4
. qs = jxmwlezzui4 . m + 1 ; while ( jxmwlezzui4 . qs >= jxmwlezzui4 . q + 1
) { jvxi1futgc ( & jxmwlezzui4 . b_s [ 0 ] , & jxmwlezzui4 . rt , &
jxmwlezzui4 . ztest , & jxmwlezzui4 . sqds ) ; xrot_VJS4xnBw ( V , 1 , ( (
jxmwlezzui4 . m + 1 ) << 1 ) + 1 , jxmwlezzui4 . ztest , jxmwlezzui4 . sqds )
; jxmwlezzui4 . qs = 0 ; } break ; case 2 : jxmwlezzui4 . rt = jxmwlezzui4 .
e [ jxmwlezzui4 . q - 1 ] ; jxmwlezzui4 . e [ jxmwlezzui4 . q - 1 ] = 0.0F ;
jxmwlezzui4 . qs = jxmwlezzui4 . q ; while ( jxmwlezzui4 . qs + 1 <=
jxmwlezzui4 . m + 2 ) { jvxi1futgc ( & jxmwlezzui4 . b_s [ jxmwlezzui4 . qs ]
, & jxmwlezzui4 . rt , & jxmwlezzui4 . ztest , & jxmwlezzui4 . sqds ) ;
jxmwlezzui4 . rt = - jxmwlezzui4 . sqds * jxmwlezzui4 . e [ jxmwlezzui4 . qs
] ; jxmwlezzui4 . e [ jxmwlezzui4 . qs ] *= jxmwlezzui4 . ztest ;
xrot_VJS4xnBw ( U , ( jxmwlezzui4 . qs << 1 ) + 1 , ( ( jxmwlezzui4 . q - 1 )
<< 1 ) + 1 , jxmwlezzui4 . ztest , jxmwlezzui4 . sqds ) ; jxmwlezzui4 . qs ++
; } break ; case 3 : jxmwlezzui4 . ztest = muSingleScalarMax (
muSingleScalarMax ( muSingleScalarMax ( muSingleScalarMax ( muSingleScalarAbs
( jxmwlezzui4 . b_s [ jxmwlezzui4 . m + 1 ] ) , muSingleScalarAbs (
jxmwlezzui4 . b_s [ jxmwlezzui4 . m ] ) ) , muSingleScalarAbs ( jxmwlezzui4 .
e [ jxmwlezzui4 . m ] ) ) , muSingleScalarAbs ( jxmwlezzui4 . b_s [
jxmwlezzui4 . q ] ) ) , muSingleScalarAbs ( jxmwlezzui4 . e [ jxmwlezzui4 . q
] ) ) ; jxmwlezzui4 . rt = jxmwlezzui4 . b_s [ jxmwlezzui4 . m + 1 ] /
jxmwlezzui4 . ztest ; jxmwlezzui4 . smm1 = jxmwlezzui4 . b_s [ jxmwlezzui4 .
m ] / jxmwlezzui4 . ztest ; jxmwlezzui4 . emm1 = jxmwlezzui4 . e [
jxmwlezzui4 . m ] / jxmwlezzui4 . ztest ; jxmwlezzui4 . sqds = jxmwlezzui4 .
b_s [ jxmwlezzui4 . q ] / jxmwlezzui4 . ztest ; jxmwlezzui4 . smm1 = ( (
jxmwlezzui4 . smm1 + jxmwlezzui4 . rt ) * ( jxmwlezzui4 . smm1 - jxmwlezzui4
. rt ) + jxmwlezzui4 . emm1 * jxmwlezzui4 . emm1 ) / 2.0F ; jxmwlezzui4 .
emm1 *= jxmwlezzui4 . rt ; jxmwlezzui4 . emm1 *= jxmwlezzui4 . emm1 ; if ( (
jxmwlezzui4 . smm1 != 0.0F ) || ( jxmwlezzui4 . emm1 != 0.0F ) ) {
jxmwlezzui4 . shift = muSingleScalarSqrt ( jxmwlezzui4 . smm1 * jxmwlezzui4 .
smm1 + jxmwlezzui4 . emm1 ) ; if ( jxmwlezzui4 . smm1 < 0.0F ) { jxmwlezzui4
. shift = - jxmwlezzui4 . shift ; } jxmwlezzui4 . shift = jxmwlezzui4 . emm1
/ ( jxmwlezzui4 . smm1 + jxmwlezzui4 . shift ) ; } else { jxmwlezzui4 . shift
= 0.0F ; } jxmwlezzui4 . rt = ( jxmwlezzui4 . sqds + jxmwlezzui4 . rt ) * (
jxmwlezzui4 . sqds - jxmwlezzui4 . rt ) + jxmwlezzui4 . shift ; jxmwlezzui4 .
ztest = jxmwlezzui4 . e [ jxmwlezzui4 . q ] / jxmwlezzui4 . ztest *
jxmwlezzui4 . sqds ; while ( jxmwlezzui4 . q + 1 <= jxmwlezzui4 . m + 1 ) {
jvxi1futgc ( & jxmwlezzui4 . rt , & jxmwlezzui4 . ztest , & jxmwlezzui4 .
sqds , & jxmwlezzui4 . smm1 ) ; jxmwlezzui4 . rt = jxmwlezzui4 . sqds *
jxmwlezzui4 . b_s [ 0 ] + jxmwlezzui4 . smm1 * jxmwlezzui4 . e [ 0 ] ;
jxmwlezzui4 . e [ 0 ] = jxmwlezzui4 . sqds * jxmwlezzui4 . e [ 0 ] -
jxmwlezzui4 . smm1 * jxmwlezzui4 . b_s [ 0 ] ; jxmwlezzui4 . ztest =
jxmwlezzui4 . smm1 * jxmwlezzui4 . b_s [ 1 ] ; jxmwlezzui4 . b_s [ 1 ] *=
jxmwlezzui4 . sqds ; xrot_VJS4xnBw ( V , 1 , 3 , jxmwlezzui4 . sqds ,
jxmwlezzui4 . smm1 ) ; jxmwlezzui4 . b_s [ 0 ] = jxmwlezzui4 . rt ;
jvxi1futgc ( & jxmwlezzui4 . b_s [ 0 ] , & jxmwlezzui4 . ztest , &
jxmwlezzui4 . sqds , & jxmwlezzui4 . smm1 ) ; jxmwlezzui4 . rt = jxmwlezzui4
. sqds * jxmwlezzui4 . e [ 0 ] + jxmwlezzui4 . smm1 * jxmwlezzui4 . b_s [ 1 ]
; jxmwlezzui4 . b_s [ 1 ] = - jxmwlezzui4 . smm1 * jxmwlezzui4 . e [ 0 ] +
jxmwlezzui4 . sqds * jxmwlezzui4 . b_s [ 1 ] ; jxmwlezzui4 . ztest =
jxmwlezzui4 . smm1 * jxmwlezzui4 . e [ 1 ] ; jxmwlezzui4 . e [ 1 ] *=
jxmwlezzui4 . sqds ; xrot_VJS4xnBw ( U , 1 , 3 , jxmwlezzui4 . sqds ,
jxmwlezzui4 . smm1 ) ; jxmwlezzui4 . q = 1 ; } jxmwlezzui4 . e [ jxmwlezzui4
. m ] = jxmwlezzui4 . rt ; jxmwlezzui4 . iter ++ ; break ; default : if (
jxmwlezzui4 . b_s [ jxmwlezzui4 . q ] < 0.0F ) { jxmwlezzui4 . b_s [
jxmwlezzui4 . q ] = - jxmwlezzui4 . b_s [ jxmwlezzui4 . q ] ; xscal_YC54Gy7j
( - 1.0F , V , ( jxmwlezzui4 . q << 1 ) + 1 ) ; } jxmwlezzui4 . iter =
jxmwlezzui4 . q + 1 ; while ( ( jxmwlezzui4 . q + 1 < 2 ) && ( jxmwlezzui4 .
b_s [ jxmwlezzui4 . q ] < jxmwlezzui4 . b_s [ jxmwlezzui4 . iter ] ) ) {
jxmwlezzui4 . rt = jxmwlezzui4 . b_s [ jxmwlezzui4 . q ] ; jxmwlezzui4 . b_s
[ jxmwlezzui4 . q ] = jxmwlezzui4 . b_s [ jxmwlezzui4 . iter ] ; jxmwlezzui4
. b_s [ jxmwlezzui4 . iter ] = jxmwlezzui4 . rt ; xswap_sOCliIB6 ( V , (
jxmwlezzui4 . q << 1 ) + 1 , ( ( jxmwlezzui4 . q + 1 ) << 1 ) + 1 ) ;
xswap_sOCliIB6 ( U , ( jxmwlezzui4 . q << 1 ) + 1 , ( ( jxmwlezzui4 . q + 1 )
<< 1 ) + 1 ) ; jxmwlezzui4 . q = jxmwlezzui4 . iter ; jxmwlezzui4 . iter ++ ;
} jxmwlezzui4 . iter = 0 ; jxmwlezzui4 . m -- ; break ; } } s [ 0 ] =
jxmwlezzui4 . b_s [ 0 ] ; s [ 1 ] = jxmwlezzui4 . b_s [ 1 ] ; } static void
hhfsakcgr3 ( int32_T m , int32_T n , real32_T alpha1 , int32_T ix0 , const
real32_T y [ 2 ] , real32_T A [ 4 ] , int32_T ia0 ) { if ( ! ( alpha1 == 0.0F
) ) { jxmwlezzui4 . jA_nhwg0qilgg = ia0 - 1 ; jxmwlezzui4 . jy_lukfkbsu1g = 0
; jxmwlezzui4 . j_ptgtsmqbea = 0 ; while ( jxmwlezzui4 . j_ptgtsmqbea <= n -
1 ) { if ( y [ jxmwlezzui4 . jy_lukfkbsu1g ] != 0.0F ) { jxmwlezzui4 .
temp_hh0jorglq2 = y [ jxmwlezzui4 . jy_lukfkbsu1g ] * alpha1 ; jxmwlezzui4 .
ix_pe3k2xoqfh = ix0 ; jxmwlezzui4 . ijA_ieb43zpzad = jxmwlezzui4 .
jA_nhwg0qilgg ; jxmwlezzui4 . b_fts4uyq0ss = m + jxmwlezzui4 . jA_nhwg0qilgg
; while ( jxmwlezzui4 . ijA_ieb43zpzad + 1 <= jxmwlezzui4 . b_fts4uyq0ss ) {
A [ jxmwlezzui4 . ijA_ieb43zpzad ] += A [ jxmwlezzui4 . ix_pe3k2xoqfh - 1 ] *
jxmwlezzui4 . temp_hh0jorglq2 ; jxmwlezzui4 . ix_pe3k2xoqfh ++ ; jxmwlezzui4
. ijA_ieb43zpzad ++ ; } } jxmwlezzui4 . jy_lukfkbsu1g ++ ; jxmwlezzui4 .
jA_nhwg0qilgg += 2 ; jxmwlezzui4 . j_ptgtsmqbea ++ ; } } } static void
iin5uzh4b1 ( const real32_T A [ 4 ] , real32_T Q [ 4 ] , real32_T R [ 4 ] ) {
int32_T exitg1 ; jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] = A [ 0 ] ; jxmwlezzui4 .
b_A_fqdqrf4qbc [ 1 ] = A [ 1 ] ; jxmwlezzui4 . b_A_fqdqrf4qbc [ 2 ] = A [ 2 ]
; jxmwlezzui4 . b_A_fqdqrf4qbc [ 3 ] = A [ 3 ] ; jxmwlezzui4 .
tau_idx_0_o4akcuk44c = 0.0F ; jxmwlezzui4 . work_o4f35lbcvx [ 0 ] = 0.0F ;
jxmwlezzui4 . work_o4f35lbcvx [ 1 ] = 0.0F ; jxmwlezzui4 . atmp_p43y5eooqm =
jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] ; jxmwlezzui4 . xnorm_e13kp1af4b =
e2waoby4jy ( 1 , jxmwlezzui4 . b_A_fqdqrf4qbc , 2 ) ; if ( jxmwlezzui4 .
xnorm_e13kp1af4b != 0.0F ) { jxmwlezzui4 . xnorm_e13kp1af4b =
muSingleScalarHypot ( jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] , jxmwlezzui4 .
xnorm_e13kp1af4b ) ; if ( jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] >= 0.0F ) {
jxmwlezzui4 . xnorm_e13kp1af4b = - jxmwlezzui4 . xnorm_e13kp1af4b ; } if (
muSingleScalarAbs ( jxmwlezzui4 . xnorm_e13kp1af4b ) < 9.86076132E-32F ) {
jxmwlezzui4 . knt_msq3zq0e5q = - 1 ; do { jxmwlezzui4 . knt_msq3zq0e5q ++ ;
jxmwlezzui4 . c_lastc_o3vthkjscz = 1 ; while ( jxmwlezzui4 .
c_lastc_o3vthkjscz + 1 <= 2 ) { jxmwlezzui4 . b_A_fqdqrf4qbc [ jxmwlezzui4 .
c_lastc_o3vthkjscz ] *= 1.01412048E+31F ; jxmwlezzui4 . c_lastc_o3vthkjscz ++
; } jxmwlezzui4 . xnorm_e13kp1af4b *= 1.01412048E+31F ; jxmwlezzui4 .
atmp_p43y5eooqm *= 1.01412048E+31F ; } while ( ! ( muSingleScalarAbs (
jxmwlezzui4 . xnorm_e13kp1af4b ) >= 9.86076132E-32F ) ) ; jxmwlezzui4 .
xnorm_e13kp1af4b = muSingleScalarHypot ( jxmwlezzui4 . atmp_p43y5eooqm ,
e2waoby4jy ( 1 , jxmwlezzui4 . b_A_fqdqrf4qbc , 2 ) ) ; if ( jxmwlezzui4 .
atmp_p43y5eooqm >= 0.0F ) { jxmwlezzui4 . xnorm_e13kp1af4b = - jxmwlezzui4 .
xnorm_e13kp1af4b ; } jxmwlezzui4 . tau_idx_0_o4akcuk44c = ( jxmwlezzui4 .
xnorm_e13kp1af4b - jxmwlezzui4 . atmp_p43y5eooqm ) / jxmwlezzui4 .
xnorm_e13kp1af4b ; jxmwlezzui4 . atmp_p43y5eooqm = 1.0F / ( jxmwlezzui4 .
atmp_p43y5eooqm - jxmwlezzui4 . xnorm_e13kp1af4b ) ; jxmwlezzui4 .
c_lastc_o3vthkjscz = 1 ; while ( jxmwlezzui4 . c_lastc_o3vthkjscz + 1 <= 2 )
{ jxmwlezzui4 . b_A_fqdqrf4qbc [ jxmwlezzui4 . c_lastc_o3vthkjscz ] *=
jxmwlezzui4 . atmp_p43y5eooqm ; jxmwlezzui4 . c_lastc_o3vthkjscz ++ ; }
jxmwlezzui4 . c_lastc_o3vthkjscz = 0 ; while ( jxmwlezzui4 .
c_lastc_o3vthkjscz <= jxmwlezzui4 . knt_msq3zq0e5q ) { jxmwlezzui4 .
xnorm_e13kp1af4b *= 9.86076132E-32F ; jxmwlezzui4 . c_lastc_o3vthkjscz ++ ; }
jxmwlezzui4 . atmp_p43y5eooqm = jxmwlezzui4 . xnorm_e13kp1af4b ; } else {
jxmwlezzui4 . tau_idx_0_o4akcuk44c = ( jxmwlezzui4 . xnorm_e13kp1af4b -
jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] ) / jxmwlezzui4 . xnorm_e13kp1af4b ;
jxmwlezzui4 . atmp_p43y5eooqm = 1.0F / ( jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] -
jxmwlezzui4 . xnorm_e13kp1af4b ) ; jxmwlezzui4 . knt_msq3zq0e5q = 1 ; while (
jxmwlezzui4 . knt_msq3zq0e5q + 1 <= 2 ) { jxmwlezzui4 . b_A_fqdqrf4qbc [
jxmwlezzui4 . knt_msq3zq0e5q ] *= jxmwlezzui4 . atmp_p43y5eooqm ; jxmwlezzui4
. knt_msq3zq0e5q ++ ; } jxmwlezzui4 . atmp_p43y5eooqm = jxmwlezzui4 .
xnorm_e13kp1af4b ; } } jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] = jxmwlezzui4 .
atmp_p43y5eooqm ; jxmwlezzui4 . xnorm_e13kp1af4b = jxmwlezzui4 .
b_A_fqdqrf4qbc [ 0 ] ; jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] = 1.0F ; if (
jxmwlezzui4 . tau_idx_0_o4akcuk44c != 0.0F ) { jxmwlezzui4 . knt_msq3zq0e5q =
2 ; jxmwlezzui4 . c_lastc_o3vthkjscz = 1 ; while ( ( jxmwlezzui4 .
knt_msq3zq0e5q > 0 ) && ( jxmwlezzui4 . b_A_fqdqrf4qbc [ jxmwlezzui4 .
c_lastc_o3vthkjscz ] == 0.0F ) ) { jxmwlezzui4 . knt_msq3zq0e5q -- ;
jxmwlezzui4 . c_lastc_o3vthkjscz -- ; } jxmwlezzui4 . c_lastc_o3vthkjscz = 1
; jxmwlezzui4 . lastc_pbbtpb1rfa = 0 ; do { exitg1 = 0 ; if ( jxmwlezzui4 .
lastc_pbbtpb1rfa + 3 <= jxmwlezzui4 . knt_msq3zq0e5q + 2 ) { if ( jxmwlezzui4
. b_A_fqdqrf4qbc [ jxmwlezzui4 . lastc_pbbtpb1rfa + 2 ] != 0.0F ) { exitg1 =
1 ; } else { jxmwlezzui4 . lastc_pbbtpb1rfa ++ ; } } else { jxmwlezzui4 .
c_lastc_o3vthkjscz = 0 ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } else {
jxmwlezzui4 . knt_msq3zq0e5q = 0 ; jxmwlezzui4 . c_lastc_o3vthkjscz = 0 ; }
if ( jxmwlezzui4 . knt_msq3zq0e5q > 0 ) { xgemv_r0VDt5Ig ( jxmwlezzui4 .
knt_msq3zq0e5q , jxmwlezzui4 . c_lastc_o3vthkjscz , jxmwlezzui4 .
b_A_fqdqrf4qbc , 3 , jxmwlezzui4 . b_A_fqdqrf4qbc , 1 , jxmwlezzui4 .
work_o4f35lbcvx ) ; hhfsakcgr3 ( jxmwlezzui4 . knt_msq3zq0e5q , jxmwlezzui4 .
c_lastc_o3vthkjscz , - jxmwlezzui4 . tau_idx_0_o4akcuk44c , 1 , jxmwlezzui4 .
work_o4f35lbcvx , jxmwlezzui4 . b_A_fqdqrf4qbc , 3 ) ; } jxmwlezzui4 .
b_A_fqdqrf4qbc [ 0 ] = jxmwlezzui4 . xnorm_e13kp1af4b ; R [ 0 ] = jxmwlezzui4
. b_A_fqdqrf4qbc [ 0 ] ; R [ 1 ] = 0.0F ; jxmwlezzui4 . work_o4f35lbcvx [ 0 ]
= 0.0F ; jxmwlezzui4 . c_lastc_o3vthkjscz = 0 ; while ( jxmwlezzui4 .
c_lastc_o3vthkjscz <= 1 ) { R [ jxmwlezzui4 . c_lastc_o3vthkjscz + 2 ] =
jxmwlezzui4 . b_A_fqdqrf4qbc [ jxmwlezzui4 . c_lastc_o3vthkjscz + 2 ] ;
jxmwlezzui4 . c_lastc_o3vthkjscz ++ ; } jxmwlezzui4 . work_o4f35lbcvx [ 1 ] =
0.0F ; jxmwlezzui4 . b_A_fqdqrf4qbc [ 3 ] = 1.0F ; jxmwlezzui4 .
b_A_fqdqrf4qbc [ 2 ] = 0.0F ; jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] = 1.0F ; if
( jxmwlezzui4 . tau_idx_0_o4akcuk44c != 0.0F ) { jxmwlezzui4 .
c_lastc_o3vthkjscz = 2 ; jxmwlezzui4 . lastc_pbbtpb1rfa = 1 ; while ( (
jxmwlezzui4 . c_lastc_o3vthkjscz > 0 ) && ( jxmwlezzui4 . b_A_fqdqrf4qbc [
jxmwlezzui4 . lastc_pbbtpb1rfa ] == 0.0F ) ) { jxmwlezzui4 .
c_lastc_o3vthkjscz -- ; jxmwlezzui4 . lastc_pbbtpb1rfa -- ; } jxmwlezzui4 .
lastc_pbbtpb1rfa = 1 ; jxmwlezzui4 . knt_msq3zq0e5q = 1 ; do { exitg1 = 0 ;
if ( jxmwlezzui4 . knt_msq3zq0e5q + 2 <= jxmwlezzui4 . c_lastc_o3vthkjscz + 2
) { if ( jxmwlezzui4 . b_A_fqdqrf4qbc [ jxmwlezzui4 . knt_msq3zq0e5q + 1 ] !=
0.0F ) { exitg1 = 1 ; } else { jxmwlezzui4 . knt_msq3zq0e5q ++ ; } } else {
jxmwlezzui4 . lastc_pbbtpb1rfa = 0 ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ;
} else { jxmwlezzui4 . c_lastc_o3vthkjscz = 0 ; jxmwlezzui4 .
lastc_pbbtpb1rfa = 0 ; } if ( jxmwlezzui4 . c_lastc_o3vthkjscz > 0 ) {
xgemv_r0VDt5Ig ( jxmwlezzui4 . c_lastc_o3vthkjscz , jxmwlezzui4 .
lastc_pbbtpb1rfa , jxmwlezzui4 . b_A_fqdqrf4qbc , 3 , jxmwlezzui4 .
b_A_fqdqrf4qbc , 1 , jxmwlezzui4 . work_o4f35lbcvx ) ; hhfsakcgr3 (
jxmwlezzui4 . c_lastc_o3vthkjscz , jxmwlezzui4 . lastc_pbbtpb1rfa , -
jxmwlezzui4 . tau_idx_0_o4akcuk44c , 1 , jxmwlezzui4 . work_o4f35lbcvx ,
jxmwlezzui4 . b_A_fqdqrf4qbc , 3 ) ; } jxmwlezzui4 . c_lastc_o3vthkjscz = 1 ;
while ( jxmwlezzui4 . c_lastc_o3vthkjscz + 1 <= 2 ) { jxmwlezzui4 .
b_A_fqdqrf4qbc [ jxmwlezzui4 . c_lastc_o3vthkjscz ] *= - jxmwlezzui4 .
tau_idx_0_o4akcuk44c ; jxmwlezzui4 . c_lastc_o3vthkjscz ++ ; } jxmwlezzui4 .
b_A_fqdqrf4qbc [ 0 ] = 1.0F - jxmwlezzui4 . tau_idx_0_o4akcuk44c ; Q [ 0 ] =
jxmwlezzui4 . b_A_fqdqrf4qbc [ 0 ] ; Q [ 1 ] = jxmwlezzui4 . b_A_fqdqrf4qbc [
1 ] ; Q [ 2 ] = jxmwlezzui4 . b_A_fqdqrf4qbc [ 2 ] ; Q [ 3 ] = jxmwlezzui4 .
b_A_fqdqrf4qbc [ 3 ] ; } static void mzaeaudewc ( const real32_T meanWeights
[ 2 ] , real32_T covWeights [ 2 ] , real32_T OOM , real32_T Y1 [ 2 ] ,
real32_T Y2 [ 8 ] , const real32_T X1 [ 2 ] , real32_T X2 [ 8 ] , real32_T
Ymean [ 2 ] , real32_T Sy [ 4 ] , real32_T Pxy [ 4 ] ) { int32_T exitg1 ;
boolean_T exitg2 ; boolean_T guard1 = false ; Ymean [ 0 ] = Y1 [ 0 ] *
meanWeights [ 0 ] ; Ymean [ 1 ] = meanWeights [ 0 ] * Y1 [ 1 ] ; jxmwlezzui4
. temp_m3yhjduhi1 = meanWeights [ 1 ] ; for ( jxmwlezzui4 . kk = 0 ;
jxmwlezzui4 . kk < 4 ; jxmwlezzui4 . kk ++ ) { jxmwlezzui4 . signOOM = Ymean
[ 0 ] ; jxmwlezzui4 . signOOM += Y2 [ jxmwlezzui4 . kk << 1 ] * jxmwlezzui4 .
temp_m3yhjduhi1 ; Ymean [ 0 ] = jxmwlezzui4 . signOOM ; jxmwlezzui4 . signOOM
= Ymean [ 1 ] ; jxmwlezzui4 . signOOM += Y2 [ ( jxmwlezzui4 . kk << 1 ) + 1 ]
* jxmwlezzui4 . temp_m3yhjduhi1 ; Ymean [ 1 ] = jxmwlezzui4 . signOOM ; }
jxmwlezzui4 . temp_m3yhjduhi1 = Y1 [ 0 ] ; jxmwlezzui4 . signOOM = Ymean [ 0
] ; jxmwlezzui4 . signOOM *= OOM ; jxmwlezzui4 . temp_m3yhjduhi1 -=
jxmwlezzui4 . signOOM ; Ymean [ 0 ] = jxmwlezzui4 . signOOM ; Y1 [ 0 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = Y1 [ 1 ] ;
jxmwlezzui4 . signOOM = Ymean [ 1 ] ; jxmwlezzui4 . signOOM *= OOM ;
jxmwlezzui4 . temp_m3yhjduhi1 -= jxmwlezzui4 . signOOM ; Ymean [ 1 ] =
jxmwlezzui4 . signOOM ; Y1 [ 1 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; for (
jxmwlezzui4 . kk = 0 ; jxmwlezzui4 . kk < 4 ; jxmwlezzui4 . kk ++ ) {
jxmwlezzui4 . signOOM = Y2 [ jxmwlezzui4 . kk << 1 ] ; jxmwlezzui4 . signOOM
-= Ymean [ 0 ] ; Y2 [ jxmwlezzui4 . kk << 1 ] = jxmwlezzui4 . signOOM ;
jxmwlezzui4 . signOOM = Y2 [ ( jxmwlezzui4 . kk << 1 ) + 1 ] ; jxmwlezzui4 .
signOOM -= Ymean [ 1 ] ; Y2 [ ( jxmwlezzui4 . kk << 1 ) + 1 ] = jxmwlezzui4 .
signOOM ; } jxmwlezzui4 . signOOM = muSingleScalarSign ( OOM ) ; jxmwlezzui4
. temp_m3yhjduhi1 = covWeights [ 0 ] ; jxmwlezzui4 . temp_m3yhjduhi1 *=
jxmwlezzui4 . signOOM ; covWeights [ 0 ] = jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . temp_m3yhjduhi1 = covWeights [ 1 ] ; jxmwlezzui4 .
temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; covWeights [ 1 ] = jxmwlezzui4 .
temp_m3yhjduhi1 ; OOM *= jxmwlezzui4 . signOOM ; jxmwlezzui4 . signOOM =
muSingleScalarSqrt ( OOM ) ; jxmwlezzui4 . temp_m3yhjduhi1 =
muSingleScalarSqrt ( covWeights [ 1 ] ) ; for ( jxmwlezzui4 . kk = 0 ;
jxmwlezzui4 . kk < 2 ; jxmwlezzui4 . kk ++ ) { jxmwlezzui4 . temp [
jxmwlezzui4 . kk << 2 ] = jxmwlezzui4 . temp_m3yhjduhi1 * Y2 [ jxmwlezzui4 .
kk ] ; jxmwlezzui4 . temp [ ( jxmwlezzui4 . kk << 2 ) + 1 ] = Y2 [
jxmwlezzui4 . kk + 2 ] * jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp [
( jxmwlezzui4 . kk << 2 ) + 2 ] = Y2 [ jxmwlezzui4 . kk + 4 ] * jxmwlezzui4 .
temp_m3yhjduhi1 ; jxmwlezzui4 . temp [ ( jxmwlezzui4 . kk << 2 ) + 3 ] = Y2 [
jxmwlezzui4 . kk + 6 ] * jxmwlezzui4 . temp_m3yhjduhi1 ; } jnelmoh0y1 (
jxmwlezzui4 . temp , jxmwlezzui4 . a__1 , Sy ) ; if ( muSingleScalarSign (
covWeights [ 0 ] ) == 1.0F ) { Sy [ 1 ] = 0.0F ; mcq03og2j3 ( Sy [ 0 ] , Y1 [
0 ] , & jxmwlezzui4 . c_bjbgfqrolh [ 0 ] , & jxmwlezzui4 . s_nuebgmauvi [ 0 ]
, & Sy [ 0 ] ) ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . c_bjbgfqrolh [
0 ] * Y1 [ 1 ] - jxmwlezzui4 . s_nuebgmauvi [ 0 ] * Sy [ 2 ] ; Sy [ 2 ] =
jxmwlezzui4 . c_bjbgfqrolh [ 0 ] * Sy [ 2 ] + jxmwlezzui4 . s_nuebgmauvi [ 0
] * Y1 [ 1 ] ; mcq03og2j3 ( Sy [ 3 ] , jxmwlezzui4 . temp_m3yhjduhi1 , &
jxmwlezzui4 . scale_czkfpwuzm5 , & jxmwlezzui4 . absxk_mdoasc5av4 , & Sy [ 3
] ) ; jxmwlezzui4 . temp_m3yhjduhi1 = Sy [ 0 ] ; jxmwlezzui4 . x_idx_0 = Sy [
2 ] ; jxmwlezzui4 . x_idx_1 = Sy [ 1 ] ; jxmwlezzui4 . scale_czkfpwuzm5 = Sy
[ 3 ] ; jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; Sy [ 0 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 .
x_idx_0 ; jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; Sy [ 1 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 .
x_idx_1 ; jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; Sy [ 2 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 .
scale_czkfpwuzm5 ; jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ;
Sy [ 3 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; } else { Sy [ 1 ] = 0.0F ;
jxmwlezzui4 . errorCondition_m4t0acbuzi = false ; if ( ( Sy [ 0 ] == 0.0F )
|| ( Sy [ 3 ] == 0.0F ) ) { jxmwlezzui4 . errorCondition_m4t0acbuzi = true ;
} guard1 = false ; if ( jxmwlezzui4 . errorCondition_m4t0acbuzi ) { guard1 =
true ; } else { jxmwlezzui4 . x_idx_0 = Y1 [ 0 ] ; jxmwlezzui4 .
temp_m3yhjduhi1 = jxmwlezzui4 . x_idx_0 ; jxmwlezzui4 . x_idx_0 = jxmwlezzui4
. temp_m3yhjduhi1 / Sy [ 0 ] ; jxmwlezzui4 . x_idx_1 = Y1 [ 1 ] ; jxmwlezzui4
. temp_m3yhjduhi1 = jxmwlezzui4 . x_idx_1 ; jxmwlezzui4 . temp_m3yhjduhi1 -=
Sy [ 2 ] * jxmwlezzui4 . x_idx_0 ; jxmwlezzui4 . x_idx_1 = jxmwlezzui4 .
temp_m3yhjduhi1 / Sy [ 3 ] ; jxmwlezzui4 . scale_czkfpwuzm5 = 1.29246971E-26F
; jxmwlezzui4 . absxk_mdoasc5av4 = muSingleScalarAbs ( jxmwlezzui4 . x_idx_0
) ; if ( jxmwlezzui4 . absxk_mdoasc5av4 > 1.29246971E-26F ) { jxmwlezzui4 .
temp_m3yhjduhi1 = 1.0F ; jxmwlezzui4 . scale_czkfpwuzm5 = jxmwlezzui4 .
absxk_mdoasc5av4 ; } else { jxmwlezzui4 . b_t = jxmwlezzui4 .
absxk_mdoasc5av4 / 1.29246971E-26F ; jxmwlezzui4 . temp_m3yhjduhi1 =
jxmwlezzui4 . b_t * jxmwlezzui4 . b_t ; } jxmwlezzui4 . absxk_mdoasc5av4 =
muSingleScalarAbs ( jxmwlezzui4 . x_idx_1 ) ; if ( jxmwlezzui4 .
absxk_mdoasc5av4 > jxmwlezzui4 . scale_czkfpwuzm5 ) { jxmwlezzui4 . b_t =
jxmwlezzui4 . scale_czkfpwuzm5 / jxmwlezzui4 . absxk_mdoasc5av4 ; jxmwlezzui4
. temp_m3yhjduhi1 = jxmwlezzui4 . temp_m3yhjduhi1 * jxmwlezzui4 . b_t *
jxmwlezzui4 . b_t + 1.0F ; jxmwlezzui4 . scale_czkfpwuzm5 = jxmwlezzui4 .
absxk_mdoasc5av4 ; } else { jxmwlezzui4 . b_t = jxmwlezzui4 .
absxk_mdoasc5av4 / jxmwlezzui4 . scale_czkfpwuzm5 ; jxmwlezzui4 .
temp_m3yhjduhi1 += jxmwlezzui4 . b_t * jxmwlezzui4 . b_t ; } jxmwlezzui4 .
temp_m3yhjduhi1 = jxmwlezzui4 . scale_czkfpwuzm5 * muSingleScalarSqrt (
jxmwlezzui4 . temp_m3yhjduhi1 ) ; if ( jxmwlezzui4 . temp_m3yhjduhi1 >= 1.0F
) { guard1 = true ; } else { jxmwlezzui4 . temp_m3yhjduhi1 =
muSingleScalarSqrt ( 1.0F - jxmwlezzui4 . temp_m3yhjduhi1 * jxmwlezzui4 .
temp_m3yhjduhi1 ) ; jxmwlezzui4 . scale_czkfpwuzm5 = jxmwlezzui4 . x_idx_1 ;
mcq03og2j3 ( jxmwlezzui4 . temp_m3yhjduhi1 , jxmwlezzui4 . scale_czkfpwuzm5 ,
& jxmwlezzui4 . c_bjbgfqrolh [ 1 ] , & jxmwlezzui4 . s_nuebgmauvi [ 1 ] , &
jxmwlezzui4 . temp_m3yhjduhi1 ) ; jxmwlezzui4 . x_idx_1 = 0.0F ; jxmwlezzui4
. scale_czkfpwuzm5 = jxmwlezzui4 . x_idx_0 ; mcq03og2j3 ( jxmwlezzui4 .
temp_m3yhjduhi1 , jxmwlezzui4 . scale_czkfpwuzm5 , & jxmwlezzui4 .
c_bjbgfqrolh [ 0 ] , & jxmwlezzui4 . s_nuebgmauvi [ 0 ] , & jxmwlezzui4 .
temp_m3yhjduhi1 ) ; jxmwlezzui4 . x_idx_0 = 0.0F ; jxmwlezzui4 .
iAcol_klmngopk1n = 0 ; while ( jxmwlezzui4 . iAcol_klmngopk1n + 1 > 0 ) {
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . s_nuebgmauvi [ jxmwlezzui4 .
iAcol_klmngopk1n ] * Sy [ jxmwlezzui4 . iAcol_klmngopk1n ] ; Sy [ jxmwlezzui4
. iAcol_klmngopk1n ] = jxmwlezzui4 . c_bjbgfqrolh [ jxmwlezzui4 .
iAcol_klmngopk1n ] * Sy [ jxmwlezzui4 . iAcol_klmngopk1n ] - jxmwlezzui4 .
s_nuebgmauvi [ jxmwlezzui4 . iAcol_klmngopk1n ] * jxmwlezzui4 . x_idx_0 ;
jxmwlezzui4 . x_idx_0 = jxmwlezzui4 . c_bjbgfqrolh [ jxmwlezzui4 .
iAcol_klmngopk1n ] * jxmwlezzui4 . x_idx_0 + jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . iAcol_klmngopk1n -- ; } jxmwlezzui4 . iAcol_klmngopk1n = 1 ;
while ( jxmwlezzui4 . iAcol_klmngopk1n + 1 > 0 ) { jxmwlezzui4 .
temp_m3yhjduhi1 = Sy [ jxmwlezzui4 . iAcol_klmngopk1n + 2 ] * jxmwlezzui4 .
s_nuebgmauvi [ jxmwlezzui4 . iAcol_klmngopk1n ] ; Sy [ jxmwlezzui4 .
iAcol_klmngopk1n + 2 ] = Sy [ jxmwlezzui4 . iAcol_klmngopk1n + 2 ] *
jxmwlezzui4 . c_bjbgfqrolh [ jxmwlezzui4 . iAcol_klmngopk1n ] - jxmwlezzui4 .
s_nuebgmauvi [ jxmwlezzui4 . iAcol_klmngopk1n ] * jxmwlezzui4 . x_idx_1 ;
jxmwlezzui4 . x_idx_1 = jxmwlezzui4 . c_bjbgfqrolh [ jxmwlezzui4 .
iAcol_klmngopk1n ] * jxmwlezzui4 . x_idx_1 + jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . iAcol_klmngopk1n -- ; } } } if ( guard1 ) { for ( jxmwlezzui4 .
kk = 0 ; jxmwlezzui4 . kk < 2 ; jxmwlezzui4 . kk ++ ) { jxmwlezzui4 . Sy [
jxmwlezzui4 . kk ] = 0.0F ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy
[ jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1 += Sy [ jxmwlezzui4 . kk
<< 1 ] * Sy [ 0 ] ; jxmwlezzui4 . Sy [ jxmwlezzui4 . kk ] = jxmwlezzui4 .
temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [
jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1 += Sy [ ( jxmwlezzui4 . kk
<< 1 ) + 1 ] * Sy [ 1 ] ; jxmwlezzui4 . Sy [ jxmwlezzui4 . kk ] = jxmwlezzui4
. temp_m3yhjduhi1 ; jxmwlezzui4 . Y1 [ jxmwlezzui4 . kk << 1 ] = Y1 [ 0 ] *
Y1 [ jxmwlezzui4 . kk ] ; jxmwlezzui4 . Sy [ jxmwlezzui4 . kk + 2 ] = 0.0F ;
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [ jxmwlezzui4 . kk + 2 ] ;
jxmwlezzui4 . temp_m3yhjduhi1 += Sy [ jxmwlezzui4 . kk << 1 ] * Sy [ 2 ] ;
jxmwlezzui4 . Sy [ jxmwlezzui4 . kk + 2 ] = jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [ jxmwlezzui4 . kk + 2 ] ;
jxmwlezzui4 . temp_m3yhjduhi1 += Sy [ ( jxmwlezzui4 . kk << 1 ) + 1 ] * Sy [
3 ] ; jxmwlezzui4 . Sy [ jxmwlezzui4 . kk + 2 ] = jxmwlezzui4 .
temp_m3yhjduhi1 ; jxmwlezzui4 . Y1 [ ( jxmwlezzui4 . kk << 1 ) + 1 ] = Y1 [ 1
] * Y1 [ jxmwlezzui4 . kk ] ; } jxmwlezzui4 . errorCondition_m4t0acbuzi =
true ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [ 0 ] - jxmwlezzui4 .
Y1 [ 0 ] ; if ( muSingleScalarIsInf ( jxmwlezzui4 . temp_m3yhjduhi1 ) ||
muSingleScalarIsNaN ( jxmwlezzui4 . temp_m3yhjduhi1 ) ) { jxmwlezzui4 .
errorCondition_m4t0acbuzi = false ; } jxmwlezzui4 . Ss_cxarnvbvui [ 0 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 .
Sy [ 1 ] - jxmwlezzui4 . Y1 [ 1 ] ; if ( jxmwlezzui4 .
errorCondition_m4t0acbuzi && ( ( ! muSingleScalarIsInf ( jxmwlezzui4 .
temp_m3yhjduhi1 ) ) && ( ! muSingleScalarIsNaN ( jxmwlezzui4 .
temp_m3yhjduhi1 ) ) ) ) { } else { jxmwlezzui4 . errorCondition_m4t0acbuzi =
false ; } jxmwlezzui4 . Ss_cxarnvbvui [ 1 ] = jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [ 2 ] - jxmwlezzui4 . Y1 [ 2
] ; if ( jxmwlezzui4 . errorCondition_m4t0acbuzi && ( ( ! muSingleScalarIsInf
( jxmwlezzui4 . temp_m3yhjduhi1 ) ) && ( ! muSingleScalarIsNaN ( jxmwlezzui4
. temp_m3yhjduhi1 ) ) ) ) { } else { jxmwlezzui4 . errorCondition_m4t0acbuzi
= false ; } jxmwlezzui4 . Ss_cxarnvbvui [ 2 ] = jxmwlezzui4 . temp_m3yhjduhi1
; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Sy [ 3 ] - jxmwlezzui4 . Y1 [
3 ] ; if ( jxmwlezzui4 . errorCondition_m4t0acbuzi && ( ( !
muSingleScalarIsInf ( jxmwlezzui4 . temp_m3yhjduhi1 ) ) && ( !
muSingleScalarIsNaN ( jxmwlezzui4 . temp_m3yhjduhi1 ) ) ) ) { } else {
jxmwlezzui4 . errorCondition_m4t0acbuzi = false ; } jxmwlezzui4 .
Ss_cxarnvbvui [ 3 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; if ( jxmwlezzui4 .
errorCondition_m4t0acbuzi ) { j2ajyr3qbc ( jxmwlezzui4 . Ss_cxarnvbvui ,
jxmwlezzui4 . Y1 , jxmwlezzui4 . s_nuebgmauvi , jxmwlezzui4 . Sy ) ; } else {
jxmwlezzui4 . s_nuebgmauvi [ 0 ] = ( rtNaNF ) ; jxmwlezzui4 . s_nuebgmauvi [
1 ] = ( rtNaNF ) ; jxmwlezzui4 . Sy [ 0 ] = ( rtNaNF ) ; jxmwlezzui4 . Sy [ 1
] = ( rtNaNF ) ; jxmwlezzui4 . Sy [ 2 ] = ( rtNaNF ) ; jxmwlezzui4 . Sy [ 3 ]
= ( rtNaNF ) ; } jxmwlezzui4 . Ss_cxarnvbvui [ 0 ] = jxmwlezzui4 .
s_nuebgmauvi [ 0 ] ; jxmwlezzui4 . Ss_cxarnvbvui [ 3 ] = jxmwlezzui4 .
s_nuebgmauvi [ 1 ] ; jxmwlezzui4 . Ss_cxarnvbvui [ 0 ] = muSingleScalarSqrt (
jxmwlezzui4 . Ss_cxarnvbvui [ 0 ] ) ; jxmwlezzui4 . Ss_cxarnvbvui [ 1 ] =
0.0F ; jxmwlezzui4 . Ss_cxarnvbvui [ 2 ] = 0.0F ; jxmwlezzui4 . Ss_cxarnvbvui
[ 3 ] = muSingleScalarSqrt ( jxmwlezzui4 . Ss_cxarnvbvui [ 3 ] ) ; for (
jxmwlezzui4 . kk = 0 ; jxmwlezzui4 . kk < 2 ; jxmwlezzui4 . kk ++ ) { Sy [
jxmwlezzui4 . kk ] = 0.0F ; jxmwlezzui4 . temp_m3yhjduhi1 = Sy [ jxmwlezzui4
. kk ] ; jxmwlezzui4 . temp_m3yhjduhi1 += jxmwlezzui4 . Ss_cxarnvbvui [
jxmwlezzui4 . kk << 1 ] * jxmwlezzui4 . Sy [ 0 ] ; Sy [ jxmwlezzui4 . kk ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = Sy [
jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1 += jxmwlezzui4 .
Ss_cxarnvbvui [ ( jxmwlezzui4 . kk << 1 ) + 1 ] * jxmwlezzui4 . Sy [ 2 ] ; Sy
[ jxmwlezzui4 . kk ] = jxmwlezzui4 . temp_m3yhjduhi1 ; Sy [ jxmwlezzui4 . kk
+ 2 ] = 0.0F ; jxmwlezzui4 . temp_m3yhjduhi1 = Sy [ jxmwlezzui4 . kk + 2 ] ;
jxmwlezzui4 . temp_m3yhjduhi1 += jxmwlezzui4 . Ss_cxarnvbvui [ jxmwlezzui4 .
kk << 1 ] * jxmwlezzui4 . Sy [ 1 ] ; Sy [ jxmwlezzui4 . kk + 2 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = Sy [
jxmwlezzui4 . kk + 2 ] ; jxmwlezzui4 . temp_m3yhjduhi1 += jxmwlezzui4 .
Ss_cxarnvbvui [ ( jxmwlezzui4 . kk << 1 ) + 1 ] * jxmwlezzui4 . Sy [ 3 ] ; Sy
[ jxmwlezzui4 . kk + 2 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; } jxmwlezzui4 .
errorCondition_m4t0acbuzi = true ; jxmwlezzui4 . kk = 0 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( jxmwlezzui4 . kk < 2 ) ) { jxmwlezzui4 .
iAcol_klmngopk1n = jxmwlezzui4 . kk + 2 ; do { exitg1 = 0 ; if ( jxmwlezzui4
. iAcol_klmngopk1n < 3 ) { if ( ! ( Sy [ ( jxmwlezzui4 . kk << 1 ) + 1 ] ==
0.0F ) ) { jxmwlezzui4 . errorCondition_m4t0acbuzi = false ; exitg1 = 1 ; }
else { jxmwlezzui4 . iAcol_klmngopk1n = 3 ; } } else { jxmwlezzui4 . kk ++ ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } if ( ! jxmwlezzui4 . errorCondition_m4t0acbuzi ) { for ( jxmwlezzui4 .
i17 = 0 ; jxmwlezzui4 . i17 < 4 ; jxmwlezzui4 . i17 ++ ) { jxmwlezzui4 . Sy [
jxmwlezzui4 . i17 ] = Sy [ jxmwlezzui4 . i17 ] ; } iin5uzh4b1 ( jxmwlezzui4 .
Sy , jxmwlezzui4 . Y1 , Sy ) ; } } jxmwlezzui4 . temp_m3yhjduhi1 = Sy [ 0 ] ;
jxmwlezzui4 . x_idx_0 = Sy [ 2 ] ; jxmwlezzui4 . x_idx_1 = Sy [ 1 ] ;
jxmwlezzui4 . scale_czkfpwuzm5 = Sy [ 3 ] ; jxmwlezzui4 . temp_m3yhjduhi1 *=
jxmwlezzui4 . signOOM ; Sy [ 0 ] = jxmwlezzui4 . temp_m3yhjduhi1 ;
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . x_idx_0 ; jxmwlezzui4 .
temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; Sy [ 1 ] = jxmwlezzui4 .
temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . x_idx_1 ;
jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ; Sy [ 2 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 .
scale_czkfpwuzm5 ; jxmwlezzui4 . temp_m3yhjduhi1 *= jxmwlezzui4 . signOOM ;
Sy [ 3 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; } for ( jxmwlezzui4 . kk = 0 ;
jxmwlezzui4 . kk < 4 ; jxmwlezzui4 . kk ++ ) { jxmwlezzui4 . temp_m3yhjduhi1
= X2 [ jxmwlezzui4 . kk << 1 ] ; jxmwlezzui4 . temp_m3yhjduhi1 -= X1 [ 0 ] ;
X2 [ jxmwlezzui4 . kk << 1 ] = jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 .
temp_m3yhjduhi1 = X2 [ ( jxmwlezzui4 . kk << 1 ) + 1 ] ; jxmwlezzui4 .
temp_m3yhjduhi1 -= X1 [ 1 ] ; X2 [ ( jxmwlezzui4 . kk << 1 ) + 1 ] =
jxmwlezzui4 . temp_m3yhjduhi1 ; } jxmwlezzui4 . signOOM = covWeights [ 1 ] *
OOM ; for ( jxmwlezzui4 . kk = 0 ; jxmwlezzui4 . kk < 2 ; jxmwlezzui4 . kk ++
) { for ( jxmwlezzui4 . iAcol_klmngopk1n = 0 ; jxmwlezzui4 . iAcol_klmngopk1n
< 2 ; jxmwlezzui4 . iAcol_klmngopk1n ++ ) { jxmwlezzui4 . Ss_cxarnvbvui [
jxmwlezzui4 . kk + ( jxmwlezzui4 . iAcol_klmngopk1n << 1 ) ] = 0.0F ;
jxmwlezzui4 . temp_m3yhjduhi1 = jxmwlezzui4 . Ss_cxarnvbvui [ ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) + jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1
+= X2 [ jxmwlezzui4 . kk ] * Y2 [ jxmwlezzui4 . iAcol_klmngopk1n ] ;
jxmwlezzui4 . Ss_cxarnvbvui [ jxmwlezzui4 . kk + ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) ] = jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 .
temp_m3yhjduhi1 = jxmwlezzui4 . Ss_cxarnvbvui [ ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) + jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1
+= X2 [ jxmwlezzui4 . kk + 2 ] * Y2 [ jxmwlezzui4 . iAcol_klmngopk1n + 2 ] ;
jxmwlezzui4 . Ss_cxarnvbvui [ jxmwlezzui4 . kk + ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) ] = jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 .
temp_m3yhjduhi1 = jxmwlezzui4 . Ss_cxarnvbvui [ ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) + jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1
+= X2 [ jxmwlezzui4 . kk + 4 ] * Y2 [ jxmwlezzui4 . iAcol_klmngopk1n + 4 ] ;
jxmwlezzui4 . Ss_cxarnvbvui [ jxmwlezzui4 . kk + ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) ] = jxmwlezzui4 . temp_m3yhjduhi1 ; jxmwlezzui4 .
temp_m3yhjduhi1 = jxmwlezzui4 . Ss_cxarnvbvui [ ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) + jxmwlezzui4 . kk ] ; jxmwlezzui4 . temp_m3yhjduhi1
+= X2 [ jxmwlezzui4 . kk + 6 ] * Y2 [ jxmwlezzui4 . iAcol_klmngopk1n + 6 ] ;
jxmwlezzui4 . Ss_cxarnvbvui [ jxmwlezzui4 . kk + ( jxmwlezzui4 .
iAcol_klmngopk1n << 1 ) ] = jxmwlezzui4 . temp_m3yhjduhi1 ; } } Pxy [ 0 ] =
jxmwlezzui4 . Ss_cxarnvbvui [ 0 ] * jxmwlezzui4 . signOOM ; Pxy [ 1 ] =
jxmwlezzui4 . Ss_cxarnvbvui [ 1 ] * jxmwlezzui4 . signOOM ; Pxy [ 2 ] =
jxmwlezzui4 . Ss_cxarnvbvui [ 2 ] * jxmwlezzui4 . signOOM ; Pxy [ 3 ] =
jxmwlezzui4 . Ss_cxarnvbvui [ 3 ] * jxmwlezzui4 . signOOM ; } void cketgpc2z3
( void ) { m3hvauf25pt . pe4apvu41x = ( real32_T ) rtP_BattSocInit ;
jxmwlezzui4 . jvqkttolxj = eyairrb1z1 . P_43 ; jxmwlezzui4 . i3ftva5kxn =
eyairrb1z1 . P_44 ; jxmwlezzui4 . cjy5nvic03 [ 0 ] = eyairrb1z1 . P_2 ;
jxmwlezzui4 . aipstqw5b1 [ 0 ] = eyairrb1z1 . P_3 ; } void h41aqbjehq ( void
) { m3hvauf25pt . pe4apvu41x = ( real32_T ) rtP_BattSocInit ; } void
acaeyrlq5y ( const real32_T nbd5ri1h1t [ 96 ] ) { jz0daukglw = nbd5ri1h1t ;
m3hvauf25pt . grsaha3jc1 [ 0 ] = eyairrb1z1 . P_8 [ 0 ] ; m3hvauf25pt .
grsaha3jc1 [ 1 ] = eyairrb1z1 . P_8 [ 1 ] ; m3hvauf25pt . grsaha3jc1 [ 2 ] =
eyairrb1z1 . P_8 [ 2 ] ; m3hvauf25pt . grsaha3jc1 [ 3 ] = eyairrb1z1 . P_8 [
3 ] ; m3hvauf25pt . e1q4n1bs5s [ 0 ] = eyairrb1z1 . P_9 [ 0 ] ; m3hvauf25pt .
e1q4n1bs5s [ 1 ] = eyairrb1z1 . P_9 [ 1 ] ; m3hvauf25pt . pnfxhoesbw [ 0 ] =
eyairrb1z1 . P_14 [ 0 ] ; m3hvauf25pt . pnfxhoesbw [ 1 ] = eyairrb1z1 . P_14
[ 1 ] ; m3hvauf25pt . pnfxhoesbw [ 2 ] = eyairrb1z1 . P_14 [ 2 ] ;
m3hvauf25pt . pnfxhoesbw [ 3 ] = eyairrb1z1 . P_14 [ 3 ] ; m3hvauf25pt .
fyazshhoy2 [ 0 ] = eyairrb1z1 . P_15 [ 0 ] ; m3hvauf25pt . fyazshhoy2 [ 1 ] =
eyairrb1z1 . P_15 [ 1 ] ; } void SOC_Estimation ( const BMS_State_Enum *
fykdjr0uek , const real32_T bjhlm2itxh [ 96 ] , const real32_T * j4qwtvlixt ,
const real32_T nbd5ri1h1t [ 96 ] , real32_T * mtifma1xgg , real32_T *
izzkmt4ijf , real32_T * bzb0d2bbrg ) { egzjadadgd * const j1wfl5js5r = & (
lgpwz0u0yd . rtm ) ; void * args [ 2 ] ; void * args_e [ 2 ] ; void * args_i
[ 2 ] ; void * args_p [ 2 ] ; void * b_args [ 2 ] ; void * b_args_p [ 2 ] ;
void * c_args [ 2 ] ; void * c_args_p [ 2 ] ; void * d_args [ 2 ] ; static
const real32_T Wcov [ 2 ] = { 7.0F , 0.50000006F } ; int32_T exitg1 ;
boolean_T exitg2 ; boolean_T guard1 = false ; jz0daukglw = nbd5ri1h1t ;
jxmwlezzui4 . ixoecilttf = ( * fykdjr0uek != eyairrb1z1 . P_1 ) ; jxmwlezzui4
. papym5idyw = jxmwlezzui4 . ixoecilttf ; jxmwlezzui4 . mjiaqz0pes =
eyairrb1z1 . P_32 * * j4qwtvlixt ; if ( jxmwlezzui4 . papym5idyw ) {
jxmwlezzui4 . nrfpkyawmh [ 0 ] = eyairrb1z1 . P_4 [ 0 ] ; jxmwlezzui4 .
nrfpkyawmh [ 1 ] = eyairrb1z1 . P_4 [ 1 ] ; jxmwlezzui4 . nrfpkyawmh [ 2 ] =
eyairrb1z1 . P_4 [ 2 ] ; jxmwlezzui4 . nrfpkyawmh [ 3 ] = eyairrb1z1 . P_4 [
3 ] ; jxmwlezzui4 . hfcwgzcv2s = eyairrb1z1 . P_5 ; jxmwlezzui4 . o1sy51kl4j
= bjhlm2itxh [ 0 ] ; jxmwlezzui4 . eh34i0lzm5 = eyairrb1z1 . P_6 ;
jxmwlezzui4 . kygagzgima = eyairrb1z1 . P_7 ; jxmwlezzui4 . plv4gegprb =
eyairrb1z1 . P_45 ; jxmwlezzui4 . giy35g0dma = jxmwlezzui4 . plv4gegprb ; if
( jxmwlezzui4 . giy35g0dma ) { jxmwlezzui4 . m2uhmugjmt [ 0 ] = m3hvauf25pt .
e1q4n1bs5s [ 0 ] ; jxmwlezzui4 . m2uhmugjmt [ 1 ] = m3hvauf25pt . e1q4n1bs5s
[ 1 ] ; jxmwlezzui4 . jvqkttolxj = eyairrb1z1 . P_47 ; jxmwlezzui4 .
blockOrdering = jxmwlezzui4 . jvqkttolxj ; jxmwlezzui4 . jvqkttolxj =
jxmwlezzui4 . blockOrdering ; jxmwlezzui4 . gdzlkvfisx [ 0 ] = m3hvauf25pt .
grsaha3jc1 [ 0 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . gdzlkvfisx [
0 ] ; jxmwlezzui4 . gdzlkvfisx [ 0 ] = jxmwlezzui4 . temp_oyypvi4boh ;
jxmwlezzui4 . gdzlkvfisx [ 1 ] = m3hvauf25pt . grsaha3jc1 [ 1 ] ; jxmwlezzui4
. temp_oyypvi4boh = jxmwlezzui4 . gdzlkvfisx [ 1 ] ; jxmwlezzui4 . gdzlkvfisx
[ 1 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . gdzlkvfisx [ 2 ] =
m3hvauf25pt . grsaha3jc1 [ 2 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4
. gdzlkvfisx [ 2 ] ; jxmwlezzui4 . gdzlkvfisx [ 2 ] = jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . gdzlkvfisx [ 3 ] = m3hvauf25pt . grsaha3jc1 [
3 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . gdzlkvfisx [ 3 ] ;
jxmwlezzui4 . gdzlkvfisx [ 3 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4
. epsilon = jxmwlezzui4 . o1sy51kl4j ; jxmwlezzui4 . scale = jxmwlezzui4 .
eh34i0lzm5 ; jxmwlezzui4 . blockOrdering = jxmwlezzui4 . jvqkttolxj ;
jxmwlezzui4 . x [ 0 ] = jxmwlezzui4 . m2uhmugjmt [ 0 ] ; jxmwlezzui4 . x [ 1
] = jxmwlezzui4 . m2uhmugjmt [ 1 ] ; if ( slIsRapidAcceleratorSimulating ( )
) { for ( jxmwlezzui4 . i = 0 ; jxmwlezzui4 . i < 2 ; jxmwlezzui4 . i ++ ) {
jxmwlezzui4 . x_lxo5edjg3c [ jxmwlezzui4 . i ] = jxmwlezzui4 . x [
jxmwlezzui4 . i ] ; } batteryMeasurementFcn ( jxmwlezzui4 . x_lxo5edjg3c , &
jxmwlezzui4 . s_nvsvtgkap4 ) ; } else { args [ 0U ] = ( void * ) &
jxmwlezzui4 . x ; args [ 1U ] = ( void * ) & jxmwlezzui4 . s_nvsvtgkap4 ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryMeasurementFcn" , 2 , & args [ 0U ] ) ; } for ( jxmwlezzui4 . i2 = 0
; jxmwlezzui4 . i2 < 2 ; jxmwlezzui4 . i2 ++ ) { jxmwlezzui4 . C [
jxmwlezzui4 . i2 ] = jxmwlezzui4 . m2uhmugjmt [ jxmwlezzui4 . i2 ] ; } for (
jxmwlezzui4 . i3 = 0 ; jxmwlezzui4 . i3 < 4 ; jxmwlezzui4 . i3 ++ ) {
jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . i3 ] = jxmwlezzui4 . gdzlkvfisx [
jxmwlezzui4 . i3 ] ; } aqlphemgt0 ( jxmwlezzui4 . scale , jxmwlezzui4 . C ,
jxmwlezzui4 . P_nyxm0bsxsn , & jxmwlezzui4 . t , jxmwlezzui4 . K , &
jxmwlezzui4 . temp_oyypvi4boh , jxmwlezzui4 . c , & jxmwlezzui4 . absxk ) ;
jxmwlezzui4 . epsilon -= jxmwlezzui4 . t ; jxmwlezzui4 . C [ 0 ] =
jxmwlezzui4 . K [ 0 ] ; jxmwlezzui4 . C [ 1 ] = jxmwlezzui4 . K [ 1 ] ;
trisolve_n7TRiGBu ( jxmwlezzui4 . temp_oyypvi4boh , jxmwlezzui4 . C ) ;
jxmwlezzui4 . K [ 0 ] = jxmwlezzui4 . C [ 0 ] ; jxmwlezzui4 . K [ 1 ] =
jxmwlezzui4 . C [ 1 ] ; trisolve_n7TRiGBu ( jxmwlezzui4 . temp_oyypvi4boh ,
jxmwlezzui4 . K ) ; jxmwlezzui4 . xNew [ 0 ] = jxmwlezzui4 . K [ 0 ] *
jxmwlezzui4 . epsilon + jxmwlezzui4 . m2uhmugjmt [ 0 ] ; jxmwlezzui4 . xNew [
1 ] = jxmwlezzui4 . K [ 1 ] * jxmwlezzui4 . epsilon + jxmwlezzui4 .
m2uhmugjmt [ 1 ] ; jxmwlezzui4 . epsilon = - jxmwlezzui4 . K [ 0 ] ;
jxmwlezzui4 . temp_oyypvi4boh = - jxmwlezzui4 . K [ 1 ] ; jxmwlezzui4 .
P_nyxm0bsxsn [ 0 ] = jxmwlezzui4 . epsilon * jxmwlezzui4 . c [ 0 ] ;
jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] = jxmwlezzui4 . temp_oyypvi4boh *
jxmwlezzui4 . c [ 0 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] = jxmwlezzui4 .
epsilon * jxmwlezzui4 . c [ 1 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] =
jxmwlezzui4 . temp_oyypvi4boh * jxmwlezzui4 . c [ 1 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 .
temp_oyypvi4boh ++ ; jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] = jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P_nyxm0bsxsn
[ 3 ] ; jxmwlezzui4 . temp_oyypvi4boh ++ ; jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] =
jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . c [ 0 ] = jxmwlezzui4 . K [ 0 ]
* jxmwlezzui4 . absxk ; jxmwlezzui4 . c [ 1 ] = jxmwlezzui4 . K [ 1 ] *
jxmwlezzui4 . absxk ; ig4z3fn454 ( jxmwlezzui4 . P_nyxm0bsxsn , jxmwlezzui4 .
gdzlkvfisx , jxmwlezzui4 . c ) ; jxmwlezzui4 . jvqkttolxj = jxmwlezzui4 .
blockOrdering ; jxmwlezzui4 . nuplcemipn [ 0 ] = jxmwlezzui4 . xNew [ 0 ] ;
jxmwlezzui4 . nuplcemipn [ 1 ] = jxmwlezzui4 . xNew [ 1 ] ; m3hvauf25pt .
grsaha3jc1 [ 0 ] = jxmwlezzui4 . gdzlkvfisx [ 0 ] ; m3hvauf25pt . grsaha3jc1
[ 1 ] = jxmwlezzui4 . gdzlkvfisx [ 1 ] ; m3hvauf25pt . grsaha3jc1 [ 2 ] =
jxmwlezzui4 . gdzlkvfisx [ 2 ] ; m3hvauf25pt . grsaha3jc1 [ 3 ] = jxmwlezzui4
. gdzlkvfisx [ 3 ] ; m3hvauf25pt . e1q4n1bs5s [ 0 ] = jxmwlezzui4 .
nuplcemipn [ 0 ] ; m3hvauf25pt . e1q4n1bs5s [ 1 ] = jxmwlezzui4 . nuplcemipn
[ 1 ] ; srUpdateBC ( m3hvauf25pt . ot1jgphbkl ) ; } jxmwlezzui4 . aipstqw5b1
[ 0 ] = m3hvauf25pt . e1q4n1bs5s [ 0 ] ; jxmwlezzui4 . aipstqw5b1 [ 1 ] =
m3hvauf25pt . e1q4n1bs5s [ 1 ] ; jxmwlezzui4 . afbgrtwsso [ 0 ] = m3hvauf25pt
. grsaha3jc1 [ 0 ] ; jxmwlezzui4 . afbgrtwsso [ 1 ] = m3hvauf25pt .
grsaha3jc1 [ 1 ] ; jxmwlezzui4 . afbgrtwsso [ 2 ] = m3hvauf25pt . grsaha3jc1
[ 2 ] ; jxmwlezzui4 . afbgrtwsso [ 3 ] = m3hvauf25pt . grsaha3jc1 [ 3 ] ;
ifqmvckqsc ( jxmwlezzui4 . afbgrtwsso , & jxmwlezzui4 . ovh3ztmgzq ) ;
jxmwlezzui4 . blcdziwa1i = jxmwlezzui4 . jvqkttolxj ; jxmwlezzui4 .
dccqt2hwbh [ 0 ] = m3hvauf25pt . e1q4n1bs5s [ 0 ] ; jxmwlezzui4 . dccqt2hwbh
[ 1 ] = m3hvauf25pt . e1q4n1bs5s [ 1 ] ; jxmwlezzui4 . og5ilfjkd2 [ 0 ] =
m3hvauf25pt . grsaha3jc1 [ 0 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4
. og5ilfjkd2 [ 0 ] ; jxmwlezzui4 . og5ilfjkd2 [ 0 ] = jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . og5ilfjkd2 [ 1 ] = m3hvauf25pt . grsaha3jc1 [
1 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . og5ilfjkd2 [ 1 ] ;
jxmwlezzui4 . og5ilfjkd2 [ 1 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4
. og5ilfjkd2 [ 2 ] = m3hvauf25pt . grsaha3jc1 [ 2 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . og5ilfjkd2 [ 2 ] ; jxmwlezzui4 . og5ilfjkd2 [
2 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . og5ilfjkd2 [ 3 ] =
m3hvauf25pt . grsaha3jc1 [ 3 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4
. og5ilfjkd2 [ 3 ] ; jxmwlezzui4 . og5ilfjkd2 [ 3 ] = jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . K [ 0 ] = jxmwlezzui4 . dccqt2hwbh [ 0 ] ;
jxmwlezzui4 . K [ 1 ] = jxmwlezzui4 . dccqt2hwbh [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i1 = 0 ;
jxmwlezzui4 . i1 < 2 ; jxmwlezzui4 . i1 ++ ) { jxmwlezzui4 . K_dypejvacrn [
jxmwlezzui4 . i1 ] = jxmwlezzui4 . K [ jxmwlezzui4 . i1 ] ; } batteryStateFcn
( jxmwlezzui4 . K_dypejvacrn , jxmwlezzui4 . varargout_1 ) ; } else { args_p
[ 0U ] = ( void * ) & jxmwlezzui4 . K ; args_p [ 1U ] = ( void * ) &
jxmwlezzui4 . varargout_1 ; slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r
-> _mdlRefSfcnS , "batteryStateFcn" , 2 , & args_p [ 0U ] ) ; } jxmwlezzui4 .
b_xNew [ 0 ] = jxmwlezzui4 . dccqt2hwbh [ 0 ] ; jxmwlezzui4 . b_xNew [ 1 ] =
jxmwlezzui4 . dccqt2hwbh [ 1 ] ; jxmwlezzui4 . xNew [ 0 ] = jxmwlezzui4 .
b_xNew [ 0 ] ; jxmwlezzui4 . xNew [ 1 ] = jxmwlezzui4 . b_xNew [ 1 ] ;
jxmwlezzui4 . c_x [ 0 ] = jxmwlezzui4 . xNew [ 0 ] ; jxmwlezzui4 . c_x [ 1 ]
= jxmwlezzui4 . xNew [ 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) { for
( jxmwlezzui4 . i4 = 0 ; jxmwlezzui4 . i4 < 2 ; jxmwlezzui4 . i4 ++ ) {
jxmwlezzui4 . c_x_dhamdvybc1 [ jxmwlezzui4 . i4 ] = jxmwlezzui4 . c_x [
jxmwlezzui4 . i4 ] ; } batteryStateFcn ( jxmwlezzui4 . c_x_dhamdvybc1 ,
jxmwlezzui4 . z ) ; } else { b_args [ 0U ] = ( void * ) & jxmwlezzui4 . c_x ;
b_args [ 1U ] = ( void * ) & jxmwlezzui4 . z ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryStateFcn" , 2 , & b_args [ 0U ] ) ; } jxmwlezzui4 . C [ 1 ] =
jxmwlezzui4 . xNew [ 1 ] ; jxmwlezzui4 . epsilon = muSingleScalarMax (
0.000345266977F , 0.000345266977F * muSingleScalarAbs ( jxmwlezzui4 . xNew [
0 ] ) ) ; jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . xNew [ 0 ] + jxmwlezzui4 .
epsilon ; jxmwlezzui4 . e_x [ 0 ] = jxmwlezzui4 . C [ 0 ] ; jxmwlezzui4 . e_x
[ 1 ] = jxmwlezzui4 . C [ 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) {
for ( jxmwlezzui4 . i5 = 0 ; jxmwlezzui4 . i5 < 2 ; jxmwlezzui4 . i5 ++ ) {
jxmwlezzui4 . e_x_ldqodwenvz [ jxmwlezzui4 . i5 ] = jxmwlezzui4 . e_x [
jxmwlezzui4 . i5 ] ; } batteryStateFcn ( jxmwlezzui4 . e_x_ldqodwenvz ,
jxmwlezzui4 . imz ) ; } else { d_args [ 0U ] = ( void * ) & jxmwlezzui4 . e_x
; d_args [ 1U ] = ( void * ) & jxmwlezzui4 . imz ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryStateFcn" , 2 , & d_args [ 0U ] ) ; } jxmwlezzui4 . C [ 0 ] =
jxmwlezzui4 . imz [ 0 ] - jxmwlezzui4 . z [ 0 ] ; jxmwlezzui4 . C [ 1 ] =
jxmwlezzui4 . imz [ 1 ] - jxmwlezzui4 . z [ 1 ] ; jxmwlezzui4 . P_nyxm0bsxsn
[ 0 ] = jxmwlezzui4 . C [ 0 ] / jxmwlezzui4 . epsilon ; jxmwlezzui4 .
P_nyxm0bsxsn [ 1 ] = jxmwlezzui4 . C [ 1 ] / jxmwlezzui4 . epsilon ;
jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . xNew [ 0 ] ; jxmwlezzui4 . epsilon =
muSingleScalarMax ( 0.000345266977F , 0.000345266977F * muSingleScalarAbs (
jxmwlezzui4 . xNew [ 1 ] ) ) ; jxmwlezzui4 . C [ 1 ] = jxmwlezzui4 . xNew [ 1
] + jxmwlezzui4 . epsilon ; jxmwlezzui4 . e_x [ 0 ] = jxmwlezzui4 . C [ 0 ] ;
jxmwlezzui4 . e_x [ 1 ] = jxmwlezzui4 . C [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i6 = 0 ;
jxmwlezzui4 . i6 < 2 ; jxmwlezzui4 . i6 ++ ) { jxmwlezzui4 . e_x_guugdwf2m3 [
jxmwlezzui4 . i6 ] = jxmwlezzui4 . e_x [ jxmwlezzui4 . i6 ] ; }
batteryStateFcn ( jxmwlezzui4 . e_x_guugdwf2m3 , jxmwlezzui4 . imz ) ; } else
{ d_args [ 0U ] = ( void * ) & jxmwlezzui4 . e_x ; d_args [ 1U ] = ( void * )
& jxmwlezzui4 . imz ; slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r ->
_mdlRefSfcnS , "batteryStateFcn" , 2 , & d_args [ 0U ] ) ; } jxmwlezzui4 . C
[ 0 ] = jxmwlezzui4 . imz [ 0 ] - jxmwlezzui4 . z [ 0 ] ; jxmwlezzui4 . C [ 1
] = jxmwlezzui4 . imz [ 1 ] - jxmwlezzui4 . z [ 1 ] ; jxmwlezzui4 .
P_nyxm0bsxsn [ 2 ] = jxmwlezzui4 . C [ 0 ] / jxmwlezzui4 . epsilon ;
jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] = jxmwlezzui4 . C [ 1 ] / jxmwlezzui4 .
epsilon ; jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . b_xNew [ 0 ] ; jxmwlezzui4 .
C [ 1 ] = jxmwlezzui4 . b_xNew [ 1 ] ; jxmwlezzui4 . d_x [ 0 ] = jxmwlezzui4
. C [ 0 ] ; jxmwlezzui4 . d_x [ 1 ] = jxmwlezzui4 . C [ 1 ] ; if (
slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i7 = 0 ;
jxmwlezzui4 . i7 < 2 ; jxmwlezzui4 . i7 ++ ) { jxmwlezzui4 . d_x_dhmrxtyqop [
jxmwlezzui4 . i7 ] = jxmwlezzui4 . d_x [ jxmwlezzui4 . i7 ] ; }
batteryStateFcn ( jxmwlezzui4 . d_x_dhmrxtyqop , jxmwlezzui4 . b_xNew ) ; }
else { c_args [ 0U ] = ( void * ) & jxmwlezzui4 . d_x ; c_args [ 1U ] = (
void * ) & jxmwlezzui4 . b_xNew ; slcsInvokeSimulinkFunctionVoidArgs (
j1wfl5js5r -> _mdlRefSfcnS , "batteryStateFcn" , 2 , & c_args [ 0U ] ) ; }
ouqwqhg05q ( jxmwlezzui4 . P_nyxm0bsxsn , jxmwlezzui4 . og5ilfjkd2 ,
jxmwlezzui4 . nrfpkyawmh ) ; jxmwlezzui4 . chd5ykxvdj [ 0 ] = jxmwlezzui4 .
b_xNew [ 0 ] ; jxmwlezzui4 . chd5ykxvdj [ 1 ] = jxmwlezzui4 . b_xNew [ 1 ] ;
m3hvauf25pt . grsaha3jc1 [ 0 ] = jxmwlezzui4 . og5ilfjkd2 [ 0 ] ; m3hvauf25pt
. grsaha3jc1 [ 1 ] = jxmwlezzui4 . og5ilfjkd2 [ 1 ] ; m3hvauf25pt .
grsaha3jc1 [ 2 ] = jxmwlezzui4 . og5ilfjkd2 [ 2 ] ; m3hvauf25pt . grsaha3jc1
[ 3 ] = jxmwlezzui4 . og5ilfjkd2 [ 3 ] ; m3hvauf25pt . e1q4n1bs5s [ 0 ] =
jxmwlezzui4 . chd5ykxvdj [ 0 ] ; m3hvauf25pt . e1q4n1bs5s [ 1 ] = jxmwlezzui4
. chd5ykxvdj [ 1 ] ; jxmwlezzui4 . hqtrjqprhp [ 0 ] = eyairrb1z1 . P_10 [ 0 ]
; jxmwlezzui4 . hqtrjqprhp [ 1 ] = eyairrb1z1 . P_10 [ 1 ] ; jxmwlezzui4 .
hqtrjqprhp [ 2 ] = eyairrb1z1 . P_10 [ 2 ] ; jxmwlezzui4 . hqtrjqprhp [ 3 ] =
eyairrb1z1 . P_10 [ 3 ] ; jxmwlezzui4 . lovuvoxuok = eyairrb1z1 . P_11 ;
jxmwlezzui4 . pefh3xmzm5 = bjhlm2itxh [ 0 ] ; jxmwlezzui4 . krdpombvia =
eyairrb1z1 . P_12 ; jxmwlezzui4 . cg0vd2kag4 = eyairrb1z1 . P_13 ;
jxmwlezzui4 . jqovsex3sm = eyairrb1z1 . P_46 ; jxmwlezzui4 . gi34ui4z34 =
jxmwlezzui4 . jqovsex3sm ; if ( jxmwlezzui4 . gi34ui4z34 ) { jxmwlezzui4 .
b5ulfvf3am [ 0 ] = m3hvauf25pt . fyazshhoy2 [ 0 ] ; jxmwlezzui4 . b5ulfvf3am
[ 1 ] = m3hvauf25pt . fyazshhoy2 [ 1 ] ; jxmwlezzui4 . i3ftva5kxn =
eyairrb1z1 . P_48 ; jxmwlezzui4 . blockOrdering = jxmwlezzui4 . i3ftva5kxn ;
jxmwlezzui4 . i3ftva5kxn = jxmwlezzui4 . blockOrdering ; jxmwlezzui4 .
ktu3l3tezg [ 0 ] = m3hvauf25pt . pnfxhoesbw [ 0 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . ktu3l3tezg [ 0 ] ; jxmwlezzui4 . ktu3l3tezg [
0 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . ktu3l3tezg [ 1 ] =
m3hvauf25pt . pnfxhoesbw [ 1 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4
. ktu3l3tezg [ 1 ] ; jxmwlezzui4 . ktu3l3tezg [ 1 ] = jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . ktu3l3tezg [ 2 ] = m3hvauf25pt . pnfxhoesbw [
2 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . ktu3l3tezg [ 2 ] ;
jxmwlezzui4 . ktu3l3tezg [ 2 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4
. ktu3l3tezg [ 3 ] = m3hvauf25pt . pnfxhoesbw [ 3 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . ktu3l3tezg [ 3 ] ; jxmwlezzui4 . ktu3l3tezg [
3 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . epsilon = jxmwlezzui4 .
pefh3xmzm5 ; jxmwlezzui4 . scale = jxmwlezzui4 . krdpombvia ; jxmwlezzui4 .
blockOrdering = jxmwlezzui4 . i3ftva5kxn ; jxmwlezzui4 . x_g1smspu5ke [ 0 ] =
jxmwlezzui4 . b5ulfvf3am [ 0 ] ; jxmwlezzui4 . x_g1smspu5ke [ 1 ] =
jxmwlezzui4 . b5ulfvf3am [ 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) {
for ( jxmwlezzui4 . i8 = 0 ; jxmwlezzui4 . i8 < 2 ; jxmwlezzui4 . i8 ++ ) {
jxmwlezzui4 . x_jwzvbuczlb [ jxmwlezzui4 . i8 ] = jxmwlezzui4 . x_g1smspu5ke
[ jxmwlezzui4 . i8 ] ; } batteryMeasurementFcn ( jxmwlezzui4 . x_jwzvbuczlb ,
& jxmwlezzui4 . varargout_1_icdfyazkhu ) ; } else { args_e [ 0U ] = ( void *
) & jxmwlezzui4 . x_g1smspu5ke ; args_e [ 1U ] = ( void * ) & jxmwlezzui4 .
varargout_1_icdfyazkhu ; slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r ->
_mdlRefSfcnS , "batteryMeasurementFcn" , 2 , & args_e [ 0U ] ) ; } for (
jxmwlezzui4 . i9 = 0 ; jxmwlezzui4 . i9 < 2 ; jxmwlezzui4 . i9 ++ ) {
jxmwlezzui4 . C [ jxmwlezzui4 . i9 ] = jxmwlezzui4 . b5ulfvf3am [ jxmwlezzui4
. i9 ] ; } for ( jxmwlezzui4 . i10 = 0 ; jxmwlezzui4 . i10 < 4 ; jxmwlezzui4
. i10 ++ ) { jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . i10 ] = jxmwlezzui4 .
ktu3l3tezg [ jxmwlezzui4 . i10 ] ; } gspjo3duox ( jxmwlezzui4 . scale ,
jxmwlezzui4 . C , jxmwlezzui4 . P_nyxm0bsxsn , 1.0F , 2.0F , 1.0F , &
jxmwlezzui4 . absxk , jxmwlezzui4 . Pxy , & jxmwlezzui4 . temp_oyypvi4boh ) ;
jxmwlezzui4 . epsilon -= jxmwlezzui4 . absxk ; jxmwlezzui4 . P_nyxm0bsxsn [ 0
] = jxmwlezzui4 . ktu3l3tezg [ 0 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] =
jxmwlezzui4 . ktu3l3tezg [ 1 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] =
jxmwlezzui4 . ktu3l3tezg [ 3 ] ; jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . Pxy [
0 ] ; jxmwlezzui4 . C [ 1 ] = jxmwlezzui4 . Pxy [ 1 ] ; trisolve_n7TRiGBu (
jxmwlezzui4 . temp_oyypvi4boh , jxmwlezzui4 . C ) ; jxmwlezzui4 . xNew [ 0 ]
= jxmwlezzui4 . C [ 0 ] ; jxmwlezzui4 . xNew [ 1 ] = jxmwlezzui4 . C [ 1 ] ;
trisolve_n7TRiGBu ( jxmwlezzui4 . temp_oyypvi4boh , jxmwlezzui4 . xNew ) ;
jxmwlezzui4 . Pxy [ 0 ] = jxmwlezzui4 . xNew [ 0 ] * jxmwlezzui4 .
temp_oyypvi4boh ; jxmwlezzui4 . Pxy [ 1 ] = jxmwlezzui4 . xNew [ 1 ] *
jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] = 0.0F ;
jxmwlezzui4 . errorCondition = false ; if ( ( jxmwlezzui4 . P_nyxm0bsxsn [ 0
] == 0.0F ) || ( jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] == 0.0F ) ) { jxmwlezzui4 .
errorCondition = true ; } guard1 = false ; if ( jxmwlezzui4 . errorCondition
) { guard1 = true ; } else { jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . Pxy [ 0 ]
; jxmwlezzui4 . C [ 1 ] = jxmwlezzui4 . Pxy [ 1 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . C [ 0 ] ; jxmwlezzui4 . C [ 0 ] = jxmwlezzui4
. temp_oyypvi4boh / jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . C [ 1 ] ; jxmwlezzui4 . temp_oyypvi4boh -=
jxmwlezzui4 . C [ 0 ] * jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] ; jxmwlezzui4 . C [
1 ] = jxmwlezzui4 . temp_oyypvi4boh / jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ;
jxmwlezzui4 . scale = 1.29246971E-26F ; jxmwlezzui4 . absxk =
muSingleScalarAbs ( jxmwlezzui4 . C [ 0 ] ) ; if ( jxmwlezzui4 . absxk >
1.29246971E-26F ) { jxmwlezzui4 . temp_oyypvi4boh = 1.0F ; jxmwlezzui4 .
scale = jxmwlezzui4 . absxk ; } else { jxmwlezzui4 . t = jxmwlezzui4 . absxk
/ 1.29246971E-26F ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . t *
jxmwlezzui4 . t ; } jxmwlezzui4 . absxk = muSingleScalarAbs ( jxmwlezzui4 . C
[ 1 ] ) ; if ( jxmwlezzui4 . absxk > jxmwlezzui4 . scale ) { jxmwlezzui4 . t
= jxmwlezzui4 . scale / jxmwlezzui4 . absxk ; jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . temp_oyypvi4boh * jxmwlezzui4 . t * jxmwlezzui4 . t + 1.0F ;
jxmwlezzui4 . scale = jxmwlezzui4 . absxk ; } else { jxmwlezzui4 . t =
jxmwlezzui4 . absxk / jxmwlezzui4 . scale ; jxmwlezzui4 . temp_oyypvi4boh +=
jxmwlezzui4 . t * jxmwlezzui4 . t ; } jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . scale * muSingleScalarSqrt ( jxmwlezzui4 . temp_oyypvi4boh ) ;
if ( jxmwlezzui4 . temp_oyypvi4boh >= 1.0F ) { guard1 = true ; } else {
jxmwlezzui4 . temp_oyypvi4boh = muSingleScalarSqrt ( 1.0F - jxmwlezzui4 .
temp_oyypvi4boh * jxmwlezzui4 . temp_oyypvi4boh ) ; jxmwlezzui4 . absxk =
jxmwlezzui4 . C [ 1 ] ; mcq03og2j3 ( jxmwlezzui4 . temp_oyypvi4boh ,
jxmwlezzui4 . absxk , & jxmwlezzui4 . c [ 1 ] , & jxmwlezzui4 . s [ 1 ] , &
jxmwlezzui4 . temp_oyypvi4boh ) ; jxmwlezzui4 . C [ 1 ] = 0.0F ; jxmwlezzui4
. absxk = jxmwlezzui4 . C [ 0 ] ; mcq03og2j3 ( jxmwlezzui4 . temp_oyypvi4boh
, jxmwlezzui4 . absxk , & jxmwlezzui4 . c [ 0 ] , & jxmwlezzui4 . s [ 0 ] , &
jxmwlezzui4 . temp_oyypvi4boh ) ; jxmwlezzui4 . C [ 0 ] = 0.0F ; jxmwlezzui4
. iAcol = 0 ; while ( jxmwlezzui4 . iAcol + 1 > 0 ) { jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . s [ jxmwlezzui4 . iAcol ] * jxmwlezzui4 .
P_nyxm0bsxsn [ jxmwlezzui4 . iAcol ] ; jxmwlezzui4 . P_nyxm0bsxsn [
jxmwlezzui4 . iAcol ] = jxmwlezzui4 . c [ jxmwlezzui4 . iAcol ] * jxmwlezzui4
. P_nyxm0bsxsn [ jxmwlezzui4 . iAcol ] - jxmwlezzui4 . s [ jxmwlezzui4 .
iAcol ] * jxmwlezzui4 . C [ 0 ] ; jxmwlezzui4 . C [ 0 ] = jxmwlezzui4 . c [
jxmwlezzui4 . iAcol ] * jxmwlezzui4 . C [ 0 ] + jxmwlezzui4 . temp_oyypvi4boh
; jxmwlezzui4 . iAcol -- ; } jxmwlezzui4 . iAcol = 1 ; while ( jxmwlezzui4 .
iAcol + 1 > 0 ) { jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P_nyxm0bsxsn
[ jxmwlezzui4 . iAcol + 2 ] * jxmwlezzui4 . s [ jxmwlezzui4 . iAcol ] ;
jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] = jxmwlezzui4 .
P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] * jxmwlezzui4 . c [ jxmwlezzui4 .
iAcol ] - jxmwlezzui4 . s [ jxmwlezzui4 . iAcol ] * jxmwlezzui4 . C [ 1 ] ;
jxmwlezzui4 . C [ 1 ] = jxmwlezzui4 . c [ jxmwlezzui4 . iAcol ] * jxmwlezzui4
. C [ 1 ] + jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . iAcol -- ; } } } if
( guard1 ) { for ( jxmwlezzui4 . iAcol = 0 ; jxmwlezzui4 . iAcol < 2 ;
jxmwlezzui4 . iAcol ++ ) { jxmwlezzui4 . P [ jxmwlezzui4 . iAcol ] = 0.0F ;
jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P [ jxmwlezzui4 . iAcol ] ;
jxmwlezzui4 . temp_oyypvi4boh += jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 .
iAcol << 1 ] * jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 . P [
jxmwlezzui4 . iAcol ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . P [ jxmwlezzui4 . iAcol ] ; jxmwlezzui4 .
temp_oyypvi4boh += jxmwlezzui4 . P_nyxm0bsxsn [ ( jxmwlezzui4 . iAcol << 1 )
+ 1 ] * jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] ; jxmwlezzui4 . P [ jxmwlezzui4 .
iAcol ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . P [ jxmwlezzui4 .
iAcol + 2 ] = 0.0F ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P [
jxmwlezzui4 . iAcol + 2 ] ; jxmwlezzui4 . temp_oyypvi4boh += jxmwlezzui4 .
P_nyxm0bsxsn [ jxmwlezzui4 . iAcol << 1 ] * jxmwlezzui4 . P_nyxm0bsxsn [ 2 ]
; jxmwlezzui4 . P [ jxmwlezzui4 . iAcol + 2 ] = jxmwlezzui4 . temp_oyypvi4boh
; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P [ jxmwlezzui4 . iAcol + 2 ]
; jxmwlezzui4 . temp_oyypvi4boh += jxmwlezzui4 . P_nyxm0bsxsn [ ( jxmwlezzui4
. iAcol << 1 ) + 1 ] * jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ; jxmwlezzui4 . P [
jxmwlezzui4 . iAcol + 2 ] = jxmwlezzui4 . temp_oyypvi4boh ; } jxmwlezzui4 . t
= jxmwlezzui4 . Pxy [ 0 ] * jxmwlezzui4 . Pxy [ 0 ] ; jxmwlezzui4 . absxk =
jxmwlezzui4 . Pxy [ 0 ] * jxmwlezzui4 . Pxy [ 1 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . Pxy [ 0 ] * jxmwlezzui4 . Pxy [ 1 ] ;
jxmwlezzui4 . scale = jxmwlezzui4 . Pxy [ 1 ] * jxmwlezzui4 . Pxy [ 1 ] ;
jxmwlezzui4 . errorCondition = true ; jxmwlezzui4 . t = jxmwlezzui4 . P [ 0 ]
- jxmwlezzui4 . t ; if ( muSingleScalarIsInf ( jxmwlezzui4 . t ) ||
muSingleScalarIsNaN ( jxmwlezzui4 . t ) ) { jxmwlezzui4 . errorCondition =
false ; } jxmwlezzui4 . Ss [ 0 ] = jxmwlezzui4 . t ; jxmwlezzui4 . t =
jxmwlezzui4 . P [ 1 ] - jxmwlezzui4 . absxk ; if ( jxmwlezzui4 .
errorCondition && ( ( ! muSingleScalarIsInf ( jxmwlezzui4 . t ) ) && ( !
muSingleScalarIsNaN ( jxmwlezzui4 . t ) ) ) ) { } else { jxmwlezzui4 .
errorCondition = false ; } jxmwlezzui4 . Ss [ 1 ] = jxmwlezzui4 . t ;
jxmwlezzui4 . t = jxmwlezzui4 . P [ 2 ] - jxmwlezzui4 . temp_oyypvi4boh ; if
( jxmwlezzui4 . errorCondition && ( ( ! muSingleScalarIsInf ( jxmwlezzui4 . t
) ) && ( ! muSingleScalarIsNaN ( jxmwlezzui4 . t ) ) ) ) { } else {
jxmwlezzui4 . errorCondition = false ; } jxmwlezzui4 . Ss [ 2 ] = jxmwlezzui4
. t ; jxmwlezzui4 . t = jxmwlezzui4 . P [ 3 ] - jxmwlezzui4 . scale ; if (
jxmwlezzui4 . errorCondition && ( ( ! muSingleScalarIsInf ( jxmwlezzui4 . t )
) && ( ! muSingleScalarIsNaN ( jxmwlezzui4 . t ) ) ) ) { } else { jxmwlezzui4
. errorCondition = false ; } jxmwlezzui4 . Ss [ 3 ] = jxmwlezzui4 . t ; if (
jxmwlezzui4 . errorCondition ) { j2ajyr3qbc ( jxmwlezzui4 . Ss , jxmwlezzui4
. a__1_kkiq3xxxve , jxmwlezzui4 . s , jxmwlezzui4 . P ) ; } else {
jxmwlezzui4 . s [ 0 ] = ( rtNaNF ) ; jxmwlezzui4 . s [ 1 ] = ( rtNaNF ) ;
jxmwlezzui4 . P [ 0 ] = ( rtNaNF ) ; jxmwlezzui4 . P [ 1 ] = ( rtNaNF ) ;
jxmwlezzui4 . P [ 2 ] = ( rtNaNF ) ; jxmwlezzui4 . P [ 3 ] = ( rtNaNF ) ; }
jxmwlezzui4 . Ss [ 0 ] = jxmwlezzui4 . s [ 0 ] ; jxmwlezzui4 . Ss [ 3 ] =
jxmwlezzui4 . s [ 1 ] ; jxmwlezzui4 . Ss [ 0 ] = muSingleScalarSqrt (
jxmwlezzui4 . Ss [ 0 ] ) ; jxmwlezzui4 . Ss [ 1 ] = 0.0F ; jxmwlezzui4 . Ss [
2 ] = 0.0F ; jxmwlezzui4 . Ss [ 3 ] = muSingleScalarSqrt ( jxmwlezzui4 . Ss [
3 ] ) ; for ( jxmwlezzui4 . iAcol = 0 ; jxmwlezzui4 . iAcol < 2 ; jxmwlezzui4
. iAcol ++ ) { jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol ] = 0.0F ;
jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 .
iAcol ] ; jxmwlezzui4 . temp_oyypvi4boh += jxmwlezzui4 . Ss [ jxmwlezzui4 .
iAcol << 1 ] * jxmwlezzui4 . P [ 0 ] ; jxmwlezzui4 . P_nyxm0bsxsn [
jxmwlezzui4 . iAcol ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol ] ;
jxmwlezzui4 . temp_oyypvi4boh += jxmwlezzui4 . Ss [ ( jxmwlezzui4 . iAcol <<
1 ) + 1 ] * jxmwlezzui4 . P [ 2 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4
. iAcol ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . P_nyxm0bsxsn [
jxmwlezzui4 . iAcol + 2 ] = 0.0F ; jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] ; jxmwlezzui4 .
temp_oyypvi4boh += jxmwlezzui4 . Ss [ jxmwlezzui4 . iAcol << 1 ] *
jxmwlezzui4 . P [ 1 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2
] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] ; jxmwlezzui4 .
temp_oyypvi4boh += jxmwlezzui4 . Ss [ ( jxmwlezzui4 . iAcol << 1 ) + 1 ] *
jxmwlezzui4 . P [ 3 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2
] = jxmwlezzui4 . temp_oyypvi4boh ; } jxmwlezzui4 . errorCondition = true ;
jxmwlezzui4 . coffset = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && (
jxmwlezzui4 . coffset < 2 ) ) { jxmwlezzui4 . iAcol = jxmwlezzui4 . coffset +
2 ; do { exitg1 = 0 ; if ( jxmwlezzui4 . iAcol < 3 ) { if ( ! ( jxmwlezzui4 .
P_nyxm0bsxsn [ ( jxmwlezzui4 . coffset << 1 ) + 1 ] == 0.0F ) ) { jxmwlezzui4
. errorCondition = false ; exitg1 = 1 ; } else { jxmwlezzui4 . iAcol = 3 ; }
} else { jxmwlezzui4 . coffset ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ;
if ( exitg1 == 1 ) { exitg2 = true ; } } if ( ! jxmwlezzui4 . errorCondition
) { for ( jxmwlezzui4 . i16 = 0 ; jxmwlezzui4 . i16 < 4 ; jxmwlezzui4 . i16
++ ) { jxmwlezzui4 . P [ jxmwlezzui4 . i16 ] = jxmwlezzui4 . P_nyxm0bsxsn [
jxmwlezzui4 . i16 ] ; } iin5uzh4b1 ( jxmwlezzui4 . P , jxmwlezzui4 .
a__1_kkiq3xxxve , jxmwlezzui4 . P_nyxm0bsxsn ) ; } } jxmwlezzui4 . ktu3l3tezg
[ 0 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 . ktu3l3tezg [ 1 ] =
jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] ; jxmwlezzui4 . ktu3l3tezg [ 2 ] =
jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] ; jxmwlezzui4 . ktu3l3tezg [ 3 ] =
jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ; jxmwlezzui4 . absxk = jxmwlezzui4 . xNew [
0 ] ; jxmwlezzui4 . absxk = jxmwlezzui4 . absxk * jxmwlezzui4 . epsilon +
jxmwlezzui4 . b5ulfvf3am [ 0 ] ; jxmwlezzui4 . xNew [ 0 ] = jxmwlezzui4 .
absxk ; jxmwlezzui4 . absxk = jxmwlezzui4 . xNew [ 1 ] ; jxmwlezzui4 . absxk
= jxmwlezzui4 . absxk * jxmwlezzui4 . epsilon + jxmwlezzui4 . b5ulfvf3am [ 1
] ; jxmwlezzui4 . xNew [ 1 ] = jxmwlezzui4 . absxk ; jxmwlezzui4 . i3ftva5kxn
= jxmwlezzui4 . blockOrdering ; jxmwlezzui4 . gfpyvi12v4 [ 0 ] = jxmwlezzui4
. xNew [ 0 ] ; jxmwlezzui4 . gfpyvi12v4 [ 1 ] = jxmwlezzui4 . xNew [ 1 ] ;
m3hvauf25pt . pnfxhoesbw [ 0 ] = jxmwlezzui4 . ktu3l3tezg [ 0 ] ; m3hvauf25pt
. pnfxhoesbw [ 1 ] = jxmwlezzui4 . ktu3l3tezg [ 1 ] ; m3hvauf25pt .
pnfxhoesbw [ 2 ] = jxmwlezzui4 . ktu3l3tezg [ 2 ] ; m3hvauf25pt . pnfxhoesbw
[ 3 ] = jxmwlezzui4 . ktu3l3tezg [ 3 ] ; m3hvauf25pt . fyazshhoy2 [ 0 ] =
jxmwlezzui4 . gfpyvi12v4 [ 0 ] ; m3hvauf25pt . fyazshhoy2 [ 1 ] = jxmwlezzui4
. gfpyvi12v4 [ 1 ] ; srUpdateBC ( m3hvauf25pt . i3sw2osvsj ) ; } jxmwlezzui4
. cjy5nvic03 [ 0 ] = m3hvauf25pt . fyazshhoy2 [ 0 ] ; jxmwlezzui4 .
cjy5nvic03 [ 1 ] = m3hvauf25pt . fyazshhoy2 [ 1 ] ; jxmwlezzui4 . cwdck5cf5h
[ 0 ] = m3hvauf25pt . pnfxhoesbw [ 0 ] ; jxmwlezzui4 . cwdck5cf5h [ 1 ] =
m3hvauf25pt . pnfxhoesbw [ 1 ] ; jxmwlezzui4 . cwdck5cf5h [ 2 ] = m3hvauf25pt
. pnfxhoesbw [ 2 ] ; jxmwlezzui4 . cwdck5cf5h [ 3 ] = m3hvauf25pt .
pnfxhoesbw [ 3 ] ; ifqmvckqsc ( jxmwlezzui4 . cwdck5cf5h , & jxmwlezzui4 .
nefkm2wdkm ) ; jxmwlezzui4 . gvjpqbzknp = jxmwlezzui4 . i3ftva5kxn ;
jxmwlezzui4 . mql2dbsedq [ 0 ] = m3hvauf25pt . fyazshhoy2 [ 0 ] ; jxmwlezzui4
. mql2dbsedq [ 1 ] = m3hvauf25pt . fyazshhoy2 [ 1 ] ; jxmwlezzui4 .
dvqokqxjeu [ 0 ] = m3hvauf25pt . pnfxhoesbw [ 0 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu [ 0 ] ; jxmwlezzui4 . dvqokqxjeu [
0 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . dvqokqxjeu [ 0 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] =
jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . dvqokqxjeu [ 1 ] = m3hvauf25pt
. pnfxhoesbw [ 1 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu
[ 1 ] ; jxmwlezzui4 . dvqokqxjeu [ 1 ] = jxmwlezzui4 . temp_oyypvi4boh ;
jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu [ 1 ] ; jxmwlezzui4
. P_nyxm0bsxsn [ 1 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 .
dvqokqxjeu [ 2 ] = m3hvauf25pt . pnfxhoesbw [ 2 ] ; jxmwlezzui4 .
temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu [ 2 ] ; jxmwlezzui4 . dvqokqxjeu [
2 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . temp_oyypvi4boh =
jxmwlezzui4 . dvqokqxjeu [ 2 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] =
jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . dvqokqxjeu [ 3 ] = m3hvauf25pt
. pnfxhoesbw [ 3 ] ; jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu
[ 3 ] ; jxmwlezzui4 . dvqokqxjeu [ 3 ] = jxmwlezzui4 . temp_oyypvi4boh ;
jxmwlezzui4 . temp_oyypvi4boh = jxmwlezzui4 . dvqokqxjeu [ 3 ] ; jxmwlezzui4
. P_nyxm0bsxsn [ 3 ] = jxmwlezzui4 . temp_oyypvi4boh ; jxmwlezzui4 . Pxy [ 0
] = jxmwlezzui4 . mql2dbsedq [ 0 ] ; jxmwlezzui4 . Pxy [ 1 ] = jxmwlezzui4 .
mql2dbsedq [ 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) { for (
jxmwlezzui4 . i11 = 0 ; jxmwlezzui4 . i11 < 2 ; jxmwlezzui4 . i11 ++ ) {
jxmwlezzui4 . Pxy_llw0u2ae0v [ jxmwlezzui4 . i11 ] = jxmwlezzui4 . Pxy [
jxmwlezzui4 . i11 ] ; } batteryStateFcn ( jxmwlezzui4 . Pxy_llw0u2ae0v ,
jxmwlezzui4 . varargout_1_merlcviukg ) ; } else { args_i [ 0U ] = ( void * )
& jxmwlezzui4 . Pxy ; args_i [ 1U ] = ( void * ) & jxmwlezzui4 .
varargout_1_merlcviukg ; slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r ->
_mdlRefSfcnS , "batteryStateFcn" , 2 , & args_i [ 0U ] ) ; } jxmwlezzui4 .
P_nyxm0bsxsn [ 0 ] *= 1.73205078F ; jxmwlezzui4 . X2state [ 0 ] = jxmwlezzui4
. P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 . X2state [ 4 ] = - jxmwlezzui4 .
P_nyxm0bsxsn [ 0 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] *= 1.73205078F ;
jxmwlezzui4 . X2state [ 1 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] ; jxmwlezzui4
. X2state [ 5 ] = - jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] ; jxmwlezzui4 .
P_nyxm0bsxsn [ 2 ] *= 1.73205078F ; jxmwlezzui4 . X2state [ 2 ] = jxmwlezzui4
. P_nyxm0bsxsn [ 2 ] ; jxmwlezzui4 . X2state [ 6 ] = - jxmwlezzui4 .
P_nyxm0bsxsn [ 2 ] ; jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] *= 1.73205078F ;
jxmwlezzui4 . X2state [ 3 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ; jxmwlezzui4
. X2state [ 7 ] = - jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ; for ( jxmwlezzui4 .
coffset = 0 ; jxmwlezzui4 . coffset < 4 ; jxmwlezzui4 . coffset ++ ) {
jxmwlezzui4 . epsilon = jxmwlezzui4 . X2state [ jxmwlezzui4 . coffset << 1 ]
+ jxmwlezzui4 . mql2dbsedq [ 0 ] ; jxmwlezzui4 . absxk = jxmwlezzui4 .
X2state [ ( jxmwlezzui4 . coffset << 1 ) + 1 ] + jxmwlezzui4 . mql2dbsedq [ 1
] ; jxmwlezzui4 . X2state [ jxmwlezzui4 . coffset << 1 ] = jxmwlezzui4 .
epsilon ; jxmwlezzui4 . X2state [ ( jxmwlezzui4 . coffset << 1 ) + 1 ] =
jxmwlezzui4 . absxk ; } for ( jxmwlezzui4 . coffset = 0 ; jxmwlezzui4 .
coffset < 4 ; jxmwlezzui4 . coffset ++ ) { jxmwlezzui4 . c_x_nz4o0shxby [ 0 ]
= jxmwlezzui4 . X2state [ jxmwlezzui4 . coffset << 1 ] ; jxmwlezzui4 .
c_x_nz4o0shxby [ 1 ] = jxmwlezzui4 . X2state [ ( jxmwlezzui4 . coffset << 1 )
+ 1 ] ; if ( slIsRapidAcceleratorSimulating ( ) ) { for ( jxmwlezzui4 . i13 =
0 ; jxmwlezzui4 . i13 < 2 ; jxmwlezzui4 . i13 ++ ) { jxmwlezzui4 .
c_x_owjr1h1vqy [ jxmwlezzui4 . i13 ] = jxmwlezzui4 . c_x_nz4o0shxby [
jxmwlezzui4 . i13 ] ; } batteryStateFcn ( jxmwlezzui4 . c_x_owjr1h1vqy ,
jxmwlezzui4 . tempY ) ; } else { c_args_p [ 0U ] = ( void * ) & jxmwlezzui4 .
c_x_nz4o0shxby ; c_args_p [ 1U ] = ( void * ) & jxmwlezzui4 . tempY ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryStateFcn" , 2 , & c_args_p [ 0U ] ) ; } jxmwlezzui4 . Y2 [
jxmwlezzui4 . coffset << 1 ] = jxmwlezzui4 . tempY [ 0 ] ; jxmwlezzui4 . Y2 [
( jxmwlezzui4 . coffset << 1 ) + 1 ] = jxmwlezzui4 . tempY [ 1 ] ; }
jxmwlezzui4 . b_x [ 0 ] = jxmwlezzui4 . mql2dbsedq [ 0 ] ; jxmwlezzui4 . b_x
[ 1 ] = jxmwlezzui4 . mql2dbsedq [ 1 ] ; if ( slIsRapidAcceleratorSimulating
( ) ) { for ( jxmwlezzui4 . i12 = 0 ; jxmwlezzui4 . i12 < 2 ; jxmwlezzui4 .
i12 ++ ) { jxmwlezzui4 . b_x_ppxrqq0gsf [ jxmwlezzui4 . i12 ] = jxmwlezzui4 .
b_x [ jxmwlezzui4 . i12 ] ; } batteryStateFcn ( jxmwlezzui4 . b_x_ppxrqq0gsf
, jxmwlezzui4 . tempY ) ; } else { b_args_p [ 0U ] = ( void * ) & jxmwlezzui4
. b_x ; b_args_p [ 1U ] = ( void * ) & jxmwlezzui4 . tempY ;
slcsInvokeSimulinkFunctionVoidArgs ( j1wfl5js5r -> _mdlRefSfcnS ,
"batteryStateFcn" , 2 , & b_args_p [ 0U ] ) ; } jxmwlezzui4 . x [ 0 ] = 1.0F
; jxmwlezzui4 . x [ 1 ] = 0.50000006F ; for ( jxmwlezzui4 . i14 = 0 ;
jxmwlezzui4 . i14 < 2 ; jxmwlezzui4 . i14 ++ ) { jxmwlezzui4 . x_lxo5edjg3c [
jxmwlezzui4 . i14 ] = Wcov [ jxmwlezzui4 . i14 ] ; } jxmwlezzui4 . i15 = 2 ;
mzaeaudewc ( jxmwlezzui4 . x , jxmwlezzui4 . x_lxo5edjg3c , 0.333333313F ,
jxmwlezzui4 . tempY , jxmwlezzui4 . Y2 , jxmwlezzui4 . mql2dbsedq ,
jxmwlezzui4 . X2state , jxmwlezzui4 . xNew , jxmwlezzui4 . Ss , jxmwlezzui4 .
P_nyxm0bsxsn ) ; jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] = 0.0F ; jxmwlezzui4 .
P_nyxm0bsxsn [ 2 ] = 0.0F ; jxmwlezzui4 . P_nyxm0bsxsn [ 0 ] = 1.0F ;
jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] = 1.0F ; for ( jxmwlezzui4 . iAcol = 0 ;
jxmwlezzui4 . iAcol < 2 ; jxmwlezzui4 . iAcol ++ ) { jxmwlezzui4 . coffset =
jxmwlezzui4 . iAcol << 1 ; jxmwlezzui4 . s_nvsvtgkap4 = 0.0F ; jxmwlezzui4 .
s_nvsvtgkap4 += jxmwlezzui4 . Ss [ 0 ] * jxmwlezzui4 . P_nyxm0bsxsn [
jxmwlezzui4 . iAcol ] ; jxmwlezzui4 . s_nvsvtgkap4 += jxmwlezzui4 .
P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] * jxmwlezzui4 . Ss [ 1 ] ;
jxmwlezzui4 . P [ jxmwlezzui4 . coffset ] = jxmwlezzui4 . s_nvsvtgkap4 ;
jxmwlezzui4 . s_nvsvtgkap4 = 0.0F ; jxmwlezzui4 . s_nvsvtgkap4 += jxmwlezzui4
. Ss [ 2 ] * jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol ] ; jxmwlezzui4
. s_nvsvtgkap4 += jxmwlezzui4 . P_nyxm0bsxsn [ jxmwlezzui4 . iAcol + 2 ] *
jxmwlezzui4 . Ss [ 3 ] ; jxmwlezzui4 . P [ jxmwlezzui4 . coffset + 1 ] =
jxmwlezzui4 . s_nvsvtgkap4 ; } jxmwlezzui4 . Y2 [ 0 ] = jxmwlezzui4 . P [ 0 ]
; jxmwlezzui4 . Y2 [ 1 ] = jxmwlezzui4 . P [ 1 ] ; jxmwlezzui4 . Y2 [ 4 ] =
jxmwlezzui4 . P [ 2 ] ; jxmwlezzui4 . Y2 [ 5 ] = jxmwlezzui4 . P [ 3 ] ;
jxmwlezzui4 . Y2 [ 2 ] = jxmwlezzui4 . hqtrjqprhp [ 0 ] ; jxmwlezzui4 . Y2 [
3 ] = jxmwlezzui4 . hqtrjqprhp [ 2 ] ; jxmwlezzui4 . Y2 [ 6 ] = jxmwlezzui4 .
hqtrjqprhp [ 1 ] ; jxmwlezzui4 . Y2 [ 7 ] = jxmwlezzui4 . hqtrjqprhp [ 3 ] ;
jnelmoh0y1 ( jxmwlezzui4 . Y2 , jxmwlezzui4 . X2state , jxmwlezzui4 .
P_nyxm0bsxsn ) ; jxmwlezzui4 . dvqokqxjeu [ 0 ] = jxmwlezzui4 . P_nyxm0bsxsn
[ 0 ] ; jxmwlezzui4 . dvqokqxjeu [ 1 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 2 ] ;
jxmwlezzui4 . ovlc3ko2hu [ 0 ] = jxmwlezzui4 . xNew [ 0 ] ; jxmwlezzui4 .
dvqokqxjeu [ 2 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 1 ] ; jxmwlezzui4 .
dvqokqxjeu [ 3 ] = jxmwlezzui4 . P_nyxm0bsxsn [ 3 ] ; jxmwlezzui4 .
ovlc3ko2hu [ 1 ] = jxmwlezzui4 . xNew [ 1 ] ; m3hvauf25pt . pnfxhoesbw [ 0 ]
= jxmwlezzui4 . dvqokqxjeu [ 0 ] ; m3hvauf25pt . pnfxhoesbw [ 1 ] =
jxmwlezzui4 . dvqokqxjeu [ 1 ] ; m3hvauf25pt . pnfxhoesbw [ 2 ] = jxmwlezzui4
. dvqokqxjeu [ 2 ] ; m3hvauf25pt . pnfxhoesbw [ 3 ] = jxmwlezzui4 .
dvqokqxjeu [ 3 ] ; m3hvauf25pt . fyazshhoy2 [ 0 ] = jxmwlezzui4 . ovlc3ko2hu
[ 0 ] ; m3hvauf25pt . fyazshhoy2 [ 1 ] = jxmwlezzui4 . ovlc3ko2hu [ 1 ] ;
srUpdateBC ( m3hvauf25pt . my442usii3 ) ; } jxmwlezzui4 . bu4mepp0on =
m3hvauf25pt . pe4apvu41x ; * mtifma1xgg = jxmwlezzui4 . bu4mepp0on ; *
izzkmt4ijf = jxmwlezzui4 . cjy5nvic03 [ 0 ] ; * bzb0d2bbrg = jxmwlezzui4 .
aipstqw5b1 [ 0 ] ; jxmwlezzui4 . n2afxap1ki = look1_iflf_binlxpw ( nbd5ri1h1t
[ 0 ] , eyairrb1z1 . P_37 , eyairrb1z1 . P_36 , 3U ) ; jxmwlezzui4 .
ca4ujkk521 = eyairrb1z1 . P_38 * * j4qwtvlixt ; jxmwlezzui4 . nh2hea4jnq =
jxmwlezzui4 . ca4ujkk521 / jxmwlezzui4 . n2afxap1ki ; } void
SOC_EstimationTID1 ( void ) { } void f4ikgzst5j ( void ) { m3hvauf25pt .
pe4apvu41x += eyairrb1z1 . P_33 * jxmwlezzui4 . nh2hea4jnq ; if ( m3hvauf25pt
. pe4apvu41x >= eyairrb1z1 . P_34 ) { m3hvauf25pt . pe4apvu41x = eyairrb1z1 .
P_34 ; } else if ( m3hvauf25pt . pe4apvu41x <= eyairrb1z1 . P_35 ) {
m3hvauf25pt . pe4apvu41x = eyairrb1z1 . P_35 ; } } void f4ikgzst5jTID1 ( void
) { } void cefw35nic3 ( void ) { egzjadadgd * const j1wfl5js5r = & (
lgpwz0u0yd . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( j1wfl5js5r -> _mdlRefSfcnS , "SOC_Estimation" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void ekir1iaqx0 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
egzjadadgd * const j1wfl5js5r = & ( lgpwz0u0yd . rtm ) ; rt_InitInfAndNaN (
sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) j1wfl5js5r , 0 , sizeof (
egzjadadgd ) ) ; dvyla3jdqx [ 0 ] = mdlref_TID0 ; dvyla3jdqx [ 1 ] =
mdlref_TID1 ; j1wfl5js5r -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( j1wfl5js5r ->
_mdlRefSfcnS , "SOC_Estimation" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" )
; } ( void ) memset ( ( ( void * ) & jxmwlezzui4 ) , 0 , sizeof ( hnvysp1jca0
) ) ; { jxmwlezzui4 . mjiaqz0pes = 0.0F ; jxmwlezzui4 . bu4mepp0on = 0.0F ;
jxmwlezzui4 . n2afxap1ki = 0.0F ; jxmwlezzui4 . ca4ujkk521 = 0.0F ;
jxmwlezzui4 . nh2hea4jnq = 0.0F ; jxmwlezzui4 . kvpj3ph4f1 = 0.0F ;
jxmwlezzui4 . iyqvvj15w1 = 0.0F ; jxmwlezzui4 . eraft3qod0 [ 0 ] = 0.0F ;
jxmwlezzui4 . eraft3qod0 [ 1 ] = 0.0F ; jxmwlezzui4 . jwzntsfb3o [ 0 ] = 0.0F
; jxmwlezzui4 . jwzntsfb3o [ 1 ] = 0.0F ; jxmwlezzui4 . mxe2rvde5a = 0.0F ;
jxmwlezzui4 . akddtgrwkg = 0.0F ; jxmwlezzui4 . fvs0zwjjz1 = 0.0F ;
jxmwlezzui4 . dogb1dt21i = 0.0F ; jxmwlezzui4 . ehfdhf1wl4 = 0.0F ;
jxmwlezzui4 . bzz5iy524d = 0.0F ; jxmwlezzui4 . j0arte2jy2 = 0.0F ;
jxmwlezzui4 . pc2d15dlqu = 0.0F ; jxmwlezzui4 . o4qe35nyzf = 0.0F ;
jxmwlezzui4 . e40fo04v2l [ 0 ] = 0.0F ; jxmwlezzui4 . e40fo04v2l [ 1 ] = 0.0F
; jxmwlezzui4 . flogsdoezf [ 0 ] = 0.0F ; jxmwlezzui4 . flogsdoezf [ 1 ] =
0.0F ; jxmwlezzui4 . nblzef45vc [ 0 ] = 0.0F ; jxmwlezzui4 . nblzef45vc [ 1 ]
= 0.0F ; jxmwlezzui4 . ltasdsu0o5 = 0.0F ; jxmwlezzui4 . h4f2j434s4 = 0.0F ;
jxmwlezzui4 . dyzixwhwns [ 0 ] = 0.0F ; jxmwlezzui4 . dyzixwhwns [ 1 ] = 0.0F
; jxmwlezzui4 . plcabgpetd [ 0 ] = 0.0F ; jxmwlezzui4 . plcabgpetd [ 1 ] =
0.0F ; jxmwlezzui4 . ipj3ahugm4 = 0.0F ; jxmwlezzui4 . iwfwusoewe = 0.0F ;
jxmwlezzui4 . pnd1fmd50q = 0.0F ; jxmwlezzui4 . cqn0icddjb = 0.0F ;
jxmwlezzui4 . bpnng1jo1v = 0.0F ; jxmwlezzui4 . nrfpkyawmh [ 0 ] = 0.0F ;
jxmwlezzui4 . nrfpkyawmh [ 1 ] = 0.0F ; jxmwlezzui4 . nrfpkyawmh [ 2 ] = 0.0F
; jxmwlezzui4 . nrfpkyawmh [ 3 ] = 0.0F ; jxmwlezzui4 . hfcwgzcv2s = 0.0F ;
jxmwlezzui4 . o1sy51kl4j = 0.0F ; jxmwlezzui4 . eh34i0lzm5 = 0.0F ;
jxmwlezzui4 . kygagzgima = 0.0F ; jxmwlezzui4 . hqtrjqprhp [ 0 ] = 0.0F ;
jxmwlezzui4 . hqtrjqprhp [ 1 ] = 0.0F ; jxmwlezzui4 . hqtrjqprhp [ 2 ] = 0.0F
; jxmwlezzui4 . hqtrjqprhp [ 3 ] = 0.0F ; jxmwlezzui4 . lovuvoxuok = 0.0F ;
jxmwlezzui4 . pefh3xmzm5 = 0.0F ; jxmwlezzui4 . krdpombvia = 0.0F ;
jxmwlezzui4 . cg0vd2kag4 = 0.0F ; jxmwlezzui4 . cjy5nvic03 [ 0 ] = 0.0F ;
jxmwlezzui4 . cjy5nvic03 [ 1 ] = 0.0F ; jxmwlezzui4 . cwdck5cf5h [ 0 ] = 0.0F
; jxmwlezzui4 . cwdck5cf5h [ 1 ] = 0.0F ; jxmwlezzui4 . cwdck5cf5h [ 2 ] =
0.0F ; jxmwlezzui4 . cwdck5cf5h [ 3 ] = 0.0F ; jxmwlezzui4 . mql2dbsedq [ 0 ]
= 0.0F ; jxmwlezzui4 . mql2dbsedq [ 1 ] = 0.0F ; jxmwlezzui4 . ovlc3ko2hu [ 0
] = 0.0F ; jxmwlezzui4 . ovlc3ko2hu [ 1 ] = 0.0F ; jxmwlezzui4 . dvqokqxjeu [
0 ] = 0.0F ; jxmwlezzui4 . dvqokqxjeu [ 1 ] = 0.0F ; jxmwlezzui4 . dvqokqxjeu
[ 2 ] = 0.0F ; jxmwlezzui4 . dvqokqxjeu [ 3 ] = 0.0F ; jxmwlezzui4 .
b5ulfvf3am [ 0 ] = 0.0F ; jxmwlezzui4 . b5ulfvf3am [ 1 ] = 0.0F ; jxmwlezzui4
. gfpyvi12v4 [ 0 ] = 0.0F ; jxmwlezzui4 . gfpyvi12v4 [ 1 ] = 0.0F ;
jxmwlezzui4 . ktu3l3tezg [ 0 ] = 0.0F ; jxmwlezzui4 . ktu3l3tezg [ 1 ] = 0.0F
; jxmwlezzui4 . ktu3l3tezg [ 2 ] = 0.0F ; jxmwlezzui4 . ktu3l3tezg [ 3 ] =
0.0F ; jxmwlezzui4 . dccqt2hwbh [ 0 ] = 0.0F ; jxmwlezzui4 . dccqt2hwbh [ 1 ]
= 0.0F ; jxmwlezzui4 . chd5ykxvdj [ 0 ] = 0.0F ; jxmwlezzui4 . chd5ykxvdj [ 1
] = 0.0F ; jxmwlezzui4 . og5ilfjkd2 [ 0 ] = 0.0F ; jxmwlezzui4 . og5ilfjkd2 [
1 ] = 0.0F ; jxmwlezzui4 . og5ilfjkd2 [ 2 ] = 0.0F ; jxmwlezzui4 . og5ilfjkd2
[ 3 ] = 0.0F ; jxmwlezzui4 . aipstqw5b1 [ 0 ] = 0.0F ; jxmwlezzui4 .
aipstqw5b1 [ 1 ] = 0.0F ; jxmwlezzui4 . afbgrtwsso [ 0 ] = 0.0F ; jxmwlezzui4
. afbgrtwsso [ 1 ] = 0.0F ; jxmwlezzui4 . afbgrtwsso [ 2 ] = 0.0F ;
jxmwlezzui4 . afbgrtwsso [ 3 ] = 0.0F ; jxmwlezzui4 . m2uhmugjmt [ 0 ] = 0.0F
; jxmwlezzui4 . m2uhmugjmt [ 1 ] = 0.0F ; jxmwlezzui4 . nuplcemipn [ 0 ] =
0.0F ; jxmwlezzui4 . nuplcemipn [ 1 ] = 0.0F ; jxmwlezzui4 . gdzlkvfisx [ 0 ]
= 0.0F ; jxmwlezzui4 . gdzlkvfisx [ 1 ] = 0.0F ; jxmwlezzui4 . gdzlkvfisx [ 2
] = 0.0F ; jxmwlezzui4 . gdzlkvfisx [ 3 ] = 0.0F ; jxmwlezzui4 . nefkm2wdkm .
bl2v4xsqis [ 0 ] = 0.0F ; jxmwlezzui4 . nefkm2wdkm . bl2v4xsqis [ 1 ] = 0.0F
; jxmwlezzui4 . nefkm2wdkm . bl2v4xsqis [ 2 ] = 0.0F ; jxmwlezzui4 .
nefkm2wdkm . bl2v4xsqis [ 3 ] = 0.0F ; jxmwlezzui4 . ovh3ztmgzq . bl2v4xsqis
[ 0 ] = 0.0F ; jxmwlezzui4 . ovh3ztmgzq . bl2v4xsqis [ 1 ] = 0.0F ;
jxmwlezzui4 . ovh3ztmgzq . bl2v4xsqis [ 2 ] = 0.0F ; jxmwlezzui4 . ovh3ztmgzq
. bl2v4xsqis [ 3 ] = 0.0F ; } ( void ) memset ( ( void * ) & m3hvauf25pt , 0
, sizeof ( cgl1fjb0mky ) ) ; m3hvauf25pt . pe4apvu41x = 0.0F ; m3hvauf25pt .
grsaha3jc1 [ 0 ] = 0.0F ; m3hvauf25pt . grsaha3jc1 [ 1 ] = 0.0F ; m3hvauf25pt
. grsaha3jc1 [ 2 ] = 0.0F ; m3hvauf25pt . grsaha3jc1 [ 3 ] = 0.0F ;
m3hvauf25pt . e1q4n1bs5s [ 0 ] = 0.0F ; m3hvauf25pt . e1q4n1bs5s [ 1 ] = 0.0F
; m3hvauf25pt . pnfxhoesbw [ 0 ] = 0.0F ; m3hvauf25pt . pnfxhoesbw [ 1 ] =
0.0F ; m3hvauf25pt . pnfxhoesbw [ 2 ] = 0.0F ; m3hvauf25pt . pnfxhoesbw [ 3 ]
= 0.0F ; m3hvauf25pt . fyazshhoy2 [ 0 ] = 0.0F ; m3hvauf25pt . fyazshhoy2 [ 1
] = 0.0F ; SOC_Estimation_InitializeDataMapInfo ( j1wfl5js5r , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
j1wfl5js5r -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( j1wfl5js5r ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
j1wfl5js5r -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_SOC_Estimation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_SOC_Estimation , 103 ) ; * retVal = 1 ; }
static void mr_SOC_Estimation_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_SOC_Estimation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SOC_Estimation_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SOC_Estimation_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_SOC_Estimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_SOC_Estimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SOC_Estimation_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SOC_Estimation_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SOC_Estimation_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_SOC_Estimation_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SOC_Estimation_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_SOC_Estimation_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_SOC_Estimation_GetDWork ( ) { static
const char * ssDWFieldNames [ 3 ] = { "jxmwlezzui4" , "m3hvauf25pt" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_SOC_Estimation_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( jxmwlezzui4 ) , sizeof ( jxmwlezzui4 ) ) ; { static const
char * rtdwDataFieldNames [ 15 ] = { "m3hvauf25pt.pe4apvu41x" ,
"m3hvauf25pt.grsaha3jc1" , "m3hvauf25pt.e1q4n1bs5s" ,
"m3hvauf25pt.pnfxhoesbw" , "m3hvauf25pt.fyazshhoy2" ,
"m3hvauf25pt.pda2iy0azm" , "m3hvauf25pt.jyj2203tpf" ,
"m3hvauf25pt.clpdwbuv1f" , "m3hvauf25pt.hlj3p0pr2a" ,
"m3hvauf25pt.m52mkkb2kh" , "m3hvauf25pt.h2jujrkgf4" ,
"m3hvauf25pt.daqdwg0npq" , "m3hvauf25pt.my442usii3" ,
"m3hvauf25pt.i3sw2osvsj" , "m3hvauf25pt.ot1jgphbkl" , } ; mxArray * rtdwData
= mxCreateStructMatrix ( 1 , 1 , 15 , rtdwDataFieldNames ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( m3hvauf25pt . pe4apvu41x ) , sizeof ( m3hvauf25pt . pe4apvu41x ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( m3hvauf25pt . grsaha3jc1 ) , sizeof ( m3hvauf25pt . grsaha3jc1 ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) &
( m3hvauf25pt . e1q4n1bs5s ) , sizeof ( m3hvauf25pt . e1q4n1bs5s ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) &
( m3hvauf25pt . pnfxhoesbw ) , sizeof ( m3hvauf25pt . pnfxhoesbw ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) &
( m3hvauf25pt . fyazshhoy2 ) , sizeof ( m3hvauf25pt . fyazshhoy2 ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) &
( m3hvauf25pt . pda2iy0azm ) , sizeof ( m3hvauf25pt . pda2iy0azm ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( m3hvauf25pt . jyj2203tpf ) , sizeof ( m3hvauf25pt . jyj2203tpf ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) &
( m3hvauf25pt . clpdwbuv1f ) , sizeof ( m3hvauf25pt . clpdwbuv1f ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) &
( m3hvauf25pt . hlj3p0pr2a ) , sizeof ( m3hvauf25pt . hlj3p0pr2a ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) &
( m3hvauf25pt . m52mkkb2kh ) , sizeof ( m3hvauf25pt . m52mkkb2kh ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) &
( m3hvauf25pt . h2jujrkgf4 ) , sizeof ( m3hvauf25pt . h2jujrkgf4 ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) &
( m3hvauf25pt . daqdwg0npq ) , sizeof ( m3hvauf25pt . daqdwg0npq ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) &
( m3hvauf25pt . my442usii3 ) , sizeof ( m3hvauf25pt . my442usii3 ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) &
( m3hvauf25pt . i3sw2osvsj ) , sizeof ( m3hvauf25pt . i3sw2osvsj ) ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) &
( m3hvauf25pt . ot1jgphbkl ) , sizeof ( m3hvauf25pt . ot1jgphbkl ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_SOC_Estimation_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( jxmwlezzui4 ) ,
ssDW , 0 , 0 , sizeof ( jxmwlezzui4 ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
pe4apvu41x ) , rtdwData , 0 , 0 , sizeof ( m3hvauf25pt . pe4apvu41x ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
grsaha3jc1 ) , rtdwData , 0 , 1 , sizeof ( m3hvauf25pt . grsaha3jc1 ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
e1q4n1bs5s ) , rtdwData , 0 , 2 , sizeof ( m3hvauf25pt . e1q4n1bs5s ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
pnfxhoesbw ) , rtdwData , 0 , 3 , sizeof ( m3hvauf25pt . pnfxhoesbw ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
fyazshhoy2 ) , rtdwData , 0 , 4 , sizeof ( m3hvauf25pt . fyazshhoy2 ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
pda2iy0azm ) , rtdwData , 0 , 5 , sizeof ( m3hvauf25pt . pda2iy0azm ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
jyj2203tpf ) , rtdwData , 0 , 6 , sizeof ( m3hvauf25pt . jyj2203tpf ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
clpdwbuv1f ) , rtdwData , 0 , 7 , sizeof ( m3hvauf25pt . clpdwbuv1f ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
hlj3p0pr2a ) , rtdwData , 0 , 8 , sizeof ( m3hvauf25pt . hlj3p0pr2a ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
m52mkkb2kh ) , rtdwData , 0 , 9 , sizeof ( m3hvauf25pt . m52mkkb2kh ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
h2jujrkgf4 ) , rtdwData , 0 , 10 , sizeof ( m3hvauf25pt . h2jujrkgf4 ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
daqdwg0npq ) , rtdwData , 0 , 11 , sizeof ( m3hvauf25pt . daqdwg0npq ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
my442usii3 ) , rtdwData , 0 , 12 , sizeof ( m3hvauf25pt . my442usii3 ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
i3sw2osvsj ) , rtdwData , 0 , 13 , sizeof ( m3hvauf25pt . i3sw2osvsj ) ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
ot1jgphbkl ) , rtdwData , 0 , 14 , sizeof ( m3hvauf25pt . ot1jgphbkl ) ) ; }
} void mr_SOC_Estimation_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2218837702U , 852806133U , 4008174812U ,
1157762023U , } ; slmrModelRefRegisterSimStateChecksum ( S , "SOC_Estimation"
, & chksum [ 0 ] ) ; } mxArray *
mr_SOC_Estimation_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
static void * SOC_Estimation_InitRestoreDataPtr = ( NULL ) ; void
mr_SOC_Estimation_CreateInitRestoreData ( ) {
SOC_Estimation_InitRestoreDataPtr = utMalloc ( sizeof ( m3hvauf25pt ) ) ;
memcpy ( SOC_Estimation_InitRestoreDataPtr , ( void * ) & ( m3hvauf25pt ) ,
sizeof ( m3hvauf25pt ) ) ; } void mr_SOC_Estimation_CopyFromInitRestoreData (
) { memcpy ( ( void * ) & ( m3hvauf25pt ) , SOC_Estimation_InitRestoreDataPtr
, sizeof ( m3hvauf25pt ) ) ; } void mr_SOC_Estimation_DestroyInitRestoreData
( ) { utFree ( SOC_Estimation_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
