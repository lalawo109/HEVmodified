#include "MotMapped_capi.h"
#include "MotMapped.h"
#include "MotMapped_private.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_MotMapped [ 47 ] = { { "onutnyysg3s" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotMapped" } , {
"dgt5cze35z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "enublvxoqe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "cksvq3uzbl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "dneg4jgxjv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"czngammeul" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "hwxdbzcwm2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "fvoqvlb0vw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "e5x5m3khg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"ahwlsq3hsh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "pmabijvx04" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "n3bmbacy1z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "p3pfim4mkt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"fesxlu2cqn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "el0bvpiq2a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "i3bhu0iqew" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "mpjkcetq2f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"dqwx4mwrox" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "pwanrlxwtf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "e44455tvs0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "d301sj0o4r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"gmfgesfztt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "jrtirprga3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "pa4dbrumgk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "MotMapped" } , { "hnzlyhuasb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"ozsrtfbibi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "hxkjqrn0kl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "MotMapped" } , { "MotMapped" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "ccvbragkm0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotMapped" } , { "cbigzvtaaz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotMapped" } , {
"hcqe3k1ztj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotMapped" } , { "struct_YJ5CIDp6HiXqqYP1ocHFL" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_Kf1KyAZTMdEed0bqeMB8XE" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_MotMapped_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotMapped" } , { "mr_MotMapped_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "MotMapped" } , { "mr_MotMapped_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "MotMapped" } , { "mr_MotMapped_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotMapped" } , {
"mr_MotMapped_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MotMapped" } , { "MotMapped.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL
) } , { "MotMapped.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"MotMapped" } } ; ne3uetlgnj0 ne3uetlgnj = { 0.02 , 240000.0 , 300.0 , 0.0 ,
0.0 , { - 1.0 , 1.0 } , { - 1.0 , 1.0 } , 0.0 , 0.0 , { 44951.3970351912 ,
29037.7746776966 , 26617.9601212219 , 24198.1455647472 , 21778.3310082725 ,
19358.5164517977 , 16938.701895323 , 14518.8873388483 , 17860.5360120753 ,
17535.798993674 , 16908.8941796501 , 13151.8492452555 , 12247.2246939945 ,
6123.61234699725 , 0.0 , 5143.83437147769 , 10287.6687429554 ,
11573.6273358248 , 14879.8268780921 , 15431.5031144331 , 16074.4824108678 ,
13502.5652251289 , 15752.9927626504 , 18003.4203001719 , 20253.8478376934 ,
22504.2753752149 , 24754.7029127364 , 27005.1304502578 , 40456.257331672 ,
43926.4466141933 , 28375.675580811 , 26011.0359490768 , 23646.3963173425 ,
21281.7566856083 , 18917.117053874 , 16552.4774221398 , 14187.8377904055 ,
17453.2925199433 , 17135.9599286716 , 16523.3493612216 , 12851.9699465037 ,
11967.9720136754 , 5983.9860068377 , 0.0 , 5026.54824574367 ,
10053.0964914873 , 11309.7335529233 , 14540.547437875 , 15079.644737231 ,
15707.963267949 , 13194.6891450771 , 15393.80400259 , 17592.9188601028 ,
19792.0337176157 , 21991.1485751285 , 24190.2634326414 , 26389.3782901542 ,
39533.801952774 , 40265.9093963439 , 26011.0359490768 , 23843.449619987 ,
21675.8632908973 , 19508.2769618076 , 17340.6906327178 , 15173.1043036281 ,
13005.5179745384 , 15998.8514766147 , 12799.0811812918 , 12341.5140290606 ,
11780.9724509617 , 10970.6410125358 , 5485.32050626789 , 0.0 ,
4607.66922526503 , 9215.33845053006 , 10367.2557568463 , 11107.3626261545 ,
11519.1730631626 , 14398.9663289532 , 12095.1317163207 , 14110.9870023741 ,
16126.8422884276 , 18142.697574481 , 20158.5528605345 , 22174.4081465879 ,
24190.2634326414 , 36239.3184567095 , 36605.3721784944 , 23646.3963173425 ,
21675.8632908973 , 19705.3302644521 , 17734.7972380069 , 15764.2642115617 ,
13793.7311851165 , 11823.1981586713 , 14544.4104332861 , 11635.5283466289 ,
11219.5582082369 , 8726.64625997165 , 9973.31001139617 , 4986.65500569808 ,
0.0 , 4188.79020478639 , 8377.58040957278 , 7853.98163397448 ,
10097.6023874132 , 10471.975511966 , 13089.9693899575 , 10995.5742875643 ,
12828.1700021583 , 14660.7657167524 , 16493.3614313464 , 18325.9571459404 ,
20158.5528605345 , 21991.1485751285 , 32944.834960645 , 32944.834960645 ,
21281.7566856083 , 19508.2769618076 , 17734.7972380069 , 15961.3175142062 ,
14187.8377904055 , 12414.3580666048 , 10640.8783428041 , 13089.9693899575 ,
10471.975511966 , 10097.6023874132 , 7853.98163397449 , 6425.98497325185 ,
4487.98950512828 , 0.0 , 3769.91118430775 , 5654.86677646163 ,
7068.58347057703 , 9087.84214867187 , 9424.77796076938 , 11780.9724509617 ,
9896.01685880784 , 11545.3530019425 , 13194.6891450771 , 14844.0252882118 ,
16493.3614313464 , 18142.697574481 , 19792.0337176157 , 29650.3514645805 ,
29284.2977427955 , 18917.117053874 , 17340.6906327178 , 15764.2642115617 ,
14187.8377904055 , 12611.4113692493 , 11034.9849480932 , 9458.558526937 ,
7882.13210578084 , 9308.4226773031 , 8975.64656658951 , 6981.31700797732 ,
5711.98664289054 , 3989.32400455847 , 0.0 , 3351.03216382911 ,
5026.54824574367 , 6283.18530717958 , 8078.08190993055 , 8377.58040957278 ,
7330.38285837618 , 8796.45943005141 , 10262.5360017266 , 11728.6125734019 ,
13194.6891450771 , 14660.7657167524 , 16126.8422884276 , 17592.9188601028 ,
26355.867968516 , 25623.7605249461 , 16552.4774221398 , 15173.1043036281 ,
13793.7311851165 , 12414.3580666048 , 11034.9849480932 , 9655.61182958152 ,
8276.23871106988 , 6896.86559255823 , 8144.86984264021 , 7853.69074576582 ,
6108.65238198016 , 4072.4349213201 , 2498.99415626461 , 0.0 ,
2199.11485751285 , 3665.19142918809 , 5497.78714378214 , 7068.32167118923 ,
7330.38285837618 , 6414.08500107916 , 7696.90200129499 , 8979.71900151082 ,
10262.5360017266 , 11545.3530019425 , 12828.1700021583 , 14110.9870023741 ,
15393.80400259 , 23061.3844724515 , 21963.2233070967 , 14187.8377904055 ,
13005.5179745384 , 11823.1981586713 , 10640.8783428041 , 9458.558526937 ,
5787.14436187593 , 4960.40945303651 , 4133.67454419709 , 4729.2792634685 ,
6731.73492494213 , 5235.98775598299 , 3490.65850398866 , 2141.99499108395 ,
0.0 , 1884.95559215388 , 3141.59265358979 , 4712.38898038469 ,
6058.56143244791 , 4398.22971502571 , 3926.99081698724 , 4712.38898038468 ,
5497.78714378213 , 8796.45943005141 , 9896.01685880784 , 10995.5742875643 ,
12095.1317163207 , 13194.6891450771 , 19766.900976387 , 18302.6860892472 ,
11823.1981586713 , 10837.9316454486 , 9852.66513222605 , 6200.51181629564 ,
5511.56605892945 , 4822.62030156327 , 3272.49234748937 , 3444.72878683091 ,
2755.78302946473 , 3800.17294149958 , 2955.79953966781 , 2908.88208665722 ,
1784.99582590329 , 0.0 , 1570.7963267949 , 2617.99387799149 ,
2748.89357189107 , 3534.16083559461 , 2617.99387799149 , 3272.49234748936 ,
3141.5926535898 , 4581.48928648511 , 5235.98775598298 , 5890.48622548085 ,
9162.97857297022 , 10079.2764302672 , 10995.5742875643 , 16472.4174803225 ,
14642.1488713978 , 9458.558526937 , 8670.34531635892 , 7882.13210578084 ,
4960.40945303651 , 4409.25284714356 , 3054.32619099008 , 2617.9938779915 ,
2181.66156499292 , 2204.62642357178 , 2125.81102892909 , 1653.46981767884 ,
1576.42642115617 , 1163.55283466289 , 0.0 , 1047.1975511966 ,
1466.07657167524 , 1570.79632679489 , 2019.52047748264 , 2094.39510239319 ,
2094.3951023932 , 2513.27412287184 , 2932.15314335048 , 4188.79020478639 ,
4712.38898038468 , 7330.38285837618 , 8063.4211442138 , 8796.45943005141 ,
13177.933984258 , 7439.15628143595 , 7093.91889520275 , 4547.0419986168 ,
4133.67454419709 , 3720.30708977738 , 3306.93963535767 , 2290.74464324256 ,
1963.49540849362 , 1636.24617374469 , 1653.46981767884 , 1594.35827169682 ,
1240.10236325913 , 1182.31981586713 , 872.664625997165 , 0.0 ,
785.398163397448 , 1099.55742875643 , 1178.09724509617 , 1514.64035811198 ,
1570.79632679489 , 1570.7963267949 , 1884.95559215388 , 2199.11485751286 ,
3141.59265358979 , 3534.29173528851 , 3926.99081698724 , 4319.68989868596 ,
6597.34457253856 , 6918.41534173544 , 4959.4375209573 , 4729.2792634685 ,
3031.3613324112 , 2755.78302946473 , 2480.20472651826 , 2204.62642357178 ,
1527.16309549504 , 1653.46981767884 , 1090.83078249646 , 1102.31321178589 ,
1062.90551446455 , 826.734908839418 , 788.213210578084 , 581.776417331443 ,
0.0 , 523.598775598299 , 733.038285837618 , 785.398163397447 ,
1009.76023874132 , 1047.1975511966 , 1047.1975511966 , 1570.79632679489 ,
1466.07657167524 , 2094.39510239319 , 2356.19449019234 , 2617.99387799149 ,
2879.79326579064 , 4398.22971502571 , 4612.27689449029 , 2479.71876047865 ,
2364.63963173425 , 2167.58632908973 , 1970.53302644521 , 1240.10236325913 ,
1102.31321178589 , 964.524060312655 , 826.734908839418 , 545.415391248229 ,
551.156605892946 , 531.452757232273 , 413.367454419709 , 394.106605289042 ,
290.888208665722 , 0.0 , 261.799387799149 , 366.519142918809 ,
392.699081698724 , 504.880119370659 , 523.598775598298 , 523.598775598299 ,
785.398163397447 , 916.297857297022 , 1047.1975511966 , 1178.09724509617 ,
1832.59571459404 , 2015.85528605345 , 2199.11485751285 , 2306.13844724515 ,
1464.21488713978 , 1396.26340159546 , 1279.90811812918 , 1163.55283466289 ,
1047.1975511966 , 930.842267730309 , 814.486984264021 , 698.131700797732 ,
581.776417331443 , 465.421133865155 , 448.782328329475 , 349.065850398866 ,
232.710566932577 , 116.355283466289 , 0.0 , 104.71975511966 , 209.43951023932
, 314.159265358979 , 403.904095496528 , 418.879020478639 , 523.598775598299 ,
628.318530717959 , 733.038285837618 , 837.758040957278 , 942.477796076938 ,
1047.1975511966 , 1151.91730631626 , 1256.63706143592 , 1317.7933984258 ,
1317.7933984258 , 1256.63706143592 , 1151.91730631626 , 1047.1975511966 ,
942.477796076938 , 837.758040957278 , 733.038285837618 , 628.318530717959 ,
523.598775598299 , 418.879020478639 , 403.904095496528 , 314.159265358979 ,
209.43951023932 , 104.71975511966 , 0.0 , 116.355283466289 , 232.710566932577
, 349.065850398866 , 448.782328329475 , 465.421133865155 , 581.776417331443 ,
698.131700797732 , 814.486984264021 , 930.842267730309 , 1047.1975511966 ,
1163.55283466289 , 1279.90811812918 , 1396.26340159546 , 1464.21488713978 ,
2306.13844724515 , 2199.11485751285 , 2015.85528605345 , 1832.59571459404 ,
1178.09724509617 , 1047.1975511966 , 916.297857297022 , 785.398163397447 ,
523.598775598299 , 523.598775598298 , 504.880119370659 , 392.699081698724 ,
366.519142918809 , 261.799387799149 , 0.0 , 290.888208665722 ,
394.106605289042 , 413.367454419709 , 531.452757232273 , 551.156605892946 ,
545.415391248229 , 826.734908839418 , 964.524060312655 , 1102.31321178589 ,
1240.10236325913 , 1970.53302644521 , 2167.58632908973 , 2364.63963173425 ,
2479.71876047865 , 4612.27689449029 , 4398.22971502571 , 2879.79326579064 ,
2617.99387799149 , 2356.19449019234 , 2094.39510239319 , 1466.07657167524 ,
1570.79632679489 , 1047.1975511966 , 1047.1975511966 , 1009.76023874132 ,
785.398163397447 , 733.038285837618 , 523.598775598299 , 0.0 ,
581.776417331443 , 788.213210578084 , 826.734908839418 , 1062.90551446455 ,
1102.31321178589 , 1090.83078249646 , 1653.46981767884 , 1527.16309549504 ,
2204.62642357178 , 2480.20472651826 , 2755.78302946473 , 3031.3613324112 ,
4729.2792634685 , 4959.4375209573 , 6918.41534173544 , 6597.34457253856 ,
4319.68989868596 , 3926.99081698724 , 3534.29173528851 , 3141.59265358979 ,
2199.11485751286 , 1884.95559215388 , 1570.7963267949 , 1570.79632679489 ,
1514.64035811198 , 1178.09724509617 , 1099.55742875643 , 785.398163397448 ,
0.0 , 872.664625997165 , 1182.31981586713 , 1240.10236325913 ,
1594.35827169682 , 1653.46981767884 , 1636.24617374469 , 1963.49540849362 ,
2290.74464324256 , 3306.93963535767 , 3720.30708977738 , 4133.67454419709 ,
4547.0419986168 , 7093.91889520275 , 7439.15628143595 , 13177.933984258 ,
8796.45943005141 , 8063.4211442138 , 7330.38285837618 , 4712.38898038468 ,
4188.79020478639 , 2932.15314335048 , 2513.27412287184 , 2094.3951023932 ,
2094.39510239319 , 2019.52047748264 , 1570.79632679489 , 1466.07657167524 ,
1047.1975511966 , 0.0 , 1163.55283466289 , 1576.42642115617 ,
1653.46981767884 , 2125.81102892909 , 2204.62642357178 , 2181.66156499292 ,
2617.9938779915 , 3054.32619099008 , 4409.25284714356 , 4960.40945303651 ,
7882.13210578084 , 8670.34531635892 , 9458.558526937 , 14642.1488713978 ,
16472.4174803225 , 10995.5742875643 , 10079.2764302672 , 9162.97857297022 ,
5890.48622548085 , 5235.98775598298 , 4581.48928648511 , 3141.5926535898 ,
3272.49234748936 , 2617.99387799149 , 3534.16083559461 , 2748.89357189107 ,
2617.99387799149 , 1570.7963267949 , 0.0 , 1784.99582590329 ,
2908.88208665722 , 2955.79953966781 , 3800.17294149958 , 2755.78302946473 ,
3444.72878683091 , 3272.49234748937 , 4822.62030156327 , 5511.56605892945 ,
6200.51181629564 , 9852.66513222605 , 10837.9316454486 , 11823.1981586713 ,
18302.6860892472 , 19766.900976387 , 13194.6891450771 , 12095.1317163207 ,
10995.5742875643 , 9896.01685880784 , 8796.45943005141 , 5497.78714378213 ,
4712.38898038468 , 3926.99081698724 , 4398.22971502571 , 6058.56143244791 ,
4712.38898038469 , 3141.59265358979 , 1884.95559215388 , 0.0 ,
2141.99499108395 , 3490.65850398866 , 5235.98775598299 , 6731.73492494213 ,
4729.2792634685 , 4133.67454419709 , 4960.40945303651 , 5787.14436187593 ,
9458.558526937 , 10640.8783428041 , 11823.1981586713 , 13005.5179745384 ,
14187.8377904055 , 21963.2233070967 , 23061.3844724515 , 15393.80400259 ,
14110.9870023741 , 12828.1700021583 , 11545.3530019425 , 10262.5360017266 ,
8979.71900151082 , 7696.90200129499 , 6414.08500107916 , 7330.38285837618 ,
7068.32167118923 , 5497.78714378214 , 3665.19142918809 , 2199.11485751285 ,
0.0 , 2498.99415626461 , 4072.4349213201 , 6108.65238198016 ,
7853.69074576582 , 8144.86984264021 , 6896.86559255823 , 8276.23871106988 ,
9655.61182958152 , 11034.9849480932 , 12414.3580666048 , 13793.7311851165 ,
15173.1043036281 , 16552.4774221398 , 25623.7605249461 , 26355.867968516 ,
17592.9188601028 , 16126.8422884276 , 14660.7657167524 , 13194.6891450771 ,
11728.6125734019 , 10262.5360017266 , 8796.45943005141 , 7330.38285837618 ,
8377.58040957278 , 8078.08190993055 , 6283.18530717958 , 5026.54824574367 ,
3351.03216382911 , 0.0 , 3989.32400455847 , 5711.98664289054 ,
6981.31700797732 , 8975.64656658951 , 9308.4226773031 , 7882.13210578084 ,
9458.558526937 , 11034.9849480932 , 12611.4113692493 , 14187.8377904055 ,
15764.2642115617 , 17340.6906327178 , 18917.117053874 , 29284.2977427955 ,
29650.3514645805 , 19792.0337176157 , 18142.697574481 , 16493.3614313464 ,
14844.0252882118 , 13194.6891450771 , 11545.3530019425 , 9896.01685880784 ,
11780.9724509617 , 9424.77796076938 , 9087.84214867187 , 7068.58347057703 ,
5654.86677646163 , 3769.91118430775 , 0.0 , 4487.98950512828 ,
6425.98497325185 , 7853.98163397449 , 10097.6023874132 , 10471.975511966 ,
13089.9693899575 , 10640.8783428041 , 12414.3580666048 , 14187.8377904055 ,
15961.3175142062 , 17734.7972380069 , 19508.2769618076 , 21281.7566856083 ,
32944.834960645 , 32944.834960645 , 21991.1485751285 , 20158.5528605345 ,
18325.9571459404 , 16493.3614313464 , 14660.7657167524 , 12828.1700021583 ,
10995.5742875643 , 13089.9693899575 , 10471.975511966 , 10097.6023874132 ,
7853.98163397448 , 8377.58040957278 , 4188.79020478639 , 0.0 ,
4986.65500569808 , 9973.31001139617 , 8726.64625997165 , 11219.5582082369 ,
11635.5283466289 , 14544.4104332861 , 11823.1981586713 , 13793.7311851165 ,
15764.2642115617 , 17734.7972380069 , 19705.3302644521 , 21675.8632908973 ,
23646.3963173425 , 36605.3721784944 , 36239.3184567095 , 24190.2634326414 ,
22174.4081465879 , 20158.5528605345 , 18142.697574481 , 16126.8422884276 ,
14110.9870023741 , 12095.1317163207 , 14398.9663289532 , 11519.1730631626 ,
11107.3626261545 , 10367.2557568463 , 9215.33845053006 , 4607.66922526503 ,
0.0 , 5485.32050626789 , 10970.6410125358 , 11780.9724509617 ,
12341.5140290606 , 12799.0811812918 , 15998.8514766147 , 13005.5179745384 ,
15173.1043036281 , 17340.6906327178 , 19508.2769618076 , 21675.8632908973 ,
23843.449619987 , 26011.0359490768 , 40265.9093963439 , 39533.801952774 ,
26389.3782901542 , 24190.2634326414 , 21991.1485751285 , 19792.0337176157 ,
17592.9188601028 , 15393.80400259 , 13194.6891450771 , 15707.963267949 ,
15079.644737231 , 14540.547437875 , 11309.7335529233 , 10053.0964914873 ,
5026.54824574367 , 0.0 , 5983.9860068377 , 11967.9720136754 ,
12851.9699465037 , 16523.3493612216 , 17135.9599286716 , 17453.2925199433 ,
14187.8377904055 , 16552.4774221398 , 18917.117053874 , 21281.7566856083 ,
23646.3963173425 , 26011.0359490768 , 28375.675580811 , 43926.4466141933 ,
40456.257331672 , 27005.1304502578 , 24754.7029127364 , 22504.2753752149 ,
20253.8478376934 , 18003.4203001719 , 15752.9927626504 , 13502.5652251289 ,
16074.4824108678 , 15431.5031144331 , 14879.8268780921 , 11573.6273358248 ,
10287.6687429554 , 5143.83437147769 , 0.0 , 6123.61234699725 ,
12247.2246939945 , 13151.8492452555 , 16908.8941796501 , 17535.798993674 ,
17860.5360120753 , 14518.8873388483 , 16938.701895323 , 19358.5164517977 ,
21778.3310082725 , 24198.1455647472 , 26617.9601212219 , 29037.7746776966 ,
44951.3970351912 } , { - 1317.7933984258 , - 1256.63706143592 , -
1151.91730631626 , - 1047.1975511966 , - 942.477796076938 , -
837.758040957278 , - 733.038285837618 , - 628.318530717959 , -
523.598775598299 , - 418.879020478639 , - 403.904095496528 , -
314.159265358979 , - 209.43951023932 , - 104.71975511966 , 0.0 ,
104.71975511966 , 209.43951023932 , 314.159265358979 , 403.904095496528 ,
418.879020478639 , 523.598775598299 , 628.318530717959 , 733.038285837618 ,
837.758040957278 , 942.477796076938 , 1047.1975511966 , 1151.91730631626 ,
1256.63706143592 , 1317.7933984258 } , { - 307.0 , - 300.0 , - 275.0 , -
250.0 , - 225.0 , - 200.0 , - 175.0 , - 150.0 , - 125.0 , - 100.0 , - 75.0 ,
- 50.0 , - 25.0 , - 10.0 , 10.0 , 25.0 , 50.0 , 75.0 , 100.0 , 125.0 , 150.0
, 175.0 , 200.0 , 225.0 , 250.0 , 275.0 , 300.0 , 307.0 } , 0.0 , 0.0001 , -
1.0 , 0.0 , 1.0 , { 28U , 27U } } ; void hxkjqrn0kl ( hcqe3k1ztj * const
hter1htdtu , p3pfim4mkt * localDW ) { if ( ( ssGetSimMode ( hter1htdtu ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( hter1htdtu -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( hter1htdtu ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( hter1htdtu
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
 "MotMapped/Mapped Motor/Mapped Motor Core Speed 2/Motor Units/Power Accounting Bus Creator"
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
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo , hter1htdtu
-> DataMapInfo . mmi . InstanceMap . fullPath ,
"78b3b9e7-93b4-460c-b61f-ff43ec4c6de0" , 4 , leafElInfo , & localDW ->
bqkpczylct . AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ;
slsaCacheDWorkDataForSimTargetOP ( hter1htdtu -> _mdlRefSfcnS , & localDW ->
bqkpczylct . AQHandles [ 0 ] , 4 * sizeof ( & localDW -> bqkpczylct .
AQHandles [ 0 ] ) ) ; if ( localDW -> bqkpczylct . AQHandles [ 0 ] ) {
sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU propName = sdiGetLabelFromChars ( ""
) ; sdiSetSignalSampleTimeString ( localDW -> bqkpczylct . AQHandles [ 0 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( hter1htdtu ) ) ; sdiSetRunStartTime
( localDW -> bqkpczylct . AQHandles [ 0 ] , rtmGetTaskTime ( hter1htdtu , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> bqkpczylct . AQHandles [
0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> bqkpczylct .
AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> bqkpczylct . AQHandles [ 1 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( hter1htdtu ) ) ; sdiSetRunStartTime
( localDW -> bqkpczylct . AQHandles [ 1 ] , rtmGetTaskTime ( hter1htdtu , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> bqkpczylct . AQHandles [
1 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> bqkpczylct .
AQHandles [ 1 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> bqkpczylct . AQHandles [ 2 ] ,
"&#x8FDE;&#x7EED;" , 0.0 , rtmGetTFinal ( hter1htdtu ) ) ; sdiSetRunStartTime
( localDW -> bqkpczylct . AQHandles [ 2 ] , rtmGetTaskTime ( hter1htdtu , 0 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> bqkpczylct . AQHandles [
2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> bqkpczylct .
AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( localDW -> bqkpczylct . AQHandles [ 3 ] ,
"&#x53C2;&#x6570;" , 0.0 , rtmGetTFinal ( hter1htdtu ) ) ; sdiSetRunStartTime
( localDW -> bqkpczylct . AQHandles [ 3 ] , rtmGetTaskTime ( hter1htdtu , 1 )
) ; sdiAsyncRepoSetSignalExportSettings ( localDW -> bqkpczylct . AQHandles [
3 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> bqkpczylct .
AQHandles [ 3 ] , loggedName , origSigName , propName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] .
signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName (
leafElInfo [ 2 ] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName
) ; } if ( ! isStreamoutAlreadyRegistered ) { } } } } } void pa4dbrumgk (
real_T * aaox3jyzkc , fvoqvlb0vw * localX ) { localX -> mluv3mwscn =
ne3uetlgnj . P_7 ; * aaox3jyzkc = ne3uetlgnj . P_3 ; * aaox3jyzkc =
ne3uetlgnj . P_4 ; * aaox3jyzkc = ne3uetlgnj . P_8 ; } void jrtirprga3 (
fvoqvlb0vw * localX ) { localX -> mluv3mwscn = ne3uetlgnj . P_7 ; } void
dqwx4mwrox ( hcqe3k1ztj * const hter1htdtu , p3pfim4mkt * localDW ) { switch
( localDW -> cyu30i43yo ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu ->
_mdlRefSfcnS ) ; break ; } localDW -> cyu30i43yo = - 1 ; } void ozsrtfbibi (
hcqe3k1ztj * const hter1htdtu , p3pfim4mkt * localDW ) {
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ;
localDW -> cyu30i43yo = - 1 ; } void MotMapped ( hcqe3k1ztj * const
hter1htdtu , const real_T * gd4c12i1sj , const real_T * d2nufeekey , const
real_T * dvnnnhlsvt , real_T * aaox3jyzkc , real_T * evc0omvrjb , fesxlu2cqn
* localB , p3pfim4mkt * localDW , fvoqvlb0vw * localX ) { real_T brdysmq3kh ;
real_T ayn40dcovt ; real_T dgtehyqcng ; real_T hg04s0nm00 ; real_T
ikfdwmh110_p ; real_T l5ytgmk103_p ; int8_T rtAction ; int8_T rtPrevAction ;
if ( rtmIsMajorTimeStep ( hter1htdtu ) ) { localDW -> eaomksp2zq = ( *
d2nufeekey >= 0.0 ) ; } localB -> ab0a3qipyd = localDW -> eaomksp2zq > 0 ? *
d2nufeekey : - * d2nufeekey ; localB -> mtzjssuiwd = 1.0 / ne3uetlgnj . P_0 *
localX -> mluv3mwscn ; rtPrevAction = localDW -> cyu30i43yo ; if (
rtmIsMajorTimeStep ( hter1htdtu ) ) { rtAction = ( int8_T ) ! ( localB ->
ab0a3qipyd <= localB -> a01gtbkkdc ) ; localDW -> cyu30i43yo = rtAction ; }
else { rtAction = localDW -> cyu30i43yo ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( hter1htdtu -> _mdlRefSfcnS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ;
break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) {
if ( rtmGetTaskTime ( hter1htdtu , 0 ) != rtmGetTStart ( hter1htdtu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ; }
} if ( rtmIsMajorTimeStep ( hter1htdtu ) ) { localDW -> iq5t2gf0jd = localB
-> mtzjssuiwd >= ne3uetlgnj . P_2 ? 1 : localB -> mtzjssuiwd > - ne3uetlgnj .
P_2 ? 0 : - 1 ; } * aaox3jyzkc = localDW -> iq5t2gf0jd == 1 ? ne3uetlgnj .
P_2 : localDW -> iq5t2gf0jd == - 1 ? - ne3uetlgnj . P_2 : localB ->
mtzjssuiwd ; if ( rtmIsMajorTimeStep ( hter1htdtu ) ) { srUpdateBC ( localDW
-> mqa4lbhrof ) ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
rtmGetTaskTime ( hter1htdtu , 0 ) != rtmGetTStart ( hter1htdtu ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( hter1htdtu -> _mdlRefSfcnS ) ; }
} l5ytgmk103_p = ne3uetlgnj . P_1 / localB -> ab0a3qipyd ; * aaox3jyzkc =
look1_binlcpw ( localB -> mtzjssuiwd / l5ytgmk103_p , ne3uetlgnj . P_6 ,
ne3uetlgnj . P_5 , 1U ) * l5ytgmk103_p ; if ( rtmIsMajorTimeStep ( hter1htdtu
) ) { srUpdateBC ( localDW -> lub41dpovf ) ; } break ; } l5ytgmk103_p = *
d2nufeekey * * aaox3jyzkc ; hg04s0nm00 = look2_binlcapw ( * d2nufeekey , *
aaox3jyzkc , ne3uetlgnj . P_10 , ne3uetlgnj . P_11 , ne3uetlgnj . P_9 ,
ne3uetlgnj . P_17 , 29U ) ; if ( rtmIsMajorTimeStep ( hter1htdtu ) ) {
localDW -> kkpi1trwxl = * dvnnnhlsvt >= ne3uetlgnj . P_12 ? 1 : * dvnnnhlsvt
> ne3uetlgnj . P_13 ? 0 : - 1 ; } ikfdwmh110_p = localDW -> kkpi1trwxl == 1 ?
ne3uetlgnj . P_12 : localDW -> kkpi1trwxl == - 1 ? ne3uetlgnj . P_13 : *
dvnnnhlsvt ; hg04s0nm00 += l5ytgmk103_p ; * evc0omvrjb = hg04s0nm00 /
ikfdwmh110_p ; localB -> gdpaenpebu = * gd4c12i1sj - localB -> mtzjssuiwd ;
brdysmq3kh = ne3uetlgnj . P_14 * l5ytgmk103_p ; ayn40dcovt = hg04s0nm00 ;
dgtehyqcng = ( localB -> hhopagdbiz - brdysmq3kh ) - ayn40dcovt ; { if ( 1 )
{ if ( localDW -> bqkpczylct . AQHandles [ 0 ] && ssGetLogOutput ( hter1htdtu
-> _mdlRefSfcnS ) ) { sdiWriteSignal ( localDW -> bqkpczylct . AQHandles [ 0
] , rtmGetTaskTime ( hter1htdtu , 0 ) , ( char * ) & brdysmq3kh + 0 ) ;
sdiWriteSignal ( localDW -> bqkpczylct . AQHandles [ 1 ] , rtmGetTaskTime (
hter1htdtu , 0 ) , ( char * ) & ayn40dcovt + 0 ) ; sdiWriteSignal ( localDW
-> bqkpczylct . AQHandles [ 2 ] , rtmGetTaskTime ( hter1htdtu , 0 ) , ( char
* ) & dgtehyqcng + 0 ) ; } } } } void MotMappedTID1 ( hcqe3k1ztj * const
hter1htdtu , fesxlu2cqn * localB , p3pfim4mkt * localDW ) { localB ->
a01gtbkkdc = ne3uetlgnj . P_1 / ne3uetlgnj . P_2 ; localB -> hhopagdbiz =
ne3uetlgnj . P_16 * ne3uetlgnj . P_15 ; if ( localDW -> bqkpczylct .
AQHandles [ 3 ] && ssGetLogOutput ( hter1htdtu -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> bqkpczylct . AQHandles [ 3 ] , rtmGetTaskTime (
hter1htdtu , 1 ) , ( char * ) & localB -> hhopagdbiz + 0 ) ; } } void
gmfgesfztt ( void ) { } void gmfgesfzttTID1 ( void ) { } void d301sj0o4r (
fesxlu2cqn * localB , hwxdbzcwm2 * localXdot ) { localXdot -> mluv3mwscn =
localB -> gdpaenpebu ; } void e44455tvs0 ( const real_T * d2nufeekey , const
real_T * dvnnnhlsvt , fesxlu2cqn * localB , p3pfim4mkt * localDW , dgt5cze35z
* localZCSV ) { localZCSV -> mqqhqf2htr = * d2nufeekey ; localZCSV ->
aah1s0dqga = 0.0 ; if ( localB -> ab0a3qipyd <= localB -> a01gtbkkdc ) {
localZCSV -> aah1s0dqga = 1.0 ; } { real_T * zcsv = & ( localZCSV ->
ddtnztynje ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ; }
} if ( localDW -> cyu30i43yo == 0 ) { localZCSV -> ddtnztynje = localB ->
mtzjssuiwd - ne3uetlgnj . P_2 ; localZCSV -> mevnnkofho = localB ->
mtzjssuiwd - ( - ne3uetlgnj . P_2 ) ; } localZCSV -> n422n1zgew = *
dvnnnhlsvt - ne3uetlgnj . P_12 ; localZCSV -> kl3wovbbut = * dvnnnhlsvt -
ne3uetlgnj . P_13 ; } void mpjkcetq2f ( hcqe3k1ztj * const hter1htdtu ,
p3pfim4mkt * localDW ) { if ( ( ssGetSimMode ( hter1htdtu -> _mdlRefSfcnS )
!= SS_SIMMODE_EXTERNAL ) && ( ( hter1htdtu -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
bqkpczylct . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & localDW ->
bqkpczylct . AQHandles [ 0 ] ) ; } if ( localDW -> bqkpczylct . AQHandles [ 1
] ) { sdiTerminateStreaming ( & localDW -> bqkpczylct . AQHandles [ 1 ] ) ; }
if ( localDW -> bqkpczylct . AQHandles [ 2 ] ) { sdiTerminateStreaming ( &
localDW -> bqkpczylct . AQHandles [ 2 ] ) ; } if ( localDW -> bqkpczylct .
AQHandles [ 3 ] ) { sdiTerminateStreaming ( & localDW -> bqkpczylct .
AQHandles [ 3 ] ) ; } } } void i3bhu0iqew ( hcqe3k1ztj * const hter1htdtu ) {
if ( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( hter1htdtu
-> _mdlRefSfcnS , "MotMapped" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void hnzlyhuasb ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , hcqe3k1ztj * const hter1htdtu , fesxlu2cqn * localB ,
p3pfim4mkt * localDW , fvoqvlb0vw * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ne3uetlgnj . P_12 = rtInf ; ( void ) memset ( ( void
* ) hter1htdtu , 0 , sizeof ( hcqe3k1ztj ) ) ; hter1htdtu -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hter1htdtu -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; hter1htdtu -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hter1htdtu -> _mdlRefSfcnS , "MotMapped" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> ab0a3qipyd = 0.0
; localB -> mtzjssuiwd = 0.0 ; localB -> gdpaenpebu = 0.0 ; localB ->
a01gtbkkdc = 0.0 ; localB -> hhopagdbiz = 0.0 ; } ( void ) memset ( ( void *
) localDW , 0 , sizeof ( p3pfim4mkt ) ) ; MotMapped_InitializeDataMapInfo (
hter1htdtu , localDW , localX , sysRanPtr , contextTid ) ; if ( (
rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( hter1htdtu ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( hter1htdtu -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( hter1htdtu ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_MotMapped_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_MotMapped , 47 ) ; * retVal = 1 ; } static void
mr_MotMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_MotMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_MotMapped_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_MotMapped_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_MotMapped_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_MotMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_MotMapped_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) ; static uint_T
mr_MotMapped_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex
i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_MotMapped_cacheDataToMxArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_MotMapped_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MotMapped_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_MotMapped_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_MotMapped_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_MotMapped_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_MotMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_MotMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_MotMapped_GetDWork ( const onutnyysg3s * mdlrefDW ) {
static const char * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_MotMapped_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char *
rtdwDataFieldNames [ 6 ] = { "mdlrefDW->rtdw.eaomksp2zq" ,
"mdlrefDW->rtdw.kkpi1trwxl" , "mdlrefDW->rtdw.iq5t2gf0jd" ,
"mdlrefDW->rtdw.cyu30i43yo" , "mdlrefDW->rtdw.lub41dpovf" ,
"mdlrefDW->rtdw.mqa4lbhrof" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 6 , rtdwDataFieldNames ) ; mr_MotMapped_cacheDataAsMxArray ( rtdwData
, 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . eaomksp2zq ) , sizeof (
mdlrefDW -> rtdw . eaomksp2zq ) ) ; mr_MotMapped_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . kkpi1trwxl ) ,
sizeof ( mdlrefDW -> rtdw . kkpi1trwxl ) ) ; mr_MotMapped_cacheDataAsMxArray
( rtdwData , 0 , 2 , ( const void * ) & ( mdlrefDW -> rtdw . iq5t2gf0jd ) ,
sizeof ( mdlrefDW -> rtdw . iq5t2gf0jd ) ) ; mr_MotMapped_cacheDataAsMxArray
( rtdwData , 0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . cyu30i43yo ) ,
sizeof ( mdlrefDW -> rtdw . cyu30i43yo ) ) ; mr_MotMapped_cacheDataAsMxArray
( rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . lub41dpovf ) ,
sizeof ( mdlrefDW -> rtdw . lub41dpovf ) ) ; mr_MotMapped_cacheDataAsMxArray
( rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . mqa4lbhrof ) ,
sizeof ( mdlrefDW -> rtdw . mqa4lbhrof ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_MotMapped_SetDWork ( onutnyysg3s * mdlrefDW , const mxArray * ssDW ) { (
void ) ssDW ; ( void ) mdlrefDW ; mr_MotMapped_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) )
; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eaomksp2zq ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . eaomksp2zq ) )
; mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kkpi1trwxl ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . kkpi1trwxl ) )
; mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
iq5t2gf0jd ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . iq5t2gf0jd ) )
; mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
cyu30i43yo ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . cyu30i43yo ) )
; mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
lub41dpovf ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . lub41dpovf ) )
; mr_MotMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mqa4lbhrof ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . mqa4lbhrof ) )
; } } void mr_MotMapped_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1090142223U , 3671534558U , 3493519083U ,
1737602245U , } ; slmrModelRefRegisterSimStateChecksum ( S , "MotMapped" , &
chksum [ 0 ] ) ; } mxArray * mr_MotMapped_GetSimStateDisallowedBlocks ( ) {
return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
