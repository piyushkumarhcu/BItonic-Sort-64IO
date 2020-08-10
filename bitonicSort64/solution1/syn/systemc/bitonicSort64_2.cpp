#include "bitonicSort64.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bitonicSort64::thread_ap_clk_no_reset_() {
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
        } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                    esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_128_reg_6880 = icmp_ln895_128_fu_3744_p2.read();
        icmp_ln895_129_reg_6886 = icmp_ln895_129_fu_3750_p2.read();
        icmp_ln895_130_reg_6892 = icmp_ln895_130_fu_3756_p2.read();
        icmp_ln895_131_reg_6898 = icmp_ln895_131_fu_3762_p2.read();
        icmp_ln895_132_reg_6904 = icmp_ln895_132_fu_3768_p2.read();
        icmp_ln895_133_reg_6910 = icmp_ln895_133_fu_3774_p2.read();
        icmp_ln895_134_reg_6916 = icmp_ln895_134_fu_3780_p2.read();
        icmp_ln895_135_reg_6922 = icmp_ln895_135_fu_3786_p2.read();
        icmp_ln895_136_reg_6928 = icmp_ln895_136_fu_3792_p2.read();
        icmp_ln895_137_reg_6934 = icmp_ln895_137_fu_3798_p2.read();
        icmp_ln895_138_reg_6940 = icmp_ln895_138_fu_3804_p2.read();
        icmp_ln895_139_reg_6946 = icmp_ln895_139_fu_3810_p2.read();
        icmp_ln895_140_reg_6952 = icmp_ln895_140_fu_3816_p2.read();
        icmp_ln895_141_reg_6958 = icmp_ln895_141_fu_3822_p2.read();
        icmp_ln895_142_reg_6964 = icmp_ln895_142_fu_3828_p2.read();
        icmp_ln895_143_reg_6970 = icmp_ln895_143_fu_3834_p2.read();
        icmp_ln895_144_reg_6976 = icmp_ln895_144_fu_3840_p2.read();
        icmp_ln895_145_reg_6982 = icmp_ln895_145_fu_3846_p2.read();
        icmp_ln895_146_reg_6988 = icmp_ln895_146_fu_3852_p2.read();
        icmp_ln895_147_reg_6994 = icmp_ln895_147_fu_3858_p2.read();
        icmp_ln895_148_reg_7000 = icmp_ln895_148_fu_3864_p2.read();
        icmp_ln895_149_reg_7006 = icmp_ln895_149_fu_3870_p2.read();
        icmp_ln895_150_reg_7012 = icmp_ln895_150_fu_3876_p2.read();
        icmp_ln895_151_reg_7018 = icmp_ln895_151_fu_3882_p2.read();
        icmp_ln895_152_reg_7024 = icmp_ln895_152_fu_3888_p2.read();
        icmp_ln895_153_reg_7030 = icmp_ln895_153_fu_3894_p2.read();
        icmp_ln895_154_reg_7036 = icmp_ln895_154_fu_3900_p2.read();
        icmp_ln895_155_reg_7042 = icmp_ln895_155_fu_3906_p2.read();
        icmp_ln895_156_reg_7048 = icmp_ln895_156_fu_3912_p2.read();
        icmp_ln895_157_reg_7054 = icmp_ln895_157_fu_3918_p2.read();
        icmp_ln895_158_reg_7060 = icmp_ln895_158_fu_3924_p2.read();
        icmp_ln895_159_reg_7066 = icmp_ln895_159_fu_3930_p2.read();
        v_0_V_reg_6502 = v_0_V_fu_3242_p3.read();
        v_10_V_reg_6574 = v_10_V_fu_3338_p3.read();
        v_11_V_reg_6586 = v_11_V_fu_3354_p3.read();
        v_12_V_reg_6544 = v_12_V_fu_3300_p3.read();
        v_13_V_reg_6556 = v_13_V_fu_3316_p3.read();
        v_14_V_reg_6568 = v_14_V_fu_3332_p3.read();
        v_15_V_reg_6580 = v_15_V_fu_3348_p3.read();
        v_16_V_reg_6598 = v_16_V_fu_3370_p3.read();
        v_17_V_reg_6610 = v_17_V_fu_3386_p3.read();
        v_18_V_reg_6622 = v_18_V_fu_3402_p3.read();
        v_19_V_reg_6634 = v_19_V_fu_3418_p3.read();
        v_1_V_reg_6514 = v_1_V_fu_3258_p3.read();
        v_20_V_reg_6592 = v_20_V_fu_3364_p3.read();
        v_21_V_reg_6604 = v_21_V_fu_3380_p3.read();
        v_22_V_reg_6616 = v_22_V_fu_3396_p3.read();
        v_23_V_reg_6628 = v_23_V_fu_3412_p3.read();
        v_24_V_reg_6646 = v_24_V_fu_3434_p3.read();
        v_25_V_reg_6658 = v_25_V_fu_3450_p3.read();
        v_26_V_reg_6670 = v_26_V_fu_3466_p3.read();
        v_27_V_reg_6682 = v_27_V_fu_3482_p3.read();
        v_28_V_reg_6640 = v_28_V_fu_3428_p3.read();
        v_29_V_reg_6652 = v_29_V_fu_3444_p3.read();
        v_2_V_reg_6526 = v_2_V_fu_3274_p3.read();
        v_30_V_reg_6664 = v_30_V_fu_3460_p3.read();
        v_31_V_reg_6676 = v_31_V_fu_3476_p3.read();
        v_32_V_reg_6694 = v_32_V_fu_3498_p3.read();
        v_33_V_reg_6706 = v_33_V_fu_3514_p3.read();
        v_34_V_reg_6718 = v_34_V_fu_3530_p3.read();
        v_35_V_reg_6730 = v_35_V_fu_3546_p3.read();
        v_36_V_reg_6688 = v_36_V_fu_3492_p3.read();
        v_37_V_reg_6700 = v_37_V_fu_3508_p3.read();
        v_38_V_reg_6712 = v_38_V_fu_3524_p3.read();
        v_39_V_reg_6724 = v_39_V_fu_3540_p3.read();
        v_3_V_reg_6538 = v_3_V_fu_3290_p3.read();
        v_40_V_reg_6742 = v_40_V_fu_3562_p3.read();
        v_41_V_reg_6754 = v_41_V_fu_3578_p3.read();
        v_42_V_reg_6766 = v_42_V_fu_3594_p3.read();
        v_43_V_reg_6778 = v_43_V_fu_3610_p3.read();
        v_44_V_reg_6736 = v_44_V_fu_3556_p3.read();
        v_45_V_reg_6748 = v_45_V_fu_3572_p3.read();
        v_46_V_reg_6760 = v_46_V_fu_3588_p3.read();
        v_47_V_reg_6772 = v_47_V_fu_3604_p3.read();
        v_48_V_reg_6790 = v_48_V_fu_3626_p3.read();
        v_49_V_reg_6802 = v_49_V_fu_3642_p3.read();
        v_4_V_reg_6496 = v_4_V_fu_3236_p3.read();
        v_50_V_reg_6814 = v_50_V_fu_3658_p3.read();
        v_51_V_reg_6826 = v_51_V_fu_3674_p3.read();
        v_52_V_reg_6784 = v_52_V_fu_3620_p3.read();
        v_53_V_reg_6796 = v_53_V_fu_3636_p3.read();
        v_54_V_reg_6808 = v_54_V_fu_3652_p3.read();
        v_55_V_reg_6820 = v_55_V_fu_3668_p3.read();
        v_56_V_reg_6838 = v_56_V_fu_3690_p3.read();
        v_57_V_reg_6850 = v_57_V_fu_3706_p3.read();
        v_58_V_reg_6862 = v_58_V_fu_3722_p3.read();
        v_59_V_reg_6874 = v_59_V_fu_3738_p3.read();
        v_5_V_reg_6508 = v_5_V_fu_3252_p3.read();
        v_60_V_reg_6832 = v_60_V_fu_3684_p3.read();
        v_61_V_reg_6844 = v_61_V_fu_3700_p3.read();
        v_62_V_reg_6856 = v_62_V_fu_3716_p3.read();
        v_63_V_reg_6868 = v_63_V_fu_3732_p3.read();
        v_6_V_reg_6520 = v_6_V_fu_3268_p3.read();
        v_7_V_reg_6532 = v_7_V_fu_3284_p3.read();
        v_8_V_reg_6550 = v_8_V_fu_3306_p3.read();
        v_9_V_reg_6562 = v_9_V_fu_3322_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        icmp_ln895_32_reg_5856 = icmp_ln895_32_fu_2016_p2.read();
        icmp_ln895_33_reg_5862 = icmp_ln895_33_fu_2022_p2.read();
        icmp_ln895_34_reg_5868 = icmp_ln895_34_fu_2028_p2.read();
        icmp_ln895_35_reg_5874 = icmp_ln895_35_fu_2034_p2.read();
        icmp_ln895_36_reg_5880 = icmp_ln895_36_fu_2040_p2.read();
        icmp_ln895_37_reg_5886 = icmp_ln895_37_fu_2046_p2.read();
        icmp_ln895_38_reg_5892 = icmp_ln895_38_fu_2052_p2.read();
        icmp_ln895_39_reg_5898 = icmp_ln895_39_fu_2058_p2.read();
        icmp_ln895_40_reg_5904 = icmp_ln895_40_fu_2064_p2.read();
        icmp_ln895_41_reg_5910 = icmp_ln895_41_fu_2070_p2.read();
        icmp_ln895_42_reg_5916 = icmp_ln895_42_fu_2076_p2.read();
        icmp_ln895_43_reg_5922 = icmp_ln895_43_fu_2082_p2.read();
        icmp_ln895_44_reg_5928 = icmp_ln895_44_fu_2088_p2.read();
        icmp_ln895_45_reg_5934 = icmp_ln895_45_fu_2094_p2.read();
        icmp_ln895_46_reg_5940 = icmp_ln895_46_fu_2100_p2.read();
        icmp_ln895_47_reg_5946 = icmp_ln895_47_fu_2106_p2.read();
        icmp_ln895_48_reg_5952 = icmp_ln895_48_fu_2112_p2.read();
        icmp_ln895_49_reg_5958 = icmp_ln895_49_fu_2118_p2.read();
        icmp_ln895_50_reg_5964 = icmp_ln895_50_fu_2124_p2.read();
        icmp_ln895_51_reg_5970 = icmp_ln895_51_fu_2130_p2.read();
        icmp_ln895_52_reg_5976 = icmp_ln895_52_fu_2136_p2.read();
        icmp_ln895_53_reg_5982 = icmp_ln895_53_fu_2142_p2.read();
        icmp_ln895_54_reg_5988 = icmp_ln895_54_fu_2148_p2.read();
        icmp_ln895_55_reg_5994 = icmp_ln895_55_fu_2154_p2.read();
        icmp_ln895_56_reg_6000 = icmp_ln895_56_fu_2160_p2.read();
        icmp_ln895_57_reg_6006 = icmp_ln895_57_fu_2166_p2.read();
        icmp_ln895_58_reg_6012 = icmp_ln895_58_fu_2172_p2.read();
        icmp_ln895_59_reg_6018 = icmp_ln895_59_fu_2178_p2.read();
        icmp_ln895_60_reg_6024 = icmp_ln895_60_fu_2184_p2.read();
        icmp_ln895_61_reg_6030 = icmp_ln895_61_fu_2190_p2.read();
        icmp_ln895_62_reg_6036 = icmp_ln895_62_fu_2196_p2.read();
        icmp_ln895_63_reg_6042 = icmp_ln895_63_fu_2202_p2.read();
        s_0_V_reg_5478 = s_0_V_fu_1514_p3.read();
        s_10_V_reg_5598 = s_10_V_fu_1674_p3.read();
        s_11_V_reg_5610 = s_11_V_fu_1690_p3.read();
        s_12_V_reg_5622 = s_12_V_fu_1706_p3.read();
        s_13_V_reg_5634 = s_13_V_fu_1722_p3.read();
        s_14_V_reg_5646 = s_14_V_fu_1738_p3.read();
        s_15_V_reg_5658 = s_15_V_fu_1754_p3.read();
        s_16_V_reg_5670 = s_16_V_fu_1770_p3.read();
        s_17_V_reg_5682 = s_17_V_fu_1786_p3.read();
        s_18_V_reg_5694 = s_18_V_fu_1802_p3.read();
        s_19_V_reg_5706 = s_19_V_fu_1818_p3.read();
        s_1_V_reg_5490 = s_1_V_fu_1530_p3.read();
        s_20_V_reg_5718 = s_20_V_fu_1834_p3.read();
        s_21_V_reg_5730 = s_21_V_fu_1850_p3.read();
        s_22_V_reg_5742 = s_22_V_fu_1866_p3.read();
        s_23_V_reg_5754 = s_23_V_fu_1882_p3.read();
        s_24_V_reg_5766 = s_24_V_fu_1898_p3.read();
        s_25_V_reg_5778 = s_25_V_fu_1914_p3.read();
        s_26_V_reg_5790 = s_26_V_fu_1930_p3.read();
        s_27_V_reg_5802 = s_27_V_fu_1946_p3.read();
        s_28_V_reg_5814 = s_28_V_fu_1962_p3.read();
        s_29_V_reg_5826 = s_29_V_fu_1978_p3.read();
        s_2_V_reg_5502 = s_2_V_fu_1546_p3.read();
        s_30_V_reg_5838 = s_30_V_fu_1994_p3.read();
        s_31_V_reg_5850 = s_31_V_fu_2010_p3.read();
        s_32_V_reg_5472 = s_32_V_fu_1508_p3.read();
        s_33_V_reg_5484 = s_33_V_fu_1524_p3.read();
        s_34_V_reg_5496 = s_34_V_fu_1540_p3.read();
        s_35_V_reg_5508 = s_35_V_fu_1556_p3.read();
        s_36_V_reg_5520 = s_36_V_fu_1572_p3.read();
        s_37_V_reg_5532 = s_37_V_fu_1588_p3.read();
        s_38_V_reg_5544 = s_38_V_fu_1604_p3.read();
        s_39_V_reg_5556 = s_39_V_fu_1620_p3.read();
        s_3_V_reg_5514 = s_3_V_fu_1562_p3.read();
        s_40_V_reg_5568 = s_40_V_fu_1636_p3.read();
        s_41_V_reg_5580 = s_41_V_fu_1652_p3.read();
        s_42_V_reg_5592 = s_42_V_fu_1668_p3.read();
        s_43_V_reg_5604 = s_43_V_fu_1684_p3.read();
        s_44_V_reg_5616 = s_44_V_fu_1700_p3.read();
        s_45_V_reg_5628 = s_45_V_fu_1716_p3.read();
        s_46_V_reg_5640 = s_46_V_fu_1732_p3.read();
        s_47_V_reg_5652 = s_47_V_fu_1748_p3.read();
        s_48_V_reg_5664 = s_48_V_fu_1764_p3.read();
        s_49_V_reg_5676 = s_49_V_fu_1780_p3.read();
        s_4_V_reg_5526 = s_4_V_fu_1578_p3.read();
        s_50_V_reg_5688 = s_50_V_fu_1796_p3.read();
        s_51_V_reg_5700 = s_51_V_fu_1812_p3.read();
        s_52_V_reg_5712 = s_52_V_fu_1828_p3.read();
        s_53_V_reg_5724 = s_53_V_fu_1844_p3.read();
        s_54_V_reg_5736 = s_54_V_fu_1860_p3.read();
        s_55_V_reg_5748 = s_55_V_fu_1876_p3.read();
        s_56_V_reg_5760 = s_56_V_fu_1892_p3.read();
        s_57_V_reg_5772 = s_57_V_fu_1908_p3.read();
        s_58_V_reg_5784 = s_58_V_fu_1924_p3.read();
        s_59_V_reg_5796 = s_59_V_fu_1940_p3.read();
        s_5_V_reg_5538 = s_5_V_fu_1594_p3.read();
        s_60_V_reg_5808 = s_60_V_fu_1956_p3.read();
        s_61_V_reg_5820 = s_61_V_fu_1972_p3.read();
        s_62_V_reg_5832 = s_62_V_fu_1988_p3.read();
        s_63_V_reg_5844 = s_63_V_fu_2004_p3.read();
        s_6_V_reg_5550 = s_6_V_fu_1610_p3.read();
        s_7_V_reg_5562 = s_7_V_fu_1626_p3.read();
        s_8_V_reg_5574 = s_8_V_fu_1642_p3.read();
        s_9_V_reg_5586 = s_9_V_fu_1658_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        r_0_V_reg_5024 = grp_bitonic32Inc_fu_1112_ap_return_0.read();
        r_10_V_reg_5094 = grp_bitonic32Inc_fu_1112_ap_return_10.read();
        r_11_V_reg_5101 = grp_bitonic32Inc_fu_1112_ap_return_11.read();
        r_12_V_reg_5108 = grp_bitonic32Inc_fu_1112_ap_return_12.read();
        r_13_V_reg_5115 = grp_bitonic32Inc_fu_1112_ap_return_13.read();
        r_14_V_reg_5122 = grp_bitonic32Inc_fu_1112_ap_return_14.read();
        r_15_V_reg_5129 = grp_bitonic32Inc_fu_1112_ap_return_15.read();
        r_16_V_reg_5136 = grp_bitonic32Inc_fu_1112_ap_return_16.read();
        r_17_V_reg_5143 = grp_bitonic32Inc_fu_1112_ap_return_17.read();
        r_18_V_reg_5150 = grp_bitonic32Inc_fu_1112_ap_return_18.read();
        r_19_V_reg_5157 = grp_bitonic32Inc_fu_1112_ap_return_19.read();
        r_1_V_reg_5031 = grp_bitonic32Inc_fu_1112_ap_return_1.read();
        r_20_V_reg_5164 = grp_bitonic32Inc_fu_1112_ap_return_20.read();
        r_21_V_reg_5171 = grp_bitonic32Inc_fu_1112_ap_return_21.read();
        r_22_V_reg_5178 = grp_bitonic32Inc_fu_1112_ap_return_22.read();
        r_23_V_reg_5185 = grp_bitonic32Inc_fu_1112_ap_return_23.read();
        r_24_V_reg_5192 = grp_bitonic32Inc_fu_1112_ap_return_24.read();
        r_25_V_reg_5199 = grp_bitonic32Inc_fu_1112_ap_return_25.read();
        r_26_V_reg_5206 = grp_bitonic32Inc_fu_1112_ap_return_26.read();
        r_27_V_reg_5213 = grp_bitonic32Inc_fu_1112_ap_return_27.read();
        r_28_V_reg_5220 = grp_bitonic32Inc_fu_1112_ap_return_28.read();
        r_29_V_reg_5227 = grp_bitonic32Inc_fu_1112_ap_return_29.read();
        r_2_V_reg_5038 = grp_bitonic32Inc_fu_1112_ap_return_2.read();
        r_30_V_reg_5234 = grp_bitonic32Inc_fu_1112_ap_return_30.read();
        r_31_V_reg_5241 = grp_bitonic32Inc_fu_1112_ap_return_31.read();
        r_32_V_reg_5248 = grp_bitonic32Dec_fu_1180_ap_return_0.read();
        r_33_V_reg_5255 = grp_bitonic32Dec_fu_1180_ap_return_1.read();
        r_34_V_reg_5262 = grp_bitonic32Dec_fu_1180_ap_return_2.read();
        r_35_V_reg_5269 = grp_bitonic32Dec_fu_1180_ap_return_3.read();
        r_36_V_reg_5276 = grp_bitonic32Dec_fu_1180_ap_return_4.read();
        r_37_V_reg_5283 = grp_bitonic32Dec_fu_1180_ap_return_5.read();
        r_38_V_reg_5290 = grp_bitonic32Dec_fu_1180_ap_return_6.read();
        r_39_V_reg_5297 = grp_bitonic32Dec_fu_1180_ap_return_7.read();
        r_3_V_reg_5045 = grp_bitonic32Inc_fu_1112_ap_return_3.read();
        r_40_V_reg_5304 = grp_bitonic32Dec_fu_1180_ap_return_8.read();
        r_41_V_reg_5311 = grp_bitonic32Dec_fu_1180_ap_return_9.read();
        r_42_V_reg_5318 = grp_bitonic32Dec_fu_1180_ap_return_10.read();
        r_43_V_reg_5325 = grp_bitonic32Dec_fu_1180_ap_return_11.read();
        r_44_V_reg_5332 = grp_bitonic32Dec_fu_1180_ap_return_12.read();
        r_45_V_reg_5339 = grp_bitonic32Dec_fu_1180_ap_return_13.read();
        r_46_V_reg_5346 = grp_bitonic32Dec_fu_1180_ap_return_14.read();
        r_47_V_reg_5353 = grp_bitonic32Dec_fu_1180_ap_return_15.read();
        r_48_V_reg_5360 = grp_bitonic32Dec_fu_1180_ap_return_16.read();
        r_49_V_reg_5367 = grp_bitonic32Dec_fu_1180_ap_return_17.read();
        r_4_V_reg_5052 = grp_bitonic32Inc_fu_1112_ap_return_4.read();
        r_50_V_reg_5374 = grp_bitonic32Dec_fu_1180_ap_return_18.read();
        r_51_V_reg_5381 = grp_bitonic32Dec_fu_1180_ap_return_19.read();
        r_52_V_reg_5388 = grp_bitonic32Dec_fu_1180_ap_return_20.read();
        r_53_V_reg_5395 = grp_bitonic32Dec_fu_1180_ap_return_21.read();
        r_54_V_reg_5402 = grp_bitonic32Dec_fu_1180_ap_return_22.read();
        r_55_V_reg_5409 = grp_bitonic32Dec_fu_1180_ap_return_23.read();
        r_56_V_reg_5416 = grp_bitonic32Dec_fu_1180_ap_return_24.read();
        r_57_V_reg_5423 = grp_bitonic32Dec_fu_1180_ap_return_25.read();
        r_58_V_reg_5430 = grp_bitonic32Dec_fu_1180_ap_return_26.read();
        r_59_V_reg_5437 = grp_bitonic32Dec_fu_1180_ap_return_27.read();
        r_5_V_reg_5059 = grp_bitonic32Inc_fu_1112_ap_return_5.read();
        r_60_V_reg_5444 = grp_bitonic32Dec_fu_1180_ap_return_28.read();
        r_61_V_reg_5451 = grp_bitonic32Dec_fu_1180_ap_return_29.read();
        r_62_V_reg_5458 = grp_bitonic32Dec_fu_1180_ap_return_30.read();
        r_63_V_reg_5465 = grp_bitonic32Dec_fu_1180_ap_return_31.read();
        r_6_V_reg_5066 = grp_bitonic32Inc_fu_1112_ap_return_6.read();
        r_7_V_reg_5073 = grp_bitonic32Inc_fu_1112_ap_return_7.read();
        r_8_V_reg_5080 = grp_bitonic32Inc_fu_1112_ap_return_8.read();
        r_9_V_reg_5087 = grp_bitonic32Inc_fu_1112_ap_return_9.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        u_0_V_reg_6055 = u_0_V_fu_2542_p3.read();
        u_10_V_reg_6076 = u_10_V_fu_2578_p3.read();
        u_11_V_reg_6090 = u_11_V_fu_2600_p3.read();
        u_12_V_reg_6104 = u_12_V_fu_2622_p3.read();
        u_13_V_reg_6118 = u_13_V_fu_2644_p3.read();
        u_14_V_reg_6132 = u_14_V_fu_2666_p3.read();
        u_15_V_reg_6146 = u_15_V_fu_2688_p3.read();
        u_16_V_reg_6167 = u_16_V_fu_2718_p3.read();
        u_17_V_reg_6181 = u_17_V_fu_2740_p3.read();
        u_18_V_reg_6195 = u_18_V_fu_2762_p3.read();
        u_19_V_reg_6209 = u_19_V_fu_2784_p3.read();
        u_1_V_reg_6069 = u_1_V_fu_2564_p3.read();
        u_20_V_reg_6223 = u_20_V_fu_2806_p3.read();
        u_21_V_reg_6237 = u_21_V_fu_2828_p3.read();
        u_22_V_reg_6251 = u_22_V_fu_2850_p3.read();
        u_23_V_reg_6265 = u_23_V_fu_2872_p3.read();
        u_24_V_reg_6160 = u_24_V_fu_2710_p3.read();
        u_25_V_reg_6174 = u_25_V_fu_2732_p3.read();
        u_26_V_reg_6188 = u_26_V_fu_2754_p3.read();
        u_27_V_reg_6202 = u_27_V_fu_2776_p3.read();
        u_28_V_reg_6216 = u_28_V_fu_2798_p3.read();
        u_29_V_reg_6230 = u_29_V_fu_2820_p3.read();
        u_2_V_reg_6083 = u_2_V_fu_2586_p3.read();
        u_30_V_reg_6244 = u_30_V_fu_2842_p3.read();
        u_31_V_reg_6258 = u_31_V_fu_2864_p3.read();
        u_32_V_reg_6279 = u_32_V_fu_2894_p3.read();
        u_33_V_reg_6293 = u_33_V_fu_2916_p3.read();
        u_34_V_reg_6307 = u_34_V_fu_2938_p3.read();
        u_35_V_reg_6321 = u_35_V_fu_2960_p3.read();
        u_36_V_reg_6335 = u_36_V_fu_2982_p3.read();
        u_37_V_reg_6349 = u_37_V_fu_3004_p3.read();
        u_38_V_reg_6363 = u_38_V_fu_3026_p3.read();
        u_39_V_reg_6377 = u_39_V_fu_3048_p3.read();
        u_3_V_reg_6097 = u_3_V_fu_2608_p3.read();
        u_40_V_reg_6272 = u_40_V_fu_2886_p3.read();
        u_41_V_reg_6286 = u_41_V_fu_2908_p3.read();
        u_42_V_reg_6300 = u_42_V_fu_2930_p3.read();
        u_43_V_reg_6314 = u_43_V_fu_2952_p3.read();
        u_44_V_reg_6328 = u_44_V_fu_2974_p3.read();
        u_45_V_reg_6342 = u_45_V_fu_2996_p3.read();
        u_46_V_reg_6356 = u_46_V_fu_3018_p3.read();
        u_47_V_reg_6370 = u_47_V_fu_3040_p3.read();
        u_48_V_reg_6391 = u_48_V_fu_3070_p3.read();
        u_49_V_reg_6405 = u_49_V_fu_3092_p3.read();
        u_4_V_reg_6111 = u_4_V_fu_2630_p3.read();
        u_50_V_reg_6419 = u_50_V_fu_3114_p3.read();
        u_51_V_reg_6433 = u_51_V_fu_3136_p3.read();
        u_52_V_reg_6447 = u_52_V_fu_3158_p3.read();
        u_53_V_reg_6461 = u_53_V_fu_3180_p3.read();
        u_54_V_reg_6475 = u_54_V_fu_3202_p3.read();
        u_55_V_reg_6489 = u_55_V_fu_3224_p3.read();
        u_56_V_reg_6384 = u_56_V_fu_3062_p3.read();
        u_57_V_reg_6398 = u_57_V_fu_3084_p3.read();
        u_58_V_reg_6412 = u_58_V_fu_3106_p3.read();
        u_59_V_reg_6426 = u_59_V_fu_3128_p3.read();
        u_5_V_reg_6125 = u_5_V_fu_2652_p3.read();
        u_60_V_reg_6440 = u_60_V_fu_3150_p3.read();
        u_61_V_reg_6454 = u_61_V_fu_3172_p3.read();
        u_62_V_reg_6468 = u_62_V_fu_3194_p3.read();
        u_63_V_reg_6482 = u_63_V_fu_3216_p3.read();
        u_6_V_reg_6139 = u_6_V_fu_2674_p3.read();
        u_7_V_reg_6153 = u_7_V_fu_2696_p3.read();
        u_8_V_reg_6048 = u_8_V_fu_2534_p3.read();
        u_9_V_reg_6062 = u_9_V_fu_2556_p3.read();
    }
}

void bitonicSort64::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_1to1.read())))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
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
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reset_idle_pp0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage4_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reset_idle_pp0.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
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

