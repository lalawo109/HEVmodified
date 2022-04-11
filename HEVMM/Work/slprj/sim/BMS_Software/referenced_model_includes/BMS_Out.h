#ifndef RTW_HEADER_BMS_Out_h_
#define RTW_HEADER_BMS_Out_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef BMS_Out_COMMON_INCLUDES_
#define BMS_Out_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BMS_Out_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#ifndef BMS_Out_MDLREF_HIDE_CHILD_
typedef struct { boolean_T a4kktejck0 [ 96 ] ; } juz1rje5hni ;
#endif
#ifndef BMS_Out_MDLREF_HIDE_CHILD_
struct gzm11elq4x { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; } ;
#endif
#ifndef BMS_Out_MDLREF_HIDE_CHILD_
typedef struct { hlrpif31cr rtm ; } op4vcoxluza ;
#endif
extern void BMS_Out ( const CurrentLimits * la1xwrt4o1 , const real32_T *
be2l4l0yqx , const Contactors_Cmd * eb4fxbmxca , const Faults * dkwpbh4yre ,
const BMS_State_Enum * a4mbk2heg0 , const real32_T * grw3v4gkhn , const
real32_T * lfnlh5dct3 , const real32_T * kn4vzwkmsj , const boolean_T
dtkmrpzfq1 [ 96 ] , BMS_Cmd * okzchojze5 , boolean_T * cxqctwbric , boolean_T
* psr1hnztgd , boolean_T * hp4bpv12xr , boolean_T * jze5c0llni , boolean_T *
iki2gmtal1 , boolean_T * gwhk211ddp , boolean_T * jr2egmj1gh , boolean_T *
of5kaz4lbk , BMS_State_Enum * mbe4xb012f , real32_T * pnseqtzced , real32_T *
gphjq2vj5u , real32_T * kqgvfpqwlb ) ; extern void knzl4yur3r ( void ) ;
extern void ccdupmtoje ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_BMS_Out_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_BMS_Out_GetDWork ( ) ; extern void mr_BMS_Out_SetDWork ( const mxArray *
ssDW ) ; extern void mr_BMS_Out_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_BMS_Out_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BMS_Out_GetCAPIStaticMap ( void ) ;
#ifndef BMS_Out_MDLREF_HIDE_CHILD_
extern op4vcoxluza op4vcoxluz ;
#endif
#ifndef BMS_Out_MDLREF_HIDE_CHILD_
extern juz1rje5hni b1vbqry3vga ;
#endif
#endif
