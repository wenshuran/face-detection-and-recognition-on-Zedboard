#include "fpga_top_processInputChannel_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void fpga_top_processInputChannel_0::thread_ap_clk_no_reset_() {
    ap_CS = ap_const_logic_0;
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_procdone_fpga_top_preloadPixelsAndPrecalcCIoffse_U0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_hs_done.read())) {
            ap_reg_procdone_fpga_top_preloadPixelsAndPrecalcCIoffse_U0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1)) {
            ap_reg_procdone_fpga_top_preloadPixelsAndPrecalcCIoffse_U0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_procdone_fpga_top_processAllCHout1_U0 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_hs_done.read())) {
            ap_reg_procdone_fpga_top_processAllCHout1_U0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, fpga_top_processAllCHout1_U0_ap_done.read())) {
            ap_reg_procdone_fpga_top_processAllCHout1_U0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_ci_offset_V_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_ci_offset_V_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ci_offset_V_full_n.read()))) {
            ap_reg_ready_ci_offset_V_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_ready = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_top_allready.read()))) {
            ap_reg_ready_fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_ready = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_ready.read(), ap_const_logic_1)) {
            ap_reg_ready_fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_ready = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_fpga_top_processAllCHout1_U0_ap_ready = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_top_allready.read()))) {
            ap_reg_ready_fpga_top_processAllCHout1_U0_ap_ready = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, fpga_top_processAllCHout1_U0_ap_ready.read())) {
            ap_reg_ready_fpga_top_processAllCHout1_U0_ap_ready = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_0_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_0_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_0_full_n.read()))) {
            ap_reg_ready_pixel_buffer_0_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_1_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_1_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_1_full_n.read()))) {
            ap_reg_ready_pixel_buffer_1_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_2_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_2_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_2_full_n.read()))) {
            ap_reg_ready_pixel_buffer_2_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_3_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_3_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_3_full_n.read()))) {
            ap_reg_ready_pixel_buffer_3_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_4_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_4_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_4_full_n.read()))) {
            ap_reg_ready_pixel_buffer_4_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_5_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_5_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_5_full_n.read()))) {
            ap_reg_ready_pixel_buffer_5_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_6_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_6_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_6_full_n.read()))) {
            ap_reg_ready_pixel_buffer_6_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_7_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_7_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_7_full_n.read()))) {
            ap_reg_ready_pixel_buffer_7_full_n = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ready_pixel_buffer_8_full_n = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
             esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_continue.read(), ap_const_logic_1))) {
            ap_reg_ready_pixel_buffer_8_full_n = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(fpga_top_preloadPixelsAndPrecalcCIoffse_U0_ap_done.read(), ap_const_logic_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, pixel_buffer_8_full_n.read()))) {
            ap_reg_ready_pixel_buffer_8_full_n = ap_const_logic_1;
        }
    }
}

}

