#ifndef RTW_HEADER_CurrPowerLimCalc_h_
#define RTW_HEADER_CurrPowerLimCalc_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef CurrPowerLimCalc_COMMON_INCLUDES_
#define CurrPowerLimCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "CurrPowerLimCalc_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
typedef struct { real32_T lzvnmh2k4m ; real32_T jufzmx0o5o ; real32_T
imqo5jjzzt ; real32_T h1gvthgku3 ; real32_T agngrodksb ; real32_T dgvgeu4uhp
; real32_T ab4qeieb15 ; real32_T jow3lrybj1 ; real32_T nfgqd2p30s ; real32_T
ncoz41jfsf ; real32_T kjvlb2u3yy ; real32_T jkuqrm1e4d ; real32_T dd0wy3eogw
; real32_T lpb2qqwv45 ; real32_T cshxvdmgqz ; real32_T d4spqkibyq ; }
erutuqncgst ;
#endif
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
struct laetnnrxsil_ { real32_T P_0 [ 3 ] ; real32_T P_1 [ 3 ] ; real32_T P_2
[ 7 ] ; real32_T P_3 [ 7 ] ; real32_T P_4 [ 4 ] ; real32_T P_5 [ 4 ] ;
real32_T P_6 ; real32_T P_7 ; real32_T P_8 [ 4 ] ; real32_T P_9 [ 4 ] ;
real32_T P_10 [ 7 ] ; real32_T P_11 [ 7 ] ; real32_T P_12 [ 5 ] ; real32_T
P_13 [ 5 ] ; real32_T P_14 ; real32_T P_15 ; } ;
#endif
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
struct lyxcuhrej1 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; } ;
#endif
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
typedef struct { ajbfpygfl2 rtm ; } pdpnucaqsyk ;
#endif
extern void CurrPowerLimCalc ( const real32_T pdtykrnyuy [ 96 ] , const
real32_T ogpv2grnvi [ 96 ] , CurrentLimits * dbds4lso1o , Min_Max_Cells *
drsszh5sm5 ) ; extern void kegbnk20qt ( void ) ; extern void dp1ymck0d2 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_CurrPowerLimCalc_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_CurrPowerLimCalc_GetDWork
( ) ; extern void mr_CurrPowerLimCalc_SetDWork ( const mxArray * ssDW ) ;
extern void mr_CurrPowerLimCalc_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_CurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * CurrPowerLimCalc_GetCAPIStaticMap (
void ) ;
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
extern pdpnucaqsyk pdpnucaqsy ;
#endif
#ifndef CurrPowerLimCalc_MDLREF_HIDE_CHILD_
extern erutuqncgst enog4djidnl ;
#endif
#endif
