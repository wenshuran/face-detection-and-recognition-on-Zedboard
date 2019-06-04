#include "fpga_top_processAllCHout1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top_processAllCHout1::thread_OBRAM_0_address0() {
    if (ap_sig_bdd_18766.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_0_address0 =  (sc_lv<5>) (newIndex5_i_fu_14245_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_0_address0 =  (sc_lv<5>) (newIndex7_i_fu_14240_p1.read());
        } else {
            OBRAM_0_address0 = "XXXXX";
        }
    } else {
        OBRAM_0_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_0_address1() {
    OBRAM_0_address1 = ap_reg_ppstg_OBRAM_0_addr_1_reg_20809_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_0_ce0 = ap_const_logic_1;
    } else {
        OBRAM_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_0_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_0_ce1 = ap_const_logic_1;
    } else {
        OBRAM_0_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_0_d0() {
    OBRAM_0_d0 = accumulator_0_8_i_reg_20713.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_0_d1() {
    OBRAM_0_d1 = new_ch_i_reg_20985.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_0_we0 = ap_const_logic_1;
    } else {
        OBRAM_0_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0)))) {
        OBRAM_0_we1 = ap_const_logic_1;
    } else {
        OBRAM_0_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_10_address0() {
    if (ap_sig_bdd_18777.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_10_address0 =  (sc_lv<5>) (newIndex45_i_fu_14345_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_10_address0 =  (sc_lv<5>) (newIndex47_i_fu_14340_p1.read());
        } else {
            OBRAM_10_address0 = "XXXXX";
        }
    } else {
        OBRAM_10_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_10_address1() {
    OBRAM_10_address1 = ap_reg_ppstg_OBRAM_10_addr_1_reg_20869_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_10_ce0 = ap_const_logic_1;
    } else {
        OBRAM_10_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_10_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_10_ce1 = ap_const_logic_1;
    } else {
        OBRAM_10_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_10_d0() {
    OBRAM_10_d0 = accumulator_10_8_i_reg_20773.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_10_d1() {
    OBRAM_10_d1 = new_ch_i_30_reg_21035.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_10_we0 = ap_const_logic_1;
    } else {
        OBRAM_10_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_10_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read())))) {
        OBRAM_10_we1 = ap_const_logic_1;
    } else {
        OBRAM_10_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_11_address0() {
    if (ap_sig_bdd_18779.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_11_address0 =  (sc_lv<5>) (newIndex49_i_fu_14355_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_11_address0 =  (sc_lv<5>) (newIndex51_i_fu_14350_p1.read());
        } else {
            OBRAM_11_address0 = "XXXXX";
        }
    } else {
        OBRAM_11_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_11_address1() {
    OBRAM_11_address1 = ap_reg_ppstg_OBRAM_11_addr_1_reg_20875_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_11_ce0 = ap_const_logic_1;
    } else {
        OBRAM_11_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_11_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_11_ce1 = ap_const_logic_1;
    } else {
        OBRAM_11_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_11_d0() {
    OBRAM_11_d0 = accumulator_11_8_i_reg_20779.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_11_d1() {
    OBRAM_11_d1 = new_ch_10_i_reg_21040.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_11_we0 = ap_const_logic_1;
    } else {
        OBRAM_11_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_11_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it60.read())))) {
        OBRAM_11_we1 = ap_const_logic_1;
    } else {
        OBRAM_11_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_12_address0() {
    if (ap_sig_bdd_18781.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_12_address0 =  (sc_lv<5>) (newIndex53_i_fu_14365_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_12_address0 =  (sc_lv<5>) (newIndex55_i_fu_14360_p1.read());
        } else {
            OBRAM_12_address0 = "XXXXX";
        }
    } else {
        OBRAM_12_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_12_address1() {
    OBRAM_12_address1 = ap_reg_ppstg_OBRAM_12_addr_1_reg_20881_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_12_ce0 = ap_const_logic_1;
    } else {
        OBRAM_12_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_12_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_12_ce1 = ap_const_logic_1;
    } else {
        OBRAM_12_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_12_d0() {
    OBRAM_12_d0 = accumulator_12_8_i_reg_20785.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_12_d1() {
    OBRAM_12_d1 = new_ch_11_i_reg_21045.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_12_we0 = ap_const_logic_1;
    } else {
        OBRAM_12_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_12_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it60.read())))) {
        OBRAM_12_we1 = ap_const_logic_1;
    } else {
        OBRAM_12_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_13_address0() {
    if (ap_sig_bdd_18783.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_13_address0 =  (sc_lv<5>) (newIndex57_i_fu_14375_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_13_address0 =  (sc_lv<5>) (newIndex59_i_fu_14370_p1.read());
        } else {
            OBRAM_13_address0 = "XXXXX";
        }
    } else {
        OBRAM_13_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_13_address1() {
    OBRAM_13_address1 = ap_reg_ppstg_OBRAM_13_addr_1_reg_20887_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_13_ce0 = ap_const_logic_1;
    } else {
        OBRAM_13_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_13_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_13_ce1 = ap_const_logic_1;
    } else {
        OBRAM_13_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_13_d0() {
    OBRAM_13_d0 = accumulator_13_8_i_reg_20791.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_13_d1() {
    OBRAM_13_d1 = new_ch_12_i_reg_21050.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_13_we0 = ap_const_logic_1;
    } else {
        OBRAM_13_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_13_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it60.read())))) {
        OBRAM_13_we1 = ap_const_logic_1;
    } else {
        OBRAM_13_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_14_address0() {
    if (ap_sig_bdd_18785.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_14_address0 =  (sc_lv<5>) (newIndex61_i_fu_14385_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_14_address0 =  (sc_lv<5>) (newIndex63_i_fu_14380_p1.read());
        } else {
            OBRAM_14_address0 = "XXXXX";
        }
    } else {
        OBRAM_14_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_14_address1() {
    OBRAM_14_address1 = ap_reg_ppstg_OBRAM_14_addr_1_reg_20893_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_14_ce0 = ap_const_logic_1;
    } else {
        OBRAM_14_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_14_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_14_ce1 = ap_const_logic_1;
    } else {
        OBRAM_14_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_14_d0() {
    OBRAM_14_d0 = accumulator_14_8_i_reg_20797.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_14_d1() {
    OBRAM_14_d1 = new_ch_13_i_reg_21055.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_14_we0 = ap_const_logic_1;
    } else {
        OBRAM_14_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_14_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it60.read())))) {
        OBRAM_14_we1 = ap_const_logic_1;
    } else {
        OBRAM_14_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_15_address0() {
    if (ap_sig_bdd_18787.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_15_address0 =  (sc_lv<5>) (newIndex65_i_fu_14395_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_15_address0 =  (sc_lv<5>) (newIndex66_i_fu_14390_p1.read());
        } else {
            OBRAM_15_address0 = "XXXXX";
        }
    } else {
        OBRAM_15_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_15_address1() {
    OBRAM_15_address1 = ap_reg_ppstg_OBRAM_15_addr_1_reg_20899_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_14_i_reg_15949_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_14_i_reg_15949_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_15_ce0 = ap_const_logic_1;
    } else {
        OBRAM_15_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_15_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_15_ce1 = ap_const_logic_1;
    } else {
        OBRAM_15_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_15_d0() {
    OBRAM_15_d0 = accumulator_15_8_i_reg_20803.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_15_d1() {
    OBRAM_15_d1 = new_ch_14_i_reg_21060.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_14_i_reg_15949_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_15_we0 = ap_const_logic_1;
    } else {
        OBRAM_15_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_15_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_i_23_reg_15594_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_10_i_reg_15665_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_11_i_reg_15736_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_12_i_reg_15807_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_13_i_reg_15878_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_14_i_reg_15949_pp0_it60.read())))) {
        OBRAM_15_we1 = ap_const_logic_1;
    } else {
        OBRAM_15_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_1_address0() {
    if (ap_sig_bdd_18768.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_1_address0 =  (sc_lv<5>) (newIndex9_i_fu_14255_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_1_address0 =  (sc_lv<5>) (newIndex11_i_fu_14250_p1.read());
        } else {
            OBRAM_1_address0 = "XXXXX";
        }
    } else {
        OBRAM_1_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_1_address1() {
    OBRAM_1_address1 = ap_reg_ppstg_OBRAM_1_addr_1_reg_20815_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_1_ce0 = ap_const_logic_1;
    } else {
        OBRAM_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_1_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_1_ce1 = ap_const_logic_1;
    } else {
        OBRAM_1_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_1_d0() {
    OBRAM_1_d0 = accumulator_1_8_i_reg_20719.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_1_d1() {
    OBRAM_1_d1 = new_ch_1_i_reg_20990.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_1_we0 = ap_const_logic_1;
    } else {
        OBRAM_1_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read())))) {
        OBRAM_1_we1 = ap_const_logic_1;
    } else {
        OBRAM_1_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_2_address0() {
    if (ap_sig_bdd_18769.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_2_address0 =  (sc_lv<5>) (newIndex13_i_fu_14265_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_2_address0 =  (sc_lv<5>) (newIndex15_i_fu_14260_p1.read());
        } else {
            OBRAM_2_address0 = "XXXXX";
        }
    } else {
        OBRAM_2_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_2_address1() {
    OBRAM_2_address1 = ap_reg_ppstg_OBRAM_2_addr_1_reg_20821_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_2_ce0 = ap_const_logic_1;
    } else {
        OBRAM_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_2_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_2_ce1 = ap_const_logic_1;
    } else {
        OBRAM_2_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_2_d0() {
    OBRAM_2_d0 = accumulator_2_8_i_reg_20725.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_2_d1() {
    OBRAM_2_d1 = new_ch_2_i_reg_20995.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_2_we0 = ap_const_logic_1;
    } else {
        OBRAM_2_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read())))) {
        OBRAM_2_we1 = ap_const_logic_1;
    } else {
        OBRAM_2_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_3_address0() {
    if (ap_sig_bdd_18770.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_3_address0 =  (sc_lv<5>) (newIndex17_i_fu_14275_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_3_address0 =  (sc_lv<5>) (newIndex19_i_fu_14270_p1.read());
        } else {
            OBRAM_3_address0 = "XXXXX";
        }
    } else {
        OBRAM_3_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_3_address1() {
    OBRAM_3_address1 = ap_reg_ppstg_OBRAM_3_addr_1_reg_20827_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_3_ce0 = ap_const_logic_1;
    } else {
        OBRAM_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_3_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_3_ce1 = ap_const_logic_1;
    } else {
        OBRAM_3_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_3_d0() {
    OBRAM_3_d0 = accumulator_3_8_i_reg_20731.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_3_d1() {
    OBRAM_3_d1 = new_ch_3_i_reg_21000.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_3_we0 = ap_const_logic_1;
    } else {
        OBRAM_3_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read())))) {
        OBRAM_3_we1 = ap_const_logic_1;
    } else {
        OBRAM_3_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_4_address0() {
    if (ap_sig_bdd_18771.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_4_address0 =  (sc_lv<5>) (newIndex21_i_fu_14285_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_4_address0 =  (sc_lv<5>) (newIndex23_i_fu_14280_p1.read());
        } else {
            OBRAM_4_address0 = "XXXXX";
        }
    } else {
        OBRAM_4_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_4_address1() {
    OBRAM_4_address1 = ap_reg_ppstg_OBRAM_4_addr_1_reg_20833_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_4_ce0 = ap_const_logic_1;
    } else {
        OBRAM_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_4_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_4_ce1 = ap_const_logic_1;
    } else {
        OBRAM_4_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_4_d0() {
    OBRAM_4_d0 = accumulator_4_8_i_reg_20737.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_4_d1() {
    OBRAM_4_d1 = new_ch_4_i_reg_21005.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_4_we0 = ap_const_logic_1;
    } else {
        OBRAM_4_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read())))) {
        OBRAM_4_we1 = ap_const_logic_1;
    } else {
        OBRAM_4_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_5_address0() {
    if (ap_sig_bdd_18772.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_5_address0 =  (sc_lv<5>) (newIndex25_i_fu_14295_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_5_address0 =  (sc_lv<5>) (newIndex27_i_fu_14290_p1.read());
        } else {
            OBRAM_5_address0 = "XXXXX";
        }
    } else {
        OBRAM_5_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_5_address1() {
    OBRAM_5_address1 = ap_reg_ppstg_OBRAM_5_addr_1_reg_20839_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_5_ce0 = ap_const_logic_1;
    } else {
        OBRAM_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_5_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_5_ce1 = ap_const_logic_1;
    } else {
        OBRAM_5_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_5_d0() {
    OBRAM_5_d0 = accumulator_5_8_i_reg_20743.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_5_d1() {
    OBRAM_5_d1 = new_ch_5_i_reg_21010.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_5_we0 = ap_const_logic_1;
    } else {
        OBRAM_5_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read())))) {
        OBRAM_5_we1 = ap_const_logic_1;
    } else {
        OBRAM_5_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_6_address0() {
    if (ap_sig_bdd_18773.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_6_address0 =  (sc_lv<5>) (newIndex29_i_fu_14305_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_6_address0 =  (sc_lv<5>) (newIndex31_i_fu_14300_p1.read());
        } else {
            OBRAM_6_address0 = "XXXXX";
        }
    } else {
        OBRAM_6_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_6_address1() {
    OBRAM_6_address1 = ap_reg_ppstg_OBRAM_6_addr_1_reg_20845_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_6_ce0 = ap_const_logic_1;
    } else {
        OBRAM_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_6_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_6_ce1 = ap_const_logic_1;
    } else {
        OBRAM_6_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_6_d0() {
    OBRAM_6_d0 = accumulator_6_8_i_reg_20749.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_6_d1() {
    OBRAM_6_d1 = new_ch_6_i_reg_21015.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_6_we0 = ap_const_logic_1;
    } else {
        OBRAM_6_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read())))) {
        OBRAM_6_we1 = ap_const_logic_1;
    } else {
        OBRAM_6_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_7_address0() {
    if (ap_sig_bdd_18774.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_7_address0 =  (sc_lv<5>) (newIndex33_i_fu_14315_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_7_address0 =  (sc_lv<5>) (newIndex35_i_fu_14310_p1.read());
        } else {
            OBRAM_7_address0 = "XXXXX";
        }
    } else {
        OBRAM_7_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_7_address1() {
    OBRAM_7_address1 = ap_reg_ppstg_OBRAM_7_addr_1_reg_20851_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_7_ce0 = ap_const_logic_1;
    } else {
        OBRAM_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_7_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_7_ce1 = ap_const_logic_1;
    } else {
        OBRAM_7_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_7_d0() {
    OBRAM_7_d0 = accumulator_7_8_i_reg_20755.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_7_d1() {
    OBRAM_7_d1 = new_ch_7_i_reg_21020.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_7_we0 = ap_const_logic_1;
    } else {
        OBRAM_7_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read())))) {
        OBRAM_7_we1 = ap_const_logic_1;
    } else {
        OBRAM_7_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_8_address0() {
    if (ap_sig_bdd_18775.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_8_address0 =  (sc_lv<5>) (newIndex37_i_fu_14325_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_8_address0 =  (sc_lv<5>) (newIndex39_i_fu_14320_p1.read());
        } else {
            OBRAM_8_address0 = "XXXXX";
        }
    } else {
        OBRAM_8_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_8_address1() {
    OBRAM_8_address1 = ap_reg_ppstg_OBRAM_8_addr_1_reg_20857_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_8_ce0 = ap_const_logic_1;
    } else {
        OBRAM_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_8_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_8_ce1 = ap_const_logic_1;
    } else {
        OBRAM_8_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_8_d0() {
    OBRAM_8_d0 = accumulator_8_8_i_reg_20761.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_8_d1() {
    OBRAM_8_d1 = new_ch_8_i_reg_21025.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_8_we0 = ap_const_logic_1;
    } else {
        OBRAM_8_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read())))) {
        OBRAM_8_we1 = ap_const_logic_1;
    } else {
        OBRAM_8_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_9_address0() {
    if (ap_sig_bdd_18776.read()) {
        if (!esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_9_address0 =  (sc_lv<5>) (newIndex41_i_fu_14335_p1.read());
        } else if (esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)) {
            OBRAM_9_address0 =  (sc_lv<5>) (newIndex43_i_fu_14330_p1.read());
        } else {
            OBRAM_9_address0 = "XXXXX";
        }
    } else {
        OBRAM_9_address0 = "XXXXX";
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_9_address1() {
    OBRAM_9_address1 = ap_reg_ppstg_OBRAM_9_addr_1_reg_20863_pp0_it60.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it55.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_9_ce0 = ap_const_logic_1;
    } else {
        OBRAM_9_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_9_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read())) {
        OBRAM_9_ce1 = ap_const_logic_1;
    } else {
        OBRAM_9_ce1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_9_d0() {
    OBRAM_9_d0 = accumulator_9_8_i_reg_20767.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_9_d1() {
    OBRAM_9_d1 = new_ch_9_i_reg_21030.read();
}

void fpga_top_processAllCHout1::thread_OBRAM_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it52.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it52.read()) && 
          !esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0)))) {
        OBRAM_9_we0 = ap_const_logic_1;
    } else {
        OBRAM_9_we0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_OBRAM_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it61.read()) && 
          esl_seteq<1,1,1>(tmp_i_reg_14600.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it60.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_4_i_reg_15168_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_5_i_reg_15239_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_6_i_reg_15310_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_7_i_reg_15381_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_8_i_reg_15452_pp0_it60.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_9_i_reg_15523_pp0_it60.read())))) {
        OBRAM_9_we1 = ap_const_logic_1;
    } else {
        OBRAM_9_we1 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_0_address0() {
    WBRAM_0_0_0_address0 =  (sc_lv<10>) (tmp_157_i_fu_8194_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_0_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_1_address0() {
    WBRAM_0_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_0_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_2_address0() {
    WBRAM_0_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_0_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_3_address0() {
    WBRAM_0_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_0_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_4_address0() {
    WBRAM_0_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_5_address0() {
    WBRAM_0_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_6_address0() {
    WBRAM_0_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_7_address0() {
    WBRAM_0_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_8_address0() {
    WBRAM_0_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_0_address0() {
    WBRAM_0_1_0_address0 =  (sc_lv<10>) (tmp_157_i_fu_8194_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_0_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_1_address0() {
    WBRAM_0_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_0_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_2_address0() {
    WBRAM_0_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_0_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_3_address0() {
    WBRAM_0_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_0_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_4_address0() {
    WBRAM_0_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_5_address0() {
    WBRAM_0_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_6_address0() {
    WBRAM_0_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_7_address0() {
    WBRAM_0_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_8_address0() {
    WBRAM_0_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_0_address0() {
    WBRAM_0_2_0_address0 =  (sc_lv<10>) (tmp_157_i_fu_8194_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_0_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_1_address0() {
    WBRAM_0_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_0_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_2_address0() {
    WBRAM_0_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_0_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_3_address0() {
    WBRAM_0_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_0_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_4_address0() {
    WBRAM_0_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_5_address0() {
    WBRAM_0_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_6_address0() {
    WBRAM_0_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_7_address0() {
    WBRAM_0_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_0_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_8_address0() {
    WBRAM_0_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_reg_14652_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_0_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_0_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_0_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_0_address0() {
    WBRAM_10_0_0_address0 =  (sc_lv<10>) (tmp_157_i_29_fu_9210_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_10_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_1_address0() {
    WBRAM_10_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_10_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_2_address0() {
    WBRAM_10_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_10_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_3_address0() {
    WBRAM_10_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_10_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_4_address0() {
    WBRAM_10_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_5_address0() {
    WBRAM_10_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_6_address0() {
    WBRAM_10_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_7_address0() {
    WBRAM_10_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_8_address0() {
    WBRAM_10_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_0_address0() {
    WBRAM_10_1_0_address0 =  (sc_lv<10>) (tmp_157_i_29_fu_9210_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_10_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_1_address0() {
    WBRAM_10_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_10_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_2_address0() {
    WBRAM_10_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_10_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_3_address0() {
    WBRAM_10_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_10_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_4_address0() {
    WBRAM_10_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_5_address0() {
    WBRAM_10_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_6_address0() {
    WBRAM_10_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_7_address0() {
    WBRAM_10_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_8_address0() {
    WBRAM_10_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_0_address0() {
    WBRAM_10_2_0_address0 =  (sc_lv<10>) (tmp_157_i_29_fu_9210_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_10_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_1_address0() {
    WBRAM_10_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_10_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_2_address0() {
    WBRAM_10_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_10_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_3_address0() {
    WBRAM_10_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_10_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_4_address0() {
    WBRAM_10_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_5_address0() {
    WBRAM_10_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_6_address0() {
    WBRAM_10_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_7_address0() {
    WBRAM_10_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_10_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_8_address0() {
    WBRAM_10_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_i_29_reg_15622_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_10_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_10_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_10_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_0_address0() {
    WBRAM_11_0_0_address0 =  (sc_lv<10>) (tmp_157_10_i_fu_9311_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_11_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_1_address0() {
    WBRAM_11_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_11_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_2_address0() {
    WBRAM_11_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_11_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_3_address0() {
    WBRAM_11_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_11_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_4_address0() {
    WBRAM_11_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_5_address0() {
    WBRAM_11_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_6_address0() {
    WBRAM_11_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_7_address0() {
    WBRAM_11_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_8_address0() {
    WBRAM_11_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_0_address0() {
    WBRAM_11_1_0_address0 =  (sc_lv<10>) (tmp_157_10_i_fu_9311_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_11_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_1_address0() {
    WBRAM_11_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_11_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_2_address0() {
    WBRAM_11_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_11_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_3_address0() {
    WBRAM_11_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_11_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_4_address0() {
    WBRAM_11_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_5_address0() {
    WBRAM_11_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_6_address0() {
    WBRAM_11_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_7_address0() {
    WBRAM_11_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_8_address0() {
    WBRAM_11_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_0_address0() {
    WBRAM_11_2_0_address0 =  (sc_lv<10>) (tmp_157_10_i_fu_9311_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_11_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_1_address0() {
    WBRAM_11_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_11_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_2_address0() {
    WBRAM_11_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_11_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_3_address0() {
    WBRAM_11_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_11_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_4_address0() {
    WBRAM_11_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_5_address0() {
    WBRAM_11_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_6_address0() {
    WBRAM_11_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_7_address0() {
    WBRAM_11_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_11_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_8_address0() {
    WBRAM_11_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_10_i_reg_15693_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_11_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_11_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_11_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_0_address0() {
    WBRAM_12_0_0_address0 =  (sc_lv<10>) (tmp_157_11_i_fu_9412_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_12_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_1_address0() {
    WBRAM_12_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_12_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_2_address0() {
    WBRAM_12_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_12_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_3_address0() {
    WBRAM_12_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_12_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_4_address0() {
    WBRAM_12_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_5_address0() {
    WBRAM_12_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_6_address0() {
    WBRAM_12_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_7_address0() {
    WBRAM_12_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_8_address0() {
    WBRAM_12_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_0_address0() {
    WBRAM_12_1_0_address0 =  (sc_lv<10>) (tmp_157_11_i_fu_9412_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_12_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_1_address0() {
    WBRAM_12_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_12_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_2_address0() {
    WBRAM_12_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_12_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_3_address0() {
    WBRAM_12_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_12_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_4_address0() {
    WBRAM_12_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_5_address0() {
    WBRAM_12_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_6_address0() {
    WBRAM_12_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_7_address0() {
    WBRAM_12_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_8_address0() {
    WBRAM_12_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_0_address0() {
    WBRAM_12_2_0_address0 =  (sc_lv<10>) (tmp_157_11_i_fu_9412_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_12_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_1_address0() {
    WBRAM_12_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_12_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_2_address0() {
    WBRAM_12_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_12_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_3_address0() {
    WBRAM_12_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_12_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_4_address0() {
    WBRAM_12_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_5_address0() {
    WBRAM_12_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_6_address0() {
    WBRAM_12_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_7_address0() {
    WBRAM_12_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_12_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_8_address0() {
    WBRAM_12_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_11_i_reg_15764_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_12_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_12_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_12_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_0_address0() {
    WBRAM_13_0_0_address0 =  (sc_lv<10>) (tmp_157_12_i_fu_9513_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_13_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_1_address0() {
    WBRAM_13_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_13_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_2_address0() {
    WBRAM_13_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_13_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_3_address0() {
    WBRAM_13_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_13_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_4_address0() {
    WBRAM_13_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_5_address0() {
    WBRAM_13_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_6_address0() {
    WBRAM_13_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_7_address0() {
    WBRAM_13_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_8_address0() {
    WBRAM_13_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_0_address0() {
    WBRAM_13_1_0_address0 =  (sc_lv<10>) (tmp_157_12_i_fu_9513_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_13_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_1_address0() {
    WBRAM_13_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_13_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_2_address0() {
    WBRAM_13_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_13_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_3_address0() {
    WBRAM_13_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_13_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_4_address0() {
    WBRAM_13_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_5_address0() {
    WBRAM_13_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_6_address0() {
    WBRAM_13_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_7_address0() {
    WBRAM_13_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_8_address0() {
    WBRAM_13_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_0_address0() {
    WBRAM_13_2_0_address0 =  (sc_lv<10>) (tmp_157_12_i_fu_9513_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_13_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_1_address0() {
    WBRAM_13_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_13_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_2_address0() {
    WBRAM_13_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_13_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_3_address0() {
    WBRAM_13_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_13_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_4_address0() {
    WBRAM_13_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_5_address0() {
    WBRAM_13_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_6_address0() {
    WBRAM_13_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_7_address0() {
    WBRAM_13_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_13_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_8_address0() {
    WBRAM_13_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_12_i_reg_15835_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_13_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_13_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_13_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_0_address0() {
    WBRAM_14_0_0_address0 =  (sc_lv<10>) (tmp_157_13_i_fu_9614_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_14_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_1_address0() {
    WBRAM_14_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_14_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_2_address0() {
    WBRAM_14_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_14_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_3_address0() {
    WBRAM_14_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_14_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_4_address0() {
    WBRAM_14_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_5_address0() {
    WBRAM_14_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_6_address0() {
    WBRAM_14_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_7_address0() {
    WBRAM_14_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_8_address0() {
    WBRAM_14_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_0_address0() {
    WBRAM_14_1_0_address0 =  (sc_lv<10>) (tmp_157_13_i_fu_9614_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_14_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_1_address0() {
    WBRAM_14_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_14_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_2_address0() {
    WBRAM_14_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_14_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_3_address0() {
    WBRAM_14_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_14_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_4_address0() {
    WBRAM_14_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_5_address0() {
    WBRAM_14_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_6_address0() {
    WBRAM_14_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_7_address0() {
    WBRAM_14_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_8_address0() {
    WBRAM_14_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_0_address0() {
    WBRAM_14_2_0_address0 =  (sc_lv<10>) (tmp_157_13_i_fu_9614_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_14_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_1_address0() {
    WBRAM_14_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_14_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_2_address0() {
    WBRAM_14_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_14_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_3_address0() {
    WBRAM_14_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_14_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_4_address0() {
    WBRAM_14_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_5_address0() {
    WBRAM_14_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_6_address0() {
    WBRAM_14_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_7_address0() {
    WBRAM_14_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_14_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_8_address0() {
    WBRAM_14_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_13_i_reg_15906_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_14_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_14_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_14_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_0_address0() {
    WBRAM_15_0_0_address0 =  (sc_lv<10>) (tmp_157_14_i_fu_9715_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_15_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_1_address0() {
    WBRAM_15_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_15_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_2_address0() {
    WBRAM_15_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_15_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_3_address0() {
    WBRAM_15_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_15_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_4_address0() {
    WBRAM_15_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_5_address0() {
    WBRAM_15_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_6_address0() {
    WBRAM_15_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_7_address0() {
    WBRAM_15_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_8_address0() {
    WBRAM_15_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_0_address0() {
    WBRAM_15_1_0_address0 =  (sc_lv<10>) (tmp_157_14_i_fu_9715_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_15_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_1_address0() {
    WBRAM_15_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_15_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_2_address0() {
    WBRAM_15_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_15_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_3_address0() {
    WBRAM_15_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_15_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_4_address0() {
    WBRAM_15_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_5_address0() {
    WBRAM_15_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_6_address0() {
    WBRAM_15_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_7_address0() {
    WBRAM_15_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_8_address0() {
    WBRAM_15_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_0_address0() {
    WBRAM_15_2_0_address0 =  (sc_lv<10>) (tmp_157_14_i_fu_9715_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_15_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_1_address0() {
    WBRAM_15_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_15_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_2_address0() {
    WBRAM_15_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_15_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_3_address0() {
    WBRAM_15_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_15_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_4_address0() {
    WBRAM_15_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_5_address0() {
    WBRAM_15_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_6_address0() {
    WBRAM_15_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_7_address0() {
    WBRAM_15_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_15_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_8_address0() {
    WBRAM_15_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_14_i_reg_15977_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_15_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_15_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_15_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_0_address0() {
    WBRAM_1_0_0_address0 =  (sc_lv<10>) (tmp_157_1_i_fu_8301_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_1_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_1_address0() {
    WBRAM_1_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_1_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_2_address0() {
    WBRAM_1_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_1_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_3_address0() {
    WBRAM_1_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_1_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_4_address0() {
    WBRAM_1_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_5_address0() {
    WBRAM_1_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_6_address0() {
    WBRAM_1_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_7_address0() {
    WBRAM_1_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_8_address0() {
    WBRAM_1_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_0_address0() {
    WBRAM_1_1_0_address0 =  (sc_lv<10>) (tmp_157_1_i_fu_8301_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_1_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_1_address0() {
    WBRAM_1_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_1_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_2_address0() {
    WBRAM_1_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_1_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_3_address0() {
    WBRAM_1_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_1_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_4_address0() {
    WBRAM_1_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_5_address0() {
    WBRAM_1_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_6_address0() {
    WBRAM_1_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_7_address0() {
    WBRAM_1_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_8_address0() {
    WBRAM_1_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_0_address0() {
    WBRAM_1_2_0_address0 =  (sc_lv<10>) (tmp_157_1_i_fu_8301_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_1_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_1_address0() {
    WBRAM_1_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_1_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_2_address0() {
    WBRAM_1_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_1_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_3_address0() {
    WBRAM_1_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_1_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_4_address0() {
    WBRAM_1_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_5_address0() {
    WBRAM_1_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_6_address0() {
    WBRAM_1_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_7_address0() {
    WBRAM_1_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_1_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_8_address0() {
    WBRAM_1_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_1_i_reg_14983_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_1_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_1_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_1_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_0_address0() {
    WBRAM_2_0_0_address0 =  (sc_lv<10>) (tmp_157_2_i_fu_8402_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_2_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_1_address0() {
    WBRAM_2_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_2_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_2_address0() {
    WBRAM_2_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_2_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_3_address0() {
    WBRAM_2_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_2_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_4_address0() {
    WBRAM_2_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_5_address0() {
    WBRAM_2_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_6_address0() {
    WBRAM_2_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_7_address0() {
    WBRAM_2_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_8_address0() {
    WBRAM_2_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_0_address0() {
    WBRAM_2_1_0_address0 =  (sc_lv<10>) (tmp_157_2_i_fu_8402_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_2_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_1_address0() {
    WBRAM_2_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_2_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_2_address0() {
    WBRAM_2_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_2_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_3_address0() {
    WBRAM_2_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_2_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_4_address0() {
    WBRAM_2_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_5_address0() {
    WBRAM_2_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_6_address0() {
    WBRAM_2_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_7_address0() {
    WBRAM_2_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_8_address0() {
    WBRAM_2_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_0_address0() {
    WBRAM_2_2_0_address0 =  (sc_lv<10>) (tmp_157_2_i_fu_8402_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_2_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_1_address0() {
    WBRAM_2_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_2_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_2_address0() {
    WBRAM_2_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_2_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_3_address0() {
    WBRAM_2_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_2_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_4_address0() {
    WBRAM_2_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_5_address0() {
    WBRAM_2_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_6_address0() {
    WBRAM_2_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_7_address0() {
    WBRAM_2_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_2_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_8_address0() {
    WBRAM_2_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_2_i_reg_15054_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_2_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_2_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_2_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_0_address0() {
    WBRAM_3_0_0_address0 =  (sc_lv<10>) (tmp_157_3_i_fu_8503_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_3_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_1_address0() {
    WBRAM_3_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_3_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_2_address0() {
    WBRAM_3_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_3_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_3_address0() {
    WBRAM_3_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_3_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_4_address0() {
    WBRAM_3_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_5_address0() {
    WBRAM_3_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_6_address0() {
    WBRAM_3_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_7_address0() {
    WBRAM_3_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_8_address0() {
    WBRAM_3_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_0_address0() {
    WBRAM_3_1_0_address0 =  (sc_lv<10>) (tmp_157_3_i_fu_8503_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_3_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_1_address0() {
    WBRAM_3_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_3_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_2_address0() {
    WBRAM_3_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_3_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_3_address0() {
    WBRAM_3_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_3_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_4_address0() {
    WBRAM_3_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_5_address0() {
    WBRAM_3_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_6_address0() {
    WBRAM_3_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_7_address0() {
    WBRAM_3_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_8_address0() {
    WBRAM_3_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_0_address0() {
    WBRAM_3_2_0_address0 =  (sc_lv<10>) (tmp_157_3_i_fu_8503_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_3_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_1_address0() {
    WBRAM_3_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_3_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_2_address0() {
    WBRAM_3_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_3_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_3_address0() {
    WBRAM_3_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_3_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_4_address0() {
    WBRAM_3_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_5_address0() {
    WBRAM_3_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_6_address0() {
    WBRAM_3_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_7_address0() {
    WBRAM_3_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_3_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_8_address0() {
    WBRAM_3_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_3_i_reg_15125_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_3_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_3_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_3_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_0_address0() {
    WBRAM_4_0_0_address0 =  (sc_lv<10>) (tmp_157_4_i_fu_8604_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_4_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_1_address0() {
    WBRAM_4_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_4_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_2_address0() {
    WBRAM_4_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_4_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_3_address0() {
    WBRAM_4_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_4_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_4_address0() {
    WBRAM_4_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_5_address0() {
    WBRAM_4_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_6_address0() {
    WBRAM_4_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_7_address0() {
    WBRAM_4_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_8_address0() {
    WBRAM_4_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_0_address0() {
    WBRAM_4_1_0_address0 =  (sc_lv<10>) (tmp_157_4_i_fu_8604_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_4_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_1_address0() {
    WBRAM_4_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_4_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_2_address0() {
    WBRAM_4_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_4_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_3_address0() {
    WBRAM_4_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_4_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_4_address0() {
    WBRAM_4_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_5_address0() {
    WBRAM_4_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_6_address0() {
    WBRAM_4_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_7_address0() {
    WBRAM_4_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_8_address0() {
    WBRAM_4_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_0_address0() {
    WBRAM_4_2_0_address0 =  (sc_lv<10>) (tmp_157_4_i_fu_8604_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_4_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_1_address0() {
    WBRAM_4_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_4_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_2_address0() {
    WBRAM_4_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_4_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_3_address0() {
    WBRAM_4_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_4_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_4_address0() {
    WBRAM_4_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_5_address0() {
    WBRAM_4_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_6_address0() {
    WBRAM_4_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_7_address0() {
    WBRAM_4_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_4_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_8_address0() {
    WBRAM_4_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_4_i_reg_15196_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_4_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_4_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_4_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_0_address0() {
    WBRAM_5_0_0_address0 =  (sc_lv<10>) (tmp_157_5_i_fu_8705_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_5_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_1_address0() {
    WBRAM_5_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_5_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_2_address0() {
    WBRAM_5_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_5_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_3_address0() {
    WBRAM_5_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_5_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_4_address0() {
    WBRAM_5_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_5_address0() {
    WBRAM_5_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_6_address0() {
    WBRAM_5_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_7_address0() {
    WBRAM_5_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_8_address0() {
    WBRAM_5_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_0_address0() {
    WBRAM_5_1_0_address0 =  (sc_lv<10>) (tmp_157_5_i_fu_8705_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_5_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_1_address0() {
    WBRAM_5_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_5_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_2_address0() {
    WBRAM_5_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_5_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_3_address0() {
    WBRAM_5_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_5_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_4_address0() {
    WBRAM_5_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_5_address0() {
    WBRAM_5_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_6_address0() {
    WBRAM_5_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_7_address0() {
    WBRAM_5_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_8_address0() {
    WBRAM_5_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_0_address0() {
    WBRAM_5_2_0_address0 =  (sc_lv<10>) (tmp_157_5_i_fu_8705_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_5_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_1_address0() {
    WBRAM_5_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_5_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_2_address0() {
    WBRAM_5_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_5_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_3_address0() {
    WBRAM_5_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_5_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_4_address0() {
    WBRAM_5_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_5_address0() {
    WBRAM_5_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_6_address0() {
    WBRAM_5_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_7_address0() {
    WBRAM_5_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_5_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_8_address0() {
    WBRAM_5_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_5_i_reg_15267_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_5_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_5_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_5_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_0_address0() {
    WBRAM_6_0_0_address0 =  (sc_lv<10>) (tmp_157_6_i_fu_8806_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_6_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_1_address0() {
    WBRAM_6_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_6_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_2_address0() {
    WBRAM_6_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_6_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_3_address0() {
    WBRAM_6_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_6_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_4_address0() {
    WBRAM_6_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_5_address0() {
    WBRAM_6_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_6_address0() {
    WBRAM_6_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_7_address0() {
    WBRAM_6_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_8_address0() {
    WBRAM_6_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_0_address0() {
    WBRAM_6_1_0_address0 =  (sc_lv<10>) (tmp_157_6_i_fu_8806_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_6_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_1_address0() {
    WBRAM_6_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_6_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_2_address0() {
    WBRAM_6_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_6_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_3_address0() {
    WBRAM_6_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_6_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_4_address0() {
    WBRAM_6_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_5_address0() {
    WBRAM_6_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_6_address0() {
    WBRAM_6_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_7_address0() {
    WBRAM_6_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_8_address0() {
    WBRAM_6_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_0_address0() {
    WBRAM_6_2_0_address0 =  (sc_lv<10>) (tmp_157_6_i_fu_8806_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_6_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_1_address0() {
    WBRAM_6_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_6_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_2_address0() {
    WBRAM_6_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_6_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_3_address0() {
    WBRAM_6_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_6_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_4_address0() {
    WBRAM_6_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_5_address0() {
    WBRAM_6_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_6_address0() {
    WBRAM_6_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_7_address0() {
    WBRAM_6_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_6_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_8_address0() {
    WBRAM_6_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_6_i_reg_15338_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_6_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_6_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_6_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_0_address0() {
    WBRAM_7_0_0_address0 =  (sc_lv<10>) (tmp_157_7_i_fu_8907_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_7_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_1_address0() {
    WBRAM_7_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_7_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_2_address0() {
    WBRAM_7_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_7_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_3_address0() {
    WBRAM_7_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_7_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_4_address0() {
    WBRAM_7_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_5_address0() {
    WBRAM_7_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_6_address0() {
    WBRAM_7_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_7_address0() {
    WBRAM_7_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_8_address0() {
    WBRAM_7_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_0_address0() {
    WBRAM_7_1_0_address0 =  (sc_lv<10>) (tmp_157_7_i_fu_8907_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_7_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_1_address0() {
    WBRAM_7_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_7_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_2_address0() {
    WBRAM_7_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_7_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_3_address0() {
    WBRAM_7_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_7_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_4_address0() {
    WBRAM_7_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_5_address0() {
    WBRAM_7_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_6_address0() {
    WBRAM_7_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_7_address0() {
    WBRAM_7_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_8_address0() {
    WBRAM_7_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_0_address0() {
    WBRAM_7_2_0_address0 =  (sc_lv<10>) (tmp_157_7_i_fu_8907_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_7_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_1_address0() {
    WBRAM_7_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_7_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_2_address0() {
    WBRAM_7_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_7_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_3_address0() {
    WBRAM_7_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_7_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_4_address0() {
    WBRAM_7_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_5_address0() {
    WBRAM_7_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_6_address0() {
    WBRAM_7_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_7_address0() {
    WBRAM_7_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_7_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_8_address0() {
    WBRAM_7_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_7_i_reg_15409_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_7_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_7_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_7_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_0_address0() {
    WBRAM_8_0_0_address0 =  (sc_lv<10>) (tmp_157_8_i_fu_9008_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_8_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_1_address0() {
    WBRAM_8_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_8_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_2_address0() {
    WBRAM_8_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_8_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_3_address0() {
    WBRAM_8_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_8_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_4_address0() {
    WBRAM_8_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_5_address0() {
    WBRAM_8_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_6_address0() {
    WBRAM_8_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_7_address0() {
    WBRAM_8_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_8_address0() {
    WBRAM_8_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_0_address0() {
    WBRAM_8_1_0_address0 =  (sc_lv<10>) (tmp_157_8_i_fu_9008_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_8_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_1_address0() {
    WBRAM_8_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_8_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_2_address0() {
    WBRAM_8_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_8_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_3_address0() {
    WBRAM_8_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_8_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_4_address0() {
    WBRAM_8_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_5_address0() {
    WBRAM_8_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_6_address0() {
    WBRAM_8_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_7_address0() {
    WBRAM_8_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_8_address0() {
    WBRAM_8_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_0_address0() {
    WBRAM_8_2_0_address0 =  (sc_lv<10>) (tmp_157_8_i_fu_9008_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_8_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_1_address0() {
    WBRAM_8_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_8_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_2_address0() {
    WBRAM_8_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_8_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_3_address0() {
    WBRAM_8_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_8_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_4_address0() {
    WBRAM_8_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_5_address0() {
    WBRAM_8_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_6_address0() {
    WBRAM_8_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_7_address0() {
    WBRAM_8_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_8_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_8_address0() {
    WBRAM_8_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_8_i_reg_15480_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_8_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_8_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_8_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_0_address0() {
    WBRAM_9_0_0_address0 =  (sc_lv<10>) (tmp_157_9_i_fu_9109_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_9_0_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_1_address0() {
    WBRAM_9_0_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_9_0_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_2_address0() {
    WBRAM_9_0_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_9_0_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_3_address0() {
    WBRAM_9_0_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_9_0_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_4_address0() {
    WBRAM_9_0_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_0_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_5_address0() {
    WBRAM_9_0_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_0_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_6_address0() {
    WBRAM_9_0_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_0_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_7_address0() {
    WBRAM_9_0_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_0_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_8_address0() {
    WBRAM_9_0_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_0_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_0_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_0_address0() {
    WBRAM_9_1_0_address0 =  (sc_lv<10>) (tmp_157_9_i_fu_9109_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_9_1_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_1_address0() {
    WBRAM_9_1_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_9_1_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_2_address0() {
    WBRAM_9_1_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_9_1_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_3_address0() {
    WBRAM_9_1_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_9_1_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_4_address0() {
    WBRAM_9_1_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_1_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_5_address0() {
    WBRAM_9_1_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_1_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_6_address0() {
    WBRAM_9_1_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_1_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_7_address0() {
    WBRAM_9_1_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_1_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_8_address0() {
    WBRAM_9_1_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_1_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_1_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_0_address0() {
    WBRAM_9_2_0_address0 =  (sc_lv<10>) (tmp_157_9_i_fu_9109_p1.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        WBRAM_9_2_0_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_0_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_1_address0() {
    WBRAM_9_2_1_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it4.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()))) {
        WBRAM_9_2_1_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_1_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_2_address0() {
    WBRAM_9_2_2_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it9.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        WBRAM_9_2_2_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_2_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_3_address0() {
    WBRAM_9_2_3_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it14.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()))) {
        WBRAM_9_2_3_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_3_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_4_address0() {
    WBRAM_9_2_4_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_2_4_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_4_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_5_address0() {
    WBRAM_9_2_5_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_2_5_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_5_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_6_address0() {
    WBRAM_9_2_6_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_2_6_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_6_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_7_address0() {
    WBRAM_9_2_7_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it13.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        WBRAM_9_2_7_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_7_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_8_address0() {
    WBRAM_9_2_8_address0 =  (sc_lv<10>) (ap_reg_ppstg_tmp_157_9_i_reg_15551_pp0_it15.read());
}

void fpga_top_processAllCHout1::thread_WBRAM_9_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()))) {
        WBRAM_9_2_8_ce0 = ap_const_logic_1;
    } else {
        WBRAM_9_2_8_ce0 = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st64_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st64_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fpga_top_processAllCHout1::thread_ap_sig_bdd_18685() {
    ap_sig_bdd_18685 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void fpga_top_processAllCHout1::thread_ap_sig_bdd_18766() {
    ap_sig_bdd_18766 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0));
}

void fpga_top_processAllCHout1::thread_ap_sig_bdd_18768() {
    ap_sig_bdd_18768 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()));
}

void fpga_top_processAllCHout1::thread_ap_sig_bdd_18769() {
    ap_sig_bdd_18769 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()));
}

void fpga_top_processAllCHout1::thread_ap_sig_bdd_18770() {
    ap_sig_bdd_18770 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it53.read()) && esl_seteq<1,1,1>(ap_reg_ppstg_exitcond_i_reg_14624_pp0_it52.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_1_i_reg_14955_pp0_it52.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_2_i_reg_15026_pp0_it52.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond_3_i_reg_15097_pp0_it52.read()));
}

}

