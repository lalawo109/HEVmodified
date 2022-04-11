#ifndef RTW_HEADER_SiMappedEngine_h_
#define RTW_HEADER_SiMappedEngine_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef SiMappedEngine_COMMON_INCLUDES_
#define SiMappedEngine_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SiMappedEngine_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T klyvv3r0o1 ; real_T c3zysz4tpi ; real_T flrap41wjc ;
real_T guyva3nspb ; real_T f1r132s5yu ; real_T ahnlzvfegm ; real_T
klyvv3r0o1_mbvzarwird ; real_T phuyfw4inp ; } jvyovwsi3r ; typedef struct {
struct { void * AQHandles [ 4 ] ; } mn3u0fkhea ; struct { void * AQHandles [
4 ] ; } dznebp0pps ; int_T d55retptgy ; int8_T eug50ppnpk ; int8_T dmao1hgsdf
; int8_T aloeui4q1o ; } o01jicpr12 ; typedef struct { real_T kijvvzfevj ;
real_T drdw254jnf ; real_T oqydpnfc0r ; real_T kktgopzeo1 ; real_T glguipeodw
; real_T je1gzhjjcy ; real_T lhnhr5tk3k ; real_T lb4lukiyvr ; real_T
atvjtlenba ; real_T ab5rofxaaf ; real_T fbm3jcjp5o ; real_T i41jnyahbd ;
real_T nvpwfbw43a ; real_T fidmx4ulxd ; } fge4b0tiis ; typedef int_T
ijm0nssbo4 [ 1 ] ; typedef real_T cw4bfldxc2 [ 2 ] ; typedef struct { real_T
kijvvzfevj ; real_T drdw254jnf ; real_T oqydpnfc0r ; real_T kktgopzeo1 ;
real_T glguipeodw ; real_T je1gzhjjcy ; real_T lhnhr5tk3k ; real_T lb4lukiyvr
; real_T atvjtlenba ; real_T ab5rofxaaf ; real_T fbm3jcjp5o ; real_T
i41jnyahbd ; real_T nvpwfbw43a ; real_T fidmx4ulxd ; } af1kriqllf ; typedef
struct { boolean_T kijvvzfevj ; boolean_T drdw254jnf ; boolean_T oqydpnfc0r ;
boolean_T kktgopzeo1 ; boolean_T glguipeodw ; boolean_T je1gzhjjcy ;
boolean_T lhnhr5tk3k ; boolean_T lb4lukiyvr ; boolean_T atvjtlenba ;
boolean_T ab5rofxaaf ; boolean_T fbm3jcjp5o ; boolean_T i41jnyahbd ;
boolean_T nvpwfbw43a ; boolean_T fidmx4ulxd ; } hbv32131sw ; typedef struct {
real_T kijvvzfevj ; real_T drdw254jnf ; real_T oqydpnfc0r ; real_T kktgopzeo1
; real_T glguipeodw ; real_T je1gzhjjcy ; real_T lhnhr5tk3k ; real_T
lb4lukiyvr ; real_T atvjtlenba ; real_T ab5rofxaaf ; real_T fbm3jcjp5o ;
real_T i41jnyahbd ; real_T nvpwfbw43a ; real_T fidmx4ulxd ; } fxfoz2eidp ;
typedef struct { real_T kijvvzfevj ; real_T drdw254jnf ; real_T oqydpnfc0r ;
real_T kktgopzeo1 ; real_T glguipeodw ; real_T je1gzhjjcy ; real_T lhnhr5tk3k
; real_T lb4lukiyvr ; real_T atvjtlenba ; real_T ab5rofxaaf ; real_T
fbm3jcjp5o ; real_T i41jnyahbd ; real_T nvpwfbw43a ; real_T fidmx4ulxd ; }
aqpefy251j ; typedef struct { real_T kijvvzfevj ; real_T drdw254jnf ; real_T
oqydpnfc0r ; real_T kktgopzeo1 ; real_T glguipeodw ; real_T je1gzhjjcy ;
real_T lhnhr5tk3k ; real_T lb4lukiyvr ; real_T atvjtlenba ; real_T ab5rofxaaf
; real_T fbm3jcjp5o ; real_T i41jnyahbd ; real_T nvpwfbw43a ; real_T
fidmx4ulxd ; } m0vqg0xkmk ; typedef struct { real_T jjnixkttsw ; real_T
m4shtwpemx ; real_T nqv0z1buxz ; } e5ydmz2av1 ; typedef struct { const real_T
gndn32yjth ; const real_T lse20ub45f ; const real_T ouhmgq4kd5 ; const real_T
oglyprjuyb ; const real_T guyva3nspb ; const real_T cumwqxlibw ; const real_T
mdzidjum1l ; const real_T pumkrpyj4e ; const real_T f1r132s5yu ; const real_T
hnf5vr4lg4 ; const real_T ahnlzvfegm ; const real_T j2q0mvqlil ; const real_T
kjvw30qkyt ; const real_T jbfxgvriap ; const real_T iwujwp5uqw ; const real_T
bsas1bxl42 ; const real_T klyvv3r0o1 ; } clm0vbftja ; struct b2kupysy3wd_ {
real_T P_0 [ 2 ] ; real_T P_1 [ 2 ] ; real_T P_2 ; real_T P_3 ; real_T P_4 [
256 ] ; real_T P_5 [ 256 ] ; real_T P_6 [ 256 ] ; real_T P_7 [ 256 ] ; real_T
P_8 [ 256 ] ; real_T P_9 [ 256 ] ; real_T P_10 [ 256 ] ; real_T P_11 [ 256 ]
; real_T P_12 [ 16 ] ; real_T P_13 [ 16 ] ; real_T P_14 [ 256 ] ; real_T P_15
; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 [ 7 ] ;
real_T P_21 [ 7 ] ; real_T P_22 [ 7 ] ; real_T P_23 [ 7 ] ; real_T P_24 [ 7 ]
; real_T P_25 [ 7 ] ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ;
real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T
P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ;
real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T
P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 [ 3 ] ; real_T P_50 [ 3 ] ;
real_T P_51 [ 4 ] ; real_T P_52 [ 4 ] ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ;
real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T
P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ;
real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T
P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ;
real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T
P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; uint32_T P_93
[ 2 ] ; uint32_T P_94 [ 2 ] ; uint32_T P_95 [ 2 ] ; uint32_T P_96 [ 2 ] ;
uint32_T P_97 [ 2 ] ; uint32_T P_98 [ 2 ] ; uint32_T P_99 [ 2 ] ; uint32_T
P_100 [ 2 ] ; uint32_T P_101 [ 2 ] ; } ; struct hakwkpptea { struct
SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 14 ] ; int32_T * vardimsAddress [
14 ] ; RTWLoggingFcnPtr loggingPtrs [ 14 ] ; sysRanDType * systemRan [ 7 ] ;
int_T systemTid [ 7 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; } Timing ; } ; typedef struct { jvyovwsi3r rtb ; o01jicpr12 rtdw ;
dmfysfr1i5 rtm ; } obfkhtmwsvj ; extern void ht2eemxshs ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
dmfysfr1i5 * const azqpzka5xm , jvyovwsi3r * localB , o01jicpr12 * localDW ,
fge4b0tiis * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SiMappedEngine_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SiMappedEngine_GetDWork (
const obfkhtmwsvj * mdlrefDW ) ; extern void mr_SiMappedEngine_SetDWork (
obfkhtmwsvj * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_SiMappedEngine_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_SiMappedEngine_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SiMappedEngine_GetCAPIStaticMap ( void ) ;
extern void apgeqmx21v ( dmfysfr1i5 * const azqpzka5xm , o01jicpr12 * localDW
) ; extern void ob0r0v13wu ( real_T * poipsbovf0 , real_T * mvz3ledeop ,
real_T * c0pbkuesoj , real_T * fnfhdehl5k , fge4b0tiis * localX ) ; extern
void n1130jkiif ( real_T * fnfhdehl5k , fge4b0tiis * localX ) ; extern void
oao54o31k0 ( dmfysfr1i5 * const azqpzka5xm , o01jicpr12 * localDW ) ; extern
void e3hpwcezeu ( dmfysfr1i5 * const azqpzka5xm , real_T * fnfhdehl5k ,
o01jicpr12 * localDW ) ; extern void apevzx5nn2 ( const real_T * meccwojtit ,
const real_T * kdtgjzkz4m , const real_T * obye242ind , const real_T *
oebgusbtyf , const real_T * kvbv54ft3z , const real_T * bcrfhmtym2 , const
real_T * bkbvp4ofdc , const real_T * bna5mtdpy1 , const real_T * fp12pwje4g ,
const real_T * jryptrfhs1 , const real_T * dkejh5cryy , jvyovwsi3r * localB ,
fge4b0tiis * localX , af1kriqllf * localXdot ) ; extern void gofm1sxsii (
real_T * o0s14zo0cn , real_T * h4e1ev1hss , e5ydmz2av1 * localZCSV ) ; extern
void lnpw5sh2z3 ( dmfysfr1i5 * const azqpzka5xm , o01jicpr12 * localDW ) ;
extern void gxcx4c1tkl ( void ) ; extern void gxcx4c1tklTID2 ( void ) ;
extern void SiMappedEngine ( dmfysfr1i5 * const azqpzka5xm , const real_T *
nmvmnhuequ , const real_T * m1oxkm0fvr , real_T * a45xr2inel , real_T *
o0s14zo0cn , real_T * laomnu23h3 , real_T * k03z2luaj2 , real_T * kqvjnicepd
, real_T * eseyvog4lt , real_T * moouhle02u , real_T * fpilqshhds , real_T *
mtez2thgce , real_T * n02rnp3hkn , real_T * o4csha44ab , real_T * ijt54ogrbp
, real_T * flkjcmz02k , real_T * ozgd55qtwp , real_T * c24tmonskj , real_T *
l3azkcvsrv , real_T * h4e1ev1hss , real_T * acsy2rn04v , real_T * ouxwuepnp1
, real_T * poipsbovf0 , real_T * mvz3ledeop , real_T * c0pbkuesoj , real_T *
ptfjaauzbp , jvyovwsi3r * localB , o01jicpr12 * localDW , fge4b0tiis * localX
) ; extern void SiMappedEngineTID2 ( real_T * fnfhdehl5k , jvyovwsi3r *
localB ) ; extern void eluttkodxn ( dmfysfr1i5 * const azqpzka5xm ) ;
#endif
