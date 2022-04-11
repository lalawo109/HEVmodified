#include "GenMapped_capi.h"
#include "GenMapped.h"
#include "GenMapped_private.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_GenMapped [ 47 ] = { { "nrueedofvms" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "GenMapped" } , {
"eozg3wy3zb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "lewsw4odrs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "jywkj54f1m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "indxehzkxv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"iycnv1pvpj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "fcng003jj4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "p0m0rjpmhn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "auqjdh5jzf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"gli0bnedmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "lles1g22s0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "lsyvmdm3qb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "nqpjsgqmfb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"a1nvyp4buq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "ecvrltatgf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "ciygun30a3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "b2elyitmnp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"haimgy2xan" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "jcrtk4po4h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "axzm3wwmtg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "ih0oo4r0yo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"egso2rwuq2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "fqb3rkobxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "d0e1f5rocg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "GenMapped" } , { "alzelrhozn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"i433fn5aij" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "ef13dejgdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "GenMapped" } , { "GenMapped" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "hhkpc3h1ni" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "GenMapped" } , { "fevheqpxit" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "GenMapped" } , {
"posc2i5pah" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"GenMapped" } , { "struct_56AwDZKU89lPcNXgbyjSwE" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_wScZEju2JG12lomgMWruOH" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_GenMapped_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "GenMapped" } , { "mr_GenMapped_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "GenMapped" } , { "mr_GenMapped_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "GenMapped" } , { "mr_GenMapped_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "GenMapped" } , {
"mr_GenMapped_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"GenMapped" } , { "GenMapped.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "GenMapped.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"GenMapped" } } ; ahjrrd3rm2j ahjrrd3rm2 = { 0.02 , 102100.0 , 247.5806 , { -
1.0 , 1.0 } , { - 1.0 , 1.0 } , 0.0 , 0.0 , { 23329.3540804387 ,
22246.6822127514 , 20392.7920283555 , 18538.9018439595 , 16685.0116595636 ,
14831.1214751676 , 12977.2312907717 , 11123.3411063757 , 13683.4751705416 ,
10946.7801364333 , 10555.4327465558 , 8210.08510232494 , 6717.34235644768 ,
4691.47720132854 , 0.0 , 3940.84084911597 , 5911.26127367395 ,
7389.07659209244 , 9499.88947190018 , 9852.10212278992 , 12315.1276534874 ,
10344.7072289294 , 12068.8251004177 , 13792.9429719059 , 15517.0608433941 ,
17241.1787148824 , 18965.2965863706 , 20689.4144578588 , 21696.299294808 ,
22317.4688443079 , 21281.7566856083 , 19508.2769618076 , 17734.7972380069 ,
15961.3175142062 , 14187.8377904055 , 12414.3580666048 , 10640.8783428041 ,
13089.9693899575 , 10471.975511966 , 10097.6023874132 , 7853.98163397449 ,
6425.98497325185 , 4487.98950512828 , 0.0 , 3769.91118430775 ,
5654.86677646163 , 7068.58347057703 , 9087.84214867187 , 9424.77796076938 ,
11780.9724509617 , 9896.01685880784 , 11545.3530019425 , 13194.6891450771 ,
14844.0252882118 , 16493.3614313464 , 18142.697574481 , 19792.0337176157 ,
20755.2460252063 , 19837.7500838292 , 18917.117053874 , 17340.6906327178 ,
15764.2642115617 , 14187.8377904055 , 12611.4113692493 , 11034.9849480932 ,
9458.558526937 , 11635.5283466289 , 9308.4226773031 , 8975.64656658951 ,
6981.31700797732 , 5711.98664289054 , 3989.32400455847 , 0.0 ,
3351.03216382911 , 5026.54824574367 , 6283.18530717958 , 8078.08190993055 ,
8377.58040957278 , 10471.975511966 , 8796.45943005141 , 10262.5360017266 ,
11728.6125734019 , 13194.6891450771 , 14660.7657167524 , 16126.8422884276 ,
17592.9188601028 , 18449.1075779612 , 17358.0313233506 , 16552.4774221398 ,
15173.1043036281 , 13793.7311851165 , 12414.3580666048 , 11034.9849480932 ,
9655.61182958152 , 8276.23871106988 , 6896.86559255823 , 8144.86984264021 ,
7853.69074576582 , 6108.65238198016 , 4072.4349213201 , 2498.99415626461 ,
0.0 , 2199.11485751285 , 3665.19142918809 , 5497.78714378214 ,
7068.32167118923 , 7330.38285837618 , 6414.08500107916 , 7696.90200129499 ,
8979.71900151082 , 10262.5360017266 , 11545.3530019425 , 12828.1700021583 ,
14110.9870023741 , 15393.80400259 , 16142.969130716 , 14878.3125628719 ,
14187.8377904055 , 13005.5179745384 , 11823.1981586713 , 10640.8783428041 ,
9458.558526937 , 8276.23871106988 , 4960.40945303651 , 4133.67454419709 ,
4729.2792634685 , 6731.73492494213 , 5235.98775598299 , 3490.65850398866 ,
2141.99499108395 , 0.0 , 1884.95559215388 , 3141.59265358979 ,
4712.38898038469 , 6058.56143244791 , 4398.22971502571 , 3926.99081698724 ,
4712.38898038468 , 7696.90200129499 , 8796.45943005141 , 9896.01685880784 ,
10995.5742875643 , 12095.1317163207 , 13194.6891450771 , 13836.8306834709 ,
12398.5938023933 , 11823.1981586713 , 10837.9316454486 , 9852.66513222605 ,
8867.39861900344 , 7882.13210578084 , 4822.62030156327 , 3272.49234748937 ,
3444.72878683091 , 2755.78302946473 , 3800.17294149958 , 2955.79953966781 ,
2908.88208665722 , 1784.99582590329 , 0.0 , 1570.7963267949 ,
2617.99387799149 , 2748.89357189107 , 3534.16083559461 , 2617.99387799149 ,
3272.49234748936 , 3141.5926535898 , 4581.48928648511 , 7330.38285837618 ,
8246.6807156732 , 9162.97857297022 , 10079.2764302672 , 10995.5742875643 ,
11530.6922362257 , 9918.8750419146 , 9458.558526937 , 8670.34531635892 ,
7882.13210578084 , 4960.40945303651 , 4409.25284714356 , 3054.32619099008 ,
2617.9938779915 , 2181.66156499292 , 2204.62642357178 , 2125.81102892909 ,
1653.46981767884 , 1576.42642115617 , 1163.55283466289 , 0.0 ,
1047.1975511966 , 1466.07657167524 , 1570.79632679489 , 2019.52047748264 ,
2094.39510239319 , 2094.3951023932 , 2513.27412287184 , 2932.15314335048 ,
4188.79020478639 , 4712.38898038468 , 7330.38285837618 , 8063.4211442138 ,
8796.45943005141 , 9224.55378898058 , 7439.15628143595 , 7093.91889520275 ,
4547.0419986168 , 5911.59907933563 , 3720.30708977738 , 3306.93963535767 ,
2290.74464324256 , 1963.49540849362 , 1636.24617374469 , 1653.46981767884 ,
1594.35827169682 , 1240.10236325913 , 1182.31981586713 , 872.664625997165 ,
0.0 , 785.398163397448 , 1099.55742875643 , 1178.09724509617 ,
1514.64035811198 , 1570.79632679489 , 1570.7963267949 , 1884.95559215388 ,
2199.11485751286 , 3141.59265358979 , 3534.29173528851 , 5497.78714378213 ,
4319.68989868596 , 6597.34457253856 , 6918.41534173544 , 4959.4375209573 ,
4729.2792634685 , 3031.3613324112 , 2755.78302946473 , 2480.20472651826 ,
2204.62642357178 , 1527.16309549504 , 1653.46981767884 , 1090.83078249646 ,
1102.31321178589 , 1062.90551446455 , 826.734908839418 , 788.213210578084 ,
581.776417331443 , 0.0 , 523.598775598299 , 733.038285837618 ,
785.398163397447 , 1009.76023874132 , 1047.1975511966 , 1047.1975511966 ,
1570.79632679489 , 1466.07657167524 , 2094.39510239319 , 2356.19449019234 ,
2617.99387799149 , 2879.79326579064 , 4398.22971502571 , 4612.27689449029 ,
2479.71876047865 , 2364.63963173425 , 2167.58632908973 , 1970.53302644521 ,
1240.10236325913 , 1102.31321178589 , 964.524060312655 , 826.734908839418 ,
545.415391248229 , 551.156605892946 , 531.452757232273 , 413.367454419709 ,
394.106605289042 , 290.888208665722 , 0.0 , 261.799387799149 ,
366.519142918809 , 392.699081698724 , 504.880119370659 , 523.598775598298 ,
523.598775598299 , 785.398163397447 , 916.297857297022 , 1047.1975511966 ,
1178.09724509617 , 1832.59571459404 , 2015.85528605345 , 2199.11485751285 ,
2306.13844724515 , 1464.21488713978 , 1396.26340159546 , 1279.90811812918 ,
1163.55283466289 , 1047.1975511966 , 930.842267730309 , 814.486984264021 ,
698.131700797732 , 581.776417331443 , 465.421133865155 , 448.782328329475 ,
349.065850398866 , 232.710566932577 , 116.355283466289 , 0.0 ,
104.71975511966 , 209.43951023932 , 314.159265358979 , 403.904095496528 ,
418.879020478639 , 523.598775598299 , 628.318530717959 , 733.038285837618 ,
837.758040957278 , 942.477796076938 , 1047.1975511966 , 1151.91730631626 ,
1256.63706143592 , 1317.7933984258 , 1317.7933984258 , 1256.63706143592 ,
1151.91730631626 , 1047.1975511966 , 942.477796076938 , 837.758040957278 ,
733.038285837618 , 628.318530717959 , 523.598775598299 , 418.879020478639 ,
403.904095496528 , 314.159265358979 , 209.43951023932 , 104.71975511966 , 0.0
, 116.355283466289 , 232.710566932577 , 349.065850398866 , 448.782328329475 ,
465.421133865155 , 581.776417331443 , 698.131700797732 , 814.486984264021 ,
930.842267730309 , 1047.1975511966 , 1163.55283466289 , 1279.90811812918 ,
1396.26340159546 , 1464.21488713978 , 2306.13844724515 , 2199.11485751285 ,
2015.85528605345 , 1832.59571459404 , 1178.09724509617 , 1047.1975511966 ,
916.297857297022 , 785.398163397447 , 523.598775598299 , 523.598775598298 ,
504.880119370659 , 392.699081698724 , 366.519142918809 , 261.799387799149 ,
0.0 , 290.888208665722 , 394.106605289042 , 413.367454419709 ,
531.452757232273 , 551.156605892946 , 545.415391248229 , 826.734908839418 ,
964.524060312655 , 1102.31321178589 , 1240.10236325913 , 1970.53302644521 ,
2167.58632908973 , 2364.63963173425 , 2479.71876047865 , 4612.27689449029 ,
4398.22971502571 , 2879.79326579064 , 2617.99387799149 , 2356.19449019234 ,
2094.39510239319 , 1466.07657167524 , 1570.79632679489 , 1047.1975511966 ,
1047.1975511966 , 1009.76023874132 , 785.398163397447 , 733.038285837618 ,
523.598775598299 , 0.0 , 581.776417331443 , 788.213210578084 ,
826.734908839418 , 1062.90551446455 , 1102.31321178589 , 1090.83078249646 ,
1653.46981767884 , 1527.16309549504 , 2204.62642357178 , 2480.20472651826 ,
2755.78302946473 , 3031.3613324112 , 4729.2792634685 , 4959.4375209573 ,
6918.41534173544 , 6597.34457253856 , 4319.68989868596 , 5497.78714378213 ,
3534.29173528851 , 3141.59265358979 , 2199.11485751286 , 1884.95559215388 ,
1570.7963267949 , 1570.79632679489 , 1514.64035811198 , 1178.09724509617 ,
1099.55742875643 , 785.398163397448 , 0.0 , 872.664625997165 ,
1182.31981586713 , 1240.10236325913 , 1594.35827169682 , 1653.46981767884 ,
1636.24617374469 , 1963.49540849362 , 2290.74464324256 , 3306.93963535767 ,
3720.30708977738 , 5911.59907933563 , 4547.0419986168 , 7093.91889520275 ,
7439.15628143595 , 9224.55378898058 , 8796.45943005141 , 8063.4211442138 ,
7330.38285837618 , 4712.38898038468 , 4188.79020478639 , 2932.15314335048 ,
2513.27412287184 , 2094.3951023932 , 2094.39510239319 , 2019.52047748264 ,
1570.79632679489 , 1466.07657167524 , 1047.1975511966 , 0.0 ,
1163.55283466289 , 1576.42642115617 , 1653.46981767884 , 2125.81102892909 ,
2204.62642357178 , 2181.66156499292 , 2617.9938779915 , 3054.32619099008 ,
4409.25284714356 , 4960.40945303651 , 7882.13210578084 , 8670.34531635892 ,
9458.558526937 , 9918.8750419146 , 11530.6922362257 , 10995.5742875643 ,
10079.2764302672 , 9162.97857297022 , 8246.6807156732 , 7330.38285837618 ,
4581.48928648511 , 3141.5926535898 , 3272.49234748936 , 2617.99387799149 ,
3534.16083559461 , 2748.89357189107 , 2617.99387799149 , 1570.7963267949 ,
0.0 , 1784.99582590329 , 2908.88208665722 , 2955.79953966781 ,
3800.17294149958 , 2755.78302946473 , 3444.72878683091 , 3272.49234748937 ,
4822.62030156327 , 7882.13210578084 , 8867.39861900344 , 9852.66513222605 ,
10837.9316454486 , 11823.1981586713 , 12398.5938023933 , 13836.8306834709 ,
13194.6891450771 , 12095.1317163207 , 10995.5742875643 , 9896.01685880784 ,
8796.45943005141 , 7696.90200129499 , 4712.38898038468 , 3926.99081698724 ,
4398.22971502571 , 6058.56143244791 , 4712.38898038469 , 3141.59265358979 ,
1884.95559215388 , 0.0 , 2141.99499108395 , 3490.65850398866 ,
5235.98775598299 , 6731.73492494213 , 4729.2792634685 , 4133.67454419709 ,
4960.40945303651 , 8276.23871106988 , 9458.558526937 , 10640.8783428041 ,
11823.1981586713 , 13005.5179745384 , 14187.8377904055 , 14878.3125628719 ,
16142.969130716 , 15393.80400259 , 14110.9870023741 , 12828.1700021583 ,
11545.3530019425 , 10262.5360017266 , 8979.71900151082 , 7696.90200129499 ,
6414.08500107916 , 7330.38285837618 , 7068.32167118923 , 5497.78714378214 ,
3665.19142918809 , 2199.11485751285 , 0.0 , 2498.99415626461 ,
4072.4349213201 , 6108.65238198016 , 7853.69074576582 , 8144.86984264021 ,
6896.86559255823 , 8276.23871106988 , 9655.61182958152 , 11034.9849480932 ,
12414.3580666048 , 13793.7311851165 , 15173.1043036281 , 16552.4774221398 ,
17358.0313233506 , 18449.1075779612 , 17592.9188601028 , 16126.8422884276 ,
14660.7657167524 , 13194.6891450771 , 11728.6125734019 , 10262.5360017266 ,
8796.45943005141 , 10471.975511966 , 8377.58040957278 , 8078.08190993055 ,
6283.18530717958 , 5026.54824574367 , 3351.03216382911 , 0.0 ,
3989.32400455847 , 5711.98664289054 , 6981.31700797732 , 8975.64656658951 ,
9308.4226773031 , 11635.5283466289 , 9458.558526937 , 11034.9849480932 ,
12611.4113692493 , 14187.8377904055 , 15764.2642115617 , 17340.6906327178 ,
18917.117053874 , 19837.7500838292 , 20755.2460252063 , 19792.0337176157 ,
18142.697574481 , 16493.3614313464 , 14844.0252882118 , 13194.6891450771 ,
11545.3530019425 , 9896.01685880784 , 11780.9724509617 , 9424.77796076938 ,
9087.84214867187 , 7068.58347057703 , 5654.86677646163 , 3769.91118430775 ,
0.0 , 4487.98950512828 , 6425.98497325185 , 7853.98163397449 ,
10097.6023874132 , 10471.975511966 , 13089.9693899575 , 10640.8783428041 ,
12414.3580666048 , 14187.8377904055 , 15961.3175142062 , 17734.7972380069 ,
19508.2769618076 , 21281.7566856083 , 22317.4688443079 , 21696.299294808 ,
20689.4144578588 , 18965.2965863706 , 17241.1787148824 , 15517.0608433941 ,
13792.9429719059 , 12068.8251004177 , 10344.7072289294 , 12315.1276534874 ,
9852.10212278992 , 9499.88947190018 , 7389.07659209244 , 5911.26127367395 ,
3940.84084911597 , 0.0 , 4691.47720132854 , 6717.34235644768 ,
8210.08510232494 , 10555.4327465558 , 10946.7801364333 , 13683.4751705416 ,
11123.3411063757 , 12977.2312907717 , 14831.1214751676 , 16685.0116595636 ,
18538.9018439595 , 20392.7920283555 , 22246.6822127514 , 23329.3540804387 } ,
{ - 1317.7933984258 , - 1256.63706143592 , - 1151.91730631626 , -
1047.1975511966 , - 942.477796076938 , - 837.758040957278 , -
733.038285837618 , - 628.318530717959 , - 523.598775598299 , -
418.879020478639 , - 403.904095496528 , - 314.159265358979 , -
209.43951023932 , - 104.71975511966 , 0.0 , 104.71975511966 , 209.43951023932
, 314.159265358979 , 403.904095496528 , 418.879020478639 , 523.598775598299 ,
628.318530717959 , 733.038285837618 , 837.758040957278 , 942.477796076938 ,
1047.1975511966 , 1151.91730631626 , 1256.63706143592 , 1317.7933984258 } , {
- 235.201612903226 , - 225.0 , - 200.0 , - 175.0 , - 150.0 , - 125.0 , -
100.0 , - 75.0 , - 50.0 , - 25.0 , - 10.0 , 10.0 , 25.0 , 50.0 , 75.0 , 100.0
, 125.0 , 150.0 , 175.0 , 200.0 , 225.0 , 235.201612903226 } , 0.0 , 0.0001 ,
- 1.0 , 0.0 , 1.0 , { 28U , 21U } } ; void ef13dejgdl ( posc2i5pah * const
m2x1s10cgs , nqpjsgqmfb * localDW ) { if ( ( ssGetSimMode ( m2x1s10cgs ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( m2x1s10cgs -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( m2x1s10cgs ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( m2x1s10cgs
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "GenMapped/Mapped Generator/Mapped Motor Core Speed 2/Motor Units/Power Accounting Bus Creator"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; const char_T * leafUnits [ 4 ] = { "W" , "W" ,
"W" , "W" } ; sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T
childDimsArray0 [ 1 ] = { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T
childDimsArray2 [ 1 ] = { 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] .
signalName = sdiGetLabelFromChars ( ".PwrTrnsfrd.PwrMtr" ) ; leafElInfo [ 0 ]
. dims . nDims = 1 ; leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ;
leafElInfo [ 0 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] .
complexity = REAL ; leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ]
. units = leafUnits [ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".PwrTrnsfrd.PwrBus" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1
] . dims . dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".PwrNotTrnsfrd.PwrLoss" ) ; leafElInfo [
2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions =
childDimsArray2 ; leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ;
leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1
; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 3 ] . hDataType = hDT ; leafElInfo [ 3 ] . signalName =
sdiGetLabelFromChars ( ".PwrStored.PwrStoredShft" ) ; leafElInfo [ 3 ] . dims
. nDims = 1 ; leafElInfo [ 3 ] . dims . dimensions = childDimsArray3 ;
leafElInfo [ 3 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] .
complexity = REAL ; leafElInfo [ 3 ] . isLinearInterp = 0 ; leafElInfo [ 3 ]
. units = leafUnits [ 3 ] ; } srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , m2x1s10cgs
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"b000862e-9312-4721-aae4-e5bf8ba2cd25" , 4 , leafElInfo , & localDW ->
ehmnnpec4a . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( m2x1s10cgs -> _mdlRefSfcnS , & localDW ->
ehmnnpec4a . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> ehmnnpec4a .
AQHandles [ 0 ] ) ) ; if ( localDW -> ehmnnpec4a . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> ehmnnpec4a . AQHandles [ 0 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( m2x1s10cgs ) ) ; sdiSetRunStartTime
( localDW -> ehmnnpec4a . AQHandles [ 0 ] , rtmGetTaskTime ( m2x1s10cgs , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> ehmnnpec4a . AQHandles [
0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> ehmnnpec4a .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> ehmnnpec4a . AQHandles [ 1 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( m2x1s10cgs ) ) ; sdiSetRunStartTime
( localDW -> ehmnnpec4a . AQHandles [ 1 ] , rtmGetTaskTime ( m2x1s10cgs , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> ehmnnpec4a . AQHandles [
1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> ehmnnpec4a .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> ehmnnpec4a . AQHandles [ 2 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( m2x1s10cgs ) ) ; sdiSetRunStartTime
( localDW -> ehmnnpec4a . AQHandles [ 2 ] , rtmGetTaskTime ( m2x1s10cgs , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> ehmnnpec4a . AQHandles [
2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> ehmnnpec4a .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> ehmnnpec4a . AQHandles [ 3 ] ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( m2x1s10cgs ) ) ; sdiSetRunStartTime
( localDW -> ehmnnpec4a . AQHandles [ 3 ] , rtmGetTaskTime ( m2x1s10cgs , 1 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> ehmnnpec4a . AQHandles [
3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> ehmnnpec4a .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } } void d0e1f5rocg (
real_T * nocmeu3sin , p0m0rjpmhn * localX ) { localX -> cfnw0dcqkl =
ahjrrd3rm2 . P_5 ; * nocmeu3sin = ahjrrd3rm2 . P_6 ; } void fqb3rkobxm (
p0m0rjpmhn * localX ) { localX -> cfnw0dcqkl = ahjrrd3rm2 . P_5 ; } void
haimgy2xan ( posc2i5pah * const m2x1s10cgs , nqpjsgqmfb * localDW ) { switch
( localDW -> au4nxahm3e ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs ->
_mdlRefSfcnS ) ; break ; } localDW -> au4nxahm3e = - 1 ; } void i433fn5aij (
posc2i5pah * const m2x1s10cgs , nqpjsgqmfb * localDW ) {
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ;
localDW -> au4nxahm3e = - 1 ; } void GenMapped ( posc2i5pah * const
m2x1s10cgs , const real_T * mygqg1v5i2 , const real_T * paqjpsmi2i , const
real_T * nvfmu3xz4x , real_T * nocmeu3sin , real_T * med40sshjq , a1nvyp4buq
* localB , nqpjsgqmfb * localDW , p0m0rjpmhn * localX ) { real_T naweufzqt2 ;
real_T iht3asxafq ; real_T jvvzxzffxs ; real_T fwa3322fxk_p ; real_T
gboiamsdd5_p ; real_T ozddjoou1h ; int8_T rtAction ; int8_T rtPrevAction ; if
( rtmIsMajorTimeStep ( m2x1s10cgs ) ) { localDW -> irku44oz51 = ( *
paqjpsmi2i >= 0.0 ) ; } localB -> kkotz3kbfw = localDW -> irku44oz51 > 0 ? *
paqjpsmi2i : - * paqjpsmi2i ; localB -> ccgjxlixg1 = 1.0 / ahjrrd3rm2 . P_0 *
localX -> cfnw0dcqkl ; rtPrevAction = localDW -> au4nxahm3e ; if (
rtmIsMajorTimeStep ( m2x1s10cgs ) ) { rtAction = ( int8_T ) ! ( localB ->
kkotz3kbfw <= localB -> py1vgsbhe2 ) ; localDW -> au4nxahm3e = rtAction ; }
else { rtAction = localDW -> au4nxahm3e ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( m2x1s10cgs -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ;
break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) {
if ( rtmGetTaskTime ( m2x1s10cgs , 0 ) != rtmGetTStart ( m2x1s10cgs ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( m2x1s10cgs ) ) { localDW -> pom10f3t14 = localB
-> ccgjxlixg1 >= ahjrrd3rm2 . P_2 ? 1 : localB -> ccgjxlixg1 > - ahjrrd3rm2 .
P_2 ? 0 : - 1 ; } * nocmeu3sin = localDW -> pom10f3t14 == 1 ? ahjrrd3rm2 .
P_2 : localDW -> pom10f3t14 == - 1 ? - ahjrrd3rm2 . P_2 : localB ->
ccgjxlixg1 ; if ( rtmIsMajorTimeStep ( m2x1s10cgs ) ) { srUpdateBC ( localDW
-> dyyijttbta ) ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
rtmGetTaskTime ( m2x1s10cgs , 0 ) != rtmGetTStart ( m2x1s10cgs ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( m2x1s10cgs -> _mdlRefSfcnS ) ; }
} gboiamsdd5_p = ahjrrd3rm2 . P_1 / localB -> kkotz3kbfw ; * nocmeu3sin =
look1_binlcpw ( localB -> ccgjxlixg1 / gboiamsdd5_p , ahjrrd3rm2 . P_4 ,
ahjrrd3rm2 . P_3 , 1U ) * gboiamsdd5_p ; if ( rtmIsMajorTimeStep ( m2x1s10cgs
) ) { srUpdateBC ( localDW -> bhnjcoe3zj ) ; } break ; } gboiamsdd5_p = *
paqjpsmi2i * * nocmeu3sin ; ozddjoou1h = look2_binlcapw ( * paqjpsmi2i , *
nocmeu3sin , ahjrrd3rm2 . P_8 , ahjrrd3rm2 . P_9 , ahjrrd3rm2 . P_7 ,
ahjrrd3rm2 . P_15 , 29U ) ; if ( rtmIsMajorTimeStep ( m2x1s10cgs ) ) {
localDW -> polojotjse = * nvfmu3xz4x >= ahjrrd3rm2 . P_10 ? 1 : * nvfmu3xz4x
> ahjrrd3rm2 . P_11 ? 0 : - 1 ; } fwa3322fxk_p = localDW -> polojotjse == 1 ?
ahjrrd3rm2 . P_10 : localDW -> polojotjse == - 1 ? ahjrrd3rm2 . P_11 : *
nvfmu3xz4x ; ozddjoou1h += gboiamsdd5_p ; * med40sshjq = ozddjoou1h /
fwa3322fxk_p ; localB -> oqssnj3pdn = * mygqg1v5i2 - localB -> ccgjxlixg1 ;
naweufzqt2 = ahjrrd3rm2 . P_12 * gboiamsdd5_p ; iht3asxafq = ozddjoou1h ;
jvvzxzffxs = ( localB -> mpkiqtx21c - naweufzqt2 ) - iht3asxafq ; { if ( 1 )
{ if ( localDW -> ehmnnpec4a . AQHandles [ 0 ] && ssGetLogOutput ( m2x1s10cgs
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> ehmnnpec4a . AQHandles [ 0
] , rtmGetTaskTime ( m2x1s10cgs , 0 ) , ( char * ) & naweufzqt2 + 0 ) ;
sdiWriteSignal ( localDW -> ehmnnpec4a . AQHandles [ 1 ] , rtmGetTaskTime (
m2x1s10cgs , 0 ) , ( char * ) & iht3asxafq + 0 ) ; sdiWriteSignal ( localDW
-> ehmnnpec4a . AQHandles [ 2 ] , rtmGetTaskTime ( m2x1s10cgs , 0 ) , ( char
* ) & jvvzxzffxs + 0 ) ; } } } } void GenMappedTID1 ( posc2i5pah * const
m2x1s10cgs , a1nvyp4buq * localB , nqpjsgqmfb * localDW ) { localB ->
py1vgsbhe2 = ahjrrd3rm2 . P_1 / ahjrrd3rm2 . P_2 ; localB -> mpkiqtx21c =
ahjrrd3rm2 . P_14 * ahjrrd3rm2 . P_13 ; if ( localDW -> ehmnnpec4a .
AQHandles [ 3 ] && ssGetLogOutput ( m2x1s10cgs -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> ehmnnpec4a . AQHandles [ 3 ] , rtmGetTaskTime (
m2x1s10cgs , 1 ) , ( char * ) & localB -> mpkiqtx21c + 0 ) ; } } void
egso2rwuq2 ( void ) { } void egso2rwuq2TID1 ( void ) { } void ih0oo4r0yo (
a1nvyp4buq * localB , fcng003jj4 * localXdot ) { localXdot -> cfnw0dcqkl =
localB -> oqssnj3pdn ; } void axzm3wwmtg ( const real_T * paqjpsmi2i , const
real_T * nvfmu3xz4x , a1nvyp4buq * localB , nqpjsgqmfb * localDW , eozg3wy3zb
* localZCSV ) { localZCSV -> i2c14yyku1 = * paqjpsmi2i ; localZCSV ->
fmxqmucr02 = 0.0 ; if ( localB -> kkotz3kbfw <= localB -> py1vgsbhe2 ) {
localZCSV -> fmxqmucr02 = 1.0 ; } { real_T * zcsv = & ( localZCSV ->
igronq1kma ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ; }
} if ( localDW -> au4nxahm3e == 0 ) { localZCSV -> igronq1kma = localB ->
ccgjxlixg1 - ahjrrd3rm2 . P_2 ; localZCSV -> jwfgz2a0ft = localB ->
ccgjxlixg1 - ( - ahjrrd3rm2 . P_2 ) ; } localZCSV -> ezkf4ky5o2 = *
nvfmu3xz4x - ahjrrd3rm2 . P_10 ; localZCSV -> aowlcyvy1b = * nvfmu3xz4x -
ahjrrd3rm2 . P_11 ; } void b2elyitmnp ( posc2i5pah * const m2x1s10cgs ,
nqpjsgqmfb * localDW ) { if ( ( ssGetSimMode ( m2x1s10cgs -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( m2x1s10cgs -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
ehmnnpec4a . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
ehmnnpec4a . AQHandles [ 0 ] ) ; } if ( localDW -> ehmnnpec4a . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> ehmnnpec4a . AQHandles [ 1 ] ) ; }
if ( localDW -> ehmnnpec4a . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> ehmnnpec4a . AQHandles [ 2 ] ) ; } if ( localDW -> ehmnnpec4a .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> ehmnnpec4a .
AQHandles [ 3 ] ) ; } } } void ciygun30a3 ( posc2i5pah * const m2x1s10cgs ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( m2x1s10cgs
-> _mdlRefSfcnS , "GenMapped" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void alzelrhozn ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , posc2i5pah * const m2x1s10cgs , a1nvyp4buq * localB ,
nqpjsgqmfb * localDW , p0m0rjpmhn * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ahjrrd3rm2 . P_10 = rtInf ; ( void ) memset ( ( void
* ) m2x1s10cgs , 0 , sizeof ( posc2i5pah ) ) ; m2x1s10cgs -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; m2x1s10cgs -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; m2x1s10cgs -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( m2x1s10cgs -> _mdlRefSfcnS , "GenMapped" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> kkotz3kbfw = 0.0
; localB -> ccgjxlixg1 = 0.0 ; localB -> oqssnj3pdn = 0.0 ; localB ->
py1vgsbhe2 = 0.0 ; localB -> mpkiqtx21c = 0.0 ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( nqpjsgqmfb ) ) ; GenMapped_InitializeDataMapInfo (
m2x1s10cgs , localDW , localX , sysRanPtr , contextTid ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( m2x1s10cgs ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( m2x1s10cgs -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( m2x1s10cgs ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_GenMapped_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_GenMapped , 47 ) ; * retVal = 1 ; } static void
mr_GenMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_GenMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_GenMapped_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_GenMapped_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_GenMapped_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_GenMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_GenMapped_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_GenMapped_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_GenMapped_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_GenMapped_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_GenMapped_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_GenMapped_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_GenMapped_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_GenMapped_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_GenMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_GenMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_GenMapped_GetDWork ( const nrueedofvms * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_GenMapped_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 6 ] = { "mdlrefDW->rtdw.irku44oz51" ,
"mdlrefDW->rtdw.polojotjse" , "mdlrefDW->rtdw.pom10f3t14" ,
"mdlrefDW->rtdw.au4nxahm3e" , "mdlrefDW->rtdw.bhnjcoe3zj" ,
"mdlrefDW->rtdw.dyyijttbta" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 6 , rtdwDataFieldNames ) ; mr_GenMapped_cacheDataAsMxArray ( rtdwData
, 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . irku44oz51 ) , sizeof (
mdlrefDW -> rtdw . irku44oz51 ) ) ; mr_GenMapped_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . polojotjse ) ,
sizeof ( mdlrefDW -> rtdw . polojotjse ) ) ; mr_GenMapped_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . pom10f3t14 ) ,
sizeof ( mdlrefDW -> rtdw . pom10f3t14 ) ) ; mr_GenMapped_cacheDataAsMxArray
( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . au4nxahm3e ) ,
sizeof ( mdlrefDW -> rtdw . au4nxahm3e ) ) ; mr_GenMapped_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . bhnjcoe3zj ) ,
sizeof ( mdlrefDW -> rtdw . bhnjcoe3zj ) ) ; mr_GenMapped_cacheDataAsMxArray
( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . dyyijttbta ) ,
sizeof ( mdlrefDW -> rtdw . dyyijttbta ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_GenMapped_SetDWork ( nrueedofvms * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_GenMapped_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
irku44oz51 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . irku44oz51 ) )
; mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
polojotjse ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . polojotjse ) )
; mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
pom10f3t14 ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . pom10f3t14 ) )
; mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
au4nxahm3e ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . au4nxahm3e ) )
; mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bhnjcoe3zj ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . bhnjcoe3zj ) )
; mr_GenMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
dyyijttbta ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . dyyijttbta ) )
; } } void mr_GenMapped_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1972378888U , 4009309164U , 825098012U ,
1290539583U , } ; slmrModelRefRegisterSimStateChecksum ( S , "GenMapped" , &
chksum [ 0 ] ) ; } mxArray * mr_GenMapped_GetSimStateDisallowedBlocks ( ) {
return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
