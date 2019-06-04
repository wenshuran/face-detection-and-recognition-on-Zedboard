#include "fpga_top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top::thread_GBRAM_0_addr_gep_fu_14422_p3() {
    GBRAM_0_addr_gep_fu_14422_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_0_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22415.read()) {
            GBRAM_0_address0 = GBRAM_0_addr_gep_fu_14422_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_0_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_0_address0 = "XXXXX";
        }
    } else {
        GBRAM_0_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_0_address1 = ap_reg_ppstg_GBRAM_0_addr_1_reg_28570_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_0_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_0_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0)))) {
        GBRAM_0_ce0 = ap_const_logic_1;
    } else {
        GBRAM_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_0_ce1 = ap_const_logic_1;
    } else {
        GBRAM_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_0_d0() {
    GBRAM_0_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_0_d1() {
    GBRAM_0_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0)))) {
        GBRAM_0_we0 = ap_const_logic_1;
    } else {
        GBRAM_0_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_0)))) {
        GBRAM_0_we1 = ap_const_logic_1;
    } else {
        GBRAM_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_10_addr_gep_fu_14492_p3() {
    GBRAM_10_addr_gep_fu_14492_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_10_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22418.read()) {
            GBRAM_10_address0 = GBRAM_10_addr_gep_fu_14492_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_10_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_10_address0 = "XXXXX";
        }
    } else {
        GBRAM_10_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_10_address1 = ap_reg_ppstg_GBRAM_10_addr_1_reg_28630_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_10_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_10_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A)))) {
        GBRAM_10_ce0 = ap_const_logic_1;
    } else {
        GBRAM_10_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_10_ce1 = ap_const_logic_1;
    } else {
        GBRAM_10_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_10_d0() {
    GBRAM_10_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_10_d1() {
    GBRAM_10_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A)))) {
        GBRAM_10_we0 = ap_const_logic_1;
    } else {
        GBRAM_10_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_10_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_A)))) {
        GBRAM_10_we1 = ap_const_logic_1;
    } else {
        GBRAM_10_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_11_addr_gep_fu_14499_p3() {
    GBRAM_11_addr_gep_fu_14499_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_11_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22420.read()) {
            GBRAM_11_address0 = GBRAM_11_addr_gep_fu_14499_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_11_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_11_address0 = "XXXXX";
        }
    } else {
        GBRAM_11_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_11_address1 = ap_reg_ppstg_GBRAM_11_addr_1_reg_28636_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_11_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_11_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B)))) {
        GBRAM_11_ce0 = ap_const_logic_1;
    } else {
        GBRAM_11_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_11_ce1 = ap_const_logic_1;
    } else {
        GBRAM_11_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_11_d0() {
    GBRAM_11_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_11_d1() {
    GBRAM_11_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B)))) {
        GBRAM_11_we0 = ap_const_logic_1;
    } else {
        GBRAM_11_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_11_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_B)))) {
        GBRAM_11_we1 = ap_const_logic_1;
    } else {
        GBRAM_11_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_12_addr_gep_fu_14506_p3() {
    GBRAM_12_addr_gep_fu_14506_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_12_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22422.read()) {
            GBRAM_12_address0 = GBRAM_12_addr_gep_fu_14506_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_12_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_12_address0 = "XXXXX";
        }
    } else {
        GBRAM_12_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_12_address1 = ap_reg_ppstg_GBRAM_12_addr_1_reg_28642_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_12_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_12_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C)))) {
        GBRAM_12_ce0 = ap_const_logic_1;
    } else {
        GBRAM_12_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_12_ce1 = ap_const_logic_1;
    } else {
        GBRAM_12_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_12_d0() {
    GBRAM_12_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_12_d1() {
    GBRAM_12_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C)))) {
        GBRAM_12_we0 = ap_const_logic_1;
    } else {
        GBRAM_12_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_12_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_C)))) {
        GBRAM_12_we1 = ap_const_logic_1;
    } else {
        GBRAM_12_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_13_addr_gep_fu_14513_p3() {
    GBRAM_13_addr_gep_fu_14513_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_13_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22424.read()) {
            GBRAM_13_address0 = GBRAM_13_addr_gep_fu_14513_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_13_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_13_address0 = "XXXXX";
        }
    } else {
        GBRAM_13_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_13_address1 = ap_reg_ppstg_GBRAM_13_addr_1_reg_28648_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_13_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_13_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D)))) {
        GBRAM_13_ce0 = ap_const_logic_1;
    } else {
        GBRAM_13_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_13_ce1 = ap_const_logic_1;
    } else {
        GBRAM_13_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_13_d0() {
    GBRAM_13_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_13_d1() {
    GBRAM_13_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D)))) {
        GBRAM_13_we0 = ap_const_logic_1;
    } else {
        GBRAM_13_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_13_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_D)))) {
        GBRAM_13_we1 = ap_const_logic_1;
    } else {
        GBRAM_13_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_14_addr_gep_fu_14520_p3() {
    GBRAM_14_addr_gep_fu_14520_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_14_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22426.read()) {
            GBRAM_14_address0 = GBRAM_14_addr_gep_fu_14520_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_14_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_14_address0 = "XXXXX";
        }
    } else {
        GBRAM_14_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_14_address1 = ap_reg_ppstg_GBRAM_14_addr_1_reg_28654_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_14_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_14_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E)))) {
        GBRAM_14_ce0 = ap_const_logic_1;
    } else {
        GBRAM_14_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_14_ce1 = ap_const_logic_1;
    } else {
        GBRAM_14_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_14_d0() {
    GBRAM_14_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_14_d1() {
    GBRAM_14_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E)))) {
        GBRAM_14_we0 = ap_const_logic_1;
    } else {
        GBRAM_14_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_14_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_E)))) {
        GBRAM_14_we1 = ap_const_logic_1;
    } else {
        GBRAM_14_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_15_addr_gep_fu_14527_p3() {
    GBRAM_15_addr_gep_fu_14527_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_15_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22442.read()) {
            GBRAM_15_address0 = GBRAM_15_addr_gep_fu_14527_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_15_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_15_address0 = "XXXXX";
        }
    } else {
        GBRAM_15_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_15_address1 = ap_reg_ppstg_GBRAM_15_addr_1_reg_28660_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_15_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_15_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0)))) {
        GBRAM_15_ce0 = ap_const_logic_1;
    } else {
        GBRAM_15_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_15_ce1 = ap_const_logic_1;
    } else {
        GBRAM_15_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_15_d0() {
    GBRAM_15_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_15_d1() {
    GBRAM_15_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_E) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_D) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_C) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_B) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_A) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_0)))) {
        GBRAM_15_we0 = ap_const_logic_1;
    } else {
        GBRAM_15_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_15_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_E) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_D) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_C) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_B) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_A) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_9) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_8) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_7) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_6) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_5) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_4) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_3) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_2) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_1) && 
          !esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_0)))) {
        GBRAM_15_we1 = ap_const_logic_1;
    } else {
        GBRAM_15_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_1_addr_gep_fu_14429_p3() {
    GBRAM_1_addr_gep_fu_14429_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_1_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22444.read()) {
            GBRAM_1_address0 = GBRAM_1_addr_gep_fu_14429_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_1_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_1_address0 = "XXXXX";
        }
    } else {
        GBRAM_1_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_1_address1 = ap_reg_ppstg_GBRAM_1_addr_1_reg_28576_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_1_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_1_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1)))) {
        GBRAM_1_ce0 = ap_const_logic_1;
    } else {
        GBRAM_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_1_ce1 = ap_const_logic_1;
    } else {
        GBRAM_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_1_d0() {
    GBRAM_1_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_1_d1() {
    GBRAM_1_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_1)))) {
        GBRAM_1_we0 = ap_const_logic_1;
    } else {
        GBRAM_1_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_1)))) {
        GBRAM_1_we1 = ap_const_logic_1;
    } else {
        GBRAM_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_2_addr_gep_fu_14436_p3() {
    GBRAM_2_addr_gep_fu_14436_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_2_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22446.read()) {
            GBRAM_2_address0 = GBRAM_2_addr_gep_fu_14436_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_2_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_2_address0 = "XXXXX";
        }
    } else {
        GBRAM_2_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_2_address1 = ap_reg_ppstg_GBRAM_2_addr_1_reg_28582_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_2_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_2_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2)))) {
        GBRAM_2_ce0 = ap_const_logic_1;
    } else {
        GBRAM_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_2_ce1 = ap_const_logic_1;
    } else {
        GBRAM_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_2_d0() {
    GBRAM_2_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_2_d1() {
    GBRAM_2_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_2)))) {
        GBRAM_2_we0 = ap_const_logic_1;
    } else {
        GBRAM_2_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_2)))) {
        GBRAM_2_we1 = ap_const_logic_1;
    } else {
        GBRAM_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_3_addr_gep_fu_14443_p3() {
    GBRAM_3_addr_gep_fu_14443_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_3_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22448.read()) {
            GBRAM_3_address0 = GBRAM_3_addr_gep_fu_14443_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_3_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_3_address0 = "XXXXX";
        }
    } else {
        GBRAM_3_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_3_address1 = ap_reg_ppstg_GBRAM_3_addr_1_reg_28588_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_3_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_3_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3)))) {
        GBRAM_3_ce0 = ap_const_logic_1;
    } else {
        GBRAM_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_3_ce1 = ap_const_logic_1;
    } else {
        GBRAM_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_3_d0() {
    GBRAM_3_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_3_d1() {
    GBRAM_3_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_3)))) {
        GBRAM_3_we0 = ap_const_logic_1;
    } else {
        GBRAM_3_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_3)))) {
        GBRAM_3_we1 = ap_const_logic_1;
    } else {
        GBRAM_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_4_addr_gep_fu_14450_p3() {
    GBRAM_4_addr_gep_fu_14450_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_4_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22450.read()) {
            GBRAM_4_address0 = GBRAM_4_addr_gep_fu_14450_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_4_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_4_address0 = "XXXXX";
        }
    } else {
        GBRAM_4_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_4_address1 = ap_reg_ppstg_GBRAM_4_addr_1_reg_28594_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_4_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_4_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4)))) {
        GBRAM_4_ce0 = ap_const_logic_1;
    } else {
        GBRAM_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_4_ce1 = ap_const_logic_1;
    } else {
        GBRAM_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_4_d0() {
    GBRAM_4_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_4_d1() {
    GBRAM_4_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_4)))) {
        GBRAM_4_we0 = ap_const_logic_1;
    } else {
        GBRAM_4_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_4)))) {
        GBRAM_4_we1 = ap_const_logic_1;
    } else {
        GBRAM_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_5_addr_gep_fu_14457_p3() {
    GBRAM_5_addr_gep_fu_14457_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_5_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22452.read()) {
            GBRAM_5_address0 = GBRAM_5_addr_gep_fu_14457_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_5_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_5_address0 = "XXXXX";
        }
    } else {
        GBRAM_5_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_5_address1 = ap_reg_ppstg_GBRAM_5_addr_1_reg_28600_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_5_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_5_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5)))) {
        GBRAM_5_ce0 = ap_const_logic_1;
    } else {
        GBRAM_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_5_ce1 = ap_const_logic_1;
    } else {
        GBRAM_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_5_d0() {
    GBRAM_5_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_5_d1() {
    GBRAM_5_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_5)))) {
        GBRAM_5_we0 = ap_const_logic_1;
    } else {
        GBRAM_5_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_5)))) {
        GBRAM_5_we1 = ap_const_logic_1;
    } else {
        GBRAM_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_6_addr_gep_fu_14464_p3() {
    GBRAM_6_addr_gep_fu_14464_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_6_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22454.read()) {
            GBRAM_6_address0 = GBRAM_6_addr_gep_fu_14464_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_6_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_6_address0 = "XXXXX";
        }
    } else {
        GBRAM_6_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_6_address1 = ap_reg_ppstg_GBRAM_6_addr_1_reg_28606_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_6_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_6_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6)))) {
        GBRAM_6_ce0 = ap_const_logic_1;
    } else {
        GBRAM_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_6_ce1 = ap_const_logic_1;
    } else {
        GBRAM_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_6_d0() {
    GBRAM_6_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_6_d1() {
    GBRAM_6_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_6)))) {
        GBRAM_6_we0 = ap_const_logic_1;
    } else {
        GBRAM_6_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_6)))) {
        GBRAM_6_we1 = ap_const_logic_1;
    } else {
        GBRAM_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_7_addr_gep_fu_14471_p3() {
    GBRAM_7_addr_gep_fu_14471_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_7_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22456.read()) {
            GBRAM_7_address0 = GBRAM_7_addr_gep_fu_14471_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_7_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_7_address0 = "XXXXX";
        }
    } else {
        GBRAM_7_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_7_address1 = ap_reg_ppstg_GBRAM_7_addr_1_reg_28612_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_7_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_7_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7)))) {
        GBRAM_7_ce0 = ap_const_logic_1;
    } else {
        GBRAM_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_7_ce1 = ap_const_logic_1;
    } else {
        GBRAM_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_7_d0() {
    GBRAM_7_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_7_d1() {
    GBRAM_7_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_7)))) {
        GBRAM_7_we0 = ap_const_logic_1;
    } else {
        GBRAM_7_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_7)))) {
        GBRAM_7_we1 = ap_const_logic_1;
    } else {
        GBRAM_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_8_addr_gep_fu_14478_p3() {
    GBRAM_8_addr_gep_fu_14478_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_8_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22458.read()) {
            GBRAM_8_address0 = GBRAM_8_addr_gep_fu_14478_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_8_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_8_address0 = "XXXXX";
        }
    } else {
        GBRAM_8_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_8_address1 = ap_reg_ppstg_GBRAM_8_addr_1_reg_28618_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_8_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_8_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8)))) {
        GBRAM_8_ce0 = ap_const_logic_1;
    } else {
        GBRAM_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_8_ce1 = ap_const_logic_1;
    } else {
        GBRAM_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_8_d0() {
    GBRAM_8_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_8_d1() {
    GBRAM_8_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_8)))) {
        GBRAM_8_we0 = ap_const_logic_1;
    } else {
        GBRAM_8_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_8)))) {
        GBRAM_8_we1 = ap_const_logic_1;
    } else {
        GBRAM_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_9_addr_gep_fu_14485_p3() {
    GBRAM_9_addr_gep_fu_14485_p3 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
}

void fpga_top::thread_GBRAM_9_address0() {
    if (ap_sig_bdd_22414.read()) {
        if (ap_sig_bdd_22460.read()) {
            GBRAM_9_address0 = GBRAM_9_addr_gep_fu_14485_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) {
            GBRAM_9_address0 =  (sc_lv<5>) (ap_reg_ppstg_newIndex3_reg_26484_pp4_it10.read());
        } else {
            GBRAM_9_address0 = "XXXXX";
        }
    } else {
        GBRAM_9_address0 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read())) {
        GBRAM_9_address1 = ap_reg_ppstg_GBRAM_9_addr_1_reg_28624_pp4_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        GBRAM_9_address1 =  (sc_lv<5>) (newIndex1_fu_19515_p1.read());
    } else {
        GBRAM_9_address1 = "XXXXX";
    }
}

void fpga_top::thread_GBRAM_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it13.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9)))) {
        GBRAM_9_ce0 = ap_const_logic_1;
    } else {
        GBRAM_9_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp5_stg0_fsm_30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_41_reg_28696.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_41_reg_28696_pp5_it2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it3.read())) || (ap_sig_bdd_10887.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it8.read())))))) {
        GBRAM_9_ce1 = ap_const_logic_1;
    } else {
        GBRAM_9_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_9_d0() {
    GBRAM_9_d0 = result_fu_19413_p3.read();
}

void fpga_top::thread_GBRAM_9_d1() {
    GBRAM_9_d1 = new_ch_reg_28671.read();
}

void fpga_top::thread_GBRAM_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it10.read(), ap_const_lv4_9)))) {
        GBRAM_9_we0 = ap_const_logic_1;
    } else {
        GBRAM_9_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_GBRAM_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it19.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read()))) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, layer_global_pool_read_reg_19616.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_59_reg_24510.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_48_reg_26600_pp4_it18.read(), ap_const_lv4_9)))) {
        GBRAM_9_we1 = ap_const_logic_1;
    } else {
        GBRAM_9_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_ImageCache_IBRAM_address0() {
    ImageCache_IBRAM_address0 = grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_address0.read();
}

void fpga_top::thread_ImageCache_IBRAM_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it9.read())) {
        ImageCache_IBRAM_address1 =  (sc_lv<15>) (tmp_i3_fu_18030_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it9.read())) {
        ImageCache_IBRAM_address1 =  (sc_lv<15>) (tmp_i2_54_fu_17832_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it9.read())) {
        ImageCache_IBRAM_address1 =  (sc_lv<15>) (tmp_i1_fu_17776_p1.read());
    } else {
        ImageCache_IBRAM_address1 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void fpga_top::thread_ImageCache_IBRAM_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        ImageCache_IBRAM_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_ImageCache_IBRAM_ce0.read();
    } else {
        ImageCache_IBRAM_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_ImageCache_IBRAM_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_24337.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read())) || (ap_sig_bdd_7899.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_24357.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read())) || (ap_sig_bdd_7972.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it8.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_24463.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read())) || (ap_sig_bdd_8080.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it8.read())))))) {
        ImageCache_IBRAM_ce1 = ap_const_logic_1;
    } else {
        ImageCache_IBRAM_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_ImageCache_IBRAM_d1() {
    ImageCache_IBRAM_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_ImageCache_IBRAM_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_24337.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read())) || (ap_sig_bdd_7899.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it8.read()))) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond7_reg_24337_pp1_it8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_24357.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read())) || (ap_sig_bdd_7972.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it8.read()))) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_24357_pp2_it8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it9.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_24463.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read())) || (ap_sig_bdd_8080.read() && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it8.read()))) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_24463_pp3_it8.read())))) {
        ImageCache_IBRAM_we1 = ap_const_logic_1;
    } else {
        ImageCache_IBRAM_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_MAX_ADDR_V_1_fu_17966_p2() {
    MAX_ADDR_V_1_fu_17966_p2 = (!ap_const_lv16_FFFF.is_01() || !tmp_35_fu_17960_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFFF) + sc_biguint<16>(tmp_35_fu_17960_p2.read()));
}

void fpga_top::thread_MAX_ADDR_V_fu_16681_p2() {
    MAX_ADDR_V_fu_16681_p2 = (!ap_const_lv16_FFFF.is_01() || !tmp_20_fu_16676_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(ap_const_lv16_FFFF) + sc_biguint<16>(tmp_20_fu_16676_p2.read()));
}

void fpga_top::thread_OBRAM_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_0_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_address0.read();
    } else {
        OBRAM_0_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_0_address1() {
    OBRAM_0_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_address1.read();
}

void fpga_top::thread_OBRAM_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_ce0.read();
    } else {
        OBRAM_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_0_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_ce1.read();
    } else {
        OBRAM_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_0_d0() {
    OBRAM_0_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_d0.read();
}

void fpga_top::thread_OBRAM_0_d1() {
    OBRAM_0_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_d1.read();
}

void fpga_top::thread_OBRAM_0_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_0_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_we0.read();
    } else {
        OBRAM_0_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_0_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_0_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_0_we1.read();
    } else {
        OBRAM_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_10_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_10_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_address0.read();
    } else {
        OBRAM_10_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_10_address1() {
    OBRAM_10_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_address1.read();
}

void fpga_top::thread_OBRAM_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_10_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_10_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_ce0.read();
    } else {
        OBRAM_10_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_10_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_ce1.read();
    } else {
        OBRAM_10_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_10_d0() {
    OBRAM_10_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_d0.read();
}

void fpga_top::thread_OBRAM_10_d1() {
    OBRAM_10_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_d1.read();
}

void fpga_top::thread_OBRAM_10_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_10_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_we0.read();
    } else {
        OBRAM_10_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_10_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_10_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_10_we1.read();
    } else {
        OBRAM_10_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_11_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_11_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_address0.read();
    } else {
        OBRAM_11_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_11_address1() {
    OBRAM_11_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_address1.read();
}

void fpga_top::thread_OBRAM_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_11_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_11_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_ce0.read();
    } else {
        OBRAM_11_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_11_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_ce1.read();
    } else {
        OBRAM_11_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_11_d0() {
    OBRAM_11_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_d0.read();
}

void fpga_top::thread_OBRAM_11_d1() {
    OBRAM_11_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_d1.read();
}

void fpga_top::thread_OBRAM_11_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_11_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_we0.read();
    } else {
        OBRAM_11_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_11_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_11_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_11_we1.read();
    } else {
        OBRAM_11_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_12_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_12_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_address0.read();
    } else {
        OBRAM_12_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_12_address1() {
    OBRAM_12_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_address1.read();
}

void fpga_top::thread_OBRAM_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_12_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_12_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_ce0.read();
    } else {
        OBRAM_12_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_12_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_ce1.read();
    } else {
        OBRAM_12_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_12_d0() {
    OBRAM_12_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_d0.read();
}

void fpga_top::thread_OBRAM_12_d1() {
    OBRAM_12_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_d1.read();
}

void fpga_top::thread_OBRAM_12_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_12_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_we0.read();
    } else {
        OBRAM_12_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_12_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_12_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_12_we1.read();
    } else {
        OBRAM_12_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_13_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_13_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_address0.read();
    } else {
        OBRAM_13_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_13_address1() {
    OBRAM_13_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_address1.read();
}

void fpga_top::thread_OBRAM_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_13_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_13_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_ce0.read();
    } else {
        OBRAM_13_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_13_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_ce1.read();
    } else {
        OBRAM_13_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_13_d0() {
    OBRAM_13_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_d0.read();
}

void fpga_top::thread_OBRAM_13_d1() {
    OBRAM_13_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_d1.read();
}

void fpga_top::thread_OBRAM_13_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_13_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_we0.read();
    } else {
        OBRAM_13_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_13_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_13_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_13_we1.read();
    } else {
        OBRAM_13_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_14_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_14_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_address0.read();
    } else {
        OBRAM_14_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_14_address1() {
    OBRAM_14_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_address1.read();
}

void fpga_top::thread_OBRAM_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_14_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_14_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_ce0.read();
    } else {
        OBRAM_14_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_14_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_ce1.read();
    } else {
        OBRAM_14_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_14_d0() {
    OBRAM_14_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_d0.read();
}

void fpga_top::thread_OBRAM_14_d1() {
    OBRAM_14_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_d1.read();
}

void fpga_top::thread_OBRAM_14_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_14_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_we0.read();
    } else {
        OBRAM_14_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_14_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_14_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_14_we1.read();
    } else {
        OBRAM_14_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_15_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_15_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_address0.read();
    } else {
        OBRAM_15_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_15_address1() {
    OBRAM_15_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_address1.read();
}

void fpga_top::thread_OBRAM_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_15_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_15_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_ce0.read();
    } else {
        OBRAM_15_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_15_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_ce1.read();
    } else {
        OBRAM_15_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_15_d0() {
    OBRAM_15_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_d0.read();
}

void fpga_top::thread_OBRAM_15_d1() {
    OBRAM_15_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_d1.read();
}

void fpga_top::thread_OBRAM_15_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_15_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_we0.read();
    } else {
        OBRAM_15_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_15_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_15_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_15_we1.read();
    } else {
        OBRAM_15_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_1_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_address0.read();
    } else {
        OBRAM_1_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_1_address1() {
    OBRAM_1_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_address1.read();
}

void fpga_top::thread_OBRAM_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_ce0.read();
    } else {
        OBRAM_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_1_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_ce1.read();
    } else {
        OBRAM_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_1_d0() {
    OBRAM_1_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_d0.read();
}

void fpga_top::thread_OBRAM_1_d1() {
    OBRAM_1_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_d1.read();
}

void fpga_top::thread_OBRAM_1_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_1_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_we0.read();
    } else {
        OBRAM_1_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_1_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_1_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_1_we1.read();
    } else {
        OBRAM_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_2_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_address0.read();
    } else {
        OBRAM_2_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_2_address1() {
    OBRAM_2_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_address1.read();
}

void fpga_top::thread_OBRAM_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_ce0.read();
    } else {
        OBRAM_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_2_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_ce1.read();
    } else {
        OBRAM_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_2_d0() {
    OBRAM_2_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_d0.read();
}

void fpga_top::thread_OBRAM_2_d1() {
    OBRAM_2_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_d1.read();
}

void fpga_top::thread_OBRAM_2_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_2_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_we0.read();
    } else {
        OBRAM_2_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_2_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_2_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_2_we1.read();
    } else {
        OBRAM_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_3_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_address0.read();
    } else {
        OBRAM_3_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_3_address1() {
    OBRAM_3_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_address1.read();
}

void fpga_top::thread_OBRAM_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_ce0.read();
    } else {
        OBRAM_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_3_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_ce1.read();
    } else {
        OBRAM_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_3_d0() {
    OBRAM_3_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_d0.read();
}

void fpga_top::thread_OBRAM_3_d1() {
    OBRAM_3_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_d1.read();
}

void fpga_top::thread_OBRAM_3_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_3_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_we0.read();
    } else {
        OBRAM_3_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_3_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_3_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_3_we1.read();
    } else {
        OBRAM_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_4_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_address0.read();
    } else {
        OBRAM_4_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_4_address1() {
    OBRAM_4_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_address1.read();
}

void fpga_top::thread_OBRAM_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_ce0.read();
    } else {
        OBRAM_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_4_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_ce1.read();
    } else {
        OBRAM_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_4_d0() {
    OBRAM_4_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_d0.read();
}

void fpga_top::thread_OBRAM_4_d1() {
    OBRAM_4_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_d1.read();
}

void fpga_top::thread_OBRAM_4_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_4_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_we0.read();
    } else {
        OBRAM_4_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_4_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_4_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_4_we1.read();
    } else {
        OBRAM_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_5_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_address0.read();
    } else {
        OBRAM_5_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_5_address1() {
    OBRAM_5_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_address1.read();
}

void fpga_top::thread_OBRAM_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_ce0.read();
    } else {
        OBRAM_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_5_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_ce1.read();
    } else {
        OBRAM_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_5_d0() {
    OBRAM_5_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_d0.read();
}

void fpga_top::thread_OBRAM_5_d1() {
    OBRAM_5_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_d1.read();
}

void fpga_top::thread_OBRAM_5_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_5_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_we0.read();
    } else {
        OBRAM_5_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_5_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_5_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_5_we1.read();
    } else {
        OBRAM_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_6_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_address0.read();
    } else {
        OBRAM_6_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_6_address1() {
    OBRAM_6_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_address1.read();
}

void fpga_top::thread_OBRAM_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_ce0.read();
    } else {
        OBRAM_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_6_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_ce1.read();
    } else {
        OBRAM_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_6_d0() {
    OBRAM_6_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_d0.read();
}

void fpga_top::thread_OBRAM_6_d1() {
    OBRAM_6_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_d1.read();
}

void fpga_top::thread_OBRAM_6_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_6_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_we0.read();
    } else {
        OBRAM_6_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_6_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_6_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_6_we1.read();
    } else {
        OBRAM_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_7_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_address0.read();
    } else {
        OBRAM_7_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_7_address1() {
    OBRAM_7_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_address1.read();
}

void fpga_top::thread_OBRAM_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_ce0.read();
    } else {
        OBRAM_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_7_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_ce1.read();
    } else {
        OBRAM_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_7_d0() {
    OBRAM_7_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_d0.read();
}

void fpga_top::thread_OBRAM_7_d1() {
    OBRAM_7_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_d1.read();
}

void fpga_top::thread_OBRAM_7_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_7_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_we0.read();
    } else {
        OBRAM_7_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_7_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_7_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_7_we1.read();
    } else {
        OBRAM_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_8_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_address0.read();
    } else {
        OBRAM_8_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_8_address1() {
    OBRAM_8_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_address1.read();
}

void fpga_top::thread_OBRAM_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_8_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_ce0.read();
    } else {
        OBRAM_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_8_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_ce1.read();
    } else {
        OBRAM_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_8_d0() {
    OBRAM_8_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_d0.read();
}

void fpga_top::thread_OBRAM_8_d1() {
    OBRAM_8_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_d1.read();
}

void fpga_top::thread_OBRAM_8_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_8_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_we0.read();
    } else {
        OBRAM_8_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_8_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_8_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_8_we1.read();
    } else {
        OBRAM_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read())) {
        OBRAM_9_address0 =  (sc_lv<5>) (newIndex3_fu_18711_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_9_address0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_address0.read();
    } else {
        OBRAM_9_address0 = "XXXXX";
    }
}

void fpga_top::thread_OBRAM_9_address1() {
    OBRAM_9_address1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_address1.read();
}

void fpga_top::thread_OBRAM_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it3.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it4.read()) && 
          !((esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_AWREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_WREADY.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it12.read())) || (esl_seteq<1,1,1>(memorybus_BVALID.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it17.read())))))) {
        OBRAM_9_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_9_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_ce0.read();
    } else {
        OBRAM_9_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_9_ce1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_ce1.read();
    } else {
        OBRAM_9_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_9_d0() {
    OBRAM_9_d0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_d0.read();
}

void fpga_top::thread_OBRAM_9_d1() {
    OBRAM_9_d1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_d1.read();
}

void fpga_top::thread_OBRAM_9_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_9_we0 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_we0.read();
    } else {
        OBRAM_9_we0 = ap_const_logic_0;
    }
}

void fpga_top::thread_OBRAM_9_we1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        OBRAM_9_we1 = grp_fpga_top_processInputChannel_0_fu_14915_OBRAM_9_we1.read();
    } else {
        OBRAM_9_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_SHARED_DRAM2_sum1_cast_fu_16757_p1() {
    SHARED_DRAM2_sum1_cast_fu_16757_p1 = esl_zext<64,33>(SHARED_DRAM2_sum1_fu_16752_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum1_fu_16752_p2() {
    SHARED_DRAM2_sum1_fu_16752_p2 = (!tmp_110_cast_reg_19707.read().is_01() || !r_V_2_fu_16746_p2.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_110_cast_reg_19707.read()) + sc_biguint<33>(r_V_2_fu_16746_p2.read()));
}

void fpga_top::thread_SHARED_DRAM2_sum2_cast_fu_19563_p1() {
    SHARED_DRAM2_sum2_cast_fu_19563_p1 = esl_sext<64,34>(SHARED_DRAM2_sum2_fu_19558_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum2_fu_19558_p2() {
    SHARED_DRAM2_sum2_fu_19558_p2 = (!tmp_110_cast1_reg_19702.read().is_01() || !r_V_9_fu_19552_p2.read().is_01())? sc_lv<34>(): (sc_biguint<34>(tmp_110_cast1_reg_19702.read()) + sc_biguint<34>(r_V_9_fu_19552_p2.read()));
}

void fpga_top::thread_SHARED_DRAM2_sum3_cast_fu_18020_p1() {
    SHARED_DRAM2_sum3_cast_fu_18020_p1 = esl_zext<64,33>(SHARED_DRAM2_sum3_fu_18015_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum3_fu_18015_p2() {
    SHARED_DRAM2_sum3_fu_18015_p2 = (!r_V_8_fu_18009_p2.read().is_01() || !tmp_110_cast_reg_19707.read().is_01())? sc_lv<33>(): (sc_biguint<33>(r_V_8_fu_18009_p2.read()) + sc_biguint<33>(tmp_110_cast_reg_19707.read()));
}

void fpga_top::thread_SHARED_DRAM2_sum4_cast_fu_19397_p1() {
    SHARED_DRAM2_sum4_cast_fu_19397_p1 = esl_zext<64,33>(SHARED_DRAM2_sum4_fu_19392_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum4_fu_19392_p2() {
    SHARED_DRAM2_sum4_fu_19392_p2 = (!tmp_110_cast_reg_19707.read().is_01() || !r_V_15_fu_19386_p2.read().is_01())? sc_lv<33>(): (sc_biguint<33>(tmp_110_cast_reg_19707.read()) + sc_biguint<33>(r_V_15_fu_19386_p2.read()));
}

void fpga_top::thread_SHARED_DRAM2_sum9_cast_fu_17822_p1() {
    SHARED_DRAM2_sum9_cast_fu_17822_p1 = esl_zext<64,33>(SHARED_DRAM2_sum9_fu_17817_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum9_fu_17817_p2() {
    SHARED_DRAM2_sum9_fu_17817_p2 = (!r_V_4_fu_17811_p2.read().is_01() || !tmp_110_cast_reg_19707.read().is_01())? sc_lv<33>(): (sc_biguint<33>(r_V_4_fu_17811_p2.read()) + sc_biguint<33>(tmp_110_cast_reg_19707.read()));
}

void fpga_top::thread_SHARED_DRAM2_sum_cast_fu_17766_p1() {
    SHARED_DRAM2_sum_cast_fu_17766_p1 = esl_zext<64,33>(SHARED_DRAM2_sum_fu_17761_p2.read());
}

void fpga_top::thread_SHARED_DRAM2_sum_fu_17761_p2() {
    SHARED_DRAM2_sum_fu_17761_p2 = (!r_V_5_fu_17755_p2.read().is_01() || !tmp_110_cast_reg_19707.read().is_01())? sc_lv<33>(): (sc_biguint<33>(r_V_5_fu_17755_p2.read()) + sc_biguint<33>(tmp_110_cast_reg_19707.read()));
}

void fpga_top::thread_SHARED_DRAM_0_ack_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st96_fsm_32.read())) {
        SHARED_DRAM_0_ack_out = ap_const_logic_1;
    } else {
        SHARED_DRAM_0_ack_out = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_address0.read();
    } else {
        WBRAM_0_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_0_address1() {
    WBRAM_0_0_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_0_ce0() {
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
        WBRAM_0_0_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_0_ce0.read();
    } else {
        WBRAM_0_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_0_d1() {
    WBRAM_0_0_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_address0.read();
    } else {
        WBRAM_0_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_1_address1() {
    WBRAM_0_0_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_1_ce0() {
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
        WBRAM_0_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_1_ce0.read();
    } else {
        WBRAM_0_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_1_d1() {
    WBRAM_0_0_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_address0.read();
    } else {
        WBRAM_0_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_2_address1() {
    WBRAM_0_0_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_2_ce0() {
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
        WBRAM_0_0_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_2_ce0.read();
    } else {
        WBRAM_0_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_2_d1() {
    WBRAM_0_0_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_address0.read();
    } else {
        WBRAM_0_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_3_address1() {
    WBRAM_0_0_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_3_ce0() {
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
        WBRAM_0_0_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_3_ce0.read();
    } else {
        WBRAM_0_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_3_d1() {
    WBRAM_0_0_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_address0.read();
    } else {
        WBRAM_0_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_4_address1() {
    WBRAM_0_0_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_4_ce0() {
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
        WBRAM_0_0_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_4_ce0.read();
    } else {
        WBRAM_0_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_4_d1() {
    WBRAM_0_0_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_address0.read();
    } else {
        WBRAM_0_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_5_address1() {
    WBRAM_0_0_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_5_ce0() {
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
        WBRAM_0_0_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_5_ce0.read();
    } else {
        WBRAM_0_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_5_d1() {
    WBRAM_0_0_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_address0.read();
    } else {
        WBRAM_0_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_6_address1() {
    WBRAM_0_0_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_6_ce0() {
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
        WBRAM_0_0_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_6_ce0.read();
    } else {
        WBRAM_0_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_6_d1() {
    WBRAM_0_0_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_0_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_address0.read();
    } else {
        WBRAM_0_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_0_7_address1() {
    WBRAM_0_0_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_7_ce0() {
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
        WBRAM_0_0_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_7_ce0.read();
    } else {
        WBRAM_0_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_7_d1() {
    WBRAM_0_0_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_8_address0() {
    WBRAM_0_0_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_address0.read();
}

void fpga_top::thread_WBRAM_0_0_8_address1() {
    WBRAM_0_0_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_0_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_0_8_ce0.read();
    } else {
        WBRAM_0_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_0_0_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_0_8_d1() {
    WBRAM_0_0_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_0_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_0_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_0_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_0_addr_gep_fu_7927_p3() {
    WBRAM_0_1_0_addr_gep_fu_7927_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_address0.read();
    } else {
        WBRAM_0_1_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_0_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_0_1_0_address1 = WBRAM_0_1_0_addr_gep_fu_7927_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_0_1_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_0_ce0() {
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
        WBRAM_0_1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_0_ce0.read();
    } else {
        WBRAM_0_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_0_d1() {
    WBRAM_0_1_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_1_addr_gep_fu_7934_p3() {
    WBRAM_0_1_1_addr_gep_fu_7934_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_address0.read();
    } else {
        WBRAM_0_1_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_1_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_0_1_1_address1 = WBRAM_0_1_1_addr_gep_fu_7934_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_0_1_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_1_ce0() {
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
        WBRAM_0_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_1_ce0.read();
    } else {
        WBRAM_0_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_1_d1() {
    WBRAM_0_1_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_2_addr_gep_fu_7941_p3() {
    WBRAM_0_1_2_addr_gep_fu_7941_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_address0.read();
    } else {
        WBRAM_0_1_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_2_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_0_1_2_address1 = WBRAM_0_1_2_addr_gep_fu_7941_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_0_1_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_2_ce0() {
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
        WBRAM_0_1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_2_ce0.read();
    } else {
        WBRAM_0_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_2_d1() {
    WBRAM_0_1_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_3_addr_gep_fu_7948_p3() {
    WBRAM_0_1_3_addr_gep_fu_7948_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_address0.read();
    } else {
        WBRAM_0_1_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_3_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_0_1_3_address1 = WBRAM_0_1_3_addr_gep_fu_7948_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_0_1_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_3_ce0() {
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
        WBRAM_0_1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_3_ce0.read();
    } else {
        WBRAM_0_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_3_d1() {
    WBRAM_0_1_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_4_addr_gep_fu_7955_p3() {
    WBRAM_0_1_4_addr_gep_fu_7955_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_address0.read();
    } else {
        WBRAM_0_1_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_4_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_0_1_4_address1 = WBRAM_0_1_4_addr_gep_fu_7955_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_0_1_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_4_ce0() {
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
        WBRAM_0_1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_4_ce0.read();
    } else {
        WBRAM_0_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_4_d1() {
    WBRAM_0_1_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_5_addr_gep_fu_7962_p3() {
    WBRAM_0_1_5_addr_gep_fu_7962_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_address0.read();
    } else {
        WBRAM_0_1_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_5_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_0_1_5_address1 = WBRAM_0_1_5_addr_gep_fu_7962_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_0_1_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_5_ce0() {
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
        WBRAM_0_1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_5_ce0.read();
    } else {
        WBRAM_0_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_5_d1() {
    WBRAM_0_1_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_6_addr_gep_fu_7969_p3() {
    WBRAM_0_1_6_addr_gep_fu_7969_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_address0.read();
    } else {
        WBRAM_0_1_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_6_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_0_1_6_address1 = WBRAM_0_1_6_addr_gep_fu_7969_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_0_1_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_6_ce0() {
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
        WBRAM_0_1_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_6_ce0.read();
    } else {
        WBRAM_0_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_6_d1() {
    WBRAM_0_1_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_7_addr_gep_fu_7976_p3() {
    WBRAM_0_1_7_addr_gep_fu_7976_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_address0.read();
    } else {
        WBRAM_0_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_7_address1() {
    if (ap_sig_bdd_22463.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_0_1_7_address1 = WBRAM_0_1_7_addr_gep_fu_7976_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_0_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_1_7_ce0() {
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
        WBRAM_0_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_7_ce0.read();
    } else {
        WBRAM_0_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_7_d1() {
    WBRAM_0_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_8_address0() {
    WBRAM_0_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_address0.read();
}

void fpga_top::thread_WBRAM_0_1_8_address1() {
    WBRAM_0_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_1_8_ce0.read();
    } else {
        WBRAM_0_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_0_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_1_8_d1() {
    WBRAM_0_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_1_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_0_addr_gep_fu_7983_p3() {
    WBRAM_0_2_0_addr_gep_fu_7983_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_address0.read();
    } else {
        WBRAM_0_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_0_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_0_2_0_address1 = WBRAM_0_2_0_addr_gep_fu_7983_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_0_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_0_ce0() {
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
        WBRAM_0_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_0_ce0.read();
    } else {
        WBRAM_0_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_0_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_0_d1() {
    WBRAM_0_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_1_addr_gep_fu_7990_p3() {
    WBRAM_0_2_1_addr_gep_fu_7990_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_address0.read();
    } else {
        WBRAM_0_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_1_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_0_2_1_address1 = WBRAM_0_2_1_addr_gep_fu_7990_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_0_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_1_ce0() {
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
        WBRAM_0_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_1_ce0.read();
    } else {
        WBRAM_0_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_1_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_1_d1() {
    WBRAM_0_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_2_addr_gep_fu_7997_p3() {
    WBRAM_0_2_2_addr_gep_fu_7997_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_address0.read();
    } else {
        WBRAM_0_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_2_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_0_2_2_address1 = WBRAM_0_2_2_addr_gep_fu_7997_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_0_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_2_ce0() {
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
        WBRAM_0_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_2_ce0.read();
    } else {
        WBRAM_0_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_2_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_2_d1() {
    WBRAM_0_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_3_addr_gep_fu_8004_p3() {
    WBRAM_0_2_3_addr_gep_fu_8004_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_address0.read();
    } else {
        WBRAM_0_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_3_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_0_2_3_address1 = WBRAM_0_2_3_addr_gep_fu_8004_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_0_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_3_ce0() {
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
        WBRAM_0_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_3_ce0.read();
    } else {
        WBRAM_0_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_3_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_3_d1() {
    WBRAM_0_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_4_addr_gep_fu_8011_p3() {
    WBRAM_0_2_4_addr_gep_fu_8011_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_address0.read();
    } else {
        WBRAM_0_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_4_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_0_2_4_address1 = WBRAM_0_2_4_addr_gep_fu_8011_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_0_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_4_ce0() {
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
        WBRAM_0_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_4_ce0.read();
    } else {
        WBRAM_0_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_4_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_4_d1() {
    WBRAM_0_2_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_5_addr_gep_fu_8018_p3() {
    WBRAM_0_2_5_addr_gep_fu_8018_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_address0.read();
    } else {
        WBRAM_0_2_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_5_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_0_2_5_address1 = WBRAM_0_2_5_addr_gep_fu_8018_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_0_2_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_5_ce0() {
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
        WBRAM_0_2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_5_ce0.read();
    } else {
        WBRAM_0_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_5_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_5_d1() {
    WBRAM_0_2_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_6_addr_gep_fu_8025_p3() {
    WBRAM_0_2_6_addr_gep_fu_8025_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_address0.read();
    } else {
        WBRAM_0_2_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_6_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_0_2_6_address1 = WBRAM_0_2_6_addr_gep_fu_8025_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_0_2_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_6_ce0() {
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
        WBRAM_0_2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_6_ce0.read();
    } else {
        WBRAM_0_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_6_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_6_d1() {
    WBRAM_0_2_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_7_addr_gep_fu_8032_p3() {
    WBRAM_0_2_7_addr_gep_fu_8032_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_0_2_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_address0.read();
    } else {
        WBRAM_0_2_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_7_address1() {
    if (ap_sig_bdd_22505.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_0_2_7_address1 = WBRAM_0_2_7_addr_gep_fu_8032_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_0_2_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_0_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_0_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_0_2_7_ce0() {
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
        WBRAM_0_2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_7_ce0.read();
    } else {
        WBRAM_0_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_7_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_7_d1() {
    WBRAM_0_2_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_8_address0() {
    WBRAM_0_2_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_address0.read();
}

void fpga_top::thread_WBRAM_0_2_8_address1() {
    WBRAM_0_2_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_0_2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_0_2_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_0_2_8_ce0.read();
    } else {
        WBRAM_0_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_0_2_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_0_2_8_d1() {
    WBRAM_0_2_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_0_2_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_0)))) {
        WBRAM_0_2_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_0_2_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_0_addr_gep_fu_9551_p3() {
    WBRAM_10_0_0_addr_gep_fu_9551_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_address0.read();
    } else {
        WBRAM_10_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_0_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_10_0_0_address1 = WBRAM_10_0_0_addr_gep_fu_9551_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_10_0_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_0_ce0() {
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
        WBRAM_10_0_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_0_ce0.read();
    } else {
        WBRAM_10_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_0_d1() {
    WBRAM_10_0_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_1_addr_gep_fu_9558_p3() {
    WBRAM_10_0_1_addr_gep_fu_9558_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_address0.read();
    } else {
        WBRAM_10_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_1_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_10_0_1_address1 = WBRAM_10_0_1_addr_gep_fu_9558_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_10_0_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_1_ce0() {
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
        WBRAM_10_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_1_ce0.read();
    } else {
        WBRAM_10_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_1_d1() {
    WBRAM_10_0_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_2_addr_gep_fu_9565_p3() {
    WBRAM_10_0_2_addr_gep_fu_9565_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_address0.read();
    } else {
        WBRAM_10_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_2_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_10_0_2_address1 = WBRAM_10_0_2_addr_gep_fu_9565_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_10_0_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_2_ce0() {
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
        WBRAM_10_0_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_2_ce0.read();
    } else {
        WBRAM_10_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_2_d1() {
    WBRAM_10_0_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_3_addr_gep_fu_9572_p3() {
    WBRAM_10_0_3_addr_gep_fu_9572_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_address0.read();
    } else {
        WBRAM_10_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_3_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_10_0_3_address1 = WBRAM_10_0_3_addr_gep_fu_9572_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_10_0_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_3_ce0() {
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
        WBRAM_10_0_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_3_ce0.read();
    } else {
        WBRAM_10_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_3_d1() {
    WBRAM_10_0_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_4_addr_gep_fu_9579_p3() {
    WBRAM_10_0_4_addr_gep_fu_9579_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_address0.read();
    } else {
        WBRAM_10_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_4_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_10_0_4_address1 = WBRAM_10_0_4_addr_gep_fu_9579_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_10_0_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_4_ce0() {
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
        WBRAM_10_0_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_4_ce0.read();
    } else {
        WBRAM_10_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_4_d1() {
    WBRAM_10_0_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_5_addr_gep_fu_9586_p3() {
    WBRAM_10_0_5_addr_gep_fu_9586_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_address0.read();
    } else {
        WBRAM_10_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_5_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_10_0_5_address1 = WBRAM_10_0_5_addr_gep_fu_9586_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_10_0_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_5_ce0() {
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
        WBRAM_10_0_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_5_ce0.read();
    } else {
        WBRAM_10_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_5_d1() {
    WBRAM_10_0_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_6_addr_gep_fu_9593_p3() {
    WBRAM_10_0_6_addr_gep_fu_9593_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_address0.read();
    } else {
        WBRAM_10_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_6_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_10_0_6_address1 = WBRAM_10_0_6_addr_gep_fu_9593_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_10_0_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_6_ce0() {
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
        WBRAM_10_0_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_6_ce0.read();
    } else {
        WBRAM_10_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_6_d1() {
    WBRAM_10_0_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_7_addr_gep_fu_9600_p3() {
    WBRAM_10_0_7_addr_gep_fu_9600_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_0_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_address0.read();
    } else {
        WBRAM_10_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_7_address1() {
    if (ap_sig_bdd_22508.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_10_0_7_address1 = WBRAM_10_0_7_addr_gep_fu_9600_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_10_0_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_0_7_ce0() {
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
        WBRAM_10_0_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_7_ce0.read();
    } else {
        WBRAM_10_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_7_d1() {
    WBRAM_10_0_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_8_address0() {
    WBRAM_10_0_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_address0.read();
}

void fpga_top::thread_WBRAM_10_0_8_address1() {
    WBRAM_10_0_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_0_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_0_8_ce0.read();
    } else {
        WBRAM_10_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_10_0_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_0_8_d1() {
    WBRAM_10_0_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_0_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_0_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_0_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_0_addr_gep_fu_9607_p3() {
    WBRAM_10_1_0_addr_gep_fu_9607_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_address0.read();
    } else {
        WBRAM_10_1_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_0_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_10_1_0_address1 = WBRAM_10_1_0_addr_gep_fu_9607_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_10_1_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_0_ce0() {
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
        WBRAM_10_1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_0_ce0.read();
    } else {
        WBRAM_10_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_0_d1() {
    WBRAM_10_1_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_1_addr_gep_fu_9614_p3() {
    WBRAM_10_1_1_addr_gep_fu_9614_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_address0.read();
    } else {
        WBRAM_10_1_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_1_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_10_1_1_address1 = WBRAM_10_1_1_addr_gep_fu_9614_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_10_1_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_1_ce0() {
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
        WBRAM_10_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_1_ce0.read();
    } else {
        WBRAM_10_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_1_d1() {
    WBRAM_10_1_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_2_addr_gep_fu_9621_p3() {
    WBRAM_10_1_2_addr_gep_fu_9621_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_address0.read();
    } else {
        WBRAM_10_1_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_2_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_10_1_2_address1 = WBRAM_10_1_2_addr_gep_fu_9621_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_10_1_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_2_ce0() {
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
        WBRAM_10_1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_2_ce0.read();
    } else {
        WBRAM_10_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_2_d1() {
    WBRAM_10_1_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_3_addr_gep_fu_9628_p3() {
    WBRAM_10_1_3_addr_gep_fu_9628_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_address0.read();
    } else {
        WBRAM_10_1_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_3_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_10_1_3_address1 = WBRAM_10_1_3_addr_gep_fu_9628_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_10_1_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_3_ce0() {
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
        WBRAM_10_1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_3_ce0.read();
    } else {
        WBRAM_10_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_3_d1() {
    WBRAM_10_1_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_4_addr_gep_fu_9635_p3() {
    WBRAM_10_1_4_addr_gep_fu_9635_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_address0.read();
    } else {
        WBRAM_10_1_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_4_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_10_1_4_address1 = WBRAM_10_1_4_addr_gep_fu_9635_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_10_1_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_4_ce0() {
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
        WBRAM_10_1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_4_ce0.read();
    } else {
        WBRAM_10_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_4_d1() {
    WBRAM_10_1_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_5_addr_gep_fu_9642_p3() {
    WBRAM_10_1_5_addr_gep_fu_9642_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_address0.read();
    } else {
        WBRAM_10_1_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_5_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_10_1_5_address1 = WBRAM_10_1_5_addr_gep_fu_9642_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_10_1_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_5_ce0() {
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
        WBRAM_10_1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_5_ce0.read();
    } else {
        WBRAM_10_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_5_d1() {
    WBRAM_10_1_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_6_addr_gep_fu_9649_p3() {
    WBRAM_10_1_6_addr_gep_fu_9649_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_address0.read();
    } else {
        WBRAM_10_1_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_6_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_10_1_6_address1 = WBRAM_10_1_6_addr_gep_fu_9649_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_10_1_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_6_ce0() {
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
        WBRAM_10_1_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_6_ce0.read();
    } else {
        WBRAM_10_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_6_d1() {
    WBRAM_10_1_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_7_addr_gep_fu_9656_p3() {
    WBRAM_10_1_7_addr_gep_fu_9656_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_address0.read();
    } else {
        WBRAM_10_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_7_address1() {
    if (ap_sig_bdd_22510.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_10_1_7_address1 = WBRAM_10_1_7_addr_gep_fu_9656_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_10_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_1_7_ce0() {
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
        WBRAM_10_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_7_ce0.read();
    } else {
        WBRAM_10_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_7_d1() {
    WBRAM_10_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_8_address0() {
    WBRAM_10_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_address0.read();
}

void fpga_top::thread_WBRAM_10_1_8_address1() {
    WBRAM_10_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_1_8_ce0.read();
    } else {
        WBRAM_10_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_10_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_1_8_d1() {
    WBRAM_10_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_1_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_0_addr_gep_fu_9663_p3() {
    WBRAM_10_2_0_addr_gep_fu_9663_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_address0.read();
    } else {
        WBRAM_10_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_0_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_10_2_0_address1 = WBRAM_10_2_0_addr_gep_fu_9663_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_10_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_0_ce0() {
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
        WBRAM_10_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_0_ce0.read();
    } else {
        WBRAM_10_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_0_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_0_d1() {
    WBRAM_10_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_1_addr_gep_fu_9670_p3() {
    WBRAM_10_2_1_addr_gep_fu_9670_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_address0.read();
    } else {
        WBRAM_10_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_1_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_10_2_1_address1 = WBRAM_10_2_1_addr_gep_fu_9670_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_10_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_1_ce0() {
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
        WBRAM_10_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_1_ce0.read();
    } else {
        WBRAM_10_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_1_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_1_d1() {
    WBRAM_10_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_2_addr_gep_fu_9677_p3() {
    WBRAM_10_2_2_addr_gep_fu_9677_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_address0.read();
    } else {
        WBRAM_10_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_2_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_10_2_2_address1 = WBRAM_10_2_2_addr_gep_fu_9677_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_10_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_2_ce0() {
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
        WBRAM_10_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_2_ce0.read();
    } else {
        WBRAM_10_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_2_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_2_d1() {
    WBRAM_10_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_3_addr_gep_fu_9684_p3() {
    WBRAM_10_2_3_addr_gep_fu_9684_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_address0.read();
    } else {
        WBRAM_10_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_3_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_10_2_3_address1 = WBRAM_10_2_3_addr_gep_fu_9684_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_10_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_3_ce0() {
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
        WBRAM_10_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_3_ce0.read();
    } else {
        WBRAM_10_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_3_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_3_d1() {
    WBRAM_10_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_4_addr_gep_fu_9691_p3() {
    WBRAM_10_2_4_addr_gep_fu_9691_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_address0.read();
    } else {
        WBRAM_10_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_4_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_10_2_4_address1 = WBRAM_10_2_4_addr_gep_fu_9691_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_10_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_4_ce0() {
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
        WBRAM_10_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_4_ce0.read();
    } else {
        WBRAM_10_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_4_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_4_d1() {
    WBRAM_10_2_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_5_addr_gep_fu_9698_p3() {
    WBRAM_10_2_5_addr_gep_fu_9698_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_address0.read();
    } else {
        WBRAM_10_2_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_5_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_10_2_5_address1 = WBRAM_10_2_5_addr_gep_fu_9698_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_10_2_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_5_ce0() {
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
        WBRAM_10_2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_5_ce0.read();
    } else {
        WBRAM_10_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_5_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_5_d1() {
    WBRAM_10_2_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_6_addr_gep_fu_9705_p3() {
    WBRAM_10_2_6_addr_gep_fu_9705_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_address0.read();
    } else {
        WBRAM_10_2_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_6_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_10_2_6_address1 = WBRAM_10_2_6_addr_gep_fu_9705_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_10_2_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_6_ce0() {
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
        WBRAM_10_2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_6_ce0.read();
    } else {
        WBRAM_10_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_6_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_6_d1() {
    WBRAM_10_2_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_7_addr_gep_fu_9712_p3() {
    WBRAM_10_2_7_addr_gep_fu_9712_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_10_2_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_address0.read();
    } else {
        WBRAM_10_2_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_7_address1() {
    if (ap_sig_bdd_22512.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_10_2_7_address1 = WBRAM_10_2_7_addr_gep_fu_9712_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_10_2_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_10_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_10_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_10_2_7_ce0() {
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
        WBRAM_10_2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_7_ce0.read();
    } else {
        WBRAM_10_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_7_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_7_d1() {
    WBRAM_10_2_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_8_address0() {
    WBRAM_10_2_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_address0.read();
}

void fpga_top::thread_WBRAM_10_2_8_address1() {
    WBRAM_10_2_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_10_2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_10_2_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_10_2_8_ce0.read();
    } else {
        WBRAM_10_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_10_2_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_10_2_8_d1() {
    WBRAM_10_2_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_10_2_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_A)))) {
        WBRAM_10_2_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_10_2_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_0_addr_gep_fu_9719_p3() {
    WBRAM_11_0_0_addr_gep_fu_9719_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_address0.read();
    } else {
        WBRAM_11_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_0_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_11_0_0_address1 = WBRAM_11_0_0_addr_gep_fu_9719_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_11_0_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_0_ce0() {
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
        WBRAM_11_0_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_0_ce0.read();
    } else {
        WBRAM_11_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_0_d1() {
    WBRAM_11_0_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_1_addr_gep_fu_9726_p3() {
    WBRAM_11_0_1_addr_gep_fu_9726_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_address0.read();
    } else {
        WBRAM_11_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_1_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_11_0_1_address1 = WBRAM_11_0_1_addr_gep_fu_9726_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_11_0_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_1_ce0() {
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
        WBRAM_11_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_1_ce0.read();
    } else {
        WBRAM_11_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_1_d1() {
    WBRAM_11_0_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_2_addr_gep_fu_9733_p3() {
    WBRAM_11_0_2_addr_gep_fu_9733_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_address0.read();
    } else {
        WBRAM_11_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_2_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_11_0_2_address1 = WBRAM_11_0_2_addr_gep_fu_9733_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_11_0_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_2_ce0() {
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
        WBRAM_11_0_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_2_ce0.read();
    } else {
        WBRAM_11_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_2_d1() {
    WBRAM_11_0_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_3_addr_gep_fu_9740_p3() {
    WBRAM_11_0_3_addr_gep_fu_9740_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_address0.read();
    } else {
        WBRAM_11_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_3_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_11_0_3_address1 = WBRAM_11_0_3_addr_gep_fu_9740_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_11_0_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_3_ce0() {
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
        WBRAM_11_0_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_3_ce0.read();
    } else {
        WBRAM_11_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_3_d1() {
    WBRAM_11_0_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_4_addr_gep_fu_9747_p3() {
    WBRAM_11_0_4_addr_gep_fu_9747_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_address0.read();
    } else {
        WBRAM_11_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_4_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_11_0_4_address1 = WBRAM_11_0_4_addr_gep_fu_9747_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_11_0_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_4_ce0() {
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
        WBRAM_11_0_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_4_ce0.read();
    } else {
        WBRAM_11_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_4_d1() {
    WBRAM_11_0_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_5_addr_gep_fu_9754_p3() {
    WBRAM_11_0_5_addr_gep_fu_9754_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_address0.read();
    } else {
        WBRAM_11_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_5_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_11_0_5_address1 = WBRAM_11_0_5_addr_gep_fu_9754_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_11_0_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_5_ce0() {
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
        WBRAM_11_0_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_5_ce0.read();
    } else {
        WBRAM_11_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_5_d1() {
    WBRAM_11_0_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_6_addr_gep_fu_9761_p3() {
    WBRAM_11_0_6_addr_gep_fu_9761_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_address0.read();
    } else {
        WBRAM_11_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_6_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_11_0_6_address1 = WBRAM_11_0_6_addr_gep_fu_9761_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_11_0_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_6_ce0() {
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
        WBRAM_11_0_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_6_ce0.read();
    } else {
        WBRAM_11_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_6_d1() {
    WBRAM_11_0_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_7_addr_gep_fu_9768_p3() {
    WBRAM_11_0_7_addr_gep_fu_9768_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_0_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_address0.read();
    } else {
        WBRAM_11_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_7_address1() {
    if (ap_sig_bdd_22514.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_11_0_7_address1 = WBRAM_11_0_7_addr_gep_fu_9768_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_11_0_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_0_7_ce0() {
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
        WBRAM_11_0_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_7_ce0.read();
    } else {
        WBRAM_11_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_7_d1() {
    WBRAM_11_0_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_8_address0() {
    WBRAM_11_0_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_address0.read();
}

void fpga_top::thread_WBRAM_11_0_8_address1() {
    WBRAM_11_0_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_0_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_0_8_ce0.read();
    } else {
        WBRAM_11_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_11_0_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_0_8_d1() {
    WBRAM_11_0_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_0_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_0_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_0_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_0_addr_gep_fu_9775_p3() {
    WBRAM_11_1_0_addr_gep_fu_9775_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_address0.read();
    } else {
        WBRAM_11_1_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_0_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_11_1_0_address1 = WBRAM_11_1_0_addr_gep_fu_9775_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_11_1_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_0_ce0() {
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
        WBRAM_11_1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_0_ce0.read();
    } else {
        WBRAM_11_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_0_d1() {
    WBRAM_11_1_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_1_addr_gep_fu_9782_p3() {
    WBRAM_11_1_1_addr_gep_fu_9782_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_address0.read();
    } else {
        WBRAM_11_1_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_1_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_11_1_1_address1 = WBRAM_11_1_1_addr_gep_fu_9782_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_11_1_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_1_ce0() {
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
        WBRAM_11_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_1_ce0.read();
    } else {
        WBRAM_11_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_1_d1() {
    WBRAM_11_1_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_2_addr_gep_fu_9789_p3() {
    WBRAM_11_1_2_addr_gep_fu_9789_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_address0.read();
    } else {
        WBRAM_11_1_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_2_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_11_1_2_address1 = WBRAM_11_1_2_addr_gep_fu_9789_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_11_1_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_2_ce0() {
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
        WBRAM_11_1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_2_ce0.read();
    } else {
        WBRAM_11_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_2_d1() {
    WBRAM_11_1_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_3_addr_gep_fu_9796_p3() {
    WBRAM_11_1_3_addr_gep_fu_9796_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_address0.read();
    } else {
        WBRAM_11_1_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_3_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_11_1_3_address1 = WBRAM_11_1_3_addr_gep_fu_9796_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_11_1_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_3_ce0() {
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
        WBRAM_11_1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_3_ce0.read();
    } else {
        WBRAM_11_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_3_d1() {
    WBRAM_11_1_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_4_addr_gep_fu_9803_p3() {
    WBRAM_11_1_4_addr_gep_fu_9803_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_address0.read();
    } else {
        WBRAM_11_1_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_4_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_11_1_4_address1 = WBRAM_11_1_4_addr_gep_fu_9803_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_11_1_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_4_ce0() {
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
        WBRAM_11_1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_4_ce0.read();
    } else {
        WBRAM_11_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_4_d1() {
    WBRAM_11_1_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_5_addr_gep_fu_9810_p3() {
    WBRAM_11_1_5_addr_gep_fu_9810_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_address0.read();
    } else {
        WBRAM_11_1_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_5_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_11_1_5_address1 = WBRAM_11_1_5_addr_gep_fu_9810_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_11_1_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_5_ce0() {
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
        WBRAM_11_1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_5_ce0.read();
    } else {
        WBRAM_11_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_5_d1() {
    WBRAM_11_1_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_6_addr_gep_fu_9817_p3() {
    WBRAM_11_1_6_addr_gep_fu_9817_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_address0.read();
    } else {
        WBRAM_11_1_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_6_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_11_1_6_address1 = WBRAM_11_1_6_addr_gep_fu_9817_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_11_1_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_6_ce0() {
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
        WBRAM_11_1_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_6_ce0.read();
    } else {
        WBRAM_11_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_6_d1() {
    WBRAM_11_1_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_7_addr_gep_fu_9824_p3() {
    WBRAM_11_1_7_addr_gep_fu_9824_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_address0.read();
    } else {
        WBRAM_11_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_7_address1() {
    if (ap_sig_bdd_22516.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_11_1_7_address1 = WBRAM_11_1_7_addr_gep_fu_9824_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_11_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_1_7_ce0() {
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
        WBRAM_11_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_7_ce0.read();
    } else {
        WBRAM_11_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_7_d1() {
    WBRAM_11_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_8_address0() {
    WBRAM_11_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_address0.read();
}

void fpga_top::thread_WBRAM_11_1_8_address1() {
    WBRAM_11_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_1_8_ce0.read();
    } else {
        WBRAM_11_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_11_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_1_8_d1() {
    WBRAM_11_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_1_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_0_addr_gep_fu_9831_p3() {
    WBRAM_11_2_0_addr_gep_fu_9831_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_address0.read();
    } else {
        WBRAM_11_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_0_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_11_2_0_address1 = WBRAM_11_2_0_addr_gep_fu_9831_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_11_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_0_ce0() {
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
        WBRAM_11_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_0_ce0.read();
    } else {
        WBRAM_11_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_0_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_0_d1() {
    WBRAM_11_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_1_addr_gep_fu_9838_p3() {
    WBRAM_11_2_1_addr_gep_fu_9838_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_address0.read();
    } else {
        WBRAM_11_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_1_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_11_2_1_address1 = WBRAM_11_2_1_addr_gep_fu_9838_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_11_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_1_ce0() {
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
        WBRAM_11_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_1_ce0.read();
    } else {
        WBRAM_11_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_1_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_1_d1() {
    WBRAM_11_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_2_addr_gep_fu_9845_p3() {
    WBRAM_11_2_2_addr_gep_fu_9845_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_address0.read();
    } else {
        WBRAM_11_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_2_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_11_2_2_address1 = WBRAM_11_2_2_addr_gep_fu_9845_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_11_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_2_ce0() {
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
        WBRAM_11_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_2_ce0.read();
    } else {
        WBRAM_11_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_2_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_2_d1() {
    WBRAM_11_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_3_addr_gep_fu_9852_p3() {
    WBRAM_11_2_3_addr_gep_fu_9852_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_address0.read();
    } else {
        WBRAM_11_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_3_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_11_2_3_address1 = WBRAM_11_2_3_addr_gep_fu_9852_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_11_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_3_ce0() {
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
        WBRAM_11_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_3_ce0.read();
    } else {
        WBRAM_11_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_3_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_3_d1() {
    WBRAM_11_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_4_addr_gep_fu_9859_p3() {
    WBRAM_11_2_4_addr_gep_fu_9859_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_address0.read();
    } else {
        WBRAM_11_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_4_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_11_2_4_address1 = WBRAM_11_2_4_addr_gep_fu_9859_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_11_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_4_ce0() {
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
        WBRAM_11_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_4_ce0.read();
    } else {
        WBRAM_11_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_4_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_4_d1() {
    WBRAM_11_2_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_5_addr_gep_fu_9866_p3() {
    WBRAM_11_2_5_addr_gep_fu_9866_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_address0.read();
    } else {
        WBRAM_11_2_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_5_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_11_2_5_address1 = WBRAM_11_2_5_addr_gep_fu_9866_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_11_2_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_5_ce0() {
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
        WBRAM_11_2_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_5_ce0.read();
    } else {
        WBRAM_11_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_5_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_5_d1() {
    WBRAM_11_2_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_6_addr_gep_fu_9873_p3() {
    WBRAM_11_2_6_addr_gep_fu_9873_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_address0.read();
    } else {
        WBRAM_11_2_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_6_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_11_2_6_address1 = WBRAM_11_2_6_addr_gep_fu_9873_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_11_2_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_6_ce0() {
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
        WBRAM_11_2_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_6_ce0.read();
    } else {
        WBRAM_11_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_6_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_6_d1() {
    WBRAM_11_2_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_7_addr_gep_fu_9880_p3() {
    WBRAM_11_2_7_addr_gep_fu_9880_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_11_2_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_address0.read();
    } else {
        WBRAM_11_2_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_7_address1() {
    if (ap_sig_bdd_22518.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_11_2_7_address1 = WBRAM_11_2_7_addr_gep_fu_9880_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_11_2_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_11_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_11_2_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_11_2_7_ce0() {
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
        WBRAM_11_2_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_7_ce0.read();
    } else {
        WBRAM_11_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_7_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_7_d1() {
    WBRAM_11_2_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_8_address0() {
    WBRAM_11_2_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_address0.read();
}

void fpga_top::thread_WBRAM_11_2_8_address1() {
    WBRAM_11_2_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_11_2_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_11_2_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_11_2_8_ce0.read();
    } else {
        WBRAM_11_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_11_2_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_11_2_8_d1() {
    WBRAM_11_2_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_11_2_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_B)))) {
        WBRAM_11_2_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_11_2_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_0_addr_gep_fu_9887_p3() {
    WBRAM_12_0_0_addr_gep_fu_9887_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_address0.read();
    } else {
        WBRAM_12_0_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_0_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_12_0_0_address1 = WBRAM_12_0_0_addr_gep_fu_9887_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_12_0_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_0_ce0() {
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
        WBRAM_12_0_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_0_ce0.read();
    } else {
        WBRAM_12_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_0_d1() {
    WBRAM_12_0_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_1_addr_gep_fu_9894_p3() {
    WBRAM_12_0_1_addr_gep_fu_9894_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_address0.read();
    } else {
        WBRAM_12_0_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_1_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_12_0_1_address1 = WBRAM_12_0_1_addr_gep_fu_9894_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_12_0_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_1_ce0() {
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
        WBRAM_12_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_1_ce0.read();
    } else {
        WBRAM_12_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_1_d1() {
    WBRAM_12_0_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_2_addr_gep_fu_9901_p3() {
    WBRAM_12_0_2_addr_gep_fu_9901_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_address0.read();
    } else {
        WBRAM_12_0_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_2_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_12_0_2_address1 = WBRAM_12_0_2_addr_gep_fu_9901_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_12_0_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_2_ce0() {
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
        WBRAM_12_0_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_2_ce0.read();
    } else {
        WBRAM_12_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_2_d1() {
    WBRAM_12_0_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_3_addr_gep_fu_9908_p3() {
    WBRAM_12_0_3_addr_gep_fu_9908_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_address0.read();
    } else {
        WBRAM_12_0_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_3_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_12_0_3_address1 = WBRAM_12_0_3_addr_gep_fu_9908_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_12_0_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_3_ce0() {
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
        WBRAM_12_0_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_3_ce0.read();
    } else {
        WBRAM_12_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_3_d1() {
    WBRAM_12_0_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_4_addr_gep_fu_9915_p3() {
    WBRAM_12_0_4_addr_gep_fu_9915_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_address0.read();
    } else {
        WBRAM_12_0_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_4_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_12_0_4_address1 = WBRAM_12_0_4_addr_gep_fu_9915_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_12_0_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_4_ce0() {
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
        WBRAM_12_0_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_4_ce0.read();
    } else {
        WBRAM_12_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_4_d1() {
    WBRAM_12_0_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_5_addr_gep_fu_9922_p3() {
    WBRAM_12_0_5_addr_gep_fu_9922_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_address0.read();
    } else {
        WBRAM_12_0_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_5_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_12_0_5_address1 = WBRAM_12_0_5_addr_gep_fu_9922_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_12_0_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_5_ce0() {
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
        WBRAM_12_0_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_5_ce0.read();
    } else {
        WBRAM_12_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_5_d1() {
    WBRAM_12_0_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_6_addr_gep_fu_9929_p3() {
    WBRAM_12_0_6_addr_gep_fu_9929_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_address0.read();
    } else {
        WBRAM_12_0_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_6_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_12_0_6_address1 = WBRAM_12_0_6_addr_gep_fu_9929_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_12_0_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_6_ce0() {
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
        WBRAM_12_0_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_6_ce0.read();
    } else {
        WBRAM_12_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_6_d1() {
    WBRAM_12_0_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_7_addr_gep_fu_9936_p3() {
    WBRAM_12_0_7_addr_gep_fu_9936_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_0_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_address0.read();
    } else {
        WBRAM_12_0_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_7_address1() {
    if (ap_sig_bdd_22520.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_12_0_7_address1 = WBRAM_12_0_7_addr_gep_fu_9936_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_12_0_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_0_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_0_7_ce0() {
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
        WBRAM_12_0_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_7_ce0.read();
    } else {
        WBRAM_12_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_7_d1() {
    WBRAM_12_0_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_8_address0() {
    WBRAM_12_0_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_address0.read();
}

void fpga_top::thread_WBRAM_12_0_8_address1() {
    WBRAM_12_0_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_0_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_0_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_0_8_ce0.read();
    } else {
        WBRAM_12_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_12_0_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_0_8_d1() {
    WBRAM_12_0_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_0_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_0_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_0_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_0_addr_gep_fu_9943_p3() {
    WBRAM_12_1_0_addr_gep_fu_9943_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_address0.read();
    } else {
        WBRAM_12_1_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_0_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_12_1_0_address1 = WBRAM_12_1_0_addr_gep_fu_9943_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_12_1_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_0_ce0() {
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
        WBRAM_12_1_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_0_ce0.read();
    } else {
        WBRAM_12_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_0_d1() {
    WBRAM_12_1_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_1_addr_gep_fu_9950_p3() {
    WBRAM_12_1_1_addr_gep_fu_9950_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_address0.read();
    } else {
        WBRAM_12_1_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_1_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_12_1_1_address1 = WBRAM_12_1_1_addr_gep_fu_9950_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_12_1_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_1_ce0() {
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
        WBRAM_12_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_1_ce0.read();
    } else {
        WBRAM_12_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_1_d1() {
    WBRAM_12_1_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_2_addr_gep_fu_9957_p3() {
    WBRAM_12_1_2_addr_gep_fu_9957_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_address0.read();
    } else {
        WBRAM_12_1_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_2_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_12_1_2_address1 = WBRAM_12_1_2_addr_gep_fu_9957_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_12_1_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_2_ce0() {
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
        WBRAM_12_1_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_2_ce0.read();
    } else {
        WBRAM_12_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_2_d1() {
    WBRAM_12_1_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_3_addr_gep_fu_9964_p3() {
    WBRAM_12_1_3_addr_gep_fu_9964_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_address0.read();
    } else {
        WBRAM_12_1_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_3_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_12_1_3_address1 = WBRAM_12_1_3_addr_gep_fu_9964_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_12_1_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_3_ce0() {
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
        WBRAM_12_1_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_3_ce0.read();
    } else {
        WBRAM_12_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_3_d1() {
    WBRAM_12_1_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_4_addr_gep_fu_9971_p3() {
    WBRAM_12_1_4_addr_gep_fu_9971_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_address0.read();
    } else {
        WBRAM_12_1_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_4_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_12_1_4_address1 = WBRAM_12_1_4_addr_gep_fu_9971_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_12_1_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_4_ce0() {
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
        WBRAM_12_1_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_4_ce0.read();
    } else {
        WBRAM_12_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_4_d1() {
    WBRAM_12_1_4_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_4_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_4_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_5_addr_gep_fu_9978_p3() {
    WBRAM_12_1_5_addr_gep_fu_9978_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_5_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_5_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_address0.read();
    } else {
        WBRAM_12_1_5_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_5_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22487.read()) {
            WBRAM_12_1_5_address1 = WBRAM_12_1_5_addr_gep_fu_9978_p3.read();
        } else if (ap_sig_bdd_22485.read()) {
            WBRAM_12_1_5_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_5_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_5_ce0() {
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
        WBRAM_12_1_5_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_5_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_5_ce0.read();
    } else {
        WBRAM_12_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_5_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_5_d1() {
    WBRAM_12_1_5_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_5) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_5_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_5_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_6_addr_gep_fu_9985_p3() {
    WBRAM_12_1_6_addr_gep_fu_9985_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_6_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_6_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_address0.read();
    } else {
        WBRAM_12_1_6_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_6_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22491.read()) {
            WBRAM_12_1_6_address1 = WBRAM_12_1_6_addr_gep_fu_9985_p3.read();
        } else if (ap_sig_bdd_22489.read()) {
            WBRAM_12_1_6_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_6_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_6_ce0() {
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
        WBRAM_12_1_6_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_6_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_6_ce0.read();
    } else {
        WBRAM_12_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_6_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_6_d1() {
    WBRAM_12_1_6_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_6) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_6_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_6_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_7_addr_gep_fu_9992_p3() {
    WBRAM_12_1_7_addr_gep_fu_9992_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_1_7_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_7_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_address0.read();
    } else {
        WBRAM_12_1_7_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_7_address1() {
    if (ap_sig_bdd_22522.read()) {
        if (ap_sig_bdd_22501.read()) {
            WBRAM_12_1_7_address1 = WBRAM_12_1_7_addr_gep_fu_9992_p3.read();
        } else if (ap_sig_bdd_22493.read()) {
            WBRAM_12_1_7_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_1_7_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_1_7_ce0() {
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
        WBRAM_12_1_7_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_7_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_7_ce0.read();
    } else {
        WBRAM_12_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_7_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_7_d1() {
    WBRAM_12_1_7_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_7) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_7_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_7_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_8_address0() {
    WBRAM_12_1_8_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_address0.read();
}

void fpga_top::thread_WBRAM_12_1_8_address1() {
    WBRAM_12_1_8_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_1_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_1_8_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_1_8_ce0.read();
    } else {
        WBRAM_12_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
          !(ap_sig_bdd_5950.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()))))) {
        WBRAM_12_1_8_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_1_8_d1() {
    WBRAM_12_1_8_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_1_8_we1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_1_8_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_1_8_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_0_addr_gep_fu_9999_p3() {
    WBRAM_12_2_0_addr_gep_fu_9999_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_2_0_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_2_0_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_0_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_address0.read();
    } else {
        WBRAM_12_2_0_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_0_address1() {
    if (ap_sig_bdd_22524.read()) {
        if (ap_sig_bdd_22466.read()) {
            WBRAM_12_2_0_address1 = WBRAM_12_2_0_addr_gep_fu_9999_p3.read();
        } else if (ap_sig_bdd_22464.read()) {
            WBRAM_12_2_0_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_2_0_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_0_ce0() {
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
        WBRAM_12_2_0_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_0_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_0_ce0.read();
    } else {
        WBRAM_12_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_0_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_0_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_0_d1() {
    WBRAM_12_2_0_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_2_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_0) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_0_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_0_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_1_addr_gep_fu_10006_p3() {
    WBRAM_12_2_1_addr_gep_fu_10006_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_2_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_2_1_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_1_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_address0.read();
    } else {
        WBRAM_12_2_1_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_1_address1() {
    if (ap_sig_bdd_22524.read()) {
        if (ap_sig_bdd_22471.read()) {
            WBRAM_12_2_1_address1 = WBRAM_12_2_1_addr_gep_fu_10006_p3.read();
        } else if (ap_sig_bdd_22469.read()) {
            WBRAM_12_2_1_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_2_1_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_1_ce0() {
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
        WBRAM_12_2_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_1_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_1_ce0.read();
    } else {
        WBRAM_12_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_1_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_1_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_1_d1() {
    WBRAM_12_2_1_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_2_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_1_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_1_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_2_addr_gep_fu_10013_p3() {
    WBRAM_12_2_2_addr_gep_fu_10013_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_2_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_2_2_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_2_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_address0.read();
    } else {
        WBRAM_12_2_2_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_2_address1() {
    if (ap_sig_bdd_22524.read()) {
        if (ap_sig_bdd_22475.read()) {
            WBRAM_12_2_2_address1 = WBRAM_12_2_2_addr_gep_fu_10013_p3.read();
        } else if (ap_sig_bdd_22473.read()) {
            WBRAM_12_2_2_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_2_2_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_2_ce0() {
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
        WBRAM_12_2_2_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_2_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_2_ce0.read();
    } else {
        WBRAM_12_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_2_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_2_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_2_d1() {
    WBRAM_12_2_2_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_2_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_2_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_2_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_3_addr_gep_fu_10020_p3() {
    WBRAM_12_2_3_addr_gep_fu_10020_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_2_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_2_3_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_3_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_address0.read();
    } else {
        WBRAM_12_2_3_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_3_address1() {
    if (ap_sig_bdd_22524.read()) {
        if (ap_sig_bdd_22479.read()) {
            WBRAM_12_2_3_address1 = WBRAM_12_2_3_addr_gep_fu_10020_p3.read();
        } else if (ap_sig_bdd_22477.read()) {
            WBRAM_12_2_3_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_2_3_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_3_ce0() {
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
        WBRAM_12_2_3_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_3_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_3_ce0.read();
    } else {
        WBRAM_12_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_3_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_3_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_3_d1() {
    WBRAM_12_2_3_d1 = grp_fpga_top_reg_float_s_fu_15834_ap_return.read();
}

void fpga_top::thread_WBRAM_12_2_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_p_0111_0_i_reg_14759_pp0_it4.read(), ap_const_lv4_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_3) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_3_we1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_3_we1 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_4_addr_gep_fu_10027_p3() {
    WBRAM_12_2_4_addr_gep_fu_10027_p3 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
}

void fpga_top::thread_WBRAM_12_2_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp4_stg0_fsm_28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        WBRAM_12_2_4_address0 =  (sc_lv<10>) (tmp_65_fu_18313_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_4_address0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_address0.read();
    } else {
        WBRAM_12_2_4_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_4_address1() {
    if (ap_sig_bdd_22524.read()) {
        if (ap_sig_bdd_22483.read()) {
            WBRAM_12_2_4_address1 = WBRAM_12_2_4_addr_gep_fu_10027_p3.read();
        } else if (ap_sig_bdd_22481.read()) {
            WBRAM_12_2_4_address1 =  (sc_lv<10>) (tmp_26_fu_16890_p1.read());
        } else {
            WBRAM_12_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
        }
    } else {
        WBRAM_12_2_4_address1 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void fpga_top::thread_WBRAM_12_2_4_ce0() {
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
        WBRAM_12_2_4_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st58_fsm_21.read())) {
        WBRAM_12_2_4_ce0 = grp_fpga_top_processInputChannel_0_fu_14915_WBRAM_12_2_4_ce0.read();
    } else {
        WBRAM_12_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top::thread_WBRAM_12_2_4_ce1() {
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
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_9.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_19802.read()) && esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_memorybus_ARREADY.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, bias_or_1x1_reg_19759.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_weightID_V_reg_19826_pp0_it4.read(), ap_const_lv3_4) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_const_lv2_0, ap_reg_ppstg_tmp_117_reg_19822_pp0_it4.read()) && 
          esl_seteq<1,4,4>(ap_reg_ppstg_tmp_27_reg_19830_pp0_it4.read(), ap_const_lv4_C)))) {
        WBRAM_12_2_4_ce1 = ap_const_logic_1;
    } else {
        WBRAM_12_2_4_ce1 = ap_const_logic_0;
    }
}

}

