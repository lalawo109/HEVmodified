#ifndef RTW_HEADER_SiEngineController_h_
#define RTW_HEADER_SiEngineController_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef SiEngineController_COMMON_INCLUDES_
#define SiEngineController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "SiEngineController_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T a5wxlfw4ab ; real_T nfit0kk4gw ; real_T c0dbgaizma ;
real_T lid3dcfwla ; real_T f1s50oaxod ; real_T pcrfvg5s0y ; real_T igplmziovp
; real_T hgow0newka ; real_T ntrcmmk5hu ; real_T coedy1yaor ; real_T
aico4egrru ; real_T oedourbriq ; } k2iermqa3e ; typedef struct { real_T
bululxmkr4 ; real_T jtmeqk4xme ; real_T lkhjghyslx ; real_T fqln1ajymu ;
real_T opdpculhtu ; real_T fv1i1vle1p ; real_T ard1u5nrip ; real_T gmz5kpddgd
; real_T hnt5bn11pl ; real_T e50lhcuhik ; real_T as03kl2l3l ; real_T
eosie5njo0 ; real_T nd0o05pmja ; real_T dnd545trjy ; real_T a5cfso1gdb ;
real_T jktno5zsxc ; real_T frmaknfkcq ; int8_T lvpstwozqm ; boolean_T
ijuruvnnf2 ; boolean_T nxufjovhlh ; } co1aiayk40 ; struct naryjiu2ypt_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11
; real_T P_12 ; real_T P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 [ 16 ] ;
real_T P_22 [ 15 ] ; real_T P_23 [ 240 ] ; real_T P_24 [ 600 ] ; real_T P_25
[ 30 ] ; real_T P_26 [ 20 ] ; real_T P_27 [ 20 ] ; real_T P_28 [ 420 ] ;
real_T P_29 [ 21 ] ; real_T P_30 [ 20 ] ; real_T P_31 [ 240 ] ; real_T P_32 [
16 ] ; real_T P_33 [ 15 ] ; real_T P_34 [ 240 ] ; real_T P_35 [ 20 ] ; real_T
P_36 [ 20 ] ; real_T P_37 [ 240 ] ; real_T P_38 [ 16 ] ; real_T P_39 [ 15 ] ;
real_T P_40 [ 315 ] ; real_T P_41 [ 15 ] ; real_T P_42 [ 21 ] ; real_T P_43 [
400 ] ; real_T P_44 [ 20 ] ; real_T P_45 [ 20 ] ; real_T P_46 [ 400 ] ;
real_T P_47 [ 20 ] ; real_T P_48 [ 20 ] ; real_T P_49 [ 240 ] ; real_T P_50 [
16 ] ; real_T P_51 [ 15 ] ; real_T P_52 [ 4 ] ; real_T P_53 [ 4 ] ; real_T
P_54 [ 4 ] ; real_T P_55 [ 315 ] ; real_T P_56 [ 21 ] ; real_T P_57 [ 15 ] ;
real_T P_58 [ 400 ] ; real_T P_59 [ 20 ] ; real_T P_60 [ 20 ] ; real_T P_61 [
2 ] ; real_T P_62 [ 2 ] ; real_T P_63 [ 20 ] ; real_T P_64 [ 20 ] ; real_T
P_65 [ 315 ] ; real_T P_66 [ 21 ] ; real_T P_67 [ 15 ] ; real_T P_68 ; real_T
P_69 ; boolean_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74
; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T
P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101
; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ;
real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ;
real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T P_115 ; real_T P_116 ;
real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T P_121 ;
real_T P_122 [ 2 ] ; real_T P_123 [ 2 ] ; real_T P_124 ; real_T P_125 ;
real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ;
real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 ; real_T P_135 ;
real_T P_136 ; real_T P_137 ; real_T P_138 [ 2 ] ; real_T P_139 [ 2 ] ;
real_T P_140 [ 3 ] ; real_T P_141 [ 3 ] ; real_T P_142 ; real_T P_143 ;
real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ;
real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ;
real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T P_158 ;
real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T P_163 ;
real_T P_164 ; real_T P_165 ; uint32_T P_166 [ 2 ] ; uint32_T P_167 [ 2 ] ;
uint32_T P_168 [ 2 ] ; uint32_T P_169 [ 2 ] ; uint32_T P_170 [ 2 ] ; uint32_T
P_171 [ 2 ] ; uint32_T P_172 [ 2 ] ; uint32_T P_173 [ 2 ] ; uint32_T P_174 [
2 ] ; uint32_T P_175 [ 2 ] ; uint32_T P_176 [ 2 ] ; uint32_T P_177 [ 2 ] ;
uint32_T P_178 [ 2 ] ; } ; struct mvxg2sjgqu { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
6 ] ; int32_T * vardimsAddress [ 6 ] ; RTWLoggingFcnPtr loggingPtrs [ 6 ] ;
sysRanDType * systemRan [ 14 ] ; int_T systemTid [ 14 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
k2iermqa3e rtb ; co1aiayk40 rtdw ; fjokl4fytp rtm ; } lbmxgxauxab ; extern
void cupigkiksm ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , fjokl4fytp * const hxsxflkffh , k2iermqa3e * localB ,
co1aiayk40 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SiEngineController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_SiEngineController_GetDWork ( const lbmxgxauxab * mdlrefDW ) ; extern void
mr_SiEngineController_SetDWork ( lbmxgxauxab * mdlrefDW , const mxArray *
ssDW ) ; extern void mr_SiEngineController_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray *
mr_SiEngineController_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SiEngineController_GetCAPIStaticMap ( void )
; extern void fvrqcetvmh ( real_T * fbeaxzhi0h , real_T * ifqkan4qqd , real_T
* hwjb1qnl3t , real_T * ijtb1vna2r , real_T * nywrh2lh1n , real_T *
db42qklkzd , k2iermqa3e * localB , co1aiayk40 * localDW ) ; extern void
cnqxsd3p1p ( real_T * fbeaxzhi0h , real_T * ifqkan4qqd , real_T * hwjb1qnl3t
, real_T * ijtb1vna2r , real_T * nywrh2lh1n , real_T * db42qklkzd ,
co1aiayk40 * localDW ) ; extern void gxijjrm5wy ( real_T * fbeaxzhi0h ,
real_T * ifqkan4qqd , real_T * hwjb1qnl3t , real_T * ijtb1vna2r , real_T *
nywrh2lh1n , real_T * db42qklkzd ) ; extern void ina1uwt5ve ( k2iermqa3e *
localB , co1aiayk40 * localDW ) ; extern void l3glajbtck ( k2iermqa3e *
localB , co1aiayk40 * localDW ) ; extern void l3glajbtckTID1 ( void ) ;
extern void SiEngineController ( fjokl4fytp * const hxsxflkffh , const real_T
* dsupzrhvju , const real_T * kdqsy4qvj4 , const real_T * gl4kax2uwh , const
real_T * plu5o4vwms , const real_T * dtnj3mqbfl , const real_T * essrlj514x ,
const real_T * nv5lv0jtvq , const real_T * hkryo4lax0 , const real_T *
aqk2ykobp0 , const boolean_T * pk3jgu2pjk , const real_T * b3nwekvxwf , const
real_T * b10xhuopqf , const real_T * odwxlya4wd , const real_T * jezyuuj3xd ,
real_T * ek4dh2lsrg , real_T * baf2pre153 , real_T * a4uwrlxka2 , real_T *
fbeaxzhi0h , real_T * fgda0i4ghp , real_T * pbn5xgwgh5 , real_T * apvhdbbt3m
, real_T * ifqkan4qqd , real_T * iix0kvfk5x , real_T * hwjb1qnl3t , real_T *
ijtb1vna2r , real_T * nywrh2lh1n , real_T * gdv5b2pyyy , real_T * db42qklkzd
, real_T * jpy4qtlq32 , real_T * eoxvxtbeup , real_T * mnqgcjowd4 ,
k2iermqa3e * localB , co1aiayk40 * localDW ) ; extern void
SiEngineControllerTID1 ( k2iermqa3e * localB , co1aiayk40 * localDW ) ;
extern void kbxp3i41oa ( fjokl4fytp * const hxsxflkffh ) ;
#endif
