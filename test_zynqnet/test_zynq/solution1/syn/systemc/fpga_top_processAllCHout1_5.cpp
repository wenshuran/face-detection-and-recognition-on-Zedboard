#include "fpga_top_processAllCHout1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top_processAllCHout1::thread_tmp_6_fu_8245_p4() {
    tmp_6_fu_8245_p4 = r_V_1_i_fu_8222_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_70_fu_9164_p4() {
    tmp_70_fu_9164_p4 = r_V_i_26_fu_9131_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_71_fu_9174_p3() {
    tmp_71_fu_9174_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_69_fu_9154_p4.read(): tmp_70_fu_9164_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_72_fu_9182_p4() {
    tmp_72_fu_9182_p4 = r_V_i_26_fu_9131_p2.read().range(15, 14);
}

void fpga_top_processAllCHout1::thread_tmp_73_fu_9192_p4() {
    tmp_73_fu_9192_p4 = r_V_i_26_fu_9131_p2.read().range(18, 17);
}

void fpga_top_processAllCHout1::thread_tmp_74_fu_9202_p3() {
    tmp_74_fu_9202_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_72_fu_9182_p4.read(): tmp_73_fu_9192_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_76_fu_9255_p4() {
    tmp_76_fu_9255_p4 = r_V_10_i_fu_9232_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_77_fu_9265_p4() {
    tmp_77_fu_9265_p4 = r_V_10_i_fu_9232_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_78_fu_9275_p3() {
    tmp_78_fu_9275_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_76_fu_9255_p4.read(): tmp_77_fu_9265_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_79_fu_9283_p4() {
    tmp_79_fu_9283_p4 = r_V_10_i_fu_9232_p2.read().range(15, 14);
}

void fpga_top_processAllCHout1::thread_tmp_7_fu_8255_p4() {
    tmp_7_fu_8255_p4 = r_V_1_i_fu_8222_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_80_fu_9293_p4() {
    tmp_80_fu_9293_p4 = r_V_10_i_fu_9232_p2.read().range(18, 17);
}

void fpga_top_processAllCHout1::thread_tmp_81_fu_9303_p3() {
    tmp_81_fu_9303_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_79_fu_9283_p4.read(): tmp_80_fu_9293_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_83_fu_9356_p4() {
    tmp_83_fu_9356_p4 = r_V_11_i_fu_9333_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_84_fu_9366_p4() {
    tmp_84_fu_9366_p4 = r_V_11_i_fu_9333_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_85_fu_9376_p3() {
    tmp_85_fu_9376_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_83_fu_9356_p4.read(): tmp_84_fu_9366_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_86_fu_9384_p4() {
    tmp_86_fu_9384_p4 = r_V_11_i_fu_9333_p2.read().range(15, 14);
}

void fpga_top_processAllCHout1::thread_tmp_87_fu_9394_p4() {
    tmp_87_fu_9394_p4 = r_V_11_i_fu_9333_p2.read().range(18, 17);
}

void fpga_top_processAllCHout1::thread_tmp_88_fu_9404_p3() {
    tmp_88_fu_9404_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_86_fu_9384_p4.read(): tmp_87_fu_9394_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_8_fu_8265_p3() {
    tmp_8_fu_8265_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_6_fu_8245_p4.read(): tmp_7_fu_8255_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_90_fu_9457_p4() {
    tmp_90_fu_9457_p4 = r_V_12_i_fu_9434_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_91_fu_9467_p4() {
    tmp_91_fu_9467_p4 = r_V_12_i_fu_9434_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_92_fu_9477_p3() {
    tmp_92_fu_9477_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_90_fu_9457_p4.read(): tmp_91_fu_9467_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_93_fu_9485_p4() {
    tmp_93_fu_9485_p4 = r_V_12_i_fu_9434_p2.read().range(15, 14);
}

void fpga_top_processAllCHout1::thread_tmp_94_fu_9495_p4() {
    tmp_94_fu_9495_p4 = r_V_12_i_fu_9434_p2.read().range(18, 17);
}

void fpga_top_processAllCHout1::thread_tmp_95_fu_9505_p3() {
    tmp_95_fu_9505_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_93_fu_9485_p4.read(): tmp_94_fu_9495_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_97_fu_9558_p4() {
    tmp_97_fu_9558_p4 = r_V_13_i_fu_9535_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_98_fu_9568_p4() {
    tmp_98_fu_9568_p4 = r_V_13_i_fu_9535_p2.read().range(16, 7);
}

void fpga_top_processAllCHout1::thread_tmp_99_fu_9578_p3() {
    tmp_99_fu_9578_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? tmp_97_fu_9558_p4.read(): tmp_98_fu_9568_p4.read());
}

void fpga_top_processAllCHout1::thread_tmp_9_fu_8273_p4() {
    tmp_9_fu_8273_p4 = r_V_1_i_fu_8222_p2.read().range(15, 14);
}

void fpga_top_processAllCHout1::thread_tmp_fu_8138_p4() {
    tmp_fu_8138_p4 = r_V_i_fu_8115_p2.read().range(13, 4);
}

void fpga_top_processAllCHout1::thread_tmp_i_13_phi_fu_6686_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_i_reg_14624.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_i_reg_14955.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_i_reg_15026.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_i_reg_15097.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_4_i_reg_15168.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_5_i_reg_15239.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_6_i_reg_15310.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_7_i_reg_15381.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_8_i_reg_15452.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_9_i_reg_15523.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_23_reg_15594.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_10_i_reg_15665.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_11_i_reg_15736.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_12_i_reg_15807.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_13_i_reg_15878.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_14_i_reg_15949.read()))) {
        tmp_i_13_phi_fu_6686_p4 = co_V_15_i_reg_16020.read();
    } else {
        tmp_i_13_phi_fu_6686_p4 = tmp_i_13_reg_6682.read();
    }
}

void fpga_top_processAllCHout1::thread_tmp_i_fu_8086_p2() {
    tmp_i_fu_8086_p2 = (!ci_V_dout.read().is_01() || !ap_const_lv10_0.is_01())? sc_lv<1>(): sc_lv<1>(ci_V_dout.read() == ap_const_lv10_0);
}

void fpga_top_processAllCHout1::thread_weightID_10_i_fu_9247_p3() {
    weightID_10_i_fu_9247_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_10_cast_i_fu_9237_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_11_i_fu_9348_p3() {
    weightID_11_i_fu_9348_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_11_cast_i_fu_9338_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_12_i_fu_9449_p3() {
    weightID_12_i_fu_9449_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_12_cast_i_fu_9439_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_13_i_fu_9550_p3() {
    weightID_13_i_fu_9550_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_13_cast_i_fu_9540_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_14_i_fu_9651_p3() {
    weightID_14_i_fu_9651_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_14_cast_i_fu_9641_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_1_i_fu_8237_p3() {
    weightID_1_i_fu_8237_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_1_cast_i_fu_8227_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_2_i_fu_8338_p3() {
    weightID_2_i_fu_8338_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_2_cast_i_fu_8328_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_3_i_fu_8439_p3() {
    weightID_3_i_fu_8439_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_3_cast_i_fu_8429_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_4_i_fu_8540_p3() {
    weightID_4_i_fu_8540_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_4_cast_i_fu_8530_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_5_i_fu_8641_p3() {
    weightID_5_i_fu_8641_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_5_cast_i_fu_8631_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_6_i_fu_8742_p3() {
    weightID_6_i_fu_8742_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_6_cast_i_fu_8732_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_7_i_fu_8843_p3() {
    weightID_7_i_fu_8843_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_7_cast_i_fu_8833_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_8_i_fu_8944_p3() {
    weightID_8_i_fu_8944_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_8_cast_i_fu_8934_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_9_i_fu_9045_p3() {
    weightID_9_i_fu_9045_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_9_cast_i_fu_9035_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_i_28_fu_9146_p3() {
    weightID_i_28_fu_9146_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_cast_i_27_fu_9136_p4.read());
}

void fpga_top_processAllCHout1::thread_weightID_i_fu_8130_p3() {
    weightID_i_fu_8130_p3 = (!tmp_139_i_fu_8105_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_139_i_fu_8105_p2.read()[0].to_bool())? ap_const_lv3_0: tmp_155_cast_i_fu_8120_p4.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_0_4_i_fu_12538_p3() {
    weights_local_load_0_4_i_fu_12538_p3 = (!sel_tmp20_fu_12533_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp20_fu_12533_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_reg_16025_pp0_it18.read(): sel_tmp18_fu_12520_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_10_4_i_fu_13668_p3() {
    weights_local_load_10_4_i_fu_13668_p3 = (!sel_tmp230_fu_13663_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp230_fu_13663_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_10_reg_16085_pp0_it18.read(): sel_tmp228_fu_13650_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_11_4_i_fu_13781_p3() {
    weights_local_load_11_4_i_fu_13781_p3 = (!sel_tmp251_fu_13776_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp251_fu_13776_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_11_reg_16091_pp0_it18.read(): sel_tmp249_fu_13763_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_12_4_i_fu_13894_p3() {
    weights_local_load_12_4_i_fu_13894_p3 = (!sel_tmp272_fu_13889_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp272_fu_13889_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_12_reg_16097_pp0_it18.read(): sel_tmp270_fu_13876_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_13_4_i_fu_14007_p3() {
    weights_local_load_13_4_i_fu_14007_p3 = (!sel_tmp293_fu_14002_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp293_fu_14002_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_13_reg_16103_pp0_it18.read(): sel_tmp291_fu_13989_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_14_4_i_fu_14120_p3() {
    weights_local_load_14_4_i_fu_14120_p3 = (!sel_tmp314_fu_14115_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp314_fu_14115_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_14_reg_16109_pp0_it18.read(): sel_tmp312_fu_14102_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_15_4_i_fu_14233_p3() {
    weights_local_load_15_4_i_fu_14233_p3 = (!sel_tmp335_fu_14228_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp335_fu_14228_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_15_reg_16115_pp0_it18.read(): sel_tmp333_fu_14215_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_1_4_i_fu_12651_p3() {
    weights_local_load_1_4_i_fu_12651_p3 = (!sel_tmp41_fu_12646_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp41_fu_12646_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_1_reg_16031_pp0_it18.read(): sel_tmp39_fu_12633_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_2_4_i_fu_12764_p3() {
    weights_local_load_2_4_i_fu_12764_p3 = (!sel_tmp62_fu_12759_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp62_fu_12759_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_2_reg_16037_pp0_it18.read(): sel_tmp60_fu_12746_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_3_4_i_fu_12877_p3() {
    weights_local_load_3_4_i_fu_12877_p3 = (!sel_tmp83_fu_12872_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp83_fu_12872_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_3_reg_16043_pp0_it18.read(): sel_tmp81_fu_12859_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_4_4_i_fu_12990_p3() {
    weights_local_load_4_4_i_fu_12990_p3 = (!sel_tmp104_fu_12985_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp104_fu_12985_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_4_reg_16049_pp0_it18.read(): sel_tmp102_fu_12972_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_5_4_i_fu_13103_p3() {
    weights_local_load_5_4_i_fu_13103_p3 = (!sel_tmp125_fu_13098_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp125_fu_13098_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_5_reg_16055_pp0_it18.read(): sel_tmp123_fu_13085_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_6_4_i_fu_13216_p3() {
    weights_local_load_6_4_i_fu_13216_p3 = (!sel_tmp146_fu_13211_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp146_fu_13211_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_6_reg_16061_pp0_it18.read(): sel_tmp144_fu_13198_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_7_4_i_fu_13329_p3() {
    weights_local_load_7_4_i_fu_13329_p3 = (!sel_tmp167_fu_13324_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp167_fu_13324_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_7_reg_16067_pp0_it18.read(): sel_tmp165_fu_13311_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_8_4_i_fu_13442_p3() {
    weights_local_load_8_4_i_fu_13442_p3 = (!sel_tmp188_fu_13437_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp188_fu_13437_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_8_reg_16073_pp0_it18.read(): sel_tmp186_fu_13424_p3.read());
}

void fpga_top_processAllCHout1::thread_weights_local_load_9_4_i_fu_13555_p3() {
    weights_local_load_9_4_i_fu_13555_p3 = (!sel_tmp209_fu_13550_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp209_fu_13550_p2.read()[0].to_bool())? ap_reg_ppstg_weights_temp_0_9_reg_16079_pp0_it18.read(): sel_tmp207_fu_13537_p3.read());
}

}

