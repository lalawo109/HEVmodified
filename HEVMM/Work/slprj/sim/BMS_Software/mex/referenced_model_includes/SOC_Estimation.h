#ifndef RTW_HEADER_SOC_Estimation_h_
#define RTW_HEADER_SOC_Estimation_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef SOC_Estimation_COMMON_INCLUDES_
#define SOC_Estimation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "SOC_Estimation_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
typedef struct { real32_T bl2v4xsqis [ 4 ] ; } aw0ry0dq2h ;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
typedef struct { real32_T Y2 [ 8 ] ; real32_T X2state [ 8 ] ; real32_T a__1 [
8 ] ; real32_T temp [ 8 ] ; real32_T X2 [ 8 ] ; real32_T b_A [ 8 ] ; real32_T
b_A_mbvzarwird [ 8 ] ; real32_T b_A_cl54gopm0x [ 6 ] ; real32_T
a__1_kkiq3xxxve [ 4 ] ; real32_T Ss [ 4 ] ; real32_T P [ 4 ] ; real32_T
Ss_cxarnvbvui [ 4 ] ; real32_T Sy [ 4 ] ; real32_T Y1 [ 4 ] ; real32_T
b_A_bhxxfovxdy [ 4 ] ; real32_T Y2_pbm3vprmfu [ 4 ] ; real32_T A [ 4 ] ;
real32_T S [ 4 ] ; real32_T y [ 4 ] ; real32_T y_cv5hdgrwft [ 4 ] ; real32_T
b_A_fqdqrf4qbc [ 4 ] ; real32_T A_g2mlkqadfk [ 3 ] ; real32_T xNew [ 2 ] ;
real32_T x [ 2 ] ; real32_T K [ 2 ] ; real32_T C [ 2 ] ; real32_T b_xNew [ 2
] ; real32_T varargout_1 [ 2 ] ; real32_T z [ 2 ] ; real32_T imz [ 2 ] ;
real32_T c_x [ 2 ] ; real32_T d_x [ 2 ] ; real32_T e_x [ 2 ] ; real32_T
x_g1smspu5ke [ 2 ] ; real32_T Pxy [ 2 ] ; real32_T c [ 2 ] ; real32_T s [ 2 ]
; real32_T varargout_1_merlcviukg [ 2 ] ; real32_T tempY [ 2 ] ; real32_T b_x
[ 2 ] ; real32_T c_x_nz4o0shxby [ 2 ] ; real32_T b_x_ppxrqq0gsf [ 2 ] ;
real32_T Pxy_llw0u2ae0v [ 2 ] ; real32_T x_jwzvbuczlb [ 2 ] ; real32_T
d_x_dhmrxtyqop [ 2 ] ; real32_T e_x_guugdwf2m3 [ 2 ] ; real32_T
e_x_ldqodwenvz [ 2 ] ; real32_T c_x_dhamdvybc1 [ 2 ] ; real32_T K_dypejvacrn
[ 2 ] ; real32_T x_lxo5edjg3c [ 2 ] ; real32_T c_x_owjr1h1vqy [ 2 ] ;
real32_T c_bjbgfqrolh [ 2 ] ; real32_T s_nuebgmauvi [ 2 ] ; real32_T b_s [ 2
] ; real32_T e [ 2 ] ; real32_T Wmean [ 2 ] ; real32_T Wcov [ 2 ] ; real32_T
x_bsqwvugooi [ 2 ] ; real32_T b_x_lnjdk5wtww [ 2 ] ; real32_T x_hv2ho1zopz [
2 ] ; real32_T b_x_bnlywzniup [ 2 ] ; real32_T fState [ 2 ] ; real32_T
c_x_dapv3jlyq5 [ 2 ] ; real32_T d_x_ezqlmfzvpq [ 2 ] ; real32_T
d_x_bjvjhhzy4i [ 2 ] ; real32_T fState_jzx3amusab [ 2 ] ; real32_T
fState_fdinthrxmb [ 2 ] ; real32_T c_x_al00mdgrv4 [ 2 ] ; real32_T work [ 2 ]
; real32_T work_ju13rw2h0m [ 2 ] ; real32_T work_jz50ptvnrg [ 2 ] ; real32_T
work_o4f35lbcvx [ 2 ] ; real32_T mjiaqz0pes ; real32_T bu4mepp0on ; real32_T
n2afxap1ki ; real32_T ca4ujkk521 ; real32_T nh2hea4jnq ; real32_T kvpj3ph4f1
; real32_T iyqvvj15w1 ; real32_T eraft3qod0 [ 2 ] ; real32_T jwzntsfb3o [ 2 ]
; real32_T mxe2rvde5a ; real32_T akddtgrwkg ; real32_T fvs0zwjjz1 ; real32_T
dogb1dt21i ; real32_T ehfdhf1wl4 ; real32_T bzz5iy524d ; real32_T j0arte2jy2
; real32_T pc2d15dlqu ; real32_T o4qe35nyzf ; real32_T e40fo04v2l [ 2 ] ;
real32_T flogsdoezf [ 2 ] ; real32_T nblzef45vc [ 2 ] ; real32_T ltasdsu0o5 ;
real32_T h4f2j434s4 ; real32_T dyzixwhwns [ 2 ] ; real32_T plcabgpetd [ 2 ] ;
real32_T ipj3ahugm4 ; real32_T iwfwusoewe ; real32_T pnd1fmd50q ; real32_T
cqn0icddjb ; real32_T bpnng1jo1v ; real32_T nrfpkyawmh [ 4 ] ; real32_T
hfcwgzcv2s ; real32_T o1sy51kl4j ; real32_T eh34i0lzm5 ; real32_T kygagzgima
; real32_T hqtrjqprhp [ 4 ] ; real32_T lovuvoxuok ; real32_T pefh3xmzm5 ;
real32_T krdpombvia ; real32_T cg0vd2kag4 ; real32_T cjy5nvic03 [ 2 ] ;
real32_T cwdck5cf5h [ 4 ] ; real32_T mql2dbsedq [ 2 ] ; real32_T ovlc3ko2hu [
2 ] ; real32_T dvqokqxjeu [ 4 ] ; real32_T b5ulfvf3am [ 2 ] ; real32_T
gfpyvi12v4 [ 2 ] ; real32_T ktu3l3tezg [ 4 ] ; real32_T dccqt2hwbh [ 2 ] ;
real32_T chd5ykxvdj [ 2 ] ; real32_T og5ilfjkd2 [ 4 ] ; real32_T gdzlkvfisx [
4 ] ; real32_T P_nyxm0bsxsn [ 4 ] ; real32_T aipstqw5b1 [ 2 ] ; real32_T
afbgrtwsso [ 4 ] ; real32_T m2uhmugjmt [ 2 ] ; real32_T nuplcemipn [ 2 ] ;
real32_T epsilon ; real32_T varargout_1_icdfyazkhu ; real32_T temp_oyypvi4boh
; real32_T scale ; real32_T absxk ; real32_T t ; real32_T s_nvsvtgkap4 ;
real32_T signOOM ; real32_T temp_m3yhjduhi1 ; real32_T scale_czkfpwuzm5 ;
real32_T absxk_mdoasc5av4 ; real32_T b_t ; real32_T x_idx_0 ; real32_T
x_idx_1 ; real32_T nrm ; real32_T rt ; real32_T ztest ; real32_T smm1 ;
real32_T emm1 ; real32_T sqds ; real32_T shift ; real32_T roe ; real32_T absa
; real32_T absb ; real32_T scale_m3ybdk4ikc ; real32_T ads ; real32_T bds ;
real32_T tempY_jacdjrqyev ; real32_T c_h522xzlxvt ; real32_T OOM ; real32_T
Wmean_c0dok3111h ; real32_T Wmean_ctvw0tpkon ; real32_T Wcov_pxqvlbal2i ;
real32_T signOOM_p5h3gwuwqg ; real32_T S_afnsueciae ; real32_T xnorm ;
real32_T covWeights ; real32_T R ; real32_T nrmx ; real32_T c_evg4t2fsev ;
real32_T alpha ; real32_T s_ax3wx1gs5w ; real32_T absx ; real32_T absy ;
real32_T xx ; real32_T yy ; real32_T rho ; real32_T z_as0qznsxlv ; real32_T
epsilon_ifotjnizh4 ; real32_T imz_ltu3syw14q ; real32_T b_x_ojunzewo4f ;
real32_T scale_o2tow3gxzm ; real32_T absxk_ipgns4eet5 ; real32_T t_fkr0r45bcn
; real32_T s_izlwqhinl5 ; real32_T atmp ; real32_T tau_idx_0 ; real32_T
temp_fft32lqtda ; real32_T s_gxhmnjv5xa ; real32_T atmp_covwwkkf2n ; real32_T
tau_idx_0_o32uf0f2k4 ; real32_T temp_lmeaga4sr3 ; real32_T atmp_mvr1suhnoo ;
real32_T xnorm_mjmkwwa5je ; real32_T tau_idx_1 ; real32_T
tau_idx_0_cnk35bhqvj ; real32_T c_fme3ifz5tm ; real32_T atmp_p43y5eooqm ;
real32_T xnorm_e13kp1af4b ; real32_T tau_idx_0_o4akcuk44c ; real32_T
temp_hh0jorglq2 ; real32_T scale_l5yj2lrthv ; real32_T absxk_h255b31ynd ;
real32_T t_mert0vuy2i ; real32_T scale_mcke2mvmgq ; real32_T absxk_h34q0rd5y0
; real32_T t_csvudntq5v ; int32_T iAcol ; int32_T coffset ; int32_T i ;
int32_T i1 ; int32_T i2 ; int32_T i3 ; int32_T i4 ; int32_T i5 ; int32_T i6 ;
int32_T i7 ; int32_T i8 ; int32_T i9 ; int32_T i10 ; int32_T i11 ; int32_T
i12 ; int32_T i13 ; int32_T i14 ; int32_T i15 ; int32_T i16 ; int32_T kk ;
int32_T iAcol_klmngopk1n ; int32_T i17 ; int32_T q ; int32_T m ; int32_T iter
; int32_T kase ; int32_T qs ; int32_T knt ; int32_T b_k ; int32_T i18 ;
int32_T i19 ; int32_T knt_pcqitb31bm ; int32_T b_k_pxv1dlndn0 ; int32_T
aoffset ; int32_T knt_p4u43j1tg5 ; int32_T i20 ; int32_T i21 ; int32_T i22 ;
int32_T i23 ; int32_T kend ; int32_T k ; int32_T coffset_appanwio2d ; int32_T
aoffset_jdc3mylhw0 ; int32_T knt_ekaxkojgre ; int32_T jA ; int32_T jy ;
int32_T ix ; int32_T j ; int32_T b ; int32_T ijA ; int32_T coffset_olzclp30in
; int32_T aoffset_bbahwrwppi ; int32_T knt_ao3bw4rxqa ; int32_T jA_g2zhzn021n
; int32_T jy_ex1giwvd5a ; int32_T ix_fi0130k5dq ; int32_T j_h22x25zmds ;
int32_T b_eikkpx0qsf ; int32_T ijA_chiskqqvhf ; int32_T lastc ; int32_T
knt_axzrpos33g ; int32_T c_lastc ; int32_T ix_daul3jxkyn ; int32_T b_iy ;
int32_T b_af2thr01pj ; int32_T iac ; int32_T d ; int32_T ia ; int32_T
lastc_pbbtpb1rfa ; int32_T knt_msq3zq0e5q ; int32_T c_lastc_o3vthkjscz ;
int32_T jA_nhwg0qilgg ; int32_T jy_lukfkbsu1g ; int32_T ix_pe3k2xoqfh ;
int32_T j_ptgtsmqbea ; int32_T b_fts4uyq0ss ; int32_T ijA_ieb43zpzad ;
int32_T kend_oxmcy3hihv ; int32_T k_kkejeebp3v ; int32_T kend_ieu0h5zwzh ;
int32_T k_occ0bygi5g ; int8_T p ; boolean_T ixoecilttf ; boolean_T papym5idyw
; boolean_T plv4gegprb ; boolean_T giy35g0dma ; boolean_T jqovsex3sm ;
boolean_T gi34ui4z34 ; boolean_T gvjpqbzknp ; boolean_T i3ftva5kxn ;
boolean_T blcdziwa1i ; boolean_T jvqkttolxj ; boolean_T blockOrdering ;
boolean_T errorCondition ; boolean_T errorCondition_m4t0acbuzi ; boolean_T
errorCondition_cuicvykoli ; aw0ry0dq2h nefkm2wdkm ; aw0ry0dq2h ovh3ztmgzq ; }
hnvysp1jca0 ;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
typedef struct { real32_T pe4apvu41x ; real32_T grsaha3jc1 [ 4 ] ; real32_T
e1q4n1bs5s [ 2 ] ; real32_T pnfxhoesbw [ 4 ] ; real32_T fyazshhoy2 [ 2 ] ;
uint32_T pda2iy0azm ; uint32_T jyj2203tpf [ 2 ] ; uint32_T clpdwbuv1f [ 2 ] ;
uint32_T hlj3p0pr2a [ 2 ] ; uint32_T m52mkkb2kh [ 2 ] ; int8_T h2jujrkgf4 ;
int8_T daqdwg0npq ; int8_T my442usii3 ; int8_T i3sw2osvsj ; int8_T ot1jgphbkl
; } cgl1fjb0mky ;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
struct jy3u04is5jr_ { BMS_State_Enum P_1 ; real32_T P_2 ; real32_T P_3 ;
real32_T P_4 [ 4 ] ; real32_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T
P_8 [ 4 ] ; real32_T P_9 [ 2 ] ; real32_T P_10 [ 4 ] ; real32_T P_11 ;
real32_T P_12 ; real32_T P_13 ; real32_T P_14 [ 4 ] ; real32_T P_15 [ 2 ] ;
real32_T P_16 [ 400 ] ; real32_T P_17 [ 100 ] ; real32_T P_18 [ 4 ] ;
real32_T P_19 [ 400 ] ; real32_T P_20 [ 100 ] ; real32_T P_21 [ 4 ] ;
real32_T P_22 [ 4 ] ; real32_T P_23 [ 4 ] ; real32_T P_24 ; real32_T P_25 [
400 ] ; real32_T P_26 [ 100 ] ; real32_T P_27 [ 4 ] ; real32_T P_28 [ 400 ] ;
real32_T P_29 [ 100 ] ; real32_T P_30 [ 4 ] ; real32_T P_31 ; real32_T P_32 ;
real32_T P_33 ; real32_T P_34 ; real32_T P_35 ; real32_T P_36 [ 4 ] ;
real32_T P_37 [ 4 ] ; real32_T P_38 ; uint32_T P_39 [ 2 ] ; uint32_T P_40 [ 2
] ; uint32_T P_41 [ 2 ] ; uint32_T P_42 [ 2 ] ; boolean_T P_43 ; boolean_T
P_44 ; boolean_T P_45 ; boolean_T P_46 ; boolean_T P_47 ; boolean_T P_48 ; }
;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
struct omhym1uzw2 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 11 ] ; int32_T * vardimsAddress [
11 ] ; RTWLoggingFcnPtr loggingPtrs [ 11 ] ; sysRanDType * systemRan [ 17 ] ;
int_T systemTid [ 17 ] ; } DataMapInfo ; } ;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
typedef struct { egzjadadgd rtm ; } lgpwz0u0ydd ;
#endif
extern real_T rtP_BattSocInit ; extern void cketgpc2z3 ( void ) ; extern void
h41aqbjehq ( void ) ; extern void acaeyrlq5y ( const real32_T nbd5ri1h1t [ 96
] ) ; extern void f4ikgzst5j ( void ) ; extern void f4ikgzst5jTID1 ( void ) ;
extern void SOC_Estimation ( const BMS_State_Enum * fykdjr0uek , const
real32_T bjhlm2itxh [ 96 ] , const real32_T * j4qwtvlixt , const real32_T
nbd5ri1h1t [ 96 ] , real32_T * mtifma1xgg , real32_T * izzkmt4ijf , real32_T
* bzb0d2bbrg ) ; extern void SOC_EstimationTID1 ( void ) ; extern void
cefw35nic3 ( void ) ; extern void ekir1iaqx0 ( SimStruct * _mdlRefSfcnS ,
int_T mdlref_TID0 , int_T mdlref_TID1 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SOC_Estimation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SOC_Estimation_GetDWork (
) ; extern void mr_SOC_Estimation_SetDWork ( const mxArray * ssDW ) ; extern
void mr_SOC_Estimation_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_SOC_Estimation_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SOC_Estimation_GetCAPIStaticMap ( void ) ;
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
extern void ifqmvckqsc ( const real32_T f0wc1ea4xi [ 4 ] , aw0ry0dq2h *
localB ) ;
#endif
void mr_SOC_Estimation_CreateInitRestoreData ( ) ; void
mr_SOC_Estimation_CopyFromInitRestoreData ( ) ; void
mr_SOC_Estimation_DestroyInitRestoreData ( ) ;
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
extern lgpwz0u0ydd lgpwz0u0yd ;
#endif
#ifndef SOC_Estimation_MDLREF_HIDE_CHILD_
extern hnvysp1jca0 jxmwlezzui4 ; extern cgl1fjb0mky m3hvauf25pt ;
#endif
extern void batteryMeasurementFcn ( const real32_T argin0 [ 2 ] , real32_T *
argout0 ) ; \
 extern void batteryStateFcn ( const real32_T argin0 [ 2 ] ,
real32_T argout0 [ 2 ] ) ; \

#endif
