# 
# Synthesis run script generated by Vivado
# 

set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
create_project -in_memory -part xc7z020clg484-1

set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.cache/wt [current_project]
set_property parent.project_path /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part em.avnet.com:zed:part0:1.3 [current_project]
set_property ip_repo_paths {
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_no_input
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_decode_v3
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_decode_v2
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_decode_stream
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_controller
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_debounce
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/stream_to_vga
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_controller
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_debounce
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/ov7670_decode_stream
  /home/wenshuran/Desktop/ov7670_VDMA_VGA-master/ip_repo/stream_to_vga
} [current_project]
set_property vhdl_version vhdl_2k [current_fileset]
add_files /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/system.bd
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_xbar_0/system_xbar_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_mm2s_0/system_fifo_mm2s_0/system_fifo_mm2s_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_mm2s_0/system_fifo_mm2s_0/system_fifo_mm2s_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_mm2s_0/system_fifo_mm2s_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_s2mm_0/system_fifo_s2mm_0/system_fifo_s2mm_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_s2mm_0/system_fifo_s2mm_0/system_fifo_s2mm_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_fifo_s2mm_0/system_fifo_s2mm_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_processing_system7_0_0/system_processing_system7_0_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_ov7670_pclk_0/system_rst_ov7670_pclk_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_ov7670_pclk_0/system_rst_ov7670_pclk_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_ov7670_pclk_0/system_rst_ov7670_pclk_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_processing_system7_0_100M_0/system_rst_processing_system7_0_100M_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_vga_clk25_0/system_rst_vga_clk25_0_board.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_vga_clk25_0/system_rst_vga_clk25_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_rst_vga_clk25_0/system_rst_vga_clk25_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_mm2s_0/system_vdma_mm2s_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_mm2s_0/system_vdma_mm2s_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_mm2s_0/system_vdma_mm2s_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_s2mm_0/system_vdma_s2mm_0.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_s2mm_0/system_vdma_s2mm_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_vdma_s2mm_0/system_vdma_s2mm_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_ila_0_1/ila_v6_0/constraints/ila.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_ila_0_1/system_ila_0_1_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_cc_0/system_auto_cc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_cc_0/system_auto_cc_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_pc_0/system_auto_pc_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_pc_1/system_auto_pc_1_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_pc_2/system_auto_pc_2_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_us_0/system_auto_us_0_ooc.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/ip/system_auto_us_0/system_auto_us_0_clocks.xdc]
set_property used_in_implementation false [get_files -all /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/system_ooc.xdc]
set_property is_locked true [get_files /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/bd/system/system.bd]

read_verilog -library xil_defaultlib /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/sources_1/imports/hdl/system_wrapper.v
read_xdc /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/constrs_1/imports/xdc/zedboard_v1.xdc
set_property used_in_implementation false [get_files /home/wenshuran/hdcourse/ov7670_vga/ov7670_vga.srcs/constrs_1/imports/xdc/zedboard_v1.xdc]

read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
synth_design -top system_wrapper -part xc7z020clg484-1
write_checkpoint -noxdef system_wrapper.dcp
catch { report_utilization -file system_wrapper_utilization_synth.rpt -pb system_wrapper_utilization_synth.pb }
