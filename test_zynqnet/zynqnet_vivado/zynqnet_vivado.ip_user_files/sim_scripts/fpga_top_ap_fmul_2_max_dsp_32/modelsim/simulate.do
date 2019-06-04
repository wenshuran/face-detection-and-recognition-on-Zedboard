onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -L secureip -L xbip_utils_v3_0_5 -L axi_utils_v2_0_1 -L xbip_pipe_v3_0_1 -L xbip_dsp48_wrapper_v3_0_4 -L xbip_dsp48_addsub_v3_0_1 -L xbip_dsp48_multadd_v3_0_1 -L xbip_bram18k_v3_0_1 -L mult_gen_v12_0_10 -L floating_point_v7_1_1 -L xil_defaultlib -lib xil_defaultlib xil_defaultlib.fpga_top_ap_fmul_2_max_dsp_32

do {wave.do}

view wave
view structure
view signals

do {fpga_top_ap_fmul_2_max_dsp_32.udo}

run -all

quit -force
