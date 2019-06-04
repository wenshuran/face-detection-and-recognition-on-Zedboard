#include "fpga_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top::thread_WBRAM_8_1_7_addr_gep_fu_9320_p3() {
    WBRAM_8_1_7_addr_gep_fu_9320_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_1_7_address0.read();
    } else {
        WBRAM_8_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_1_7_address1() {
    if (ap_sig_bdd_22632.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_8_1_7_address1 = WBRAM_8_1_7_addr_gep_fu_9320_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_8_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_1_7_ce0.read();
    } else {
        WBRAM_8_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_1_7_d1() {
    WBRAM_8_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_1_8_address0() {
    WBRAM_8_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_1_8_address0.read();
}

void fpga_top::thread_WBRAM_8_1_8_address1() {
    WBRAM_8_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_1_8_ce0.read();
    } else {
        WBRAM_8_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_8_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_1_8_d1() {
    WBRAM_8_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_1_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_0_addr_gep_fu_9327_p3() {
    WBRAM_8_2_0_addr_gep_fu_9327_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_0_address0.read();
    } else {
        WBRAM_8_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_0_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_8_2_0_address1 = WBRAM_8_2_0_addr_gep_fu_9327_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_8_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_0_ce0.read();
    } else {
        WBRAM_8_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_0_d1() {
    WBRAM_8_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_1_addr_gep_fu_9334_p3() {
    WBRAM_8_2_1_addr_gep_fu_9334_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_1_address0.read();
    } else {
        WBRAM_8_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_1_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_8_2_1_address1 = WBRAM_8_2_1_addr_gep_fu_9334_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_8_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_1_ce0.read();
    } else {
        WBRAM_8_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_1_d1() {
    WBRAM_8_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_2_addr_gep_fu_9341_p3() {
    WBRAM_8_2_2_addr_gep_fu_9341_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_2_address0.read();
    } else {
        WBRAM_8_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_2_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_8_2_2_address1 = WBRAM_8_2_2_addr_gep_fu_9341_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_8_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_2_ce0.read();
    } else {
        WBRAM_8_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_2_d1() {
    WBRAM_8_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_3_addr_gep_fu_9348_p3() {
    WBRAM_8_2_3_addr_gep_fu_9348_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_3_address0.read();
    } else {
        WBRAM_8_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_3_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_8_2_3_address1 = WBRAM_8_2_3_addr_gep_fu_9348_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_8_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_3_ce0.read();
    } else {
        WBRAM_8_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_3_d1() {
    WBRAM_8_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_4_addr_gep_fu_9355_p3() {
    WBRAM_8_2_4_addr_gep_fu_9355_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_4_address0.read();
    } else {
        WBRAM_8_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_4_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_8_2_4_address1 = WBRAM_8_2_4_addr_gep_fu_9355_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_8_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_4_ce0.read();
    } else {
        WBRAM_8_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_4_d1() {
    WBRAM_8_2_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_5_addr_gep_fu_9362_p3() {
    WBRAM_8_2_5_addr_gep_fu_9362_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_5_address0.read();
    } else {
        WBRAM_8_2_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_5_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_8_2_5_address1 = WBRAM_8_2_5_addr_gep_fu_9362_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_8_2_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_5_ce0.read();
    } else {
        WBRAM_8_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_5_d1() {
    WBRAM_8_2_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_6_addr_gep_fu_9369_p3() {
    WBRAM_8_2_6_addr_gep_fu_9369_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_6_address0.read();
    } else {
        WBRAM_8_2_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_6_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_8_2_6_address1 = WBRAM_8_2_6_addr_gep_fu_9369_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_8_2_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_6_ce0.read();
    } else {
        WBRAM_8_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_6_d1() {
    WBRAM_8_2_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_7_addr_gep_fu_9376_p3() {
    WBRAM_8_2_7_addr_gep_fu_9376_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_8_2_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_7_address0.read();
    } else {
        WBRAM_8_2_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_7_address1() {
    if (ap_sig_bdd_22634.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_8_2_7_address1 = WBRAM_8_2_7_addr_gep_fu_9376_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_8_2_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_8_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_8_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_8_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_8_2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_7_ce0.read();
    } else {
        WBRAM_8_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_7_d1() {
    WBRAM_8_2_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_8_address0() {
    WBRAM_8_2_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_8_address0.read();
}

void fpga_top::thread_WBRAM_8_2_8_address1() {
    WBRAM_8_2_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_8_2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_8_2_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_8_2_8_ce0.read();
    } else {
        WBRAM_8_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_8_2_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_8_2_8_d1() {
    WBRAM_8_2_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_8_2_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8)))) {
        WBRAM_8_2_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_8_2_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_0_addr_gep_fu_9383_p3() {
    WBRAM_9_0_0_addr_gep_fu_9383_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_0_address0.read();
    } else {
        WBRAM_9_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_0_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_9_0_0_address1 = WBRAM_9_0_0_addr_gep_fu_9383_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_9_0_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_0_ce0.read();
    } else {
        WBRAM_9_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_0_d1() {
    WBRAM_9_0_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_1_addr_gep_fu_9390_p3() {
    WBRAM_9_0_1_addr_gep_fu_9390_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_1_address0.read();
    } else {
        WBRAM_9_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_1_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_9_0_1_address1 = WBRAM_9_0_1_addr_gep_fu_9390_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_9_0_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_1_ce0.read();
    } else {
        WBRAM_9_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_1_d1() {
    WBRAM_9_0_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_2_addr_gep_fu_9397_p3() {
    WBRAM_9_0_2_addr_gep_fu_9397_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_2_address0.read();
    } else {
        WBRAM_9_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_2_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_9_0_2_address1 = WBRAM_9_0_2_addr_gep_fu_9397_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_9_0_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_2_ce0.read();
    } else {
        WBRAM_9_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_2_d1() {
    WBRAM_9_0_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_3_addr_gep_fu_9404_p3() {
    WBRAM_9_0_3_addr_gep_fu_9404_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_3_address0.read();
    } else {
        WBRAM_9_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_3_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_9_0_3_address1 = WBRAM_9_0_3_addr_gep_fu_9404_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_9_0_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_3_ce0.read();
    } else {
        WBRAM_9_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_3_d1() {
    WBRAM_9_0_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_4_addr_gep_fu_9411_p3() {
    WBRAM_9_0_4_addr_gep_fu_9411_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_4_address0.read();
    } else {
        WBRAM_9_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_4_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_9_0_4_address1 = WBRAM_9_0_4_addr_gep_fu_9411_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_9_0_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_4_ce0.read();
    } else {
        WBRAM_9_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_4_d1() {
    WBRAM_9_0_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_5_addr_gep_fu_9418_p3() {
    WBRAM_9_0_5_addr_gep_fu_9418_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_5_address0.read();
    } else {
        WBRAM_9_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_5_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_9_0_5_address1 = WBRAM_9_0_5_addr_gep_fu_9418_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_9_0_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_5_ce0.read();
    } else {
        WBRAM_9_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_5_d1() {
    WBRAM_9_0_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_6_addr_gep_fu_9425_p3() {
    WBRAM_9_0_6_addr_gep_fu_9425_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_6_address0.read();
    } else {
        WBRAM_9_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_6_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_9_0_6_address1 = WBRAM_9_0_6_addr_gep_fu_9425_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_9_0_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_6_ce0.read();
    } else {
        WBRAM_9_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_6_d1() {
    WBRAM_9_0_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_7_addr_gep_fu_9432_p3() {
    WBRAM_9_0_7_addr_gep_fu_9432_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_0_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_7_address0.read();
    } else {
        WBRAM_9_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_7_address1() {
    if (ap_sig_bdd_22636.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_9_0_7_address1 = WBRAM_9_0_7_addr_gep_fu_9432_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_9_0_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_0_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_0_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_7_ce0.read();
    } else {
        WBRAM_9_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_7_d1() {
    WBRAM_9_0_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_8_address0() {
    WBRAM_9_0_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_8_address0.read();
}

void fpga_top::thread_WBRAM_9_0_8_address1() {
    WBRAM_9_0_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_0_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_0_8_ce0.read();
    } else {
        WBRAM_9_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_9_0_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_0_8_d1() {
    WBRAM_9_0_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_0_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_0_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_0_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_0_addr_gep_fu_9439_p3() {
    WBRAM_9_1_0_addr_gep_fu_9439_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_0_address0.read();
    } else {
        WBRAM_9_1_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_0_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_9_1_0_address1 = WBRAM_9_1_0_addr_gep_fu_9439_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_9_1_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_0_ce0.read();
    } else {
        WBRAM_9_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_0_d1() {
    WBRAM_9_1_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_1_addr_gep_fu_9446_p3() {
    WBRAM_9_1_1_addr_gep_fu_9446_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_1_address0.read();
    } else {
        WBRAM_9_1_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_1_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_9_1_1_address1 = WBRAM_9_1_1_addr_gep_fu_9446_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_9_1_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_1_ce0.read();
    } else {
        WBRAM_9_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_1_d1() {
    WBRAM_9_1_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_2_addr_gep_fu_9453_p3() {
    WBRAM_9_1_2_addr_gep_fu_9453_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_2_address0.read();
    } else {
        WBRAM_9_1_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_2_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_9_1_2_address1 = WBRAM_9_1_2_addr_gep_fu_9453_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_9_1_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_2_ce0.read();
    } else {
        WBRAM_9_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_2_d1() {
    WBRAM_9_1_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_3_addr_gep_fu_9460_p3() {
    WBRAM_9_1_3_addr_gep_fu_9460_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_3_address0.read();
    } else {
        WBRAM_9_1_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_3_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_9_1_3_address1 = WBRAM_9_1_3_addr_gep_fu_9460_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_9_1_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_3_ce0.read();
    } else {
        WBRAM_9_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_3_d1() {
    WBRAM_9_1_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_4_addr_gep_fu_9467_p3() {
    WBRAM_9_1_4_addr_gep_fu_9467_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_4_address0.read();
    } else {
        WBRAM_9_1_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_4_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_9_1_4_address1 = WBRAM_9_1_4_addr_gep_fu_9467_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_9_1_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_4_ce0.read();
    } else {
        WBRAM_9_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_4_d1() {
    WBRAM_9_1_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_5_addr_gep_fu_9474_p3() {
    WBRAM_9_1_5_addr_gep_fu_9474_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_5_address0.read();
    } else {
        WBRAM_9_1_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_5_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_9_1_5_address1 = WBRAM_9_1_5_addr_gep_fu_9474_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_9_1_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_5_ce0.read();
    } else {
        WBRAM_9_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_5_d1() {
    WBRAM_9_1_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_6_addr_gep_fu_9481_p3() {
    WBRAM_9_1_6_addr_gep_fu_9481_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_6_address0.read();
    } else {
        WBRAM_9_1_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_6_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_9_1_6_address1 = WBRAM_9_1_6_addr_gep_fu_9481_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_9_1_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_6_ce0.read();
    } else {
        WBRAM_9_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_6_d1() {
    WBRAM_9_1_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_7_addr_gep_fu_9488_p3() {
    WBRAM_9_1_7_addr_gep_fu_9488_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_7_address0.read();
    } else {
        WBRAM_9_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_7_address1() {
    if (ap_sig_bdd_22638.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_9_1_7_address1 = WBRAM_9_1_7_addr_gep_fu_9488_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_9_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_1_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_7_ce0.read();
    } else {
        WBRAM_9_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_7_d1() {
    WBRAM_9_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_8_address0() {
    WBRAM_9_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_8_address0.read();
}

void fpga_top::thread_WBRAM_9_1_8_address1() {
    WBRAM_9_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_1_8_ce0.read();
    } else {
        WBRAM_9_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_9_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_1_8_d1() {
    WBRAM_9_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_1_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_0_addr_gep_fu_9495_p3() {
    WBRAM_9_2_0_addr_gep_fu_9495_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_0_address0.read();
    } else {
        WBRAM_9_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_0_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_9_2_0_address1 = WBRAM_9_2_0_addr_gep_fu_9495_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_9_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_0_ce0.read();
    } else {
        WBRAM_9_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_0_d1() {
    WBRAM_9_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_1_addr_gep_fu_9502_p3() {
    WBRAM_9_2_1_addr_gep_fu_9502_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_1_address0.read();
    } else {
        WBRAM_9_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_1_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_9_2_1_address1 = WBRAM_9_2_1_addr_gep_fu_9502_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_9_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_1_ce0.read();
    } else {
        WBRAM_9_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_1_d1() {
    WBRAM_9_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_2_addr_gep_fu_9509_p3() {
    WBRAM_9_2_2_addr_gep_fu_9509_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_2_address0.read();
    } else {
        WBRAM_9_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_2_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_9_2_2_address1 = WBRAM_9_2_2_addr_gep_fu_9509_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_9_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_2_ce0.read();
    } else {
        WBRAM_9_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_2_d1() {
    WBRAM_9_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_3_addr_gep_fu_9516_p3() {
    WBRAM_9_2_3_addr_gep_fu_9516_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_3_address0.read();
    } else {
        WBRAM_9_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_3_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_9_2_3_address1 = WBRAM_9_2_3_addr_gep_fu_9516_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_9_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_3_ce0.read();
    } else {
        WBRAM_9_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_3_d1() {
    WBRAM_9_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_4_addr_gep_fu_9523_p3() {
    WBRAM_9_2_4_addr_gep_fu_9523_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_4_address0.read();
    } else {
        WBRAM_9_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_4_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_9_2_4_address1 = WBRAM_9_2_4_addr_gep_fu_9523_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_9_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_4_ce0.read();
    } else {
        WBRAM_9_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_4_d1() {
    WBRAM_9_2_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_5_addr_gep_fu_9530_p3() {
    WBRAM_9_2_5_addr_gep_fu_9530_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_5_address0.read();
    } else {
        WBRAM_9_2_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_5_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_9_2_5_address1 = WBRAM_9_2_5_addr_gep_fu_9530_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_9_2_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_5_ce0.read();
    } else {
        WBRAM_9_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_5_d1() {
    WBRAM_9_2_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_6_addr_gep_fu_9537_p3() {
    WBRAM_9_2_6_addr_gep_fu_9537_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_6_address0.read();
    } else {
        WBRAM_9_2_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_6_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_9_2_6_address1 = WBRAM_9_2_6_addr_gep_fu_9537_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_9_2_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_6_ce0.read();
    } else {
        WBRAM_9_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_6_d1() {
    WBRAM_9_2_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_7_addr_gep_fu_9544_p3() {
    WBRAM_9_2_7_addr_gep_fu_9544_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_9_2_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_7_address0.read();
    } else {
        WBRAM_9_2_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_7_address1() {
    if (ap_sig_bdd_22640.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_9_2_7_address1 = WBRAM_9_2_7_addr_gep_fu_9544_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_9_2_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_9_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_9_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_9_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        WBRAM_9_2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_7_ce0.read();
    } else {
        WBRAM_9_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_7_d1() {
    WBRAM_9_2_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_8_address0() {
    WBRAM_9_2_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_8_address0.read();
}

void fpga_top::thread_WBRAM_9_2_8_address1() {
    WBRAM_9_2_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_9_2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_9_2_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_9_2_8_ce0.read();
    } else {
        WBRAM_9_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_9_2_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_9_2_8_d1() {
    WBRAM_9_2_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_9_2_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9)))) {
        WBRAM_9_2_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_9_2_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st96_fsm_32.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st96_fsm_32.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void fpga_top::thread_ap_sig_bdd_10846() {
    ap_sig_bdd_10846 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(29, 29));
}

void fpga_top::thread_ap_sig_bdd_10855() {
    ap_sig_bdd_10855 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(30, 30));
}

void fpga_top::thread_ap_sig_bdd_10887() {
    ap_sig_bdd_10887 = (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it7.read()));
}

void fpga_top::thread_ap_sig_bdd_15543() {
    ap_sig_bdd_15543 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void fpga_top::thread_ap_sig_bdd_15563() {
    ap_sig_bdd_15563 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(14, 14));
}

void fpga_top::thread_ap_sig_bdd_15591() {
    ap_sig_bdd_15591 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(21, 21));
}

void fpga_top::thread_ap_sig_bdd_15676() {
    ap_sig_bdd_15676 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()));
}

void fpga_top::thread_ap_sig_bdd_15687() {
    ap_sig_bdd_15687 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp1_stg0_fsm_12.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_24337.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()) && !(ap_sig_bdd_7899.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it8.read())));
}

void fpga_top::thread_ap_sig_bdd_15698() {
    ap_sig_bdd_15698 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp2_stg0_fsm_15.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_24357.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && !(ap_sig_bdd_7972.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it8.read())));
}

void fpga_top::thread_ap_sig_bdd_15709() {
    ap_sig_bdd_15709 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp3_stg0_fsm_18.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_24463.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && !(ap_sig_bdd_8080.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it8.read())));
}

void fpga_top::thread_ap_sig_bdd_15720() {
    ap_sig_bdd_15720 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && !(esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())));
}

void fpga_top::thread_ap_sig_bdd_15728() {
    ap_sig_bdd_15728 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && !(esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())));
}

void fpga_top::thread_ap_sig_bdd_15739() {
    ap_sig_bdd_15739 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && !(ap_sig_bdd_10887.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())));
}

void fpga_top::thread_ap_sig_bdd_15748() {
    ap_sig_bdd_15748 = (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read()) && !(ap_sig_bdd_10887.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())));
}

void fpga_top::thread_ap_sig_bdd_22228() {
    ap_sig_bdd_22228 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(32, 32));
}

void fpga_top::thread_ap_sig_bdd_22414() {
    ap_sig_bdd_22414 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()));
}

void fpga_top::thread_ap_sig_bdd_22415() {
    ap_sig_bdd_22415 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22418() {
    ap_sig_bdd_22418 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A));
}

void fpga_top::thread_ap_sig_bdd_22420() {
    ap_sig_bdd_22420 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B));
}

void fpga_top::thread_ap_sig_bdd_22422() {
    ap_sig_bdd_22422 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C));
}

void fpga_top::thread_ap_sig_bdd_22424() {
    ap_sig_bdd_22424 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D));
}

void fpga_top::thread_ap_sig_bdd_22426() {
    ap_sig_bdd_22426 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E));
}

void fpga_top::thread_ap_sig_bdd_22442() {
    ap_sig_bdd_22442 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22444() {
    ap_sig_bdd_22444 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1));
}

void fpga_top::thread_ap_sig_bdd_22446() {
    ap_sig_bdd_22446 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2));
}

void fpga_top::thread_ap_sig_bdd_22448() {
    ap_sig_bdd_22448 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3));
}

void fpga_top::thread_ap_sig_bdd_22450() {
    ap_sig_bdd_22450 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4));
}

void fpga_top::thread_ap_sig_bdd_22452() {
    ap_sig_bdd_22452 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5));
}

void fpga_top::thread_ap_sig_bdd_22454() {
    ap_sig_bdd_22454 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6));
}

void fpga_top::thread_ap_sig_bdd_22456() {
    ap_sig_bdd_22456 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7));
}

void fpga_top::thread_ap_sig_bdd_22458() {
    ap_sig_bdd_22458 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8));
}

void fpga_top::thread_ap_sig_bdd_22460() {
    ap_sig_bdd_22460 = (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9));
}

void fpga_top::thread_ap_sig_bdd_22463() {
    ap_sig_bdd_22463 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22464() {
    ap_sig_bdd_22464 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22466() {
    ap_sig_bdd_22466 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0));
}

void fpga_top::thread_ap_sig_bdd_22469() {
    ap_sig_bdd_22469 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1));
}

void fpga_top::thread_ap_sig_bdd_22471() {
    ap_sig_bdd_22471 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1));
}

void fpga_top::thread_ap_sig_bdd_22473() {
    ap_sig_bdd_22473 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2));
}

void fpga_top::thread_ap_sig_bdd_22475() {
    ap_sig_bdd_22475 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2));
}

void fpga_top::thread_ap_sig_bdd_22477() {
    ap_sig_bdd_22477 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3));
}

void fpga_top::thread_ap_sig_bdd_22479() {
    ap_sig_bdd_22479 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3));
}

void fpga_top::thread_ap_sig_bdd_22481() {
    ap_sig_bdd_22481 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4));
}

void fpga_top::thread_ap_sig_bdd_22483() {
    ap_sig_bdd_22483 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4));
}

void fpga_top::thread_ap_sig_bdd_22485() {
    ap_sig_bdd_22485 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5));
}

void fpga_top::thread_ap_sig_bdd_22487() {
    ap_sig_bdd_22487 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5));
}

void fpga_top::thread_ap_sig_bdd_22489() {
    ap_sig_bdd_22489 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6));
}

void fpga_top::thread_ap_sig_bdd_22491() {
    ap_sig_bdd_22491 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6));
}

void fpga_top::thread_ap_sig_bdd_22493() {
    ap_sig_bdd_22493 = (esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7));
}

void fpga_top::thread_ap_sig_bdd_22501() {
    ap_sig_bdd_22501 = (!esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && !esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0));
}

void fpga_top::thread_ap_sig_bdd_22505() {
    ap_sig_bdd_22505 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22508() {
    ap_sig_bdd_22508 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A));
}

void fpga_top::thread_ap_sig_bdd_22510() {
    ap_sig_bdd_22510 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A));
}

void fpga_top::thread_ap_sig_bdd_22512() {
    ap_sig_bdd_22512 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A));
}

void fpga_top::thread_ap_sig_bdd_22514() {
    ap_sig_bdd_22514 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B));
}

void fpga_top::thread_ap_sig_bdd_22516() {
    ap_sig_bdd_22516 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B));
}

void fpga_top::thread_ap_sig_bdd_22518() {
    ap_sig_bdd_22518 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B));
}

void fpga_top::thread_ap_sig_bdd_22520() {
    ap_sig_bdd_22520 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C));
}

void fpga_top::thread_ap_sig_bdd_22522() {
    ap_sig_bdd_22522 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C));
}

void fpga_top::thread_ap_sig_bdd_22524() {
    ap_sig_bdd_22524 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C));
}

void fpga_top::thread_ap_sig_bdd_22526() {
    ap_sig_bdd_22526 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D));
}

void fpga_top::thread_ap_sig_bdd_22528() {
    ap_sig_bdd_22528 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D));
}

void fpga_top::thread_ap_sig_bdd_22530() {
    ap_sig_bdd_22530 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D));
}

void fpga_top::thread_ap_sig_bdd_22533() {
    ap_sig_bdd_22533 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()));
}

void fpga_top::thread_ap_sig_bdd_22535() {
    ap_sig_bdd_22535 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1));
}

void fpga_top::thread_ap_sig_bdd_22538() {
    ap_sig_bdd_22538 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()));
}

void fpga_top::thread_ap_sig_bdd_22554() {
    ap_sig_bdd_22554 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22570() {
    ap_sig_bdd_22570 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22586() {
    ap_sig_bdd_22586 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_E) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_D) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1) && !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0));
}

void fpga_top::thread_ap_sig_bdd_22588() {
    ap_sig_bdd_22588 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1));
}

void fpga_top::thread_ap_sig_bdd_22590() {
    ap_sig_bdd_22590 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1));
}

void fpga_top::thread_ap_sig_bdd_22592() {
    ap_sig_bdd_22592 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_1));
}

void fpga_top::thread_ap_sig_bdd_22594() {
    ap_sig_bdd_22594 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2));
}

void fpga_top::thread_ap_sig_bdd_22596() {
    ap_sig_bdd_22596 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2));
}

void fpga_top::thread_ap_sig_bdd_22598() {
    ap_sig_bdd_22598 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_2));
}

void fpga_top::thread_ap_sig_bdd_22600() {
    ap_sig_bdd_22600 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3));
}

void fpga_top::thread_ap_sig_bdd_22602() {
    ap_sig_bdd_22602 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3));
}

void fpga_top::thread_ap_sig_bdd_22604() {
    ap_sig_bdd_22604 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_3));
}

void fpga_top::thread_ap_sig_bdd_22606() {
    ap_sig_bdd_22606 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4));
}

void fpga_top::thread_ap_sig_bdd_22608() {
    ap_sig_bdd_22608 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4));
}

void fpga_top::thread_ap_sig_bdd_22610() {
    ap_sig_bdd_22610 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_4));
}

void fpga_top::thread_ap_sig_bdd_22612() {
    ap_sig_bdd_22612 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5));
}

void fpga_top::thread_ap_sig_bdd_22614() {
    ap_sig_bdd_22614 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5));
}

void fpga_top::thread_ap_sig_bdd_22616() {
    ap_sig_bdd_22616 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_5));
}

void fpga_top::thread_ap_sig_bdd_22618() {
    ap_sig_bdd_22618 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6));
}

void fpga_top::thread_ap_sig_bdd_22620() {
    ap_sig_bdd_22620 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6));
}

void fpga_top::thread_ap_sig_bdd_22622() {
    ap_sig_bdd_22622 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_6));
}

void fpga_top::thread_ap_sig_bdd_22624() {
    ap_sig_bdd_22624 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7));
}

void fpga_top::thread_ap_sig_bdd_22626() {
    ap_sig_bdd_22626 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7));
}

void fpga_top::thread_ap_sig_bdd_22628() {
    ap_sig_bdd_22628 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_7));
}

void fpga_top::thread_ap_sig_bdd_22630() {
    ap_sig_bdd_22630 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8));
}

void fpga_top::thread_ap_sig_bdd_22632() {
    ap_sig_bdd_22632 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8));
}

void fpga_top::thread_ap_sig_bdd_22634() {
    ap_sig_bdd_22634 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_8));
}

void fpga_top::thread_ap_sig_bdd_22636() {
    ap_sig_bdd_22636 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9));
}

void fpga_top::thread_ap_sig_bdd_22638() {
    ap_sig_bdd_22638 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9));
}

void fpga_top::thread_ap_sig_bdd_22640() {
    ap_sig_bdd_22640 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_9));
}

void fpga_top::thread_ap_sig_bdd_51() {
    ap_sig_bdd_51 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void fpga_top::thread_ap_sig_bdd_5935() {
    ap_sig_bdd_5935 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void fpga_top::thread_ap_sig_bdd_5950() {
    ap_sig_bdd_5950 = (esl_seteq<1,1,1>(memorybus_RVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond9_reg_19802_pp0_it3.read()));
}

void fpga_top::thread_ap_sig_bdd_5977() {
    ap_sig_bdd_5977 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(28, 28));
}

void fpga_top::thread_ap_sig_bdd_6048() {
    ap_sig_bdd_6048 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void fpga_top::thread_ap_sig_bdd_6058() {
    ap_sig_bdd_6058 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(17, 17));
}

void fpga_top::thread_ap_sig_bdd_6071() {
    ap_sig_bdd_6071 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void fpga_top::thread_ap_sig_bdd_6102() {
    ap_sig_bdd_6102 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void fpga_top::thread_ap_sig_bdd_6113() {
    ap_sig_bdd_6113 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void fpga_top::thread_ap_sig_bdd_6136() {
    ap_sig_bdd_6136 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void fpga_top::thread_ap_sig_bdd_6162() {
    ap_sig_bdd_6162 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void fpga_top::thread_ap_sig_bdd_6225() {
    ap_sig_bdd_6225 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void fpga_top::thread_ap_sig_bdd_7875() {
    ap_sig_bdd_7875 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void fpga_top::thread_ap_sig_bdd_7899() {
    ap_sig_bdd_7899 = (esl_seteq<1,1,1>(memorybus_RVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond7_reg_24337_pp1_it7.read()));
}

void fpga_top::thread_ap_sig_bdd_7939() {
    ap_sig_bdd_7939 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(13, 13));
}

void fpga_top::thread_ap_sig_bdd_7948() {
    ap_sig_bdd_7948 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(15, 15));
}

void fpga_top::thread_ap_sig_bdd_7972() {
    ap_sig_bdd_7972 = (esl_seteq<1,1,1>(memorybus_RVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_24357_pp2_it7.read()));
}

void fpga_top::thread_ap_sig_bdd_8012() {
    ap_sig_bdd_8012 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(16, 16));
}

void fpga_top::thread_ap_sig_bdd_8056() {
    ap_sig_bdd_8056 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(18, 18));
}

void fpga_top::thread_ap_sig_bdd_8080() {
    ap_sig_bdd_8080 = (esl_seteq<1,1,1>(memorybus_RVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_24463_pp3_it7.read()));
}

void fpga_top::thread_ap_sig_bdd_8120() {
    ap_sig_bdd_8120 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(19, 19));
}

void fpga_top::thread_ap_sig_bdd_8129() {
    ap_sig_bdd_8129 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(20, 20));
}

void fpga_top::thread_ap_sig_bdd_8146() {
    ap_sig_bdd_8146 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(23, 23));
}

void fpga_top::thread_ap_sig_bdd_8159() {
    ap_sig_bdd_8159 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(24, 24));
}

void fpga_top::thread_ap_sig_bdd_8172() {
    ap_sig_bdd_8172 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(26, 26));
}

void fpga_top::thread_ap_sig_bdd_8181() {
    ap_sig_bdd_8181 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(27, 27));
}

void fpga_top::thread_ap_sig_cseq_ST_pp0_stg0_fsm_8() {
    if (ap_sig_bdd_5935.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_8 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp0_stg1_fsm_9() {
    if (ap_sig_bdd_6225.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_9 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp1_stg0_fsm_12() {
    if (ap_sig_bdd_7875.read()) {
        ap_sig_cseq_ST_pp1_stg0_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp1_stg0_fsm_12 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp2_stg0_fsm_15() {
    if (ap_sig_bdd_7948.read()) {
        ap_sig_cseq_ST_pp2_stg0_fsm_15 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp2_stg0_fsm_15 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp3_stg0_fsm_18() {
    if (ap_sig_bdd_8056.read()) {
        ap_sig_cseq_ST_pp3_stg0_fsm_18 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp3_stg0_fsm_18 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp4_stg0_fsm_28() {
    if (ap_sig_bdd_5977.read()) {
        ap_sig_cseq_ST_pp4_stg0_fsm_28 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp4_stg0_fsm_28 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_pp5_stg0_fsm_30() {
    if (ap_sig_bdd_10855.read()) {
        ap_sig_cseq_ST_pp5_stg0_fsm_30 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp5_stg0_fsm_30 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_51.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st20_fsm_10() {
    if (ap_sig_bdd_15543.read()) {
        ap_sig_cseq_ST_st20_fsm_10 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st20_fsm_10 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st21_fsm_11() {
    if (ap_sig_bdd_6048.read()) {
        ap_sig_cseq_ST_st21_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st21_fsm_11 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_bdd_6071.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st32_fsm_13() {
    if (ap_sig_bdd_7939.read()) {
        ap_sig_cseq_ST_st32_fsm_13 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st32_fsm_13 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st33_fsm_14() {
    if (ap_sig_bdd_15563.read()) {
        ap_sig_cseq_ST_st33_fsm_14 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st33_fsm_14 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st3_fsm_2() {
    if (ap_sig_bdd_6102.read()) {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st44_fsm_16() {
    if (ap_sig_bdd_8012.read()) {
        ap_sig_cseq_ST_st44_fsm_16 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st44_fsm_16 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st45_fsm_17() {
    if (ap_sig_bdd_6058.read()) {
        ap_sig_cseq_ST_st45_fsm_17 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st45_fsm_17 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st56_fsm_19() {
    if (ap_sig_bdd_8120.read()) {
        ap_sig_cseq_ST_st56_fsm_19 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st56_fsm_19 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st57_fsm_20() {
    if (ap_sig_bdd_8129.read()) {
        ap_sig_cseq_ST_st57_fsm_20 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st57_fsm_20 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st58_fsm_21() {
    if (ap_sig_bdd_15591.read()) {
        ap_sig_cseq_ST_st58_fsm_21 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st58_fsm_21 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st5_fsm_4() {
    if (ap_sig_bdd_6113.read()) {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_4 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st60_fsm_23() {
    if (ap_sig_bdd_8146.read()) {
        ap_sig_cseq_ST_st60_fsm_23 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st60_fsm_23 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st61_fsm_24() {
    if (ap_sig_bdd_8159.read()) {
        ap_sig_cseq_ST_st61_fsm_24 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st61_fsm_24 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st63_fsm_26() {
    if (ap_sig_bdd_8172.read()) {
        ap_sig_cseq_ST_st63_fsm_26 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st63_fsm_26 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st64_fsm_27() {
    if (ap_sig_bdd_8181.read()) {
        ap_sig_cseq_ST_st64_fsm_27 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st64_fsm_27 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st6_fsm_5() {
    if (ap_sig_bdd_6136.read()) {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st6_fsm_5 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st85_fsm_29() {
    if (ap_sig_bdd_10846.read()) {
        ap_sig_cseq_ST_st85_fsm_29 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st85_fsm_29 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st8_fsm_7() {
    if (ap_sig_bdd_6162.read()) {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st8_fsm_7 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_cseq_ST_st96_fsm_32() {
    if (ap_sig_bdd_22228.read()) {
        ap_sig_cseq_ST_st96_fsm_32 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st96_fsm_32 = ap_const_logic_0;
    }
}

void fpga_top::thread_ap_sig_ioackin_memorybus_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_memorybus_ARREADY.read())) {
        ap_sig_ioackin_memorybus_ARREADY = memorybus_ARREADY.read();
    } else {
        ap_sig_ioackin_memorybus_ARREADY = ap_const_logic_1;
    }
}

void fpga_top::thread_ap_sig_ioackin_memorybus_AWREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_memorybus_AWREADY.read())) {
        ap_sig_ioackin_memorybus_AWREADY = memorybus_AWREADY.read();
    } else {
        ap_sig_ioackin_memorybus_AWREADY = ap_const_logic_1;
    }
}

void fpga_top::thread_ap_sig_ioackin_memorybus_WREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_memorybus_WREADY.read())) {
        ap_sig_ioackin_memorybus_WREADY = memorybus_WREADY.read();
    } else {
        ap_sig_ioackin_memorybus_WREADY = ap_const_logic_1;
    }
}

void fpga_top::thread_ap_sig_startack_grp_fpga_top_processInputChannel_0_fu_14915_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_startack_grp_fpga_top_processInputChannel_0_fu_14915_ap_ready.read())) {
        ap_sig_startack_grp_fpga_top_processInputChannel_0_fu_14915_ap_ready = grp_fpga_top_processInputChannel_0_fu_14915_ap_ready.read();
    } else {
        ap_sig_startack_grp_fpga_top_processInputChannel_0_fu_14915_ap_ready = ap_const_logic_1;
    }
}

void fpga_top::thread_bias_or_1x1_fu_16647_p2() {
    bias_or_1x1_fu_16647_p2 = (tmp_11_reg_19680.read() | tmp_14_fu_16642_p2.read());
}

void fpga_top::thread_biased_2_fu_19407_p3() {
    biased_2_fu_19407_p3 = (!tmp_78_reg_28554.read()[0].is_01())? sc_lv<32>(): ((tmp_78_reg_28554.read()[0].to_bool())? ap_const_lv32_0: ap_reg_ppstg_biased_reg_28541_pp4_it10.read());
}

void fpga_top::thread_biased_to_int_fu_19319_p1() {
    biased_to_int_fu_19319_p1 = biased_reg_28541.read();
}

void fpga_top::thread_bound_fu_17857_p0() {
    bound_fu_17857_p0 =  (sc_lv<9>) (bound_fu_17857_p00.read());
}

void fpga_top::thread_bound_fu_17857_p00() {
    bound_fu_17857_p00 = esl_zext<18,9>(layer_width_V_read_reg_19653.read());
}

void fpga_top::thread_bound_fu_17857_p1() {
    bound_fu_17857_p1 =  (sc_lv<9>) (bound_fu_17857_p10.read());
}

void fpga_top::thread_bound_fu_17857_p10() {
    bound_fu_17857_p10 = esl_zext<18,9>(layer_height_V_read_reg_19647.read());
}

void fpga_top::thread_bound_fu_17857_p2() {
    bound_fu_17857_p2 = (!bound_fu_17857_p0.read().is_01() || !bound_fu_17857_p1.read().is_01())? sc_lv<18>(): sc_biguint<9>(bound_fu_17857_p0.read()) * sc_biguint<9>(bound_fu_17857_p1.read());
}

void fpga_top::thread_ci_V_1_fu_17741_p2() {
    ci_V_1_fu_17741_p2 = (!p_024_0_i_i_reg_14803.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(p_024_0_i_i_reg_14803.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_ci_V_2_fu_17797_p2() {
    ci_V_2_fu_17797_p2 = (!p_024_0_i1_reg_14825.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(p_024_0_i1_reg_14825.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_ci_V_3_fu_17995_p2() {
    ci_V_3_fu_17995_p2 = (!p_024_0_i_reg_14869.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(p_024_0_i_reg_14869.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_ci_V_4_fu_18079_p2() {
    ci_V_4_fu_18079_p2 = (!p_0_reg_14880.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(p_0_reg_14880.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_ci_V_fu_16627_p2() {
    ci_V_fu_16627_p2 = (!tmp_7_reg_14738.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_7_reg_14738.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_co_V_1_fu_18214_p2() {
    co_V_1_fu_18214_p2 = (!tmp_61_phi_fu_14896_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_61_phi_fu_14896_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_co_V_fu_16868_p2() {
    co_V_fu_16868_p2 = (!tmp_18_phi_fu_14775_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_18_phi_fu_14775_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void fpga_top::thread_dram_addr_V_fu_16662_p2() {
    dram_addr_V_fu_16662_p2 = (!tmp_15_fu_16658_p1.read().is_01() || !p_069_0_i_reg_14726.read().is_01())? sc_lv<19>(): (sc_biguint<19>(tmp_15_fu_16658_p1.read()) + sc_biguint<19>(p_069_0_i_reg_14726.read()));
}

void fpga_top::thread_exitcond1_fu_17888_p2() {
    exitcond1_fu_17888_p2 = (!r_V_16_reg_14858.read().is_01() || !layer_width_V_read_reg_19653.read().is_01())? sc_lv<1>(): sc_lv<1>(r_V_16_reg_14858.read() == layer_width_V_read_reg_19653.read());
}

void fpga_top::thread_exitcond4_fu_18209_p2() {
    exitcond4_fu_18209_p2 = (!tmp_61_phi_fu_14896_p4.read().is_01() || !layer_channels_out_V_read_reg_19625.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_61_phi_fu_14896_p4.read() == layer_channels_out_V_read_reg_19625.read());
}

void fpga_top::thread_exitcond5_fu_17990_p2() {
    exitcond5_fu_17990_p2 = (!p_024_0_i_reg_14869.read().is_01() || !ImageCache_ch_in_V_load_reg_24439.read().is_01())? sc_lv<1>(): sc_lv<1>(p_024_0_i_reg_14869.read() == ImageCache_ch_in_V_load_reg_24439.read());
}

void fpga_top::thread_exitcond6_fu_17792_p2() {
    exitcond6_fu_17792_p2 = (!p_024_0_i1_reg_14825.read().is_01() || !layer_channels_in_V_read_reg_19635.read().is_01())? sc_lv<1>(): sc_lv<1>(p_024_0_i1_reg_14825.read() == layer_channels_in_V_read_reg_19635.read());
}

void fpga_top::thread_exitcond7_fu_17736_p2() {
    exitcond7_fu_17736_p2 = (!p_024_0_i_i_reg_14803.read().is_01() || !layer_channels_in_V_read_reg_19635.read().is_01())? sc_lv<1>(): sc_lv<1>(p_024_0_i_i_reg_14803.read() == layer_channels_in_V_read_reg_19635.read());
}

void fpga_top::thread_exitcond8_fu_17701_p2() {
    exitcond8_fu_17701_p2 = (!p_02_0_i_reg_14792.read().is_01() || !layer_width_V_read_reg_19653.read().is_01())? sc_lv<1>(): sc_lv<1>(p_02_0_i_reg_14792.read() == layer_width_V_read_reg_19653.read());
}

void fpga_top::thread_exitcond9_fu_16711_p2() {
    exitcond9_fu_16711_p2 = (!tmp_22_fu_16707_p1.read().is_01() || !tmp_112_reg_19797.read().is_01())? sc_lv<1>(): sc_lv<1>(tmp_22_fu_16707_p1.read() == tmp_112_reg_19797.read());
}

void fpga_top::thread_exitcond_flatten_fu_17871_p2() {
    exitcond_flatten_fu_17871_p2 = (!indvar_flatten_reg_14836.read().is_01() || !bound_reg_24391.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_14836.read() == bound_reg_24391.read());
}

void fpga_top::thread_exitcond_fu_18074_p2() {
    exitcond_fu_18074_p2 = (!p_0_reg_14880.read().is_01() || !layer_channels_in_V_read_reg_19635.read().is_01())? sc_lv<1>(): sc_lv<1>(p_0_reg_14880.read() == layer_channels_in_V_read_reg_19635.read());
}

void fpga_top::thread_fpga_top_AXILiteS_s_axi_U_ap_dummy_ce() {
    fpga_top_AXILiteS_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void fpga_top::thread_fpga_top_axilite_s_axi_U_ap_dummy_ce() {
    fpga_top_axilite_s_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void fpga_top::thread_fpga_top_memorybus_m_axi_U_ap_dummy_ce() {
    fpga_top_memorybus_m_axi_U_ap_dummy_ce = ap_const_logic_1;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_q0 = ImageCache_IBRAM_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_ch_in_V() {
    grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_ch_in_V = ImageCache_ch_in_V.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_height_in_V() {
    grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_height_in_V = ImageCache_height_in_V.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_width_in_V() {
    grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_width_in_V = ImageCache_width_in_V.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_q0 = OBRAM_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_q0 = OBRAM_10_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_q0 = OBRAM_11_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_q0 = OBRAM_12_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_q0 = OBRAM_13_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_q0 = OBRAM_14_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_q0 = OBRAM_15_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_q0 = OBRAM_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_q0 = OBRAM_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_q0 = OBRAM_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_q0 = OBRAM_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_q0 = OBRAM_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_q0 = OBRAM_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_q0 = OBRAM_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_q0 = OBRAM_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_q0 = OBRAM_9_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_q0 = WBRAM_0_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_q0 = WBRAM_0_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_q0 = WBRAM_0_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_q0 = WBRAM_0_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_q0 = WBRAM_0_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_q0 = WBRAM_0_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_q0 = WBRAM_0_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_q0 = WBRAM_0_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_q0 = WBRAM_0_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_q0 = WBRAM_0_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_q0 = WBRAM_0_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_q0 = WBRAM_0_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_q0 = WBRAM_0_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_q0 = WBRAM_0_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_q0 = WBRAM_0_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_q0 = WBRAM_0_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_q0 = WBRAM_0_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_q0 = WBRAM_0_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_q0 = WBRAM_0_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_q0 = WBRAM_0_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_q0 = WBRAM_0_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_q0 = WBRAM_0_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_q0 = WBRAM_0_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_q0 = WBRAM_0_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_q0 = WBRAM_0_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_q0 = WBRAM_0_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_q0 = WBRAM_0_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_q0 = WBRAM_10_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_q0 = WBRAM_10_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_q0 = WBRAM_10_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_q0 = WBRAM_10_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_q0 = WBRAM_10_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_q0 = WBRAM_10_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_q0 = WBRAM_10_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_q0 = WBRAM_10_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_q0 = WBRAM_10_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_q0 = WBRAM_10_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_q0 = WBRAM_10_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_q0 = WBRAM_10_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_q0 = WBRAM_10_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_q0 = WBRAM_10_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_q0 = WBRAM_10_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_q0 = WBRAM_10_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_q0 = WBRAM_10_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_q0 = WBRAM_10_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_q0 = WBRAM_10_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_q0 = WBRAM_10_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_q0 = WBRAM_10_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_q0 = WBRAM_10_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_q0 = WBRAM_10_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_q0 = WBRAM_10_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_q0 = WBRAM_10_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_q0 = WBRAM_10_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_q0 = WBRAM_10_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_q0 = WBRAM_11_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_q0 = WBRAM_11_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_q0 = WBRAM_11_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_q0 = WBRAM_11_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_q0 = WBRAM_11_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_q0 = WBRAM_11_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_q0 = WBRAM_11_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_q0 = WBRAM_11_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_q0 = WBRAM_11_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_q0 = WBRAM_11_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_q0 = WBRAM_11_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_q0 = WBRAM_11_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_q0 = WBRAM_11_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_q0 = WBRAM_11_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_q0 = WBRAM_11_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_q0 = WBRAM_11_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_q0 = WBRAM_11_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_q0 = WBRAM_11_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_q0 = WBRAM_11_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_q0 = WBRAM_11_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_q0 = WBRAM_11_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_q0 = WBRAM_11_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_q0 = WBRAM_11_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_q0 = WBRAM_11_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_q0 = WBRAM_11_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_q0 = WBRAM_11_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_q0 = WBRAM_11_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_q0 = WBRAM_12_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_q0 = WBRAM_12_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_q0 = WBRAM_12_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_q0 = WBRAM_12_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_q0 = WBRAM_12_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_q0 = WBRAM_12_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_q0 = WBRAM_12_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_q0 = WBRAM_12_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_q0 = WBRAM_12_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_q0 = WBRAM_12_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_q0 = WBRAM_12_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_q0 = WBRAM_12_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_q0 = WBRAM_12_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_q0 = WBRAM_12_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_q0 = WBRAM_12_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_q0 = WBRAM_12_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_q0 = WBRAM_12_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_q0 = WBRAM_12_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_q0 = WBRAM_12_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_q0 = WBRAM_12_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_q0 = WBRAM_12_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_q0 = WBRAM_12_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_q0 = WBRAM_12_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_5_q0 = WBRAM_12_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_6_q0 = WBRAM_12_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_7_q0 = WBRAM_12_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_8_q0 = WBRAM_12_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_0_q0 = WBRAM_13_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_1_q0 = WBRAM_13_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_2_q0 = WBRAM_13_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_3_q0 = WBRAM_13_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_4_q0 = WBRAM_13_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_5_q0 = WBRAM_13_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_6_q0 = WBRAM_13_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_7_q0 = WBRAM_13_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_8_q0 = WBRAM_13_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_0_q0 = WBRAM_13_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_1_q0 = WBRAM_13_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_2_q0 = WBRAM_13_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_3_q0 = WBRAM_13_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_4_q0 = WBRAM_13_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_5_q0 = WBRAM_13_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_6_q0 = WBRAM_13_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_7_q0 = WBRAM_13_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_8_q0 = WBRAM_13_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_0_q0 = WBRAM_13_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_1_q0 = WBRAM_13_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_2_q0 = WBRAM_13_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_3_q0 = WBRAM_13_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_4_q0 = WBRAM_13_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_5_q0 = WBRAM_13_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_6_q0 = WBRAM_13_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_7_q0 = WBRAM_13_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_8_q0 = WBRAM_13_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_13_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_0_q0 = WBRAM_14_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_1_q0 = WBRAM_14_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_2_q0 = WBRAM_14_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_3_q0 = WBRAM_14_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_4_q0 = WBRAM_14_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_5_q0 = WBRAM_14_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_6_q0 = WBRAM_14_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_7_q0 = WBRAM_14_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_8_q0 = WBRAM_14_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_0_q0 = WBRAM_14_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_1_q0 = WBRAM_14_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_2_q0 = WBRAM_14_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_3_q0 = WBRAM_14_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_4_q0 = WBRAM_14_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_5_q0 = WBRAM_14_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_6_q0 = WBRAM_14_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_7_q0 = WBRAM_14_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_8_q0 = WBRAM_14_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_0_q0 = WBRAM_14_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_1_q0 = WBRAM_14_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_2_q0 = WBRAM_14_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_3_q0 = WBRAM_14_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_4_q0 = WBRAM_14_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_5_q0 = WBRAM_14_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_6_q0 = WBRAM_14_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_7_q0 = WBRAM_14_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_8_q0 = WBRAM_14_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_14_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_0_q0 = WBRAM_15_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_1_q0 = WBRAM_15_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_2_q0 = WBRAM_15_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_3_q0 = WBRAM_15_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_4_q0 = WBRAM_15_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_5_q0 = WBRAM_15_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_6_q0 = WBRAM_15_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_7_q0 = WBRAM_15_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_8_q0 = WBRAM_15_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_0_q0 = WBRAM_15_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_1_q0 = WBRAM_15_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_2_q0 = WBRAM_15_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_3_q0 = WBRAM_15_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_4_q0 = WBRAM_15_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_5_q0 = WBRAM_15_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_6_q0 = WBRAM_15_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_7_q0 = WBRAM_15_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_8_q0 = WBRAM_15_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_0_q0 = WBRAM_15_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_1_q0 = WBRAM_15_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_2_q0 = WBRAM_15_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_3_q0 = WBRAM_15_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_4_q0 = WBRAM_15_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_5_q0 = WBRAM_15_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_6_q0 = WBRAM_15_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_7_q0 = WBRAM_15_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_8_q0 = WBRAM_15_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_15_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_0_q0 = WBRAM_1_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_1_q0 = WBRAM_1_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_2_q0 = WBRAM_1_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_3_q0 = WBRAM_1_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_4_q0 = WBRAM_1_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_5_q0 = WBRAM_1_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_6_q0 = WBRAM_1_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_7_q0 = WBRAM_1_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_8_q0 = WBRAM_1_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_0_q0 = WBRAM_1_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_1_q0 = WBRAM_1_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_2_q0 = WBRAM_1_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_3_q0 = WBRAM_1_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_4_q0 = WBRAM_1_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_5_q0 = WBRAM_1_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_6_q0 = WBRAM_1_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_7_q0 = WBRAM_1_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_8_q0 = WBRAM_1_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_0_q0 = WBRAM_1_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_1_q0 = WBRAM_1_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_2_q0 = WBRAM_1_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_3_q0 = WBRAM_1_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_4_q0 = WBRAM_1_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_5_q0 = WBRAM_1_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_6_q0 = WBRAM_1_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_7_q0 = WBRAM_1_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_8_q0 = WBRAM_1_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_1_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_0_q0 = WBRAM_2_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_1_q0 = WBRAM_2_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_2_q0 = WBRAM_2_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_3_q0 = WBRAM_2_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_4_q0 = WBRAM_2_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_5_q0 = WBRAM_2_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_6_q0 = WBRAM_2_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_7_q0 = WBRAM_2_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_8_q0 = WBRAM_2_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_0_q0 = WBRAM_2_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_1_q0 = WBRAM_2_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_2_q0 = WBRAM_2_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_3_q0 = WBRAM_2_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_4_q0 = WBRAM_2_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_5_q0 = WBRAM_2_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_6_q0 = WBRAM_2_1_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_7_q0 = WBRAM_2_1_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_8_q0 = WBRAM_2_1_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_1_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_0_q0 = WBRAM_2_2_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_1_q0 = WBRAM_2_2_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_2_q0 = WBRAM_2_2_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_3_q0 = WBRAM_2_2_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_4_q0 = WBRAM_2_2_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_5_q0 = WBRAM_2_2_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_6_q0 = WBRAM_2_2_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_7_q0 = WBRAM_2_2_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_8_q0 = WBRAM_2_2_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_2_2_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_0_q0 = WBRAM_3_0_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_1_q0 = WBRAM_3_0_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_2_q0 = WBRAM_3_0_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_3_q0 = WBRAM_3_0_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_4_q0 = WBRAM_3_0_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_5_q0 = WBRAM_3_0_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_6_q0 = WBRAM_3_0_6_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_6_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_6_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_7_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_7_q0 = WBRAM_3_0_7_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_7_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_7_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_8_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_8_q0 = WBRAM_3_0_8_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_8_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_0_8_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_0_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_0_q0 = WBRAM_3_1_0_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_0_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_0_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_1_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_1_q0 = WBRAM_3_1_1_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_1_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_1_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_2_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_2_q0 = WBRAM_3_1_2_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_2_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_2_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_3_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_3_q0 = WBRAM_3_1_3_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_3_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_3_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_4_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_4_q0 = WBRAM_3_1_4_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_4_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_4_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_5_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_5_q0 = WBRAM_3_1_5_q0.read();
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_5_q1() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_5_q1 = ap_const_lv32_0;
}

void fpga_top::thread_grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_6_q0() {
    grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_3_1_6_q0 = WBRAM_3_1_6_q0.read();
}

}

