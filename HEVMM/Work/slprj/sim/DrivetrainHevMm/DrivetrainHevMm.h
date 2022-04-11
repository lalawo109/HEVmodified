#ifndef RTW_HEADER_DrivetrainHevMm_h_
#define RTW_HEADER_DrivetrainHevMm_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef DrivetrainHevMm_COMMON_INCLUDES_
#define DrivetrainHevMm_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DrivetrainHevMm_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
typedef struct { real_T pu5wcjpawc [ 2 ] ; real_T lgg5ze1wzk [ 4 ] ; }
gwk0eraqt1 ; typedef struct { real_T ow5ynhs1wf [ 3 ] ; real_T by4hcrakpu [ 9
] ; } ei10x4jgx3 ; typedef struct { real_T nb1fsglxqh [ 5 ] ; real_T
jrwnhgsses [ 16 ] ; real_T njrzl4spcb [ 24 ] ; real_T psnccbqusf ; real_T
iyzlv3vsxr ; real_T fywwpntq2t ; real_T mnnh11ayu1 ; } ghx32nl3ar ; typedef
struct { real_T eznv40gksk ; real_T mxadesf4fq ; real_T gmyefsnwea ; real_T
g5mgrvnqeh ; real_T f5gzvmjset ; real_T ej1i55zyel ; real_T dsrcrpfivx ;
real_T p0dz2fp1ma ; real_T kpitclzahr ; real_T laxulhl3ye ; real_T jzehrqz1r3
; real_T cwf05adrdt ; real_T agufazorkf ; real_T pgdhl4qk3h ; real_T
bgi0rxbz2q ; boolean_T nzzoqtx1jn ; boolean_T frdxqbn3cc ; } bkreoivugt ;
typedef struct { real_T hpxazkjkfu ; boolean_T jnlhgxklhp ; int8_T fff44iaugz
; int8_T cr2cncvko3 ; int8_T f5zwgi3o42 ; int8_T bgjp4ffgxq ; int8_T
awrdzndn2k ; int8_T mj0ybniwyi ; uint8_T lsbqj5twr5 ; uint8_T kxo4ng5mym ;
boolean_T cjta2iupmk ; boolean_T ob0rby2vyu ; } obnqrrzrws ; typedef struct {
real_T pkd1cj2zqw ; } kdn4e5apbx ; typedef struct { real_T pkd1cj2zqw ; }
kuufetrhmx ; typedef struct { boolean_T pkd1cj2zqw ; } dwsys5wmoq ; typedef
struct { real_T pkd1cj2zqw ; } lfen2tdt1k ; typedef struct { real_T
pkd1cj2zqw ; } dd1o5e4gik ; typedef struct { real_T pkd1cj2zqw ; } pvf1ri2eku
; typedef struct { bkreoivugt fwkj5qvlln ; } e4sgqqdx0x ; typedef struct {
obnqrrzrws fwkj5qvlln ; } ezp25wauei ; typedef struct { kdn4e5apbx fwkj5qvlln
; } nnqhgrjqsi ; typedef struct { kuufetrhmx fwkj5qvlln ; } hkro4yzxeb ;
typedef struct { dwsys5wmoq fwkj5qvlln ; } bypu02uqmk ; typedef struct {
lfen2tdt1k fwkj5qvlln ; } gvvhazdcst ; typedef struct { dd1o5e4gik fwkj5qvlln
; } cs0f3ql21o ; typedef struct { pvf1ri2eku fwkj5qvlln ; } gol4iaaiu5 ;
typedef struct { e4sgqqdx0x p415byht2n ; } osvqia3rga ; typedef struct {
ezp25wauei p415byht2n ; } l5yneot2yb ; typedef struct { nnqhgrjqsi p415byht2n
; } g13nwdd14v ; typedef struct { hkro4yzxeb p415byht2n ; } jrulbka2df ;
typedef struct { bypu02uqmk p415byht2n ; } p1zf4iron3 ; typedef struct {
gvvhazdcst p415byht2n ; } m2keucirij ; typedef struct { cs0f3ql21o p415byht2n
; } leif044jlz ; typedef struct { gol4iaaiu5 p415byht2n ; } o2vnm3t2fk ;
typedef struct { real_T ksqhui2bri [ 3 ] ; real_T ok1fe3r2fu [ 2 ] ; real_T
bpfsxg5cf4 ; real_T gyfx0bi1rj ; real_T pea4wwfa0a ; real_T nt5wvocrnp ;
real_T ojk33v3dpi ; real_T grmx53xwew ; real_T cuez13xfsp ; real_T lgwjhk5iya
; real_T pkra2kspfe ; real_T dwgqrhudm0 [ 2 ] ; real_T i2fk1nd4ov [ 2 ] ;
real_T m4au5rggiq ; real_T b0hvnbwjnm ; real_T aarviewkqm ; real_T j3sbqz305k
; real_T p2s0wpjkrf ; real_T nrt55zpfu4 ; real_T k4irpb01ur ; real_T
fy0vl2w4cg [ 3 ] ; real_T kvtluxil40 [ 3 ] ; real_T f4mdvyxvhc [ 3 ] ; real_T
pemeiju33h [ 4 ] ; real_T lsrngo453d ; real_T gfmo5jl1hy [ 4 ] ; real_T
n2aibcwgay ; real_T kmpdiejiqi ; real_T pe4nwauv45 ; real_T ntlt1julw3 ;
real_T i2jeafudh1 ; real_T g503xnzp5d ; real_T pdd20hl4kg ; real_T glcas2qkm3
[ 2 ] ; real_T km4cqjfut4 ; real_T iilm0zsg1r ; real_T oa30dox5et ; real_T
j5qbnxnzfh ; real_T h3sbbcf3ln ; real_T k4azmzmdt2 ; real_T n0ce3oawip ;
real_T fxstfd1sig ; real_T a5m3dkep5i [ 12 ] ; real_T h3ap1xakdo [ 2 ] ;
osvqia3rga cmhxmwey2y [ 1 ] ; ghx32nl3ar ljqosm52di ; osvqia3rga d1n3vr0b4vr
[ 1 ] ; ghx32nl3ar dcwf5e4aqh ; ei10x4jgx3 kyhy50lu12 [ 4 ] ; gwk0eraqt1
pulklsztb4 ; gwk0eraqt1 eyuseg4k3m ; } d10zv0rlop ; typedef struct { real_T
pfoo3b12xb ; real_T pymnflgydf ; struct { void * AQHandles [ 17 ] ; }
fljxvwdnch ; struct { void * AQHandles [ 5 ] ; } jyjfinetfk ; struct { void *
AQHandles [ 5 ] ; } jyjfinetfkz ; struct { void * AQHandles ; } mbazal3gog ;
struct { void * AQHandles [ 12 ] ; } i5k1ykpxqn ; struct { void * AQHandles [
12 ] ; } jyjfinetfkzo ; struct { void * AQHandles [ 12 ] ; } cziwqcgnkn ;
struct { void * AQHandles [ 12 ] ; } jyjfinetfkzox ; struct { void *
AQHandles [ 4 ] ; } jyjfinetfkzox5 ; struct { void * AQHandles [ 4 ] ; }
lcawxzoc0m ; struct { void * AQHandles [ 6 ] ; } ngcgaehfyc ; struct { void *
AQHandles [ 4 ] ; } pfwdphfg4a ; int_T j52jwbp2ve ; int_T i1p4s2vik5 ; int_T
e0thzsadj5 ; int_T gngf1smqce ; int_T k3dceabwjy ; int_T adhcbovksi ; int8_T
bh5zhfozh4 ; int8_T auvvrjhwnt ; int8_T jpyjlvujgb ; l5yneot2yb cmhxmwey2y [
1 ] ; l5yneot2yb d1n3vr0b4vr [ 1 ] ; } ehse3th4zp ; typedef struct { real_T
olvmgosyfj [ 2 ] ; real_T hraqykvaar [ 2 ] ; real_T cpy0pcrfd3 [ 2 ] ; real_T
oozo5jsycm ; real_T ezqeipksvq ; real_T alcm3anqzx ; real_T ng3mqfsk5k ;
real_T or31ohgoam ; real_T m4nry4wry4 ; real_T fybl3cn4or ; real_T br2dkhawvd
[ 4 ] ; real_T pv1jzhid2l [ 4 ] ; real_T amyxfl3mjz ; real_T nh2dbkmvjf ;
real_T erlmu4zdcj [ 2 ] ; g13nwdd14v cmhxmwey2y [ 1 ] ; g13nwdd14v
d1n3vr0b4vr [ 1 ] ; } fykwo0psgw ; typedef int_T pcdqup2hxt [ 1 ] ; typedef
real_T jhye34b024 [ 2 ] ; typedef struct { real_T olvmgosyfj [ 2 ] ; real_T
hraqykvaar [ 2 ] ; real_T cpy0pcrfd3 [ 2 ] ; real_T oozo5jsycm ; real_T
ezqeipksvq ; real_T alcm3anqzx ; real_T ng3mqfsk5k ; real_T or31ohgoam ;
real_T m4nry4wry4 ; real_T fybl3cn4or ; real_T br2dkhawvd [ 4 ] ; real_T
pv1jzhid2l [ 4 ] ; real_T amyxfl3mjz ; real_T nh2dbkmvjf ; real_T erlmu4zdcj
[ 2 ] ; jrulbka2df cmhxmwey2y [ 1 ] ; jrulbka2df d1n3vr0b4vr [ 1 ] ; }
gjkyjt23o3 ; typedef struct { boolean_T olvmgosyfj [ 2 ] ; boolean_T
hraqykvaar [ 2 ] ; boolean_T cpy0pcrfd3 [ 2 ] ; boolean_T oozo5jsycm ;
boolean_T ezqeipksvq ; boolean_T alcm3anqzx ; boolean_T ng3mqfsk5k ;
boolean_T or31ohgoam ; boolean_T m4nry4wry4 ; boolean_T fybl3cn4or ;
boolean_T br2dkhawvd [ 4 ] ; boolean_T pv1jzhid2l [ 4 ] ; boolean_T
amyxfl3mjz ; boolean_T nh2dbkmvjf ; boolean_T erlmu4zdcj [ 2 ] ; p1zf4iron3
cmhxmwey2y [ 1 ] ; p1zf4iron3 d1n3vr0b4vr [ 1 ] ; } hfj2tyay3j ; typedef
struct { real_T olvmgosyfj [ 2 ] ; real_T hraqykvaar [ 2 ] ; real_T
cpy0pcrfd3 [ 2 ] ; real_T oozo5jsycm ; real_T ezqeipksvq ; real_T alcm3anqzx
; real_T ng3mqfsk5k ; real_T or31ohgoam ; real_T m4nry4wry4 ; real_T
fybl3cn4or ; real_T br2dkhawvd [ 4 ] ; real_T pv1jzhid2l [ 4 ] ; real_T
amyxfl3mjz ; real_T nh2dbkmvjf ; real_T erlmu4zdcj [ 2 ] ; m2keucirij
cmhxmwey2y [ 1 ] ; m2keucirij d1n3vr0b4vr [ 1 ] ; } cppdeqkbet ; typedef
struct { real_T olvmgosyfj [ 2 ] ; real_T hraqykvaar [ 2 ] ; real_T
cpy0pcrfd3 [ 2 ] ; real_T oozo5jsycm ; real_T ezqeipksvq ; real_T alcm3anqzx
; real_T ng3mqfsk5k ; real_T or31ohgoam ; real_T m4nry4wry4 ; real_T
fybl3cn4or ; real_T br2dkhawvd [ 4 ] ; real_T pv1jzhid2l [ 4 ] ; real_T
amyxfl3mjz ; real_T nh2dbkmvjf ; real_T erlmu4zdcj [ 2 ] ; leif044jlz
cmhxmwey2y [ 1 ] ; leif044jlz d1n3vr0b4vr [ 1 ] ; } krsvhggcdk ; typedef
struct { real_T olvmgosyfj [ 2 ] ; real_T hraqykvaar [ 2 ] ; real_T
cpy0pcrfd3 [ 2 ] ; real_T oozo5jsycm ; real_T ezqeipksvq ; real_T alcm3anqzx
; real_T ng3mqfsk5k ; real_T or31ohgoam ; real_T m4nry4wry4 ; real_T
fybl3cn4or ; real_T br2dkhawvd [ 4 ] ; real_T pv1jzhid2l [ 4 ] ; real_T
amyxfl3mjz ; real_T nh2dbkmvjf ; real_T erlmu4zdcj [ 2 ] ; o2vnm3t2fk
cmhxmwey2y [ 1 ] ; o2vnm3t2fk d1n3vr0b4vr [ 1 ] ; } dixym4ip1m ; typedef
struct { real_T desfdjrrtj ; real_T jlt0abwjbn ; } kp1jrg2pdu ; typedef
struct { ZCSigState moro4i2eml ; ZCSigState oqw3wg3njx ; } lwu3kmtjxp ;
typedef struct { const real_T fp3cmjd5kq ; } nmdm53plbh ; struct dmtwcpivep_
{ real_T P_0 ; real_T P_1 ; } ; struct m2zuhu5tga_ { real_T P_0 ; real_T P_1
; real_T P_2 ; real_T P_3 ; real_T P_4 ; boolean_T P_5 ; boolean_T P_6 ;
boolean_T P_7 ; boolean_T P_8 [ 8 ] ; } ; struct f2iolx00gz_ { m2zuhu5tga
fwkj5qvlln ; } ; struct ha2tgeuwjd_ { f2iolx00gz p415byht2n ; } ; struct
gth5sz0xg3o_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4
[ 2 ] ; real_T P_5 [ 2 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9
; real_T P_10 [ 7 ] ; real_T P_11 [ 7 ] ; real_T P_12 [ 6 ] ; real_T P_13 [ 6
] ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T
P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ;
real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T
P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ;
real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T
P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ;
real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T
P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ;
real_T P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T
P_68 ; real_T P_69 [ 2 ] ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T
P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ;
real_T P_79 ; real_T P_80 [ 7 ] ; real_T P_81 [ 7 ] ; real_T P_82 [ 6 ] ;
real_T P_83 [ 6 ] ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ;
real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ; real_T P_92 ; real_T
P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T P_97 ; real_T P_98 ;
real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102 ; real_T P_103 ;
real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ;
real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 [ 2
] ; real_T P_114 ; real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118
; real_T P_119 ; real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ;
real_T P_124 ; real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ;
real_T P_129 ; real_T P_130 ; real_T P_131 [ 2 ] ; real_T P_132 [ 3 ] ;
real_T P_133 [ 3 ] ; real_T P_134 ; real_T P_135 ; real_T P_136 ; real_T
P_137 ; real_T P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T
P_142 ; real_T P_143 ; real_T P_144 ; real_T P_145 [ 2 ] ; real_T P_146 [ 2 ]
; real_T P_147 [ 3 ] ; real_T P_148 [ 4 ] ; real_T P_149 [ 2 ] ; real_T P_150
[ 2 ] ; real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T P_154 ; real_T
P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ; real_T P_159 ; real_T
P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ; real_T P_164 ; real_T
P_165 ; real_T P_166 ; real_T P_167 ; real_T P_168 [ 3 ] ; real_T P_169 [ 3 ]
; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ;
real_T P_175 ; real_T P_176 [ 3 ] ; real_T P_177 ; real_T P_178 ; real_T
P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T
P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T
P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T
P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T P_198 [ 34 ] ;
real_T P_199 [ 3 ] ; real_T P_200 [ 3 ] ; real_T P_201 [ 9 ] ; real_T P_202 ;
real_T P_203 ; real_T P_204 ; real_T P_205 [ 3 ] ; real_T P_206 [ 3 ] ;
real_T P_207 [ 9 ] ; real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T
P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T
P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T
P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T
P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T
P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T
P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T
P_241 ; real_T P_242 ; real_T P_243 [ 34 ] ; real_T P_244 [ 3 ] ; real_T
P_245 [ 3 ] ; real_T P_246 [ 9 ] ; real_T P_247 ; real_T P_248 ; real_T P_249
; real_T P_250 [ 3 ] ; real_T P_251 [ 3 ] ; real_T P_252 [ 9 ] ; real_T P_253
; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T P_257 ; real_T P_258 ;
real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T P_262 ; real_T P_263 ;
real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T P_267 ; real_T P_268 ;
real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T P_272 ; real_T P_273 ;
real_T P_274 ; real_T P_275 ; real_T P_276 ; real_T P_277 ; real_T P_278 ;
real_T P_279 ; real_T P_280 ; real_T P_281 ; real_T P_282 ; real_T P_283 ;
real_T P_284 ; real_T P_285 ; real_T P_286 ; real_T P_287 ; real_T P_288 ;
real_T P_289 ; ha2tgeuwjd cmhxmwey2y ; ha2tgeuwjd d1n3vr0b4vr ; dmtwcpivep
kyhy50lu12 ; } ; struct pv1xww1cfx { struct SimStruct_tag * _mdlRefSfcnS ;
struct { real_T mr_nonContSig0 [ 1 ] ; real_T mr_nonContSig1 [ 1 ] ;
boolean_T mr_nonContSig2 [ 1 ] ; boolean_T mr_nonContSig3 [ 1 ] ; boolean_T
mr_nonContSig4 [ 1 ] ; boolean_T mr_nonContSig5 [ 1 ] ; } NonContDerivMemory
; ssNonContDerivSigInfo nonContDerivSignal [ 6 ] ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
15 ] ; int32_T * vardimsAddress [ 15 ] ; RTWLoggingFcnPtr loggingPtrs [ 15 ]
; sysRanDType * systemRan [ 27 ] ; int_T systemTid [ 27 ] ; } DataMapInfo ;
struct { uint8_T rtmDbBufReadBuf2 ; uint8_T rtmDbBufWriteBuf2 ; boolean_T
rtmDbBufLastBufWr2 ; real_T rtmDbBufContT2 [ 2 ] ; int_T mdlref_GlobalTID [ 3
] ; } Timing ; } ; typedef struct { d10zv0rlop rtb ; ehse3th4zp rtdw ;
kfhpy22huf rtm ; lwu3kmtjxp rtzce ; } cqmdrlu31uw ; extern void jlbi3xpni1 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , kfhpy22huf * const o4xdvdrcy3 , d10zv0rlop * localB ,
ehse3th4zp * localDW , fykwo0psgw * localX , lwu3kmtjxp * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_DrivetrainHevMm_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DrivetrainHevMm_GetDWork (
const cqmdrlu31uw * mdlrefDW ) ; extern void mr_DrivetrainHevMm_SetDWork (
cqmdrlu31uw * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DrivetrainHevMm_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_DrivetrainHevMm_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainHevMm_GetCAPIStaticMap ( void ) ;
extern void mbndyt53to ( real_T aqomnnhyfd , real_T cwxpx4m0rf , const real_T
h2gi4adzjo [ 4 ] , real_T rtp_J1 , real_T rtp_J2 , real_T rtp_N , real_T
rtp_b1 , real_T rtp_b2 , real_T rtp_dirSwitch , gwk0eraqt1 * localB ) ;
extern void hif4sgx310 ( real_T k2ix3ppxug , real_T igp3cal4ei , real_T
cyhzvk5dmv , real_T hwdxfmbamr , real_T ahdrispopa , real_T gitktjhynm ,
real_T acx1hhsqc1 , real_T gwnhatyrlh , real_T hj4xcuwsn0 , const real_T
aumirshx2g [ 34 ] , const real_T lq5neknpqw [ 3 ] , const real_T elz5legtro [
3 ] , const real_T j5e2hc3xyt [ 9 ] , real_T en322ef0gi , real_T mnsrpgouej ,
real_T cv3qht4um1 , real_T geepxpcitj , real_T b2azxxtcy0 , real_T gvwwbvup1i
, real_T gsgzosajmk , real_T iljmszbdub , real_T hbrpriuw2d , real_T
pyfhhngpr1 , real_T fqnhutkrcp , real_T dojcfuv0cz , real_T lyurtyeeme ,
real_T g0ifroxsgf , real_T k2gc2q0i0r , real_T g23ywsnatv , const real_T
enuxvocpda [ 3 ] , const real_T ccsj23neqv [ 3 ] , const real_T etyggkpws2 [
9 ] , real_T hsrqspc5x0 , real_T hypnpv3aio , real_T ber2ad2gya , real_T
mxz2nlqsgz , real_T pabezoqvuo , real_T m25wkur43p , real_T dlyiqxfvyv ,
real_T kahdlyesvr , real_T owe2fngmr2 , real_T evanagqr1t , real_T lpsgup3v3a
, real_T byx1hx2cbn , real_T ogg24iugk5 , real_T i4xifiq3k4 , real_T
c2tga2zox1 , real_T i3yg1vvedd , real_T hu2w13co0w , real_T n055mqehyg ,
real_T oglzmsdy2n , real_T ch0bh2ffoc , real_T migsdu0p4c , real_T nhboiya0lw
, real_T bl3gcurchk , real_T nxvo5qj0zt , real_T pi1iebbagk , real_T
brrwhgjjcn , real_T k5wzbghltk , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T
rtp_VXLOW , real_T rtp_kappamax , ghx32nl3ar * localB ) ; extern void
gmzullv1za ( real_T rtp_omegao , bkreoivugt * localB , obnqrrzrws * localDW ,
m2zuhu5tga * localP , kdn4e5apbx * localX ) ; extern void itc1cwgazn (
bkreoivugt * localB , obnqrrzrws * localDW , kdn4e5apbx * localX ) ; extern
void aysxb1cufo ( bkreoivugt * localB ) ; extern void d5gucz10ss ( bkreoivugt
* localB , obnqrrzrws * localDW , kuufetrhmx * localXdot ) ; extern void
kwedtatznp ( kfhpy22huf * const o4xdvdrcy3 , real_T cxhqxypwqg , real_T
pgewwzjkrp , real_T fngf4xtt4b , real_T rtp_omegao , real_T rtp_br , real_T
rtp_Iyy , real_T rtp_OmegaTol , bkreoivugt * localB , obnqrrzrws * localDW ,
m2zuhu5tga * localP , kdn4e5apbx * localX ) ; extern void kwedtatznpTID2 (
real_T rtp_br , bkreoivugt * localB , m2zuhu5tga * localP ) ; extern void
npzqshxpii ( int32_T NumIters , real_T rtp_omegao , osvqia3rga localB [ 1 ] ,
l5yneot2yb localDW [ 1 ] , ha2tgeuwjd * localP , g13nwdd14v localX [ 1 ] ) ;
extern void duijvzlf5r ( int32_T NumIters , osvqia3rga localB [ 1 ] ,
l5yneot2yb localDW [ 1 ] , g13nwdd14v localX [ 1 ] ) ; extern void dkvnrukimu
( int32_T NumIters , osvqia3rga localB [ 1 ] ) ; extern void chodk3tim5 (
int32_T NumIters , const real_T * eteues2dip , const real_T * i4ts2kaimw ,
const real_T * ny1jynpnmt , osvqia3rga localB [ 1 ] , l5yneot2yb localDW [ 1
] , jrulbka2df localXdot [ 1 ] ) ; extern void d1n3vr0b4v ( int32_T NumIters
, kfhpy22huf * const o4xdvdrcy3 , const real_T * eteues2dip , const real_T *
i4ts2kaimw , const real_T * ny1jynpnmt , real_T * c3ewcqpjrp , real_T *
ph1iigq5tf , real_T * labzsrukqm , real_T rtp_omegao , real_T rtp_br , real_T
rtp_Iyy , real_T rtp_VXLOW , real_T rtp_Re , osvqia3rga localB [ 1 ] ,
l5yneot2yb localDW [ 1 ] , ha2tgeuwjd * localP , g13nwdd14v localX [ 1 ] ) ;
extern void d1n3vr0b4vTID2 ( int32_T NumIters , const real_T * eteues2dip ,
const real_T * i4ts2kaimw , const real_T * ny1jynpnmt , real_T rtp_br ,
osvqia3rga localB [ 1 ] , ha2tgeuwjd * localP ) ; extern void bxqcuynedk (
kfhpy22huf * const o4xdvdrcy3 , ehse3th4zp * localDW ) ; extern void
k24opusysu ( kfhpy22huf * const o4xdvdrcy3 , d10zv0rlop * localB , ehse3th4zp
* localDW , fykwo0psgw * localX ) ; extern void plk0qsxt43 ( kfhpy22huf *
const o4xdvdrcy3 , d10zv0rlop * localB , ehse3th4zp * localDW , fykwo0psgw *
localX ) ; extern void m44buahda1 ( kfhpy22huf * const o4xdvdrcy3 ,
ehse3th4zp * localDW ) ; extern void c3gpt54oxa ( d10zv0rlop * localB ,
ehse3th4zp * localDW ) ; extern void hmlhdjth5c ( d10zv0rlop * localB ,
ehse3th4zp * localDW , fykwo0psgw * localX , gjkyjt23o3 * localXdot ) ;
extern void ap1xuke5gm ( kfhpy22huf * const o4xdvdrcy3 , ehse3th4zp * localDW
) ; extern void ap1xuke5gmTID2 ( void ) ; extern void DrivetrainHevMm (
kfhpy22huf * const o4xdvdrcy3 , const boolean_T * b5kfaj3gty , const real_T *
ccjs2uuke5 , const real_T * elde24zxlu , const real_T * idqluxr2my , const
real_T * ksqnmhheux , const real_T * ehsrmylizw , const real_T * juzwr5rwde ,
real_T * lio2fy55ed , real_T * nvt1nfo04f , boolean_T * ptkayxxpui , real_T *
bbpov2sdqf , real_T * ovwetxfl4f , d10zv0rlop * localB , ehse3th4zp * localDW
, fykwo0psgw * localX , lwu3kmtjxp * localZCE ) ; extern void
DrivetrainHevMmTID2 ( kfhpy22huf * const o4xdvdrcy3 , d10zv0rlop * localB ,
ehse3th4zp * localDW ) ; extern void l4kwgsfseo ( kfhpy22huf * const
o4xdvdrcy3 ) ; extern const real_T DrivetrainHevMm_RGND ;
#endif
