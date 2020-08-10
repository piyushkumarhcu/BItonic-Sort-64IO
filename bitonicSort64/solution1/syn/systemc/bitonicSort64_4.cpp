#include "bitonicSort64.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void bitonicSort64::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void bitonicSort64::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[1];
}

void bitonicSort64::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[2];
}

void bitonicSort64::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[3];
}

void bitonicSort64::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[4];
}

void bitonicSort64::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[8];
}

void bitonicSort64::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void bitonicSort64::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()));
}

void bitonicSort64::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage4() {
    ap_block_pp0_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage4_01001() {
    ap_block_pp0_stage4_01001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage4_11001() {
    ap_block_pp0_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage5_11001() {
    ap_block_pp0_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage8_11001() {
    ap_block_pp0_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_pp0_stage8_subdone() {
    ap_block_pp0_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state11_pp0_stage1_iter1() {
    ap_block_state11_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state12_pp0_stage2_iter1() {
    ap_block_state12_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state13_pp0_stage3_iter1() {
    ap_block_state13_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state14_pp0_stage4_iter1() {
    ap_block_state14_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void bitonicSort64::thread_ap_block_state2_pp0_stage1_iter0() {
    ap_block_state2_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state3_pp0_stage2_iter0() {
    ap_block_state3_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state4_pp0_stage3_iter0() {
    ap_block_state4_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state5_pp0_stage4_iter0() {
    ap_block_state5_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state6_pp0_stage5_iter0() {
    ap_block_state6_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state7_pp0_stage6_iter0() {
    ap_block_state7_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state8_pp0_stage7_iter0() {
    ap_block_state8_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_block_state9_pp0_stage8_iter0() {
    ap_block_state9_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void bitonicSort64::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void bitonicSort64::thread_ap_enable_reg_pp0_iter0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read())) {
        ap_enable_reg_pp0_iter0 = ap_start.read();
    } else {
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg.read();
    }
}

void bitonicSort64::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_idle_pp0_0to0() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read())) {
        ap_idle_pp0_0to0 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to0 = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_idle_pp0_1to1() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read())) {
        ap_idle_pp0_1to1 = ap_const_logic_1;
    } else {
        ap_idle_pp0_1to1 = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_11001.read(), ap_const_boolean_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void bitonicSort64::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to0.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void bitonicSort64::thread_grp_bitonic32Dec_fu_1180_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_bitonic32Dec_fu_1180_ap_start = ap_const_logic_1;
    } else {
        grp_bitonic32Dec_fu_1180_ap_start = ap_const_logic_0;
    }
}

void bitonicSort64::thread_grp_bitonic32Inc_fu_1112_ap_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        grp_bitonic32Inc_fu_1112_ap_start = ap_const_logic_1;
    } else {
        grp_bitonic32Inc_fu_1112_ap_start = ap_const_logic_0;
    }
}

void bitonicSort64::thread_icmp_ln895_100_fu_3296_p2() {
    icmp_ln895_100_fu_3296_p2 = (!u_8_V_reg_6048.read().is_01() || !u_12_V_reg_6104.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_8_V_reg_6048.read()) > sc_biguint<32>(u_12_V_reg_6104.read()));
}

void bitonicSort64::thread_icmp_ln895_101_fu_3312_p2() {
    icmp_ln895_101_fu_3312_p2 = (!u_9_V_reg_6062.read().is_01() || !u_13_V_reg_6118.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_9_V_reg_6062.read()) > sc_biguint<32>(u_13_V_reg_6118.read()));
}

void bitonicSort64::thread_icmp_ln895_102_fu_3328_p2() {
    icmp_ln895_102_fu_3328_p2 = (!u_10_V_reg_6076.read().is_01() || !u_14_V_reg_6132.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_10_V_reg_6076.read()) > sc_biguint<32>(u_14_V_reg_6132.read()));
}

void bitonicSort64::thread_icmp_ln895_103_fu_3344_p2() {
    icmp_ln895_103_fu_3344_p2 = (!u_11_V_reg_6090.read().is_01() || !u_15_V_reg_6146.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_11_V_reg_6090.read()) > sc_biguint<32>(u_15_V_reg_6146.read()));
}

void bitonicSort64::thread_icmp_ln895_104_fu_3360_p2() {
    icmp_ln895_104_fu_3360_p2 = (!u_16_V_reg_6167.read().is_01() || !u_20_V_reg_6223.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_16_V_reg_6167.read()) > sc_biguint<32>(u_20_V_reg_6223.read()));
}

void bitonicSort64::thread_icmp_ln895_105_fu_3376_p2() {
    icmp_ln895_105_fu_3376_p2 = (!u_17_V_reg_6181.read().is_01() || !u_21_V_reg_6237.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_17_V_reg_6181.read()) > sc_biguint<32>(u_21_V_reg_6237.read()));
}

void bitonicSort64::thread_icmp_ln895_106_fu_3392_p2() {
    icmp_ln895_106_fu_3392_p2 = (!u_18_V_reg_6195.read().is_01() || !u_22_V_reg_6251.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_18_V_reg_6195.read()) > sc_biguint<32>(u_22_V_reg_6251.read()));
}

void bitonicSort64::thread_icmp_ln895_107_fu_3408_p2() {
    icmp_ln895_107_fu_3408_p2 = (!u_19_V_reg_6209.read().is_01() || !u_23_V_reg_6265.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_19_V_reg_6209.read()) > sc_biguint<32>(u_23_V_reg_6265.read()));
}

void bitonicSort64::thread_icmp_ln895_108_fu_3424_p2() {
    icmp_ln895_108_fu_3424_p2 = (!u_24_V_reg_6160.read().is_01() || !u_28_V_reg_6216.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_24_V_reg_6160.read()) > sc_biguint<32>(u_28_V_reg_6216.read()));
}

void bitonicSort64::thread_icmp_ln895_109_fu_3440_p2() {
    icmp_ln895_109_fu_3440_p2 = (!u_25_V_reg_6174.read().is_01() || !u_29_V_reg_6230.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_25_V_reg_6174.read()) > sc_biguint<32>(u_29_V_reg_6230.read()));
}

void bitonicSort64::thread_icmp_ln895_10_fu_1664_p2() {
    icmp_ln895_10_fu_1664_p2 = (!r_10_V_reg_5094.read().is_01() || !r_42_V_reg_5318.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_10_V_reg_5094.read()) > sc_biguint<32>(r_42_V_reg_5318.read()));
}

void bitonicSort64::thread_icmp_ln895_110_fu_3456_p2() {
    icmp_ln895_110_fu_3456_p2 = (!u_26_V_reg_6188.read().is_01() || !u_30_V_reg_6244.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_26_V_reg_6188.read()) > sc_biguint<32>(u_30_V_reg_6244.read()));
}

void bitonicSort64::thread_icmp_ln895_111_fu_3472_p2() {
    icmp_ln895_111_fu_3472_p2 = (!u_27_V_reg_6202.read().is_01() || !u_31_V_reg_6258.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_27_V_reg_6202.read()) > sc_biguint<32>(u_31_V_reg_6258.read()));
}

void bitonicSort64::thread_icmp_ln895_112_fu_3488_p2() {
    icmp_ln895_112_fu_3488_p2 = (!u_32_V_reg_6279.read().is_01() || !u_36_V_reg_6335.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_32_V_reg_6279.read()) > sc_biguint<32>(u_36_V_reg_6335.read()));
}

void bitonicSort64::thread_icmp_ln895_113_fu_3504_p2() {
    icmp_ln895_113_fu_3504_p2 = (!u_33_V_reg_6293.read().is_01() || !u_37_V_reg_6349.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_33_V_reg_6293.read()) > sc_biguint<32>(u_37_V_reg_6349.read()));
}

void bitonicSort64::thread_icmp_ln895_114_fu_3520_p2() {
    icmp_ln895_114_fu_3520_p2 = (!u_34_V_reg_6307.read().is_01() || !u_38_V_reg_6363.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_34_V_reg_6307.read()) > sc_biguint<32>(u_38_V_reg_6363.read()));
}

void bitonicSort64::thread_icmp_ln895_115_fu_3536_p2() {
    icmp_ln895_115_fu_3536_p2 = (!u_35_V_reg_6321.read().is_01() || !u_39_V_reg_6377.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_35_V_reg_6321.read()) > sc_biguint<32>(u_39_V_reg_6377.read()));
}

void bitonicSort64::thread_icmp_ln895_116_fu_3552_p2() {
    icmp_ln895_116_fu_3552_p2 = (!u_40_V_reg_6272.read().is_01() || !u_44_V_reg_6328.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_40_V_reg_6272.read()) > sc_biguint<32>(u_44_V_reg_6328.read()));
}

void bitonicSort64::thread_icmp_ln895_117_fu_3568_p2() {
    icmp_ln895_117_fu_3568_p2 = (!u_41_V_reg_6286.read().is_01() || !u_45_V_reg_6342.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_41_V_reg_6286.read()) > sc_biguint<32>(u_45_V_reg_6342.read()));
}

void bitonicSort64::thread_icmp_ln895_118_fu_3584_p2() {
    icmp_ln895_118_fu_3584_p2 = (!u_42_V_reg_6300.read().is_01() || !u_46_V_reg_6356.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_42_V_reg_6300.read()) > sc_biguint<32>(u_46_V_reg_6356.read()));
}

void bitonicSort64::thread_icmp_ln895_119_fu_3600_p2() {
    icmp_ln895_119_fu_3600_p2 = (!u_43_V_reg_6314.read().is_01() || !u_47_V_reg_6370.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_43_V_reg_6314.read()) > sc_biguint<32>(u_47_V_reg_6370.read()));
}

void bitonicSort64::thread_icmp_ln895_11_fu_1680_p2() {
    icmp_ln895_11_fu_1680_p2 = (!r_11_V_reg_5101.read().is_01() || !r_43_V_reg_5325.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_11_V_reg_5101.read()) > sc_biguint<32>(r_43_V_reg_5325.read()));
}

void bitonicSort64::thread_icmp_ln895_120_fu_3616_p2() {
    icmp_ln895_120_fu_3616_p2 = (!u_48_V_reg_6391.read().is_01() || !u_52_V_reg_6447.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_48_V_reg_6391.read()) > sc_biguint<32>(u_52_V_reg_6447.read()));
}

void bitonicSort64::thread_icmp_ln895_121_fu_3632_p2() {
    icmp_ln895_121_fu_3632_p2 = (!u_49_V_reg_6405.read().is_01() || !u_53_V_reg_6461.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_49_V_reg_6405.read()) > sc_biguint<32>(u_53_V_reg_6461.read()));
}

void bitonicSort64::thread_icmp_ln895_122_fu_3648_p2() {
    icmp_ln895_122_fu_3648_p2 = (!u_50_V_reg_6419.read().is_01() || !u_54_V_reg_6475.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_50_V_reg_6419.read()) > sc_biguint<32>(u_54_V_reg_6475.read()));
}

void bitonicSort64::thread_icmp_ln895_123_fu_3664_p2() {
    icmp_ln895_123_fu_3664_p2 = (!u_51_V_reg_6433.read().is_01() || !u_55_V_reg_6489.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_51_V_reg_6433.read()) > sc_biguint<32>(u_55_V_reg_6489.read()));
}

void bitonicSort64::thread_icmp_ln895_124_fu_3680_p2() {
    icmp_ln895_124_fu_3680_p2 = (!u_56_V_reg_6384.read().is_01() || !u_60_V_reg_6440.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_56_V_reg_6384.read()) > sc_biguint<32>(u_60_V_reg_6440.read()));
}

void bitonicSort64::thread_icmp_ln895_125_fu_3696_p2() {
    icmp_ln895_125_fu_3696_p2 = (!u_57_V_reg_6398.read().is_01() || !u_61_V_reg_6454.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_57_V_reg_6398.read()) > sc_biguint<32>(u_61_V_reg_6454.read()));
}

void bitonicSort64::thread_icmp_ln895_126_fu_3712_p2() {
    icmp_ln895_126_fu_3712_p2 = (!u_58_V_reg_6412.read().is_01() || !u_62_V_reg_6468.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_58_V_reg_6412.read()) > sc_biguint<32>(u_62_V_reg_6468.read()));
}

void bitonicSort64::thread_icmp_ln895_127_fu_3728_p2() {
    icmp_ln895_127_fu_3728_p2 = (!u_59_V_reg_6426.read().is_01() || !u_63_V_reg_6482.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_59_V_reg_6426.read()) > sc_biguint<32>(u_63_V_reg_6482.read()));
}

void bitonicSort64::thread_icmp_ln895_128_fu_3744_p2() {
    icmp_ln895_128_fu_3744_p2 = (!v_0_V_fu_3242_p3.read().is_01() || !v_2_V_fu_3274_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_0_V_fu_3242_p3.read()) > sc_biguint<32>(v_2_V_fu_3274_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_129_fu_3750_p2() {
    icmp_ln895_129_fu_3750_p2 = (!v_1_V_fu_3258_p3.read().is_01() || !v_3_V_fu_3290_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_1_V_fu_3258_p3.read()) > sc_biguint<32>(v_3_V_fu_3290_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_12_fu_1696_p2() {
    icmp_ln895_12_fu_1696_p2 = (!r_12_V_reg_5108.read().is_01() || !r_44_V_reg_5332.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_12_V_reg_5108.read()) > sc_biguint<32>(r_44_V_reg_5332.read()));
}

void bitonicSort64::thread_icmp_ln895_130_fu_3756_p2() {
    icmp_ln895_130_fu_3756_p2 = (!v_4_V_fu_3236_p3.read().is_01() || !v_6_V_fu_3268_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_4_V_fu_3236_p3.read()) > sc_biguint<32>(v_6_V_fu_3268_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_131_fu_3762_p2() {
    icmp_ln895_131_fu_3762_p2 = (!v_5_V_fu_3252_p3.read().is_01() || !v_7_V_fu_3284_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_5_V_fu_3252_p3.read()) > sc_biguint<32>(v_7_V_fu_3284_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_132_fu_3768_p2() {
    icmp_ln895_132_fu_3768_p2 = (!v_8_V_fu_3306_p3.read().is_01() || !v_10_V_fu_3338_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_8_V_fu_3306_p3.read()) > sc_biguint<32>(v_10_V_fu_3338_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_133_fu_3774_p2() {
    icmp_ln895_133_fu_3774_p2 = (!v_9_V_fu_3322_p3.read().is_01() || !v_11_V_fu_3354_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_9_V_fu_3322_p3.read()) > sc_biguint<32>(v_11_V_fu_3354_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_134_fu_3780_p2() {
    icmp_ln895_134_fu_3780_p2 = (!v_12_V_fu_3300_p3.read().is_01() || !v_14_V_fu_3332_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_12_V_fu_3300_p3.read()) > sc_biguint<32>(v_14_V_fu_3332_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_135_fu_3786_p2() {
    icmp_ln895_135_fu_3786_p2 = (!v_13_V_fu_3316_p3.read().is_01() || !v_15_V_fu_3348_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_13_V_fu_3316_p3.read()) > sc_biguint<32>(v_15_V_fu_3348_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_136_fu_3792_p2() {
    icmp_ln895_136_fu_3792_p2 = (!v_16_V_fu_3370_p3.read().is_01() || !v_18_V_fu_3402_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_16_V_fu_3370_p3.read()) > sc_biguint<32>(v_18_V_fu_3402_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_137_fu_3798_p2() {
    icmp_ln895_137_fu_3798_p2 = (!v_17_V_fu_3386_p3.read().is_01() || !v_19_V_fu_3418_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_17_V_fu_3386_p3.read()) > sc_biguint<32>(v_19_V_fu_3418_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_138_fu_3804_p2() {
    icmp_ln895_138_fu_3804_p2 = (!v_20_V_fu_3364_p3.read().is_01() || !v_22_V_fu_3396_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_20_V_fu_3364_p3.read()) > sc_biguint<32>(v_22_V_fu_3396_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_139_fu_3810_p2() {
    icmp_ln895_139_fu_3810_p2 = (!v_21_V_fu_3380_p3.read().is_01() || !v_23_V_fu_3412_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_21_V_fu_3380_p3.read()) > sc_biguint<32>(v_23_V_fu_3412_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_13_fu_1712_p2() {
    icmp_ln895_13_fu_1712_p2 = (!r_13_V_reg_5115.read().is_01() || !r_45_V_reg_5339.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_13_V_reg_5115.read()) > sc_biguint<32>(r_45_V_reg_5339.read()));
}

void bitonicSort64::thread_icmp_ln895_140_fu_3816_p2() {
    icmp_ln895_140_fu_3816_p2 = (!v_24_V_fu_3434_p3.read().is_01() || !v_26_V_fu_3466_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_24_V_fu_3434_p3.read()) > sc_biguint<32>(v_26_V_fu_3466_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_141_fu_3822_p2() {
    icmp_ln895_141_fu_3822_p2 = (!v_25_V_fu_3450_p3.read().is_01() || !v_27_V_fu_3482_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_25_V_fu_3450_p3.read()) > sc_biguint<32>(v_27_V_fu_3482_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_142_fu_3828_p2() {
    icmp_ln895_142_fu_3828_p2 = (!v_28_V_fu_3428_p3.read().is_01() || !v_30_V_fu_3460_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_28_V_fu_3428_p3.read()) > sc_biguint<32>(v_30_V_fu_3460_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_143_fu_3834_p2() {
    icmp_ln895_143_fu_3834_p2 = (!v_29_V_fu_3444_p3.read().is_01() || !v_31_V_fu_3476_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_29_V_fu_3444_p3.read()) > sc_biguint<32>(v_31_V_fu_3476_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_144_fu_3840_p2() {
    icmp_ln895_144_fu_3840_p2 = (!v_32_V_fu_3498_p3.read().is_01() || !v_34_V_fu_3530_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_32_V_fu_3498_p3.read()) > sc_biguint<32>(v_34_V_fu_3530_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_145_fu_3846_p2() {
    icmp_ln895_145_fu_3846_p2 = (!v_33_V_fu_3514_p3.read().is_01() || !v_35_V_fu_3546_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_33_V_fu_3514_p3.read()) > sc_biguint<32>(v_35_V_fu_3546_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_146_fu_3852_p2() {
    icmp_ln895_146_fu_3852_p2 = (!v_36_V_fu_3492_p3.read().is_01() || !v_38_V_fu_3524_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_36_V_fu_3492_p3.read()) > sc_biguint<32>(v_38_V_fu_3524_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_147_fu_3858_p2() {
    icmp_ln895_147_fu_3858_p2 = (!v_37_V_fu_3508_p3.read().is_01() || !v_39_V_fu_3540_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_37_V_fu_3508_p3.read()) > sc_biguint<32>(v_39_V_fu_3540_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_148_fu_3864_p2() {
    icmp_ln895_148_fu_3864_p2 = (!v_40_V_fu_3562_p3.read().is_01() || !v_42_V_fu_3594_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_40_V_fu_3562_p3.read()) > sc_biguint<32>(v_42_V_fu_3594_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_149_fu_3870_p2() {
    icmp_ln895_149_fu_3870_p2 = (!v_41_V_fu_3578_p3.read().is_01() || !v_43_V_fu_3610_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_41_V_fu_3578_p3.read()) > sc_biguint<32>(v_43_V_fu_3610_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_14_fu_1728_p2() {
    icmp_ln895_14_fu_1728_p2 = (!r_14_V_reg_5122.read().is_01() || !r_46_V_reg_5346.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_14_V_reg_5122.read()) > sc_biguint<32>(r_46_V_reg_5346.read()));
}

void bitonicSort64::thread_icmp_ln895_150_fu_3876_p2() {
    icmp_ln895_150_fu_3876_p2 = (!v_44_V_fu_3556_p3.read().is_01() || !v_46_V_fu_3588_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_44_V_fu_3556_p3.read()) > sc_biguint<32>(v_46_V_fu_3588_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_151_fu_3882_p2() {
    icmp_ln895_151_fu_3882_p2 = (!v_45_V_fu_3572_p3.read().is_01() || !v_47_V_fu_3604_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_45_V_fu_3572_p3.read()) > sc_biguint<32>(v_47_V_fu_3604_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_152_fu_3888_p2() {
    icmp_ln895_152_fu_3888_p2 = (!v_48_V_fu_3626_p3.read().is_01() || !v_50_V_fu_3658_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_48_V_fu_3626_p3.read()) > sc_biguint<32>(v_50_V_fu_3658_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_153_fu_3894_p2() {
    icmp_ln895_153_fu_3894_p2 = (!v_49_V_fu_3642_p3.read().is_01() || !v_51_V_fu_3674_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_49_V_fu_3642_p3.read()) > sc_biguint<32>(v_51_V_fu_3674_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_154_fu_3900_p2() {
    icmp_ln895_154_fu_3900_p2 = (!v_52_V_fu_3620_p3.read().is_01() || !v_54_V_fu_3652_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_52_V_fu_3620_p3.read()) > sc_biguint<32>(v_54_V_fu_3652_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_155_fu_3906_p2() {
    icmp_ln895_155_fu_3906_p2 = (!v_53_V_fu_3636_p3.read().is_01() || !v_55_V_fu_3668_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_53_V_fu_3636_p3.read()) > sc_biguint<32>(v_55_V_fu_3668_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_156_fu_3912_p2() {
    icmp_ln895_156_fu_3912_p2 = (!v_56_V_fu_3690_p3.read().is_01() || !v_58_V_fu_3722_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_56_V_fu_3690_p3.read()) > sc_biguint<32>(v_58_V_fu_3722_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_157_fu_3918_p2() {
    icmp_ln895_157_fu_3918_p2 = (!v_57_V_fu_3706_p3.read().is_01() || !v_59_V_fu_3738_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_57_V_fu_3706_p3.read()) > sc_biguint<32>(v_59_V_fu_3738_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_158_fu_3924_p2() {
    icmp_ln895_158_fu_3924_p2 = (!v_60_V_fu_3684_p3.read().is_01() || !v_62_V_fu_3716_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_60_V_fu_3684_p3.read()) > sc_biguint<32>(v_62_V_fu_3716_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_159_fu_3930_p2() {
    icmp_ln895_159_fu_3930_p2 = (!v_61_V_fu_3700_p3.read().is_01() || !v_63_V_fu_3732_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(v_61_V_fu_3700_p3.read()) > sc_biguint<32>(v_63_V_fu_3732_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_15_fu_1744_p2() {
    icmp_ln895_15_fu_1744_p2 = (!r_15_V_reg_5129.read().is_01() || !r_47_V_reg_5353.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_15_V_reg_5129.read()) > sc_biguint<32>(r_47_V_reg_5353.read()));
}

void bitonicSort64::thread_icmp_ln895_160_fu_4256_p2() {
    icmp_ln895_160_fu_4256_p2 = (!w_0_V_fu_3941_p3.read().is_01() || !w_1_V_fu_3951_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_0_V_fu_3941_p3.read()) > sc_biguint<32>(w_1_V_fu_3951_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_161_fu_4280_p2() {
    icmp_ln895_161_fu_4280_p2 = (!w_2_V_fu_3936_p3.read().is_01() || !w_3_V_fu_3946_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_2_V_fu_3936_p3.read()) > sc_biguint<32>(w_3_V_fu_3946_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_162_fu_4304_p2() {
    icmp_ln895_162_fu_4304_p2 = (!w_4_V_fu_3961_p3.read().is_01() || !w_5_V_fu_3971_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_4_V_fu_3961_p3.read()) > sc_biguint<32>(w_5_V_fu_3971_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_163_fu_4328_p2() {
    icmp_ln895_163_fu_4328_p2 = (!w_6_V_fu_3956_p3.read().is_01() || !w_7_V_fu_3966_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_6_V_fu_3956_p3.read()) > sc_biguint<32>(w_7_V_fu_3966_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_164_fu_4352_p2() {
    icmp_ln895_164_fu_4352_p2 = (!w_8_V_fu_3981_p3.read().is_01() || !w_9_V_fu_3991_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_8_V_fu_3981_p3.read()) > sc_biguint<32>(w_9_V_fu_3991_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_165_fu_4376_p2() {
    icmp_ln895_165_fu_4376_p2 = (!w_10_V_fu_3976_p3.read().is_01() || !w_11_V_fu_3986_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_10_V_fu_3976_p3.read()) > sc_biguint<32>(w_11_V_fu_3986_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_166_fu_4400_p2() {
    icmp_ln895_166_fu_4400_p2 = (!w_12_V_fu_4001_p3.read().is_01() || !w_13_V_fu_4011_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_12_V_fu_4001_p3.read()) > sc_biguint<32>(w_13_V_fu_4011_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_167_fu_4424_p2() {
    icmp_ln895_167_fu_4424_p2 = (!w_14_V_fu_3996_p3.read().is_01() || !w_15_V_fu_4006_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_14_V_fu_3996_p3.read()) > sc_biguint<32>(w_15_V_fu_4006_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_168_fu_4448_p2() {
    icmp_ln895_168_fu_4448_p2 = (!w_16_V_fu_4021_p3.read().is_01() || !w_17_V_fu_4031_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_16_V_fu_4021_p3.read()) > sc_biguint<32>(w_17_V_fu_4031_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_169_fu_4472_p2() {
    icmp_ln895_169_fu_4472_p2 = (!w_18_V_fu_4016_p3.read().is_01() || !w_19_V_fu_4026_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_18_V_fu_4016_p3.read()) > sc_biguint<32>(w_19_V_fu_4026_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_16_fu_1760_p2() {
    icmp_ln895_16_fu_1760_p2 = (!r_16_V_reg_5136.read().is_01() || !r_48_V_reg_5360.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_16_V_reg_5136.read()) > sc_biguint<32>(r_48_V_reg_5360.read()));
}

void bitonicSort64::thread_icmp_ln895_170_fu_4496_p2() {
    icmp_ln895_170_fu_4496_p2 = (!w_20_V_fu_4041_p3.read().is_01() || !w_21_V_fu_4051_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_20_V_fu_4041_p3.read()) > sc_biguint<32>(w_21_V_fu_4051_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_171_fu_4520_p2() {
    icmp_ln895_171_fu_4520_p2 = (!w_22_V_fu_4036_p3.read().is_01() || !w_23_V_fu_4046_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_22_V_fu_4036_p3.read()) > sc_biguint<32>(w_23_V_fu_4046_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_172_fu_4544_p2() {
    icmp_ln895_172_fu_4544_p2 = (!w_24_V_fu_4061_p3.read().is_01() || !w_25_V_fu_4071_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_24_V_fu_4061_p3.read()) > sc_biguint<32>(w_25_V_fu_4071_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_173_fu_4568_p2() {
    icmp_ln895_173_fu_4568_p2 = (!w_26_V_fu_4056_p3.read().is_01() || !w_27_V_fu_4066_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_26_V_fu_4056_p3.read()) > sc_biguint<32>(w_27_V_fu_4066_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_174_fu_4592_p2() {
    icmp_ln895_174_fu_4592_p2 = (!w_28_V_fu_4081_p3.read().is_01() || !w_29_V_fu_4091_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_28_V_fu_4081_p3.read()) > sc_biguint<32>(w_29_V_fu_4091_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_175_fu_4616_p2() {
    icmp_ln895_175_fu_4616_p2 = (!w_30_V_fu_4076_p3.read().is_01() || !w_31_V_fu_4086_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_30_V_fu_4076_p3.read()) > sc_biguint<32>(w_31_V_fu_4086_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_176_fu_4640_p2() {
    icmp_ln895_176_fu_4640_p2 = (!w_32_V_fu_4101_p3.read().is_01() || !w_33_V_fu_4111_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_32_V_fu_4101_p3.read()) > sc_biguint<32>(w_33_V_fu_4111_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_177_fu_4664_p2() {
    icmp_ln895_177_fu_4664_p2 = (!w_34_V_fu_4096_p3.read().is_01() || !w_35_V_fu_4106_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_34_V_fu_4096_p3.read()) > sc_biguint<32>(w_35_V_fu_4106_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_178_fu_4688_p2() {
    icmp_ln895_178_fu_4688_p2 = (!w_36_V_fu_4121_p3.read().is_01() || !w_37_V_fu_4131_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_36_V_fu_4121_p3.read()) > sc_biguint<32>(w_37_V_fu_4131_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_179_fu_4712_p2() {
    icmp_ln895_179_fu_4712_p2 = (!w_38_V_fu_4116_p3.read().is_01() || !w_39_V_fu_4126_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_38_V_fu_4116_p3.read()) > sc_biguint<32>(w_39_V_fu_4126_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_17_fu_1776_p2() {
    icmp_ln895_17_fu_1776_p2 = (!r_17_V_reg_5143.read().is_01() || !r_49_V_reg_5367.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_17_V_reg_5143.read()) > sc_biguint<32>(r_49_V_reg_5367.read()));
}

void bitonicSort64::thread_icmp_ln895_180_fu_4736_p2() {
    icmp_ln895_180_fu_4736_p2 = (!w_40_V_fu_4141_p3.read().is_01() || !w_41_V_fu_4151_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_40_V_fu_4141_p3.read()) > sc_biguint<32>(w_41_V_fu_4151_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_181_fu_4760_p2() {
    icmp_ln895_181_fu_4760_p2 = (!w_42_V_fu_4136_p3.read().is_01() || !w_43_V_fu_4146_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_42_V_fu_4136_p3.read()) > sc_biguint<32>(w_43_V_fu_4146_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_182_fu_4784_p2() {
    icmp_ln895_182_fu_4784_p2 = (!w_44_V_fu_4161_p3.read().is_01() || !w_45_V_fu_4171_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_44_V_fu_4161_p3.read()) > sc_biguint<32>(w_45_V_fu_4171_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_183_fu_4808_p2() {
    icmp_ln895_183_fu_4808_p2 = (!w_46_V_fu_4156_p3.read().is_01() || !w_47_V_fu_4166_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_46_V_fu_4156_p3.read()) > sc_biguint<32>(w_47_V_fu_4166_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_184_fu_4832_p2() {
    icmp_ln895_184_fu_4832_p2 = (!w_48_V_fu_4181_p3.read().is_01() || !w_49_V_fu_4191_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_48_V_fu_4181_p3.read()) > sc_biguint<32>(w_49_V_fu_4191_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_185_fu_4856_p2() {
    icmp_ln895_185_fu_4856_p2 = (!w_50_V_fu_4176_p3.read().is_01() || !w_51_V_fu_4186_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_50_V_fu_4176_p3.read()) > sc_biguint<32>(w_51_V_fu_4186_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_186_fu_4880_p2() {
    icmp_ln895_186_fu_4880_p2 = (!w_52_V_fu_4201_p3.read().is_01() || !w_53_V_fu_4211_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_52_V_fu_4201_p3.read()) > sc_biguint<32>(w_53_V_fu_4211_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_187_fu_4904_p2() {
    icmp_ln895_187_fu_4904_p2 = (!w_54_V_fu_4196_p3.read().is_01() || !w_55_V_fu_4206_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_54_V_fu_4196_p3.read()) > sc_biguint<32>(w_55_V_fu_4206_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_188_fu_4928_p2() {
    icmp_ln895_188_fu_4928_p2 = (!w_56_V_fu_4221_p3.read().is_01() || !w_57_V_fu_4231_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_56_V_fu_4221_p3.read()) > sc_biguint<32>(w_57_V_fu_4231_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_189_fu_4952_p2() {
    icmp_ln895_189_fu_4952_p2 = (!w_58_V_fu_4216_p3.read().is_01() || !w_59_V_fu_4226_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_58_V_fu_4216_p3.read()) > sc_biguint<32>(w_59_V_fu_4226_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_18_fu_1792_p2() {
    icmp_ln895_18_fu_1792_p2 = (!r_18_V_reg_5150.read().is_01() || !r_50_V_reg_5374.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_18_V_reg_5150.read()) > sc_biguint<32>(r_50_V_reg_5374.read()));
}

void bitonicSort64::thread_icmp_ln895_190_fu_4976_p2() {
    icmp_ln895_190_fu_4976_p2 = (!w_60_V_fu_4241_p3.read().is_01() || !w_61_V_fu_4251_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_60_V_fu_4241_p3.read()) > sc_biguint<32>(w_61_V_fu_4251_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_191_fu_5000_p2() {
    icmp_ln895_191_fu_5000_p2 = (!w_62_V_fu_4236_p3.read().is_01() || !w_63_V_fu_4246_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(w_62_V_fu_4236_p3.read()) > sc_biguint<32>(w_63_V_fu_4246_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_19_fu_1808_p2() {
    icmp_ln895_19_fu_1808_p2 = (!r_19_V_reg_5157.read().is_01() || !r_51_V_reg_5381.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_19_V_reg_5157.read()) > sc_biguint<32>(r_51_V_reg_5381.read()));
}

void bitonicSort64::thread_icmp_ln895_1_fu_1520_p2() {
    icmp_ln895_1_fu_1520_p2 = (!r_1_V_reg_5031.read().is_01() || !r_33_V_reg_5255.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_1_V_reg_5031.read()) > sc_biguint<32>(r_33_V_reg_5255.read()));
}

void bitonicSort64::thread_icmp_ln895_20_fu_1824_p2() {
    icmp_ln895_20_fu_1824_p2 = (!r_20_V_reg_5164.read().is_01() || !r_52_V_reg_5388.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_20_V_reg_5164.read()) > sc_biguint<32>(r_52_V_reg_5388.read()));
}

void bitonicSort64::thread_icmp_ln895_21_fu_1840_p2() {
    icmp_ln895_21_fu_1840_p2 = (!r_21_V_reg_5171.read().is_01() || !r_53_V_reg_5395.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_21_V_reg_5171.read()) > sc_biguint<32>(r_53_V_reg_5395.read()));
}

void bitonicSort64::thread_icmp_ln895_22_fu_1856_p2() {
    icmp_ln895_22_fu_1856_p2 = (!r_22_V_reg_5178.read().is_01() || !r_54_V_reg_5402.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_22_V_reg_5178.read()) > sc_biguint<32>(r_54_V_reg_5402.read()));
}

void bitonicSort64::thread_icmp_ln895_23_fu_1872_p2() {
    icmp_ln895_23_fu_1872_p2 = (!r_23_V_reg_5185.read().is_01() || !r_55_V_reg_5409.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_23_V_reg_5185.read()) > sc_biguint<32>(r_55_V_reg_5409.read()));
}

void bitonicSort64::thread_icmp_ln895_24_fu_1888_p2() {
    icmp_ln895_24_fu_1888_p2 = (!r_24_V_reg_5192.read().is_01() || !r_56_V_reg_5416.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_24_V_reg_5192.read()) > sc_biguint<32>(r_56_V_reg_5416.read()));
}

void bitonicSort64::thread_icmp_ln895_25_fu_1904_p2() {
    icmp_ln895_25_fu_1904_p2 = (!r_25_V_reg_5199.read().is_01() || !r_57_V_reg_5423.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_25_V_reg_5199.read()) > sc_biguint<32>(r_57_V_reg_5423.read()));
}

void bitonicSort64::thread_icmp_ln895_26_fu_1920_p2() {
    icmp_ln895_26_fu_1920_p2 = (!r_26_V_reg_5206.read().is_01() || !r_58_V_reg_5430.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_26_V_reg_5206.read()) > sc_biguint<32>(r_58_V_reg_5430.read()));
}

void bitonicSort64::thread_icmp_ln895_27_fu_1936_p2() {
    icmp_ln895_27_fu_1936_p2 = (!r_27_V_reg_5213.read().is_01() || !r_59_V_reg_5437.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_27_V_reg_5213.read()) > sc_biguint<32>(r_59_V_reg_5437.read()));
}

void bitonicSort64::thread_icmp_ln895_28_fu_1952_p2() {
    icmp_ln895_28_fu_1952_p2 = (!r_28_V_reg_5220.read().is_01() || !r_60_V_reg_5444.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_28_V_reg_5220.read()) > sc_biguint<32>(r_60_V_reg_5444.read()));
}

void bitonicSort64::thread_icmp_ln895_29_fu_1968_p2() {
    icmp_ln895_29_fu_1968_p2 = (!r_29_V_reg_5227.read().is_01() || !r_61_V_reg_5451.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_29_V_reg_5227.read()) > sc_biguint<32>(r_61_V_reg_5451.read()));
}

void bitonicSort64::thread_icmp_ln895_2_fu_1536_p2() {
    icmp_ln895_2_fu_1536_p2 = (!r_2_V_reg_5038.read().is_01() || !r_34_V_reg_5262.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_2_V_reg_5038.read()) > sc_biguint<32>(r_34_V_reg_5262.read()));
}

void bitonicSort64::thread_icmp_ln895_30_fu_1984_p2() {
    icmp_ln895_30_fu_1984_p2 = (!r_30_V_reg_5234.read().is_01() || !r_62_V_reg_5458.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_30_V_reg_5234.read()) > sc_biguint<32>(r_62_V_reg_5458.read()));
}

void bitonicSort64::thread_icmp_ln895_31_fu_2000_p2() {
    icmp_ln895_31_fu_2000_p2 = (!r_31_V_reg_5241.read().is_01() || !r_63_V_reg_5465.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_31_V_reg_5241.read()) > sc_biguint<32>(r_63_V_reg_5465.read()));
}

void bitonicSort64::thread_icmp_ln895_32_fu_2016_p2() {
    icmp_ln895_32_fu_2016_p2 = (!s_0_V_fu_1514_p3.read().is_01() || !s_16_V_fu_1770_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_0_V_fu_1514_p3.read()) > sc_biguint<32>(s_16_V_fu_1770_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_33_fu_2022_p2() {
    icmp_ln895_33_fu_2022_p2 = (!s_1_V_fu_1530_p3.read().is_01() || !s_17_V_fu_1786_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_1_V_fu_1530_p3.read()) > sc_biguint<32>(s_17_V_fu_1786_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_34_fu_2028_p2() {
    icmp_ln895_34_fu_2028_p2 = (!s_2_V_fu_1546_p3.read().is_01() || !s_18_V_fu_1802_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_2_V_fu_1546_p3.read()) > sc_biguint<32>(s_18_V_fu_1802_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_35_fu_2034_p2() {
    icmp_ln895_35_fu_2034_p2 = (!s_3_V_fu_1562_p3.read().is_01() || !s_19_V_fu_1818_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_3_V_fu_1562_p3.read()) > sc_biguint<32>(s_19_V_fu_1818_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_36_fu_2040_p2() {
    icmp_ln895_36_fu_2040_p2 = (!s_4_V_fu_1578_p3.read().is_01() || !s_20_V_fu_1834_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_4_V_fu_1578_p3.read()) > sc_biguint<32>(s_20_V_fu_1834_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_37_fu_2046_p2() {
    icmp_ln895_37_fu_2046_p2 = (!s_5_V_fu_1594_p3.read().is_01() || !s_21_V_fu_1850_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_5_V_fu_1594_p3.read()) > sc_biguint<32>(s_21_V_fu_1850_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_38_fu_2052_p2() {
    icmp_ln895_38_fu_2052_p2 = (!s_6_V_fu_1610_p3.read().is_01() || !s_22_V_fu_1866_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_6_V_fu_1610_p3.read()) > sc_biguint<32>(s_22_V_fu_1866_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_39_fu_2058_p2() {
    icmp_ln895_39_fu_2058_p2 = (!s_7_V_fu_1626_p3.read().is_01() || !s_23_V_fu_1882_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_7_V_fu_1626_p3.read()) > sc_biguint<32>(s_23_V_fu_1882_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_3_fu_1552_p2() {
    icmp_ln895_3_fu_1552_p2 = (!r_3_V_reg_5045.read().is_01() || !r_35_V_reg_5269.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_3_V_reg_5045.read()) > sc_biguint<32>(r_35_V_reg_5269.read()));
}

void bitonicSort64::thread_icmp_ln895_40_fu_2064_p2() {
    icmp_ln895_40_fu_2064_p2 = (!s_8_V_fu_1642_p3.read().is_01() || !s_24_V_fu_1898_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_8_V_fu_1642_p3.read()) > sc_biguint<32>(s_24_V_fu_1898_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_41_fu_2070_p2() {
    icmp_ln895_41_fu_2070_p2 = (!s_9_V_fu_1658_p3.read().is_01() || !s_25_V_fu_1914_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_9_V_fu_1658_p3.read()) > sc_biguint<32>(s_25_V_fu_1914_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_42_fu_2076_p2() {
    icmp_ln895_42_fu_2076_p2 = (!s_10_V_fu_1674_p3.read().is_01() || !s_26_V_fu_1930_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_10_V_fu_1674_p3.read()) > sc_biguint<32>(s_26_V_fu_1930_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_43_fu_2082_p2() {
    icmp_ln895_43_fu_2082_p2 = (!s_11_V_fu_1690_p3.read().is_01() || !s_27_V_fu_1946_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_11_V_fu_1690_p3.read()) > sc_biguint<32>(s_27_V_fu_1946_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_44_fu_2088_p2() {
    icmp_ln895_44_fu_2088_p2 = (!s_12_V_fu_1706_p3.read().is_01() || !s_28_V_fu_1962_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_12_V_fu_1706_p3.read()) > sc_biguint<32>(s_28_V_fu_1962_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_45_fu_2094_p2() {
    icmp_ln895_45_fu_2094_p2 = (!s_13_V_fu_1722_p3.read().is_01() || !s_29_V_fu_1978_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_13_V_fu_1722_p3.read()) > sc_biguint<32>(s_29_V_fu_1978_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_46_fu_2100_p2() {
    icmp_ln895_46_fu_2100_p2 = (!s_14_V_fu_1738_p3.read().is_01() || !s_30_V_fu_1994_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_14_V_fu_1738_p3.read()) > sc_biguint<32>(s_30_V_fu_1994_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_47_fu_2106_p2() {
    icmp_ln895_47_fu_2106_p2 = (!s_15_V_fu_1754_p3.read().is_01() || !s_31_V_fu_2010_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_15_V_fu_1754_p3.read()) > sc_biguint<32>(s_31_V_fu_2010_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_48_fu_2112_p2() {
    icmp_ln895_48_fu_2112_p2 = (!s_32_V_fu_1508_p3.read().is_01() || !s_48_V_fu_1764_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_32_V_fu_1508_p3.read()) > sc_biguint<32>(s_48_V_fu_1764_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_49_fu_2118_p2() {
    icmp_ln895_49_fu_2118_p2 = (!s_33_V_fu_1524_p3.read().is_01() || !s_49_V_fu_1780_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_33_V_fu_1524_p3.read()) > sc_biguint<32>(s_49_V_fu_1780_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_4_fu_1568_p2() {
    icmp_ln895_4_fu_1568_p2 = (!r_4_V_reg_5052.read().is_01() || !r_36_V_reg_5276.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_4_V_reg_5052.read()) > sc_biguint<32>(r_36_V_reg_5276.read()));
}

void bitonicSort64::thread_icmp_ln895_50_fu_2124_p2() {
    icmp_ln895_50_fu_2124_p2 = (!s_34_V_fu_1540_p3.read().is_01() || !s_50_V_fu_1796_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_34_V_fu_1540_p3.read()) > sc_biguint<32>(s_50_V_fu_1796_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_51_fu_2130_p2() {
    icmp_ln895_51_fu_2130_p2 = (!s_35_V_fu_1556_p3.read().is_01() || !s_51_V_fu_1812_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_35_V_fu_1556_p3.read()) > sc_biguint<32>(s_51_V_fu_1812_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_52_fu_2136_p2() {
    icmp_ln895_52_fu_2136_p2 = (!s_36_V_fu_1572_p3.read().is_01() || !s_52_V_fu_1828_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_36_V_fu_1572_p3.read()) > sc_biguint<32>(s_52_V_fu_1828_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_53_fu_2142_p2() {
    icmp_ln895_53_fu_2142_p2 = (!s_37_V_fu_1588_p3.read().is_01() || !s_53_V_fu_1844_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_37_V_fu_1588_p3.read()) > sc_biguint<32>(s_53_V_fu_1844_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_54_fu_2148_p2() {
    icmp_ln895_54_fu_2148_p2 = (!s_38_V_fu_1604_p3.read().is_01() || !s_54_V_fu_1860_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_38_V_fu_1604_p3.read()) > sc_biguint<32>(s_54_V_fu_1860_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_55_fu_2154_p2() {
    icmp_ln895_55_fu_2154_p2 = (!s_39_V_fu_1620_p3.read().is_01() || !s_55_V_fu_1876_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_39_V_fu_1620_p3.read()) > sc_biguint<32>(s_55_V_fu_1876_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_56_fu_2160_p2() {
    icmp_ln895_56_fu_2160_p2 = (!s_40_V_fu_1636_p3.read().is_01() || !s_56_V_fu_1892_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_40_V_fu_1636_p3.read()) > sc_biguint<32>(s_56_V_fu_1892_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_57_fu_2166_p2() {
    icmp_ln895_57_fu_2166_p2 = (!s_41_V_fu_1652_p3.read().is_01() || !s_57_V_fu_1908_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_41_V_fu_1652_p3.read()) > sc_biguint<32>(s_57_V_fu_1908_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_58_fu_2172_p2() {
    icmp_ln895_58_fu_2172_p2 = (!s_42_V_fu_1668_p3.read().is_01() || !s_58_V_fu_1924_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_42_V_fu_1668_p3.read()) > sc_biguint<32>(s_58_V_fu_1924_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_59_fu_2178_p2() {
    icmp_ln895_59_fu_2178_p2 = (!s_43_V_fu_1684_p3.read().is_01() || !s_59_V_fu_1940_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_43_V_fu_1684_p3.read()) > sc_biguint<32>(s_59_V_fu_1940_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_5_fu_1584_p2() {
    icmp_ln895_5_fu_1584_p2 = (!r_5_V_reg_5059.read().is_01() || !r_37_V_reg_5283.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_5_V_reg_5059.read()) > sc_biguint<32>(r_37_V_reg_5283.read()));
}

void bitonicSort64::thread_icmp_ln895_60_fu_2184_p2() {
    icmp_ln895_60_fu_2184_p2 = (!s_44_V_fu_1700_p3.read().is_01() || !s_60_V_fu_1956_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_44_V_fu_1700_p3.read()) > sc_biguint<32>(s_60_V_fu_1956_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_61_fu_2190_p2() {
    icmp_ln895_61_fu_2190_p2 = (!s_45_V_fu_1716_p3.read().is_01() || !s_61_V_fu_1972_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_45_V_fu_1716_p3.read()) > sc_biguint<32>(s_61_V_fu_1972_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_62_fu_2196_p2() {
    icmp_ln895_62_fu_2196_p2 = (!s_46_V_fu_1732_p3.read().is_01() || !s_62_V_fu_1988_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_46_V_fu_1732_p3.read()) > sc_biguint<32>(s_62_V_fu_1988_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_63_fu_2202_p2() {
    icmp_ln895_63_fu_2202_p2 = (!s_47_V_fu_1748_p3.read().is_01() || !s_63_V_fu_2004_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(s_47_V_fu_1748_p3.read()) > sc_biguint<32>(s_63_V_fu_2004_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_64_fu_2528_p2() {
    icmp_ln895_64_fu_2528_p2 = (!t_0_V_fu_2213_p3.read().is_01() || !t_8_V_fu_2293_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_0_V_fu_2213_p3.read()) > sc_biguint<32>(t_8_V_fu_2293_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_65_fu_2550_p2() {
    icmp_ln895_65_fu_2550_p2 = (!t_1_V_fu_2223_p3.read().is_01() || !t_9_V_fu_2303_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_1_V_fu_2223_p3.read()) > sc_biguint<32>(t_9_V_fu_2303_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_66_fu_2572_p2() {
    icmp_ln895_66_fu_2572_p2 = (!t_2_V_fu_2233_p3.read().is_01() || !t_10_V_fu_2313_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_2_V_fu_2233_p3.read()) > sc_biguint<32>(t_10_V_fu_2313_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_67_fu_2594_p2() {
    icmp_ln895_67_fu_2594_p2 = (!t_3_V_fu_2243_p3.read().is_01() || !t_11_V_fu_2323_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_3_V_fu_2243_p3.read()) > sc_biguint<32>(t_11_V_fu_2323_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_68_fu_2616_p2() {
    icmp_ln895_68_fu_2616_p2 = (!t_4_V_fu_2253_p3.read().is_01() || !t_12_V_fu_2333_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_4_V_fu_2253_p3.read()) > sc_biguint<32>(t_12_V_fu_2333_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_69_fu_2638_p2() {
    icmp_ln895_69_fu_2638_p2 = (!t_5_V_fu_2263_p3.read().is_01() || !t_13_V_fu_2343_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_5_V_fu_2263_p3.read()) > sc_biguint<32>(t_13_V_fu_2343_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_6_fu_1600_p2() {
    icmp_ln895_6_fu_1600_p2 = (!r_6_V_reg_5066.read().is_01() || !r_38_V_reg_5290.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_6_V_reg_5066.read()) > sc_biguint<32>(r_38_V_reg_5290.read()));
}

void bitonicSort64::thread_icmp_ln895_70_fu_2660_p2() {
    icmp_ln895_70_fu_2660_p2 = (!t_6_V_fu_2273_p3.read().is_01() || !t_14_V_fu_2353_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_6_V_fu_2273_p3.read()) > sc_biguint<32>(t_14_V_fu_2353_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_71_fu_2682_p2() {
    icmp_ln895_71_fu_2682_p2 = (!t_7_V_fu_2283_p3.read().is_01() || !t_15_V_fu_2363_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_7_V_fu_2283_p3.read()) > sc_biguint<32>(t_15_V_fu_2363_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_72_fu_2704_p2() {
    icmp_ln895_72_fu_2704_p2 = (!t_16_V_fu_2208_p3.read().is_01() || !t_24_V_fu_2288_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_16_V_fu_2208_p3.read()) > sc_biguint<32>(t_24_V_fu_2288_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_73_fu_2726_p2() {
    icmp_ln895_73_fu_2726_p2 = (!t_17_V_fu_2218_p3.read().is_01() || !t_25_V_fu_2298_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_17_V_fu_2218_p3.read()) > sc_biguint<32>(t_25_V_fu_2298_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_74_fu_2748_p2() {
    icmp_ln895_74_fu_2748_p2 = (!t_18_V_fu_2228_p3.read().is_01() || !t_26_V_fu_2308_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_18_V_fu_2228_p3.read()) > sc_biguint<32>(t_26_V_fu_2308_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_75_fu_2770_p2() {
    icmp_ln895_75_fu_2770_p2 = (!t_19_V_fu_2238_p3.read().is_01() || !t_27_V_fu_2318_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_19_V_fu_2238_p3.read()) > sc_biguint<32>(t_27_V_fu_2318_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_76_fu_2792_p2() {
    icmp_ln895_76_fu_2792_p2 = (!t_20_V_fu_2248_p3.read().is_01() || !t_28_V_fu_2328_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_20_V_fu_2248_p3.read()) > sc_biguint<32>(t_28_V_fu_2328_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_77_fu_2814_p2() {
    icmp_ln895_77_fu_2814_p2 = (!t_21_V_fu_2258_p3.read().is_01() || !t_29_V_fu_2338_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_21_V_fu_2258_p3.read()) > sc_biguint<32>(t_29_V_fu_2338_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_78_fu_2836_p2() {
    icmp_ln895_78_fu_2836_p2 = (!t_22_V_fu_2268_p3.read().is_01() || !t_30_V_fu_2348_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_22_V_fu_2268_p3.read()) > sc_biguint<32>(t_30_V_fu_2348_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_79_fu_2858_p2() {
    icmp_ln895_79_fu_2858_p2 = (!t_23_V_fu_2278_p3.read().is_01() || !t_31_V_fu_2358_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_23_V_fu_2278_p3.read()) > sc_biguint<32>(t_31_V_fu_2358_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_7_fu_1616_p2() {
    icmp_ln895_7_fu_1616_p2 = (!r_7_V_reg_5073.read().is_01() || !r_39_V_reg_5297.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_7_V_reg_5073.read()) > sc_biguint<32>(r_39_V_reg_5297.read()));
}

void bitonicSort64::thread_icmp_ln895_80_fu_2880_p2() {
    icmp_ln895_80_fu_2880_p2 = (!t_32_V_fu_2373_p3.read().is_01() || !t_40_V_fu_2453_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_32_V_fu_2373_p3.read()) > sc_biguint<32>(t_40_V_fu_2453_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_81_fu_2902_p2() {
    icmp_ln895_81_fu_2902_p2 = (!t_33_V_fu_2383_p3.read().is_01() || !t_41_V_fu_2463_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_33_V_fu_2383_p3.read()) > sc_biguint<32>(t_41_V_fu_2463_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_82_fu_2924_p2() {
    icmp_ln895_82_fu_2924_p2 = (!t_34_V_fu_2393_p3.read().is_01() || !t_42_V_fu_2473_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_34_V_fu_2393_p3.read()) > sc_biguint<32>(t_42_V_fu_2473_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_83_fu_2946_p2() {
    icmp_ln895_83_fu_2946_p2 = (!t_35_V_fu_2403_p3.read().is_01() || !t_43_V_fu_2483_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_35_V_fu_2403_p3.read()) > sc_biguint<32>(t_43_V_fu_2483_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_84_fu_2968_p2() {
    icmp_ln895_84_fu_2968_p2 = (!t_36_V_fu_2413_p3.read().is_01() || !t_44_V_fu_2493_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_36_V_fu_2413_p3.read()) > sc_biguint<32>(t_44_V_fu_2493_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_85_fu_2990_p2() {
    icmp_ln895_85_fu_2990_p2 = (!t_37_V_fu_2423_p3.read().is_01() || !t_45_V_fu_2503_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_37_V_fu_2423_p3.read()) > sc_biguint<32>(t_45_V_fu_2503_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_86_fu_3012_p2() {
    icmp_ln895_86_fu_3012_p2 = (!t_38_V_fu_2433_p3.read().is_01() || !t_46_V_fu_2513_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_38_V_fu_2433_p3.read()) > sc_biguint<32>(t_46_V_fu_2513_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_87_fu_3034_p2() {
    icmp_ln895_87_fu_3034_p2 = (!t_39_V_fu_2443_p3.read().is_01() || !t_47_V_fu_2523_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_39_V_fu_2443_p3.read()) > sc_biguint<32>(t_47_V_fu_2523_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_88_fu_3056_p2() {
    icmp_ln895_88_fu_3056_p2 = (!t_48_V_fu_2368_p3.read().is_01() || !t_56_V_fu_2448_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_48_V_fu_2368_p3.read()) > sc_biguint<32>(t_56_V_fu_2448_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_89_fu_3078_p2() {
    icmp_ln895_89_fu_3078_p2 = (!t_49_V_fu_2378_p3.read().is_01() || !t_57_V_fu_2458_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_49_V_fu_2378_p3.read()) > sc_biguint<32>(t_57_V_fu_2458_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_8_fu_1632_p2() {
    icmp_ln895_8_fu_1632_p2 = (!r_8_V_reg_5080.read().is_01() || !r_40_V_reg_5304.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_8_V_reg_5080.read()) > sc_biguint<32>(r_40_V_reg_5304.read()));
}

void bitonicSort64::thread_icmp_ln895_90_fu_3100_p2() {
    icmp_ln895_90_fu_3100_p2 = (!t_50_V_fu_2388_p3.read().is_01() || !t_58_V_fu_2468_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_50_V_fu_2388_p3.read()) > sc_biguint<32>(t_58_V_fu_2468_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_91_fu_3122_p2() {
    icmp_ln895_91_fu_3122_p2 = (!t_51_V_fu_2398_p3.read().is_01() || !t_59_V_fu_2478_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_51_V_fu_2398_p3.read()) > sc_biguint<32>(t_59_V_fu_2478_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_92_fu_3144_p2() {
    icmp_ln895_92_fu_3144_p2 = (!t_52_V_fu_2408_p3.read().is_01() || !t_60_V_fu_2488_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_52_V_fu_2408_p3.read()) > sc_biguint<32>(t_60_V_fu_2488_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_93_fu_3166_p2() {
    icmp_ln895_93_fu_3166_p2 = (!t_53_V_fu_2418_p3.read().is_01() || !t_61_V_fu_2498_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_53_V_fu_2418_p3.read()) > sc_biguint<32>(t_61_V_fu_2498_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_94_fu_3188_p2() {
    icmp_ln895_94_fu_3188_p2 = (!t_54_V_fu_2428_p3.read().is_01() || !t_62_V_fu_2508_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_54_V_fu_2428_p3.read()) > sc_biguint<32>(t_62_V_fu_2508_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_95_fu_3210_p2() {
    icmp_ln895_95_fu_3210_p2 = (!t_55_V_fu_2438_p3.read().is_01() || !t_63_V_fu_2518_p3.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_55_V_fu_2438_p3.read()) > sc_biguint<32>(t_63_V_fu_2518_p3.read()));
}

void bitonicSort64::thread_icmp_ln895_96_fu_3232_p2() {
    icmp_ln895_96_fu_3232_p2 = (!u_0_V_reg_6055.read().is_01() || !u_4_V_reg_6111.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_0_V_reg_6055.read()) > sc_biguint<32>(u_4_V_reg_6111.read()));
}

void bitonicSort64::thread_icmp_ln895_97_fu_3248_p2() {
    icmp_ln895_97_fu_3248_p2 = (!u_1_V_reg_6069.read().is_01() || !u_5_V_reg_6125.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_1_V_reg_6069.read()) > sc_biguint<32>(u_5_V_reg_6125.read()));
}

void bitonicSort64::thread_icmp_ln895_98_fu_3264_p2() {
    icmp_ln895_98_fu_3264_p2 = (!u_2_V_reg_6083.read().is_01() || !u_6_V_reg_6139.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_2_V_reg_6083.read()) > sc_biguint<32>(u_6_V_reg_6139.read()));
}

void bitonicSort64::thread_icmp_ln895_99_fu_3280_p2() {
    icmp_ln895_99_fu_3280_p2 = (!u_3_V_reg_6097.read().is_01() || !u_7_V_reg_6153.read().is_01())? sc_lv<1>(): (sc_biguint<32>(u_3_V_reg_6097.read()) > sc_biguint<32>(u_7_V_reg_6153.read()));
}

void bitonicSort64::thread_icmp_ln895_9_fu_1648_p2() {
    icmp_ln895_9_fu_1648_p2 = (!r_9_V_reg_5087.read().is_01() || !r_41_V_reg_5311.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_9_V_reg_5087.read()) > sc_biguint<32>(r_41_V_reg_5311.read()));
}

void bitonicSort64::thread_icmp_ln895_fu_1504_p2() {
    icmp_ln895_fu_1504_p2 = (!r_0_V_reg_5024.read().is_01() || !r_32_V_reg_5248.read().is_01())? sc_lv<1>(): (sc_biguint<32>(r_0_V_reg_5024.read()) > sc_biguint<32>(r_32_V_reg_5248.read()));
}

void bitonicSort64::thread_out_0_V() {
    out_0_V = (!icmp_ln895_160_fu_4256_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_160_fu_4256_p2.read()[0].to_bool())? w_1_V_fu_3951_p3.read(): w_0_V_fu_3941_p3.read());
}

void bitonicSort64::thread_out_0_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_0_V_ap_vld = ap_const_logic_1;
    } else {
        out_0_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_10_V() {
    out_10_V = (!icmp_ln895_165_fu_4376_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_165_fu_4376_p2.read()[0].to_bool())? w_11_V_fu_3986_p3.read(): w_10_V_fu_3976_p3.read());
}

void bitonicSort64::thread_out_10_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_10_V_ap_vld = ap_const_logic_1;
    } else {
        out_10_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_11_V() {
    out_11_V = (!icmp_ln895_165_fu_4376_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_165_fu_4376_p2.read()[0].to_bool())? w_10_V_fu_3976_p3.read(): w_11_V_fu_3986_p3.read());
}

void bitonicSort64::thread_out_11_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_11_V_ap_vld = ap_const_logic_1;
    } else {
        out_11_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_12_V() {
    out_12_V = (!icmp_ln895_166_fu_4400_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_166_fu_4400_p2.read()[0].to_bool())? w_13_V_fu_4011_p3.read(): w_12_V_fu_4001_p3.read());
}

void bitonicSort64::thread_out_12_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_12_V_ap_vld = ap_const_logic_1;
    } else {
        out_12_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_13_V() {
    out_13_V = (!icmp_ln895_166_fu_4400_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_166_fu_4400_p2.read()[0].to_bool())? w_12_V_fu_4001_p3.read(): w_13_V_fu_4011_p3.read());
}

void bitonicSort64::thread_out_13_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_13_V_ap_vld = ap_const_logic_1;
    } else {
        out_13_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_14_V() {
    out_14_V = (!icmp_ln895_167_fu_4424_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_167_fu_4424_p2.read()[0].to_bool())? w_15_V_fu_4006_p3.read(): w_14_V_fu_3996_p3.read());
}

void bitonicSort64::thread_out_14_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_14_V_ap_vld = ap_const_logic_1;
    } else {
        out_14_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_15_V() {
    out_15_V = (!icmp_ln895_167_fu_4424_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_167_fu_4424_p2.read()[0].to_bool())? w_14_V_fu_3996_p3.read(): w_15_V_fu_4006_p3.read());
}

void bitonicSort64::thread_out_15_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_15_V_ap_vld = ap_const_logic_1;
    } else {
        out_15_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_16_V() {
    out_16_V = (!icmp_ln895_168_fu_4448_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_168_fu_4448_p2.read()[0].to_bool())? w_17_V_fu_4031_p3.read(): w_16_V_fu_4021_p3.read());
}

void bitonicSort64::thread_out_16_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_16_V_ap_vld = ap_const_logic_1;
    } else {
        out_16_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_17_V() {
    out_17_V = (!icmp_ln895_168_fu_4448_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_168_fu_4448_p2.read()[0].to_bool())? w_16_V_fu_4021_p3.read(): w_17_V_fu_4031_p3.read());
}

void bitonicSort64::thread_out_17_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_17_V_ap_vld = ap_const_logic_1;
    } else {
        out_17_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_18_V() {
    out_18_V = (!icmp_ln895_169_fu_4472_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_169_fu_4472_p2.read()[0].to_bool())? w_19_V_fu_4026_p3.read(): w_18_V_fu_4016_p3.read());
}

void bitonicSort64::thread_out_18_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_18_V_ap_vld = ap_const_logic_1;
    } else {
        out_18_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_19_V() {
    out_19_V = (!icmp_ln895_169_fu_4472_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_169_fu_4472_p2.read()[0].to_bool())? w_18_V_fu_4016_p3.read(): w_19_V_fu_4026_p3.read());
}

void bitonicSort64::thread_out_19_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_19_V_ap_vld = ap_const_logic_1;
    } else {
        out_19_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_1_V() {
    out_1_V = (!icmp_ln895_160_fu_4256_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_160_fu_4256_p2.read()[0].to_bool())? w_0_V_fu_3941_p3.read(): w_1_V_fu_3951_p3.read());
}

void bitonicSort64::thread_out_1_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_1_V_ap_vld = ap_const_logic_1;
    } else {
        out_1_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_20_V() {
    out_20_V = (!icmp_ln895_170_fu_4496_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_170_fu_4496_p2.read()[0].to_bool())? w_21_V_fu_4051_p3.read(): w_20_V_fu_4041_p3.read());
}

void bitonicSort64::thread_out_20_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_20_V_ap_vld = ap_const_logic_1;
    } else {
        out_20_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_21_V() {
    out_21_V = (!icmp_ln895_170_fu_4496_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_170_fu_4496_p2.read()[0].to_bool())? w_20_V_fu_4041_p3.read(): w_21_V_fu_4051_p3.read());
}

void bitonicSort64::thread_out_21_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_21_V_ap_vld = ap_const_logic_1;
    } else {
        out_21_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_22_V() {
    out_22_V = (!icmp_ln895_171_fu_4520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_171_fu_4520_p2.read()[0].to_bool())? w_23_V_fu_4046_p3.read(): w_22_V_fu_4036_p3.read());
}

void bitonicSort64::thread_out_22_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_22_V_ap_vld = ap_const_logic_1;
    } else {
        out_22_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_23_V() {
    out_23_V = (!icmp_ln895_171_fu_4520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_171_fu_4520_p2.read()[0].to_bool())? w_22_V_fu_4036_p3.read(): w_23_V_fu_4046_p3.read());
}

void bitonicSort64::thread_out_23_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_23_V_ap_vld = ap_const_logic_1;
    } else {
        out_23_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_24_V() {
    out_24_V = (!icmp_ln895_172_fu_4544_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_172_fu_4544_p2.read()[0].to_bool())? w_25_V_fu_4071_p3.read(): w_24_V_fu_4061_p3.read());
}

void bitonicSort64::thread_out_24_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_24_V_ap_vld = ap_const_logic_1;
    } else {
        out_24_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_25_V() {
    out_25_V = (!icmp_ln895_172_fu_4544_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_172_fu_4544_p2.read()[0].to_bool())? w_24_V_fu_4061_p3.read(): w_25_V_fu_4071_p3.read());
}

void bitonicSort64::thread_out_25_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_25_V_ap_vld = ap_const_logic_1;
    } else {
        out_25_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_26_V() {
    out_26_V = (!icmp_ln895_173_fu_4568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_173_fu_4568_p2.read()[0].to_bool())? w_27_V_fu_4066_p3.read(): w_26_V_fu_4056_p3.read());
}

void bitonicSort64::thread_out_26_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_26_V_ap_vld = ap_const_logic_1;
    } else {
        out_26_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_27_V() {
    out_27_V = (!icmp_ln895_173_fu_4568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_173_fu_4568_p2.read()[0].to_bool())? w_26_V_fu_4056_p3.read(): w_27_V_fu_4066_p3.read());
}

void bitonicSort64::thread_out_27_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_27_V_ap_vld = ap_const_logic_1;
    } else {
        out_27_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_28_V() {
    out_28_V = (!icmp_ln895_174_fu_4592_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_174_fu_4592_p2.read()[0].to_bool())? w_29_V_fu_4091_p3.read(): w_28_V_fu_4081_p3.read());
}

void bitonicSort64::thread_out_28_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_28_V_ap_vld = ap_const_logic_1;
    } else {
        out_28_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_29_V() {
    out_29_V = (!icmp_ln895_174_fu_4592_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_174_fu_4592_p2.read()[0].to_bool())? w_28_V_fu_4081_p3.read(): w_29_V_fu_4091_p3.read());
}

void bitonicSort64::thread_out_29_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_29_V_ap_vld = ap_const_logic_1;
    } else {
        out_29_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_2_V() {
    out_2_V = (!icmp_ln895_161_fu_4280_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_161_fu_4280_p2.read()[0].to_bool())? w_3_V_fu_3946_p3.read(): w_2_V_fu_3936_p3.read());
}

void bitonicSort64::thread_out_2_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_2_V_ap_vld = ap_const_logic_1;
    } else {
        out_2_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_30_V() {
    out_30_V = (!icmp_ln895_175_fu_4616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_175_fu_4616_p2.read()[0].to_bool())? w_31_V_fu_4086_p3.read(): w_30_V_fu_4076_p3.read());
}

void bitonicSort64::thread_out_30_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_30_V_ap_vld = ap_const_logic_1;
    } else {
        out_30_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_31_V() {
    out_31_V = (!icmp_ln895_175_fu_4616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_175_fu_4616_p2.read()[0].to_bool())? w_30_V_fu_4076_p3.read(): w_31_V_fu_4086_p3.read());
}

void bitonicSort64::thread_out_31_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_31_V_ap_vld = ap_const_logic_1;
    } else {
        out_31_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_32_V() {
    out_32_V = (!icmp_ln895_176_fu_4640_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_176_fu_4640_p2.read()[0].to_bool())? w_33_V_fu_4111_p3.read(): w_32_V_fu_4101_p3.read());
}

void bitonicSort64::thread_out_32_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_32_V_ap_vld = ap_const_logic_1;
    } else {
        out_32_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_33_V() {
    out_33_V = (!icmp_ln895_176_fu_4640_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_176_fu_4640_p2.read()[0].to_bool())? w_32_V_fu_4101_p3.read(): w_33_V_fu_4111_p3.read());
}

void bitonicSort64::thread_out_33_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_33_V_ap_vld = ap_const_logic_1;
    } else {
        out_33_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_34_V() {
    out_34_V = (!icmp_ln895_177_fu_4664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_177_fu_4664_p2.read()[0].to_bool())? w_35_V_fu_4106_p3.read(): w_34_V_fu_4096_p3.read());
}

void bitonicSort64::thread_out_34_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_34_V_ap_vld = ap_const_logic_1;
    } else {
        out_34_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_35_V() {
    out_35_V = (!icmp_ln895_177_fu_4664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_177_fu_4664_p2.read()[0].to_bool())? w_34_V_fu_4096_p3.read(): w_35_V_fu_4106_p3.read());
}

void bitonicSort64::thread_out_35_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_35_V_ap_vld = ap_const_logic_1;
    } else {
        out_35_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_36_V() {
    out_36_V = (!icmp_ln895_178_fu_4688_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_178_fu_4688_p2.read()[0].to_bool())? w_37_V_fu_4131_p3.read(): w_36_V_fu_4121_p3.read());
}

void bitonicSort64::thread_out_36_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_36_V_ap_vld = ap_const_logic_1;
    } else {
        out_36_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_37_V() {
    out_37_V = (!icmp_ln895_178_fu_4688_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_178_fu_4688_p2.read()[0].to_bool())? w_36_V_fu_4121_p3.read(): w_37_V_fu_4131_p3.read());
}

void bitonicSort64::thread_out_37_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_37_V_ap_vld = ap_const_logic_1;
    } else {
        out_37_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_38_V() {
    out_38_V = (!icmp_ln895_179_fu_4712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_179_fu_4712_p2.read()[0].to_bool())? w_39_V_fu_4126_p3.read(): w_38_V_fu_4116_p3.read());
}

void bitonicSort64::thread_out_38_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_38_V_ap_vld = ap_const_logic_1;
    } else {
        out_38_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_39_V() {
    out_39_V = (!icmp_ln895_179_fu_4712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_179_fu_4712_p2.read()[0].to_bool())? w_38_V_fu_4116_p3.read(): w_39_V_fu_4126_p3.read());
}

void bitonicSort64::thread_out_39_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_39_V_ap_vld = ap_const_logic_1;
    } else {
        out_39_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_3_V() {
    out_3_V = (!icmp_ln895_161_fu_4280_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_161_fu_4280_p2.read()[0].to_bool())? w_2_V_fu_3936_p3.read(): w_3_V_fu_3946_p3.read());
}

void bitonicSort64::thread_out_3_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_3_V_ap_vld = ap_const_logic_1;
    } else {
        out_3_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_40_V() {
    out_40_V = (!icmp_ln895_180_fu_4736_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_180_fu_4736_p2.read()[0].to_bool())? w_41_V_fu_4151_p3.read(): w_40_V_fu_4141_p3.read());
}

void bitonicSort64::thread_out_40_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_40_V_ap_vld = ap_const_logic_1;
    } else {
        out_40_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_41_V() {
    out_41_V = (!icmp_ln895_180_fu_4736_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_180_fu_4736_p2.read()[0].to_bool())? w_40_V_fu_4141_p3.read(): w_41_V_fu_4151_p3.read());
}

void bitonicSort64::thread_out_41_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_41_V_ap_vld = ap_const_logic_1;
    } else {
        out_41_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_42_V() {
    out_42_V = (!icmp_ln895_181_fu_4760_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_181_fu_4760_p2.read()[0].to_bool())? w_43_V_fu_4146_p3.read(): w_42_V_fu_4136_p3.read());
}

void bitonicSort64::thread_out_42_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_42_V_ap_vld = ap_const_logic_1;
    } else {
        out_42_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_43_V() {
    out_43_V = (!icmp_ln895_181_fu_4760_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_181_fu_4760_p2.read()[0].to_bool())? w_42_V_fu_4136_p3.read(): w_43_V_fu_4146_p3.read());
}

void bitonicSort64::thread_out_43_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_43_V_ap_vld = ap_const_logic_1;
    } else {
        out_43_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_44_V() {
    out_44_V = (!icmp_ln895_182_fu_4784_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_182_fu_4784_p2.read()[0].to_bool())? w_45_V_fu_4171_p3.read(): w_44_V_fu_4161_p3.read());
}

void bitonicSort64::thread_out_44_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_44_V_ap_vld = ap_const_logic_1;
    } else {
        out_44_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_45_V() {
    out_45_V = (!icmp_ln895_182_fu_4784_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_182_fu_4784_p2.read()[0].to_bool())? w_44_V_fu_4161_p3.read(): w_45_V_fu_4171_p3.read());
}

void bitonicSort64::thread_out_45_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_45_V_ap_vld = ap_const_logic_1;
    } else {
        out_45_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_46_V() {
    out_46_V = (!icmp_ln895_183_fu_4808_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_183_fu_4808_p2.read()[0].to_bool())? w_47_V_fu_4166_p3.read(): w_46_V_fu_4156_p3.read());
}

void bitonicSort64::thread_out_46_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_46_V_ap_vld = ap_const_logic_1;
    } else {
        out_46_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_47_V() {
    out_47_V = (!icmp_ln895_183_fu_4808_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_183_fu_4808_p2.read()[0].to_bool())? w_46_V_fu_4156_p3.read(): w_47_V_fu_4166_p3.read());
}

void bitonicSort64::thread_out_47_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_47_V_ap_vld = ap_const_logic_1;
    } else {
        out_47_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_48_V() {
    out_48_V = (!icmp_ln895_184_fu_4832_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_184_fu_4832_p2.read()[0].to_bool())? w_49_V_fu_4191_p3.read(): w_48_V_fu_4181_p3.read());
}

void bitonicSort64::thread_out_48_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_48_V_ap_vld = ap_const_logic_1;
    } else {
        out_48_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_49_V() {
    out_49_V = (!icmp_ln895_184_fu_4832_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_184_fu_4832_p2.read()[0].to_bool())? w_48_V_fu_4181_p3.read(): w_49_V_fu_4191_p3.read());
}

void bitonicSort64::thread_out_49_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_49_V_ap_vld = ap_const_logic_1;
    } else {
        out_49_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_4_V() {
    out_4_V = (!icmp_ln895_162_fu_4304_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_162_fu_4304_p2.read()[0].to_bool())? w_5_V_fu_3971_p3.read(): w_4_V_fu_3961_p3.read());
}

void bitonicSort64::thread_out_4_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_4_V_ap_vld = ap_const_logic_1;
    } else {
        out_4_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_50_V() {
    out_50_V = (!icmp_ln895_185_fu_4856_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_185_fu_4856_p2.read()[0].to_bool())? w_51_V_fu_4186_p3.read(): w_50_V_fu_4176_p3.read());
}

void bitonicSort64::thread_out_50_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_50_V_ap_vld = ap_const_logic_1;
    } else {
        out_50_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_51_V() {
    out_51_V = (!icmp_ln895_185_fu_4856_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_185_fu_4856_p2.read()[0].to_bool())? w_50_V_fu_4176_p3.read(): w_51_V_fu_4186_p3.read());
}

void bitonicSort64::thread_out_51_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_51_V_ap_vld = ap_const_logic_1;
    } else {
        out_51_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_52_V() {
    out_52_V = (!icmp_ln895_186_fu_4880_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_186_fu_4880_p2.read()[0].to_bool())? w_53_V_fu_4211_p3.read(): w_52_V_fu_4201_p3.read());
}

void bitonicSort64::thread_out_52_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_52_V_ap_vld = ap_const_logic_1;
    } else {
        out_52_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_53_V() {
    out_53_V = (!icmp_ln895_186_fu_4880_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_186_fu_4880_p2.read()[0].to_bool())? w_52_V_fu_4201_p3.read(): w_53_V_fu_4211_p3.read());
}

void bitonicSort64::thread_out_53_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_53_V_ap_vld = ap_const_logic_1;
    } else {
        out_53_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_54_V() {
    out_54_V = (!icmp_ln895_187_fu_4904_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_187_fu_4904_p2.read()[0].to_bool())? w_55_V_fu_4206_p3.read(): w_54_V_fu_4196_p3.read());
}

void bitonicSort64::thread_out_54_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_54_V_ap_vld = ap_const_logic_1;
    } else {
        out_54_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_55_V() {
    out_55_V = (!icmp_ln895_187_fu_4904_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_187_fu_4904_p2.read()[0].to_bool())? w_54_V_fu_4196_p3.read(): w_55_V_fu_4206_p3.read());
}

void bitonicSort64::thread_out_55_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_55_V_ap_vld = ap_const_logic_1;
    } else {
        out_55_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_56_V() {
    out_56_V = (!icmp_ln895_188_fu_4928_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_188_fu_4928_p2.read()[0].to_bool())? w_57_V_fu_4231_p3.read(): w_56_V_fu_4221_p3.read());
}

void bitonicSort64::thread_out_56_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_56_V_ap_vld = ap_const_logic_1;
    } else {
        out_56_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_57_V() {
    out_57_V = (!icmp_ln895_188_fu_4928_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_188_fu_4928_p2.read()[0].to_bool())? w_56_V_fu_4221_p3.read(): w_57_V_fu_4231_p3.read());
}

void bitonicSort64::thread_out_57_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_57_V_ap_vld = ap_const_logic_1;
    } else {
        out_57_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_58_V() {
    out_58_V = (!icmp_ln895_189_fu_4952_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_189_fu_4952_p2.read()[0].to_bool())? w_59_V_fu_4226_p3.read(): w_58_V_fu_4216_p3.read());
}

void bitonicSort64::thread_out_58_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_58_V_ap_vld = ap_const_logic_1;
    } else {
        out_58_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_59_V() {
    out_59_V = (!icmp_ln895_189_fu_4952_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_189_fu_4952_p2.read()[0].to_bool())? w_58_V_fu_4216_p3.read(): w_59_V_fu_4226_p3.read());
}

void bitonicSort64::thread_out_59_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_59_V_ap_vld = ap_const_logic_1;
    } else {
        out_59_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_5_V() {
    out_5_V = (!icmp_ln895_162_fu_4304_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_162_fu_4304_p2.read()[0].to_bool())? w_4_V_fu_3961_p3.read(): w_5_V_fu_3971_p3.read());
}

void bitonicSort64::thread_out_5_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_5_V_ap_vld = ap_const_logic_1;
    } else {
        out_5_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_60_V() {
    out_60_V = (!icmp_ln895_190_fu_4976_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_190_fu_4976_p2.read()[0].to_bool())? w_61_V_fu_4251_p3.read(): w_60_V_fu_4241_p3.read());
}

void bitonicSort64::thread_out_60_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_60_V_ap_vld = ap_const_logic_1;
    } else {
        out_60_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_61_V() {
    out_61_V = (!icmp_ln895_190_fu_4976_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_190_fu_4976_p2.read()[0].to_bool())? w_60_V_fu_4241_p3.read(): w_61_V_fu_4251_p3.read());
}

void bitonicSort64::thread_out_61_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_61_V_ap_vld = ap_const_logic_1;
    } else {
        out_61_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_62_V() {
    out_62_V = (!icmp_ln895_191_fu_5000_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_191_fu_5000_p2.read()[0].to_bool())? w_63_V_fu_4246_p3.read(): w_62_V_fu_4236_p3.read());
}

void bitonicSort64::thread_out_62_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_62_V_ap_vld = ap_const_logic_1;
    } else {
        out_62_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_63_V() {
    out_63_V = (!icmp_ln895_191_fu_5000_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_191_fu_5000_p2.read()[0].to_bool())? w_62_V_fu_4236_p3.read(): w_63_V_fu_4246_p3.read());
}

void bitonicSort64::thread_out_63_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_63_V_ap_vld = ap_const_logic_1;
    } else {
        out_63_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_6_V() {
    out_6_V = (!icmp_ln895_163_fu_4328_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_163_fu_4328_p2.read()[0].to_bool())? w_7_V_fu_3966_p3.read(): w_6_V_fu_3956_p3.read());
}

void bitonicSort64::thread_out_6_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_6_V_ap_vld = ap_const_logic_1;
    } else {
        out_6_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_7_V() {
    out_7_V = (!icmp_ln895_163_fu_4328_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_163_fu_4328_p2.read()[0].to_bool())? w_6_V_fu_3956_p3.read(): w_7_V_fu_3966_p3.read());
}

void bitonicSort64::thread_out_7_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_7_V_ap_vld = ap_const_logic_1;
    } else {
        out_7_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_8_V() {
    out_8_V = (!icmp_ln895_164_fu_4352_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_164_fu_4352_p2.read()[0].to_bool())? w_9_V_fu_3991_p3.read(): w_8_V_fu_3981_p3.read());
}

void bitonicSort64::thread_out_8_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_8_V_ap_vld = ap_const_logic_1;
    } else {
        out_8_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_out_9_V() {
    out_9_V = (!icmp_ln895_164_fu_4352_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_164_fu_4352_p2.read()[0].to_bool())? w_8_V_fu_3981_p3.read(): w_9_V_fu_3991_p3.read());
}

void bitonicSort64::thread_out_9_V_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage4_11001.read(), ap_const_boolean_0))) {
        out_9_V_ap_vld = ap_const_logic_1;
    } else {
        out_9_V_ap_vld = ap_const_logic_0;
    }
}

void bitonicSort64::thread_s_0_V_fu_1514_p3() {
    s_0_V_fu_1514_p3 = (!icmp_ln895_fu_1504_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_fu_1504_p2.read()[0].to_bool())? r_32_V_reg_5248.read(): r_0_V_reg_5024.read());
}

void bitonicSort64::thread_s_10_V_fu_1674_p3() {
    s_10_V_fu_1674_p3 = (!icmp_ln895_10_fu_1664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_10_fu_1664_p2.read()[0].to_bool())? r_42_V_reg_5318.read(): r_10_V_reg_5094.read());
}

void bitonicSort64::thread_s_11_V_fu_1690_p3() {
    s_11_V_fu_1690_p3 = (!icmp_ln895_11_fu_1680_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_11_fu_1680_p2.read()[0].to_bool())? r_43_V_reg_5325.read(): r_11_V_reg_5101.read());
}

void bitonicSort64::thread_s_12_V_fu_1706_p3() {
    s_12_V_fu_1706_p3 = (!icmp_ln895_12_fu_1696_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_12_fu_1696_p2.read()[0].to_bool())? r_44_V_reg_5332.read(): r_12_V_reg_5108.read());
}

void bitonicSort64::thread_s_13_V_fu_1722_p3() {
    s_13_V_fu_1722_p3 = (!icmp_ln895_13_fu_1712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_13_fu_1712_p2.read()[0].to_bool())? r_45_V_reg_5339.read(): r_13_V_reg_5115.read());
}

void bitonicSort64::thread_s_14_V_fu_1738_p3() {
    s_14_V_fu_1738_p3 = (!icmp_ln895_14_fu_1728_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_14_fu_1728_p2.read()[0].to_bool())? r_46_V_reg_5346.read(): r_14_V_reg_5122.read());
}

void bitonicSort64::thread_s_15_V_fu_1754_p3() {
    s_15_V_fu_1754_p3 = (!icmp_ln895_15_fu_1744_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_15_fu_1744_p2.read()[0].to_bool())? r_47_V_reg_5353.read(): r_15_V_reg_5129.read());
}

void bitonicSort64::thread_s_16_V_fu_1770_p3() {
    s_16_V_fu_1770_p3 = (!icmp_ln895_16_fu_1760_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_16_fu_1760_p2.read()[0].to_bool())? r_48_V_reg_5360.read(): r_16_V_reg_5136.read());
}

void bitonicSort64::thread_s_17_V_fu_1786_p3() {
    s_17_V_fu_1786_p3 = (!icmp_ln895_17_fu_1776_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_17_fu_1776_p2.read()[0].to_bool())? r_49_V_reg_5367.read(): r_17_V_reg_5143.read());
}

void bitonicSort64::thread_s_18_V_fu_1802_p3() {
    s_18_V_fu_1802_p3 = (!icmp_ln895_18_fu_1792_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_18_fu_1792_p2.read()[0].to_bool())? r_50_V_reg_5374.read(): r_18_V_reg_5150.read());
}

void bitonicSort64::thread_s_19_V_fu_1818_p3() {
    s_19_V_fu_1818_p3 = (!icmp_ln895_19_fu_1808_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_19_fu_1808_p2.read()[0].to_bool())? r_51_V_reg_5381.read(): r_19_V_reg_5157.read());
}

void bitonicSort64::thread_s_1_V_fu_1530_p3() {
    s_1_V_fu_1530_p3 = (!icmp_ln895_1_fu_1520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_1_fu_1520_p2.read()[0].to_bool())? r_33_V_reg_5255.read(): r_1_V_reg_5031.read());
}

void bitonicSort64::thread_s_20_V_fu_1834_p3() {
    s_20_V_fu_1834_p3 = (!icmp_ln895_20_fu_1824_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_20_fu_1824_p2.read()[0].to_bool())? r_52_V_reg_5388.read(): r_20_V_reg_5164.read());
}

void bitonicSort64::thread_s_21_V_fu_1850_p3() {
    s_21_V_fu_1850_p3 = (!icmp_ln895_21_fu_1840_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_21_fu_1840_p2.read()[0].to_bool())? r_53_V_reg_5395.read(): r_21_V_reg_5171.read());
}

void bitonicSort64::thread_s_22_V_fu_1866_p3() {
    s_22_V_fu_1866_p3 = (!icmp_ln895_22_fu_1856_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_22_fu_1856_p2.read()[0].to_bool())? r_54_V_reg_5402.read(): r_22_V_reg_5178.read());
}

void bitonicSort64::thread_s_23_V_fu_1882_p3() {
    s_23_V_fu_1882_p3 = (!icmp_ln895_23_fu_1872_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_23_fu_1872_p2.read()[0].to_bool())? r_55_V_reg_5409.read(): r_23_V_reg_5185.read());
}

void bitonicSort64::thread_s_24_V_fu_1898_p3() {
    s_24_V_fu_1898_p3 = (!icmp_ln895_24_fu_1888_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_24_fu_1888_p2.read()[0].to_bool())? r_56_V_reg_5416.read(): r_24_V_reg_5192.read());
}

void bitonicSort64::thread_s_25_V_fu_1914_p3() {
    s_25_V_fu_1914_p3 = (!icmp_ln895_25_fu_1904_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_25_fu_1904_p2.read()[0].to_bool())? r_57_V_reg_5423.read(): r_25_V_reg_5199.read());
}

void bitonicSort64::thread_s_26_V_fu_1930_p3() {
    s_26_V_fu_1930_p3 = (!icmp_ln895_26_fu_1920_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_26_fu_1920_p2.read()[0].to_bool())? r_58_V_reg_5430.read(): r_26_V_reg_5206.read());
}

void bitonicSort64::thread_s_27_V_fu_1946_p3() {
    s_27_V_fu_1946_p3 = (!icmp_ln895_27_fu_1936_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_27_fu_1936_p2.read()[0].to_bool())? r_59_V_reg_5437.read(): r_27_V_reg_5213.read());
}

void bitonicSort64::thread_s_28_V_fu_1962_p3() {
    s_28_V_fu_1962_p3 = (!icmp_ln895_28_fu_1952_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_28_fu_1952_p2.read()[0].to_bool())? r_60_V_reg_5444.read(): r_28_V_reg_5220.read());
}

void bitonicSort64::thread_s_29_V_fu_1978_p3() {
    s_29_V_fu_1978_p3 = (!icmp_ln895_29_fu_1968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_29_fu_1968_p2.read()[0].to_bool())? r_61_V_reg_5451.read(): r_29_V_reg_5227.read());
}

void bitonicSort64::thread_s_2_V_fu_1546_p3() {
    s_2_V_fu_1546_p3 = (!icmp_ln895_2_fu_1536_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_2_fu_1536_p2.read()[0].to_bool())? r_34_V_reg_5262.read(): r_2_V_reg_5038.read());
}

void bitonicSort64::thread_s_30_V_fu_1994_p3() {
    s_30_V_fu_1994_p3 = (!icmp_ln895_30_fu_1984_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_30_fu_1984_p2.read()[0].to_bool())? r_62_V_reg_5458.read(): r_30_V_reg_5234.read());
}

void bitonicSort64::thread_s_31_V_fu_2010_p3() {
    s_31_V_fu_2010_p3 = (!icmp_ln895_31_fu_2000_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_31_fu_2000_p2.read()[0].to_bool())? r_63_V_reg_5465.read(): r_31_V_reg_5241.read());
}

void bitonicSort64::thread_s_32_V_fu_1508_p3() {
    s_32_V_fu_1508_p3 = (!icmp_ln895_fu_1504_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_fu_1504_p2.read()[0].to_bool())? r_0_V_reg_5024.read(): r_32_V_reg_5248.read());
}

void bitonicSort64::thread_s_33_V_fu_1524_p3() {
    s_33_V_fu_1524_p3 = (!icmp_ln895_1_fu_1520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_1_fu_1520_p2.read()[0].to_bool())? r_1_V_reg_5031.read(): r_33_V_reg_5255.read());
}

void bitonicSort64::thread_s_34_V_fu_1540_p3() {
    s_34_V_fu_1540_p3 = (!icmp_ln895_2_fu_1536_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_2_fu_1536_p2.read()[0].to_bool())? r_2_V_reg_5038.read(): r_34_V_reg_5262.read());
}

void bitonicSort64::thread_s_35_V_fu_1556_p3() {
    s_35_V_fu_1556_p3 = (!icmp_ln895_3_fu_1552_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_3_fu_1552_p2.read()[0].to_bool())? r_3_V_reg_5045.read(): r_35_V_reg_5269.read());
}

void bitonicSort64::thread_s_36_V_fu_1572_p3() {
    s_36_V_fu_1572_p3 = (!icmp_ln895_4_fu_1568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_4_fu_1568_p2.read()[0].to_bool())? r_4_V_reg_5052.read(): r_36_V_reg_5276.read());
}

void bitonicSort64::thread_s_37_V_fu_1588_p3() {
    s_37_V_fu_1588_p3 = (!icmp_ln895_5_fu_1584_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_5_fu_1584_p2.read()[0].to_bool())? r_5_V_reg_5059.read(): r_37_V_reg_5283.read());
}

void bitonicSort64::thread_s_38_V_fu_1604_p3() {
    s_38_V_fu_1604_p3 = (!icmp_ln895_6_fu_1600_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_6_fu_1600_p2.read()[0].to_bool())? r_6_V_reg_5066.read(): r_38_V_reg_5290.read());
}

void bitonicSort64::thread_s_39_V_fu_1620_p3() {
    s_39_V_fu_1620_p3 = (!icmp_ln895_7_fu_1616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_7_fu_1616_p2.read()[0].to_bool())? r_7_V_reg_5073.read(): r_39_V_reg_5297.read());
}

void bitonicSort64::thread_s_3_V_fu_1562_p3() {
    s_3_V_fu_1562_p3 = (!icmp_ln895_3_fu_1552_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_3_fu_1552_p2.read()[0].to_bool())? r_35_V_reg_5269.read(): r_3_V_reg_5045.read());
}

void bitonicSort64::thread_s_40_V_fu_1636_p3() {
    s_40_V_fu_1636_p3 = (!icmp_ln895_8_fu_1632_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_8_fu_1632_p2.read()[0].to_bool())? r_8_V_reg_5080.read(): r_40_V_reg_5304.read());
}

void bitonicSort64::thread_s_41_V_fu_1652_p3() {
    s_41_V_fu_1652_p3 = (!icmp_ln895_9_fu_1648_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_9_fu_1648_p2.read()[0].to_bool())? r_9_V_reg_5087.read(): r_41_V_reg_5311.read());
}

void bitonicSort64::thread_s_42_V_fu_1668_p3() {
    s_42_V_fu_1668_p3 = (!icmp_ln895_10_fu_1664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_10_fu_1664_p2.read()[0].to_bool())? r_10_V_reg_5094.read(): r_42_V_reg_5318.read());
}

void bitonicSort64::thread_s_43_V_fu_1684_p3() {
    s_43_V_fu_1684_p3 = (!icmp_ln895_11_fu_1680_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_11_fu_1680_p2.read()[0].to_bool())? r_11_V_reg_5101.read(): r_43_V_reg_5325.read());
}

void bitonicSort64::thread_s_44_V_fu_1700_p3() {
    s_44_V_fu_1700_p3 = (!icmp_ln895_12_fu_1696_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_12_fu_1696_p2.read()[0].to_bool())? r_12_V_reg_5108.read(): r_44_V_reg_5332.read());
}

void bitonicSort64::thread_s_45_V_fu_1716_p3() {
    s_45_V_fu_1716_p3 = (!icmp_ln895_13_fu_1712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_13_fu_1712_p2.read()[0].to_bool())? r_13_V_reg_5115.read(): r_45_V_reg_5339.read());
}

void bitonicSort64::thread_s_46_V_fu_1732_p3() {
    s_46_V_fu_1732_p3 = (!icmp_ln895_14_fu_1728_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_14_fu_1728_p2.read()[0].to_bool())? r_14_V_reg_5122.read(): r_46_V_reg_5346.read());
}

void bitonicSort64::thread_s_47_V_fu_1748_p3() {
    s_47_V_fu_1748_p3 = (!icmp_ln895_15_fu_1744_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_15_fu_1744_p2.read()[0].to_bool())? r_15_V_reg_5129.read(): r_47_V_reg_5353.read());
}

void bitonicSort64::thread_s_48_V_fu_1764_p3() {
    s_48_V_fu_1764_p3 = (!icmp_ln895_16_fu_1760_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_16_fu_1760_p2.read()[0].to_bool())? r_16_V_reg_5136.read(): r_48_V_reg_5360.read());
}

void bitonicSort64::thread_s_49_V_fu_1780_p3() {
    s_49_V_fu_1780_p3 = (!icmp_ln895_17_fu_1776_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_17_fu_1776_p2.read()[0].to_bool())? r_17_V_reg_5143.read(): r_49_V_reg_5367.read());
}

void bitonicSort64::thread_s_4_V_fu_1578_p3() {
    s_4_V_fu_1578_p3 = (!icmp_ln895_4_fu_1568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_4_fu_1568_p2.read()[0].to_bool())? r_36_V_reg_5276.read(): r_4_V_reg_5052.read());
}

void bitonicSort64::thread_s_50_V_fu_1796_p3() {
    s_50_V_fu_1796_p3 = (!icmp_ln895_18_fu_1792_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_18_fu_1792_p2.read()[0].to_bool())? r_18_V_reg_5150.read(): r_50_V_reg_5374.read());
}

void bitonicSort64::thread_s_51_V_fu_1812_p3() {
    s_51_V_fu_1812_p3 = (!icmp_ln895_19_fu_1808_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_19_fu_1808_p2.read()[0].to_bool())? r_19_V_reg_5157.read(): r_51_V_reg_5381.read());
}

void bitonicSort64::thread_s_52_V_fu_1828_p3() {
    s_52_V_fu_1828_p3 = (!icmp_ln895_20_fu_1824_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_20_fu_1824_p2.read()[0].to_bool())? r_20_V_reg_5164.read(): r_52_V_reg_5388.read());
}

void bitonicSort64::thread_s_53_V_fu_1844_p3() {
    s_53_V_fu_1844_p3 = (!icmp_ln895_21_fu_1840_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_21_fu_1840_p2.read()[0].to_bool())? r_21_V_reg_5171.read(): r_53_V_reg_5395.read());
}

void bitonicSort64::thread_s_54_V_fu_1860_p3() {
    s_54_V_fu_1860_p3 = (!icmp_ln895_22_fu_1856_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_22_fu_1856_p2.read()[0].to_bool())? r_22_V_reg_5178.read(): r_54_V_reg_5402.read());
}

void bitonicSort64::thread_s_55_V_fu_1876_p3() {
    s_55_V_fu_1876_p3 = (!icmp_ln895_23_fu_1872_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_23_fu_1872_p2.read()[0].to_bool())? r_23_V_reg_5185.read(): r_55_V_reg_5409.read());
}

void bitonicSort64::thread_s_56_V_fu_1892_p3() {
    s_56_V_fu_1892_p3 = (!icmp_ln895_24_fu_1888_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_24_fu_1888_p2.read()[0].to_bool())? r_24_V_reg_5192.read(): r_56_V_reg_5416.read());
}

void bitonicSort64::thread_s_57_V_fu_1908_p3() {
    s_57_V_fu_1908_p3 = (!icmp_ln895_25_fu_1904_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_25_fu_1904_p2.read()[0].to_bool())? r_25_V_reg_5199.read(): r_57_V_reg_5423.read());
}

void bitonicSort64::thread_s_58_V_fu_1924_p3() {
    s_58_V_fu_1924_p3 = (!icmp_ln895_26_fu_1920_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_26_fu_1920_p2.read()[0].to_bool())? r_26_V_reg_5206.read(): r_58_V_reg_5430.read());
}

void bitonicSort64::thread_s_59_V_fu_1940_p3() {
    s_59_V_fu_1940_p3 = (!icmp_ln895_27_fu_1936_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_27_fu_1936_p2.read()[0].to_bool())? r_27_V_reg_5213.read(): r_59_V_reg_5437.read());
}

void bitonicSort64::thread_s_5_V_fu_1594_p3() {
    s_5_V_fu_1594_p3 = (!icmp_ln895_5_fu_1584_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_5_fu_1584_p2.read()[0].to_bool())? r_37_V_reg_5283.read(): r_5_V_reg_5059.read());
}

void bitonicSort64::thread_s_60_V_fu_1956_p3() {
    s_60_V_fu_1956_p3 = (!icmp_ln895_28_fu_1952_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_28_fu_1952_p2.read()[0].to_bool())? r_28_V_reg_5220.read(): r_60_V_reg_5444.read());
}

void bitonicSort64::thread_s_61_V_fu_1972_p3() {
    s_61_V_fu_1972_p3 = (!icmp_ln895_29_fu_1968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_29_fu_1968_p2.read()[0].to_bool())? r_29_V_reg_5227.read(): r_61_V_reg_5451.read());
}

void bitonicSort64::thread_s_62_V_fu_1988_p3() {
    s_62_V_fu_1988_p3 = (!icmp_ln895_30_fu_1984_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_30_fu_1984_p2.read()[0].to_bool())? r_30_V_reg_5234.read(): r_62_V_reg_5458.read());
}

void bitonicSort64::thread_s_63_V_fu_2004_p3() {
    s_63_V_fu_2004_p3 = (!icmp_ln895_31_fu_2000_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_31_fu_2000_p2.read()[0].to_bool())? r_31_V_reg_5241.read(): r_63_V_reg_5465.read());
}

void bitonicSort64::thread_s_6_V_fu_1610_p3() {
    s_6_V_fu_1610_p3 = (!icmp_ln895_6_fu_1600_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_6_fu_1600_p2.read()[0].to_bool())? r_38_V_reg_5290.read(): r_6_V_reg_5066.read());
}

void bitonicSort64::thread_s_7_V_fu_1626_p3() {
    s_7_V_fu_1626_p3 = (!icmp_ln895_7_fu_1616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_7_fu_1616_p2.read()[0].to_bool())? r_39_V_reg_5297.read(): r_7_V_reg_5073.read());
}

void bitonicSort64::thread_s_8_V_fu_1642_p3() {
    s_8_V_fu_1642_p3 = (!icmp_ln895_8_fu_1632_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_8_fu_1632_p2.read()[0].to_bool())? r_40_V_reg_5304.read(): r_8_V_reg_5080.read());
}

void bitonicSort64::thread_s_9_V_fu_1658_p3() {
    s_9_V_fu_1658_p3 = (!icmp_ln895_9_fu_1648_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_9_fu_1648_p2.read()[0].to_bool())? r_41_V_reg_5311.read(): r_9_V_reg_5087.read());
}

void bitonicSort64::thread_t_0_V_fu_2213_p3() {
    t_0_V_fu_2213_p3 = (!icmp_ln895_32_reg_5856.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_32_reg_5856.read()[0].to_bool())? s_16_V_reg_5670.read(): s_0_V_reg_5478.read());
}

void bitonicSort64::thread_t_10_V_fu_2313_p3() {
    t_10_V_fu_2313_p3 = (!icmp_ln895_42_reg_5916.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_42_reg_5916.read()[0].to_bool())? s_26_V_reg_5790.read(): s_10_V_reg_5598.read());
}

void bitonicSort64::thread_t_11_V_fu_2323_p3() {
    t_11_V_fu_2323_p3 = (!icmp_ln895_43_reg_5922.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_43_reg_5922.read()[0].to_bool())? s_27_V_reg_5802.read(): s_11_V_reg_5610.read());
}

void bitonicSort64::thread_t_12_V_fu_2333_p3() {
    t_12_V_fu_2333_p3 = (!icmp_ln895_44_reg_5928.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_44_reg_5928.read()[0].to_bool())? s_28_V_reg_5814.read(): s_12_V_reg_5622.read());
}

void bitonicSort64::thread_t_13_V_fu_2343_p3() {
    t_13_V_fu_2343_p3 = (!icmp_ln895_45_reg_5934.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_45_reg_5934.read()[0].to_bool())? s_29_V_reg_5826.read(): s_13_V_reg_5634.read());
}

void bitonicSort64::thread_t_14_V_fu_2353_p3() {
    t_14_V_fu_2353_p3 = (!icmp_ln895_46_reg_5940.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_46_reg_5940.read()[0].to_bool())? s_30_V_reg_5838.read(): s_14_V_reg_5646.read());
}

void bitonicSort64::thread_t_15_V_fu_2363_p3() {
    t_15_V_fu_2363_p3 = (!icmp_ln895_47_reg_5946.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_47_reg_5946.read()[0].to_bool())? s_31_V_reg_5850.read(): s_15_V_reg_5658.read());
}

void bitonicSort64::thread_t_16_V_fu_2208_p3() {
    t_16_V_fu_2208_p3 = (!icmp_ln895_32_reg_5856.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_32_reg_5856.read()[0].to_bool())? s_0_V_reg_5478.read(): s_16_V_reg_5670.read());
}

void bitonicSort64::thread_t_17_V_fu_2218_p3() {
    t_17_V_fu_2218_p3 = (!icmp_ln895_33_reg_5862.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_33_reg_5862.read()[0].to_bool())? s_1_V_reg_5490.read(): s_17_V_reg_5682.read());
}

void bitonicSort64::thread_t_18_V_fu_2228_p3() {
    t_18_V_fu_2228_p3 = (!icmp_ln895_34_reg_5868.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_34_reg_5868.read()[0].to_bool())? s_2_V_reg_5502.read(): s_18_V_reg_5694.read());
}

void bitonicSort64::thread_t_19_V_fu_2238_p3() {
    t_19_V_fu_2238_p3 = (!icmp_ln895_35_reg_5874.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_35_reg_5874.read()[0].to_bool())? s_3_V_reg_5514.read(): s_19_V_reg_5706.read());
}

void bitonicSort64::thread_t_1_V_fu_2223_p3() {
    t_1_V_fu_2223_p3 = (!icmp_ln895_33_reg_5862.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_33_reg_5862.read()[0].to_bool())? s_17_V_reg_5682.read(): s_1_V_reg_5490.read());
}

void bitonicSort64::thread_t_20_V_fu_2248_p3() {
    t_20_V_fu_2248_p3 = (!icmp_ln895_36_reg_5880.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_36_reg_5880.read()[0].to_bool())? s_4_V_reg_5526.read(): s_20_V_reg_5718.read());
}

void bitonicSort64::thread_t_21_V_fu_2258_p3() {
    t_21_V_fu_2258_p3 = (!icmp_ln895_37_reg_5886.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_37_reg_5886.read()[0].to_bool())? s_5_V_reg_5538.read(): s_21_V_reg_5730.read());
}

void bitonicSort64::thread_t_22_V_fu_2268_p3() {
    t_22_V_fu_2268_p3 = (!icmp_ln895_38_reg_5892.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_38_reg_5892.read()[0].to_bool())? s_6_V_reg_5550.read(): s_22_V_reg_5742.read());
}

void bitonicSort64::thread_t_23_V_fu_2278_p3() {
    t_23_V_fu_2278_p3 = (!icmp_ln895_39_reg_5898.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_39_reg_5898.read()[0].to_bool())? s_7_V_reg_5562.read(): s_23_V_reg_5754.read());
}

void bitonicSort64::thread_t_24_V_fu_2288_p3() {
    t_24_V_fu_2288_p3 = (!icmp_ln895_40_reg_5904.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_40_reg_5904.read()[0].to_bool())? s_8_V_reg_5574.read(): s_24_V_reg_5766.read());
}

void bitonicSort64::thread_t_25_V_fu_2298_p3() {
    t_25_V_fu_2298_p3 = (!icmp_ln895_41_reg_5910.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_41_reg_5910.read()[0].to_bool())? s_9_V_reg_5586.read(): s_25_V_reg_5778.read());
}

void bitonicSort64::thread_t_26_V_fu_2308_p3() {
    t_26_V_fu_2308_p3 = (!icmp_ln895_42_reg_5916.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_42_reg_5916.read()[0].to_bool())? s_10_V_reg_5598.read(): s_26_V_reg_5790.read());
}

void bitonicSort64::thread_t_27_V_fu_2318_p3() {
    t_27_V_fu_2318_p3 = (!icmp_ln895_43_reg_5922.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_43_reg_5922.read()[0].to_bool())? s_11_V_reg_5610.read(): s_27_V_reg_5802.read());
}

void bitonicSort64::thread_t_28_V_fu_2328_p3() {
    t_28_V_fu_2328_p3 = (!icmp_ln895_44_reg_5928.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_44_reg_5928.read()[0].to_bool())? s_12_V_reg_5622.read(): s_28_V_reg_5814.read());
}

void bitonicSort64::thread_t_29_V_fu_2338_p3() {
    t_29_V_fu_2338_p3 = (!icmp_ln895_45_reg_5934.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_45_reg_5934.read()[0].to_bool())? s_13_V_reg_5634.read(): s_29_V_reg_5826.read());
}

void bitonicSort64::thread_t_2_V_fu_2233_p3() {
    t_2_V_fu_2233_p3 = (!icmp_ln895_34_reg_5868.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_34_reg_5868.read()[0].to_bool())? s_18_V_reg_5694.read(): s_2_V_reg_5502.read());
}

void bitonicSort64::thread_t_30_V_fu_2348_p3() {
    t_30_V_fu_2348_p3 = (!icmp_ln895_46_reg_5940.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_46_reg_5940.read()[0].to_bool())? s_14_V_reg_5646.read(): s_30_V_reg_5838.read());
}

void bitonicSort64::thread_t_31_V_fu_2358_p3() {
    t_31_V_fu_2358_p3 = (!icmp_ln895_47_reg_5946.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_47_reg_5946.read()[0].to_bool())? s_15_V_reg_5658.read(): s_31_V_reg_5850.read());
}

void bitonicSort64::thread_t_32_V_fu_2373_p3() {
    t_32_V_fu_2373_p3 = (!icmp_ln895_48_reg_5952.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_48_reg_5952.read()[0].to_bool())? s_48_V_reg_5664.read(): s_32_V_reg_5472.read());
}

void bitonicSort64::thread_t_33_V_fu_2383_p3() {
    t_33_V_fu_2383_p3 = (!icmp_ln895_49_reg_5958.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_49_reg_5958.read()[0].to_bool())? s_49_V_reg_5676.read(): s_33_V_reg_5484.read());
}

void bitonicSort64::thread_t_34_V_fu_2393_p3() {
    t_34_V_fu_2393_p3 = (!icmp_ln895_50_reg_5964.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_50_reg_5964.read()[0].to_bool())? s_50_V_reg_5688.read(): s_34_V_reg_5496.read());
}

void bitonicSort64::thread_t_35_V_fu_2403_p3() {
    t_35_V_fu_2403_p3 = (!icmp_ln895_51_reg_5970.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_51_reg_5970.read()[0].to_bool())? s_51_V_reg_5700.read(): s_35_V_reg_5508.read());
}

void bitonicSort64::thread_t_36_V_fu_2413_p3() {
    t_36_V_fu_2413_p3 = (!icmp_ln895_52_reg_5976.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_52_reg_5976.read()[0].to_bool())? s_52_V_reg_5712.read(): s_36_V_reg_5520.read());
}

void bitonicSort64::thread_t_37_V_fu_2423_p3() {
    t_37_V_fu_2423_p3 = (!icmp_ln895_53_reg_5982.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_53_reg_5982.read()[0].to_bool())? s_53_V_reg_5724.read(): s_37_V_reg_5532.read());
}

void bitonicSort64::thread_t_38_V_fu_2433_p3() {
    t_38_V_fu_2433_p3 = (!icmp_ln895_54_reg_5988.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_54_reg_5988.read()[0].to_bool())? s_54_V_reg_5736.read(): s_38_V_reg_5544.read());
}

void bitonicSort64::thread_t_39_V_fu_2443_p3() {
    t_39_V_fu_2443_p3 = (!icmp_ln895_55_reg_5994.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_55_reg_5994.read()[0].to_bool())? s_55_V_reg_5748.read(): s_39_V_reg_5556.read());
}

void bitonicSort64::thread_t_3_V_fu_2243_p3() {
    t_3_V_fu_2243_p3 = (!icmp_ln895_35_reg_5874.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_35_reg_5874.read()[0].to_bool())? s_19_V_reg_5706.read(): s_3_V_reg_5514.read());
}

void bitonicSort64::thread_t_40_V_fu_2453_p3() {
    t_40_V_fu_2453_p3 = (!icmp_ln895_56_reg_6000.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_56_reg_6000.read()[0].to_bool())? s_56_V_reg_5760.read(): s_40_V_reg_5568.read());
}

void bitonicSort64::thread_t_41_V_fu_2463_p3() {
    t_41_V_fu_2463_p3 = (!icmp_ln895_57_reg_6006.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_57_reg_6006.read()[0].to_bool())? s_57_V_reg_5772.read(): s_41_V_reg_5580.read());
}

void bitonicSort64::thread_t_42_V_fu_2473_p3() {
    t_42_V_fu_2473_p3 = (!icmp_ln895_58_reg_6012.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_58_reg_6012.read()[0].to_bool())? s_58_V_reg_5784.read(): s_42_V_reg_5592.read());
}

void bitonicSort64::thread_t_43_V_fu_2483_p3() {
    t_43_V_fu_2483_p3 = (!icmp_ln895_59_reg_6018.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_59_reg_6018.read()[0].to_bool())? s_59_V_reg_5796.read(): s_43_V_reg_5604.read());
}

void bitonicSort64::thread_t_44_V_fu_2493_p3() {
    t_44_V_fu_2493_p3 = (!icmp_ln895_60_reg_6024.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_60_reg_6024.read()[0].to_bool())? s_60_V_reg_5808.read(): s_44_V_reg_5616.read());
}

void bitonicSort64::thread_t_45_V_fu_2503_p3() {
    t_45_V_fu_2503_p3 = (!icmp_ln895_61_reg_6030.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_61_reg_6030.read()[0].to_bool())? s_61_V_reg_5820.read(): s_45_V_reg_5628.read());
}

void bitonicSort64::thread_t_46_V_fu_2513_p3() {
    t_46_V_fu_2513_p3 = (!icmp_ln895_62_reg_6036.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_62_reg_6036.read()[0].to_bool())? s_62_V_reg_5832.read(): s_46_V_reg_5640.read());
}

void bitonicSort64::thread_t_47_V_fu_2523_p3() {
    t_47_V_fu_2523_p3 = (!icmp_ln895_63_reg_6042.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_63_reg_6042.read()[0].to_bool())? s_63_V_reg_5844.read(): s_47_V_reg_5652.read());
}

void bitonicSort64::thread_t_48_V_fu_2368_p3() {
    t_48_V_fu_2368_p3 = (!icmp_ln895_48_reg_5952.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_48_reg_5952.read()[0].to_bool())? s_32_V_reg_5472.read(): s_48_V_reg_5664.read());
}

void bitonicSort64::thread_t_49_V_fu_2378_p3() {
    t_49_V_fu_2378_p3 = (!icmp_ln895_49_reg_5958.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_49_reg_5958.read()[0].to_bool())? s_33_V_reg_5484.read(): s_49_V_reg_5676.read());
}

void bitonicSort64::thread_t_4_V_fu_2253_p3() {
    t_4_V_fu_2253_p3 = (!icmp_ln895_36_reg_5880.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_36_reg_5880.read()[0].to_bool())? s_20_V_reg_5718.read(): s_4_V_reg_5526.read());
}

void bitonicSort64::thread_t_50_V_fu_2388_p3() {
    t_50_V_fu_2388_p3 = (!icmp_ln895_50_reg_5964.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_50_reg_5964.read()[0].to_bool())? s_34_V_reg_5496.read(): s_50_V_reg_5688.read());
}

void bitonicSort64::thread_t_51_V_fu_2398_p3() {
    t_51_V_fu_2398_p3 = (!icmp_ln895_51_reg_5970.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_51_reg_5970.read()[0].to_bool())? s_35_V_reg_5508.read(): s_51_V_reg_5700.read());
}

void bitonicSort64::thread_t_52_V_fu_2408_p3() {
    t_52_V_fu_2408_p3 = (!icmp_ln895_52_reg_5976.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_52_reg_5976.read()[0].to_bool())? s_36_V_reg_5520.read(): s_52_V_reg_5712.read());
}

void bitonicSort64::thread_t_53_V_fu_2418_p3() {
    t_53_V_fu_2418_p3 = (!icmp_ln895_53_reg_5982.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_53_reg_5982.read()[0].to_bool())? s_37_V_reg_5532.read(): s_53_V_reg_5724.read());
}

void bitonicSort64::thread_t_54_V_fu_2428_p3() {
    t_54_V_fu_2428_p3 = (!icmp_ln895_54_reg_5988.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_54_reg_5988.read()[0].to_bool())? s_38_V_reg_5544.read(): s_54_V_reg_5736.read());
}

void bitonicSort64::thread_t_55_V_fu_2438_p3() {
    t_55_V_fu_2438_p3 = (!icmp_ln895_55_reg_5994.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_55_reg_5994.read()[0].to_bool())? s_39_V_reg_5556.read(): s_55_V_reg_5748.read());
}

void bitonicSort64::thread_t_56_V_fu_2448_p3() {
    t_56_V_fu_2448_p3 = (!icmp_ln895_56_reg_6000.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_56_reg_6000.read()[0].to_bool())? s_40_V_reg_5568.read(): s_56_V_reg_5760.read());
}

void bitonicSort64::thread_t_57_V_fu_2458_p3() {
    t_57_V_fu_2458_p3 = (!icmp_ln895_57_reg_6006.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_57_reg_6006.read()[0].to_bool())? s_41_V_reg_5580.read(): s_57_V_reg_5772.read());
}

void bitonicSort64::thread_t_58_V_fu_2468_p3() {
    t_58_V_fu_2468_p3 = (!icmp_ln895_58_reg_6012.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_58_reg_6012.read()[0].to_bool())? s_42_V_reg_5592.read(): s_58_V_reg_5784.read());
}

void bitonicSort64::thread_t_59_V_fu_2478_p3() {
    t_59_V_fu_2478_p3 = (!icmp_ln895_59_reg_6018.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_59_reg_6018.read()[0].to_bool())? s_43_V_reg_5604.read(): s_59_V_reg_5796.read());
}

void bitonicSort64::thread_t_5_V_fu_2263_p3() {
    t_5_V_fu_2263_p3 = (!icmp_ln895_37_reg_5886.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_37_reg_5886.read()[0].to_bool())? s_21_V_reg_5730.read(): s_5_V_reg_5538.read());
}

void bitonicSort64::thread_t_60_V_fu_2488_p3() {
    t_60_V_fu_2488_p3 = (!icmp_ln895_60_reg_6024.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_60_reg_6024.read()[0].to_bool())? s_44_V_reg_5616.read(): s_60_V_reg_5808.read());
}

void bitonicSort64::thread_t_61_V_fu_2498_p3() {
    t_61_V_fu_2498_p3 = (!icmp_ln895_61_reg_6030.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_61_reg_6030.read()[0].to_bool())? s_45_V_reg_5628.read(): s_61_V_reg_5820.read());
}

void bitonicSort64::thread_t_62_V_fu_2508_p3() {
    t_62_V_fu_2508_p3 = (!icmp_ln895_62_reg_6036.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_62_reg_6036.read()[0].to_bool())? s_46_V_reg_5640.read(): s_62_V_reg_5832.read());
}

void bitonicSort64::thread_t_63_V_fu_2518_p3() {
    t_63_V_fu_2518_p3 = (!icmp_ln895_63_reg_6042.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_63_reg_6042.read()[0].to_bool())? s_47_V_reg_5652.read(): s_63_V_reg_5844.read());
}

void bitonicSort64::thread_t_6_V_fu_2273_p3() {
    t_6_V_fu_2273_p3 = (!icmp_ln895_38_reg_5892.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_38_reg_5892.read()[0].to_bool())? s_22_V_reg_5742.read(): s_6_V_reg_5550.read());
}

void bitonicSort64::thread_t_7_V_fu_2283_p3() {
    t_7_V_fu_2283_p3 = (!icmp_ln895_39_reg_5898.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_39_reg_5898.read()[0].to_bool())? s_23_V_reg_5754.read(): s_7_V_reg_5562.read());
}

void bitonicSort64::thread_t_8_V_fu_2293_p3() {
    t_8_V_fu_2293_p3 = (!icmp_ln895_40_reg_5904.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_40_reg_5904.read()[0].to_bool())? s_24_V_reg_5766.read(): s_8_V_reg_5574.read());
}

void bitonicSort64::thread_t_9_V_fu_2303_p3() {
    t_9_V_fu_2303_p3 = (!icmp_ln895_41_reg_5910.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_41_reg_5910.read()[0].to_bool())? s_25_V_reg_5778.read(): s_9_V_reg_5586.read());
}

void bitonicSort64::thread_u_0_V_fu_2542_p3() {
    u_0_V_fu_2542_p3 = (!icmp_ln895_64_fu_2528_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_64_fu_2528_p2.read()[0].to_bool())? t_8_V_fu_2293_p3.read(): t_0_V_fu_2213_p3.read());
}

void bitonicSort64::thread_u_10_V_fu_2578_p3() {
    u_10_V_fu_2578_p3 = (!icmp_ln895_66_fu_2572_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_66_fu_2572_p2.read()[0].to_bool())? t_2_V_fu_2233_p3.read(): t_10_V_fu_2313_p3.read());
}

void bitonicSort64::thread_u_11_V_fu_2600_p3() {
    u_11_V_fu_2600_p3 = (!icmp_ln895_67_fu_2594_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_67_fu_2594_p2.read()[0].to_bool())? t_3_V_fu_2243_p3.read(): t_11_V_fu_2323_p3.read());
}

void bitonicSort64::thread_u_12_V_fu_2622_p3() {
    u_12_V_fu_2622_p3 = (!icmp_ln895_68_fu_2616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_68_fu_2616_p2.read()[0].to_bool())? t_4_V_fu_2253_p3.read(): t_12_V_fu_2333_p3.read());
}

void bitonicSort64::thread_u_13_V_fu_2644_p3() {
    u_13_V_fu_2644_p3 = (!icmp_ln895_69_fu_2638_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_69_fu_2638_p2.read()[0].to_bool())? t_5_V_fu_2263_p3.read(): t_13_V_fu_2343_p3.read());
}

void bitonicSort64::thread_u_14_V_fu_2666_p3() {
    u_14_V_fu_2666_p3 = (!icmp_ln895_70_fu_2660_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_70_fu_2660_p2.read()[0].to_bool())? t_6_V_fu_2273_p3.read(): t_14_V_fu_2353_p3.read());
}

void bitonicSort64::thread_u_15_V_fu_2688_p3() {
    u_15_V_fu_2688_p3 = (!icmp_ln895_71_fu_2682_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_71_fu_2682_p2.read()[0].to_bool())? t_7_V_fu_2283_p3.read(): t_15_V_fu_2363_p3.read());
}

void bitonicSort64::thread_u_16_V_fu_2718_p3() {
    u_16_V_fu_2718_p3 = (!icmp_ln895_72_fu_2704_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_72_fu_2704_p2.read()[0].to_bool())? t_24_V_fu_2288_p3.read(): t_16_V_fu_2208_p3.read());
}

void bitonicSort64::thread_u_17_V_fu_2740_p3() {
    u_17_V_fu_2740_p3 = (!icmp_ln895_73_fu_2726_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_73_fu_2726_p2.read()[0].to_bool())? t_25_V_fu_2298_p3.read(): t_17_V_fu_2218_p3.read());
}

void bitonicSort64::thread_u_18_V_fu_2762_p3() {
    u_18_V_fu_2762_p3 = (!icmp_ln895_74_fu_2748_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_74_fu_2748_p2.read()[0].to_bool())? t_26_V_fu_2308_p3.read(): t_18_V_fu_2228_p3.read());
}

void bitonicSort64::thread_u_19_V_fu_2784_p3() {
    u_19_V_fu_2784_p3 = (!icmp_ln895_75_fu_2770_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_75_fu_2770_p2.read()[0].to_bool())? t_27_V_fu_2318_p3.read(): t_19_V_fu_2238_p3.read());
}

void bitonicSort64::thread_u_1_V_fu_2564_p3() {
    u_1_V_fu_2564_p3 = (!icmp_ln895_65_fu_2550_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_65_fu_2550_p2.read()[0].to_bool())? t_9_V_fu_2303_p3.read(): t_1_V_fu_2223_p3.read());
}

void bitonicSort64::thread_u_20_V_fu_2806_p3() {
    u_20_V_fu_2806_p3 = (!icmp_ln895_76_fu_2792_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_76_fu_2792_p2.read()[0].to_bool())? t_28_V_fu_2328_p3.read(): t_20_V_fu_2248_p3.read());
}

void bitonicSort64::thread_u_21_V_fu_2828_p3() {
    u_21_V_fu_2828_p3 = (!icmp_ln895_77_fu_2814_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_77_fu_2814_p2.read()[0].to_bool())? t_29_V_fu_2338_p3.read(): t_21_V_fu_2258_p3.read());
}

void bitonicSort64::thread_u_22_V_fu_2850_p3() {
    u_22_V_fu_2850_p3 = (!icmp_ln895_78_fu_2836_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_78_fu_2836_p2.read()[0].to_bool())? t_30_V_fu_2348_p3.read(): t_22_V_fu_2268_p3.read());
}

void bitonicSort64::thread_u_23_V_fu_2872_p3() {
    u_23_V_fu_2872_p3 = (!icmp_ln895_79_fu_2858_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_79_fu_2858_p2.read()[0].to_bool())? t_31_V_fu_2358_p3.read(): t_23_V_fu_2278_p3.read());
}

void bitonicSort64::thread_u_24_V_fu_2710_p3() {
    u_24_V_fu_2710_p3 = (!icmp_ln895_72_fu_2704_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_72_fu_2704_p2.read()[0].to_bool())? t_16_V_fu_2208_p3.read(): t_24_V_fu_2288_p3.read());
}

void bitonicSort64::thread_u_25_V_fu_2732_p3() {
    u_25_V_fu_2732_p3 = (!icmp_ln895_73_fu_2726_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_73_fu_2726_p2.read()[0].to_bool())? t_17_V_fu_2218_p3.read(): t_25_V_fu_2298_p3.read());
}

void bitonicSort64::thread_u_26_V_fu_2754_p3() {
    u_26_V_fu_2754_p3 = (!icmp_ln895_74_fu_2748_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_74_fu_2748_p2.read()[0].to_bool())? t_18_V_fu_2228_p3.read(): t_26_V_fu_2308_p3.read());
}

void bitonicSort64::thread_u_27_V_fu_2776_p3() {
    u_27_V_fu_2776_p3 = (!icmp_ln895_75_fu_2770_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_75_fu_2770_p2.read()[0].to_bool())? t_19_V_fu_2238_p3.read(): t_27_V_fu_2318_p3.read());
}

void bitonicSort64::thread_u_28_V_fu_2798_p3() {
    u_28_V_fu_2798_p3 = (!icmp_ln895_76_fu_2792_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_76_fu_2792_p2.read()[0].to_bool())? t_20_V_fu_2248_p3.read(): t_28_V_fu_2328_p3.read());
}

void bitonicSort64::thread_u_29_V_fu_2820_p3() {
    u_29_V_fu_2820_p3 = (!icmp_ln895_77_fu_2814_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_77_fu_2814_p2.read()[0].to_bool())? t_21_V_fu_2258_p3.read(): t_29_V_fu_2338_p3.read());
}

void bitonicSort64::thread_u_2_V_fu_2586_p3() {
    u_2_V_fu_2586_p3 = (!icmp_ln895_66_fu_2572_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_66_fu_2572_p2.read()[0].to_bool())? t_10_V_fu_2313_p3.read(): t_2_V_fu_2233_p3.read());
}

void bitonicSort64::thread_u_30_V_fu_2842_p3() {
    u_30_V_fu_2842_p3 = (!icmp_ln895_78_fu_2836_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_78_fu_2836_p2.read()[0].to_bool())? t_22_V_fu_2268_p3.read(): t_30_V_fu_2348_p3.read());
}

void bitonicSort64::thread_u_31_V_fu_2864_p3() {
    u_31_V_fu_2864_p3 = (!icmp_ln895_79_fu_2858_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_79_fu_2858_p2.read()[0].to_bool())? t_23_V_fu_2278_p3.read(): t_31_V_fu_2358_p3.read());
}

void bitonicSort64::thread_u_32_V_fu_2894_p3() {
    u_32_V_fu_2894_p3 = (!icmp_ln895_80_fu_2880_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_80_fu_2880_p2.read()[0].to_bool())? t_40_V_fu_2453_p3.read(): t_32_V_fu_2373_p3.read());
}

void bitonicSort64::thread_u_33_V_fu_2916_p3() {
    u_33_V_fu_2916_p3 = (!icmp_ln895_81_fu_2902_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_81_fu_2902_p2.read()[0].to_bool())? t_41_V_fu_2463_p3.read(): t_33_V_fu_2383_p3.read());
}

void bitonicSort64::thread_u_34_V_fu_2938_p3() {
    u_34_V_fu_2938_p3 = (!icmp_ln895_82_fu_2924_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_82_fu_2924_p2.read()[0].to_bool())? t_42_V_fu_2473_p3.read(): t_34_V_fu_2393_p3.read());
}

void bitonicSort64::thread_u_35_V_fu_2960_p3() {
    u_35_V_fu_2960_p3 = (!icmp_ln895_83_fu_2946_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_83_fu_2946_p2.read()[0].to_bool())? t_43_V_fu_2483_p3.read(): t_35_V_fu_2403_p3.read());
}

void bitonicSort64::thread_u_36_V_fu_2982_p3() {
    u_36_V_fu_2982_p3 = (!icmp_ln895_84_fu_2968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_84_fu_2968_p2.read()[0].to_bool())? t_44_V_fu_2493_p3.read(): t_36_V_fu_2413_p3.read());
}

void bitonicSort64::thread_u_37_V_fu_3004_p3() {
    u_37_V_fu_3004_p3 = (!icmp_ln895_85_fu_2990_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_85_fu_2990_p2.read()[0].to_bool())? t_45_V_fu_2503_p3.read(): t_37_V_fu_2423_p3.read());
}

void bitonicSort64::thread_u_38_V_fu_3026_p3() {
    u_38_V_fu_3026_p3 = (!icmp_ln895_86_fu_3012_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_86_fu_3012_p2.read()[0].to_bool())? t_46_V_fu_2513_p3.read(): t_38_V_fu_2433_p3.read());
}

void bitonicSort64::thread_u_39_V_fu_3048_p3() {
    u_39_V_fu_3048_p3 = (!icmp_ln895_87_fu_3034_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_87_fu_3034_p2.read()[0].to_bool())? t_47_V_fu_2523_p3.read(): t_39_V_fu_2443_p3.read());
}

void bitonicSort64::thread_u_3_V_fu_2608_p3() {
    u_3_V_fu_2608_p3 = (!icmp_ln895_67_fu_2594_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_67_fu_2594_p2.read()[0].to_bool())? t_11_V_fu_2323_p3.read(): t_3_V_fu_2243_p3.read());
}

void bitonicSort64::thread_u_40_V_fu_2886_p3() {
    u_40_V_fu_2886_p3 = (!icmp_ln895_80_fu_2880_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_80_fu_2880_p2.read()[0].to_bool())? t_32_V_fu_2373_p3.read(): t_40_V_fu_2453_p3.read());
}

void bitonicSort64::thread_u_41_V_fu_2908_p3() {
    u_41_V_fu_2908_p3 = (!icmp_ln895_81_fu_2902_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_81_fu_2902_p2.read()[0].to_bool())? t_33_V_fu_2383_p3.read(): t_41_V_fu_2463_p3.read());
}

void bitonicSort64::thread_u_42_V_fu_2930_p3() {
    u_42_V_fu_2930_p3 = (!icmp_ln895_82_fu_2924_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_82_fu_2924_p2.read()[0].to_bool())? t_34_V_fu_2393_p3.read(): t_42_V_fu_2473_p3.read());
}

void bitonicSort64::thread_u_43_V_fu_2952_p3() {
    u_43_V_fu_2952_p3 = (!icmp_ln895_83_fu_2946_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_83_fu_2946_p2.read()[0].to_bool())? t_35_V_fu_2403_p3.read(): t_43_V_fu_2483_p3.read());
}

void bitonicSort64::thread_u_44_V_fu_2974_p3() {
    u_44_V_fu_2974_p3 = (!icmp_ln895_84_fu_2968_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_84_fu_2968_p2.read()[0].to_bool())? t_36_V_fu_2413_p3.read(): t_44_V_fu_2493_p3.read());
}

void bitonicSort64::thread_u_45_V_fu_2996_p3() {
    u_45_V_fu_2996_p3 = (!icmp_ln895_85_fu_2990_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_85_fu_2990_p2.read()[0].to_bool())? t_37_V_fu_2423_p3.read(): t_45_V_fu_2503_p3.read());
}

void bitonicSort64::thread_u_46_V_fu_3018_p3() {
    u_46_V_fu_3018_p3 = (!icmp_ln895_86_fu_3012_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_86_fu_3012_p2.read()[0].to_bool())? t_38_V_fu_2433_p3.read(): t_46_V_fu_2513_p3.read());
}

void bitonicSort64::thread_u_47_V_fu_3040_p3() {
    u_47_V_fu_3040_p3 = (!icmp_ln895_87_fu_3034_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_87_fu_3034_p2.read()[0].to_bool())? t_39_V_fu_2443_p3.read(): t_47_V_fu_2523_p3.read());
}

void bitonicSort64::thread_u_48_V_fu_3070_p3() {
    u_48_V_fu_3070_p3 = (!icmp_ln895_88_fu_3056_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_88_fu_3056_p2.read()[0].to_bool())? t_56_V_fu_2448_p3.read(): t_48_V_fu_2368_p3.read());
}

void bitonicSort64::thread_u_49_V_fu_3092_p3() {
    u_49_V_fu_3092_p3 = (!icmp_ln895_89_fu_3078_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_89_fu_3078_p2.read()[0].to_bool())? t_57_V_fu_2458_p3.read(): t_49_V_fu_2378_p3.read());
}

void bitonicSort64::thread_u_4_V_fu_2630_p3() {
    u_4_V_fu_2630_p3 = (!icmp_ln895_68_fu_2616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_68_fu_2616_p2.read()[0].to_bool())? t_12_V_fu_2333_p3.read(): t_4_V_fu_2253_p3.read());
}

void bitonicSort64::thread_u_50_V_fu_3114_p3() {
    u_50_V_fu_3114_p3 = (!icmp_ln895_90_fu_3100_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_90_fu_3100_p2.read()[0].to_bool())? t_58_V_fu_2468_p3.read(): t_50_V_fu_2388_p3.read());
}

void bitonicSort64::thread_u_51_V_fu_3136_p3() {
    u_51_V_fu_3136_p3 = (!icmp_ln895_91_fu_3122_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_91_fu_3122_p2.read()[0].to_bool())? t_59_V_fu_2478_p3.read(): t_51_V_fu_2398_p3.read());
}

void bitonicSort64::thread_u_52_V_fu_3158_p3() {
    u_52_V_fu_3158_p3 = (!icmp_ln895_92_fu_3144_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_92_fu_3144_p2.read()[0].to_bool())? t_60_V_fu_2488_p3.read(): t_52_V_fu_2408_p3.read());
}

void bitonicSort64::thread_u_53_V_fu_3180_p3() {
    u_53_V_fu_3180_p3 = (!icmp_ln895_93_fu_3166_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_93_fu_3166_p2.read()[0].to_bool())? t_61_V_fu_2498_p3.read(): t_53_V_fu_2418_p3.read());
}

void bitonicSort64::thread_u_54_V_fu_3202_p3() {
    u_54_V_fu_3202_p3 = (!icmp_ln895_94_fu_3188_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_94_fu_3188_p2.read()[0].to_bool())? t_62_V_fu_2508_p3.read(): t_54_V_fu_2428_p3.read());
}

void bitonicSort64::thread_u_55_V_fu_3224_p3() {
    u_55_V_fu_3224_p3 = (!icmp_ln895_95_fu_3210_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_95_fu_3210_p2.read()[0].to_bool())? t_63_V_fu_2518_p3.read(): t_55_V_fu_2438_p3.read());
}

void bitonicSort64::thread_u_56_V_fu_3062_p3() {
    u_56_V_fu_3062_p3 = (!icmp_ln895_88_fu_3056_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_88_fu_3056_p2.read()[0].to_bool())? t_48_V_fu_2368_p3.read(): t_56_V_fu_2448_p3.read());
}

void bitonicSort64::thread_u_57_V_fu_3084_p3() {
    u_57_V_fu_3084_p3 = (!icmp_ln895_89_fu_3078_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_89_fu_3078_p2.read()[0].to_bool())? t_49_V_fu_2378_p3.read(): t_57_V_fu_2458_p3.read());
}

void bitonicSort64::thread_u_58_V_fu_3106_p3() {
    u_58_V_fu_3106_p3 = (!icmp_ln895_90_fu_3100_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_90_fu_3100_p2.read()[0].to_bool())? t_50_V_fu_2388_p3.read(): t_58_V_fu_2468_p3.read());
}

void bitonicSort64::thread_u_59_V_fu_3128_p3() {
    u_59_V_fu_3128_p3 = (!icmp_ln895_91_fu_3122_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_91_fu_3122_p2.read()[0].to_bool())? t_51_V_fu_2398_p3.read(): t_59_V_fu_2478_p3.read());
}

void bitonicSort64::thread_u_5_V_fu_2652_p3() {
    u_5_V_fu_2652_p3 = (!icmp_ln895_69_fu_2638_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_69_fu_2638_p2.read()[0].to_bool())? t_13_V_fu_2343_p3.read(): t_5_V_fu_2263_p3.read());
}

void bitonicSort64::thread_u_60_V_fu_3150_p3() {
    u_60_V_fu_3150_p3 = (!icmp_ln895_92_fu_3144_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_92_fu_3144_p2.read()[0].to_bool())? t_52_V_fu_2408_p3.read(): t_60_V_fu_2488_p3.read());
}

void bitonicSort64::thread_u_61_V_fu_3172_p3() {
    u_61_V_fu_3172_p3 = (!icmp_ln895_93_fu_3166_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_93_fu_3166_p2.read()[0].to_bool())? t_53_V_fu_2418_p3.read(): t_61_V_fu_2498_p3.read());
}

void bitonicSort64::thread_u_62_V_fu_3194_p3() {
    u_62_V_fu_3194_p3 = (!icmp_ln895_94_fu_3188_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_94_fu_3188_p2.read()[0].to_bool())? t_54_V_fu_2428_p3.read(): t_62_V_fu_2508_p3.read());
}

void bitonicSort64::thread_u_63_V_fu_3216_p3() {
    u_63_V_fu_3216_p3 = (!icmp_ln895_95_fu_3210_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_95_fu_3210_p2.read()[0].to_bool())? t_55_V_fu_2438_p3.read(): t_63_V_fu_2518_p3.read());
}

void bitonicSort64::thread_u_6_V_fu_2674_p3() {
    u_6_V_fu_2674_p3 = (!icmp_ln895_70_fu_2660_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_70_fu_2660_p2.read()[0].to_bool())? t_14_V_fu_2353_p3.read(): t_6_V_fu_2273_p3.read());
}

void bitonicSort64::thread_u_7_V_fu_2696_p3() {
    u_7_V_fu_2696_p3 = (!icmp_ln895_71_fu_2682_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_71_fu_2682_p2.read()[0].to_bool())? t_15_V_fu_2363_p3.read(): t_7_V_fu_2283_p3.read());
}

void bitonicSort64::thread_u_8_V_fu_2534_p3() {
    u_8_V_fu_2534_p3 = (!icmp_ln895_64_fu_2528_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_64_fu_2528_p2.read()[0].to_bool())? t_0_V_fu_2213_p3.read(): t_8_V_fu_2293_p3.read());
}

void bitonicSort64::thread_u_9_V_fu_2556_p3() {
    u_9_V_fu_2556_p3 = (!icmp_ln895_65_fu_2550_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_65_fu_2550_p2.read()[0].to_bool())? t_1_V_fu_2223_p3.read(): t_9_V_fu_2303_p3.read());
}

void bitonicSort64::thread_v_0_V_fu_3242_p3() {
    v_0_V_fu_3242_p3 = (!icmp_ln895_96_fu_3232_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_96_fu_3232_p2.read()[0].to_bool())? u_4_V_reg_6111.read(): u_0_V_reg_6055.read());
}

void bitonicSort64::thread_v_10_V_fu_3338_p3() {
    v_10_V_fu_3338_p3 = (!icmp_ln895_102_fu_3328_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_102_fu_3328_p2.read()[0].to_bool())? u_14_V_reg_6132.read(): u_10_V_reg_6076.read());
}

void bitonicSort64::thread_v_11_V_fu_3354_p3() {
    v_11_V_fu_3354_p3 = (!icmp_ln895_103_fu_3344_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_103_fu_3344_p2.read()[0].to_bool())? u_15_V_reg_6146.read(): u_11_V_reg_6090.read());
}

void bitonicSort64::thread_v_12_V_fu_3300_p3() {
    v_12_V_fu_3300_p3 = (!icmp_ln895_100_fu_3296_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_100_fu_3296_p2.read()[0].to_bool())? u_8_V_reg_6048.read(): u_12_V_reg_6104.read());
}

void bitonicSort64::thread_v_13_V_fu_3316_p3() {
    v_13_V_fu_3316_p3 = (!icmp_ln895_101_fu_3312_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_101_fu_3312_p2.read()[0].to_bool())? u_9_V_reg_6062.read(): u_13_V_reg_6118.read());
}

void bitonicSort64::thread_v_14_V_fu_3332_p3() {
    v_14_V_fu_3332_p3 = (!icmp_ln895_102_fu_3328_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_102_fu_3328_p2.read()[0].to_bool())? u_10_V_reg_6076.read(): u_14_V_reg_6132.read());
}

void bitonicSort64::thread_v_15_V_fu_3348_p3() {
    v_15_V_fu_3348_p3 = (!icmp_ln895_103_fu_3344_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_103_fu_3344_p2.read()[0].to_bool())? u_11_V_reg_6090.read(): u_15_V_reg_6146.read());
}

void bitonicSort64::thread_v_16_V_fu_3370_p3() {
    v_16_V_fu_3370_p3 = (!icmp_ln895_104_fu_3360_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_104_fu_3360_p2.read()[0].to_bool())? u_20_V_reg_6223.read(): u_16_V_reg_6167.read());
}

void bitonicSort64::thread_v_17_V_fu_3386_p3() {
    v_17_V_fu_3386_p3 = (!icmp_ln895_105_fu_3376_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_105_fu_3376_p2.read()[0].to_bool())? u_21_V_reg_6237.read(): u_17_V_reg_6181.read());
}

void bitonicSort64::thread_v_18_V_fu_3402_p3() {
    v_18_V_fu_3402_p3 = (!icmp_ln895_106_fu_3392_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_106_fu_3392_p2.read()[0].to_bool())? u_22_V_reg_6251.read(): u_18_V_reg_6195.read());
}

void bitonicSort64::thread_v_19_V_fu_3418_p3() {
    v_19_V_fu_3418_p3 = (!icmp_ln895_107_fu_3408_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_107_fu_3408_p2.read()[0].to_bool())? u_23_V_reg_6265.read(): u_19_V_reg_6209.read());
}

void bitonicSort64::thread_v_1_V_fu_3258_p3() {
    v_1_V_fu_3258_p3 = (!icmp_ln895_97_fu_3248_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_97_fu_3248_p2.read()[0].to_bool())? u_5_V_reg_6125.read(): u_1_V_reg_6069.read());
}

void bitonicSort64::thread_v_20_V_fu_3364_p3() {
    v_20_V_fu_3364_p3 = (!icmp_ln895_104_fu_3360_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_104_fu_3360_p2.read()[0].to_bool())? u_16_V_reg_6167.read(): u_20_V_reg_6223.read());
}

void bitonicSort64::thread_v_21_V_fu_3380_p3() {
    v_21_V_fu_3380_p3 = (!icmp_ln895_105_fu_3376_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_105_fu_3376_p2.read()[0].to_bool())? u_17_V_reg_6181.read(): u_21_V_reg_6237.read());
}

void bitonicSort64::thread_v_22_V_fu_3396_p3() {
    v_22_V_fu_3396_p3 = (!icmp_ln895_106_fu_3392_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_106_fu_3392_p2.read()[0].to_bool())? u_18_V_reg_6195.read(): u_22_V_reg_6251.read());
}

void bitonicSort64::thread_v_23_V_fu_3412_p3() {
    v_23_V_fu_3412_p3 = (!icmp_ln895_107_fu_3408_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_107_fu_3408_p2.read()[0].to_bool())? u_19_V_reg_6209.read(): u_23_V_reg_6265.read());
}

void bitonicSort64::thread_v_24_V_fu_3434_p3() {
    v_24_V_fu_3434_p3 = (!icmp_ln895_108_fu_3424_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_108_fu_3424_p2.read()[0].to_bool())? u_28_V_reg_6216.read(): u_24_V_reg_6160.read());
}

void bitonicSort64::thread_v_25_V_fu_3450_p3() {
    v_25_V_fu_3450_p3 = (!icmp_ln895_109_fu_3440_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_109_fu_3440_p2.read()[0].to_bool())? u_29_V_reg_6230.read(): u_25_V_reg_6174.read());
}

void bitonicSort64::thread_v_26_V_fu_3466_p3() {
    v_26_V_fu_3466_p3 = (!icmp_ln895_110_fu_3456_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_110_fu_3456_p2.read()[0].to_bool())? u_30_V_reg_6244.read(): u_26_V_reg_6188.read());
}

void bitonicSort64::thread_v_27_V_fu_3482_p3() {
    v_27_V_fu_3482_p3 = (!icmp_ln895_111_fu_3472_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_111_fu_3472_p2.read()[0].to_bool())? u_31_V_reg_6258.read(): u_27_V_reg_6202.read());
}

void bitonicSort64::thread_v_28_V_fu_3428_p3() {
    v_28_V_fu_3428_p3 = (!icmp_ln895_108_fu_3424_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_108_fu_3424_p2.read()[0].to_bool())? u_24_V_reg_6160.read(): u_28_V_reg_6216.read());
}

void bitonicSort64::thread_v_29_V_fu_3444_p3() {
    v_29_V_fu_3444_p3 = (!icmp_ln895_109_fu_3440_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_109_fu_3440_p2.read()[0].to_bool())? u_25_V_reg_6174.read(): u_29_V_reg_6230.read());
}

void bitonicSort64::thread_v_2_V_fu_3274_p3() {
    v_2_V_fu_3274_p3 = (!icmp_ln895_98_fu_3264_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_98_fu_3264_p2.read()[0].to_bool())? u_6_V_reg_6139.read(): u_2_V_reg_6083.read());
}

void bitonicSort64::thread_v_30_V_fu_3460_p3() {
    v_30_V_fu_3460_p3 = (!icmp_ln895_110_fu_3456_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_110_fu_3456_p2.read()[0].to_bool())? u_26_V_reg_6188.read(): u_30_V_reg_6244.read());
}

void bitonicSort64::thread_v_31_V_fu_3476_p3() {
    v_31_V_fu_3476_p3 = (!icmp_ln895_111_fu_3472_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_111_fu_3472_p2.read()[0].to_bool())? u_27_V_reg_6202.read(): u_31_V_reg_6258.read());
}

void bitonicSort64::thread_v_32_V_fu_3498_p3() {
    v_32_V_fu_3498_p3 = (!icmp_ln895_112_fu_3488_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_112_fu_3488_p2.read()[0].to_bool())? u_36_V_reg_6335.read(): u_32_V_reg_6279.read());
}

void bitonicSort64::thread_v_33_V_fu_3514_p3() {
    v_33_V_fu_3514_p3 = (!icmp_ln895_113_fu_3504_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_113_fu_3504_p2.read()[0].to_bool())? u_37_V_reg_6349.read(): u_33_V_reg_6293.read());
}

void bitonicSort64::thread_v_34_V_fu_3530_p3() {
    v_34_V_fu_3530_p3 = (!icmp_ln895_114_fu_3520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_114_fu_3520_p2.read()[0].to_bool())? u_38_V_reg_6363.read(): u_34_V_reg_6307.read());
}

void bitonicSort64::thread_v_35_V_fu_3546_p3() {
    v_35_V_fu_3546_p3 = (!icmp_ln895_115_fu_3536_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_115_fu_3536_p2.read()[0].to_bool())? u_39_V_reg_6377.read(): u_35_V_reg_6321.read());
}

void bitonicSort64::thread_v_36_V_fu_3492_p3() {
    v_36_V_fu_3492_p3 = (!icmp_ln895_112_fu_3488_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_112_fu_3488_p2.read()[0].to_bool())? u_32_V_reg_6279.read(): u_36_V_reg_6335.read());
}

void bitonicSort64::thread_v_37_V_fu_3508_p3() {
    v_37_V_fu_3508_p3 = (!icmp_ln895_113_fu_3504_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_113_fu_3504_p2.read()[0].to_bool())? u_33_V_reg_6293.read(): u_37_V_reg_6349.read());
}

void bitonicSort64::thread_v_38_V_fu_3524_p3() {
    v_38_V_fu_3524_p3 = (!icmp_ln895_114_fu_3520_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_114_fu_3520_p2.read()[0].to_bool())? u_34_V_reg_6307.read(): u_38_V_reg_6363.read());
}

void bitonicSort64::thread_v_39_V_fu_3540_p3() {
    v_39_V_fu_3540_p3 = (!icmp_ln895_115_fu_3536_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_115_fu_3536_p2.read()[0].to_bool())? u_35_V_reg_6321.read(): u_39_V_reg_6377.read());
}

void bitonicSort64::thread_v_3_V_fu_3290_p3() {
    v_3_V_fu_3290_p3 = (!icmp_ln895_99_fu_3280_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_99_fu_3280_p2.read()[0].to_bool())? u_7_V_reg_6153.read(): u_3_V_reg_6097.read());
}

void bitonicSort64::thread_v_40_V_fu_3562_p3() {
    v_40_V_fu_3562_p3 = (!icmp_ln895_116_fu_3552_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_116_fu_3552_p2.read()[0].to_bool())? u_44_V_reg_6328.read(): u_40_V_reg_6272.read());
}

void bitonicSort64::thread_v_41_V_fu_3578_p3() {
    v_41_V_fu_3578_p3 = (!icmp_ln895_117_fu_3568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_117_fu_3568_p2.read()[0].to_bool())? u_45_V_reg_6342.read(): u_41_V_reg_6286.read());
}

void bitonicSort64::thread_v_42_V_fu_3594_p3() {
    v_42_V_fu_3594_p3 = (!icmp_ln895_118_fu_3584_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_118_fu_3584_p2.read()[0].to_bool())? u_46_V_reg_6356.read(): u_42_V_reg_6300.read());
}

void bitonicSort64::thread_v_43_V_fu_3610_p3() {
    v_43_V_fu_3610_p3 = (!icmp_ln895_119_fu_3600_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_119_fu_3600_p2.read()[0].to_bool())? u_47_V_reg_6370.read(): u_43_V_reg_6314.read());
}

void bitonicSort64::thread_v_44_V_fu_3556_p3() {
    v_44_V_fu_3556_p3 = (!icmp_ln895_116_fu_3552_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_116_fu_3552_p2.read()[0].to_bool())? u_40_V_reg_6272.read(): u_44_V_reg_6328.read());
}

void bitonicSort64::thread_v_45_V_fu_3572_p3() {
    v_45_V_fu_3572_p3 = (!icmp_ln895_117_fu_3568_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_117_fu_3568_p2.read()[0].to_bool())? u_41_V_reg_6286.read(): u_45_V_reg_6342.read());
}

void bitonicSort64::thread_v_46_V_fu_3588_p3() {
    v_46_V_fu_3588_p3 = (!icmp_ln895_118_fu_3584_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_118_fu_3584_p2.read()[0].to_bool())? u_42_V_reg_6300.read(): u_46_V_reg_6356.read());
}

void bitonicSort64::thread_v_47_V_fu_3604_p3() {
    v_47_V_fu_3604_p3 = (!icmp_ln895_119_fu_3600_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_119_fu_3600_p2.read()[0].to_bool())? u_43_V_reg_6314.read(): u_47_V_reg_6370.read());
}

void bitonicSort64::thread_v_48_V_fu_3626_p3() {
    v_48_V_fu_3626_p3 = (!icmp_ln895_120_fu_3616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_120_fu_3616_p2.read()[0].to_bool())? u_52_V_reg_6447.read(): u_48_V_reg_6391.read());
}

void bitonicSort64::thread_v_49_V_fu_3642_p3() {
    v_49_V_fu_3642_p3 = (!icmp_ln895_121_fu_3632_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_121_fu_3632_p2.read()[0].to_bool())? u_53_V_reg_6461.read(): u_49_V_reg_6405.read());
}

void bitonicSort64::thread_v_4_V_fu_3236_p3() {
    v_4_V_fu_3236_p3 = (!icmp_ln895_96_fu_3232_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_96_fu_3232_p2.read()[0].to_bool())? u_0_V_reg_6055.read(): u_4_V_reg_6111.read());
}

void bitonicSort64::thread_v_50_V_fu_3658_p3() {
    v_50_V_fu_3658_p3 = (!icmp_ln895_122_fu_3648_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_122_fu_3648_p2.read()[0].to_bool())? u_54_V_reg_6475.read(): u_50_V_reg_6419.read());
}

void bitonicSort64::thread_v_51_V_fu_3674_p3() {
    v_51_V_fu_3674_p3 = (!icmp_ln895_123_fu_3664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_123_fu_3664_p2.read()[0].to_bool())? u_55_V_reg_6489.read(): u_51_V_reg_6433.read());
}

void bitonicSort64::thread_v_52_V_fu_3620_p3() {
    v_52_V_fu_3620_p3 = (!icmp_ln895_120_fu_3616_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_120_fu_3616_p2.read()[0].to_bool())? u_48_V_reg_6391.read(): u_52_V_reg_6447.read());
}

void bitonicSort64::thread_v_53_V_fu_3636_p3() {
    v_53_V_fu_3636_p3 = (!icmp_ln895_121_fu_3632_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_121_fu_3632_p2.read()[0].to_bool())? u_49_V_reg_6405.read(): u_53_V_reg_6461.read());
}

void bitonicSort64::thread_v_54_V_fu_3652_p3() {
    v_54_V_fu_3652_p3 = (!icmp_ln895_122_fu_3648_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_122_fu_3648_p2.read()[0].to_bool())? u_50_V_reg_6419.read(): u_54_V_reg_6475.read());
}

void bitonicSort64::thread_v_55_V_fu_3668_p3() {
    v_55_V_fu_3668_p3 = (!icmp_ln895_123_fu_3664_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_123_fu_3664_p2.read()[0].to_bool())? u_51_V_reg_6433.read(): u_55_V_reg_6489.read());
}

void bitonicSort64::thread_v_56_V_fu_3690_p3() {
    v_56_V_fu_3690_p3 = (!icmp_ln895_124_fu_3680_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_124_fu_3680_p2.read()[0].to_bool())? u_60_V_reg_6440.read(): u_56_V_reg_6384.read());
}

void bitonicSort64::thread_v_57_V_fu_3706_p3() {
    v_57_V_fu_3706_p3 = (!icmp_ln895_125_fu_3696_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_125_fu_3696_p2.read()[0].to_bool())? u_61_V_reg_6454.read(): u_57_V_reg_6398.read());
}

void bitonicSort64::thread_v_58_V_fu_3722_p3() {
    v_58_V_fu_3722_p3 = (!icmp_ln895_126_fu_3712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_126_fu_3712_p2.read()[0].to_bool())? u_62_V_reg_6468.read(): u_58_V_reg_6412.read());
}

void bitonicSort64::thread_v_59_V_fu_3738_p3() {
    v_59_V_fu_3738_p3 = (!icmp_ln895_127_fu_3728_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_127_fu_3728_p2.read()[0].to_bool())? u_63_V_reg_6482.read(): u_59_V_reg_6426.read());
}

void bitonicSort64::thread_v_5_V_fu_3252_p3() {
    v_5_V_fu_3252_p3 = (!icmp_ln895_97_fu_3248_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_97_fu_3248_p2.read()[0].to_bool())? u_1_V_reg_6069.read(): u_5_V_reg_6125.read());
}

void bitonicSort64::thread_v_60_V_fu_3684_p3() {
    v_60_V_fu_3684_p3 = (!icmp_ln895_124_fu_3680_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_124_fu_3680_p2.read()[0].to_bool())? u_56_V_reg_6384.read(): u_60_V_reg_6440.read());
}

void bitonicSort64::thread_v_61_V_fu_3700_p3() {
    v_61_V_fu_3700_p3 = (!icmp_ln895_125_fu_3696_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_125_fu_3696_p2.read()[0].to_bool())? u_57_V_reg_6398.read(): u_61_V_reg_6454.read());
}

void bitonicSort64::thread_v_62_V_fu_3716_p3() {
    v_62_V_fu_3716_p3 = (!icmp_ln895_126_fu_3712_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_126_fu_3712_p2.read()[0].to_bool())? u_58_V_reg_6412.read(): u_62_V_reg_6468.read());
}

void bitonicSort64::thread_v_63_V_fu_3732_p3() {
    v_63_V_fu_3732_p3 = (!icmp_ln895_127_fu_3728_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_127_fu_3728_p2.read()[0].to_bool())? u_59_V_reg_6426.read(): u_63_V_reg_6482.read());
}

void bitonicSort64::thread_v_6_V_fu_3268_p3() {
    v_6_V_fu_3268_p3 = (!icmp_ln895_98_fu_3264_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_98_fu_3264_p2.read()[0].to_bool())? u_2_V_reg_6083.read(): u_6_V_reg_6139.read());
}

void bitonicSort64::thread_v_7_V_fu_3284_p3() {
    v_7_V_fu_3284_p3 = (!icmp_ln895_99_fu_3280_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_99_fu_3280_p2.read()[0].to_bool())? u_3_V_reg_6097.read(): u_7_V_reg_6153.read());
}

void bitonicSort64::thread_v_8_V_fu_3306_p3() {
    v_8_V_fu_3306_p3 = (!icmp_ln895_100_fu_3296_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_100_fu_3296_p2.read()[0].to_bool())? u_12_V_reg_6104.read(): u_8_V_reg_6048.read());
}

void bitonicSort64::thread_v_9_V_fu_3322_p3() {
    v_9_V_fu_3322_p3 = (!icmp_ln895_101_fu_3312_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_101_fu_3312_p2.read()[0].to_bool())? u_13_V_reg_6118.read(): u_9_V_reg_6062.read());
}

void bitonicSort64::thread_w_0_V_fu_3941_p3() {
    w_0_V_fu_3941_p3 = (!icmp_ln895_128_reg_6880.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_128_reg_6880.read()[0].to_bool())? v_2_V_reg_6526.read(): v_0_V_reg_6502.read());
}

void bitonicSort64::thread_w_10_V_fu_3976_p3() {
    w_10_V_fu_3976_p3 = (!icmp_ln895_132_reg_6904.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_132_reg_6904.read()[0].to_bool())? v_8_V_reg_6550.read(): v_10_V_reg_6574.read());
}

void bitonicSort64::thread_w_11_V_fu_3986_p3() {
    w_11_V_fu_3986_p3 = (!icmp_ln895_133_reg_6910.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_133_reg_6910.read()[0].to_bool())? v_9_V_reg_6562.read(): v_11_V_reg_6586.read());
}

void bitonicSort64::thread_w_12_V_fu_4001_p3() {
    w_12_V_fu_4001_p3 = (!icmp_ln895_134_reg_6916.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_134_reg_6916.read()[0].to_bool())? v_14_V_reg_6568.read(): v_12_V_reg_6544.read());
}

void bitonicSort64::thread_w_13_V_fu_4011_p3() {
    w_13_V_fu_4011_p3 = (!icmp_ln895_135_reg_6922.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_135_reg_6922.read()[0].to_bool())? v_15_V_reg_6580.read(): v_13_V_reg_6556.read());
}

void bitonicSort64::thread_w_14_V_fu_3996_p3() {
    w_14_V_fu_3996_p3 = (!icmp_ln895_134_reg_6916.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_134_reg_6916.read()[0].to_bool())? v_12_V_reg_6544.read(): v_14_V_reg_6568.read());
}

void bitonicSort64::thread_w_15_V_fu_4006_p3() {
    w_15_V_fu_4006_p3 = (!icmp_ln895_135_reg_6922.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_135_reg_6922.read()[0].to_bool())? v_13_V_reg_6556.read(): v_15_V_reg_6580.read());
}

void bitonicSort64::thread_w_16_V_fu_4021_p3() {
    w_16_V_fu_4021_p3 = (!icmp_ln895_136_reg_6928.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_136_reg_6928.read()[0].to_bool())? v_18_V_reg_6622.read(): v_16_V_reg_6598.read());
}

void bitonicSort64::thread_w_17_V_fu_4031_p3() {
    w_17_V_fu_4031_p3 = (!icmp_ln895_137_reg_6934.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_137_reg_6934.read()[0].to_bool())? v_19_V_reg_6634.read(): v_17_V_reg_6610.read());
}

void bitonicSort64::thread_w_18_V_fu_4016_p3() {
    w_18_V_fu_4016_p3 = (!icmp_ln895_136_reg_6928.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_136_reg_6928.read()[0].to_bool())? v_16_V_reg_6598.read(): v_18_V_reg_6622.read());
}

void bitonicSort64::thread_w_19_V_fu_4026_p3() {
    w_19_V_fu_4026_p3 = (!icmp_ln895_137_reg_6934.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_137_reg_6934.read()[0].to_bool())? v_17_V_reg_6610.read(): v_19_V_reg_6634.read());
}

void bitonicSort64::thread_w_1_V_fu_3951_p3() {
    w_1_V_fu_3951_p3 = (!icmp_ln895_129_reg_6886.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_129_reg_6886.read()[0].to_bool())? v_3_V_reg_6538.read(): v_1_V_reg_6514.read());
}

void bitonicSort64::thread_w_20_V_fu_4041_p3() {
    w_20_V_fu_4041_p3 = (!icmp_ln895_138_reg_6940.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_138_reg_6940.read()[0].to_bool())? v_22_V_reg_6616.read(): v_20_V_reg_6592.read());
}

void bitonicSort64::thread_w_21_V_fu_4051_p3() {
    w_21_V_fu_4051_p3 = (!icmp_ln895_139_reg_6946.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_139_reg_6946.read()[0].to_bool())? v_23_V_reg_6628.read(): v_21_V_reg_6604.read());
}

void bitonicSort64::thread_w_22_V_fu_4036_p3() {
    w_22_V_fu_4036_p3 = (!icmp_ln895_138_reg_6940.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_138_reg_6940.read()[0].to_bool())? v_20_V_reg_6592.read(): v_22_V_reg_6616.read());
}

void bitonicSort64::thread_w_23_V_fu_4046_p3() {
    w_23_V_fu_4046_p3 = (!icmp_ln895_139_reg_6946.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_139_reg_6946.read()[0].to_bool())? v_21_V_reg_6604.read(): v_23_V_reg_6628.read());
}

void bitonicSort64::thread_w_24_V_fu_4061_p3() {
    w_24_V_fu_4061_p3 = (!icmp_ln895_140_reg_6952.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_140_reg_6952.read()[0].to_bool())? v_26_V_reg_6670.read(): v_24_V_reg_6646.read());
}

void bitonicSort64::thread_w_25_V_fu_4071_p3() {
    w_25_V_fu_4071_p3 = (!icmp_ln895_141_reg_6958.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_141_reg_6958.read()[0].to_bool())? v_27_V_reg_6682.read(): v_25_V_reg_6658.read());
}

void bitonicSort64::thread_w_26_V_fu_4056_p3() {
    w_26_V_fu_4056_p3 = (!icmp_ln895_140_reg_6952.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_140_reg_6952.read()[0].to_bool())? v_24_V_reg_6646.read(): v_26_V_reg_6670.read());
}

void bitonicSort64::thread_w_27_V_fu_4066_p3() {
    w_27_V_fu_4066_p3 = (!icmp_ln895_141_reg_6958.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_141_reg_6958.read()[0].to_bool())? v_25_V_reg_6658.read(): v_27_V_reg_6682.read());
}

void bitonicSort64::thread_w_28_V_fu_4081_p3() {
    w_28_V_fu_4081_p3 = (!icmp_ln895_142_reg_6964.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_142_reg_6964.read()[0].to_bool())? v_30_V_reg_6664.read(): v_28_V_reg_6640.read());
}

void bitonicSort64::thread_w_29_V_fu_4091_p3() {
    w_29_V_fu_4091_p3 = (!icmp_ln895_143_reg_6970.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_143_reg_6970.read()[0].to_bool())? v_31_V_reg_6676.read(): v_29_V_reg_6652.read());
}

void bitonicSort64::thread_w_2_V_fu_3936_p3() {
    w_2_V_fu_3936_p3 = (!icmp_ln895_128_reg_6880.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_128_reg_6880.read()[0].to_bool())? v_0_V_reg_6502.read(): v_2_V_reg_6526.read());
}

void bitonicSort64::thread_w_30_V_fu_4076_p3() {
    w_30_V_fu_4076_p3 = (!icmp_ln895_142_reg_6964.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_142_reg_6964.read()[0].to_bool())? v_28_V_reg_6640.read(): v_30_V_reg_6664.read());
}

void bitonicSort64::thread_w_31_V_fu_4086_p3() {
    w_31_V_fu_4086_p3 = (!icmp_ln895_143_reg_6970.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_143_reg_6970.read()[0].to_bool())? v_29_V_reg_6652.read(): v_31_V_reg_6676.read());
}

void bitonicSort64::thread_w_32_V_fu_4101_p3() {
    w_32_V_fu_4101_p3 = (!icmp_ln895_144_reg_6976.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_144_reg_6976.read()[0].to_bool())? v_34_V_reg_6718.read(): v_32_V_reg_6694.read());
}

void bitonicSort64::thread_w_33_V_fu_4111_p3() {
    w_33_V_fu_4111_p3 = (!icmp_ln895_145_reg_6982.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_145_reg_6982.read()[0].to_bool())? v_35_V_reg_6730.read(): v_33_V_reg_6706.read());
}

void bitonicSort64::thread_w_34_V_fu_4096_p3() {
    w_34_V_fu_4096_p3 = (!icmp_ln895_144_reg_6976.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_144_reg_6976.read()[0].to_bool())? v_32_V_reg_6694.read(): v_34_V_reg_6718.read());
}

void bitonicSort64::thread_w_35_V_fu_4106_p3() {
    w_35_V_fu_4106_p3 = (!icmp_ln895_145_reg_6982.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_145_reg_6982.read()[0].to_bool())? v_33_V_reg_6706.read(): v_35_V_reg_6730.read());
}

void bitonicSort64::thread_w_36_V_fu_4121_p3() {
    w_36_V_fu_4121_p3 = (!icmp_ln895_146_reg_6988.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_146_reg_6988.read()[0].to_bool())? v_38_V_reg_6712.read(): v_36_V_reg_6688.read());
}

void bitonicSort64::thread_w_37_V_fu_4131_p3() {
    w_37_V_fu_4131_p3 = (!icmp_ln895_147_reg_6994.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_147_reg_6994.read()[0].to_bool())? v_39_V_reg_6724.read(): v_37_V_reg_6700.read());
}

void bitonicSort64::thread_w_38_V_fu_4116_p3() {
    w_38_V_fu_4116_p3 = (!icmp_ln895_146_reg_6988.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_146_reg_6988.read()[0].to_bool())? v_36_V_reg_6688.read(): v_38_V_reg_6712.read());
}

void bitonicSort64::thread_w_39_V_fu_4126_p3() {
    w_39_V_fu_4126_p3 = (!icmp_ln895_147_reg_6994.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_147_reg_6994.read()[0].to_bool())? v_37_V_reg_6700.read(): v_39_V_reg_6724.read());
}

void bitonicSort64::thread_w_3_V_fu_3946_p3() {
    w_3_V_fu_3946_p3 = (!icmp_ln895_129_reg_6886.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_129_reg_6886.read()[0].to_bool())? v_1_V_reg_6514.read(): v_3_V_reg_6538.read());
}

void bitonicSort64::thread_w_40_V_fu_4141_p3() {
    w_40_V_fu_4141_p3 = (!icmp_ln895_148_reg_7000.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_148_reg_7000.read()[0].to_bool())? v_42_V_reg_6766.read(): v_40_V_reg_6742.read());
}

void bitonicSort64::thread_w_41_V_fu_4151_p3() {
    w_41_V_fu_4151_p3 = (!icmp_ln895_149_reg_7006.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_149_reg_7006.read()[0].to_bool())? v_43_V_reg_6778.read(): v_41_V_reg_6754.read());
}

void bitonicSort64::thread_w_42_V_fu_4136_p3() {
    w_42_V_fu_4136_p3 = (!icmp_ln895_148_reg_7000.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_148_reg_7000.read()[0].to_bool())? v_40_V_reg_6742.read(): v_42_V_reg_6766.read());
}

void bitonicSort64::thread_w_43_V_fu_4146_p3() {
    w_43_V_fu_4146_p3 = (!icmp_ln895_149_reg_7006.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_149_reg_7006.read()[0].to_bool())? v_41_V_reg_6754.read(): v_43_V_reg_6778.read());
}

void bitonicSort64::thread_w_44_V_fu_4161_p3() {
    w_44_V_fu_4161_p3 = (!icmp_ln895_150_reg_7012.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_150_reg_7012.read()[0].to_bool())? v_46_V_reg_6760.read(): v_44_V_reg_6736.read());
}

void bitonicSort64::thread_w_45_V_fu_4171_p3() {
    w_45_V_fu_4171_p3 = (!icmp_ln895_151_reg_7018.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_151_reg_7018.read()[0].to_bool())? v_47_V_reg_6772.read(): v_45_V_reg_6748.read());
}

void bitonicSort64::thread_w_46_V_fu_4156_p3() {
    w_46_V_fu_4156_p3 = (!icmp_ln895_150_reg_7012.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_150_reg_7012.read()[0].to_bool())? v_44_V_reg_6736.read(): v_46_V_reg_6760.read());
}

void bitonicSort64::thread_w_47_V_fu_4166_p3() {
    w_47_V_fu_4166_p3 = (!icmp_ln895_151_reg_7018.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_151_reg_7018.read()[0].to_bool())? v_45_V_reg_6748.read(): v_47_V_reg_6772.read());
}

void bitonicSort64::thread_w_48_V_fu_4181_p3() {
    w_48_V_fu_4181_p3 = (!icmp_ln895_152_reg_7024.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_152_reg_7024.read()[0].to_bool())? v_50_V_reg_6814.read(): v_48_V_reg_6790.read());
}

void bitonicSort64::thread_w_49_V_fu_4191_p3() {
    w_49_V_fu_4191_p3 = (!icmp_ln895_153_reg_7030.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_153_reg_7030.read()[0].to_bool())? v_51_V_reg_6826.read(): v_49_V_reg_6802.read());
}

void bitonicSort64::thread_w_4_V_fu_3961_p3() {
    w_4_V_fu_3961_p3 = (!icmp_ln895_130_reg_6892.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_130_reg_6892.read()[0].to_bool())? v_6_V_reg_6520.read(): v_4_V_reg_6496.read());
}

void bitonicSort64::thread_w_50_V_fu_4176_p3() {
    w_50_V_fu_4176_p3 = (!icmp_ln895_152_reg_7024.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_152_reg_7024.read()[0].to_bool())? v_48_V_reg_6790.read(): v_50_V_reg_6814.read());
}

void bitonicSort64::thread_w_51_V_fu_4186_p3() {
    w_51_V_fu_4186_p3 = (!icmp_ln895_153_reg_7030.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_153_reg_7030.read()[0].to_bool())? v_49_V_reg_6802.read(): v_51_V_reg_6826.read());
}

void bitonicSort64::thread_w_52_V_fu_4201_p3() {
    w_52_V_fu_4201_p3 = (!icmp_ln895_154_reg_7036.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_154_reg_7036.read()[0].to_bool())? v_54_V_reg_6808.read(): v_52_V_reg_6784.read());
}

void bitonicSort64::thread_w_53_V_fu_4211_p3() {
    w_53_V_fu_4211_p3 = (!icmp_ln895_155_reg_7042.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_155_reg_7042.read()[0].to_bool())? v_55_V_reg_6820.read(): v_53_V_reg_6796.read());
}

void bitonicSort64::thread_w_54_V_fu_4196_p3() {
    w_54_V_fu_4196_p3 = (!icmp_ln895_154_reg_7036.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_154_reg_7036.read()[0].to_bool())? v_52_V_reg_6784.read(): v_54_V_reg_6808.read());
}

void bitonicSort64::thread_w_55_V_fu_4206_p3() {
    w_55_V_fu_4206_p3 = (!icmp_ln895_155_reg_7042.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_155_reg_7042.read()[0].to_bool())? v_53_V_reg_6796.read(): v_55_V_reg_6820.read());
}

void bitonicSort64::thread_w_56_V_fu_4221_p3() {
    w_56_V_fu_4221_p3 = (!icmp_ln895_156_reg_7048.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_156_reg_7048.read()[0].to_bool())? v_58_V_reg_6862.read(): v_56_V_reg_6838.read());
}

void bitonicSort64::thread_w_57_V_fu_4231_p3() {
    w_57_V_fu_4231_p3 = (!icmp_ln895_157_reg_7054.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_157_reg_7054.read()[0].to_bool())? v_59_V_reg_6874.read(): v_57_V_reg_6850.read());
}

void bitonicSort64::thread_w_58_V_fu_4216_p3() {
    w_58_V_fu_4216_p3 = (!icmp_ln895_156_reg_7048.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_156_reg_7048.read()[0].to_bool())? v_56_V_reg_6838.read(): v_58_V_reg_6862.read());
}

void bitonicSort64::thread_w_59_V_fu_4226_p3() {
    w_59_V_fu_4226_p3 = (!icmp_ln895_157_reg_7054.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_157_reg_7054.read()[0].to_bool())? v_57_V_reg_6850.read(): v_59_V_reg_6874.read());
}

void bitonicSort64::thread_w_5_V_fu_3971_p3() {
    w_5_V_fu_3971_p3 = (!icmp_ln895_131_reg_6898.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_131_reg_6898.read()[0].to_bool())? v_7_V_reg_6532.read(): v_5_V_reg_6508.read());
}

void bitonicSort64::thread_w_60_V_fu_4241_p3() {
    w_60_V_fu_4241_p3 = (!icmp_ln895_158_reg_7060.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_158_reg_7060.read()[0].to_bool())? v_62_V_reg_6856.read(): v_60_V_reg_6832.read());
}

void bitonicSort64::thread_w_61_V_fu_4251_p3() {
    w_61_V_fu_4251_p3 = (!icmp_ln895_159_reg_7066.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_159_reg_7066.read()[0].to_bool())? v_63_V_reg_6868.read(): v_61_V_reg_6844.read());
}

void bitonicSort64::thread_w_62_V_fu_4236_p3() {
    w_62_V_fu_4236_p3 = (!icmp_ln895_158_reg_7060.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_158_reg_7060.read()[0].to_bool())? v_60_V_reg_6832.read(): v_62_V_reg_6856.read());
}

void bitonicSort64::thread_w_63_V_fu_4246_p3() {
    w_63_V_fu_4246_p3 = (!icmp_ln895_159_reg_7066.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_159_reg_7066.read()[0].to_bool())? v_61_V_reg_6844.read(): v_63_V_reg_6868.read());
}

void bitonicSort64::thread_w_6_V_fu_3956_p3() {
    w_6_V_fu_3956_p3 = (!icmp_ln895_130_reg_6892.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_130_reg_6892.read()[0].to_bool())? v_4_V_reg_6496.read(): v_6_V_reg_6520.read());
}

void bitonicSort64::thread_w_7_V_fu_3966_p3() {
    w_7_V_fu_3966_p3 = (!icmp_ln895_131_reg_6898.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_131_reg_6898.read()[0].to_bool())? v_5_V_reg_6508.read(): v_7_V_reg_6532.read());
}

void bitonicSort64::thread_w_8_V_fu_3981_p3() {
    w_8_V_fu_3981_p3 = (!icmp_ln895_132_reg_6904.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_132_reg_6904.read()[0].to_bool())? v_10_V_reg_6574.read(): v_8_V_reg_6550.read());
}

void bitonicSort64::thread_w_9_V_fu_3991_p3() {
    w_9_V_fu_3991_p3 = (!icmp_ln895_133_reg_6910.read()[0].is_01())? sc_lv<32>(): ((icmp_ln895_133_reg_6910.read()[0].to_bool())? v_11_V_reg_6586.read(): v_9_V_reg_6562.read());
}

}

