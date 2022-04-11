#ifndef RTW_HEADER_GenMapped_h_
#define RTW_HEADER_GenMapped_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef GenMapped_COMMON_INCLUDES_
#define GenMapped_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "GenMapped_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T kkotz3kbfw ; real_T ccgjxlixg1 ; real_T oqssnj3pdn ;
real_T py1vgsbhe2 ; real_T mpkiqtx21c ; } a1nvyp4buq ; typedef struct {
struct { void * AQHandles [ 4 ] ; } ehmnnpec4a ; int_T irku44oz51 ; int_T
polojotjse ; int_T pom10f3t14 ; int8_T au4nxahm3e ; int8_T bhnjcoe3zj ;
int8_T dyyijttbta ; } nqpjsgqmfb ; typedef struct { real_T cfnw0dcqkl ; }
p0m0rjpmhn ; typedef struct { real_T cfnw0dcqkl ; } fcng003jj4 ; typedef
struct { boolean_T cfnw0dcqkl ; } iycnv1pvpj ; typedef struct { real_T
cfnw0dcqkl ; } indxehzkxv ; typedef struct { real_T cfnw0dcqkl ; } jywkj54f1m
; typedef struct { real_T cfnw0dcqkl ; } lewsw4odrs ; typedef struct { real_T
i2c14yyku1 ; real_T fmxqmucr02 ; real_T ezkf4ky5o2 ; real_T aowlcyvy1b ;
real_T igronq1kma ; real_T jwfgz2a0ft ; } eozg3wy3zb ; struct ahjrrd3rm2j_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 [ 2 ] ; real_T P_4 [ 2 ] ;
real_T P_5 ; real_T P_6 ; real_T P_7 [ 638 ] ; real_T P_8 [ 29 ] ; real_T P_9
[ 22 ] ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ; real_T P_14
; uint32_T P_15 [ 2 ] ; } ; struct fevheqpxit { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ;
struct { uint8_T rtmDbBufReadBuf1 ; uint8_T rtmDbBufWriteBuf1 ; boolean_T
rtmDbBufLastBufWr1 ; real_T rtmDbBufContT1 [ 2 ] ; int_T mdlref_GlobalTID [ 2
] ; } Timing ; } ; typedef struct { a1nvyp4buq rtb ; nqpjsgqmfb rtdw ;
posc2i5pah rtm ; } nrueedofvms ; extern void alzelrhozn ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , posc2i5pah * const
m2x1s10cgs , a1nvyp4buq * localB , nqpjsgqmfb * localDW , p0m0rjpmhn * localX
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_GenMapped_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_GenMapped_GetDWork ( const
nrueedofvms * mdlrefDW ) ; extern void mr_GenMapped_SetDWork ( nrueedofvms *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_GenMapped_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_GenMapped_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * GenMapped_GetCAPIStaticMap ( void ) ; extern
void ef13dejgdl ( posc2i5pah * const m2x1s10cgs , nqpjsgqmfb * localDW ) ;
extern void d0e1f5rocg ( real_T * nocmeu3sin , p0m0rjpmhn * localX ) ; extern
void fqb3rkobxm ( p0m0rjpmhn * localX ) ; extern void b2elyitmnp ( posc2i5pah
* const m2x1s10cgs , nqpjsgqmfb * localDW ) ; extern void i433fn5aij (
posc2i5pah * const m2x1s10cgs , nqpjsgqmfb * localDW ) ; extern void
ih0oo4r0yo ( a1nvyp4buq * localB , fcng003jj4 * localXdot ) ; extern void
axzm3wwmtg ( const real_T * paqjpsmi2i , const real_T * nvfmu3xz4x ,
a1nvyp4buq * localB , nqpjsgqmfb * localDW , eozg3wy3zb * localZCSV ) ;
extern void haimgy2xan ( posc2i5pah * const m2x1s10cgs , nqpjsgqmfb * localDW
) ; extern void egso2rwuq2TID1 ( void ) ; extern void GenMapped ( posc2i5pah
* const m2x1s10cgs , const real_T * mygqg1v5i2 , const real_T * paqjpsmi2i ,
const real_T * nvfmu3xz4x , real_T * nocmeu3sin , real_T * med40sshjq ,
a1nvyp4buq * localB , nqpjsgqmfb * localDW , p0m0rjpmhn * localX ) ; extern
void GenMappedTID1 ( posc2i5pah * const m2x1s10cgs , a1nvyp4buq * localB ,
nqpjsgqmfb * localDW ) ; extern void ciygun30a3 ( posc2i5pah * const
m2x1s10cgs ) ;
#endif
