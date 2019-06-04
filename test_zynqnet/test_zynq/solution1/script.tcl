############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project test_zynq
set_top fpga_top
add_files ../zynqnet-master/_HLS_CODE/vivado_include/LICENSE-2_0.txt
add_files ../zynqnet-master/_HLS_CODE/README.md
add_files ../zynqnet-master/_HLS_CODE/vivado_include/ap_fixed.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/etc/ap_fixed_sim.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/ap_int.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/etc/ap_int_sim.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/etc/ap_private.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/ap_shift_reg.h
add_files ../zynqnet-master/_HLS_CODE/vivado_include/ap_utils.h
add_files ../zynqnet-master/_HLS_CODE/fpga_top.cpp
add_files ../zynqnet-master/_HLS_CODE/fpga_top.hpp
add_files ../zynqnet-master/_HLS_CODE/gpool_cache.cpp
add_files ../zynqnet-master/_HLS_CODE/gpool_cache.hpp
add_files ../zynqnet-master/_HLS_CODE/vivado_include/hls_stream.h
add_files ../zynqnet-master/_HLS_CODE/image_cache.cpp
add_files ../zynqnet-master/_HLS_CODE/image_cache.hpp
add_files ../zynqnet-master/_HLS_CODE/indata.bin
add_files ../zynqnet-master/_HLS_CODE/memory_controller.cpp
add_files ../zynqnet-master/_HLS_CODE/memory_controller.hpp
add_files ../zynqnet-master/_HLS_CODE/netconfig.cpp
add_files ../zynqnet-master/_HLS_CODE/netconfig.hpp
add_files ../zynqnet-master/_HLS_CODE/network.cpp
add_files ../zynqnet-master/_HLS_CODE/network.hpp
add_files ../zynqnet-master/_HLS_CODE/output_cache.cpp
add_files ../zynqnet-master/_HLS_CODE/output_cache.hpp
add_files ../zynqnet-master/_HLS_CODE/processing_element.cpp
add_files ../zynqnet-master/_HLS_CODE/processing_element.hpp
add_files ../zynqnet-master/_HLS_CODE/unittests.cpp
add_files ../zynqnet-master/_HLS_CODE/unittests.hpp
add_files ../zynqnet-master/_HLS_CODE/weights.bin
add_files ../zynqnet-master/_HLS_CODE/weights_cache.cpp
add_files ../zynqnet-master/_HLS_CODE/weights_cache.hpp
add_files -tb ../zynqnet-master/_HLS_CODE/cpu_top.cpp
add_files -tb ../zynqnet-master/_HLS_CODE/cpu_top.hpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./test_zynq/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
