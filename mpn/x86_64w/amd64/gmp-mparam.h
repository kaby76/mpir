
/* Generated by tuneup.c, 2009-10-05, system compiler */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD             109
#define MUL_TOOM4_THRESHOLD             644
#define MUL_TOOM7_THRESHOLD             644

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          34
#define SQR_TOOM3_THRESHOLD             133
#define SQR_TOOM4_THRESHOLD             135
#define SQR_TOOM7_THRESHOLD             290

#define MULLOW_BASECASE_THRESHOLD        29
#define MULLOW_DC_THRESHOLD              29
#define MULLOW_MUL_THRESHOLD           9775

#define MULHIGH_BASECASE_THRESHOLD       96
#define MULHIGH_DC_THRESHOLD            114
#define MULHIGH_MUL_THRESHOLD           157

#define MULMOD_2EXPM1_THRESHOLD           1

#define DIV_SB_PREINV_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIV_DC_THRESHOLD                 81
#define POWM_THRESHOLD                  339
#define FAC_UI_THRESHOLD              32756

#define GCD_ACCEL_THRESHOLD             898
#define GCDEXT_THRESHOLD              MP_SIZE_T_MAX  /* never */
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD          MP_SIZE_T_MAX  /* never */
#define MOD_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                19
#define MOD_1_2_THRESHOLD                19
#define MOD_1_3_THRESHOLD                19
#define DIVREM_HENSEL_QR_1_THRESHOLD      2
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      3
#define DIVREM_EUCLID_HENSEL_THRESHOLD     18

#define ROOTREM_THRESHOLD                 6

#define GET_STR_DC_THRESHOLD             20
#define GET_STR_PRECOMPUTE_THRESHOLD     22
#define SET_STR_THRESHOLD              7764

#define MUL_FFT_TABLE  { 688, 1440, 4416, 4864, 11264, 36864, 114688, 589824, 0 }
#define MUL_FFT_MODF_THRESHOLD          720
#define MUL_FFT_THRESHOLD              7680

#define SQR_FFT_TABLE  { 656, 1504, 4032, 4352, 11264, 36864, 114688, 458752, 0 }
#define SQR_FFT_MODF_THRESHOLD          656
#define SQR_FFT_THRESHOLD              5888

/* Tuneup completed successfully, took 27 seconds */

#define MUL_FFT_TABLE2 {{1, 3}, {205, 4}, {210, 3}, {220, 4}, {260, 3}, {266, 4}, {272, 3}, {278, 4}, {285, 3}, {292, 4}, {413, 5}, {433, 4}, {443, 5}, {463, 6}, {474, 5}, {485, 4}, {507, 5}, {850, 4}, {869, 5}, {889, 3}, {909, 4}, {929, 2}, {950, 3}, {971, 4}, {993, 5}, {1015, 6}, {1038, 5}, {1061, 6}, {1109, 7}, {1134, 6}, {1159, 5}, {1185, 6}, {1612, 5}, {1648, 6}, {2144, 4}, {2191, 5}, {2239, 6}, {2289, 7}, {2340, 6}, {2445, 7}, {2499, 6}, {2668, 7}, {2727, 6}, {2849, 5}, {2912, 4}, {2976, 5}, {3042, 6}, {3320, 5}, {3393, 6}, {3468, 7}, {3544, 5}, {3622, 6}, {3784, 5}, {3867, 6}, {3952, 5}, {4039, 6}, {4219, 7}, {4312, 8}, {4914, 7}, {5022, 8}, {5245, 6}, {5360, 7}, {5598, 8}, {6241, 6}, {6378, 7}, {6518, 8}, {6807, 9}, {6957, 8}, {7110, 9}, {7266, 8}, {7426, 9}, {7756, 8}, {8100, 7}, {8278, 8}, {8460, 9}, {8646, 7}, {8836, 8}, {9638, 9}, {9850, 8}, {10744, 9}, {10980, 8}, {11221, 9}, {12239, 8}, {12507, 9}, {13347, 8}, {14245, 9}, {15202, 10}, {15535, 9}, {16224, 8}, {16580, 9}, {16944, 8}, {17316, 9}, {18084, 8}, {18480, 9}, {19299, 10}, {19722, 9}, {25581, 10}, {26715, 9}, {29772, 10}, {31772, 9}, {33906, 10}, {36184, 9}, {37787, 10}, {40326, 9}, {41210, 10}, {58292, 11}, {62207, 12}, {63570, 10}, {70845, 11}, {72397, 10}, {73983, 11}, {80681, 10}, {89912, 11}, {98051, 10}, {102394, 11}, {114110, 12}, {127165, 11}, {129950, 10}, {132796, 11}, {164920, 12}, {168532, 11}, {172223, 12}, {196129, 11}, {228243, 12}, {233241, 13}, {254354, 12}, {259924, 11}, {283451, 12}, {289658, 11}, {296001, 12}, {329862, 11}, {344468, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 12}, {933036, 13}, {953467, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 3}, {205, 4}, {215, 3}, {220, 4}, {377, 5}, {386, 4}, {404, 5}, {423, 4}, {433, 5}, {507, 4}, {519, 5}, {555, 4}, {568, 5}, {813, 6}, {831, 4}, {850, 5}, {869, 6}, {889, 5}, {909, 4}, {929, 5}, {950, 6}, {971, 5}, {993, 6}, {1109, 5}, {1134, 6}, {1238, 5}, {1266, 6}, {2144, 7}, {2191, 6}, {2289, 7}, {2340, 6}, {2392, 7}, {2445, 6}, {2499, 7}, {3109, 5}, {3178, 6}, {3248, 7}, {3544, 5}, {3622, 6}, {3702, 4}, {3784, 5}, {3867, 6}, {3952, 7}, {4039, 5}, {4128, 6}, {4219, 7}, {4312, 5}, {4407, 6}, {4504, 7}, {4914, 8}, {5022, 6}, {5132, 7}, {6107, 8}, {6241, 9}, {6378, 8}, {6518, 7}, {6661, 8}, {6807, 7}, {7110, 8}, {7266, 9}, {7426, 8}, {7589, 9}, {7756, 8}, {8278, 9}, {8460, 8}, {9030, 9}, {9228, 10}, {9431, 9}, {9638, 8}, {10066, 7}, {10287, 8}, {10980, 9}, {11467, 7}, {11719, 8}, {12239, 7}, {12507, 8}, {12781, 9}, {13939, 10}, {14245, 8}, {15535, 9}, {15876, 10}, {16224, 8}, {16580, 9}, {18885, 10}, {19299, 8}, {19722, 9}, {20154, 10}, {20596, 8}, {21047, 9}, {22461, 10}, {22953, 9}, {25581, 10}, {26142, 9}, {26715, 10}, {27898, 9}, {29134, 10}, {31091, 9}, {31772, 10}, {34649, 9}, {35408, 10}, {36184, 11}, {36977, 9}, {37787, 10}, {40326, 9}, {41210, 10}, {42113, 9}, {43036, 10}, {46934, 11}, {47962, 10}, {52305, 9}, {53451, 10}, {57042, 11}, {58292, 10}, {59569, 11}, {62207, 12}, {63570, 10}, {69326, 11}, {72397, 10}, {73983, 11}, {80681, 10}, {84254, 11}, {91881, 12}, {93893, 11}, {98051, 10}, {102394, 11}, {116609, 12}, {127165, 11}, {147989, 12}, {161386, 11}, {164920, 12}, {168532, 11}, {175995, 12}, {196129, 11}, {204813, 12}, {228243, 13}, {243569, 12}, {248903, 13}, {254354, 12}, {259924, 11}, {265616, 12}, {359720, 13}, {392279, 12}, {456509, 13}, {466506, 14}, {508731, 13}, {519871, 12}, {566925, 13}, {579340, 12}, {592026, 13}, {674196, 12}, {688959, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 3}, {205, 4}, {210, 3}, {220, 4}, {225, 3}, {230, 4}, {272, 3}, {278, 4}, {404, 5}, {423, 4}, {443, 5}, {665, 4}, {680, 5}, {929, 6}, {1294, 5}, {1323, 6}, {1476, 5}, {1509, 6}, {1922, 4}, {1965, 2}, {2009, 3}, {2098, 4}, {2144, 5}, {2191, 6}, {2340, 4}, {2392, 2}, {2849, 3}, {2912, 4}, {2976, 5}, {3042, 6}, {3109, 4}, {3178, 5}, {3248, 6}, {3320, 7}, {3784, 8}, {3867, 7}, {4128, 8}, {4219, 9}, {4312, 8}, {4407, 6}, {4504, 7}, {4603, 8}, {4704, 9}, {4808, 8}, {4914, 7}, {5132, 8}, {5478, 7}, {5598, 8}, {5976, 7}, {6107, 8}, {6518, 7}, {6661, 5}, {6807, 6}, {6957, 5}, {7110, 4}, {7266, 5}, {7426, 6}, {7589, 4}, {7756, 2}, {7926, 3}, {8460, 4}, {8646, 5}, {8836, 4}, {9228, 5}, {9431, 6}, {9638, 7}, {9850, 8}, {10744, 9}, {10980, 8}, {11221, 9}, {11719, 10}, {11976, 8}, {12239, 6}, {12781, 4}, {13061, 5}, {13347, 4}, {13640, 5}, {13939, 6}, {14245, 5}, {14557, 6}, {14876, 4}, {15202, 5}, {15876, 6}, {16224, 7}, {17316, 8}, {18084, 7}, {18885, 8}, {19299, 9}, {19722, 8}, {20154, 9}, {21047, 7}, {22953, 8}, {23456, 9}, {25581, 10}, {26142, 9}, {26715, 10}, {27898, 8}, {28509, 9}, {29772, 10}, {32468, 8}, {33179, 9}, {34649, 10}, {37787, 9}, {38615, 10}, {39461, 9}, {41210, 10}, {45928, 11}, {47962, 10}, {52305, 9}, {53451, 10}, {57042, 11}, {59569, 10}, {60874, 11}, {62207, 12}, {63570, 10}, {66386, 11}, {69326, 10}, {70845, 9}, {72397, 10}, {73983, 11}, {75604, 10}, {77260, 11}, {78952, 10}, {84254, 11}, {86099, 10}, {87985, 11}, {91881, 10}, {93893, 11}, {104637, 10}, {106929, 11}, {111664, 10}, {114110, 11}, {116609, 12}, {119163, 10}, {121773, 11}, {124440, 12}, {127165, 11}, {157927, 12}, {161386, 11}, {168532, 12}, {172223, 11}, {175995, 12}, {196129, 11}, {228243, 12}, {243569, 13}, {248903, 12}, {259924, 11}, {283451, 12}, {289658, 11}, {296001, 12}, {337086, 11}, {344468, 12}, {392279, 11}, {400869, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 12}, {855595, 11}, {874331, 12}, {893477, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 3}, {215, 4}, {360, 2}, {368, 3}, {377, 4}, {404, 5}, {496, 4}, {507, 5}, {695, 6}, {711, 5}, {831, 6}, {850, 5}, {869, 6}, {1109, 5}, {1134, 6}, {1612, 4}, {1648, 5}, {1685, 6}, {1799, 7}, {1839, 6}, {1880, 7}, {1922, 6}, {1965, 7}, {2009, 8}, {2053, 6}, {2144, 7}, {2239, 6}, {2340, 7}, {2392, 6}, {2445, 7}, {2727, 6}, {2787, 7}, {2849, 6}, {2912, 7}, {3178, 6}, {3248, 7}, {3393, 6}, {3468, 4}, {3544, 5}, {3622, 4}, {3702, 5}, {3784, 4}, {3867, 5}, {3952, 6}, {4039, 4}, {4219, 5}, {4312, 6}, {4504, 4}, {4603, 3}, {4808, 4}, {4914, 3}, {5022, 4}, {5132, 5}, {5245, 6}, {5360, 4}, {5478, 3}, {5598, 2}, {5721, 3}, {5847, 4}, {5976, 5}, {6241, 6}, {6378, 5}, {6518, 6}, {6661, 7}, {6807, 5}, {6957, 6}, {7110, 7}, {7266, 6}, {7426, 7}, {7589, 8}, {7756, 7}, {7926, 8}, {8278, 7}, {8460, 6}, {8646, 7}, {8836, 6}, {9030, 5}, {9431, 4}, {9638, 5}, {9850, 6}, {10066, 5}, {10513, 6}, {10744, 7}, {10980, 8}, {11221, 9}, {12239, 7}, {12507, 6}, {13640, 7}, {14245, 8}, {14557, 9}, {15202, 7}, {16224, 8}, {16580, 9}, {16944, 8}, {17696, 9}, {18084, 7}, {18885, 8}, {19299, 9}, {19722, 8}, {21508, 9}, {22461, 10}, {24495, 8}, {25032, 9}, {25581, 10}, {26715, 9}, {27300, 10}, {27898, 9}, {29772, 10}, {30424, 8}, {32468, 9}, {33179, 10}, {33906, 8}, {34649, 9}, {35408, 10}, {36977, 11}, {37787, 10}, {40326, 9}, {42113, 10}, {43036, 9}, {43979, 10}, {44943, 11}, {45928, 9}, {46934, 10}, {50087, 11}, {52305, 10}, {53451, 11}, {55819, 10}, {57042, 11}, {59569, 9}, {60874, 10}, {62207, 11}, {63570, 9}, {64963, 10}, {66386, 11}, {67840, 10}, {70845, 11}, {73983, 9}, {75604, 10}, {77260, 11}, {78952, 12}, {80681, 10}, {82448, 11}, {89912, 10}, {93893, 11}, {104637, 10}, {109271, 11}, {114110, 12}, {127165, 11}, {129950, 10}, {132796, 11}, {135704, 12}, {138676, 11}, {151230, 12}, {164920, 11}, {172223, 12}, {196129, 11}, {209298, 12}, {228243, 13}, {233241, 12}, {238349, 13}, {243569, 12}, {248903, 13}, {254354, 12}, {337086, 13}, {344468, 12}, {352011, 13}, {392279, 12}, {456509, 13}, {466506, 12}, {476722, 13}, {497829, 14}, {508731, 13}, {519871, 12}, {566925, 13}, {579340, 12}, {592026, 13}, {659749, 12}, {688959, 13}, {801763, 12}, {819320, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1045, 2}, {1068, 1}, {1092, 2}, {1116, 4}, {1141, 1}, {1166, 4}, {1192, 2}, {1219, 1}, {1246, 3}, {1274, 1}, {1361, 2}, {1391, 1}, {1623, 3}, {1659, 1}, {1772, 2}, {1811, 1}, {2159, 4}, {2256, 1}, {2306, 2}, {2357, 1}, {2869, 4}, {3063, 1}, {3131, 2}, {3200, 4}, {3343, 2}, {3417, 1}, {3492, 2}, {3648, 4}, {3728, 5}, {3810, 6}, {3894, 4}, {3980, 3}, {4158, 2}, {4250, 4}, {4344, 2}, {4440, 4}, {4538, 5}, {4740, 4}, {4844, 6}, {4951, 4}, {5060, 3}, {5171, 2}, {5285, 3}, {5401, 6}, {5520, 3}, {5641, 1}, {5892, 2}, {6022, 4}, {6154, 3}, {6289, 2}, {6427, 4}, {6568, 3}, {6712, 2}, {6859, 4}, {7010, 2}, {7164, 4}, {7482, 1}, {7986, 2}, {8161, 4}, {8340, 2}, {8710, 5}, {9296, 6}, {9500, 3}, {9709, 1}, {10140, 3}, {10363, 1}, {11059, 4}, {11302, 1}, {11550, 4}, {11803, 2}, {12062, 4}, {12327, 3}, {12873, 1}, {14040, 4}, {14348, 2}, {14663, 1}, {15314, 3}, {15650, 1}, {15993, 2}, {16702, 1}, {17068, 2}, {17442, 1}, {19439, 3}, {19865, 1}, {20300, 2}, {20745, 1}, {26334, 3}, {26911, 1}, {32007, 2}, {33425, 1}, {34905, 2}, {35670, 1}, {36452, 3}, {37251, 4}, {38901, 1}, {40624, 3}, {41514, 1}, {42424, 3}, {43353, 1}, {46266, 2}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {57462, 4}, {61321, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {66873, 5}, {68338, 8}, {72928, 5}, {74525, 6}, {76157, 4}, {77825, 1}, {81272, 3}, {83052, 2}, {84871, 3}, {86730, 1}, {88630, 2}, {90571, 1}, {92555, 2}, {94582, 1}, {96654, 2}, {98771, 4}, {103145, 1}, {105404, 2}, {107713, 1}, {114947, 4}, {122667, 1}, {130905, 2}, {145881, 5}, {149076, 6}, {152341, 4}, {155677, 1}, {159086, 4}, {162570, 3}, {166130, 2}, {169768, 3}, {173486, 1}, {193333, 2}, {197567, 4}, {206315, 3}, {215450, 1}, {229917, 2}, {240097, 4}, {245355, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {279411, 9}, {285530, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {354596, 1}, {362361, 2}, {370296, 1}, {378405, 2}, {395159, 4}, {412655, 7}, {421691, 10}, {430925, 8}, {440362, 6}, {450005, 5}, {469929, 4}, {490736, 1}, {523686, 2}, {583592, 5}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 1}, {724743, 2}, {740613, 1}, {756831, 2}, {790340, 1}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 2}, {1022, 1}, {1092, 2}, {1116, 4}, {1141, 2}, {1166, 1}, {1219, 2}, {1274, 1}, {1331, 4}, {1361, 1}, {1422, 2}, {1454, 1}, {1486, 3}, {1519, 1}, {1588, 2}, {1659, 1}, {1934, 4}, {1977, 6}, {2066, 2}, {2112, 4}, {2207, 1}, {2357, 4}, {2409, 3}, {2462, 4}, {2516, 3}, {2572, 2}, {2746, 3}, {2807, 2}, {2869, 5}, {2932, 2}, {2997, 3}, {3063, 1}, {3131, 4}, {3200, 5}, {3271, 4}, {3417, 2}, {3492, 3}, {3648, 2}, {3728, 5}, {3894, 4}, {4158, 2}, {4250, 4}, {4344, 2}, {4440, 3}, {4538, 2}, {4740, 3}, {4844, 1}, {4951, 2}, {5060, 3}, {5171, 2}, {5285, 1}, {5641, 3}, {5765, 6}, {5892, 5}, {6022, 6}, {6289, 4}, {6427, 6}, {6568, 3}, {6712, 4}, {6859, 3}, {7010, 4}, {7321, 2}, {7482, 1}, {7646, 4}, {7814, 3}, {8161, 5}, {8340, 6}, {8523, 5}, {8710, 2}, {8901, 4}, {9096, 2}, {9296, 1}, {9500, 4}, {9922, 1}, {10140, 4}, {10363, 6}, {10822, 7}, {11059, 10}, {11302, 6}, {11550, 8}, {11803, 9}, {12062, 5}, {12327, 8}, {12597, 7}, {12873, 3}, {13155, 2}, {13444, 3}, {14040, 6}, {14348, 8}, {14985, 6}, {15314, 5}, {15650, 6}, {15993, 3}, {16344, 1}, {16702, 3}, {17068, 4}, {17442, 6}, {17824, 8}, {18215, 5}, {18614, 2}, {19022, 4}, {19439, 1}, {20300, 2}, {21200, 5}, {21665, 1}, {22140, 2}, {23121, 1}, {23628, 2}, {24146, 1}, {24675, 4}, {25216, 2}, {25769, 1}, {26334, 4}, {26911, 5}, {27501, 1}, {28104, 4}, {28720, 1}, {29349, 2}, {29992, 1}, {30649, 4}, {31321, 2}, {32007, 4}, {32708, 2}, {35670, 1}, {36452, 4}, {37251, 1}, {38901, 3}, {39753, 1}, {40624, 2}, {42424, 1}, {47280, 4}, {49374, 1}, {50456, 4}, {51561, 3}, {53845, 1}, {57462, 3}, {58721, 4}, {60007, 3}, {61321, 1}, {62664, 2}, {66873, 5}, {68338, 2}, {69835, 1}, {71365, 2}, {72928, 4}, {74525, 6}, {76157, 4}, {77825, 1}, {79530, 4}, {81272, 2}, {83052, 5}, {84871, 3}, {86730, 4}, {88630, 3}, {90571, 6}, {92555, 8}, {100934, 4}, {103145, 6}, {105404, 8}, {107713, 5}, {110072, 1}, {114947, 2}, {117465, 4}, {122667, 3}, {125354, 1}, {130905, 2}, {142755, 5}, {149076, 6}, {152341, 4}, {162570, 3}, {173486, 2}, {189190, 1}, {193333, 2}, {197567, 3}, {201894, 4}, {206315, 3}, {215450, 6}, {224990, 2}, {229917, 5}, {234952, 4}, {245355, 1}, {261830, 4}, {267564, 7}, {273423, 9}, {279411, 12}, {285530, 8}, {291783, 7}, {298173, 6}, {304703, 4}, {311376, 1}, {325163, 3}, {346997, 2}, {354596, 1}, {362361, 2}, {370296, 1}, {378405, 2}, {395159, 4}, {403812, 7}, {421691, 8}, {440362, 6}, {450005, 5}, {469929, 4}, {490736, 1}, {523686, 2}, {583592, 4}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 2}, {709213, 1}, {724743, 2}, {740613, 1}, {756831, 2}, {790340, 1}, {MP_SIZE_T_MAX,0}}
