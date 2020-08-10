#include "bitonic32Dec.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bitonic32Dec::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_pp0_stage0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
            ap_enable_reg_pp0_iter0_reg = ap_start.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage8_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        a_0_V_reg_4878 = a_0_V_fu_276_p3.read();
        a_10_V_reg_5004 = a_10_V_fu_504_p3.read();
        a_11_V_reg_4998 = a_11_V_fu_496_p3.read();
        a_12_V_reg_4914 = a_12_V_fu_342_p3.read();
        a_13_V_reg_4920 = a_13_V_fu_350_p3.read();
        a_14_V_reg_5016 = a_14_V_fu_526_p3.read();
        a_15_V_reg_5010 = a_15_V_fu_518_p3.read();
        a_16_V_reg_4926 = a_16_V_fu_364_p3.read();
        a_17_V_reg_4932 = a_17_V_fu_372_p3.read();
        a_18_V_reg_5028 = a_18_V_fu_548_p3.read();
        a_19_V_reg_5022 = a_19_V_fu_540_p3.read();
        a_1_V_reg_4884 = a_1_V_fu_284_p3.read();
        a_20_V_reg_4938 = a_20_V_fu_386_p3.read();
        a_21_V_reg_4944 = a_21_V_fu_394_p3.read();
        a_22_V_reg_5040 = a_22_V_fu_570_p3.read();
        a_23_V_reg_5034 = a_23_V_fu_562_p3.read();
        a_24_V_reg_4950 = a_24_V_fu_408_p3.read();
        a_25_V_reg_4956 = a_25_V_fu_416_p3.read();
        a_26_V_reg_5052 = a_26_V_fu_592_p3.read();
        a_27_V_reg_5046 = a_27_V_fu_584_p3.read();
        a_28_V_reg_4962 = a_28_V_fu_430_p3.read();
        a_29_V_reg_4968 = a_29_V_fu_438_p3.read();
        a_2_V_reg_4980 = a_2_V_fu_460_p3.read();
        a_30_V_reg_5064 = a_30_V_fu_614_p3.read();
        a_31_V_reg_5058 = a_31_V_fu_606_p3.read();
        a_3_V_reg_4974 = a_3_V_fu_452_p3.read();
        a_4_V_reg_4890 = a_4_V_fu_298_p3.read();
        a_5_V_reg_4896 = a_5_V_fu_306_p3.read();
        a_6_V_reg_4992 = a_6_V_fu_482_p3.read();
        a_7_V_reg_4986 = a_7_V_fu_474_p3.read();
        a_8_V_reg_4902 = a_8_V_fu_320_p3.read();
        a_9_V_reg_4908 = a_9_V_fu_328_p3.read();
        icmp_ln895_416_reg_5070 = icmp_ln895_416_fu_622_p2.read();
        icmp_ln895_417_reg_5076 = icmp_ln895_417_fu_628_p2.read();
        icmp_ln895_418_reg_5082 = icmp_ln895_418_fu_634_p2.read();
        icmp_ln895_419_reg_5088 = icmp_ln895_419_fu_640_p2.read();
        icmp_ln895_420_reg_5094 = icmp_ln895_420_fu_646_p2.read();
        icmp_ln895_421_reg_5100 = icmp_ln895_421_fu_652_p2.read();
        icmp_ln895_422_reg_5106 = icmp_ln895_422_fu_658_p2.read();
        icmp_ln895_423_reg_5112 = icmp_ln895_423_fu_664_p2.read();
        icmp_ln895_424_reg_5118 = icmp_ln895_424_fu_670_p2.read();
        icmp_ln895_425_reg_5124 = icmp_ln895_425_fu_676_p2.read();
        icmp_ln895_426_reg_5130 = icmp_ln895_426_fu_682_p2.read();
        icmp_ln895_427_reg_5136 = icmp_ln895_427_fu_688_p2.read();
        icmp_ln895_428_reg_5142 = icmp_ln895_428_fu_694_p2.read();
        icmp_ln895_429_reg_5148 = icmp_ln895_429_fu_700_p2.read();
        icmp_ln895_430_reg_5154 = icmp_ln895_430_fu_706_p2.read();
        icmp_ln895_431_reg_5160 = icmp_ln895_431_fu_712_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        c_0_V_reg_5166 = c_0_V_fu_884_p3.read();
        c_10_V_reg_5208 = c_10_V_fu_950_p3.read();
        c_11_V_reg_5215 = c_11_V_fu_958_p3.read();
        c_12_V_reg_5313 = c_12_V_fu_1112_p3.read();
        c_13_V_reg_5306 = c_13_V_fu_1104_p3.read();
        c_14_V_reg_5327 = c_14_V_fu_1134_p3.read();
        c_15_V_reg_5320 = c_15_V_fu_1126_p3.read();
        c_16_V_reg_5222 = c_16_V_fu_972_p3.read();
        c_17_V_reg_5229 = c_17_V_fu_980_p3.read();
        c_18_V_reg_5236 = c_18_V_fu_994_p3.read();
        c_19_V_reg_5243 = c_19_V_fu_1002_p3.read();
        c_1_V_reg_5173 = c_1_V_fu_892_p3.read();
        c_20_V_reg_5341 = c_20_V_fu_1156_p3.read();
        c_21_V_reg_5334 = c_21_V_fu_1148_p3.read();
        c_22_V_reg_5355 = c_22_V_fu_1178_p3.read();
        c_23_V_reg_5348 = c_23_V_fu_1170_p3.read();
        c_24_V_reg_5250 = c_24_V_fu_1016_p3.read();
        c_25_V_reg_5257 = c_25_V_fu_1024_p3.read();
        c_26_V_reg_5264 = c_26_V_fu_1038_p3.read();
        c_27_V_reg_5271 = c_27_V_fu_1046_p3.read();
        c_28_V_reg_5369 = c_28_V_fu_1200_p3.read();
        c_29_V_reg_5362 = c_29_V_fu_1192_p3.read();
        c_2_V_reg_5180 = c_2_V_fu_906_p3.read();
        c_30_V_reg_5383 = c_30_V_fu_1222_p3.read();
        c_31_V_reg_5376 = c_31_V_fu_1214_p3.read();
        c_3_V_reg_5187 = c_3_V_fu_914_p3.read();
        c_4_V_reg_5285 = c_4_V_fu_1068_p3.read();
        c_5_V_reg_5278 = c_5_V_fu_1060_p3.read();
        c_6_V_reg_5299 = c_6_V_fu_1090_p3.read();
        c_7_V_reg_5292 = c_7_V_fu_1082_p3.read();
        c_8_V_reg_5194 = c_8_V_fu_928_p3.read();
        c_9_V_reg_5201 = c_9_V_fu_936_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        d_0_V_reg_5390 = d_0_V_fu_1234_p3.read();
        d_10_V_reg_5468 = d_10_V_fu_1336_p3.read();
        d_11_V_reg_5480 = d_11_V_fu_1352_p3.read();
        d_12_V_reg_5438 = d_12_V_fu_1298_p3.read();
        d_13_V_reg_5450 = d_13_V_fu_1314_p3.read();
        d_14_V_reg_5462 = d_14_V_fu_1330_p3.read();
        d_15_V_reg_5474 = d_15_V_fu_1346_p3.read();
        d_16_V_reg_5486 = d_16_V_fu_1362_p3.read();
        d_17_V_reg_5498 = d_17_V_fu_1378_p3.read();
        d_18_V_reg_5510 = d_18_V_fu_1394_p3.read();
        d_19_V_reg_5522 = d_19_V_fu_1410_p3.read();
        d_1_V_reg_5402 = d_1_V_fu_1250_p3.read();
        d_20_V_reg_5492 = d_20_V_fu_1368_p3.read();
        d_21_V_reg_5504 = d_21_V_fu_1384_p3.read();
        d_22_V_reg_5516 = d_22_V_fu_1400_p3.read();
        d_23_V_reg_5528 = d_23_V_fu_1416_p3.read();
        d_24_V_reg_5540 = d_24_V_fu_1432_p3.read();
        d_25_V_reg_5552 = d_25_V_fu_1448_p3.read();
        d_26_V_reg_5564 = d_26_V_fu_1464_p3.read();
        d_27_V_reg_5576 = d_27_V_fu_1480_p3.read();
        d_28_V_reg_5534 = d_28_V_fu_1426_p3.read();
        d_29_V_reg_5546 = d_29_V_fu_1442_p3.read();
        d_2_V_reg_5414 = d_2_V_fu_1266_p3.read();
        d_30_V_reg_5558 = d_30_V_fu_1458_p3.read();
        d_31_V_reg_5570 = d_31_V_fu_1474_p3.read();
        d_3_V_reg_5426 = d_3_V_fu_1282_p3.read();
        d_4_V_reg_5396 = d_4_V_fu_1240_p3.read();
        d_5_V_reg_5408 = d_5_V_fu_1256_p3.read();
        d_6_V_reg_5420 = d_6_V_fu_1272_p3.read();
        d_7_V_reg_5432 = d_7_V_fu_1288_p3.read();
        d_8_V_reg_5444 = d_8_V_fu_1304_p3.read();
        d_9_V_reg_5456 = d_9_V_fu_1320_p3.read();
        icmp_ln895_464_reg_5582 = icmp_ln895_464_fu_1486_p2.read();
        icmp_ln895_465_reg_5588 = icmp_ln895_465_fu_1492_p2.read();
        icmp_ln895_466_reg_5594 = icmp_ln895_466_fu_1498_p2.read();
        icmp_ln895_467_reg_5600 = icmp_ln895_467_fu_1504_p2.read();
        icmp_ln895_468_reg_5606 = icmp_ln895_468_fu_1510_p2.read();
        icmp_ln895_469_reg_5612 = icmp_ln895_469_fu_1516_p2.read();
        icmp_ln895_470_reg_5618 = icmp_ln895_470_fu_1522_p2.read();
        icmp_ln895_471_reg_5624 = icmp_ln895_471_fu_1528_p2.read();
        icmp_ln895_472_reg_5630 = icmp_ln895_472_fu_1534_p2.read();
        icmp_ln895_473_reg_5636 = icmp_ln895_473_fu_1540_p2.read();
        icmp_ln895_474_reg_5642 = icmp_ln895_474_fu_1546_p2.read();
        icmp_ln895_475_reg_5648 = icmp_ln895_475_fu_1552_p2.read();
        icmp_ln895_476_reg_5654 = icmp_ln895_476_fu_1558_p2.read();
        icmp_ln895_477_reg_5660 = icmp_ln895_477_fu_1564_p2.read();
        icmp_ln895_478_reg_5666 = icmp_ln895_478_fu_1570_p2.read();
        icmp_ln895_479_reg_5672 = icmp_ln895_479_fu_1576_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        f_0_V_reg_5678 = f_0_V_fu_1748_p3.read();
        f_10_V_reg_5755 = f_10_V_fu_1866_p3.read();
        f_11_V_reg_5748 = f_11_V_fu_1858_p3.read();
        f_12_V_reg_5769 = f_12_V_fu_1888_p3.read();
        f_13_V_reg_5762 = f_13_V_fu_1880_p3.read();
        f_14_V_reg_5783 = f_14_V_fu_1910_p3.read();
        f_15_V_reg_5776 = f_15_V_fu_1902_p3.read();
        f_16_V_reg_5790 = f_16_V_fu_1924_p3.read();
        f_17_V_reg_5797 = f_17_V_fu_1932_p3.read();
        f_18_V_reg_5804 = f_18_V_fu_1946_p3.read();
        f_19_V_reg_5811 = f_19_V_fu_1954_p3.read();
        f_1_V_reg_5685 = f_1_V_fu_1756_p3.read();
        f_20_V_reg_5818 = f_20_V_fu_1968_p3.read();
        f_21_V_reg_5825 = f_21_V_fu_1976_p3.read();
        f_22_V_reg_5832 = f_22_V_fu_1990_p3.read();
        f_23_V_reg_5839 = f_23_V_fu_1998_p3.read();
        f_24_V_reg_5853 = f_24_V_fu_2020_p3.read();
        f_25_V_reg_5846 = f_25_V_fu_2012_p3.read();
        f_26_V_reg_5867 = f_26_V_fu_2042_p3.read();
        f_27_V_reg_5860 = f_27_V_fu_2034_p3.read();
        f_28_V_reg_5881 = f_28_V_fu_2064_p3.read();
        f_29_V_reg_5874 = f_29_V_fu_2056_p3.read();
        f_2_V_reg_5692 = f_2_V_fu_1770_p3.read();
        f_30_V_reg_5895 = f_30_V_fu_2086_p3.read();
        f_31_V_reg_5888 = f_31_V_fu_2078_p3.read();
        f_3_V_reg_5699 = f_3_V_fu_1778_p3.read();
        f_4_V_reg_5706 = f_4_V_fu_1792_p3.read();
        f_5_V_reg_5713 = f_5_V_fu_1800_p3.read();
        f_6_V_reg_5720 = f_6_V_fu_1814_p3.read();
        f_7_V_reg_5727 = f_7_V_fu_1822_p3.read();
        f_8_V_reg_5741 = f_8_V_fu_1844_p3.read();
        f_9_V_reg_5734 = f_9_V_fu_1836_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        g_0_V_reg_5902 = g_0_V_fu_2098_p3.read();
        g_10_V_reg_5932 = g_10_V_fu_2136_p3.read();
        g_11_V_reg_5944 = g_11_V_fu_2152_p3.read();
        g_12_V_reg_5956 = g_12_V_fu_2168_p3.read();
        g_13_V_reg_5968 = g_13_V_fu_2184_p3.read();
        g_14_V_reg_5980 = g_14_V_fu_2200_p3.read();
        g_15_V_reg_5992 = g_15_V_fu_2216_p3.read();
        g_16_V_reg_6004 = g_16_V_fu_2232_p3.read();
        g_17_V_reg_6016 = g_17_V_fu_2248_p3.read();
        g_18_V_reg_6028 = g_18_V_fu_2264_p3.read();
        g_19_V_reg_6040 = g_19_V_fu_2280_p3.read();
        g_1_V_reg_5914 = g_1_V_fu_2114_p3.read();
        g_20_V_reg_6052 = g_20_V_fu_2296_p3.read();
        g_21_V_reg_6064 = g_21_V_fu_2312_p3.read();
        g_22_V_reg_6076 = g_22_V_fu_2328_p3.read();
        g_23_V_reg_6088 = g_23_V_fu_2344_p3.read();
        g_24_V_reg_5998 = g_24_V_fu_2226_p3.read();
        g_25_V_reg_6010 = g_25_V_fu_2242_p3.read();
        g_26_V_reg_6022 = g_26_V_fu_2258_p3.read();
        g_27_V_reg_6034 = g_27_V_fu_2274_p3.read();
        g_28_V_reg_6046 = g_28_V_fu_2290_p3.read();
        g_29_V_reg_6058 = g_29_V_fu_2306_p3.read();
        g_2_V_reg_5926 = g_2_V_fu_2130_p3.read();
        g_30_V_reg_6070 = g_30_V_fu_2322_p3.read();
        g_31_V_reg_6082 = g_31_V_fu_2338_p3.read();
        g_3_V_reg_5938 = g_3_V_fu_2146_p3.read();
        g_4_V_reg_5950 = g_4_V_fu_2162_p3.read();
        g_5_V_reg_5962 = g_5_V_fu_2178_p3.read();
        g_6_V_reg_5974 = g_6_V_fu_2194_p3.read();
        g_7_V_reg_5986 = g_7_V_fu_2210_p3.read();
        g_8_V_reg_5908 = g_8_V_fu_2104_p3.read();
        g_9_V_reg_5920 = g_9_V_fu_2120_p3.read();
        icmp_ln895_496_reg_6094 = icmp_ln895_496_fu_2350_p2.read();
        icmp_ln895_497_reg_6100 = icmp_ln895_497_fu_2356_p2.read();
        icmp_ln895_498_reg_6106 = icmp_ln895_498_fu_2362_p2.read();
        icmp_ln895_499_reg_6112 = icmp_ln895_499_fu_2368_p2.read();
        icmp_ln895_500_reg_6118 = icmp_ln895_500_fu_2374_p2.read();
        icmp_ln895_501_reg_6124 = icmp_ln895_501_fu_2380_p2.read();
        icmp_ln895_502_reg_6130 = icmp_ln895_502_fu_2386_p2.read();
        icmp_ln895_503_reg_6136 = icmp_ln895_503_fu_2392_p2.read();
        icmp_ln895_504_reg_6142 = icmp_ln895_504_fu_2398_p2.read();
        icmp_ln895_505_reg_6148 = icmp_ln895_505_fu_2404_p2.read();
        icmp_ln895_506_reg_6154 = icmp_ln895_506_fu_2410_p2.read();
        icmp_ln895_507_reg_6160 = icmp_ln895_507_fu_2416_p2.read();
        icmp_ln895_508_reg_6166 = icmp_ln895_508_fu_2422_p2.read();
        icmp_ln895_509_reg_6172 = icmp_ln895_509_fu_2428_p2.read();
        icmp_ln895_510_reg_6178 = icmp_ln895_510_fu_2434_p2.read();
        icmp_ln895_511_reg_6184 = icmp_ln895_511_fu_2440_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage6_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_544_reg_6606 = icmp_ln895_544_fu_3214_p2.read();
        icmp_ln895_545_reg_6612 = icmp_ln895_545_fu_3220_p2.read();
        icmp_ln895_546_reg_6618 = icmp_ln895_546_fu_3226_p2.read();
        icmp_ln895_547_reg_6624 = icmp_ln895_547_fu_3232_p2.read();
        icmp_ln895_548_reg_6630 = icmp_ln895_548_fu_3238_p2.read();
        icmp_ln895_549_reg_6636 = icmp_ln895_549_fu_3244_p2.read();
        icmp_ln895_550_reg_6642 = icmp_ln895_550_fu_3250_p2.read();
        icmp_ln895_551_reg_6648 = icmp_ln895_551_fu_3256_p2.read();
        icmp_ln895_552_reg_6654 = icmp_ln895_552_fu_3262_p2.read();
        icmp_ln895_553_reg_6660 = icmp_ln895_553_fu_3268_p2.read();
        icmp_ln895_554_reg_6666 = icmp_ln895_554_fu_3274_p2.read();
        icmp_ln895_555_reg_6672 = icmp_ln895_555_fu_3280_p2.read();
        icmp_ln895_556_reg_6678 = icmp_ln895_556_fu_3286_p2.read();
        icmp_ln895_557_reg_6684 = icmp_ln895_557_fu_3292_p2.read();
        icmp_ln895_558_reg_6690 = icmp_ln895_558_fu_3298_p2.read();
        icmp_ln895_559_reg_6696 = icmp_ln895_559_fu_3304_p2.read();
        m_0_V_reg_6414 = m_0_V_fu_2962_p3.read();
        m_10_V_reg_6474 = m_10_V_fu_3042_p3.read();
        m_11_V_reg_6480 = m_11_V_fu_3048_p3.read();
        m_12_V_reg_6486 = m_12_V_fu_3058_p3.read();
        m_13_V_reg_6492 = m_13_V_fu_3064_p3.read();
        m_14_V_reg_6498 = m_14_V_fu_3074_p3.read();
        m_15_V_reg_6504 = m_15_V_fu_3080_p3.read();
        m_16_V_reg_6516 = m_16_V_fu_3096_p3.read();
        m_17_V_reg_6510 = m_17_V_fu_3090_p3.read();
        m_18_V_reg_6528 = m_18_V_fu_3112_p3.read();
        m_19_V_reg_6522 = m_19_V_fu_3106_p3.read();
        m_1_V_reg_6420 = m_1_V_fu_2968_p3.read();
        m_20_V_reg_6540 = m_20_V_fu_3128_p3.read();
        m_21_V_reg_6534 = m_21_V_fu_3122_p3.read();
        m_22_V_reg_6552 = m_22_V_fu_3144_p3.read();
        m_23_V_reg_6546 = m_23_V_fu_3138_p3.read();
        m_24_V_reg_6564 = m_24_V_fu_3160_p3.read();
        m_25_V_reg_6558 = m_25_V_fu_3154_p3.read();
        m_26_V_reg_6576 = m_26_V_fu_3176_p3.read();
        m_27_V_reg_6570 = m_27_V_fu_3170_p3.read();
        m_28_V_reg_6588 = m_28_V_fu_3192_p3.read();
        m_29_V_reg_6582 = m_29_V_fu_3186_p3.read();
        m_2_V_reg_6426 = m_2_V_fu_2978_p3.read();
        m_30_V_reg_6600 = m_30_V_fu_3208_p3.read();
        m_31_V_reg_6594 = m_31_V_fu_3202_p3.read();
        m_3_V_reg_6432 = m_3_V_fu_2984_p3.read();
        m_4_V_reg_6438 = m_4_V_fu_2994_p3.read();
        m_5_V_reg_6444 = m_5_V_fu_3000_p3.read();
        m_6_V_reg_6450 = m_6_V_fu_3010_p3.read();
        m_7_V_reg_6456 = m_7_V_fu_3016_p3.read();
        m_8_V_reg_6462 = m_8_V_fu_3026_p3.read();
        m_9_V_reg_6468 = m_9_V_fu_3032_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_592_reg_7118 = icmp_ln895_592_fu_4078_p2.read();
        icmp_ln895_593_reg_7124 = icmp_ln895_593_fu_4084_p2.read();
        icmp_ln895_594_reg_7130 = icmp_ln895_594_fu_4090_p2.read();
        icmp_ln895_595_reg_7136 = icmp_ln895_595_fu_4096_p2.read();
        icmp_ln895_596_reg_7142 = icmp_ln895_596_fu_4102_p2.read();
        icmp_ln895_597_reg_7148 = icmp_ln895_597_fu_4108_p2.read();
        icmp_ln895_598_reg_7154 = icmp_ln895_598_fu_4114_p2.read();
        icmp_ln895_599_reg_7160 = icmp_ln895_599_fu_4120_p2.read();
        icmp_ln895_600_reg_7166 = icmp_ln895_600_fu_4126_p2.read();
        icmp_ln895_601_reg_7172 = icmp_ln895_601_fu_4132_p2.read();
        icmp_ln895_602_reg_7178 = icmp_ln895_602_fu_4138_p2.read();
        icmp_ln895_603_reg_7184 = icmp_ln895_603_fu_4144_p2.read();
        icmp_ln895_604_reg_7190 = icmp_ln895_604_fu_4150_p2.read();
        icmp_ln895_605_reg_7196 = icmp_ln895_605_fu_4156_p2.read();
        icmp_ln895_606_reg_7202 = icmp_ln895_606_fu_4162_p2.read();
        icmp_ln895_607_reg_7208 = icmp_ln895_607_fu_4168_p2.read();
        p_0_V_reg_6926 = p_0_V_fu_3826_p3.read();
        p_10_V_reg_6998 = p_10_V_fu_3922_p3.read();
        p_11_V_reg_7010 = p_11_V_fu_3938_p3.read();
        p_12_V_reg_6980 = p_12_V_fu_3896_p3.read();
        p_13_V_reg_6992 = p_13_V_fu_3912_p3.read();
        p_14_V_reg_7004 = p_14_V_fu_3928_p3.read();
        p_15_V_reg_7016 = p_15_V_fu_3944_p3.read();
        p_16_V_reg_7022 = p_16_V_fu_3954_p3.read();
        p_17_V_reg_7034 = p_17_V_fu_3970_p3.read();
        p_18_V_reg_7046 = p_18_V_fu_3986_p3.read();
        p_19_V_reg_7058 = p_19_V_fu_4002_p3.read();
        p_1_V_reg_6938 = p_1_V_fu_3842_p3.read();
        p_20_V_reg_7028 = p_20_V_fu_3960_p3.read();
        p_21_V_reg_7040 = p_21_V_fu_3976_p3.read();
        p_22_V_reg_7052 = p_22_V_fu_3992_p3.read();
        p_23_V_reg_7064 = p_23_V_fu_4008_p3.read();
        p_24_V_reg_7070 = p_24_V_fu_4018_p3.read();
        p_25_V_reg_7082 = p_25_V_fu_4034_p3.read();
        p_26_V_reg_7094 = p_26_V_fu_4050_p3.read();
        p_27_V_reg_7106 = p_27_V_fu_4066_p3.read();
        p_28_V_reg_7076 = p_28_V_fu_4024_p3.read();
        p_29_V_reg_7088 = p_29_V_fu_4040_p3.read();
        p_2_V_reg_6950 = p_2_V_fu_3858_p3.read();
        p_30_V_reg_7100 = p_30_V_fu_4056_p3.read();
        p_31_V_reg_7112 = p_31_V_fu_4072_p3.read();
        p_3_V_reg_6962 = p_3_V_fu_3874_p3.read();
        p_4_V_reg_6932 = p_4_V_fu_3832_p3.read();
        p_5_V_reg_6944 = p_5_V_fu_3848_p3.read();
        p_6_V_reg_6956 = p_6_V_fu_3864_p3.read();
        p_7_V_reg_6968 = p_7_V_fu_3880_p3.read();
        p_8_V_reg_6974 = p_8_V_fu_3890_p3.read();
        p_9_V_reg_6986 = p_9_V_fu_3906_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage5_11001.read(), ap_const_boolean_0))) {
        l_0_V_reg_6190 = l_0_V_fu_2612_p3.read();
        l_10_V_reg_6253 = l_10_V_fu_2708_p3.read();
        l_11_V_reg_6267 = l_11_V_fu_2730_p3.read();
        l_12_V_reg_6274 = l_12_V_fu_2744_p3.read();
        l_13_V_reg_6288 = l_13_V_fu_2766_p3.read();
        l_14_V_reg_6281 = l_14_V_fu_2752_p3.read();
        l_15_V_reg_6295 = l_15_V_fu_2774_p3.read();
        l_16_V_reg_6309 = l_16_V_fu_2796_p3.read();
        l_17_V_reg_6323 = l_17_V_fu_2818_p3.read();
        l_18_V_reg_6302 = l_18_V_fu_2788_p3.read();
        l_19_V_reg_6316 = l_19_V_fu_2810_p3.read();
        l_1_V_reg_6204 = l_1_V_fu_2634_p3.read();
        l_20_V_reg_6337 = l_20_V_fu_2840_p3.read();
        l_21_V_reg_6351 = l_21_V_fu_2862_p3.read();
        l_22_V_reg_6330 = l_22_V_fu_2832_p3.read();
        l_23_V_reg_6344 = l_23_V_fu_2854_p3.read();
        l_24_V_reg_6365 = l_24_V_fu_2884_p3.read();
        l_25_V_reg_6379 = l_25_V_fu_2906_p3.read();
        l_26_V_reg_6358 = l_26_V_fu_2876_p3.read();
        l_27_V_reg_6372 = l_27_V_fu_2898_p3.read();
        l_28_V_reg_6393 = l_28_V_fu_2928_p3.read();
        l_29_V_reg_6407 = l_29_V_fu_2950_p3.read();
        l_2_V_reg_6197 = l_2_V_fu_2620_p3.read();
        l_30_V_reg_6386 = l_30_V_fu_2920_p3.read();
        l_31_V_reg_6400 = l_31_V_fu_2942_p3.read();
        l_3_V_reg_6211 = l_3_V_fu_2642_p3.read();
        l_4_V_reg_6218 = l_4_V_fu_2656_p3.read();
        l_5_V_reg_6232 = l_5_V_fu_2678_p3.read();
        l_6_V_reg_6225 = l_6_V_fu_2664_p3.read();
        l_7_V_reg_6239 = l_7_V_fu_2686_p3.read();
        l_8_V_reg_6246 = l_8_V_fu_2700_p3.read();
        l_9_V_reg_6260 = l_9_V_fu_2722_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage7_11001.read(), ap_const_boolean_0))) {
        o_0_V_reg_6702 = o_0_V_fu_3476_p3.read();
        o_10_V_reg_6737 = o_10_V_fu_3528_p3.read();
        o_11_V_reg_6751 = o_11_V_fu_3550_p3.read();
        o_12_V_reg_6765 = o_12_V_fu_3572_p3.read();
        o_13_V_reg_6779 = o_13_V_fu_3594_p3.read();
        o_14_V_reg_6793 = o_14_V_fu_3616_p3.read();
        o_15_V_reg_6807 = o_15_V_fu_3638_p3.read();
        o_16_V_reg_6814 = o_16_V_fu_3652_p3.read();
        o_17_V_reg_6828 = o_17_V_fu_3674_p3.read();
        o_18_V_reg_6842 = o_18_V_fu_3696_p3.read();
        o_19_V_reg_6856 = o_19_V_fu_3718_p3.read();
        o_1_V_reg_6716 = o_1_V_fu_3498_p3.read();
        o_20_V_reg_6870 = o_20_V_fu_3740_p3.read();
        o_21_V_reg_6884 = o_21_V_fu_3762_p3.read();
        o_22_V_reg_6898 = o_22_V_fu_3784_p3.read();
        o_23_V_reg_6912 = o_23_V_fu_3806_p3.read();
        o_24_V_reg_6821 = o_24_V_fu_3660_p3.read();
        o_25_V_reg_6835 = o_25_V_fu_3682_p3.read();
        o_26_V_reg_6849 = o_26_V_fu_3704_p3.read();
        o_27_V_reg_6863 = o_27_V_fu_3726_p3.read();
        o_28_V_reg_6877 = o_28_V_fu_3748_p3.read();
        o_29_V_reg_6891 = o_29_V_fu_3770_p3.read();
        o_2_V_reg_6730 = o_2_V_fu_3520_p3.read();
        o_30_V_reg_6905 = o_30_V_fu_3792_p3.read();
        o_31_V_reg_6919 = o_31_V_fu_3814_p3.read();
        o_3_V_reg_6744 = o_3_V_fu_3542_p3.read();
        o_4_V_reg_6758 = o_4_V_fu_3564_p3.read();
        o_5_V_reg_6772 = o_5_V_fu_3586_p3.read();
        o_6_V_reg_6786 = o_6_V_fu_3608_p3.read();
        o_7_V_reg_6800 = o_7_V_fu_3630_p3.read();
        o_8_V_reg_6709 = o_8_V_fu_3484_p3.read();
        o_9_V_reg_6723 = o_9_V_fu_3506_p3.read();
    }
}

void bitonic32Dec::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 2 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 16 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            }
            break;
        case 32 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage5_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            }
            break;
        case 64 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage6_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage6;
            }
            break;
        case 128 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage7_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage7;
            }
            break;
        case 256 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage8_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage8;
            }
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXX";
            break;
    }
}

}

