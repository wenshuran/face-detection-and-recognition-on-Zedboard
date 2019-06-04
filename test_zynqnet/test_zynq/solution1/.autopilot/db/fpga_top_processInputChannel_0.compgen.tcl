# This script segment is generated automatically by AutoPilot

# FIFO definition:
set ID 927
set FifoName FIFO_fpga_top_processInputChannel_0_ci_in_V_channel
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 10
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 928
set FifoName FIFO_fpga_top_processInputChannel_0_ch_out_V_channel
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 1
set DataWd 10
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 929
set FifoName FIFO_fpga_top_processInputChannel_0_ci_offset_V
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 19
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 930
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_0
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 931
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_1
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 932
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_2
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 933
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_3
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 934
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_4
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 935
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_5
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 936
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_6
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 937
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_7
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 938
set FifoName FIFO_fpga_top_processInputChannel_0_pixel_buffer_8
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 947 \
    name ImageCache_IBRAM \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename ImageCache_IBRAM \
    op interface \
    ports { ImageCache_IBRAM_address0 { O 15 vector } ImageCache_IBRAM_ce0 { O 1 bit } ImageCache_IBRAM_d0 { O 32 vector } ImageCache_IBRAM_q0 { I 32 vector } ImageCache_IBRAM_we0 { O 1 bit } ImageCache_IBRAM_address1 { O 15 vector } ImageCache_IBRAM_ce1 { O 1 bit } ImageCache_IBRAM_d1 { O 32 vector } ImageCache_IBRAM_q1 { I 32 vector } ImageCache_IBRAM_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'ImageCache_IBRAM'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 949 \
    name OBRAM_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_0 \
    op interface \
    ports { OBRAM_0_address0 { O 5 vector } OBRAM_0_ce0 { O 1 bit } OBRAM_0_d0 { O 32 vector } OBRAM_0_q0 { I 32 vector } OBRAM_0_we0 { O 1 bit } OBRAM_0_address1 { O 5 vector } OBRAM_0_ce1 { O 1 bit } OBRAM_0_d1 { O 32 vector } OBRAM_0_q1 { I 32 vector } OBRAM_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 951 \
    name WBRAM_0_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_0 \
    op interface \
    ports { WBRAM_0_0_0_address0 { O 10 vector } WBRAM_0_0_0_ce0 { O 1 bit } WBRAM_0_0_0_d0 { O 32 vector } WBRAM_0_0_0_q0 { I 32 vector } WBRAM_0_0_0_we0 { O 1 bit } WBRAM_0_0_0_address1 { O 10 vector } WBRAM_0_0_0_ce1 { O 1 bit } WBRAM_0_0_0_d1 { O 32 vector } WBRAM_0_0_0_q1 { I 32 vector } WBRAM_0_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 952 \
    name WBRAM_0_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_0 \
    op interface \
    ports { WBRAM_0_1_0_address0 { O 10 vector } WBRAM_0_1_0_ce0 { O 1 bit } WBRAM_0_1_0_d0 { O 32 vector } WBRAM_0_1_0_q0 { I 32 vector } WBRAM_0_1_0_we0 { O 1 bit } WBRAM_0_1_0_address1 { O 10 vector } WBRAM_0_1_0_ce1 { O 1 bit } WBRAM_0_1_0_d1 { O 32 vector } WBRAM_0_1_0_q1 { I 32 vector } WBRAM_0_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 953 \
    name WBRAM_0_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_0 \
    op interface \
    ports { WBRAM_0_2_0_address0 { O 10 vector } WBRAM_0_2_0_ce0 { O 1 bit } WBRAM_0_2_0_d0 { O 32 vector } WBRAM_0_2_0_q0 { I 32 vector } WBRAM_0_2_0_we0 { O 1 bit } WBRAM_0_2_0_address1 { O 10 vector } WBRAM_0_2_0_ce1 { O 1 bit } WBRAM_0_2_0_d1 { O 32 vector } WBRAM_0_2_0_q1 { I 32 vector } WBRAM_0_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 954 \
    name WBRAM_0_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_1 \
    op interface \
    ports { WBRAM_0_0_1_address0 { O 10 vector } WBRAM_0_0_1_ce0 { O 1 bit } WBRAM_0_0_1_d0 { O 32 vector } WBRAM_0_0_1_q0 { I 32 vector } WBRAM_0_0_1_we0 { O 1 bit } WBRAM_0_0_1_address1 { O 10 vector } WBRAM_0_0_1_ce1 { O 1 bit } WBRAM_0_0_1_d1 { O 32 vector } WBRAM_0_0_1_q1 { I 32 vector } WBRAM_0_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 955 \
    name WBRAM_0_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_1 \
    op interface \
    ports { WBRAM_0_1_1_address0 { O 10 vector } WBRAM_0_1_1_ce0 { O 1 bit } WBRAM_0_1_1_d0 { O 32 vector } WBRAM_0_1_1_q0 { I 32 vector } WBRAM_0_1_1_we0 { O 1 bit } WBRAM_0_1_1_address1 { O 10 vector } WBRAM_0_1_1_ce1 { O 1 bit } WBRAM_0_1_1_d1 { O 32 vector } WBRAM_0_1_1_q1 { I 32 vector } WBRAM_0_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 956 \
    name WBRAM_0_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_1 \
    op interface \
    ports { WBRAM_0_2_1_address0 { O 10 vector } WBRAM_0_2_1_ce0 { O 1 bit } WBRAM_0_2_1_d0 { O 32 vector } WBRAM_0_2_1_q0 { I 32 vector } WBRAM_0_2_1_we0 { O 1 bit } WBRAM_0_2_1_address1 { O 10 vector } WBRAM_0_2_1_ce1 { O 1 bit } WBRAM_0_2_1_d1 { O 32 vector } WBRAM_0_2_1_q1 { I 32 vector } WBRAM_0_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 957 \
    name WBRAM_0_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_2 \
    op interface \
    ports { WBRAM_0_0_2_address0 { O 10 vector } WBRAM_0_0_2_ce0 { O 1 bit } WBRAM_0_0_2_d0 { O 32 vector } WBRAM_0_0_2_q0 { I 32 vector } WBRAM_0_0_2_we0 { O 1 bit } WBRAM_0_0_2_address1 { O 10 vector } WBRAM_0_0_2_ce1 { O 1 bit } WBRAM_0_0_2_d1 { O 32 vector } WBRAM_0_0_2_q1 { I 32 vector } WBRAM_0_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 958 \
    name WBRAM_0_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_2 \
    op interface \
    ports { WBRAM_0_1_2_address0 { O 10 vector } WBRAM_0_1_2_ce0 { O 1 bit } WBRAM_0_1_2_d0 { O 32 vector } WBRAM_0_1_2_q0 { I 32 vector } WBRAM_0_1_2_we0 { O 1 bit } WBRAM_0_1_2_address1 { O 10 vector } WBRAM_0_1_2_ce1 { O 1 bit } WBRAM_0_1_2_d1 { O 32 vector } WBRAM_0_1_2_q1 { I 32 vector } WBRAM_0_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 959 \
    name WBRAM_0_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_2 \
    op interface \
    ports { WBRAM_0_2_2_address0 { O 10 vector } WBRAM_0_2_2_ce0 { O 1 bit } WBRAM_0_2_2_d0 { O 32 vector } WBRAM_0_2_2_q0 { I 32 vector } WBRAM_0_2_2_we0 { O 1 bit } WBRAM_0_2_2_address1 { O 10 vector } WBRAM_0_2_2_ce1 { O 1 bit } WBRAM_0_2_2_d1 { O 32 vector } WBRAM_0_2_2_q1 { I 32 vector } WBRAM_0_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 960 \
    name WBRAM_0_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_3 \
    op interface \
    ports { WBRAM_0_0_3_address0 { O 10 vector } WBRAM_0_0_3_ce0 { O 1 bit } WBRAM_0_0_3_d0 { O 32 vector } WBRAM_0_0_3_q0 { I 32 vector } WBRAM_0_0_3_we0 { O 1 bit } WBRAM_0_0_3_address1 { O 10 vector } WBRAM_0_0_3_ce1 { O 1 bit } WBRAM_0_0_3_d1 { O 32 vector } WBRAM_0_0_3_q1 { I 32 vector } WBRAM_0_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 961 \
    name WBRAM_0_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_3 \
    op interface \
    ports { WBRAM_0_1_3_address0 { O 10 vector } WBRAM_0_1_3_ce0 { O 1 bit } WBRAM_0_1_3_d0 { O 32 vector } WBRAM_0_1_3_q0 { I 32 vector } WBRAM_0_1_3_we0 { O 1 bit } WBRAM_0_1_3_address1 { O 10 vector } WBRAM_0_1_3_ce1 { O 1 bit } WBRAM_0_1_3_d1 { O 32 vector } WBRAM_0_1_3_q1 { I 32 vector } WBRAM_0_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 962 \
    name WBRAM_0_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_3 \
    op interface \
    ports { WBRAM_0_2_3_address0 { O 10 vector } WBRAM_0_2_3_ce0 { O 1 bit } WBRAM_0_2_3_d0 { O 32 vector } WBRAM_0_2_3_q0 { I 32 vector } WBRAM_0_2_3_we0 { O 1 bit } WBRAM_0_2_3_address1 { O 10 vector } WBRAM_0_2_3_ce1 { O 1 bit } WBRAM_0_2_3_d1 { O 32 vector } WBRAM_0_2_3_q1 { I 32 vector } WBRAM_0_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 963 \
    name WBRAM_0_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_4 \
    op interface \
    ports { WBRAM_0_0_4_address0 { O 10 vector } WBRAM_0_0_4_ce0 { O 1 bit } WBRAM_0_0_4_d0 { O 32 vector } WBRAM_0_0_4_q0 { I 32 vector } WBRAM_0_0_4_we0 { O 1 bit } WBRAM_0_0_4_address1 { O 10 vector } WBRAM_0_0_4_ce1 { O 1 bit } WBRAM_0_0_4_d1 { O 32 vector } WBRAM_0_0_4_q1 { I 32 vector } WBRAM_0_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 964 \
    name WBRAM_0_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_4 \
    op interface \
    ports { WBRAM_0_1_4_address0 { O 10 vector } WBRAM_0_1_4_ce0 { O 1 bit } WBRAM_0_1_4_d0 { O 32 vector } WBRAM_0_1_4_q0 { I 32 vector } WBRAM_0_1_4_we0 { O 1 bit } WBRAM_0_1_4_address1 { O 10 vector } WBRAM_0_1_4_ce1 { O 1 bit } WBRAM_0_1_4_d1 { O 32 vector } WBRAM_0_1_4_q1 { I 32 vector } WBRAM_0_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 965 \
    name WBRAM_0_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_4 \
    op interface \
    ports { WBRAM_0_2_4_address0 { O 10 vector } WBRAM_0_2_4_ce0 { O 1 bit } WBRAM_0_2_4_d0 { O 32 vector } WBRAM_0_2_4_q0 { I 32 vector } WBRAM_0_2_4_we0 { O 1 bit } WBRAM_0_2_4_address1 { O 10 vector } WBRAM_0_2_4_ce1 { O 1 bit } WBRAM_0_2_4_d1 { O 32 vector } WBRAM_0_2_4_q1 { I 32 vector } WBRAM_0_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 966 \
    name WBRAM_0_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_5 \
    op interface \
    ports { WBRAM_0_0_5_address0 { O 10 vector } WBRAM_0_0_5_ce0 { O 1 bit } WBRAM_0_0_5_d0 { O 32 vector } WBRAM_0_0_5_q0 { I 32 vector } WBRAM_0_0_5_we0 { O 1 bit } WBRAM_0_0_5_address1 { O 10 vector } WBRAM_0_0_5_ce1 { O 1 bit } WBRAM_0_0_5_d1 { O 32 vector } WBRAM_0_0_5_q1 { I 32 vector } WBRAM_0_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 967 \
    name WBRAM_0_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_5 \
    op interface \
    ports { WBRAM_0_1_5_address0 { O 10 vector } WBRAM_0_1_5_ce0 { O 1 bit } WBRAM_0_1_5_d0 { O 32 vector } WBRAM_0_1_5_q0 { I 32 vector } WBRAM_0_1_5_we0 { O 1 bit } WBRAM_0_1_5_address1 { O 10 vector } WBRAM_0_1_5_ce1 { O 1 bit } WBRAM_0_1_5_d1 { O 32 vector } WBRAM_0_1_5_q1 { I 32 vector } WBRAM_0_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 968 \
    name WBRAM_0_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_5 \
    op interface \
    ports { WBRAM_0_2_5_address0 { O 10 vector } WBRAM_0_2_5_ce0 { O 1 bit } WBRAM_0_2_5_d0 { O 32 vector } WBRAM_0_2_5_q0 { I 32 vector } WBRAM_0_2_5_we0 { O 1 bit } WBRAM_0_2_5_address1 { O 10 vector } WBRAM_0_2_5_ce1 { O 1 bit } WBRAM_0_2_5_d1 { O 32 vector } WBRAM_0_2_5_q1 { I 32 vector } WBRAM_0_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 969 \
    name WBRAM_0_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_6 \
    op interface \
    ports { WBRAM_0_0_6_address0 { O 10 vector } WBRAM_0_0_6_ce0 { O 1 bit } WBRAM_0_0_6_d0 { O 32 vector } WBRAM_0_0_6_q0 { I 32 vector } WBRAM_0_0_6_we0 { O 1 bit } WBRAM_0_0_6_address1 { O 10 vector } WBRAM_0_0_6_ce1 { O 1 bit } WBRAM_0_0_6_d1 { O 32 vector } WBRAM_0_0_6_q1 { I 32 vector } WBRAM_0_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 970 \
    name WBRAM_0_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_6 \
    op interface \
    ports { WBRAM_0_1_6_address0 { O 10 vector } WBRAM_0_1_6_ce0 { O 1 bit } WBRAM_0_1_6_d0 { O 32 vector } WBRAM_0_1_6_q0 { I 32 vector } WBRAM_0_1_6_we0 { O 1 bit } WBRAM_0_1_6_address1 { O 10 vector } WBRAM_0_1_6_ce1 { O 1 bit } WBRAM_0_1_6_d1 { O 32 vector } WBRAM_0_1_6_q1 { I 32 vector } WBRAM_0_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 971 \
    name WBRAM_0_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_6 \
    op interface \
    ports { WBRAM_0_2_6_address0 { O 10 vector } WBRAM_0_2_6_ce0 { O 1 bit } WBRAM_0_2_6_d0 { O 32 vector } WBRAM_0_2_6_q0 { I 32 vector } WBRAM_0_2_6_we0 { O 1 bit } WBRAM_0_2_6_address1 { O 10 vector } WBRAM_0_2_6_ce1 { O 1 bit } WBRAM_0_2_6_d1 { O 32 vector } WBRAM_0_2_6_q1 { I 32 vector } WBRAM_0_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 972 \
    name WBRAM_0_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_7 \
    op interface \
    ports { WBRAM_0_0_7_address0 { O 10 vector } WBRAM_0_0_7_ce0 { O 1 bit } WBRAM_0_0_7_d0 { O 32 vector } WBRAM_0_0_7_q0 { I 32 vector } WBRAM_0_0_7_we0 { O 1 bit } WBRAM_0_0_7_address1 { O 10 vector } WBRAM_0_0_7_ce1 { O 1 bit } WBRAM_0_0_7_d1 { O 32 vector } WBRAM_0_0_7_q1 { I 32 vector } WBRAM_0_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 973 \
    name WBRAM_0_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_7 \
    op interface \
    ports { WBRAM_0_1_7_address0 { O 10 vector } WBRAM_0_1_7_ce0 { O 1 bit } WBRAM_0_1_7_d0 { O 32 vector } WBRAM_0_1_7_q0 { I 32 vector } WBRAM_0_1_7_we0 { O 1 bit } WBRAM_0_1_7_address1 { O 10 vector } WBRAM_0_1_7_ce1 { O 1 bit } WBRAM_0_1_7_d1 { O 32 vector } WBRAM_0_1_7_q1 { I 32 vector } WBRAM_0_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 974 \
    name WBRAM_0_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_7 \
    op interface \
    ports { WBRAM_0_2_7_address0 { O 10 vector } WBRAM_0_2_7_ce0 { O 1 bit } WBRAM_0_2_7_d0 { O 32 vector } WBRAM_0_2_7_q0 { I 32 vector } WBRAM_0_2_7_we0 { O 1 bit } WBRAM_0_2_7_address1 { O 10 vector } WBRAM_0_2_7_ce1 { O 1 bit } WBRAM_0_2_7_d1 { O 32 vector } WBRAM_0_2_7_q1 { I 32 vector } WBRAM_0_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 975 \
    name WBRAM_0_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_8 \
    op interface \
    ports { WBRAM_0_0_8_address0 { O 10 vector } WBRAM_0_0_8_ce0 { O 1 bit } WBRAM_0_0_8_d0 { O 32 vector } WBRAM_0_0_8_q0 { I 32 vector } WBRAM_0_0_8_we0 { O 1 bit } WBRAM_0_0_8_address1 { O 10 vector } WBRAM_0_0_8_ce1 { O 1 bit } WBRAM_0_0_8_d1 { O 32 vector } WBRAM_0_0_8_q1 { I 32 vector } WBRAM_0_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 976 \
    name WBRAM_0_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_8 \
    op interface \
    ports { WBRAM_0_1_8_address0 { O 10 vector } WBRAM_0_1_8_ce0 { O 1 bit } WBRAM_0_1_8_d0 { O 32 vector } WBRAM_0_1_8_q0 { I 32 vector } WBRAM_0_1_8_we0 { O 1 bit } WBRAM_0_1_8_address1 { O 10 vector } WBRAM_0_1_8_ce1 { O 1 bit } WBRAM_0_1_8_d1 { O 32 vector } WBRAM_0_1_8_q1 { I 32 vector } WBRAM_0_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 977 \
    name WBRAM_0_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_8 \
    op interface \
    ports { WBRAM_0_2_8_address0 { O 10 vector } WBRAM_0_2_8_ce0 { O 1 bit } WBRAM_0_2_8_d0 { O 32 vector } WBRAM_0_2_8_q0 { I 32 vector } WBRAM_0_2_8_we0 { O 1 bit } WBRAM_0_2_8_address1 { O 10 vector } WBRAM_0_2_8_ce1 { O 1 bit } WBRAM_0_2_8_d1 { O 32 vector } WBRAM_0_2_8_q1 { I 32 vector } WBRAM_0_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 978 \
    name OBRAM_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_1 \
    op interface \
    ports { OBRAM_1_address0 { O 5 vector } OBRAM_1_ce0 { O 1 bit } OBRAM_1_d0 { O 32 vector } OBRAM_1_q0 { I 32 vector } OBRAM_1_we0 { O 1 bit } OBRAM_1_address1 { O 5 vector } OBRAM_1_ce1 { O 1 bit } OBRAM_1_d1 { O 32 vector } OBRAM_1_q1 { I 32 vector } OBRAM_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 979 \
    name WBRAM_1_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_0 \
    op interface \
    ports { WBRAM_1_0_0_address0 { O 10 vector } WBRAM_1_0_0_ce0 { O 1 bit } WBRAM_1_0_0_d0 { O 32 vector } WBRAM_1_0_0_q0 { I 32 vector } WBRAM_1_0_0_we0 { O 1 bit } WBRAM_1_0_0_address1 { O 10 vector } WBRAM_1_0_0_ce1 { O 1 bit } WBRAM_1_0_0_d1 { O 32 vector } WBRAM_1_0_0_q1 { I 32 vector } WBRAM_1_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 980 \
    name WBRAM_1_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_0 \
    op interface \
    ports { WBRAM_1_1_0_address0 { O 10 vector } WBRAM_1_1_0_ce0 { O 1 bit } WBRAM_1_1_0_d0 { O 32 vector } WBRAM_1_1_0_q0 { I 32 vector } WBRAM_1_1_0_we0 { O 1 bit } WBRAM_1_1_0_address1 { O 10 vector } WBRAM_1_1_0_ce1 { O 1 bit } WBRAM_1_1_0_d1 { O 32 vector } WBRAM_1_1_0_q1 { I 32 vector } WBRAM_1_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 981 \
    name WBRAM_1_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_0 \
    op interface \
    ports { WBRAM_1_2_0_address0 { O 10 vector } WBRAM_1_2_0_ce0 { O 1 bit } WBRAM_1_2_0_d0 { O 32 vector } WBRAM_1_2_0_q0 { I 32 vector } WBRAM_1_2_0_we0 { O 1 bit } WBRAM_1_2_0_address1 { O 10 vector } WBRAM_1_2_0_ce1 { O 1 bit } WBRAM_1_2_0_d1 { O 32 vector } WBRAM_1_2_0_q1 { I 32 vector } WBRAM_1_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 982 \
    name WBRAM_1_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_1 \
    op interface \
    ports { WBRAM_1_0_1_address0 { O 10 vector } WBRAM_1_0_1_ce0 { O 1 bit } WBRAM_1_0_1_d0 { O 32 vector } WBRAM_1_0_1_q0 { I 32 vector } WBRAM_1_0_1_we0 { O 1 bit } WBRAM_1_0_1_address1 { O 10 vector } WBRAM_1_0_1_ce1 { O 1 bit } WBRAM_1_0_1_d1 { O 32 vector } WBRAM_1_0_1_q1 { I 32 vector } WBRAM_1_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 983 \
    name WBRAM_1_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_1 \
    op interface \
    ports { WBRAM_1_1_1_address0 { O 10 vector } WBRAM_1_1_1_ce0 { O 1 bit } WBRAM_1_1_1_d0 { O 32 vector } WBRAM_1_1_1_q0 { I 32 vector } WBRAM_1_1_1_we0 { O 1 bit } WBRAM_1_1_1_address1 { O 10 vector } WBRAM_1_1_1_ce1 { O 1 bit } WBRAM_1_1_1_d1 { O 32 vector } WBRAM_1_1_1_q1 { I 32 vector } WBRAM_1_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 984 \
    name WBRAM_1_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_1 \
    op interface \
    ports { WBRAM_1_2_1_address0 { O 10 vector } WBRAM_1_2_1_ce0 { O 1 bit } WBRAM_1_2_1_d0 { O 32 vector } WBRAM_1_2_1_q0 { I 32 vector } WBRAM_1_2_1_we0 { O 1 bit } WBRAM_1_2_1_address1 { O 10 vector } WBRAM_1_2_1_ce1 { O 1 bit } WBRAM_1_2_1_d1 { O 32 vector } WBRAM_1_2_1_q1 { I 32 vector } WBRAM_1_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 985 \
    name WBRAM_1_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_2 \
    op interface \
    ports { WBRAM_1_0_2_address0 { O 10 vector } WBRAM_1_0_2_ce0 { O 1 bit } WBRAM_1_0_2_d0 { O 32 vector } WBRAM_1_0_2_q0 { I 32 vector } WBRAM_1_0_2_we0 { O 1 bit } WBRAM_1_0_2_address1 { O 10 vector } WBRAM_1_0_2_ce1 { O 1 bit } WBRAM_1_0_2_d1 { O 32 vector } WBRAM_1_0_2_q1 { I 32 vector } WBRAM_1_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 986 \
    name WBRAM_1_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_2 \
    op interface \
    ports { WBRAM_1_1_2_address0 { O 10 vector } WBRAM_1_1_2_ce0 { O 1 bit } WBRAM_1_1_2_d0 { O 32 vector } WBRAM_1_1_2_q0 { I 32 vector } WBRAM_1_1_2_we0 { O 1 bit } WBRAM_1_1_2_address1 { O 10 vector } WBRAM_1_1_2_ce1 { O 1 bit } WBRAM_1_1_2_d1 { O 32 vector } WBRAM_1_1_2_q1 { I 32 vector } WBRAM_1_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 987 \
    name WBRAM_1_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_2 \
    op interface \
    ports { WBRAM_1_2_2_address0 { O 10 vector } WBRAM_1_2_2_ce0 { O 1 bit } WBRAM_1_2_2_d0 { O 32 vector } WBRAM_1_2_2_q0 { I 32 vector } WBRAM_1_2_2_we0 { O 1 bit } WBRAM_1_2_2_address1 { O 10 vector } WBRAM_1_2_2_ce1 { O 1 bit } WBRAM_1_2_2_d1 { O 32 vector } WBRAM_1_2_2_q1 { I 32 vector } WBRAM_1_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 988 \
    name WBRAM_1_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_3 \
    op interface \
    ports { WBRAM_1_0_3_address0 { O 10 vector } WBRAM_1_0_3_ce0 { O 1 bit } WBRAM_1_0_3_d0 { O 32 vector } WBRAM_1_0_3_q0 { I 32 vector } WBRAM_1_0_3_we0 { O 1 bit } WBRAM_1_0_3_address1 { O 10 vector } WBRAM_1_0_3_ce1 { O 1 bit } WBRAM_1_0_3_d1 { O 32 vector } WBRAM_1_0_3_q1 { I 32 vector } WBRAM_1_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 989 \
    name WBRAM_1_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_3 \
    op interface \
    ports { WBRAM_1_1_3_address0 { O 10 vector } WBRAM_1_1_3_ce0 { O 1 bit } WBRAM_1_1_3_d0 { O 32 vector } WBRAM_1_1_3_q0 { I 32 vector } WBRAM_1_1_3_we0 { O 1 bit } WBRAM_1_1_3_address1 { O 10 vector } WBRAM_1_1_3_ce1 { O 1 bit } WBRAM_1_1_3_d1 { O 32 vector } WBRAM_1_1_3_q1 { I 32 vector } WBRAM_1_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 990 \
    name WBRAM_1_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_3 \
    op interface \
    ports { WBRAM_1_2_3_address0 { O 10 vector } WBRAM_1_2_3_ce0 { O 1 bit } WBRAM_1_2_3_d0 { O 32 vector } WBRAM_1_2_3_q0 { I 32 vector } WBRAM_1_2_3_we0 { O 1 bit } WBRAM_1_2_3_address1 { O 10 vector } WBRAM_1_2_3_ce1 { O 1 bit } WBRAM_1_2_3_d1 { O 32 vector } WBRAM_1_2_3_q1 { I 32 vector } WBRAM_1_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 991 \
    name WBRAM_1_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_4 \
    op interface \
    ports { WBRAM_1_0_4_address0 { O 10 vector } WBRAM_1_0_4_ce0 { O 1 bit } WBRAM_1_0_4_d0 { O 32 vector } WBRAM_1_0_4_q0 { I 32 vector } WBRAM_1_0_4_we0 { O 1 bit } WBRAM_1_0_4_address1 { O 10 vector } WBRAM_1_0_4_ce1 { O 1 bit } WBRAM_1_0_4_d1 { O 32 vector } WBRAM_1_0_4_q1 { I 32 vector } WBRAM_1_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 992 \
    name WBRAM_1_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_4 \
    op interface \
    ports { WBRAM_1_1_4_address0 { O 10 vector } WBRAM_1_1_4_ce0 { O 1 bit } WBRAM_1_1_4_d0 { O 32 vector } WBRAM_1_1_4_q0 { I 32 vector } WBRAM_1_1_4_we0 { O 1 bit } WBRAM_1_1_4_address1 { O 10 vector } WBRAM_1_1_4_ce1 { O 1 bit } WBRAM_1_1_4_d1 { O 32 vector } WBRAM_1_1_4_q1 { I 32 vector } WBRAM_1_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 993 \
    name WBRAM_1_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_4 \
    op interface \
    ports { WBRAM_1_2_4_address0 { O 10 vector } WBRAM_1_2_4_ce0 { O 1 bit } WBRAM_1_2_4_d0 { O 32 vector } WBRAM_1_2_4_q0 { I 32 vector } WBRAM_1_2_4_we0 { O 1 bit } WBRAM_1_2_4_address1 { O 10 vector } WBRAM_1_2_4_ce1 { O 1 bit } WBRAM_1_2_4_d1 { O 32 vector } WBRAM_1_2_4_q1 { I 32 vector } WBRAM_1_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 994 \
    name WBRAM_1_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_5 \
    op interface \
    ports { WBRAM_1_0_5_address0 { O 10 vector } WBRAM_1_0_5_ce0 { O 1 bit } WBRAM_1_0_5_d0 { O 32 vector } WBRAM_1_0_5_q0 { I 32 vector } WBRAM_1_0_5_we0 { O 1 bit } WBRAM_1_0_5_address1 { O 10 vector } WBRAM_1_0_5_ce1 { O 1 bit } WBRAM_1_0_5_d1 { O 32 vector } WBRAM_1_0_5_q1 { I 32 vector } WBRAM_1_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 995 \
    name WBRAM_1_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_5 \
    op interface \
    ports { WBRAM_1_1_5_address0 { O 10 vector } WBRAM_1_1_5_ce0 { O 1 bit } WBRAM_1_1_5_d0 { O 32 vector } WBRAM_1_1_5_q0 { I 32 vector } WBRAM_1_1_5_we0 { O 1 bit } WBRAM_1_1_5_address1 { O 10 vector } WBRAM_1_1_5_ce1 { O 1 bit } WBRAM_1_1_5_d1 { O 32 vector } WBRAM_1_1_5_q1 { I 32 vector } WBRAM_1_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 996 \
    name WBRAM_1_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_5 \
    op interface \
    ports { WBRAM_1_2_5_address0 { O 10 vector } WBRAM_1_2_5_ce0 { O 1 bit } WBRAM_1_2_5_d0 { O 32 vector } WBRAM_1_2_5_q0 { I 32 vector } WBRAM_1_2_5_we0 { O 1 bit } WBRAM_1_2_5_address1 { O 10 vector } WBRAM_1_2_5_ce1 { O 1 bit } WBRAM_1_2_5_d1 { O 32 vector } WBRAM_1_2_5_q1 { I 32 vector } WBRAM_1_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 997 \
    name WBRAM_1_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_6 \
    op interface \
    ports { WBRAM_1_0_6_address0 { O 10 vector } WBRAM_1_0_6_ce0 { O 1 bit } WBRAM_1_0_6_d0 { O 32 vector } WBRAM_1_0_6_q0 { I 32 vector } WBRAM_1_0_6_we0 { O 1 bit } WBRAM_1_0_6_address1 { O 10 vector } WBRAM_1_0_6_ce1 { O 1 bit } WBRAM_1_0_6_d1 { O 32 vector } WBRAM_1_0_6_q1 { I 32 vector } WBRAM_1_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 998 \
    name WBRAM_1_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_6 \
    op interface \
    ports { WBRAM_1_1_6_address0 { O 10 vector } WBRAM_1_1_6_ce0 { O 1 bit } WBRAM_1_1_6_d0 { O 32 vector } WBRAM_1_1_6_q0 { I 32 vector } WBRAM_1_1_6_we0 { O 1 bit } WBRAM_1_1_6_address1 { O 10 vector } WBRAM_1_1_6_ce1 { O 1 bit } WBRAM_1_1_6_d1 { O 32 vector } WBRAM_1_1_6_q1 { I 32 vector } WBRAM_1_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 999 \
    name WBRAM_1_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_6 \
    op interface \
    ports { WBRAM_1_2_6_address0 { O 10 vector } WBRAM_1_2_6_ce0 { O 1 bit } WBRAM_1_2_6_d0 { O 32 vector } WBRAM_1_2_6_q0 { I 32 vector } WBRAM_1_2_6_we0 { O 1 bit } WBRAM_1_2_6_address1 { O 10 vector } WBRAM_1_2_6_ce1 { O 1 bit } WBRAM_1_2_6_d1 { O 32 vector } WBRAM_1_2_6_q1 { I 32 vector } WBRAM_1_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1000 \
    name WBRAM_1_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_7 \
    op interface \
    ports { WBRAM_1_0_7_address0 { O 10 vector } WBRAM_1_0_7_ce0 { O 1 bit } WBRAM_1_0_7_d0 { O 32 vector } WBRAM_1_0_7_q0 { I 32 vector } WBRAM_1_0_7_we0 { O 1 bit } WBRAM_1_0_7_address1 { O 10 vector } WBRAM_1_0_7_ce1 { O 1 bit } WBRAM_1_0_7_d1 { O 32 vector } WBRAM_1_0_7_q1 { I 32 vector } WBRAM_1_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1001 \
    name WBRAM_1_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_7 \
    op interface \
    ports { WBRAM_1_1_7_address0 { O 10 vector } WBRAM_1_1_7_ce0 { O 1 bit } WBRAM_1_1_7_d0 { O 32 vector } WBRAM_1_1_7_q0 { I 32 vector } WBRAM_1_1_7_we0 { O 1 bit } WBRAM_1_1_7_address1 { O 10 vector } WBRAM_1_1_7_ce1 { O 1 bit } WBRAM_1_1_7_d1 { O 32 vector } WBRAM_1_1_7_q1 { I 32 vector } WBRAM_1_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1002 \
    name WBRAM_1_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_7 \
    op interface \
    ports { WBRAM_1_2_7_address0 { O 10 vector } WBRAM_1_2_7_ce0 { O 1 bit } WBRAM_1_2_7_d0 { O 32 vector } WBRAM_1_2_7_q0 { I 32 vector } WBRAM_1_2_7_we0 { O 1 bit } WBRAM_1_2_7_address1 { O 10 vector } WBRAM_1_2_7_ce1 { O 1 bit } WBRAM_1_2_7_d1 { O 32 vector } WBRAM_1_2_7_q1 { I 32 vector } WBRAM_1_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1003 \
    name WBRAM_1_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_8 \
    op interface \
    ports { WBRAM_1_0_8_address0 { O 10 vector } WBRAM_1_0_8_ce0 { O 1 bit } WBRAM_1_0_8_d0 { O 32 vector } WBRAM_1_0_8_q0 { I 32 vector } WBRAM_1_0_8_we0 { O 1 bit } WBRAM_1_0_8_address1 { O 10 vector } WBRAM_1_0_8_ce1 { O 1 bit } WBRAM_1_0_8_d1 { O 32 vector } WBRAM_1_0_8_q1 { I 32 vector } WBRAM_1_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1004 \
    name WBRAM_1_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_8 \
    op interface \
    ports { WBRAM_1_1_8_address0 { O 10 vector } WBRAM_1_1_8_ce0 { O 1 bit } WBRAM_1_1_8_d0 { O 32 vector } WBRAM_1_1_8_q0 { I 32 vector } WBRAM_1_1_8_we0 { O 1 bit } WBRAM_1_1_8_address1 { O 10 vector } WBRAM_1_1_8_ce1 { O 1 bit } WBRAM_1_1_8_d1 { O 32 vector } WBRAM_1_1_8_q1 { I 32 vector } WBRAM_1_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1005 \
    name WBRAM_1_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_8 \
    op interface \
    ports { WBRAM_1_2_8_address0 { O 10 vector } WBRAM_1_2_8_ce0 { O 1 bit } WBRAM_1_2_8_d0 { O 32 vector } WBRAM_1_2_8_q0 { I 32 vector } WBRAM_1_2_8_we0 { O 1 bit } WBRAM_1_2_8_address1 { O 10 vector } WBRAM_1_2_8_ce1 { O 1 bit } WBRAM_1_2_8_d1 { O 32 vector } WBRAM_1_2_8_q1 { I 32 vector } WBRAM_1_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1006 \
    name OBRAM_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_2 \
    op interface \
    ports { OBRAM_2_address0 { O 5 vector } OBRAM_2_ce0 { O 1 bit } OBRAM_2_d0 { O 32 vector } OBRAM_2_q0 { I 32 vector } OBRAM_2_we0 { O 1 bit } OBRAM_2_address1 { O 5 vector } OBRAM_2_ce1 { O 1 bit } OBRAM_2_d1 { O 32 vector } OBRAM_2_q1 { I 32 vector } OBRAM_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1007 \
    name WBRAM_2_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_0 \
    op interface \
    ports { WBRAM_2_0_0_address0 { O 10 vector } WBRAM_2_0_0_ce0 { O 1 bit } WBRAM_2_0_0_d0 { O 32 vector } WBRAM_2_0_0_q0 { I 32 vector } WBRAM_2_0_0_we0 { O 1 bit } WBRAM_2_0_0_address1 { O 10 vector } WBRAM_2_0_0_ce1 { O 1 bit } WBRAM_2_0_0_d1 { O 32 vector } WBRAM_2_0_0_q1 { I 32 vector } WBRAM_2_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1008 \
    name WBRAM_2_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_0 \
    op interface \
    ports { WBRAM_2_1_0_address0 { O 10 vector } WBRAM_2_1_0_ce0 { O 1 bit } WBRAM_2_1_0_d0 { O 32 vector } WBRAM_2_1_0_q0 { I 32 vector } WBRAM_2_1_0_we0 { O 1 bit } WBRAM_2_1_0_address1 { O 10 vector } WBRAM_2_1_0_ce1 { O 1 bit } WBRAM_2_1_0_d1 { O 32 vector } WBRAM_2_1_0_q1 { I 32 vector } WBRAM_2_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1009 \
    name WBRAM_2_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_0 \
    op interface \
    ports { WBRAM_2_2_0_address0 { O 10 vector } WBRAM_2_2_0_ce0 { O 1 bit } WBRAM_2_2_0_d0 { O 32 vector } WBRAM_2_2_0_q0 { I 32 vector } WBRAM_2_2_0_we0 { O 1 bit } WBRAM_2_2_0_address1 { O 10 vector } WBRAM_2_2_0_ce1 { O 1 bit } WBRAM_2_2_0_d1 { O 32 vector } WBRAM_2_2_0_q1 { I 32 vector } WBRAM_2_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1010 \
    name WBRAM_2_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_1 \
    op interface \
    ports { WBRAM_2_0_1_address0 { O 10 vector } WBRAM_2_0_1_ce0 { O 1 bit } WBRAM_2_0_1_d0 { O 32 vector } WBRAM_2_0_1_q0 { I 32 vector } WBRAM_2_0_1_we0 { O 1 bit } WBRAM_2_0_1_address1 { O 10 vector } WBRAM_2_0_1_ce1 { O 1 bit } WBRAM_2_0_1_d1 { O 32 vector } WBRAM_2_0_1_q1 { I 32 vector } WBRAM_2_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1011 \
    name WBRAM_2_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_1 \
    op interface \
    ports { WBRAM_2_1_1_address0 { O 10 vector } WBRAM_2_1_1_ce0 { O 1 bit } WBRAM_2_1_1_d0 { O 32 vector } WBRAM_2_1_1_q0 { I 32 vector } WBRAM_2_1_1_we0 { O 1 bit } WBRAM_2_1_1_address1 { O 10 vector } WBRAM_2_1_1_ce1 { O 1 bit } WBRAM_2_1_1_d1 { O 32 vector } WBRAM_2_1_1_q1 { I 32 vector } WBRAM_2_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1012 \
    name WBRAM_2_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_1 \
    op interface \
    ports { WBRAM_2_2_1_address0 { O 10 vector } WBRAM_2_2_1_ce0 { O 1 bit } WBRAM_2_2_1_d0 { O 32 vector } WBRAM_2_2_1_q0 { I 32 vector } WBRAM_2_2_1_we0 { O 1 bit } WBRAM_2_2_1_address1 { O 10 vector } WBRAM_2_2_1_ce1 { O 1 bit } WBRAM_2_2_1_d1 { O 32 vector } WBRAM_2_2_1_q1 { I 32 vector } WBRAM_2_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1013 \
    name WBRAM_2_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_2 \
    op interface \
    ports { WBRAM_2_0_2_address0 { O 10 vector } WBRAM_2_0_2_ce0 { O 1 bit } WBRAM_2_0_2_d0 { O 32 vector } WBRAM_2_0_2_q0 { I 32 vector } WBRAM_2_0_2_we0 { O 1 bit } WBRAM_2_0_2_address1 { O 10 vector } WBRAM_2_0_2_ce1 { O 1 bit } WBRAM_2_0_2_d1 { O 32 vector } WBRAM_2_0_2_q1 { I 32 vector } WBRAM_2_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1014 \
    name WBRAM_2_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_2 \
    op interface \
    ports { WBRAM_2_1_2_address0 { O 10 vector } WBRAM_2_1_2_ce0 { O 1 bit } WBRAM_2_1_2_d0 { O 32 vector } WBRAM_2_1_2_q0 { I 32 vector } WBRAM_2_1_2_we0 { O 1 bit } WBRAM_2_1_2_address1 { O 10 vector } WBRAM_2_1_2_ce1 { O 1 bit } WBRAM_2_1_2_d1 { O 32 vector } WBRAM_2_1_2_q1 { I 32 vector } WBRAM_2_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1015 \
    name WBRAM_2_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_2 \
    op interface \
    ports { WBRAM_2_2_2_address0 { O 10 vector } WBRAM_2_2_2_ce0 { O 1 bit } WBRAM_2_2_2_d0 { O 32 vector } WBRAM_2_2_2_q0 { I 32 vector } WBRAM_2_2_2_we0 { O 1 bit } WBRAM_2_2_2_address1 { O 10 vector } WBRAM_2_2_2_ce1 { O 1 bit } WBRAM_2_2_2_d1 { O 32 vector } WBRAM_2_2_2_q1 { I 32 vector } WBRAM_2_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1016 \
    name WBRAM_2_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_3 \
    op interface \
    ports { WBRAM_2_0_3_address0 { O 10 vector } WBRAM_2_0_3_ce0 { O 1 bit } WBRAM_2_0_3_d0 { O 32 vector } WBRAM_2_0_3_q0 { I 32 vector } WBRAM_2_0_3_we0 { O 1 bit } WBRAM_2_0_3_address1 { O 10 vector } WBRAM_2_0_3_ce1 { O 1 bit } WBRAM_2_0_3_d1 { O 32 vector } WBRAM_2_0_3_q1 { I 32 vector } WBRAM_2_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1017 \
    name WBRAM_2_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_3 \
    op interface \
    ports { WBRAM_2_1_3_address0 { O 10 vector } WBRAM_2_1_3_ce0 { O 1 bit } WBRAM_2_1_3_d0 { O 32 vector } WBRAM_2_1_3_q0 { I 32 vector } WBRAM_2_1_3_we0 { O 1 bit } WBRAM_2_1_3_address1 { O 10 vector } WBRAM_2_1_3_ce1 { O 1 bit } WBRAM_2_1_3_d1 { O 32 vector } WBRAM_2_1_3_q1 { I 32 vector } WBRAM_2_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1018 \
    name WBRAM_2_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_3 \
    op interface \
    ports { WBRAM_2_2_3_address0 { O 10 vector } WBRAM_2_2_3_ce0 { O 1 bit } WBRAM_2_2_3_d0 { O 32 vector } WBRAM_2_2_3_q0 { I 32 vector } WBRAM_2_2_3_we0 { O 1 bit } WBRAM_2_2_3_address1 { O 10 vector } WBRAM_2_2_3_ce1 { O 1 bit } WBRAM_2_2_3_d1 { O 32 vector } WBRAM_2_2_3_q1 { I 32 vector } WBRAM_2_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1019 \
    name WBRAM_2_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_4 \
    op interface \
    ports { WBRAM_2_0_4_address0 { O 10 vector } WBRAM_2_0_4_ce0 { O 1 bit } WBRAM_2_0_4_d0 { O 32 vector } WBRAM_2_0_4_q0 { I 32 vector } WBRAM_2_0_4_we0 { O 1 bit } WBRAM_2_0_4_address1 { O 10 vector } WBRAM_2_0_4_ce1 { O 1 bit } WBRAM_2_0_4_d1 { O 32 vector } WBRAM_2_0_4_q1 { I 32 vector } WBRAM_2_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1020 \
    name WBRAM_2_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_4 \
    op interface \
    ports { WBRAM_2_1_4_address0 { O 10 vector } WBRAM_2_1_4_ce0 { O 1 bit } WBRAM_2_1_4_d0 { O 32 vector } WBRAM_2_1_4_q0 { I 32 vector } WBRAM_2_1_4_we0 { O 1 bit } WBRAM_2_1_4_address1 { O 10 vector } WBRAM_2_1_4_ce1 { O 1 bit } WBRAM_2_1_4_d1 { O 32 vector } WBRAM_2_1_4_q1 { I 32 vector } WBRAM_2_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1021 \
    name WBRAM_2_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_4 \
    op interface \
    ports { WBRAM_2_2_4_address0 { O 10 vector } WBRAM_2_2_4_ce0 { O 1 bit } WBRAM_2_2_4_d0 { O 32 vector } WBRAM_2_2_4_q0 { I 32 vector } WBRAM_2_2_4_we0 { O 1 bit } WBRAM_2_2_4_address1 { O 10 vector } WBRAM_2_2_4_ce1 { O 1 bit } WBRAM_2_2_4_d1 { O 32 vector } WBRAM_2_2_4_q1 { I 32 vector } WBRAM_2_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1022 \
    name WBRAM_2_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_5 \
    op interface \
    ports { WBRAM_2_0_5_address0 { O 10 vector } WBRAM_2_0_5_ce0 { O 1 bit } WBRAM_2_0_5_d0 { O 32 vector } WBRAM_2_0_5_q0 { I 32 vector } WBRAM_2_0_5_we0 { O 1 bit } WBRAM_2_0_5_address1 { O 10 vector } WBRAM_2_0_5_ce1 { O 1 bit } WBRAM_2_0_5_d1 { O 32 vector } WBRAM_2_0_5_q1 { I 32 vector } WBRAM_2_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1023 \
    name WBRAM_2_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_5 \
    op interface \
    ports { WBRAM_2_1_5_address0 { O 10 vector } WBRAM_2_1_5_ce0 { O 1 bit } WBRAM_2_1_5_d0 { O 32 vector } WBRAM_2_1_5_q0 { I 32 vector } WBRAM_2_1_5_we0 { O 1 bit } WBRAM_2_1_5_address1 { O 10 vector } WBRAM_2_1_5_ce1 { O 1 bit } WBRAM_2_1_5_d1 { O 32 vector } WBRAM_2_1_5_q1 { I 32 vector } WBRAM_2_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1024 \
    name WBRAM_2_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_5 \
    op interface \
    ports { WBRAM_2_2_5_address0 { O 10 vector } WBRAM_2_2_5_ce0 { O 1 bit } WBRAM_2_2_5_d0 { O 32 vector } WBRAM_2_2_5_q0 { I 32 vector } WBRAM_2_2_5_we0 { O 1 bit } WBRAM_2_2_5_address1 { O 10 vector } WBRAM_2_2_5_ce1 { O 1 bit } WBRAM_2_2_5_d1 { O 32 vector } WBRAM_2_2_5_q1 { I 32 vector } WBRAM_2_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1025 \
    name WBRAM_2_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_6 \
    op interface \
    ports { WBRAM_2_0_6_address0 { O 10 vector } WBRAM_2_0_6_ce0 { O 1 bit } WBRAM_2_0_6_d0 { O 32 vector } WBRAM_2_0_6_q0 { I 32 vector } WBRAM_2_0_6_we0 { O 1 bit } WBRAM_2_0_6_address1 { O 10 vector } WBRAM_2_0_6_ce1 { O 1 bit } WBRAM_2_0_6_d1 { O 32 vector } WBRAM_2_0_6_q1 { I 32 vector } WBRAM_2_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1026 \
    name WBRAM_2_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_6 \
    op interface \
    ports { WBRAM_2_1_6_address0 { O 10 vector } WBRAM_2_1_6_ce0 { O 1 bit } WBRAM_2_1_6_d0 { O 32 vector } WBRAM_2_1_6_q0 { I 32 vector } WBRAM_2_1_6_we0 { O 1 bit } WBRAM_2_1_6_address1 { O 10 vector } WBRAM_2_1_6_ce1 { O 1 bit } WBRAM_2_1_6_d1 { O 32 vector } WBRAM_2_1_6_q1 { I 32 vector } WBRAM_2_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1027 \
    name WBRAM_2_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_6 \
    op interface \
    ports { WBRAM_2_2_6_address0 { O 10 vector } WBRAM_2_2_6_ce0 { O 1 bit } WBRAM_2_2_6_d0 { O 32 vector } WBRAM_2_2_6_q0 { I 32 vector } WBRAM_2_2_6_we0 { O 1 bit } WBRAM_2_2_6_address1 { O 10 vector } WBRAM_2_2_6_ce1 { O 1 bit } WBRAM_2_2_6_d1 { O 32 vector } WBRAM_2_2_6_q1 { I 32 vector } WBRAM_2_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1028 \
    name WBRAM_2_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_7 \
    op interface \
    ports { WBRAM_2_0_7_address0 { O 10 vector } WBRAM_2_0_7_ce0 { O 1 bit } WBRAM_2_0_7_d0 { O 32 vector } WBRAM_2_0_7_q0 { I 32 vector } WBRAM_2_0_7_we0 { O 1 bit } WBRAM_2_0_7_address1 { O 10 vector } WBRAM_2_0_7_ce1 { O 1 bit } WBRAM_2_0_7_d1 { O 32 vector } WBRAM_2_0_7_q1 { I 32 vector } WBRAM_2_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1029 \
    name WBRAM_2_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_7 \
    op interface \
    ports { WBRAM_2_1_7_address0 { O 10 vector } WBRAM_2_1_7_ce0 { O 1 bit } WBRAM_2_1_7_d0 { O 32 vector } WBRAM_2_1_7_q0 { I 32 vector } WBRAM_2_1_7_we0 { O 1 bit } WBRAM_2_1_7_address1 { O 10 vector } WBRAM_2_1_7_ce1 { O 1 bit } WBRAM_2_1_7_d1 { O 32 vector } WBRAM_2_1_7_q1 { I 32 vector } WBRAM_2_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1030 \
    name WBRAM_2_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_7 \
    op interface \
    ports { WBRAM_2_2_7_address0 { O 10 vector } WBRAM_2_2_7_ce0 { O 1 bit } WBRAM_2_2_7_d0 { O 32 vector } WBRAM_2_2_7_q0 { I 32 vector } WBRAM_2_2_7_we0 { O 1 bit } WBRAM_2_2_7_address1 { O 10 vector } WBRAM_2_2_7_ce1 { O 1 bit } WBRAM_2_2_7_d1 { O 32 vector } WBRAM_2_2_7_q1 { I 32 vector } WBRAM_2_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1031 \
    name WBRAM_2_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_8 \
    op interface \
    ports { WBRAM_2_0_8_address0 { O 10 vector } WBRAM_2_0_8_ce0 { O 1 bit } WBRAM_2_0_8_d0 { O 32 vector } WBRAM_2_0_8_q0 { I 32 vector } WBRAM_2_0_8_we0 { O 1 bit } WBRAM_2_0_8_address1 { O 10 vector } WBRAM_2_0_8_ce1 { O 1 bit } WBRAM_2_0_8_d1 { O 32 vector } WBRAM_2_0_8_q1 { I 32 vector } WBRAM_2_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1032 \
    name WBRAM_2_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_8 \
    op interface \
    ports { WBRAM_2_1_8_address0 { O 10 vector } WBRAM_2_1_8_ce0 { O 1 bit } WBRAM_2_1_8_d0 { O 32 vector } WBRAM_2_1_8_q0 { I 32 vector } WBRAM_2_1_8_we0 { O 1 bit } WBRAM_2_1_8_address1 { O 10 vector } WBRAM_2_1_8_ce1 { O 1 bit } WBRAM_2_1_8_d1 { O 32 vector } WBRAM_2_1_8_q1 { I 32 vector } WBRAM_2_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1033 \
    name WBRAM_2_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_8 \
    op interface \
    ports { WBRAM_2_2_8_address0 { O 10 vector } WBRAM_2_2_8_ce0 { O 1 bit } WBRAM_2_2_8_d0 { O 32 vector } WBRAM_2_2_8_q0 { I 32 vector } WBRAM_2_2_8_we0 { O 1 bit } WBRAM_2_2_8_address1 { O 10 vector } WBRAM_2_2_8_ce1 { O 1 bit } WBRAM_2_2_8_d1 { O 32 vector } WBRAM_2_2_8_q1 { I 32 vector } WBRAM_2_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1034 \
    name OBRAM_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_3 \
    op interface \
    ports { OBRAM_3_address0 { O 5 vector } OBRAM_3_ce0 { O 1 bit } OBRAM_3_d0 { O 32 vector } OBRAM_3_q0 { I 32 vector } OBRAM_3_we0 { O 1 bit } OBRAM_3_address1 { O 5 vector } OBRAM_3_ce1 { O 1 bit } OBRAM_3_d1 { O 32 vector } OBRAM_3_q1 { I 32 vector } OBRAM_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1035 \
    name WBRAM_3_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_0 \
    op interface \
    ports { WBRAM_3_0_0_address0 { O 10 vector } WBRAM_3_0_0_ce0 { O 1 bit } WBRAM_3_0_0_d0 { O 32 vector } WBRAM_3_0_0_q0 { I 32 vector } WBRAM_3_0_0_we0 { O 1 bit } WBRAM_3_0_0_address1 { O 10 vector } WBRAM_3_0_0_ce1 { O 1 bit } WBRAM_3_0_0_d1 { O 32 vector } WBRAM_3_0_0_q1 { I 32 vector } WBRAM_3_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1036 \
    name WBRAM_3_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_0 \
    op interface \
    ports { WBRAM_3_1_0_address0 { O 10 vector } WBRAM_3_1_0_ce0 { O 1 bit } WBRAM_3_1_0_d0 { O 32 vector } WBRAM_3_1_0_q0 { I 32 vector } WBRAM_3_1_0_we0 { O 1 bit } WBRAM_3_1_0_address1 { O 10 vector } WBRAM_3_1_0_ce1 { O 1 bit } WBRAM_3_1_0_d1 { O 32 vector } WBRAM_3_1_0_q1 { I 32 vector } WBRAM_3_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1037 \
    name WBRAM_3_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_0 \
    op interface \
    ports { WBRAM_3_2_0_address0 { O 10 vector } WBRAM_3_2_0_ce0 { O 1 bit } WBRAM_3_2_0_d0 { O 32 vector } WBRAM_3_2_0_q0 { I 32 vector } WBRAM_3_2_0_we0 { O 1 bit } WBRAM_3_2_0_address1 { O 10 vector } WBRAM_3_2_0_ce1 { O 1 bit } WBRAM_3_2_0_d1 { O 32 vector } WBRAM_3_2_0_q1 { I 32 vector } WBRAM_3_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1038 \
    name WBRAM_3_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_1 \
    op interface \
    ports { WBRAM_3_0_1_address0 { O 10 vector } WBRAM_3_0_1_ce0 { O 1 bit } WBRAM_3_0_1_d0 { O 32 vector } WBRAM_3_0_1_q0 { I 32 vector } WBRAM_3_0_1_we0 { O 1 bit } WBRAM_3_0_1_address1 { O 10 vector } WBRAM_3_0_1_ce1 { O 1 bit } WBRAM_3_0_1_d1 { O 32 vector } WBRAM_3_0_1_q1 { I 32 vector } WBRAM_3_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1039 \
    name WBRAM_3_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_1 \
    op interface \
    ports { WBRAM_3_1_1_address0 { O 10 vector } WBRAM_3_1_1_ce0 { O 1 bit } WBRAM_3_1_1_d0 { O 32 vector } WBRAM_3_1_1_q0 { I 32 vector } WBRAM_3_1_1_we0 { O 1 bit } WBRAM_3_1_1_address1 { O 10 vector } WBRAM_3_1_1_ce1 { O 1 bit } WBRAM_3_1_1_d1 { O 32 vector } WBRAM_3_1_1_q1 { I 32 vector } WBRAM_3_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1040 \
    name WBRAM_3_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_1 \
    op interface \
    ports { WBRAM_3_2_1_address0 { O 10 vector } WBRAM_3_2_1_ce0 { O 1 bit } WBRAM_3_2_1_d0 { O 32 vector } WBRAM_3_2_1_q0 { I 32 vector } WBRAM_3_2_1_we0 { O 1 bit } WBRAM_3_2_1_address1 { O 10 vector } WBRAM_3_2_1_ce1 { O 1 bit } WBRAM_3_2_1_d1 { O 32 vector } WBRAM_3_2_1_q1 { I 32 vector } WBRAM_3_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1041 \
    name WBRAM_3_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_2 \
    op interface \
    ports { WBRAM_3_0_2_address0 { O 10 vector } WBRAM_3_0_2_ce0 { O 1 bit } WBRAM_3_0_2_d0 { O 32 vector } WBRAM_3_0_2_q0 { I 32 vector } WBRAM_3_0_2_we0 { O 1 bit } WBRAM_3_0_2_address1 { O 10 vector } WBRAM_3_0_2_ce1 { O 1 bit } WBRAM_3_0_2_d1 { O 32 vector } WBRAM_3_0_2_q1 { I 32 vector } WBRAM_3_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1042 \
    name WBRAM_3_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_2 \
    op interface \
    ports { WBRAM_3_1_2_address0 { O 10 vector } WBRAM_3_1_2_ce0 { O 1 bit } WBRAM_3_1_2_d0 { O 32 vector } WBRAM_3_1_2_q0 { I 32 vector } WBRAM_3_1_2_we0 { O 1 bit } WBRAM_3_1_2_address1 { O 10 vector } WBRAM_3_1_2_ce1 { O 1 bit } WBRAM_3_1_2_d1 { O 32 vector } WBRAM_3_1_2_q1 { I 32 vector } WBRAM_3_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1043 \
    name WBRAM_3_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_2 \
    op interface \
    ports { WBRAM_3_2_2_address0 { O 10 vector } WBRAM_3_2_2_ce0 { O 1 bit } WBRAM_3_2_2_d0 { O 32 vector } WBRAM_3_2_2_q0 { I 32 vector } WBRAM_3_2_2_we0 { O 1 bit } WBRAM_3_2_2_address1 { O 10 vector } WBRAM_3_2_2_ce1 { O 1 bit } WBRAM_3_2_2_d1 { O 32 vector } WBRAM_3_2_2_q1 { I 32 vector } WBRAM_3_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1044 \
    name WBRAM_3_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_3 \
    op interface \
    ports { WBRAM_3_0_3_address0 { O 10 vector } WBRAM_3_0_3_ce0 { O 1 bit } WBRAM_3_0_3_d0 { O 32 vector } WBRAM_3_0_3_q0 { I 32 vector } WBRAM_3_0_3_we0 { O 1 bit } WBRAM_3_0_3_address1 { O 10 vector } WBRAM_3_0_3_ce1 { O 1 bit } WBRAM_3_0_3_d1 { O 32 vector } WBRAM_3_0_3_q1 { I 32 vector } WBRAM_3_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1045 \
    name WBRAM_3_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_3 \
    op interface \
    ports { WBRAM_3_1_3_address0 { O 10 vector } WBRAM_3_1_3_ce0 { O 1 bit } WBRAM_3_1_3_d0 { O 32 vector } WBRAM_3_1_3_q0 { I 32 vector } WBRAM_3_1_3_we0 { O 1 bit } WBRAM_3_1_3_address1 { O 10 vector } WBRAM_3_1_3_ce1 { O 1 bit } WBRAM_3_1_3_d1 { O 32 vector } WBRAM_3_1_3_q1 { I 32 vector } WBRAM_3_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1046 \
    name WBRAM_3_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_3 \
    op interface \
    ports { WBRAM_3_2_3_address0 { O 10 vector } WBRAM_3_2_3_ce0 { O 1 bit } WBRAM_3_2_3_d0 { O 32 vector } WBRAM_3_2_3_q0 { I 32 vector } WBRAM_3_2_3_we0 { O 1 bit } WBRAM_3_2_3_address1 { O 10 vector } WBRAM_3_2_3_ce1 { O 1 bit } WBRAM_3_2_3_d1 { O 32 vector } WBRAM_3_2_3_q1 { I 32 vector } WBRAM_3_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1047 \
    name WBRAM_3_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_4 \
    op interface \
    ports { WBRAM_3_0_4_address0 { O 10 vector } WBRAM_3_0_4_ce0 { O 1 bit } WBRAM_3_0_4_d0 { O 32 vector } WBRAM_3_0_4_q0 { I 32 vector } WBRAM_3_0_4_we0 { O 1 bit } WBRAM_3_0_4_address1 { O 10 vector } WBRAM_3_0_4_ce1 { O 1 bit } WBRAM_3_0_4_d1 { O 32 vector } WBRAM_3_0_4_q1 { I 32 vector } WBRAM_3_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1048 \
    name WBRAM_3_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_4 \
    op interface \
    ports { WBRAM_3_1_4_address0 { O 10 vector } WBRAM_3_1_4_ce0 { O 1 bit } WBRAM_3_1_4_d0 { O 32 vector } WBRAM_3_1_4_q0 { I 32 vector } WBRAM_3_1_4_we0 { O 1 bit } WBRAM_3_1_4_address1 { O 10 vector } WBRAM_3_1_4_ce1 { O 1 bit } WBRAM_3_1_4_d1 { O 32 vector } WBRAM_3_1_4_q1 { I 32 vector } WBRAM_3_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1049 \
    name WBRAM_3_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_4 \
    op interface \
    ports { WBRAM_3_2_4_address0 { O 10 vector } WBRAM_3_2_4_ce0 { O 1 bit } WBRAM_3_2_4_d0 { O 32 vector } WBRAM_3_2_4_q0 { I 32 vector } WBRAM_3_2_4_we0 { O 1 bit } WBRAM_3_2_4_address1 { O 10 vector } WBRAM_3_2_4_ce1 { O 1 bit } WBRAM_3_2_4_d1 { O 32 vector } WBRAM_3_2_4_q1 { I 32 vector } WBRAM_3_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1050 \
    name WBRAM_3_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_5 \
    op interface \
    ports { WBRAM_3_0_5_address0 { O 10 vector } WBRAM_3_0_5_ce0 { O 1 bit } WBRAM_3_0_5_d0 { O 32 vector } WBRAM_3_0_5_q0 { I 32 vector } WBRAM_3_0_5_we0 { O 1 bit } WBRAM_3_0_5_address1 { O 10 vector } WBRAM_3_0_5_ce1 { O 1 bit } WBRAM_3_0_5_d1 { O 32 vector } WBRAM_3_0_5_q1 { I 32 vector } WBRAM_3_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1051 \
    name WBRAM_3_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_5 \
    op interface \
    ports { WBRAM_3_1_5_address0 { O 10 vector } WBRAM_3_1_5_ce0 { O 1 bit } WBRAM_3_1_5_d0 { O 32 vector } WBRAM_3_1_5_q0 { I 32 vector } WBRAM_3_1_5_we0 { O 1 bit } WBRAM_3_1_5_address1 { O 10 vector } WBRAM_3_1_5_ce1 { O 1 bit } WBRAM_3_1_5_d1 { O 32 vector } WBRAM_3_1_5_q1 { I 32 vector } WBRAM_3_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1052 \
    name WBRAM_3_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_5 \
    op interface \
    ports { WBRAM_3_2_5_address0 { O 10 vector } WBRAM_3_2_5_ce0 { O 1 bit } WBRAM_3_2_5_d0 { O 32 vector } WBRAM_3_2_5_q0 { I 32 vector } WBRAM_3_2_5_we0 { O 1 bit } WBRAM_3_2_5_address1 { O 10 vector } WBRAM_3_2_5_ce1 { O 1 bit } WBRAM_3_2_5_d1 { O 32 vector } WBRAM_3_2_5_q1 { I 32 vector } WBRAM_3_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1053 \
    name WBRAM_3_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_6 \
    op interface \
    ports { WBRAM_3_0_6_address0 { O 10 vector } WBRAM_3_0_6_ce0 { O 1 bit } WBRAM_3_0_6_d0 { O 32 vector } WBRAM_3_0_6_q0 { I 32 vector } WBRAM_3_0_6_we0 { O 1 bit } WBRAM_3_0_6_address1 { O 10 vector } WBRAM_3_0_6_ce1 { O 1 bit } WBRAM_3_0_6_d1 { O 32 vector } WBRAM_3_0_6_q1 { I 32 vector } WBRAM_3_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1054 \
    name WBRAM_3_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_6 \
    op interface \
    ports { WBRAM_3_1_6_address0 { O 10 vector } WBRAM_3_1_6_ce0 { O 1 bit } WBRAM_3_1_6_d0 { O 32 vector } WBRAM_3_1_6_q0 { I 32 vector } WBRAM_3_1_6_we0 { O 1 bit } WBRAM_3_1_6_address1 { O 10 vector } WBRAM_3_1_6_ce1 { O 1 bit } WBRAM_3_1_6_d1 { O 32 vector } WBRAM_3_1_6_q1 { I 32 vector } WBRAM_3_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1055 \
    name WBRAM_3_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_6 \
    op interface \
    ports { WBRAM_3_2_6_address0 { O 10 vector } WBRAM_3_2_6_ce0 { O 1 bit } WBRAM_3_2_6_d0 { O 32 vector } WBRAM_3_2_6_q0 { I 32 vector } WBRAM_3_2_6_we0 { O 1 bit } WBRAM_3_2_6_address1 { O 10 vector } WBRAM_3_2_6_ce1 { O 1 bit } WBRAM_3_2_6_d1 { O 32 vector } WBRAM_3_2_6_q1 { I 32 vector } WBRAM_3_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1056 \
    name WBRAM_3_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_7 \
    op interface \
    ports { WBRAM_3_0_7_address0 { O 10 vector } WBRAM_3_0_7_ce0 { O 1 bit } WBRAM_3_0_7_d0 { O 32 vector } WBRAM_3_0_7_q0 { I 32 vector } WBRAM_3_0_7_we0 { O 1 bit } WBRAM_3_0_7_address1 { O 10 vector } WBRAM_3_0_7_ce1 { O 1 bit } WBRAM_3_0_7_d1 { O 32 vector } WBRAM_3_0_7_q1 { I 32 vector } WBRAM_3_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1057 \
    name WBRAM_3_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_7 \
    op interface \
    ports { WBRAM_3_1_7_address0 { O 10 vector } WBRAM_3_1_7_ce0 { O 1 bit } WBRAM_3_1_7_d0 { O 32 vector } WBRAM_3_1_7_q0 { I 32 vector } WBRAM_3_1_7_we0 { O 1 bit } WBRAM_3_1_7_address1 { O 10 vector } WBRAM_3_1_7_ce1 { O 1 bit } WBRAM_3_1_7_d1 { O 32 vector } WBRAM_3_1_7_q1 { I 32 vector } WBRAM_3_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1058 \
    name WBRAM_3_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_7 \
    op interface \
    ports { WBRAM_3_2_7_address0 { O 10 vector } WBRAM_3_2_7_ce0 { O 1 bit } WBRAM_3_2_7_d0 { O 32 vector } WBRAM_3_2_7_q0 { I 32 vector } WBRAM_3_2_7_we0 { O 1 bit } WBRAM_3_2_7_address1 { O 10 vector } WBRAM_3_2_7_ce1 { O 1 bit } WBRAM_3_2_7_d1 { O 32 vector } WBRAM_3_2_7_q1 { I 32 vector } WBRAM_3_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1059 \
    name WBRAM_3_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_8 \
    op interface \
    ports { WBRAM_3_0_8_address0 { O 10 vector } WBRAM_3_0_8_ce0 { O 1 bit } WBRAM_3_0_8_d0 { O 32 vector } WBRAM_3_0_8_q0 { I 32 vector } WBRAM_3_0_8_we0 { O 1 bit } WBRAM_3_0_8_address1 { O 10 vector } WBRAM_3_0_8_ce1 { O 1 bit } WBRAM_3_0_8_d1 { O 32 vector } WBRAM_3_0_8_q1 { I 32 vector } WBRAM_3_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1060 \
    name WBRAM_3_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_8 \
    op interface \
    ports { WBRAM_3_1_8_address0 { O 10 vector } WBRAM_3_1_8_ce0 { O 1 bit } WBRAM_3_1_8_d0 { O 32 vector } WBRAM_3_1_8_q0 { I 32 vector } WBRAM_3_1_8_we0 { O 1 bit } WBRAM_3_1_8_address1 { O 10 vector } WBRAM_3_1_8_ce1 { O 1 bit } WBRAM_3_1_8_d1 { O 32 vector } WBRAM_3_1_8_q1 { I 32 vector } WBRAM_3_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1061 \
    name WBRAM_3_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_8 \
    op interface \
    ports { WBRAM_3_2_8_address0 { O 10 vector } WBRAM_3_2_8_ce0 { O 1 bit } WBRAM_3_2_8_d0 { O 32 vector } WBRAM_3_2_8_q0 { I 32 vector } WBRAM_3_2_8_we0 { O 1 bit } WBRAM_3_2_8_address1 { O 10 vector } WBRAM_3_2_8_ce1 { O 1 bit } WBRAM_3_2_8_d1 { O 32 vector } WBRAM_3_2_8_q1 { I 32 vector } WBRAM_3_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1062 \
    name OBRAM_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_4 \
    op interface \
    ports { OBRAM_4_address0 { O 5 vector } OBRAM_4_ce0 { O 1 bit } OBRAM_4_d0 { O 32 vector } OBRAM_4_q0 { I 32 vector } OBRAM_4_we0 { O 1 bit } OBRAM_4_address1 { O 5 vector } OBRAM_4_ce1 { O 1 bit } OBRAM_4_d1 { O 32 vector } OBRAM_4_q1 { I 32 vector } OBRAM_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1063 \
    name WBRAM_4_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_0 \
    op interface \
    ports { WBRAM_4_0_0_address0 { O 10 vector } WBRAM_4_0_0_ce0 { O 1 bit } WBRAM_4_0_0_d0 { O 32 vector } WBRAM_4_0_0_q0 { I 32 vector } WBRAM_4_0_0_we0 { O 1 bit } WBRAM_4_0_0_address1 { O 10 vector } WBRAM_4_0_0_ce1 { O 1 bit } WBRAM_4_0_0_d1 { O 32 vector } WBRAM_4_0_0_q1 { I 32 vector } WBRAM_4_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1064 \
    name WBRAM_4_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_0 \
    op interface \
    ports { WBRAM_4_1_0_address0 { O 10 vector } WBRAM_4_1_0_ce0 { O 1 bit } WBRAM_4_1_0_d0 { O 32 vector } WBRAM_4_1_0_q0 { I 32 vector } WBRAM_4_1_0_we0 { O 1 bit } WBRAM_4_1_0_address1 { O 10 vector } WBRAM_4_1_0_ce1 { O 1 bit } WBRAM_4_1_0_d1 { O 32 vector } WBRAM_4_1_0_q1 { I 32 vector } WBRAM_4_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1065 \
    name WBRAM_4_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_0 \
    op interface \
    ports { WBRAM_4_2_0_address0 { O 10 vector } WBRAM_4_2_0_ce0 { O 1 bit } WBRAM_4_2_0_d0 { O 32 vector } WBRAM_4_2_0_q0 { I 32 vector } WBRAM_4_2_0_we0 { O 1 bit } WBRAM_4_2_0_address1 { O 10 vector } WBRAM_4_2_0_ce1 { O 1 bit } WBRAM_4_2_0_d1 { O 32 vector } WBRAM_4_2_0_q1 { I 32 vector } WBRAM_4_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1066 \
    name WBRAM_4_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_1 \
    op interface \
    ports { WBRAM_4_0_1_address0 { O 10 vector } WBRAM_4_0_1_ce0 { O 1 bit } WBRAM_4_0_1_d0 { O 32 vector } WBRAM_4_0_1_q0 { I 32 vector } WBRAM_4_0_1_we0 { O 1 bit } WBRAM_4_0_1_address1 { O 10 vector } WBRAM_4_0_1_ce1 { O 1 bit } WBRAM_4_0_1_d1 { O 32 vector } WBRAM_4_0_1_q1 { I 32 vector } WBRAM_4_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1067 \
    name WBRAM_4_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_1 \
    op interface \
    ports { WBRAM_4_1_1_address0 { O 10 vector } WBRAM_4_1_1_ce0 { O 1 bit } WBRAM_4_1_1_d0 { O 32 vector } WBRAM_4_1_1_q0 { I 32 vector } WBRAM_4_1_1_we0 { O 1 bit } WBRAM_4_1_1_address1 { O 10 vector } WBRAM_4_1_1_ce1 { O 1 bit } WBRAM_4_1_1_d1 { O 32 vector } WBRAM_4_1_1_q1 { I 32 vector } WBRAM_4_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1068 \
    name WBRAM_4_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_1 \
    op interface \
    ports { WBRAM_4_2_1_address0 { O 10 vector } WBRAM_4_2_1_ce0 { O 1 bit } WBRAM_4_2_1_d0 { O 32 vector } WBRAM_4_2_1_q0 { I 32 vector } WBRAM_4_2_1_we0 { O 1 bit } WBRAM_4_2_1_address1 { O 10 vector } WBRAM_4_2_1_ce1 { O 1 bit } WBRAM_4_2_1_d1 { O 32 vector } WBRAM_4_2_1_q1 { I 32 vector } WBRAM_4_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1069 \
    name WBRAM_4_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_2 \
    op interface \
    ports { WBRAM_4_0_2_address0 { O 10 vector } WBRAM_4_0_2_ce0 { O 1 bit } WBRAM_4_0_2_d0 { O 32 vector } WBRAM_4_0_2_q0 { I 32 vector } WBRAM_4_0_2_we0 { O 1 bit } WBRAM_4_0_2_address1 { O 10 vector } WBRAM_4_0_2_ce1 { O 1 bit } WBRAM_4_0_2_d1 { O 32 vector } WBRAM_4_0_2_q1 { I 32 vector } WBRAM_4_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1070 \
    name WBRAM_4_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_2 \
    op interface \
    ports { WBRAM_4_1_2_address0 { O 10 vector } WBRAM_4_1_2_ce0 { O 1 bit } WBRAM_4_1_2_d0 { O 32 vector } WBRAM_4_1_2_q0 { I 32 vector } WBRAM_4_1_2_we0 { O 1 bit } WBRAM_4_1_2_address1 { O 10 vector } WBRAM_4_1_2_ce1 { O 1 bit } WBRAM_4_1_2_d1 { O 32 vector } WBRAM_4_1_2_q1 { I 32 vector } WBRAM_4_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1071 \
    name WBRAM_4_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_2 \
    op interface \
    ports { WBRAM_4_2_2_address0 { O 10 vector } WBRAM_4_2_2_ce0 { O 1 bit } WBRAM_4_2_2_d0 { O 32 vector } WBRAM_4_2_2_q0 { I 32 vector } WBRAM_4_2_2_we0 { O 1 bit } WBRAM_4_2_2_address1 { O 10 vector } WBRAM_4_2_2_ce1 { O 1 bit } WBRAM_4_2_2_d1 { O 32 vector } WBRAM_4_2_2_q1 { I 32 vector } WBRAM_4_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1072 \
    name WBRAM_4_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_3 \
    op interface \
    ports { WBRAM_4_0_3_address0 { O 10 vector } WBRAM_4_0_3_ce0 { O 1 bit } WBRAM_4_0_3_d0 { O 32 vector } WBRAM_4_0_3_q0 { I 32 vector } WBRAM_4_0_3_we0 { O 1 bit } WBRAM_4_0_3_address1 { O 10 vector } WBRAM_4_0_3_ce1 { O 1 bit } WBRAM_4_0_3_d1 { O 32 vector } WBRAM_4_0_3_q1 { I 32 vector } WBRAM_4_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1073 \
    name WBRAM_4_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_3 \
    op interface \
    ports { WBRAM_4_1_3_address0 { O 10 vector } WBRAM_4_1_3_ce0 { O 1 bit } WBRAM_4_1_3_d0 { O 32 vector } WBRAM_4_1_3_q0 { I 32 vector } WBRAM_4_1_3_we0 { O 1 bit } WBRAM_4_1_3_address1 { O 10 vector } WBRAM_4_1_3_ce1 { O 1 bit } WBRAM_4_1_3_d1 { O 32 vector } WBRAM_4_1_3_q1 { I 32 vector } WBRAM_4_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1074 \
    name WBRAM_4_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_3 \
    op interface \
    ports { WBRAM_4_2_3_address0 { O 10 vector } WBRAM_4_2_3_ce0 { O 1 bit } WBRAM_4_2_3_d0 { O 32 vector } WBRAM_4_2_3_q0 { I 32 vector } WBRAM_4_2_3_we0 { O 1 bit } WBRAM_4_2_3_address1 { O 10 vector } WBRAM_4_2_3_ce1 { O 1 bit } WBRAM_4_2_3_d1 { O 32 vector } WBRAM_4_2_3_q1 { I 32 vector } WBRAM_4_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1075 \
    name WBRAM_4_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_4 \
    op interface \
    ports { WBRAM_4_0_4_address0 { O 10 vector } WBRAM_4_0_4_ce0 { O 1 bit } WBRAM_4_0_4_d0 { O 32 vector } WBRAM_4_0_4_q0 { I 32 vector } WBRAM_4_0_4_we0 { O 1 bit } WBRAM_4_0_4_address1 { O 10 vector } WBRAM_4_0_4_ce1 { O 1 bit } WBRAM_4_0_4_d1 { O 32 vector } WBRAM_4_0_4_q1 { I 32 vector } WBRAM_4_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1076 \
    name WBRAM_4_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_4 \
    op interface \
    ports { WBRAM_4_1_4_address0 { O 10 vector } WBRAM_4_1_4_ce0 { O 1 bit } WBRAM_4_1_4_d0 { O 32 vector } WBRAM_4_1_4_q0 { I 32 vector } WBRAM_4_1_4_we0 { O 1 bit } WBRAM_4_1_4_address1 { O 10 vector } WBRAM_4_1_4_ce1 { O 1 bit } WBRAM_4_1_4_d1 { O 32 vector } WBRAM_4_1_4_q1 { I 32 vector } WBRAM_4_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1077 \
    name WBRAM_4_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_4 \
    op interface \
    ports { WBRAM_4_2_4_address0 { O 10 vector } WBRAM_4_2_4_ce0 { O 1 bit } WBRAM_4_2_4_d0 { O 32 vector } WBRAM_4_2_4_q0 { I 32 vector } WBRAM_4_2_4_we0 { O 1 bit } WBRAM_4_2_4_address1 { O 10 vector } WBRAM_4_2_4_ce1 { O 1 bit } WBRAM_4_2_4_d1 { O 32 vector } WBRAM_4_2_4_q1 { I 32 vector } WBRAM_4_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1078 \
    name WBRAM_4_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_5 \
    op interface \
    ports { WBRAM_4_0_5_address0 { O 10 vector } WBRAM_4_0_5_ce0 { O 1 bit } WBRAM_4_0_5_d0 { O 32 vector } WBRAM_4_0_5_q0 { I 32 vector } WBRAM_4_0_5_we0 { O 1 bit } WBRAM_4_0_5_address1 { O 10 vector } WBRAM_4_0_5_ce1 { O 1 bit } WBRAM_4_0_5_d1 { O 32 vector } WBRAM_4_0_5_q1 { I 32 vector } WBRAM_4_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1079 \
    name WBRAM_4_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_5 \
    op interface \
    ports { WBRAM_4_1_5_address0 { O 10 vector } WBRAM_4_1_5_ce0 { O 1 bit } WBRAM_4_1_5_d0 { O 32 vector } WBRAM_4_1_5_q0 { I 32 vector } WBRAM_4_1_5_we0 { O 1 bit } WBRAM_4_1_5_address1 { O 10 vector } WBRAM_4_1_5_ce1 { O 1 bit } WBRAM_4_1_5_d1 { O 32 vector } WBRAM_4_1_5_q1 { I 32 vector } WBRAM_4_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1080 \
    name WBRAM_4_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_5 \
    op interface \
    ports { WBRAM_4_2_5_address0 { O 10 vector } WBRAM_4_2_5_ce0 { O 1 bit } WBRAM_4_2_5_d0 { O 32 vector } WBRAM_4_2_5_q0 { I 32 vector } WBRAM_4_2_5_we0 { O 1 bit } WBRAM_4_2_5_address1 { O 10 vector } WBRAM_4_2_5_ce1 { O 1 bit } WBRAM_4_2_5_d1 { O 32 vector } WBRAM_4_2_5_q1 { I 32 vector } WBRAM_4_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1081 \
    name WBRAM_4_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_6 \
    op interface \
    ports { WBRAM_4_0_6_address0 { O 10 vector } WBRAM_4_0_6_ce0 { O 1 bit } WBRAM_4_0_6_d0 { O 32 vector } WBRAM_4_0_6_q0 { I 32 vector } WBRAM_4_0_6_we0 { O 1 bit } WBRAM_4_0_6_address1 { O 10 vector } WBRAM_4_0_6_ce1 { O 1 bit } WBRAM_4_0_6_d1 { O 32 vector } WBRAM_4_0_6_q1 { I 32 vector } WBRAM_4_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1082 \
    name WBRAM_4_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_6 \
    op interface \
    ports { WBRAM_4_1_6_address0 { O 10 vector } WBRAM_4_1_6_ce0 { O 1 bit } WBRAM_4_1_6_d0 { O 32 vector } WBRAM_4_1_6_q0 { I 32 vector } WBRAM_4_1_6_we0 { O 1 bit } WBRAM_4_1_6_address1 { O 10 vector } WBRAM_4_1_6_ce1 { O 1 bit } WBRAM_4_1_6_d1 { O 32 vector } WBRAM_4_1_6_q1 { I 32 vector } WBRAM_4_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1083 \
    name WBRAM_4_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_6 \
    op interface \
    ports { WBRAM_4_2_6_address0 { O 10 vector } WBRAM_4_2_6_ce0 { O 1 bit } WBRAM_4_2_6_d0 { O 32 vector } WBRAM_4_2_6_q0 { I 32 vector } WBRAM_4_2_6_we0 { O 1 bit } WBRAM_4_2_6_address1 { O 10 vector } WBRAM_4_2_6_ce1 { O 1 bit } WBRAM_4_2_6_d1 { O 32 vector } WBRAM_4_2_6_q1 { I 32 vector } WBRAM_4_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1084 \
    name WBRAM_4_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_7 \
    op interface \
    ports { WBRAM_4_0_7_address0 { O 10 vector } WBRAM_4_0_7_ce0 { O 1 bit } WBRAM_4_0_7_d0 { O 32 vector } WBRAM_4_0_7_q0 { I 32 vector } WBRAM_4_0_7_we0 { O 1 bit } WBRAM_4_0_7_address1 { O 10 vector } WBRAM_4_0_7_ce1 { O 1 bit } WBRAM_4_0_7_d1 { O 32 vector } WBRAM_4_0_7_q1 { I 32 vector } WBRAM_4_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1085 \
    name WBRAM_4_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_7 \
    op interface \
    ports { WBRAM_4_1_7_address0 { O 10 vector } WBRAM_4_1_7_ce0 { O 1 bit } WBRAM_4_1_7_d0 { O 32 vector } WBRAM_4_1_7_q0 { I 32 vector } WBRAM_4_1_7_we0 { O 1 bit } WBRAM_4_1_7_address1 { O 10 vector } WBRAM_4_1_7_ce1 { O 1 bit } WBRAM_4_1_7_d1 { O 32 vector } WBRAM_4_1_7_q1 { I 32 vector } WBRAM_4_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1086 \
    name WBRAM_4_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_7 \
    op interface \
    ports { WBRAM_4_2_7_address0 { O 10 vector } WBRAM_4_2_7_ce0 { O 1 bit } WBRAM_4_2_7_d0 { O 32 vector } WBRAM_4_2_7_q0 { I 32 vector } WBRAM_4_2_7_we0 { O 1 bit } WBRAM_4_2_7_address1 { O 10 vector } WBRAM_4_2_7_ce1 { O 1 bit } WBRAM_4_2_7_d1 { O 32 vector } WBRAM_4_2_7_q1 { I 32 vector } WBRAM_4_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1087 \
    name WBRAM_4_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_8 \
    op interface \
    ports { WBRAM_4_0_8_address0 { O 10 vector } WBRAM_4_0_8_ce0 { O 1 bit } WBRAM_4_0_8_d0 { O 32 vector } WBRAM_4_0_8_q0 { I 32 vector } WBRAM_4_0_8_we0 { O 1 bit } WBRAM_4_0_8_address1 { O 10 vector } WBRAM_4_0_8_ce1 { O 1 bit } WBRAM_4_0_8_d1 { O 32 vector } WBRAM_4_0_8_q1 { I 32 vector } WBRAM_4_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1088 \
    name WBRAM_4_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_8 \
    op interface \
    ports { WBRAM_4_1_8_address0 { O 10 vector } WBRAM_4_1_8_ce0 { O 1 bit } WBRAM_4_1_8_d0 { O 32 vector } WBRAM_4_1_8_q0 { I 32 vector } WBRAM_4_1_8_we0 { O 1 bit } WBRAM_4_1_8_address1 { O 10 vector } WBRAM_4_1_8_ce1 { O 1 bit } WBRAM_4_1_8_d1 { O 32 vector } WBRAM_4_1_8_q1 { I 32 vector } WBRAM_4_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1089 \
    name WBRAM_4_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_8 \
    op interface \
    ports { WBRAM_4_2_8_address0 { O 10 vector } WBRAM_4_2_8_ce0 { O 1 bit } WBRAM_4_2_8_d0 { O 32 vector } WBRAM_4_2_8_q0 { I 32 vector } WBRAM_4_2_8_we0 { O 1 bit } WBRAM_4_2_8_address1 { O 10 vector } WBRAM_4_2_8_ce1 { O 1 bit } WBRAM_4_2_8_d1 { O 32 vector } WBRAM_4_2_8_q1 { I 32 vector } WBRAM_4_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1090 \
    name OBRAM_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_5 \
    op interface \
    ports { OBRAM_5_address0 { O 5 vector } OBRAM_5_ce0 { O 1 bit } OBRAM_5_d0 { O 32 vector } OBRAM_5_q0 { I 32 vector } OBRAM_5_we0 { O 1 bit } OBRAM_5_address1 { O 5 vector } OBRAM_5_ce1 { O 1 bit } OBRAM_5_d1 { O 32 vector } OBRAM_5_q1 { I 32 vector } OBRAM_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1091 \
    name WBRAM_5_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_0 \
    op interface \
    ports { WBRAM_5_0_0_address0 { O 10 vector } WBRAM_5_0_0_ce0 { O 1 bit } WBRAM_5_0_0_d0 { O 32 vector } WBRAM_5_0_0_q0 { I 32 vector } WBRAM_5_0_0_we0 { O 1 bit } WBRAM_5_0_0_address1 { O 10 vector } WBRAM_5_0_0_ce1 { O 1 bit } WBRAM_5_0_0_d1 { O 32 vector } WBRAM_5_0_0_q1 { I 32 vector } WBRAM_5_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1092 \
    name WBRAM_5_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_0 \
    op interface \
    ports { WBRAM_5_1_0_address0 { O 10 vector } WBRAM_5_1_0_ce0 { O 1 bit } WBRAM_5_1_0_d0 { O 32 vector } WBRAM_5_1_0_q0 { I 32 vector } WBRAM_5_1_0_we0 { O 1 bit } WBRAM_5_1_0_address1 { O 10 vector } WBRAM_5_1_0_ce1 { O 1 bit } WBRAM_5_1_0_d1 { O 32 vector } WBRAM_5_1_0_q1 { I 32 vector } WBRAM_5_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1093 \
    name WBRAM_5_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_0 \
    op interface \
    ports { WBRAM_5_2_0_address0 { O 10 vector } WBRAM_5_2_0_ce0 { O 1 bit } WBRAM_5_2_0_d0 { O 32 vector } WBRAM_5_2_0_q0 { I 32 vector } WBRAM_5_2_0_we0 { O 1 bit } WBRAM_5_2_0_address1 { O 10 vector } WBRAM_5_2_0_ce1 { O 1 bit } WBRAM_5_2_0_d1 { O 32 vector } WBRAM_5_2_0_q1 { I 32 vector } WBRAM_5_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1094 \
    name WBRAM_5_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_1 \
    op interface \
    ports { WBRAM_5_0_1_address0 { O 10 vector } WBRAM_5_0_1_ce0 { O 1 bit } WBRAM_5_0_1_d0 { O 32 vector } WBRAM_5_0_1_q0 { I 32 vector } WBRAM_5_0_1_we0 { O 1 bit } WBRAM_5_0_1_address1 { O 10 vector } WBRAM_5_0_1_ce1 { O 1 bit } WBRAM_5_0_1_d1 { O 32 vector } WBRAM_5_0_1_q1 { I 32 vector } WBRAM_5_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1095 \
    name WBRAM_5_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_1 \
    op interface \
    ports { WBRAM_5_1_1_address0 { O 10 vector } WBRAM_5_1_1_ce0 { O 1 bit } WBRAM_5_1_1_d0 { O 32 vector } WBRAM_5_1_1_q0 { I 32 vector } WBRAM_5_1_1_we0 { O 1 bit } WBRAM_5_1_1_address1 { O 10 vector } WBRAM_5_1_1_ce1 { O 1 bit } WBRAM_5_1_1_d1 { O 32 vector } WBRAM_5_1_1_q1 { I 32 vector } WBRAM_5_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1096 \
    name WBRAM_5_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_1 \
    op interface \
    ports { WBRAM_5_2_1_address0 { O 10 vector } WBRAM_5_2_1_ce0 { O 1 bit } WBRAM_5_2_1_d0 { O 32 vector } WBRAM_5_2_1_q0 { I 32 vector } WBRAM_5_2_1_we0 { O 1 bit } WBRAM_5_2_1_address1 { O 10 vector } WBRAM_5_2_1_ce1 { O 1 bit } WBRAM_5_2_1_d1 { O 32 vector } WBRAM_5_2_1_q1 { I 32 vector } WBRAM_5_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1097 \
    name WBRAM_5_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_2 \
    op interface \
    ports { WBRAM_5_0_2_address0 { O 10 vector } WBRAM_5_0_2_ce0 { O 1 bit } WBRAM_5_0_2_d0 { O 32 vector } WBRAM_5_0_2_q0 { I 32 vector } WBRAM_5_0_2_we0 { O 1 bit } WBRAM_5_0_2_address1 { O 10 vector } WBRAM_5_0_2_ce1 { O 1 bit } WBRAM_5_0_2_d1 { O 32 vector } WBRAM_5_0_2_q1 { I 32 vector } WBRAM_5_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1098 \
    name WBRAM_5_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_2 \
    op interface \
    ports { WBRAM_5_1_2_address0 { O 10 vector } WBRAM_5_1_2_ce0 { O 1 bit } WBRAM_5_1_2_d0 { O 32 vector } WBRAM_5_1_2_q0 { I 32 vector } WBRAM_5_1_2_we0 { O 1 bit } WBRAM_5_1_2_address1 { O 10 vector } WBRAM_5_1_2_ce1 { O 1 bit } WBRAM_5_1_2_d1 { O 32 vector } WBRAM_5_1_2_q1 { I 32 vector } WBRAM_5_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1099 \
    name WBRAM_5_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_2 \
    op interface \
    ports { WBRAM_5_2_2_address0 { O 10 vector } WBRAM_5_2_2_ce0 { O 1 bit } WBRAM_5_2_2_d0 { O 32 vector } WBRAM_5_2_2_q0 { I 32 vector } WBRAM_5_2_2_we0 { O 1 bit } WBRAM_5_2_2_address1 { O 10 vector } WBRAM_5_2_2_ce1 { O 1 bit } WBRAM_5_2_2_d1 { O 32 vector } WBRAM_5_2_2_q1 { I 32 vector } WBRAM_5_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1100 \
    name WBRAM_5_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_3 \
    op interface \
    ports { WBRAM_5_0_3_address0 { O 10 vector } WBRAM_5_0_3_ce0 { O 1 bit } WBRAM_5_0_3_d0 { O 32 vector } WBRAM_5_0_3_q0 { I 32 vector } WBRAM_5_0_3_we0 { O 1 bit } WBRAM_5_0_3_address1 { O 10 vector } WBRAM_5_0_3_ce1 { O 1 bit } WBRAM_5_0_3_d1 { O 32 vector } WBRAM_5_0_3_q1 { I 32 vector } WBRAM_5_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1101 \
    name WBRAM_5_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_3 \
    op interface \
    ports { WBRAM_5_1_3_address0 { O 10 vector } WBRAM_5_1_3_ce0 { O 1 bit } WBRAM_5_1_3_d0 { O 32 vector } WBRAM_5_1_3_q0 { I 32 vector } WBRAM_5_1_3_we0 { O 1 bit } WBRAM_5_1_3_address1 { O 10 vector } WBRAM_5_1_3_ce1 { O 1 bit } WBRAM_5_1_3_d1 { O 32 vector } WBRAM_5_1_3_q1 { I 32 vector } WBRAM_5_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1102 \
    name WBRAM_5_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_3 \
    op interface \
    ports { WBRAM_5_2_3_address0 { O 10 vector } WBRAM_5_2_3_ce0 { O 1 bit } WBRAM_5_2_3_d0 { O 32 vector } WBRAM_5_2_3_q0 { I 32 vector } WBRAM_5_2_3_we0 { O 1 bit } WBRAM_5_2_3_address1 { O 10 vector } WBRAM_5_2_3_ce1 { O 1 bit } WBRAM_5_2_3_d1 { O 32 vector } WBRAM_5_2_3_q1 { I 32 vector } WBRAM_5_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1103 \
    name WBRAM_5_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_4 \
    op interface \
    ports { WBRAM_5_0_4_address0 { O 10 vector } WBRAM_5_0_4_ce0 { O 1 bit } WBRAM_5_0_4_d0 { O 32 vector } WBRAM_5_0_4_q0 { I 32 vector } WBRAM_5_0_4_we0 { O 1 bit } WBRAM_5_0_4_address1 { O 10 vector } WBRAM_5_0_4_ce1 { O 1 bit } WBRAM_5_0_4_d1 { O 32 vector } WBRAM_5_0_4_q1 { I 32 vector } WBRAM_5_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1104 \
    name WBRAM_5_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_4 \
    op interface \
    ports { WBRAM_5_1_4_address0 { O 10 vector } WBRAM_5_1_4_ce0 { O 1 bit } WBRAM_5_1_4_d0 { O 32 vector } WBRAM_5_1_4_q0 { I 32 vector } WBRAM_5_1_4_we0 { O 1 bit } WBRAM_5_1_4_address1 { O 10 vector } WBRAM_5_1_4_ce1 { O 1 bit } WBRAM_5_1_4_d1 { O 32 vector } WBRAM_5_1_4_q1 { I 32 vector } WBRAM_5_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1105 \
    name WBRAM_5_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_4 \
    op interface \
    ports { WBRAM_5_2_4_address0 { O 10 vector } WBRAM_5_2_4_ce0 { O 1 bit } WBRAM_5_2_4_d0 { O 32 vector } WBRAM_5_2_4_q0 { I 32 vector } WBRAM_5_2_4_we0 { O 1 bit } WBRAM_5_2_4_address1 { O 10 vector } WBRAM_5_2_4_ce1 { O 1 bit } WBRAM_5_2_4_d1 { O 32 vector } WBRAM_5_2_4_q1 { I 32 vector } WBRAM_5_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1106 \
    name WBRAM_5_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_5 \
    op interface \
    ports { WBRAM_5_0_5_address0 { O 10 vector } WBRAM_5_0_5_ce0 { O 1 bit } WBRAM_5_0_5_d0 { O 32 vector } WBRAM_5_0_5_q0 { I 32 vector } WBRAM_5_0_5_we0 { O 1 bit } WBRAM_5_0_5_address1 { O 10 vector } WBRAM_5_0_5_ce1 { O 1 bit } WBRAM_5_0_5_d1 { O 32 vector } WBRAM_5_0_5_q1 { I 32 vector } WBRAM_5_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1107 \
    name WBRAM_5_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_5 \
    op interface \
    ports { WBRAM_5_1_5_address0 { O 10 vector } WBRAM_5_1_5_ce0 { O 1 bit } WBRAM_5_1_5_d0 { O 32 vector } WBRAM_5_1_5_q0 { I 32 vector } WBRAM_5_1_5_we0 { O 1 bit } WBRAM_5_1_5_address1 { O 10 vector } WBRAM_5_1_5_ce1 { O 1 bit } WBRAM_5_1_5_d1 { O 32 vector } WBRAM_5_1_5_q1 { I 32 vector } WBRAM_5_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1108 \
    name WBRAM_5_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_5 \
    op interface \
    ports { WBRAM_5_2_5_address0 { O 10 vector } WBRAM_5_2_5_ce0 { O 1 bit } WBRAM_5_2_5_d0 { O 32 vector } WBRAM_5_2_5_q0 { I 32 vector } WBRAM_5_2_5_we0 { O 1 bit } WBRAM_5_2_5_address1 { O 10 vector } WBRAM_5_2_5_ce1 { O 1 bit } WBRAM_5_2_5_d1 { O 32 vector } WBRAM_5_2_5_q1 { I 32 vector } WBRAM_5_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1109 \
    name WBRAM_5_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_6 \
    op interface \
    ports { WBRAM_5_0_6_address0 { O 10 vector } WBRAM_5_0_6_ce0 { O 1 bit } WBRAM_5_0_6_d0 { O 32 vector } WBRAM_5_0_6_q0 { I 32 vector } WBRAM_5_0_6_we0 { O 1 bit } WBRAM_5_0_6_address1 { O 10 vector } WBRAM_5_0_6_ce1 { O 1 bit } WBRAM_5_0_6_d1 { O 32 vector } WBRAM_5_0_6_q1 { I 32 vector } WBRAM_5_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1110 \
    name WBRAM_5_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_6 \
    op interface \
    ports { WBRAM_5_1_6_address0 { O 10 vector } WBRAM_5_1_6_ce0 { O 1 bit } WBRAM_5_1_6_d0 { O 32 vector } WBRAM_5_1_6_q0 { I 32 vector } WBRAM_5_1_6_we0 { O 1 bit } WBRAM_5_1_6_address1 { O 10 vector } WBRAM_5_1_6_ce1 { O 1 bit } WBRAM_5_1_6_d1 { O 32 vector } WBRAM_5_1_6_q1 { I 32 vector } WBRAM_5_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1111 \
    name WBRAM_5_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_6 \
    op interface \
    ports { WBRAM_5_2_6_address0 { O 10 vector } WBRAM_5_2_6_ce0 { O 1 bit } WBRAM_5_2_6_d0 { O 32 vector } WBRAM_5_2_6_q0 { I 32 vector } WBRAM_5_2_6_we0 { O 1 bit } WBRAM_5_2_6_address1 { O 10 vector } WBRAM_5_2_6_ce1 { O 1 bit } WBRAM_5_2_6_d1 { O 32 vector } WBRAM_5_2_6_q1 { I 32 vector } WBRAM_5_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1112 \
    name WBRAM_5_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_7 \
    op interface \
    ports { WBRAM_5_0_7_address0 { O 10 vector } WBRAM_5_0_7_ce0 { O 1 bit } WBRAM_5_0_7_d0 { O 32 vector } WBRAM_5_0_7_q0 { I 32 vector } WBRAM_5_0_7_we0 { O 1 bit } WBRAM_5_0_7_address1 { O 10 vector } WBRAM_5_0_7_ce1 { O 1 bit } WBRAM_5_0_7_d1 { O 32 vector } WBRAM_5_0_7_q1 { I 32 vector } WBRAM_5_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1113 \
    name WBRAM_5_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_7 \
    op interface \
    ports { WBRAM_5_1_7_address0 { O 10 vector } WBRAM_5_1_7_ce0 { O 1 bit } WBRAM_5_1_7_d0 { O 32 vector } WBRAM_5_1_7_q0 { I 32 vector } WBRAM_5_1_7_we0 { O 1 bit } WBRAM_5_1_7_address1 { O 10 vector } WBRAM_5_1_7_ce1 { O 1 bit } WBRAM_5_1_7_d1 { O 32 vector } WBRAM_5_1_7_q1 { I 32 vector } WBRAM_5_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1114 \
    name WBRAM_5_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_7 \
    op interface \
    ports { WBRAM_5_2_7_address0 { O 10 vector } WBRAM_5_2_7_ce0 { O 1 bit } WBRAM_5_2_7_d0 { O 32 vector } WBRAM_5_2_7_q0 { I 32 vector } WBRAM_5_2_7_we0 { O 1 bit } WBRAM_5_2_7_address1 { O 10 vector } WBRAM_5_2_7_ce1 { O 1 bit } WBRAM_5_2_7_d1 { O 32 vector } WBRAM_5_2_7_q1 { I 32 vector } WBRAM_5_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1115 \
    name WBRAM_5_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_8 \
    op interface \
    ports { WBRAM_5_0_8_address0 { O 10 vector } WBRAM_5_0_8_ce0 { O 1 bit } WBRAM_5_0_8_d0 { O 32 vector } WBRAM_5_0_8_q0 { I 32 vector } WBRAM_5_0_8_we0 { O 1 bit } WBRAM_5_0_8_address1 { O 10 vector } WBRAM_5_0_8_ce1 { O 1 bit } WBRAM_5_0_8_d1 { O 32 vector } WBRAM_5_0_8_q1 { I 32 vector } WBRAM_5_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1116 \
    name WBRAM_5_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_8 \
    op interface \
    ports { WBRAM_5_1_8_address0 { O 10 vector } WBRAM_5_1_8_ce0 { O 1 bit } WBRAM_5_1_8_d0 { O 32 vector } WBRAM_5_1_8_q0 { I 32 vector } WBRAM_5_1_8_we0 { O 1 bit } WBRAM_5_1_8_address1 { O 10 vector } WBRAM_5_1_8_ce1 { O 1 bit } WBRAM_5_1_8_d1 { O 32 vector } WBRAM_5_1_8_q1 { I 32 vector } WBRAM_5_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1117 \
    name WBRAM_5_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_8 \
    op interface \
    ports { WBRAM_5_2_8_address0 { O 10 vector } WBRAM_5_2_8_ce0 { O 1 bit } WBRAM_5_2_8_d0 { O 32 vector } WBRAM_5_2_8_q0 { I 32 vector } WBRAM_5_2_8_we0 { O 1 bit } WBRAM_5_2_8_address1 { O 10 vector } WBRAM_5_2_8_ce1 { O 1 bit } WBRAM_5_2_8_d1 { O 32 vector } WBRAM_5_2_8_q1 { I 32 vector } WBRAM_5_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1118 \
    name OBRAM_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_6 \
    op interface \
    ports { OBRAM_6_address0 { O 5 vector } OBRAM_6_ce0 { O 1 bit } OBRAM_6_d0 { O 32 vector } OBRAM_6_q0 { I 32 vector } OBRAM_6_we0 { O 1 bit } OBRAM_6_address1 { O 5 vector } OBRAM_6_ce1 { O 1 bit } OBRAM_6_d1 { O 32 vector } OBRAM_6_q1 { I 32 vector } OBRAM_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1119 \
    name WBRAM_6_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_0 \
    op interface \
    ports { WBRAM_6_0_0_address0 { O 10 vector } WBRAM_6_0_0_ce0 { O 1 bit } WBRAM_6_0_0_d0 { O 32 vector } WBRAM_6_0_0_q0 { I 32 vector } WBRAM_6_0_0_we0 { O 1 bit } WBRAM_6_0_0_address1 { O 10 vector } WBRAM_6_0_0_ce1 { O 1 bit } WBRAM_6_0_0_d1 { O 32 vector } WBRAM_6_0_0_q1 { I 32 vector } WBRAM_6_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1120 \
    name WBRAM_6_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_0 \
    op interface \
    ports { WBRAM_6_1_0_address0 { O 10 vector } WBRAM_6_1_0_ce0 { O 1 bit } WBRAM_6_1_0_d0 { O 32 vector } WBRAM_6_1_0_q0 { I 32 vector } WBRAM_6_1_0_we0 { O 1 bit } WBRAM_6_1_0_address1 { O 10 vector } WBRAM_6_1_0_ce1 { O 1 bit } WBRAM_6_1_0_d1 { O 32 vector } WBRAM_6_1_0_q1 { I 32 vector } WBRAM_6_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1121 \
    name WBRAM_6_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_0 \
    op interface \
    ports { WBRAM_6_2_0_address0 { O 10 vector } WBRAM_6_2_0_ce0 { O 1 bit } WBRAM_6_2_0_d0 { O 32 vector } WBRAM_6_2_0_q0 { I 32 vector } WBRAM_6_2_0_we0 { O 1 bit } WBRAM_6_2_0_address1 { O 10 vector } WBRAM_6_2_0_ce1 { O 1 bit } WBRAM_6_2_0_d1 { O 32 vector } WBRAM_6_2_0_q1 { I 32 vector } WBRAM_6_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1122 \
    name WBRAM_6_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_1 \
    op interface \
    ports { WBRAM_6_0_1_address0 { O 10 vector } WBRAM_6_0_1_ce0 { O 1 bit } WBRAM_6_0_1_d0 { O 32 vector } WBRAM_6_0_1_q0 { I 32 vector } WBRAM_6_0_1_we0 { O 1 bit } WBRAM_6_0_1_address1 { O 10 vector } WBRAM_6_0_1_ce1 { O 1 bit } WBRAM_6_0_1_d1 { O 32 vector } WBRAM_6_0_1_q1 { I 32 vector } WBRAM_6_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1123 \
    name WBRAM_6_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_1 \
    op interface \
    ports { WBRAM_6_1_1_address0 { O 10 vector } WBRAM_6_1_1_ce0 { O 1 bit } WBRAM_6_1_1_d0 { O 32 vector } WBRAM_6_1_1_q0 { I 32 vector } WBRAM_6_1_1_we0 { O 1 bit } WBRAM_6_1_1_address1 { O 10 vector } WBRAM_6_1_1_ce1 { O 1 bit } WBRAM_6_1_1_d1 { O 32 vector } WBRAM_6_1_1_q1 { I 32 vector } WBRAM_6_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1124 \
    name WBRAM_6_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_1 \
    op interface \
    ports { WBRAM_6_2_1_address0 { O 10 vector } WBRAM_6_2_1_ce0 { O 1 bit } WBRAM_6_2_1_d0 { O 32 vector } WBRAM_6_2_1_q0 { I 32 vector } WBRAM_6_2_1_we0 { O 1 bit } WBRAM_6_2_1_address1 { O 10 vector } WBRAM_6_2_1_ce1 { O 1 bit } WBRAM_6_2_1_d1 { O 32 vector } WBRAM_6_2_1_q1 { I 32 vector } WBRAM_6_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1125 \
    name WBRAM_6_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_2 \
    op interface \
    ports { WBRAM_6_0_2_address0 { O 10 vector } WBRAM_6_0_2_ce0 { O 1 bit } WBRAM_6_0_2_d0 { O 32 vector } WBRAM_6_0_2_q0 { I 32 vector } WBRAM_6_0_2_we0 { O 1 bit } WBRAM_6_0_2_address1 { O 10 vector } WBRAM_6_0_2_ce1 { O 1 bit } WBRAM_6_0_2_d1 { O 32 vector } WBRAM_6_0_2_q1 { I 32 vector } WBRAM_6_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1126 \
    name WBRAM_6_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_2 \
    op interface \
    ports { WBRAM_6_1_2_address0 { O 10 vector } WBRAM_6_1_2_ce0 { O 1 bit } WBRAM_6_1_2_d0 { O 32 vector } WBRAM_6_1_2_q0 { I 32 vector } WBRAM_6_1_2_we0 { O 1 bit } WBRAM_6_1_2_address1 { O 10 vector } WBRAM_6_1_2_ce1 { O 1 bit } WBRAM_6_1_2_d1 { O 32 vector } WBRAM_6_1_2_q1 { I 32 vector } WBRAM_6_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1127 \
    name WBRAM_6_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_2 \
    op interface \
    ports { WBRAM_6_2_2_address0 { O 10 vector } WBRAM_6_2_2_ce0 { O 1 bit } WBRAM_6_2_2_d0 { O 32 vector } WBRAM_6_2_2_q0 { I 32 vector } WBRAM_6_2_2_we0 { O 1 bit } WBRAM_6_2_2_address1 { O 10 vector } WBRAM_6_2_2_ce1 { O 1 bit } WBRAM_6_2_2_d1 { O 32 vector } WBRAM_6_2_2_q1 { I 32 vector } WBRAM_6_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1128 \
    name WBRAM_6_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_3 \
    op interface \
    ports { WBRAM_6_0_3_address0 { O 10 vector } WBRAM_6_0_3_ce0 { O 1 bit } WBRAM_6_0_3_d0 { O 32 vector } WBRAM_6_0_3_q0 { I 32 vector } WBRAM_6_0_3_we0 { O 1 bit } WBRAM_6_0_3_address1 { O 10 vector } WBRAM_6_0_3_ce1 { O 1 bit } WBRAM_6_0_3_d1 { O 32 vector } WBRAM_6_0_3_q1 { I 32 vector } WBRAM_6_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1129 \
    name WBRAM_6_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_3 \
    op interface \
    ports { WBRAM_6_1_3_address0 { O 10 vector } WBRAM_6_1_3_ce0 { O 1 bit } WBRAM_6_1_3_d0 { O 32 vector } WBRAM_6_1_3_q0 { I 32 vector } WBRAM_6_1_3_we0 { O 1 bit } WBRAM_6_1_3_address1 { O 10 vector } WBRAM_6_1_3_ce1 { O 1 bit } WBRAM_6_1_3_d1 { O 32 vector } WBRAM_6_1_3_q1 { I 32 vector } WBRAM_6_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1130 \
    name WBRAM_6_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_3 \
    op interface \
    ports { WBRAM_6_2_3_address0 { O 10 vector } WBRAM_6_2_3_ce0 { O 1 bit } WBRAM_6_2_3_d0 { O 32 vector } WBRAM_6_2_3_q0 { I 32 vector } WBRAM_6_2_3_we0 { O 1 bit } WBRAM_6_2_3_address1 { O 10 vector } WBRAM_6_2_3_ce1 { O 1 bit } WBRAM_6_2_3_d1 { O 32 vector } WBRAM_6_2_3_q1 { I 32 vector } WBRAM_6_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1131 \
    name WBRAM_6_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_4 \
    op interface \
    ports { WBRAM_6_0_4_address0 { O 10 vector } WBRAM_6_0_4_ce0 { O 1 bit } WBRAM_6_0_4_d0 { O 32 vector } WBRAM_6_0_4_q0 { I 32 vector } WBRAM_6_0_4_we0 { O 1 bit } WBRAM_6_0_4_address1 { O 10 vector } WBRAM_6_0_4_ce1 { O 1 bit } WBRAM_6_0_4_d1 { O 32 vector } WBRAM_6_0_4_q1 { I 32 vector } WBRAM_6_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1132 \
    name WBRAM_6_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_4 \
    op interface \
    ports { WBRAM_6_1_4_address0 { O 10 vector } WBRAM_6_1_4_ce0 { O 1 bit } WBRAM_6_1_4_d0 { O 32 vector } WBRAM_6_1_4_q0 { I 32 vector } WBRAM_6_1_4_we0 { O 1 bit } WBRAM_6_1_4_address1 { O 10 vector } WBRAM_6_1_4_ce1 { O 1 bit } WBRAM_6_1_4_d1 { O 32 vector } WBRAM_6_1_4_q1 { I 32 vector } WBRAM_6_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1133 \
    name WBRAM_6_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_4 \
    op interface \
    ports { WBRAM_6_2_4_address0 { O 10 vector } WBRAM_6_2_4_ce0 { O 1 bit } WBRAM_6_2_4_d0 { O 32 vector } WBRAM_6_2_4_q0 { I 32 vector } WBRAM_6_2_4_we0 { O 1 bit } WBRAM_6_2_4_address1 { O 10 vector } WBRAM_6_2_4_ce1 { O 1 bit } WBRAM_6_2_4_d1 { O 32 vector } WBRAM_6_2_4_q1 { I 32 vector } WBRAM_6_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1134 \
    name WBRAM_6_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_5 \
    op interface \
    ports { WBRAM_6_0_5_address0 { O 10 vector } WBRAM_6_0_5_ce0 { O 1 bit } WBRAM_6_0_5_d0 { O 32 vector } WBRAM_6_0_5_q0 { I 32 vector } WBRAM_6_0_5_we0 { O 1 bit } WBRAM_6_0_5_address1 { O 10 vector } WBRAM_6_0_5_ce1 { O 1 bit } WBRAM_6_0_5_d1 { O 32 vector } WBRAM_6_0_5_q1 { I 32 vector } WBRAM_6_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1135 \
    name WBRAM_6_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_5 \
    op interface \
    ports { WBRAM_6_1_5_address0 { O 10 vector } WBRAM_6_1_5_ce0 { O 1 bit } WBRAM_6_1_5_d0 { O 32 vector } WBRAM_6_1_5_q0 { I 32 vector } WBRAM_6_1_5_we0 { O 1 bit } WBRAM_6_1_5_address1 { O 10 vector } WBRAM_6_1_5_ce1 { O 1 bit } WBRAM_6_1_5_d1 { O 32 vector } WBRAM_6_1_5_q1 { I 32 vector } WBRAM_6_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1136 \
    name WBRAM_6_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_5 \
    op interface \
    ports { WBRAM_6_2_5_address0 { O 10 vector } WBRAM_6_2_5_ce0 { O 1 bit } WBRAM_6_2_5_d0 { O 32 vector } WBRAM_6_2_5_q0 { I 32 vector } WBRAM_6_2_5_we0 { O 1 bit } WBRAM_6_2_5_address1 { O 10 vector } WBRAM_6_2_5_ce1 { O 1 bit } WBRAM_6_2_5_d1 { O 32 vector } WBRAM_6_2_5_q1 { I 32 vector } WBRAM_6_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1137 \
    name WBRAM_6_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_6 \
    op interface \
    ports { WBRAM_6_0_6_address0 { O 10 vector } WBRAM_6_0_6_ce0 { O 1 bit } WBRAM_6_0_6_d0 { O 32 vector } WBRAM_6_0_6_q0 { I 32 vector } WBRAM_6_0_6_we0 { O 1 bit } WBRAM_6_0_6_address1 { O 10 vector } WBRAM_6_0_6_ce1 { O 1 bit } WBRAM_6_0_6_d1 { O 32 vector } WBRAM_6_0_6_q1 { I 32 vector } WBRAM_6_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1138 \
    name WBRAM_6_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_6 \
    op interface \
    ports { WBRAM_6_1_6_address0 { O 10 vector } WBRAM_6_1_6_ce0 { O 1 bit } WBRAM_6_1_6_d0 { O 32 vector } WBRAM_6_1_6_q0 { I 32 vector } WBRAM_6_1_6_we0 { O 1 bit } WBRAM_6_1_6_address1 { O 10 vector } WBRAM_6_1_6_ce1 { O 1 bit } WBRAM_6_1_6_d1 { O 32 vector } WBRAM_6_1_6_q1 { I 32 vector } WBRAM_6_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1139 \
    name WBRAM_6_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_6 \
    op interface \
    ports { WBRAM_6_2_6_address0 { O 10 vector } WBRAM_6_2_6_ce0 { O 1 bit } WBRAM_6_2_6_d0 { O 32 vector } WBRAM_6_2_6_q0 { I 32 vector } WBRAM_6_2_6_we0 { O 1 bit } WBRAM_6_2_6_address1 { O 10 vector } WBRAM_6_2_6_ce1 { O 1 bit } WBRAM_6_2_6_d1 { O 32 vector } WBRAM_6_2_6_q1 { I 32 vector } WBRAM_6_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1140 \
    name WBRAM_6_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_7 \
    op interface \
    ports { WBRAM_6_0_7_address0 { O 10 vector } WBRAM_6_0_7_ce0 { O 1 bit } WBRAM_6_0_7_d0 { O 32 vector } WBRAM_6_0_7_q0 { I 32 vector } WBRAM_6_0_7_we0 { O 1 bit } WBRAM_6_0_7_address1 { O 10 vector } WBRAM_6_0_7_ce1 { O 1 bit } WBRAM_6_0_7_d1 { O 32 vector } WBRAM_6_0_7_q1 { I 32 vector } WBRAM_6_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1141 \
    name WBRAM_6_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_7 \
    op interface \
    ports { WBRAM_6_1_7_address0 { O 10 vector } WBRAM_6_1_7_ce0 { O 1 bit } WBRAM_6_1_7_d0 { O 32 vector } WBRAM_6_1_7_q0 { I 32 vector } WBRAM_6_1_7_we0 { O 1 bit } WBRAM_6_1_7_address1 { O 10 vector } WBRAM_6_1_7_ce1 { O 1 bit } WBRAM_6_1_7_d1 { O 32 vector } WBRAM_6_1_7_q1 { I 32 vector } WBRAM_6_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1142 \
    name WBRAM_6_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_7 \
    op interface \
    ports { WBRAM_6_2_7_address0 { O 10 vector } WBRAM_6_2_7_ce0 { O 1 bit } WBRAM_6_2_7_d0 { O 32 vector } WBRAM_6_2_7_q0 { I 32 vector } WBRAM_6_2_7_we0 { O 1 bit } WBRAM_6_2_7_address1 { O 10 vector } WBRAM_6_2_7_ce1 { O 1 bit } WBRAM_6_2_7_d1 { O 32 vector } WBRAM_6_2_7_q1 { I 32 vector } WBRAM_6_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1143 \
    name WBRAM_6_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_8 \
    op interface \
    ports { WBRAM_6_0_8_address0 { O 10 vector } WBRAM_6_0_8_ce0 { O 1 bit } WBRAM_6_0_8_d0 { O 32 vector } WBRAM_6_0_8_q0 { I 32 vector } WBRAM_6_0_8_we0 { O 1 bit } WBRAM_6_0_8_address1 { O 10 vector } WBRAM_6_0_8_ce1 { O 1 bit } WBRAM_6_0_8_d1 { O 32 vector } WBRAM_6_0_8_q1 { I 32 vector } WBRAM_6_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1144 \
    name WBRAM_6_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_8 \
    op interface \
    ports { WBRAM_6_1_8_address0 { O 10 vector } WBRAM_6_1_8_ce0 { O 1 bit } WBRAM_6_1_8_d0 { O 32 vector } WBRAM_6_1_8_q0 { I 32 vector } WBRAM_6_1_8_we0 { O 1 bit } WBRAM_6_1_8_address1 { O 10 vector } WBRAM_6_1_8_ce1 { O 1 bit } WBRAM_6_1_8_d1 { O 32 vector } WBRAM_6_1_8_q1 { I 32 vector } WBRAM_6_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1145 \
    name WBRAM_6_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_8 \
    op interface \
    ports { WBRAM_6_2_8_address0 { O 10 vector } WBRAM_6_2_8_ce0 { O 1 bit } WBRAM_6_2_8_d0 { O 32 vector } WBRAM_6_2_8_q0 { I 32 vector } WBRAM_6_2_8_we0 { O 1 bit } WBRAM_6_2_8_address1 { O 10 vector } WBRAM_6_2_8_ce1 { O 1 bit } WBRAM_6_2_8_d1 { O 32 vector } WBRAM_6_2_8_q1 { I 32 vector } WBRAM_6_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1146 \
    name OBRAM_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_7 \
    op interface \
    ports { OBRAM_7_address0 { O 5 vector } OBRAM_7_ce0 { O 1 bit } OBRAM_7_d0 { O 32 vector } OBRAM_7_q0 { I 32 vector } OBRAM_7_we0 { O 1 bit } OBRAM_7_address1 { O 5 vector } OBRAM_7_ce1 { O 1 bit } OBRAM_7_d1 { O 32 vector } OBRAM_7_q1 { I 32 vector } OBRAM_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1147 \
    name WBRAM_7_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_0 \
    op interface \
    ports { WBRAM_7_0_0_address0 { O 10 vector } WBRAM_7_0_0_ce0 { O 1 bit } WBRAM_7_0_0_d0 { O 32 vector } WBRAM_7_0_0_q0 { I 32 vector } WBRAM_7_0_0_we0 { O 1 bit } WBRAM_7_0_0_address1 { O 10 vector } WBRAM_7_0_0_ce1 { O 1 bit } WBRAM_7_0_0_d1 { O 32 vector } WBRAM_7_0_0_q1 { I 32 vector } WBRAM_7_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1148 \
    name WBRAM_7_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_0 \
    op interface \
    ports { WBRAM_7_1_0_address0 { O 10 vector } WBRAM_7_1_0_ce0 { O 1 bit } WBRAM_7_1_0_d0 { O 32 vector } WBRAM_7_1_0_q0 { I 32 vector } WBRAM_7_1_0_we0 { O 1 bit } WBRAM_7_1_0_address1 { O 10 vector } WBRAM_7_1_0_ce1 { O 1 bit } WBRAM_7_1_0_d1 { O 32 vector } WBRAM_7_1_0_q1 { I 32 vector } WBRAM_7_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1149 \
    name WBRAM_7_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_0 \
    op interface \
    ports { WBRAM_7_2_0_address0 { O 10 vector } WBRAM_7_2_0_ce0 { O 1 bit } WBRAM_7_2_0_d0 { O 32 vector } WBRAM_7_2_0_q0 { I 32 vector } WBRAM_7_2_0_we0 { O 1 bit } WBRAM_7_2_0_address1 { O 10 vector } WBRAM_7_2_0_ce1 { O 1 bit } WBRAM_7_2_0_d1 { O 32 vector } WBRAM_7_2_0_q1 { I 32 vector } WBRAM_7_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1150 \
    name WBRAM_7_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_1 \
    op interface \
    ports { WBRAM_7_0_1_address0 { O 10 vector } WBRAM_7_0_1_ce0 { O 1 bit } WBRAM_7_0_1_d0 { O 32 vector } WBRAM_7_0_1_q0 { I 32 vector } WBRAM_7_0_1_we0 { O 1 bit } WBRAM_7_0_1_address1 { O 10 vector } WBRAM_7_0_1_ce1 { O 1 bit } WBRAM_7_0_1_d1 { O 32 vector } WBRAM_7_0_1_q1 { I 32 vector } WBRAM_7_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1151 \
    name WBRAM_7_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_1 \
    op interface \
    ports { WBRAM_7_1_1_address0 { O 10 vector } WBRAM_7_1_1_ce0 { O 1 bit } WBRAM_7_1_1_d0 { O 32 vector } WBRAM_7_1_1_q0 { I 32 vector } WBRAM_7_1_1_we0 { O 1 bit } WBRAM_7_1_1_address1 { O 10 vector } WBRAM_7_1_1_ce1 { O 1 bit } WBRAM_7_1_1_d1 { O 32 vector } WBRAM_7_1_1_q1 { I 32 vector } WBRAM_7_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1152 \
    name WBRAM_7_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_1 \
    op interface \
    ports { WBRAM_7_2_1_address0 { O 10 vector } WBRAM_7_2_1_ce0 { O 1 bit } WBRAM_7_2_1_d0 { O 32 vector } WBRAM_7_2_1_q0 { I 32 vector } WBRAM_7_2_1_we0 { O 1 bit } WBRAM_7_2_1_address1 { O 10 vector } WBRAM_7_2_1_ce1 { O 1 bit } WBRAM_7_2_1_d1 { O 32 vector } WBRAM_7_2_1_q1 { I 32 vector } WBRAM_7_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1153 \
    name WBRAM_7_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_2 \
    op interface \
    ports { WBRAM_7_0_2_address0 { O 10 vector } WBRAM_7_0_2_ce0 { O 1 bit } WBRAM_7_0_2_d0 { O 32 vector } WBRAM_7_0_2_q0 { I 32 vector } WBRAM_7_0_2_we0 { O 1 bit } WBRAM_7_0_2_address1 { O 10 vector } WBRAM_7_0_2_ce1 { O 1 bit } WBRAM_7_0_2_d1 { O 32 vector } WBRAM_7_0_2_q1 { I 32 vector } WBRAM_7_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1154 \
    name WBRAM_7_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_2 \
    op interface \
    ports { WBRAM_7_1_2_address0 { O 10 vector } WBRAM_7_1_2_ce0 { O 1 bit } WBRAM_7_1_2_d0 { O 32 vector } WBRAM_7_1_2_q0 { I 32 vector } WBRAM_7_1_2_we0 { O 1 bit } WBRAM_7_1_2_address1 { O 10 vector } WBRAM_7_1_2_ce1 { O 1 bit } WBRAM_7_1_2_d1 { O 32 vector } WBRAM_7_1_2_q1 { I 32 vector } WBRAM_7_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1155 \
    name WBRAM_7_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_2 \
    op interface \
    ports { WBRAM_7_2_2_address0 { O 10 vector } WBRAM_7_2_2_ce0 { O 1 bit } WBRAM_7_2_2_d0 { O 32 vector } WBRAM_7_2_2_q0 { I 32 vector } WBRAM_7_2_2_we0 { O 1 bit } WBRAM_7_2_2_address1 { O 10 vector } WBRAM_7_2_2_ce1 { O 1 bit } WBRAM_7_2_2_d1 { O 32 vector } WBRAM_7_2_2_q1 { I 32 vector } WBRAM_7_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1156 \
    name WBRAM_7_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_3 \
    op interface \
    ports { WBRAM_7_0_3_address0 { O 10 vector } WBRAM_7_0_3_ce0 { O 1 bit } WBRAM_7_0_3_d0 { O 32 vector } WBRAM_7_0_3_q0 { I 32 vector } WBRAM_7_0_3_we0 { O 1 bit } WBRAM_7_0_3_address1 { O 10 vector } WBRAM_7_0_3_ce1 { O 1 bit } WBRAM_7_0_3_d1 { O 32 vector } WBRAM_7_0_3_q1 { I 32 vector } WBRAM_7_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1157 \
    name WBRAM_7_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_3 \
    op interface \
    ports { WBRAM_7_1_3_address0 { O 10 vector } WBRAM_7_1_3_ce0 { O 1 bit } WBRAM_7_1_3_d0 { O 32 vector } WBRAM_7_1_3_q0 { I 32 vector } WBRAM_7_1_3_we0 { O 1 bit } WBRAM_7_1_3_address1 { O 10 vector } WBRAM_7_1_3_ce1 { O 1 bit } WBRAM_7_1_3_d1 { O 32 vector } WBRAM_7_1_3_q1 { I 32 vector } WBRAM_7_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1158 \
    name WBRAM_7_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_3 \
    op interface \
    ports { WBRAM_7_2_3_address0 { O 10 vector } WBRAM_7_2_3_ce0 { O 1 bit } WBRAM_7_2_3_d0 { O 32 vector } WBRAM_7_2_3_q0 { I 32 vector } WBRAM_7_2_3_we0 { O 1 bit } WBRAM_7_2_3_address1 { O 10 vector } WBRAM_7_2_3_ce1 { O 1 bit } WBRAM_7_2_3_d1 { O 32 vector } WBRAM_7_2_3_q1 { I 32 vector } WBRAM_7_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1159 \
    name WBRAM_7_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_4 \
    op interface \
    ports { WBRAM_7_0_4_address0 { O 10 vector } WBRAM_7_0_4_ce0 { O 1 bit } WBRAM_7_0_4_d0 { O 32 vector } WBRAM_7_0_4_q0 { I 32 vector } WBRAM_7_0_4_we0 { O 1 bit } WBRAM_7_0_4_address1 { O 10 vector } WBRAM_7_0_4_ce1 { O 1 bit } WBRAM_7_0_4_d1 { O 32 vector } WBRAM_7_0_4_q1 { I 32 vector } WBRAM_7_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1160 \
    name WBRAM_7_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_4 \
    op interface \
    ports { WBRAM_7_1_4_address0 { O 10 vector } WBRAM_7_1_4_ce0 { O 1 bit } WBRAM_7_1_4_d0 { O 32 vector } WBRAM_7_1_4_q0 { I 32 vector } WBRAM_7_1_4_we0 { O 1 bit } WBRAM_7_1_4_address1 { O 10 vector } WBRAM_7_1_4_ce1 { O 1 bit } WBRAM_7_1_4_d1 { O 32 vector } WBRAM_7_1_4_q1 { I 32 vector } WBRAM_7_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1161 \
    name WBRAM_7_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_4 \
    op interface \
    ports { WBRAM_7_2_4_address0 { O 10 vector } WBRAM_7_2_4_ce0 { O 1 bit } WBRAM_7_2_4_d0 { O 32 vector } WBRAM_7_2_4_q0 { I 32 vector } WBRAM_7_2_4_we0 { O 1 bit } WBRAM_7_2_4_address1 { O 10 vector } WBRAM_7_2_4_ce1 { O 1 bit } WBRAM_7_2_4_d1 { O 32 vector } WBRAM_7_2_4_q1 { I 32 vector } WBRAM_7_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1162 \
    name WBRAM_7_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_5 \
    op interface \
    ports { WBRAM_7_0_5_address0 { O 10 vector } WBRAM_7_0_5_ce0 { O 1 bit } WBRAM_7_0_5_d0 { O 32 vector } WBRAM_7_0_5_q0 { I 32 vector } WBRAM_7_0_5_we0 { O 1 bit } WBRAM_7_0_5_address1 { O 10 vector } WBRAM_7_0_5_ce1 { O 1 bit } WBRAM_7_0_5_d1 { O 32 vector } WBRAM_7_0_5_q1 { I 32 vector } WBRAM_7_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1163 \
    name WBRAM_7_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_5 \
    op interface \
    ports { WBRAM_7_1_5_address0 { O 10 vector } WBRAM_7_1_5_ce0 { O 1 bit } WBRAM_7_1_5_d0 { O 32 vector } WBRAM_7_1_5_q0 { I 32 vector } WBRAM_7_1_5_we0 { O 1 bit } WBRAM_7_1_5_address1 { O 10 vector } WBRAM_7_1_5_ce1 { O 1 bit } WBRAM_7_1_5_d1 { O 32 vector } WBRAM_7_1_5_q1 { I 32 vector } WBRAM_7_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1164 \
    name WBRAM_7_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_5 \
    op interface \
    ports { WBRAM_7_2_5_address0 { O 10 vector } WBRAM_7_2_5_ce0 { O 1 bit } WBRAM_7_2_5_d0 { O 32 vector } WBRAM_7_2_5_q0 { I 32 vector } WBRAM_7_2_5_we0 { O 1 bit } WBRAM_7_2_5_address1 { O 10 vector } WBRAM_7_2_5_ce1 { O 1 bit } WBRAM_7_2_5_d1 { O 32 vector } WBRAM_7_2_5_q1 { I 32 vector } WBRAM_7_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1165 \
    name WBRAM_7_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_6 \
    op interface \
    ports { WBRAM_7_0_6_address0 { O 10 vector } WBRAM_7_0_6_ce0 { O 1 bit } WBRAM_7_0_6_d0 { O 32 vector } WBRAM_7_0_6_q0 { I 32 vector } WBRAM_7_0_6_we0 { O 1 bit } WBRAM_7_0_6_address1 { O 10 vector } WBRAM_7_0_6_ce1 { O 1 bit } WBRAM_7_0_6_d1 { O 32 vector } WBRAM_7_0_6_q1 { I 32 vector } WBRAM_7_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1166 \
    name WBRAM_7_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_6 \
    op interface \
    ports { WBRAM_7_1_6_address0 { O 10 vector } WBRAM_7_1_6_ce0 { O 1 bit } WBRAM_7_1_6_d0 { O 32 vector } WBRAM_7_1_6_q0 { I 32 vector } WBRAM_7_1_6_we0 { O 1 bit } WBRAM_7_1_6_address1 { O 10 vector } WBRAM_7_1_6_ce1 { O 1 bit } WBRAM_7_1_6_d1 { O 32 vector } WBRAM_7_1_6_q1 { I 32 vector } WBRAM_7_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1167 \
    name WBRAM_7_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_6 \
    op interface \
    ports { WBRAM_7_2_6_address0 { O 10 vector } WBRAM_7_2_6_ce0 { O 1 bit } WBRAM_7_2_6_d0 { O 32 vector } WBRAM_7_2_6_q0 { I 32 vector } WBRAM_7_2_6_we0 { O 1 bit } WBRAM_7_2_6_address1 { O 10 vector } WBRAM_7_2_6_ce1 { O 1 bit } WBRAM_7_2_6_d1 { O 32 vector } WBRAM_7_2_6_q1 { I 32 vector } WBRAM_7_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1168 \
    name WBRAM_7_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_7 \
    op interface \
    ports { WBRAM_7_0_7_address0 { O 10 vector } WBRAM_7_0_7_ce0 { O 1 bit } WBRAM_7_0_7_d0 { O 32 vector } WBRAM_7_0_7_q0 { I 32 vector } WBRAM_7_0_7_we0 { O 1 bit } WBRAM_7_0_7_address1 { O 10 vector } WBRAM_7_0_7_ce1 { O 1 bit } WBRAM_7_0_7_d1 { O 32 vector } WBRAM_7_0_7_q1 { I 32 vector } WBRAM_7_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1169 \
    name WBRAM_7_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_7 \
    op interface \
    ports { WBRAM_7_1_7_address0 { O 10 vector } WBRAM_7_1_7_ce0 { O 1 bit } WBRAM_7_1_7_d0 { O 32 vector } WBRAM_7_1_7_q0 { I 32 vector } WBRAM_7_1_7_we0 { O 1 bit } WBRAM_7_1_7_address1 { O 10 vector } WBRAM_7_1_7_ce1 { O 1 bit } WBRAM_7_1_7_d1 { O 32 vector } WBRAM_7_1_7_q1 { I 32 vector } WBRAM_7_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1170 \
    name WBRAM_7_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_7 \
    op interface \
    ports { WBRAM_7_2_7_address0 { O 10 vector } WBRAM_7_2_7_ce0 { O 1 bit } WBRAM_7_2_7_d0 { O 32 vector } WBRAM_7_2_7_q0 { I 32 vector } WBRAM_7_2_7_we0 { O 1 bit } WBRAM_7_2_7_address1 { O 10 vector } WBRAM_7_2_7_ce1 { O 1 bit } WBRAM_7_2_7_d1 { O 32 vector } WBRAM_7_2_7_q1 { I 32 vector } WBRAM_7_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1171 \
    name WBRAM_7_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_8 \
    op interface \
    ports { WBRAM_7_0_8_address0 { O 10 vector } WBRAM_7_0_8_ce0 { O 1 bit } WBRAM_7_0_8_d0 { O 32 vector } WBRAM_7_0_8_q0 { I 32 vector } WBRAM_7_0_8_we0 { O 1 bit } WBRAM_7_0_8_address1 { O 10 vector } WBRAM_7_0_8_ce1 { O 1 bit } WBRAM_7_0_8_d1 { O 32 vector } WBRAM_7_0_8_q1 { I 32 vector } WBRAM_7_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1172 \
    name WBRAM_7_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_8 \
    op interface \
    ports { WBRAM_7_1_8_address0 { O 10 vector } WBRAM_7_1_8_ce0 { O 1 bit } WBRAM_7_1_8_d0 { O 32 vector } WBRAM_7_1_8_q0 { I 32 vector } WBRAM_7_1_8_we0 { O 1 bit } WBRAM_7_1_8_address1 { O 10 vector } WBRAM_7_1_8_ce1 { O 1 bit } WBRAM_7_1_8_d1 { O 32 vector } WBRAM_7_1_8_q1 { I 32 vector } WBRAM_7_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1173 \
    name WBRAM_7_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_8 \
    op interface \
    ports { WBRAM_7_2_8_address0 { O 10 vector } WBRAM_7_2_8_ce0 { O 1 bit } WBRAM_7_2_8_d0 { O 32 vector } WBRAM_7_2_8_q0 { I 32 vector } WBRAM_7_2_8_we0 { O 1 bit } WBRAM_7_2_8_address1 { O 10 vector } WBRAM_7_2_8_ce1 { O 1 bit } WBRAM_7_2_8_d1 { O 32 vector } WBRAM_7_2_8_q1 { I 32 vector } WBRAM_7_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1174 \
    name OBRAM_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_8 \
    op interface \
    ports { OBRAM_8_address0 { O 5 vector } OBRAM_8_ce0 { O 1 bit } OBRAM_8_d0 { O 32 vector } OBRAM_8_q0 { I 32 vector } OBRAM_8_we0 { O 1 bit } OBRAM_8_address1 { O 5 vector } OBRAM_8_ce1 { O 1 bit } OBRAM_8_d1 { O 32 vector } OBRAM_8_q1 { I 32 vector } OBRAM_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1175 \
    name WBRAM_8_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_0 \
    op interface \
    ports { WBRAM_8_0_0_address0 { O 10 vector } WBRAM_8_0_0_ce0 { O 1 bit } WBRAM_8_0_0_d0 { O 32 vector } WBRAM_8_0_0_q0 { I 32 vector } WBRAM_8_0_0_we0 { O 1 bit } WBRAM_8_0_0_address1 { O 10 vector } WBRAM_8_0_0_ce1 { O 1 bit } WBRAM_8_0_0_d1 { O 32 vector } WBRAM_8_0_0_q1 { I 32 vector } WBRAM_8_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1176 \
    name WBRAM_8_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_0 \
    op interface \
    ports { WBRAM_8_1_0_address0 { O 10 vector } WBRAM_8_1_0_ce0 { O 1 bit } WBRAM_8_1_0_d0 { O 32 vector } WBRAM_8_1_0_q0 { I 32 vector } WBRAM_8_1_0_we0 { O 1 bit } WBRAM_8_1_0_address1 { O 10 vector } WBRAM_8_1_0_ce1 { O 1 bit } WBRAM_8_1_0_d1 { O 32 vector } WBRAM_8_1_0_q1 { I 32 vector } WBRAM_8_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1177 \
    name WBRAM_8_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_0 \
    op interface \
    ports { WBRAM_8_2_0_address0 { O 10 vector } WBRAM_8_2_0_ce0 { O 1 bit } WBRAM_8_2_0_d0 { O 32 vector } WBRAM_8_2_0_q0 { I 32 vector } WBRAM_8_2_0_we0 { O 1 bit } WBRAM_8_2_0_address1 { O 10 vector } WBRAM_8_2_0_ce1 { O 1 bit } WBRAM_8_2_0_d1 { O 32 vector } WBRAM_8_2_0_q1 { I 32 vector } WBRAM_8_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1178 \
    name WBRAM_8_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_1 \
    op interface \
    ports { WBRAM_8_0_1_address0 { O 10 vector } WBRAM_8_0_1_ce0 { O 1 bit } WBRAM_8_0_1_d0 { O 32 vector } WBRAM_8_0_1_q0 { I 32 vector } WBRAM_8_0_1_we0 { O 1 bit } WBRAM_8_0_1_address1 { O 10 vector } WBRAM_8_0_1_ce1 { O 1 bit } WBRAM_8_0_1_d1 { O 32 vector } WBRAM_8_0_1_q1 { I 32 vector } WBRAM_8_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1179 \
    name WBRAM_8_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_1 \
    op interface \
    ports { WBRAM_8_1_1_address0 { O 10 vector } WBRAM_8_1_1_ce0 { O 1 bit } WBRAM_8_1_1_d0 { O 32 vector } WBRAM_8_1_1_q0 { I 32 vector } WBRAM_8_1_1_we0 { O 1 bit } WBRAM_8_1_1_address1 { O 10 vector } WBRAM_8_1_1_ce1 { O 1 bit } WBRAM_8_1_1_d1 { O 32 vector } WBRAM_8_1_1_q1 { I 32 vector } WBRAM_8_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1180 \
    name WBRAM_8_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_1 \
    op interface \
    ports { WBRAM_8_2_1_address0 { O 10 vector } WBRAM_8_2_1_ce0 { O 1 bit } WBRAM_8_2_1_d0 { O 32 vector } WBRAM_8_2_1_q0 { I 32 vector } WBRAM_8_2_1_we0 { O 1 bit } WBRAM_8_2_1_address1 { O 10 vector } WBRAM_8_2_1_ce1 { O 1 bit } WBRAM_8_2_1_d1 { O 32 vector } WBRAM_8_2_1_q1 { I 32 vector } WBRAM_8_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1181 \
    name WBRAM_8_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_2 \
    op interface \
    ports { WBRAM_8_0_2_address0 { O 10 vector } WBRAM_8_0_2_ce0 { O 1 bit } WBRAM_8_0_2_d0 { O 32 vector } WBRAM_8_0_2_q0 { I 32 vector } WBRAM_8_0_2_we0 { O 1 bit } WBRAM_8_0_2_address1 { O 10 vector } WBRAM_8_0_2_ce1 { O 1 bit } WBRAM_8_0_2_d1 { O 32 vector } WBRAM_8_0_2_q1 { I 32 vector } WBRAM_8_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1182 \
    name WBRAM_8_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_2 \
    op interface \
    ports { WBRAM_8_1_2_address0 { O 10 vector } WBRAM_8_1_2_ce0 { O 1 bit } WBRAM_8_1_2_d0 { O 32 vector } WBRAM_8_1_2_q0 { I 32 vector } WBRAM_8_1_2_we0 { O 1 bit } WBRAM_8_1_2_address1 { O 10 vector } WBRAM_8_1_2_ce1 { O 1 bit } WBRAM_8_1_2_d1 { O 32 vector } WBRAM_8_1_2_q1 { I 32 vector } WBRAM_8_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1183 \
    name WBRAM_8_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_2 \
    op interface \
    ports { WBRAM_8_2_2_address0 { O 10 vector } WBRAM_8_2_2_ce0 { O 1 bit } WBRAM_8_2_2_d0 { O 32 vector } WBRAM_8_2_2_q0 { I 32 vector } WBRAM_8_2_2_we0 { O 1 bit } WBRAM_8_2_2_address1 { O 10 vector } WBRAM_8_2_2_ce1 { O 1 bit } WBRAM_8_2_2_d1 { O 32 vector } WBRAM_8_2_2_q1 { I 32 vector } WBRAM_8_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1184 \
    name WBRAM_8_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_3 \
    op interface \
    ports { WBRAM_8_0_3_address0 { O 10 vector } WBRAM_8_0_3_ce0 { O 1 bit } WBRAM_8_0_3_d0 { O 32 vector } WBRAM_8_0_3_q0 { I 32 vector } WBRAM_8_0_3_we0 { O 1 bit } WBRAM_8_0_3_address1 { O 10 vector } WBRAM_8_0_3_ce1 { O 1 bit } WBRAM_8_0_3_d1 { O 32 vector } WBRAM_8_0_3_q1 { I 32 vector } WBRAM_8_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1185 \
    name WBRAM_8_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_3 \
    op interface \
    ports { WBRAM_8_1_3_address0 { O 10 vector } WBRAM_8_1_3_ce0 { O 1 bit } WBRAM_8_1_3_d0 { O 32 vector } WBRAM_8_1_3_q0 { I 32 vector } WBRAM_8_1_3_we0 { O 1 bit } WBRAM_8_1_3_address1 { O 10 vector } WBRAM_8_1_3_ce1 { O 1 bit } WBRAM_8_1_3_d1 { O 32 vector } WBRAM_8_1_3_q1 { I 32 vector } WBRAM_8_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1186 \
    name WBRAM_8_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_3 \
    op interface \
    ports { WBRAM_8_2_3_address0 { O 10 vector } WBRAM_8_2_3_ce0 { O 1 bit } WBRAM_8_2_3_d0 { O 32 vector } WBRAM_8_2_3_q0 { I 32 vector } WBRAM_8_2_3_we0 { O 1 bit } WBRAM_8_2_3_address1 { O 10 vector } WBRAM_8_2_3_ce1 { O 1 bit } WBRAM_8_2_3_d1 { O 32 vector } WBRAM_8_2_3_q1 { I 32 vector } WBRAM_8_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1187 \
    name WBRAM_8_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_4 \
    op interface \
    ports { WBRAM_8_0_4_address0 { O 10 vector } WBRAM_8_0_4_ce0 { O 1 bit } WBRAM_8_0_4_d0 { O 32 vector } WBRAM_8_0_4_q0 { I 32 vector } WBRAM_8_0_4_we0 { O 1 bit } WBRAM_8_0_4_address1 { O 10 vector } WBRAM_8_0_4_ce1 { O 1 bit } WBRAM_8_0_4_d1 { O 32 vector } WBRAM_8_0_4_q1 { I 32 vector } WBRAM_8_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1188 \
    name WBRAM_8_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_4 \
    op interface \
    ports { WBRAM_8_1_4_address0 { O 10 vector } WBRAM_8_1_4_ce0 { O 1 bit } WBRAM_8_1_4_d0 { O 32 vector } WBRAM_8_1_4_q0 { I 32 vector } WBRAM_8_1_4_we0 { O 1 bit } WBRAM_8_1_4_address1 { O 10 vector } WBRAM_8_1_4_ce1 { O 1 bit } WBRAM_8_1_4_d1 { O 32 vector } WBRAM_8_1_4_q1 { I 32 vector } WBRAM_8_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1189 \
    name WBRAM_8_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_4 \
    op interface \
    ports { WBRAM_8_2_4_address0 { O 10 vector } WBRAM_8_2_4_ce0 { O 1 bit } WBRAM_8_2_4_d0 { O 32 vector } WBRAM_8_2_4_q0 { I 32 vector } WBRAM_8_2_4_we0 { O 1 bit } WBRAM_8_2_4_address1 { O 10 vector } WBRAM_8_2_4_ce1 { O 1 bit } WBRAM_8_2_4_d1 { O 32 vector } WBRAM_8_2_4_q1 { I 32 vector } WBRAM_8_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1190 \
    name WBRAM_8_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_5 \
    op interface \
    ports { WBRAM_8_0_5_address0 { O 10 vector } WBRAM_8_0_5_ce0 { O 1 bit } WBRAM_8_0_5_d0 { O 32 vector } WBRAM_8_0_5_q0 { I 32 vector } WBRAM_8_0_5_we0 { O 1 bit } WBRAM_8_0_5_address1 { O 10 vector } WBRAM_8_0_5_ce1 { O 1 bit } WBRAM_8_0_5_d1 { O 32 vector } WBRAM_8_0_5_q1 { I 32 vector } WBRAM_8_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1191 \
    name WBRAM_8_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_5 \
    op interface \
    ports { WBRAM_8_1_5_address0 { O 10 vector } WBRAM_8_1_5_ce0 { O 1 bit } WBRAM_8_1_5_d0 { O 32 vector } WBRAM_8_1_5_q0 { I 32 vector } WBRAM_8_1_5_we0 { O 1 bit } WBRAM_8_1_5_address1 { O 10 vector } WBRAM_8_1_5_ce1 { O 1 bit } WBRAM_8_1_5_d1 { O 32 vector } WBRAM_8_1_5_q1 { I 32 vector } WBRAM_8_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1192 \
    name WBRAM_8_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_5 \
    op interface \
    ports { WBRAM_8_2_5_address0 { O 10 vector } WBRAM_8_2_5_ce0 { O 1 bit } WBRAM_8_2_5_d0 { O 32 vector } WBRAM_8_2_5_q0 { I 32 vector } WBRAM_8_2_5_we0 { O 1 bit } WBRAM_8_2_5_address1 { O 10 vector } WBRAM_8_2_5_ce1 { O 1 bit } WBRAM_8_2_5_d1 { O 32 vector } WBRAM_8_2_5_q1 { I 32 vector } WBRAM_8_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1193 \
    name WBRAM_8_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_6 \
    op interface \
    ports { WBRAM_8_0_6_address0 { O 10 vector } WBRAM_8_0_6_ce0 { O 1 bit } WBRAM_8_0_6_d0 { O 32 vector } WBRAM_8_0_6_q0 { I 32 vector } WBRAM_8_0_6_we0 { O 1 bit } WBRAM_8_0_6_address1 { O 10 vector } WBRAM_8_0_6_ce1 { O 1 bit } WBRAM_8_0_6_d1 { O 32 vector } WBRAM_8_0_6_q1 { I 32 vector } WBRAM_8_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1194 \
    name WBRAM_8_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_6 \
    op interface \
    ports { WBRAM_8_1_6_address0 { O 10 vector } WBRAM_8_1_6_ce0 { O 1 bit } WBRAM_8_1_6_d0 { O 32 vector } WBRAM_8_1_6_q0 { I 32 vector } WBRAM_8_1_6_we0 { O 1 bit } WBRAM_8_1_6_address1 { O 10 vector } WBRAM_8_1_6_ce1 { O 1 bit } WBRAM_8_1_6_d1 { O 32 vector } WBRAM_8_1_6_q1 { I 32 vector } WBRAM_8_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1195 \
    name WBRAM_8_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_6 \
    op interface \
    ports { WBRAM_8_2_6_address0 { O 10 vector } WBRAM_8_2_6_ce0 { O 1 bit } WBRAM_8_2_6_d0 { O 32 vector } WBRAM_8_2_6_q0 { I 32 vector } WBRAM_8_2_6_we0 { O 1 bit } WBRAM_8_2_6_address1 { O 10 vector } WBRAM_8_2_6_ce1 { O 1 bit } WBRAM_8_2_6_d1 { O 32 vector } WBRAM_8_2_6_q1 { I 32 vector } WBRAM_8_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1196 \
    name WBRAM_8_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_7 \
    op interface \
    ports { WBRAM_8_0_7_address0 { O 10 vector } WBRAM_8_0_7_ce0 { O 1 bit } WBRAM_8_0_7_d0 { O 32 vector } WBRAM_8_0_7_q0 { I 32 vector } WBRAM_8_0_7_we0 { O 1 bit } WBRAM_8_0_7_address1 { O 10 vector } WBRAM_8_0_7_ce1 { O 1 bit } WBRAM_8_0_7_d1 { O 32 vector } WBRAM_8_0_7_q1 { I 32 vector } WBRAM_8_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1197 \
    name WBRAM_8_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_7 \
    op interface \
    ports { WBRAM_8_1_7_address0 { O 10 vector } WBRAM_8_1_7_ce0 { O 1 bit } WBRAM_8_1_7_d0 { O 32 vector } WBRAM_8_1_7_q0 { I 32 vector } WBRAM_8_1_7_we0 { O 1 bit } WBRAM_8_1_7_address1 { O 10 vector } WBRAM_8_1_7_ce1 { O 1 bit } WBRAM_8_1_7_d1 { O 32 vector } WBRAM_8_1_7_q1 { I 32 vector } WBRAM_8_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1198 \
    name WBRAM_8_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_7 \
    op interface \
    ports { WBRAM_8_2_7_address0 { O 10 vector } WBRAM_8_2_7_ce0 { O 1 bit } WBRAM_8_2_7_d0 { O 32 vector } WBRAM_8_2_7_q0 { I 32 vector } WBRAM_8_2_7_we0 { O 1 bit } WBRAM_8_2_7_address1 { O 10 vector } WBRAM_8_2_7_ce1 { O 1 bit } WBRAM_8_2_7_d1 { O 32 vector } WBRAM_8_2_7_q1 { I 32 vector } WBRAM_8_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1199 \
    name WBRAM_8_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_8 \
    op interface \
    ports { WBRAM_8_0_8_address0 { O 10 vector } WBRAM_8_0_8_ce0 { O 1 bit } WBRAM_8_0_8_d0 { O 32 vector } WBRAM_8_0_8_q0 { I 32 vector } WBRAM_8_0_8_we0 { O 1 bit } WBRAM_8_0_8_address1 { O 10 vector } WBRAM_8_0_8_ce1 { O 1 bit } WBRAM_8_0_8_d1 { O 32 vector } WBRAM_8_0_8_q1 { I 32 vector } WBRAM_8_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1200 \
    name WBRAM_8_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_8 \
    op interface \
    ports { WBRAM_8_1_8_address0 { O 10 vector } WBRAM_8_1_8_ce0 { O 1 bit } WBRAM_8_1_8_d0 { O 32 vector } WBRAM_8_1_8_q0 { I 32 vector } WBRAM_8_1_8_we0 { O 1 bit } WBRAM_8_1_8_address1 { O 10 vector } WBRAM_8_1_8_ce1 { O 1 bit } WBRAM_8_1_8_d1 { O 32 vector } WBRAM_8_1_8_q1 { I 32 vector } WBRAM_8_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1201 \
    name WBRAM_8_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_8 \
    op interface \
    ports { WBRAM_8_2_8_address0 { O 10 vector } WBRAM_8_2_8_ce0 { O 1 bit } WBRAM_8_2_8_d0 { O 32 vector } WBRAM_8_2_8_q0 { I 32 vector } WBRAM_8_2_8_we0 { O 1 bit } WBRAM_8_2_8_address1 { O 10 vector } WBRAM_8_2_8_ce1 { O 1 bit } WBRAM_8_2_8_d1 { O 32 vector } WBRAM_8_2_8_q1 { I 32 vector } WBRAM_8_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1202 \
    name OBRAM_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_9 \
    op interface \
    ports { OBRAM_9_address0 { O 5 vector } OBRAM_9_ce0 { O 1 bit } OBRAM_9_d0 { O 32 vector } OBRAM_9_q0 { I 32 vector } OBRAM_9_we0 { O 1 bit } OBRAM_9_address1 { O 5 vector } OBRAM_9_ce1 { O 1 bit } OBRAM_9_d1 { O 32 vector } OBRAM_9_q1 { I 32 vector } OBRAM_9_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1203 \
    name WBRAM_9_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_0 \
    op interface \
    ports { WBRAM_9_0_0_address0 { O 10 vector } WBRAM_9_0_0_ce0 { O 1 bit } WBRAM_9_0_0_d0 { O 32 vector } WBRAM_9_0_0_q0 { I 32 vector } WBRAM_9_0_0_we0 { O 1 bit } WBRAM_9_0_0_address1 { O 10 vector } WBRAM_9_0_0_ce1 { O 1 bit } WBRAM_9_0_0_d1 { O 32 vector } WBRAM_9_0_0_q1 { I 32 vector } WBRAM_9_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1204 \
    name WBRAM_9_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_0 \
    op interface \
    ports { WBRAM_9_1_0_address0 { O 10 vector } WBRAM_9_1_0_ce0 { O 1 bit } WBRAM_9_1_0_d0 { O 32 vector } WBRAM_9_1_0_q0 { I 32 vector } WBRAM_9_1_0_we0 { O 1 bit } WBRAM_9_1_0_address1 { O 10 vector } WBRAM_9_1_0_ce1 { O 1 bit } WBRAM_9_1_0_d1 { O 32 vector } WBRAM_9_1_0_q1 { I 32 vector } WBRAM_9_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1205 \
    name WBRAM_9_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_0 \
    op interface \
    ports { WBRAM_9_2_0_address0 { O 10 vector } WBRAM_9_2_0_ce0 { O 1 bit } WBRAM_9_2_0_d0 { O 32 vector } WBRAM_9_2_0_q0 { I 32 vector } WBRAM_9_2_0_we0 { O 1 bit } WBRAM_9_2_0_address1 { O 10 vector } WBRAM_9_2_0_ce1 { O 1 bit } WBRAM_9_2_0_d1 { O 32 vector } WBRAM_9_2_0_q1 { I 32 vector } WBRAM_9_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1206 \
    name WBRAM_9_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_1 \
    op interface \
    ports { WBRAM_9_0_1_address0 { O 10 vector } WBRAM_9_0_1_ce0 { O 1 bit } WBRAM_9_0_1_d0 { O 32 vector } WBRAM_9_0_1_q0 { I 32 vector } WBRAM_9_0_1_we0 { O 1 bit } WBRAM_9_0_1_address1 { O 10 vector } WBRAM_9_0_1_ce1 { O 1 bit } WBRAM_9_0_1_d1 { O 32 vector } WBRAM_9_0_1_q1 { I 32 vector } WBRAM_9_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1207 \
    name WBRAM_9_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_1 \
    op interface \
    ports { WBRAM_9_1_1_address0 { O 10 vector } WBRAM_9_1_1_ce0 { O 1 bit } WBRAM_9_1_1_d0 { O 32 vector } WBRAM_9_1_1_q0 { I 32 vector } WBRAM_9_1_1_we0 { O 1 bit } WBRAM_9_1_1_address1 { O 10 vector } WBRAM_9_1_1_ce1 { O 1 bit } WBRAM_9_1_1_d1 { O 32 vector } WBRAM_9_1_1_q1 { I 32 vector } WBRAM_9_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1208 \
    name WBRAM_9_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_1 \
    op interface \
    ports { WBRAM_9_2_1_address0 { O 10 vector } WBRAM_9_2_1_ce0 { O 1 bit } WBRAM_9_2_1_d0 { O 32 vector } WBRAM_9_2_1_q0 { I 32 vector } WBRAM_9_2_1_we0 { O 1 bit } WBRAM_9_2_1_address1 { O 10 vector } WBRAM_9_2_1_ce1 { O 1 bit } WBRAM_9_2_1_d1 { O 32 vector } WBRAM_9_2_1_q1 { I 32 vector } WBRAM_9_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1209 \
    name WBRAM_9_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_2 \
    op interface \
    ports { WBRAM_9_0_2_address0 { O 10 vector } WBRAM_9_0_2_ce0 { O 1 bit } WBRAM_9_0_2_d0 { O 32 vector } WBRAM_9_0_2_q0 { I 32 vector } WBRAM_9_0_2_we0 { O 1 bit } WBRAM_9_0_2_address1 { O 10 vector } WBRAM_9_0_2_ce1 { O 1 bit } WBRAM_9_0_2_d1 { O 32 vector } WBRAM_9_0_2_q1 { I 32 vector } WBRAM_9_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1210 \
    name WBRAM_9_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_2 \
    op interface \
    ports { WBRAM_9_1_2_address0 { O 10 vector } WBRAM_9_1_2_ce0 { O 1 bit } WBRAM_9_1_2_d0 { O 32 vector } WBRAM_9_1_2_q0 { I 32 vector } WBRAM_9_1_2_we0 { O 1 bit } WBRAM_9_1_2_address1 { O 10 vector } WBRAM_9_1_2_ce1 { O 1 bit } WBRAM_9_1_2_d1 { O 32 vector } WBRAM_9_1_2_q1 { I 32 vector } WBRAM_9_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1211 \
    name WBRAM_9_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_2 \
    op interface \
    ports { WBRAM_9_2_2_address0 { O 10 vector } WBRAM_9_2_2_ce0 { O 1 bit } WBRAM_9_2_2_d0 { O 32 vector } WBRAM_9_2_2_q0 { I 32 vector } WBRAM_9_2_2_we0 { O 1 bit } WBRAM_9_2_2_address1 { O 10 vector } WBRAM_9_2_2_ce1 { O 1 bit } WBRAM_9_2_2_d1 { O 32 vector } WBRAM_9_2_2_q1 { I 32 vector } WBRAM_9_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1212 \
    name WBRAM_9_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_3 \
    op interface \
    ports { WBRAM_9_0_3_address0 { O 10 vector } WBRAM_9_0_3_ce0 { O 1 bit } WBRAM_9_0_3_d0 { O 32 vector } WBRAM_9_0_3_q0 { I 32 vector } WBRAM_9_0_3_we0 { O 1 bit } WBRAM_9_0_3_address1 { O 10 vector } WBRAM_9_0_3_ce1 { O 1 bit } WBRAM_9_0_3_d1 { O 32 vector } WBRAM_9_0_3_q1 { I 32 vector } WBRAM_9_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1213 \
    name WBRAM_9_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_3 \
    op interface \
    ports { WBRAM_9_1_3_address0 { O 10 vector } WBRAM_9_1_3_ce0 { O 1 bit } WBRAM_9_1_3_d0 { O 32 vector } WBRAM_9_1_3_q0 { I 32 vector } WBRAM_9_1_3_we0 { O 1 bit } WBRAM_9_1_3_address1 { O 10 vector } WBRAM_9_1_3_ce1 { O 1 bit } WBRAM_9_1_3_d1 { O 32 vector } WBRAM_9_1_3_q1 { I 32 vector } WBRAM_9_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1214 \
    name WBRAM_9_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_3 \
    op interface \
    ports { WBRAM_9_2_3_address0 { O 10 vector } WBRAM_9_2_3_ce0 { O 1 bit } WBRAM_9_2_3_d0 { O 32 vector } WBRAM_9_2_3_q0 { I 32 vector } WBRAM_9_2_3_we0 { O 1 bit } WBRAM_9_2_3_address1 { O 10 vector } WBRAM_9_2_3_ce1 { O 1 bit } WBRAM_9_2_3_d1 { O 32 vector } WBRAM_9_2_3_q1 { I 32 vector } WBRAM_9_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1215 \
    name WBRAM_9_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_4 \
    op interface \
    ports { WBRAM_9_0_4_address0 { O 10 vector } WBRAM_9_0_4_ce0 { O 1 bit } WBRAM_9_0_4_d0 { O 32 vector } WBRAM_9_0_4_q0 { I 32 vector } WBRAM_9_0_4_we0 { O 1 bit } WBRAM_9_0_4_address1 { O 10 vector } WBRAM_9_0_4_ce1 { O 1 bit } WBRAM_9_0_4_d1 { O 32 vector } WBRAM_9_0_4_q1 { I 32 vector } WBRAM_9_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1216 \
    name WBRAM_9_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_4 \
    op interface \
    ports { WBRAM_9_1_4_address0 { O 10 vector } WBRAM_9_1_4_ce0 { O 1 bit } WBRAM_9_1_4_d0 { O 32 vector } WBRAM_9_1_4_q0 { I 32 vector } WBRAM_9_1_4_we0 { O 1 bit } WBRAM_9_1_4_address1 { O 10 vector } WBRAM_9_1_4_ce1 { O 1 bit } WBRAM_9_1_4_d1 { O 32 vector } WBRAM_9_1_4_q1 { I 32 vector } WBRAM_9_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1217 \
    name WBRAM_9_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_4 \
    op interface \
    ports { WBRAM_9_2_4_address0 { O 10 vector } WBRAM_9_2_4_ce0 { O 1 bit } WBRAM_9_2_4_d0 { O 32 vector } WBRAM_9_2_4_q0 { I 32 vector } WBRAM_9_2_4_we0 { O 1 bit } WBRAM_9_2_4_address1 { O 10 vector } WBRAM_9_2_4_ce1 { O 1 bit } WBRAM_9_2_4_d1 { O 32 vector } WBRAM_9_2_4_q1 { I 32 vector } WBRAM_9_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1218 \
    name WBRAM_9_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_5 \
    op interface \
    ports { WBRAM_9_0_5_address0 { O 10 vector } WBRAM_9_0_5_ce0 { O 1 bit } WBRAM_9_0_5_d0 { O 32 vector } WBRAM_9_0_5_q0 { I 32 vector } WBRAM_9_0_5_we0 { O 1 bit } WBRAM_9_0_5_address1 { O 10 vector } WBRAM_9_0_5_ce1 { O 1 bit } WBRAM_9_0_5_d1 { O 32 vector } WBRAM_9_0_5_q1 { I 32 vector } WBRAM_9_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1219 \
    name WBRAM_9_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_5 \
    op interface \
    ports { WBRAM_9_1_5_address0 { O 10 vector } WBRAM_9_1_5_ce0 { O 1 bit } WBRAM_9_1_5_d0 { O 32 vector } WBRAM_9_1_5_q0 { I 32 vector } WBRAM_9_1_5_we0 { O 1 bit } WBRAM_9_1_5_address1 { O 10 vector } WBRAM_9_1_5_ce1 { O 1 bit } WBRAM_9_1_5_d1 { O 32 vector } WBRAM_9_1_5_q1 { I 32 vector } WBRAM_9_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1220 \
    name WBRAM_9_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_5 \
    op interface \
    ports { WBRAM_9_2_5_address0 { O 10 vector } WBRAM_9_2_5_ce0 { O 1 bit } WBRAM_9_2_5_d0 { O 32 vector } WBRAM_9_2_5_q0 { I 32 vector } WBRAM_9_2_5_we0 { O 1 bit } WBRAM_9_2_5_address1 { O 10 vector } WBRAM_9_2_5_ce1 { O 1 bit } WBRAM_9_2_5_d1 { O 32 vector } WBRAM_9_2_5_q1 { I 32 vector } WBRAM_9_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1221 \
    name WBRAM_9_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_6 \
    op interface \
    ports { WBRAM_9_0_6_address0 { O 10 vector } WBRAM_9_0_6_ce0 { O 1 bit } WBRAM_9_0_6_d0 { O 32 vector } WBRAM_9_0_6_q0 { I 32 vector } WBRAM_9_0_6_we0 { O 1 bit } WBRAM_9_0_6_address1 { O 10 vector } WBRAM_9_0_6_ce1 { O 1 bit } WBRAM_9_0_6_d1 { O 32 vector } WBRAM_9_0_6_q1 { I 32 vector } WBRAM_9_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1222 \
    name WBRAM_9_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_6 \
    op interface \
    ports { WBRAM_9_1_6_address0 { O 10 vector } WBRAM_9_1_6_ce0 { O 1 bit } WBRAM_9_1_6_d0 { O 32 vector } WBRAM_9_1_6_q0 { I 32 vector } WBRAM_9_1_6_we0 { O 1 bit } WBRAM_9_1_6_address1 { O 10 vector } WBRAM_9_1_6_ce1 { O 1 bit } WBRAM_9_1_6_d1 { O 32 vector } WBRAM_9_1_6_q1 { I 32 vector } WBRAM_9_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1223 \
    name WBRAM_9_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_6 \
    op interface \
    ports { WBRAM_9_2_6_address0 { O 10 vector } WBRAM_9_2_6_ce0 { O 1 bit } WBRAM_9_2_6_d0 { O 32 vector } WBRAM_9_2_6_q0 { I 32 vector } WBRAM_9_2_6_we0 { O 1 bit } WBRAM_9_2_6_address1 { O 10 vector } WBRAM_9_2_6_ce1 { O 1 bit } WBRAM_9_2_6_d1 { O 32 vector } WBRAM_9_2_6_q1 { I 32 vector } WBRAM_9_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1224 \
    name WBRAM_9_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_7 \
    op interface \
    ports { WBRAM_9_0_7_address0 { O 10 vector } WBRAM_9_0_7_ce0 { O 1 bit } WBRAM_9_0_7_d0 { O 32 vector } WBRAM_9_0_7_q0 { I 32 vector } WBRAM_9_0_7_we0 { O 1 bit } WBRAM_9_0_7_address1 { O 10 vector } WBRAM_9_0_7_ce1 { O 1 bit } WBRAM_9_0_7_d1 { O 32 vector } WBRAM_9_0_7_q1 { I 32 vector } WBRAM_9_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1225 \
    name WBRAM_9_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_7 \
    op interface \
    ports { WBRAM_9_1_7_address0 { O 10 vector } WBRAM_9_1_7_ce0 { O 1 bit } WBRAM_9_1_7_d0 { O 32 vector } WBRAM_9_1_7_q0 { I 32 vector } WBRAM_9_1_7_we0 { O 1 bit } WBRAM_9_1_7_address1 { O 10 vector } WBRAM_9_1_7_ce1 { O 1 bit } WBRAM_9_1_7_d1 { O 32 vector } WBRAM_9_1_7_q1 { I 32 vector } WBRAM_9_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1226 \
    name WBRAM_9_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_7 \
    op interface \
    ports { WBRAM_9_2_7_address0 { O 10 vector } WBRAM_9_2_7_ce0 { O 1 bit } WBRAM_9_2_7_d0 { O 32 vector } WBRAM_9_2_7_q0 { I 32 vector } WBRAM_9_2_7_we0 { O 1 bit } WBRAM_9_2_7_address1 { O 10 vector } WBRAM_9_2_7_ce1 { O 1 bit } WBRAM_9_2_7_d1 { O 32 vector } WBRAM_9_2_7_q1 { I 32 vector } WBRAM_9_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1227 \
    name WBRAM_9_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_8 \
    op interface \
    ports { WBRAM_9_0_8_address0 { O 10 vector } WBRAM_9_0_8_ce0 { O 1 bit } WBRAM_9_0_8_d0 { O 32 vector } WBRAM_9_0_8_q0 { I 32 vector } WBRAM_9_0_8_we0 { O 1 bit } WBRAM_9_0_8_address1 { O 10 vector } WBRAM_9_0_8_ce1 { O 1 bit } WBRAM_9_0_8_d1 { O 32 vector } WBRAM_9_0_8_q1 { I 32 vector } WBRAM_9_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1228 \
    name WBRAM_9_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_8 \
    op interface \
    ports { WBRAM_9_1_8_address0 { O 10 vector } WBRAM_9_1_8_ce0 { O 1 bit } WBRAM_9_1_8_d0 { O 32 vector } WBRAM_9_1_8_q0 { I 32 vector } WBRAM_9_1_8_we0 { O 1 bit } WBRAM_9_1_8_address1 { O 10 vector } WBRAM_9_1_8_ce1 { O 1 bit } WBRAM_9_1_8_d1 { O 32 vector } WBRAM_9_1_8_q1 { I 32 vector } WBRAM_9_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1229 \
    name WBRAM_9_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_8 \
    op interface \
    ports { WBRAM_9_2_8_address0 { O 10 vector } WBRAM_9_2_8_ce0 { O 1 bit } WBRAM_9_2_8_d0 { O 32 vector } WBRAM_9_2_8_q0 { I 32 vector } WBRAM_9_2_8_we0 { O 1 bit } WBRAM_9_2_8_address1 { O 10 vector } WBRAM_9_2_8_ce1 { O 1 bit } WBRAM_9_2_8_d1 { O 32 vector } WBRAM_9_2_8_q1 { I 32 vector } WBRAM_9_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1230 \
    name OBRAM_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_10 \
    op interface \
    ports { OBRAM_10_address0 { O 5 vector } OBRAM_10_ce0 { O 1 bit } OBRAM_10_d0 { O 32 vector } OBRAM_10_q0 { I 32 vector } OBRAM_10_we0 { O 1 bit } OBRAM_10_address1 { O 5 vector } OBRAM_10_ce1 { O 1 bit } OBRAM_10_d1 { O 32 vector } OBRAM_10_q1 { I 32 vector } OBRAM_10_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1231 \
    name WBRAM_10_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_0 \
    op interface \
    ports { WBRAM_10_0_0_address0 { O 10 vector } WBRAM_10_0_0_ce0 { O 1 bit } WBRAM_10_0_0_d0 { O 32 vector } WBRAM_10_0_0_q0 { I 32 vector } WBRAM_10_0_0_we0 { O 1 bit } WBRAM_10_0_0_address1 { O 10 vector } WBRAM_10_0_0_ce1 { O 1 bit } WBRAM_10_0_0_d1 { O 32 vector } WBRAM_10_0_0_q1 { I 32 vector } WBRAM_10_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1232 \
    name WBRAM_10_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_0 \
    op interface \
    ports { WBRAM_10_1_0_address0 { O 10 vector } WBRAM_10_1_0_ce0 { O 1 bit } WBRAM_10_1_0_d0 { O 32 vector } WBRAM_10_1_0_q0 { I 32 vector } WBRAM_10_1_0_we0 { O 1 bit } WBRAM_10_1_0_address1 { O 10 vector } WBRAM_10_1_0_ce1 { O 1 bit } WBRAM_10_1_0_d1 { O 32 vector } WBRAM_10_1_0_q1 { I 32 vector } WBRAM_10_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1233 \
    name WBRAM_10_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_0 \
    op interface \
    ports { WBRAM_10_2_0_address0 { O 10 vector } WBRAM_10_2_0_ce0 { O 1 bit } WBRAM_10_2_0_d0 { O 32 vector } WBRAM_10_2_0_q0 { I 32 vector } WBRAM_10_2_0_we0 { O 1 bit } WBRAM_10_2_0_address1 { O 10 vector } WBRAM_10_2_0_ce1 { O 1 bit } WBRAM_10_2_0_d1 { O 32 vector } WBRAM_10_2_0_q1 { I 32 vector } WBRAM_10_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1234 \
    name WBRAM_10_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_1 \
    op interface \
    ports { WBRAM_10_0_1_address0 { O 10 vector } WBRAM_10_0_1_ce0 { O 1 bit } WBRAM_10_0_1_d0 { O 32 vector } WBRAM_10_0_1_q0 { I 32 vector } WBRAM_10_0_1_we0 { O 1 bit } WBRAM_10_0_1_address1 { O 10 vector } WBRAM_10_0_1_ce1 { O 1 bit } WBRAM_10_0_1_d1 { O 32 vector } WBRAM_10_0_1_q1 { I 32 vector } WBRAM_10_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1235 \
    name WBRAM_10_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_1 \
    op interface \
    ports { WBRAM_10_1_1_address0 { O 10 vector } WBRAM_10_1_1_ce0 { O 1 bit } WBRAM_10_1_1_d0 { O 32 vector } WBRAM_10_1_1_q0 { I 32 vector } WBRAM_10_1_1_we0 { O 1 bit } WBRAM_10_1_1_address1 { O 10 vector } WBRAM_10_1_1_ce1 { O 1 bit } WBRAM_10_1_1_d1 { O 32 vector } WBRAM_10_1_1_q1 { I 32 vector } WBRAM_10_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1236 \
    name WBRAM_10_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_1 \
    op interface \
    ports { WBRAM_10_2_1_address0 { O 10 vector } WBRAM_10_2_1_ce0 { O 1 bit } WBRAM_10_2_1_d0 { O 32 vector } WBRAM_10_2_1_q0 { I 32 vector } WBRAM_10_2_1_we0 { O 1 bit } WBRAM_10_2_1_address1 { O 10 vector } WBRAM_10_2_1_ce1 { O 1 bit } WBRAM_10_2_1_d1 { O 32 vector } WBRAM_10_2_1_q1 { I 32 vector } WBRAM_10_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1237 \
    name WBRAM_10_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_2 \
    op interface \
    ports { WBRAM_10_0_2_address0 { O 10 vector } WBRAM_10_0_2_ce0 { O 1 bit } WBRAM_10_0_2_d0 { O 32 vector } WBRAM_10_0_2_q0 { I 32 vector } WBRAM_10_0_2_we0 { O 1 bit } WBRAM_10_0_2_address1 { O 10 vector } WBRAM_10_0_2_ce1 { O 1 bit } WBRAM_10_0_2_d1 { O 32 vector } WBRAM_10_0_2_q1 { I 32 vector } WBRAM_10_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1238 \
    name WBRAM_10_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_2 \
    op interface \
    ports { WBRAM_10_1_2_address0 { O 10 vector } WBRAM_10_1_2_ce0 { O 1 bit } WBRAM_10_1_2_d0 { O 32 vector } WBRAM_10_1_2_q0 { I 32 vector } WBRAM_10_1_2_we0 { O 1 bit } WBRAM_10_1_2_address1 { O 10 vector } WBRAM_10_1_2_ce1 { O 1 bit } WBRAM_10_1_2_d1 { O 32 vector } WBRAM_10_1_2_q1 { I 32 vector } WBRAM_10_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1239 \
    name WBRAM_10_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_2 \
    op interface \
    ports { WBRAM_10_2_2_address0 { O 10 vector } WBRAM_10_2_2_ce0 { O 1 bit } WBRAM_10_2_2_d0 { O 32 vector } WBRAM_10_2_2_q0 { I 32 vector } WBRAM_10_2_2_we0 { O 1 bit } WBRAM_10_2_2_address1 { O 10 vector } WBRAM_10_2_2_ce1 { O 1 bit } WBRAM_10_2_2_d1 { O 32 vector } WBRAM_10_2_2_q1 { I 32 vector } WBRAM_10_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1240 \
    name WBRAM_10_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_3 \
    op interface \
    ports { WBRAM_10_0_3_address0 { O 10 vector } WBRAM_10_0_3_ce0 { O 1 bit } WBRAM_10_0_3_d0 { O 32 vector } WBRAM_10_0_3_q0 { I 32 vector } WBRAM_10_0_3_we0 { O 1 bit } WBRAM_10_0_3_address1 { O 10 vector } WBRAM_10_0_3_ce1 { O 1 bit } WBRAM_10_0_3_d1 { O 32 vector } WBRAM_10_0_3_q1 { I 32 vector } WBRAM_10_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1241 \
    name WBRAM_10_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_3 \
    op interface \
    ports { WBRAM_10_1_3_address0 { O 10 vector } WBRAM_10_1_3_ce0 { O 1 bit } WBRAM_10_1_3_d0 { O 32 vector } WBRAM_10_1_3_q0 { I 32 vector } WBRAM_10_1_3_we0 { O 1 bit } WBRAM_10_1_3_address1 { O 10 vector } WBRAM_10_1_3_ce1 { O 1 bit } WBRAM_10_1_3_d1 { O 32 vector } WBRAM_10_1_3_q1 { I 32 vector } WBRAM_10_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1242 \
    name WBRAM_10_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_3 \
    op interface \
    ports { WBRAM_10_2_3_address0 { O 10 vector } WBRAM_10_2_3_ce0 { O 1 bit } WBRAM_10_2_3_d0 { O 32 vector } WBRAM_10_2_3_q0 { I 32 vector } WBRAM_10_2_3_we0 { O 1 bit } WBRAM_10_2_3_address1 { O 10 vector } WBRAM_10_2_3_ce1 { O 1 bit } WBRAM_10_2_3_d1 { O 32 vector } WBRAM_10_2_3_q1 { I 32 vector } WBRAM_10_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1243 \
    name WBRAM_10_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_4 \
    op interface \
    ports { WBRAM_10_0_4_address0 { O 10 vector } WBRAM_10_0_4_ce0 { O 1 bit } WBRAM_10_0_4_d0 { O 32 vector } WBRAM_10_0_4_q0 { I 32 vector } WBRAM_10_0_4_we0 { O 1 bit } WBRAM_10_0_4_address1 { O 10 vector } WBRAM_10_0_4_ce1 { O 1 bit } WBRAM_10_0_4_d1 { O 32 vector } WBRAM_10_0_4_q1 { I 32 vector } WBRAM_10_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1244 \
    name WBRAM_10_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_4 \
    op interface \
    ports { WBRAM_10_1_4_address0 { O 10 vector } WBRAM_10_1_4_ce0 { O 1 bit } WBRAM_10_1_4_d0 { O 32 vector } WBRAM_10_1_4_q0 { I 32 vector } WBRAM_10_1_4_we0 { O 1 bit } WBRAM_10_1_4_address1 { O 10 vector } WBRAM_10_1_4_ce1 { O 1 bit } WBRAM_10_1_4_d1 { O 32 vector } WBRAM_10_1_4_q1 { I 32 vector } WBRAM_10_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1245 \
    name WBRAM_10_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_4 \
    op interface \
    ports { WBRAM_10_2_4_address0 { O 10 vector } WBRAM_10_2_4_ce0 { O 1 bit } WBRAM_10_2_4_d0 { O 32 vector } WBRAM_10_2_4_q0 { I 32 vector } WBRAM_10_2_4_we0 { O 1 bit } WBRAM_10_2_4_address1 { O 10 vector } WBRAM_10_2_4_ce1 { O 1 bit } WBRAM_10_2_4_d1 { O 32 vector } WBRAM_10_2_4_q1 { I 32 vector } WBRAM_10_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1246 \
    name WBRAM_10_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_5 \
    op interface \
    ports { WBRAM_10_0_5_address0 { O 10 vector } WBRAM_10_0_5_ce0 { O 1 bit } WBRAM_10_0_5_d0 { O 32 vector } WBRAM_10_0_5_q0 { I 32 vector } WBRAM_10_0_5_we0 { O 1 bit } WBRAM_10_0_5_address1 { O 10 vector } WBRAM_10_0_5_ce1 { O 1 bit } WBRAM_10_0_5_d1 { O 32 vector } WBRAM_10_0_5_q1 { I 32 vector } WBRAM_10_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1247 \
    name WBRAM_10_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_5 \
    op interface \
    ports { WBRAM_10_1_5_address0 { O 10 vector } WBRAM_10_1_5_ce0 { O 1 bit } WBRAM_10_1_5_d0 { O 32 vector } WBRAM_10_1_5_q0 { I 32 vector } WBRAM_10_1_5_we0 { O 1 bit } WBRAM_10_1_5_address1 { O 10 vector } WBRAM_10_1_5_ce1 { O 1 bit } WBRAM_10_1_5_d1 { O 32 vector } WBRAM_10_1_5_q1 { I 32 vector } WBRAM_10_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1248 \
    name WBRAM_10_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_5 \
    op interface \
    ports { WBRAM_10_2_5_address0 { O 10 vector } WBRAM_10_2_5_ce0 { O 1 bit } WBRAM_10_2_5_d0 { O 32 vector } WBRAM_10_2_5_q0 { I 32 vector } WBRAM_10_2_5_we0 { O 1 bit } WBRAM_10_2_5_address1 { O 10 vector } WBRAM_10_2_5_ce1 { O 1 bit } WBRAM_10_2_5_d1 { O 32 vector } WBRAM_10_2_5_q1 { I 32 vector } WBRAM_10_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1249 \
    name WBRAM_10_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_6 \
    op interface \
    ports { WBRAM_10_0_6_address0 { O 10 vector } WBRAM_10_0_6_ce0 { O 1 bit } WBRAM_10_0_6_d0 { O 32 vector } WBRAM_10_0_6_q0 { I 32 vector } WBRAM_10_0_6_we0 { O 1 bit } WBRAM_10_0_6_address1 { O 10 vector } WBRAM_10_0_6_ce1 { O 1 bit } WBRAM_10_0_6_d1 { O 32 vector } WBRAM_10_0_6_q1 { I 32 vector } WBRAM_10_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1250 \
    name WBRAM_10_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_6 \
    op interface \
    ports { WBRAM_10_1_6_address0 { O 10 vector } WBRAM_10_1_6_ce0 { O 1 bit } WBRAM_10_1_6_d0 { O 32 vector } WBRAM_10_1_6_q0 { I 32 vector } WBRAM_10_1_6_we0 { O 1 bit } WBRAM_10_1_6_address1 { O 10 vector } WBRAM_10_1_6_ce1 { O 1 bit } WBRAM_10_1_6_d1 { O 32 vector } WBRAM_10_1_6_q1 { I 32 vector } WBRAM_10_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1251 \
    name WBRAM_10_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_6 \
    op interface \
    ports { WBRAM_10_2_6_address0 { O 10 vector } WBRAM_10_2_6_ce0 { O 1 bit } WBRAM_10_2_6_d0 { O 32 vector } WBRAM_10_2_6_q0 { I 32 vector } WBRAM_10_2_6_we0 { O 1 bit } WBRAM_10_2_6_address1 { O 10 vector } WBRAM_10_2_6_ce1 { O 1 bit } WBRAM_10_2_6_d1 { O 32 vector } WBRAM_10_2_6_q1 { I 32 vector } WBRAM_10_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1252 \
    name WBRAM_10_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_7 \
    op interface \
    ports { WBRAM_10_0_7_address0 { O 10 vector } WBRAM_10_0_7_ce0 { O 1 bit } WBRAM_10_0_7_d0 { O 32 vector } WBRAM_10_0_7_q0 { I 32 vector } WBRAM_10_0_7_we0 { O 1 bit } WBRAM_10_0_7_address1 { O 10 vector } WBRAM_10_0_7_ce1 { O 1 bit } WBRAM_10_0_7_d1 { O 32 vector } WBRAM_10_0_7_q1 { I 32 vector } WBRAM_10_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1253 \
    name WBRAM_10_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_7 \
    op interface \
    ports { WBRAM_10_1_7_address0 { O 10 vector } WBRAM_10_1_7_ce0 { O 1 bit } WBRAM_10_1_7_d0 { O 32 vector } WBRAM_10_1_7_q0 { I 32 vector } WBRAM_10_1_7_we0 { O 1 bit } WBRAM_10_1_7_address1 { O 10 vector } WBRAM_10_1_7_ce1 { O 1 bit } WBRAM_10_1_7_d1 { O 32 vector } WBRAM_10_1_7_q1 { I 32 vector } WBRAM_10_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1254 \
    name WBRAM_10_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_7 \
    op interface \
    ports { WBRAM_10_2_7_address0 { O 10 vector } WBRAM_10_2_7_ce0 { O 1 bit } WBRAM_10_2_7_d0 { O 32 vector } WBRAM_10_2_7_q0 { I 32 vector } WBRAM_10_2_7_we0 { O 1 bit } WBRAM_10_2_7_address1 { O 10 vector } WBRAM_10_2_7_ce1 { O 1 bit } WBRAM_10_2_7_d1 { O 32 vector } WBRAM_10_2_7_q1 { I 32 vector } WBRAM_10_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1255 \
    name WBRAM_10_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_8 \
    op interface \
    ports { WBRAM_10_0_8_address0 { O 10 vector } WBRAM_10_0_8_ce0 { O 1 bit } WBRAM_10_0_8_d0 { O 32 vector } WBRAM_10_0_8_q0 { I 32 vector } WBRAM_10_0_8_we0 { O 1 bit } WBRAM_10_0_8_address1 { O 10 vector } WBRAM_10_0_8_ce1 { O 1 bit } WBRAM_10_0_8_d1 { O 32 vector } WBRAM_10_0_8_q1 { I 32 vector } WBRAM_10_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1256 \
    name WBRAM_10_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_8 \
    op interface \
    ports { WBRAM_10_1_8_address0 { O 10 vector } WBRAM_10_1_8_ce0 { O 1 bit } WBRAM_10_1_8_d0 { O 32 vector } WBRAM_10_1_8_q0 { I 32 vector } WBRAM_10_1_8_we0 { O 1 bit } WBRAM_10_1_8_address1 { O 10 vector } WBRAM_10_1_8_ce1 { O 1 bit } WBRAM_10_1_8_d1 { O 32 vector } WBRAM_10_1_8_q1 { I 32 vector } WBRAM_10_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1257 \
    name WBRAM_10_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_8 \
    op interface \
    ports { WBRAM_10_2_8_address0 { O 10 vector } WBRAM_10_2_8_ce0 { O 1 bit } WBRAM_10_2_8_d0 { O 32 vector } WBRAM_10_2_8_q0 { I 32 vector } WBRAM_10_2_8_we0 { O 1 bit } WBRAM_10_2_8_address1 { O 10 vector } WBRAM_10_2_8_ce1 { O 1 bit } WBRAM_10_2_8_d1 { O 32 vector } WBRAM_10_2_8_q1 { I 32 vector } WBRAM_10_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1258 \
    name OBRAM_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_11 \
    op interface \
    ports { OBRAM_11_address0 { O 5 vector } OBRAM_11_ce0 { O 1 bit } OBRAM_11_d0 { O 32 vector } OBRAM_11_q0 { I 32 vector } OBRAM_11_we0 { O 1 bit } OBRAM_11_address1 { O 5 vector } OBRAM_11_ce1 { O 1 bit } OBRAM_11_d1 { O 32 vector } OBRAM_11_q1 { I 32 vector } OBRAM_11_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1259 \
    name WBRAM_11_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_0 \
    op interface \
    ports { WBRAM_11_0_0_address0 { O 10 vector } WBRAM_11_0_0_ce0 { O 1 bit } WBRAM_11_0_0_d0 { O 32 vector } WBRAM_11_0_0_q0 { I 32 vector } WBRAM_11_0_0_we0 { O 1 bit } WBRAM_11_0_0_address1 { O 10 vector } WBRAM_11_0_0_ce1 { O 1 bit } WBRAM_11_0_0_d1 { O 32 vector } WBRAM_11_0_0_q1 { I 32 vector } WBRAM_11_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1260 \
    name WBRAM_11_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_0 \
    op interface \
    ports { WBRAM_11_1_0_address0 { O 10 vector } WBRAM_11_1_0_ce0 { O 1 bit } WBRAM_11_1_0_d0 { O 32 vector } WBRAM_11_1_0_q0 { I 32 vector } WBRAM_11_1_0_we0 { O 1 bit } WBRAM_11_1_0_address1 { O 10 vector } WBRAM_11_1_0_ce1 { O 1 bit } WBRAM_11_1_0_d1 { O 32 vector } WBRAM_11_1_0_q1 { I 32 vector } WBRAM_11_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1261 \
    name WBRAM_11_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_0 \
    op interface \
    ports { WBRAM_11_2_0_address0 { O 10 vector } WBRAM_11_2_0_ce0 { O 1 bit } WBRAM_11_2_0_d0 { O 32 vector } WBRAM_11_2_0_q0 { I 32 vector } WBRAM_11_2_0_we0 { O 1 bit } WBRAM_11_2_0_address1 { O 10 vector } WBRAM_11_2_0_ce1 { O 1 bit } WBRAM_11_2_0_d1 { O 32 vector } WBRAM_11_2_0_q1 { I 32 vector } WBRAM_11_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1262 \
    name WBRAM_11_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_1 \
    op interface \
    ports { WBRAM_11_0_1_address0 { O 10 vector } WBRAM_11_0_1_ce0 { O 1 bit } WBRAM_11_0_1_d0 { O 32 vector } WBRAM_11_0_1_q0 { I 32 vector } WBRAM_11_0_1_we0 { O 1 bit } WBRAM_11_0_1_address1 { O 10 vector } WBRAM_11_0_1_ce1 { O 1 bit } WBRAM_11_0_1_d1 { O 32 vector } WBRAM_11_0_1_q1 { I 32 vector } WBRAM_11_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1263 \
    name WBRAM_11_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_1 \
    op interface \
    ports { WBRAM_11_1_1_address0 { O 10 vector } WBRAM_11_1_1_ce0 { O 1 bit } WBRAM_11_1_1_d0 { O 32 vector } WBRAM_11_1_1_q0 { I 32 vector } WBRAM_11_1_1_we0 { O 1 bit } WBRAM_11_1_1_address1 { O 10 vector } WBRAM_11_1_1_ce1 { O 1 bit } WBRAM_11_1_1_d1 { O 32 vector } WBRAM_11_1_1_q1 { I 32 vector } WBRAM_11_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1264 \
    name WBRAM_11_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_1 \
    op interface \
    ports { WBRAM_11_2_1_address0 { O 10 vector } WBRAM_11_2_1_ce0 { O 1 bit } WBRAM_11_2_1_d0 { O 32 vector } WBRAM_11_2_1_q0 { I 32 vector } WBRAM_11_2_1_we0 { O 1 bit } WBRAM_11_2_1_address1 { O 10 vector } WBRAM_11_2_1_ce1 { O 1 bit } WBRAM_11_2_1_d1 { O 32 vector } WBRAM_11_2_1_q1 { I 32 vector } WBRAM_11_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1265 \
    name WBRAM_11_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_2 \
    op interface \
    ports { WBRAM_11_0_2_address0 { O 10 vector } WBRAM_11_0_2_ce0 { O 1 bit } WBRAM_11_0_2_d0 { O 32 vector } WBRAM_11_0_2_q0 { I 32 vector } WBRAM_11_0_2_we0 { O 1 bit } WBRAM_11_0_2_address1 { O 10 vector } WBRAM_11_0_2_ce1 { O 1 bit } WBRAM_11_0_2_d1 { O 32 vector } WBRAM_11_0_2_q1 { I 32 vector } WBRAM_11_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1266 \
    name WBRAM_11_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_2 \
    op interface \
    ports { WBRAM_11_1_2_address0 { O 10 vector } WBRAM_11_1_2_ce0 { O 1 bit } WBRAM_11_1_2_d0 { O 32 vector } WBRAM_11_1_2_q0 { I 32 vector } WBRAM_11_1_2_we0 { O 1 bit } WBRAM_11_1_2_address1 { O 10 vector } WBRAM_11_1_2_ce1 { O 1 bit } WBRAM_11_1_2_d1 { O 32 vector } WBRAM_11_1_2_q1 { I 32 vector } WBRAM_11_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1267 \
    name WBRAM_11_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_2 \
    op interface \
    ports { WBRAM_11_2_2_address0 { O 10 vector } WBRAM_11_2_2_ce0 { O 1 bit } WBRAM_11_2_2_d0 { O 32 vector } WBRAM_11_2_2_q0 { I 32 vector } WBRAM_11_2_2_we0 { O 1 bit } WBRAM_11_2_2_address1 { O 10 vector } WBRAM_11_2_2_ce1 { O 1 bit } WBRAM_11_2_2_d1 { O 32 vector } WBRAM_11_2_2_q1 { I 32 vector } WBRAM_11_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1268 \
    name WBRAM_11_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_3 \
    op interface \
    ports { WBRAM_11_0_3_address0 { O 10 vector } WBRAM_11_0_3_ce0 { O 1 bit } WBRAM_11_0_3_d0 { O 32 vector } WBRAM_11_0_3_q0 { I 32 vector } WBRAM_11_0_3_we0 { O 1 bit } WBRAM_11_0_3_address1 { O 10 vector } WBRAM_11_0_3_ce1 { O 1 bit } WBRAM_11_0_3_d1 { O 32 vector } WBRAM_11_0_3_q1 { I 32 vector } WBRAM_11_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1269 \
    name WBRAM_11_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_3 \
    op interface \
    ports { WBRAM_11_1_3_address0 { O 10 vector } WBRAM_11_1_3_ce0 { O 1 bit } WBRAM_11_1_3_d0 { O 32 vector } WBRAM_11_1_3_q0 { I 32 vector } WBRAM_11_1_3_we0 { O 1 bit } WBRAM_11_1_3_address1 { O 10 vector } WBRAM_11_1_3_ce1 { O 1 bit } WBRAM_11_1_3_d1 { O 32 vector } WBRAM_11_1_3_q1 { I 32 vector } WBRAM_11_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1270 \
    name WBRAM_11_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_3 \
    op interface \
    ports { WBRAM_11_2_3_address0 { O 10 vector } WBRAM_11_2_3_ce0 { O 1 bit } WBRAM_11_2_3_d0 { O 32 vector } WBRAM_11_2_3_q0 { I 32 vector } WBRAM_11_2_3_we0 { O 1 bit } WBRAM_11_2_3_address1 { O 10 vector } WBRAM_11_2_3_ce1 { O 1 bit } WBRAM_11_2_3_d1 { O 32 vector } WBRAM_11_2_3_q1 { I 32 vector } WBRAM_11_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1271 \
    name WBRAM_11_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_4 \
    op interface \
    ports { WBRAM_11_0_4_address0 { O 10 vector } WBRAM_11_0_4_ce0 { O 1 bit } WBRAM_11_0_4_d0 { O 32 vector } WBRAM_11_0_4_q0 { I 32 vector } WBRAM_11_0_4_we0 { O 1 bit } WBRAM_11_0_4_address1 { O 10 vector } WBRAM_11_0_4_ce1 { O 1 bit } WBRAM_11_0_4_d1 { O 32 vector } WBRAM_11_0_4_q1 { I 32 vector } WBRAM_11_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1272 \
    name WBRAM_11_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_4 \
    op interface \
    ports { WBRAM_11_1_4_address0 { O 10 vector } WBRAM_11_1_4_ce0 { O 1 bit } WBRAM_11_1_4_d0 { O 32 vector } WBRAM_11_1_4_q0 { I 32 vector } WBRAM_11_1_4_we0 { O 1 bit } WBRAM_11_1_4_address1 { O 10 vector } WBRAM_11_1_4_ce1 { O 1 bit } WBRAM_11_1_4_d1 { O 32 vector } WBRAM_11_1_4_q1 { I 32 vector } WBRAM_11_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1273 \
    name WBRAM_11_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_4 \
    op interface \
    ports { WBRAM_11_2_4_address0 { O 10 vector } WBRAM_11_2_4_ce0 { O 1 bit } WBRAM_11_2_4_d0 { O 32 vector } WBRAM_11_2_4_q0 { I 32 vector } WBRAM_11_2_4_we0 { O 1 bit } WBRAM_11_2_4_address1 { O 10 vector } WBRAM_11_2_4_ce1 { O 1 bit } WBRAM_11_2_4_d1 { O 32 vector } WBRAM_11_2_4_q1 { I 32 vector } WBRAM_11_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1274 \
    name WBRAM_11_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_5 \
    op interface \
    ports { WBRAM_11_0_5_address0 { O 10 vector } WBRAM_11_0_5_ce0 { O 1 bit } WBRAM_11_0_5_d0 { O 32 vector } WBRAM_11_0_5_q0 { I 32 vector } WBRAM_11_0_5_we0 { O 1 bit } WBRAM_11_0_5_address1 { O 10 vector } WBRAM_11_0_5_ce1 { O 1 bit } WBRAM_11_0_5_d1 { O 32 vector } WBRAM_11_0_5_q1 { I 32 vector } WBRAM_11_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1275 \
    name WBRAM_11_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_5 \
    op interface \
    ports { WBRAM_11_1_5_address0 { O 10 vector } WBRAM_11_1_5_ce0 { O 1 bit } WBRAM_11_1_5_d0 { O 32 vector } WBRAM_11_1_5_q0 { I 32 vector } WBRAM_11_1_5_we0 { O 1 bit } WBRAM_11_1_5_address1 { O 10 vector } WBRAM_11_1_5_ce1 { O 1 bit } WBRAM_11_1_5_d1 { O 32 vector } WBRAM_11_1_5_q1 { I 32 vector } WBRAM_11_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1276 \
    name WBRAM_11_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_5 \
    op interface \
    ports { WBRAM_11_2_5_address0 { O 10 vector } WBRAM_11_2_5_ce0 { O 1 bit } WBRAM_11_2_5_d0 { O 32 vector } WBRAM_11_2_5_q0 { I 32 vector } WBRAM_11_2_5_we0 { O 1 bit } WBRAM_11_2_5_address1 { O 10 vector } WBRAM_11_2_5_ce1 { O 1 bit } WBRAM_11_2_5_d1 { O 32 vector } WBRAM_11_2_5_q1 { I 32 vector } WBRAM_11_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1277 \
    name WBRAM_11_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_6 \
    op interface \
    ports { WBRAM_11_0_6_address0 { O 10 vector } WBRAM_11_0_6_ce0 { O 1 bit } WBRAM_11_0_6_d0 { O 32 vector } WBRAM_11_0_6_q0 { I 32 vector } WBRAM_11_0_6_we0 { O 1 bit } WBRAM_11_0_6_address1 { O 10 vector } WBRAM_11_0_6_ce1 { O 1 bit } WBRAM_11_0_6_d1 { O 32 vector } WBRAM_11_0_6_q1 { I 32 vector } WBRAM_11_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1278 \
    name WBRAM_11_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_6 \
    op interface \
    ports { WBRAM_11_1_6_address0 { O 10 vector } WBRAM_11_1_6_ce0 { O 1 bit } WBRAM_11_1_6_d0 { O 32 vector } WBRAM_11_1_6_q0 { I 32 vector } WBRAM_11_1_6_we0 { O 1 bit } WBRAM_11_1_6_address1 { O 10 vector } WBRAM_11_1_6_ce1 { O 1 bit } WBRAM_11_1_6_d1 { O 32 vector } WBRAM_11_1_6_q1 { I 32 vector } WBRAM_11_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1279 \
    name WBRAM_11_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_6 \
    op interface \
    ports { WBRAM_11_2_6_address0 { O 10 vector } WBRAM_11_2_6_ce0 { O 1 bit } WBRAM_11_2_6_d0 { O 32 vector } WBRAM_11_2_6_q0 { I 32 vector } WBRAM_11_2_6_we0 { O 1 bit } WBRAM_11_2_6_address1 { O 10 vector } WBRAM_11_2_6_ce1 { O 1 bit } WBRAM_11_2_6_d1 { O 32 vector } WBRAM_11_2_6_q1 { I 32 vector } WBRAM_11_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1280 \
    name WBRAM_11_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_7 \
    op interface \
    ports { WBRAM_11_0_7_address0 { O 10 vector } WBRAM_11_0_7_ce0 { O 1 bit } WBRAM_11_0_7_d0 { O 32 vector } WBRAM_11_0_7_q0 { I 32 vector } WBRAM_11_0_7_we0 { O 1 bit } WBRAM_11_0_7_address1 { O 10 vector } WBRAM_11_0_7_ce1 { O 1 bit } WBRAM_11_0_7_d1 { O 32 vector } WBRAM_11_0_7_q1 { I 32 vector } WBRAM_11_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1281 \
    name WBRAM_11_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_7 \
    op interface \
    ports { WBRAM_11_1_7_address0 { O 10 vector } WBRAM_11_1_7_ce0 { O 1 bit } WBRAM_11_1_7_d0 { O 32 vector } WBRAM_11_1_7_q0 { I 32 vector } WBRAM_11_1_7_we0 { O 1 bit } WBRAM_11_1_7_address1 { O 10 vector } WBRAM_11_1_7_ce1 { O 1 bit } WBRAM_11_1_7_d1 { O 32 vector } WBRAM_11_1_7_q1 { I 32 vector } WBRAM_11_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1282 \
    name WBRAM_11_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_7 \
    op interface \
    ports { WBRAM_11_2_7_address0 { O 10 vector } WBRAM_11_2_7_ce0 { O 1 bit } WBRAM_11_2_7_d0 { O 32 vector } WBRAM_11_2_7_q0 { I 32 vector } WBRAM_11_2_7_we0 { O 1 bit } WBRAM_11_2_7_address1 { O 10 vector } WBRAM_11_2_7_ce1 { O 1 bit } WBRAM_11_2_7_d1 { O 32 vector } WBRAM_11_2_7_q1 { I 32 vector } WBRAM_11_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1283 \
    name WBRAM_11_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_8 \
    op interface \
    ports { WBRAM_11_0_8_address0 { O 10 vector } WBRAM_11_0_8_ce0 { O 1 bit } WBRAM_11_0_8_d0 { O 32 vector } WBRAM_11_0_8_q0 { I 32 vector } WBRAM_11_0_8_we0 { O 1 bit } WBRAM_11_0_8_address1 { O 10 vector } WBRAM_11_0_8_ce1 { O 1 bit } WBRAM_11_0_8_d1 { O 32 vector } WBRAM_11_0_8_q1 { I 32 vector } WBRAM_11_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1284 \
    name WBRAM_11_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_8 \
    op interface \
    ports { WBRAM_11_1_8_address0 { O 10 vector } WBRAM_11_1_8_ce0 { O 1 bit } WBRAM_11_1_8_d0 { O 32 vector } WBRAM_11_1_8_q0 { I 32 vector } WBRAM_11_1_8_we0 { O 1 bit } WBRAM_11_1_8_address1 { O 10 vector } WBRAM_11_1_8_ce1 { O 1 bit } WBRAM_11_1_8_d1 { O 32 vector } WBRAM_11_1_8_q1 { I 32 vector } WBRAM_11_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1285 \
    name WBRAM_11_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_8 \
    op interface \
    ports { WBRAM_11_2_8_address0 { O 10 vector } WBRAM_11_2_8_ce0 { O 1 bit } WBRAM_11_2_8_d0 { O 32 vector } WBRAM_11_2_8_q0 { I 32 vector } WBRAM_11_2_8_we0 { O 1 bit } WBRAM_11_2_8_address1 { O 10 vector } WBRAM_11_2_8_ce1 { O 1 bit } WBRAM_11_2_8_d1 { O 32 vector } WBRAM_11_2_8_q1 { I 32 vector } WBRAM_11_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1286 \
    name OBRAM_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_12 \
    op interface \
    ports { OBRAM_12_address0 { O 5 vector } OBRAM_12_ce0 { O 1 bit } OBRAM_12_d0 { O 32 vector } OBRAM_12_q0 { I 32 vector } OBRAM_12_we0 { O 1 bit } OBRAM_12_address1 { O 5 vector } OBRAM_12_ce1 { O 1 bit } OBRAM_12_d1 { O 32 vector } OBRAM_12_q1 { I 32 vector } OBRAM_12_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1287 \
    name WBRAM_12_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_0 \
    op interface \
    ports { WBRAM_12_0_0_address0 { O 10 vector } WBRAM_12_0_0_ce0 { O 1 bit } WBRAM_12_0_0_d0 { O 32 vector } WBRAM_12_0_0_q0 { I 32 vector } WBRAM_12_0_0_we0 { O 1 bit } WBRAM_12_0_0_address1 { O 10 vector } WBRAM_12_0_0_ce1 { O 1 bit } WBRAM_12_0_0_d1 { O 32 vector } WBRAM_12_0_0_q1 { I 32 vector } WBRAM_12_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1288 \
    name WBRAM_12_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_0 \
    op interface \
    ports { WBRAM_12_1_0_address0 { O 10 vector } WBRAM_12_1_0_ce0 { O 1 bit } WBRAM_12_1_0_d0 { O 32 vector } WBRAM_12_1_0_q0 { I 32 vector } WBRAM_12_1_0_we0 { O 1 bit } WBRAM_12_1_0_address1 { O 10 vector } WBRAM_12_1_0_ce1 { O 1 bit } WBRAM_12_1_0_d1 { O 32 vector } WBRAM_12_1_0_q1 { I 32 vector } WBRAM_12_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1289 \
    name WBRAM_12_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_0 \
    op interface \
    ports { WBRAM_12_2_0_address0 { O 10 vector } WBRAM_12_2_0_ce0 { O 1 bit } WBRAM_12_2_0_d0 { O 32 vector } WBRAM_12_2_0_q0 { I 32 vector } WBRAM_12_2_0_we0 { O 1 bit } WBRAM_12_2_0_address1 { O 10 vector } WBRAM_12_2_0_ce1 { O 1 bit } WBRAM_12_2_0_d1 { O 32 vector } WBRAM_12_2_0_q1 { I 32 vector } WBRAM_12_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1290 \
    name WBRAM_12_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_1 \
    op interface \
    ports { WBRAM_12_0_1_address0 { O 10 vector } WBRAM_12_0_1_ce0 { O 1 bit } WBRAM_12_0_1_d0 { O 32 vector } WBRAM_12_0_1_q0 { I 32 vector } WBRAM_12_0_1_we0 { O 1 bit } WBRAM_12_0_1_address1 { O 10 vector } WBRAM_12_0_1_ce1 { O 1 bit } WBRAM_12_0_1_d1 { O 32 vector } WBRAM_12_0_1_q1 { I 32 vector } WBRAM_12_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1291 \
    name WBRAM_12_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_1 \
    op interface \
    ports { WBRAM_12_1_1_address0 { O 10 vector } WBRAM_12_1_1_ce0 { O 1 bit } WBRAM_12_1_1_d0 { O 32 vector } WBRAM_12_1_1_q0 { I 32 vector } WBRAM_12_1_1_we0 { O 1 bit } WBRAM_12_1_1_address1 { O 10 vector } WBRAM_12_1_1_ce1 { O 1 bit } WBRAM_12_1_1_d1 { O 32 vector } WBRAM_12_1_1_q1 { I 32 vector } WBRAM_12_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1292 \
    name WBRAM_12_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_1 \
    op interface \
    ports { WBRAM_12_2_1_address0 { O 10 vector } WBRAM_12_2_1_ce0 { O 1 bit } WBRAM_12_2_1_d0 { O 32 vector } WBRAM_12_2_1_q0 { I 32 vector } WBRAM_12_2_1_we0 { O 1 bit } WBRAM_12_2_1_address1 { O 10 vector } WBRAM_12_2_1_ce1 { O 1 bit } WBRAM_12_2_1_d1 { O 32 vector } WBRAM_12_2_1_q1 { I 32 vector } WBRAM_12_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1293 \
    name WBRAM_12_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_2 \
    op interface \
    ports { WBRAM_12_0_2_address0 { O 10 vector } WBRAM_12_0_2_ce0 { O 1 bit } WBRAM_12_0_2_d0 { O 32 vector } WBRAM_12_0_2_q0 { I 32 vector } WBRAM_12_0_2_we0 { O 1 bit } WBRAM_12_0_2_address1 { O 10 vector } WBRAM_12_0_2_ce1 { O 1 bit } WBRAM_12_0_2_d1 { O 32 vector } WBRAM_12_0_2_q1 { I 32 vector } WBRAM_12_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1294 \
    name WBRAM_12_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_2 \
    op interface \
    ports { WBRAM_12_1_2_address0 { O 10 vector } WBRAM_12_1_2_ce0 { O 1 bit } WBRAM_12_1_2_d0 { O 32 vector } WBRAM_12_1_2_q0 { I 32 vector } WBRAM_12_1_2_we0 { O 1 bit } WBRAM_12_1_2_address1 { O 10 vector } WBRAM_12_1_2_ce1 { O 1 bit } WBRAM_12_1_2_d1 { O 32 vector } WBRAM_12_1_2_q1 { I 32 vector } WBRAM_12_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1295 \
    name WBRAM_12_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_2 \
    op interface \
    ports { WBRAM_12_2_2_address0 { O 10 vector } WBRAM_12_2_2_ce0 { O 1 bit } WBRAM_12_2_2_d0 { O 32 vector } WBRAM_12_2_2_q0 { I 32 vector } WBRAM_12_2_2_we0 { O 1 bit } WBRAM_12_2_2_address1 { O 10 vector } WBRAM_12_2_2_ce1 { O 1 bit } WBRAM_12_2_2_d1 { O 32 vector } WBRAM_12_2_2_q1 { I 32 vector } WBRAM_12_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1296 \
    name WBRAM_12_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_3 \
    op interface \
    ports { WBRAM_12_0_3_address0 { O 10 vector } WBRAM_12_0_3_ce0 { O 1 bit } WBRAM_12_0_3_d0 { O 32 vector } WBRAM_12_0_3_q0 { I 32 vector } WBRAM_12_0_3_we0 { O 1 bit } WBRAM_12_0_3_address1 { O 10 vector } WBRAM_12_0_3_ce1 { O 1 bit } WBRAM_12_0_3_d1 { O 32 vector } WBRAM_12_0_3_q1 { I 32 vector } WBRAM_12_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1297 \
    name WBRAM_12_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_3 \
    op interface \
    ports { WBRAM_12_1_3_address0 { O 10 vector } WBRAM_12_1_3_ce0 { O 1 bit } WBRAM_12_1_3_d0 { O 32 vector } WBRAM_12_1_3_q0 { I 32 vector } WBRAM_12_1_3_we0 { O 1 bit } WBRAM_12_1_3_address1 { O 10 vector } WBRAM_12_1_3_ce1 { O 1 bit } WBRAM_12_1_3_d1 { O 32 vector } WBRAM_12_1_3_q1 { I 32 vector } WBRAM_12_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1298 \
    name WBRAM_12_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_3 \
    op interface \
    ports { WBRAM_12_2_3_address0 { O 10 vector } WBRAM_12_2_3_ce0 { O 1 bit } WBRAM_12_2_3_d0 { O 32 vector } WBRAM_12_2_3_q0 { I 32 vector } WBRAM_12_2_3_we0 { O 1 bit } WBRAM_12_2_3_address1 { O 10 vector } WBRAM_12_2_3_ce1 { O 1 bit } WBRAM_12_2_3_d1 { O 32 vector } WBRAM_12_2_3_q1 { I 32 vector } WBRAM_12_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1299 \
    name WBRAM_12_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_4 \
    op interface \
    ports { WBRAM_12_0_4_address0 { O 10 vector } WBRAM_12_0_4_ce0 { O 1 bit } WBRAM_12_0_4_d0 { O 32 vector } WBRAM_12_0_4_q0 { I 32 vector } WBRAM_12_0_4_we0 { O 1 bit } WBRAM_12_0_4_address1 { O 10 vector } WBRAM_12_0_4_ce1 { O 1 bit } WBRAM_12_0_4_d1 { O 32 vector } WBRAM_12_0_4_q1 { I 32 vector } WBRAM_12_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1300 \
    name WBRAM_12_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_4 \
    op interface \
    ports { WBRAM_12_1_4_address0 { O 10 vector } WBRAM_12_1_4_ce0 { O 1 bit } WBRAM_12_1_4_d0 { O 32 vector } WBRAM_12_1_4_q0 { I 32 vector } WBRAM_12_1_4_we0 { O 1 bit } WBRAM_12_1_4_address1 { O 10 vector } WBRAM_12_1_4_ce1 { O 1 bit } WBRAM_12_1_4_d1 { O 32 vector } WBRAM_12_1_4_q1 { I 32 vector } WBRAM_12_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1301 \
    name WBRAM_12_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_4 \
    op interface \
    ports { WBRAM_12_2_4_address0 { O 10 vector } WBRAM_12_2_4_ce0 { O 1 bit } WBRAM_12_2_4_d0 { O 32 vector } WBRAM_12_2_4_q0 { I 32 vector } WBRAM_12_2_4_we0 { O 1 bit } WBRAM_12_2_4_address1 { O 10 vector } WBRAM_12_2_4_ce1 { O 1 bit } WBRAM_12_2_4_d1 { O 32 vector } WBRAM_12_2_4_q1 { I 32 vector } WBRAM_12_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1302 \
    name WBRAM_12_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_5 \
    op interface \
    ports { WBRAM_12_0_5_address0 { O 10 vector } WBRAM_12_0_5_ce0 { O 1 bit } WBRAM_12_0_5_d0 { O 32 vector } WBRAM_12_0_5_q0 { I 32 vector } WBRAM_12_0_5_we0 { O 1 bit } WBRAM_12_0_5_address1 { O 10 vector } WBRAM_12_0_5_ce1 { O 1 bit } WBRAM_12_0_5_d1 { O 32 vector } WBRAM_12_0_5_q1 { I 32 vector } WBRAM_12_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1303 \
    name WBRAM_12_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_5 \
    op interface \
    ports { WBRAM_12_1_5_address0 { O 10 vector } WBRAM_12_1_5_ce0 { O 1 bit } WBRAM_12_1_5_d0 { O 32 vector } WBRAM_12_1_5_q0 { I 32 vector } WBRAM_12_1_5_we0 { O 1 bit } WBRAM_12_1_5_address1 { O 10 vector } WBRAM_12_1_5_ce1 { O 1 bit } WBRAM_12_1_5_d1 { O 32 vector } WBRAM_12_1_5_q1 { I 32 vector } WBRAM_12_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1304 \
    name WBRAM_12_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_5 \
    op interface \
    ports { WBRAM_12_2_5_address0 { O 10 vector } WBRAM_12_2_5_ce0 { O 1 bit } WBRAM_12_2_5_d0 { O 32 vector } WBRAM_12_2_5_q0 { I 32 vector } WBRAM_12_2_5_we0 { O 1 bit } WBRAM_12_2_5_address1 { O 10 vector } WBRAM_12_2_5_ce1 { O 1 bit } WBRAM_12_2_5_d1 { O 32 vector } WBRAM_12_2_5_q1 { I 32 vector } WBRAM_12_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1305 \
    name WBRAM_12_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_6 \
    op interface \
    ports { WBRAM_12_0_6_address0 { O 10 vector } WBRAM_12_0_6_ce0 { O 1 bit } WBRAM_12_0_6_d0 { O 32 vector } WBRAM_12_0_6_q0 { I 32 vector } WBRAM_12_0_6_we0 { O 1 bit } WBRAM_12_0_6_address1 { O 10 vector } WBRAM_12_0_6_ce1 { O 1 bit } WBRAM_12_0_6_d1 { O 32 vector } WBRAM_12_0_6_q1 { I 32 vector } WBRAM_12_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1306 \
    name WBRAM_12_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_6 \
    op interface \
    ports { WBRAM_12_1_6_address0 { O 10 vector } WBRAM_12_1_6_ce0 { O 1 bit } WBRAM_12_1_6_d0 { O 32 vector } WBRAM_12_1_6_q0 { I 32 vector } WBRAM_12_1_6_we0 { O 1 bit } WBRAM_12_1_6_address1 { O 10 vector } WBRAM_12_1_6_ce1 { O 1 bit } WBRAM_12_1_6_d1 { O 32 vector } WBRAM_12_1_6_q1 { I 32 vector } WBRAM_12_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1307 \
    name WBRAM_12_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_6 \
    op interface \
    ports { WBRAM_12_2_6_address0 { O 10 vector } WBRAM_12_2_6_ce0 { O 1 bit } WBRAM_12_2_6_d0 { O 32 vector } WBRAM_12_2_6_q0 { I 32 vector } WBRAM_12_2_6_we0 { O 1 bit } WBRAM_12_2_6_address1 { O 10 vector } WBRAM_12_2_6_ce1 { O 1 bit } WBRAM_12_2_6_d1 { O 32 vector } WBRAM_12_2_6_q1 { I 32 vector } WBRAM_12_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1308 \
    name WBRAM_12_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_7 \
    op interface \
    ports { WBRAM_12_0_7_address0 { O 10 vector } WBRAM_12_0_7_ce0 { O 1 bit } WBRAM_12_0_7_d0 { O 32 vector } WBRAM_12_0_7_q0 { I 32 vector } WBRAM_12_0_7_we0 { O 1 bit } WBRAM_12_0_7_address1 { O 10 vector } WBRAM_12_0_7_ce1 { O 1 bit } WBRAM_12_0_7_d1 { O 32 vector } WBRAM_12_0_7_q1 { I 32 vector } WBRAM_12_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1309 \
    name WBRAM_12_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_7 \
    op interface \
    ports { WBRAM_12_1_7_address0 { O 10 vector } WBRAM_12_1_7_ce0 { O 1 bit } WBRAM_12_1_7_d0 { O 32 vector } WBRAM_12_1_7_q0 { I 32 vector } WBRAM_12_1_7_we0 { O 1 bit } WBRAM_12_1_7_address1 { O 10 vector } WBRAM_12_1_7_ce1 { O 1 bit } WBRAM_12_1_7_d1 { O 32 vector } WBRAM_12_1_7_q1 { I 32 vector } WBRAM_12_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1310 \
    name WBRAM_12_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_7 \
    op interface \
    ports { WBRAM_12_2_7_address0 { O 10 vector } WBRAM_12_2_7_ce0 { O 1 bit } WBRAM_12_2_7_d0 { O 32 vector } WBRAM_12_2_7_q0 { I 32 vector } WBRAM_12_2_7_we0 { O 1 bit } WBRAM_12_2_7_address1 { O 10 vector } WBRAM_12_2_7_ce1 { O 1 bit } WBRAM_12_2_7_d1 { O 32 vector } WBRAM_12_2_7_q1 { I 32 vector } WBRAM_12_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1311 \
    name WBRAM_12_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_8 \
    op interface \
    ports { WBRAM_12_0_8_address0 { O 10 vector } WBRAM_12_0_8_ce0 { O 1 bit } WBRAM_12_0_8_d0 { O 32 vector } WBRAM_12_0_8_q0 { I 32 vector } WBRAM_12_0_8_we0 { O 1 bit } WBRAM_12_0_8_address1 { O 10 vector } WBRAM_12_0_8_ce1 { O 1 bit } WBRAM_12_0_8_d1 { O 32 vector } WBRAM_12_0_8_q1 { I 32 vector } WBRAM_12_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1312 \
    name WBRAM_12_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_8 \
    op interface \
    ports { WBRAM_12_1_8_address0 { O 10 vector } WBRAM_12_1_8_ce0 { O 1 bit } WBRAM_12_1_8_d0 { O 32 vector } WBRAM_12_1_8_q0 { I 32 vector } WBRAM_12_1_8_we0 { O 1 bit } WBRAM_12_1_8_address1 { O 10 vector } WBRAM_12_1_8_ce1 { O 1 bit } WBRAM_12_1_8_d1 { O 32 vector } WBRAM_12_1_8_q1 { I 32 vector } WBRAM_12_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1313 \
    name WBRAM_12_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_8 \
    op interface \
    ports { WBRAM_12_2_8_address0 { O 10 vector } WBRAM_12_2_8_ce0 { O 1 bit } WBRAM_12_2_8_d0 { O 32 vector } WBRAM_12_2_8_q0 { I 32 vector } WBRAM_12_2_8_we0 { O 1 bit } WBRAM_12_2_8_address1 { O 10 vector } WBRAM_12_2_8_ce1 { O 1 bit } WBRAM_12_2_8_d1 { O 32 vector } WBRAM_12_2_8_q1 { I 32 vector } WBRAM_12_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1314 \
    name OBRAM_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_13 \
    op interface \
    ports { OBRAM_13_address0 { O 5 vector } OBRAM_13_ce0 { O 1 bit } OBRAM_13_d0 { O 32 vector } OBRAM_13_q0 { I 32 vector } OBRAM_13_we0 { O 1 bit } OBRAM_13_address1 { O 5 vector } OBRAM_13_ce1 { O 1 bit } OBRAM_13_d1 { O 32 vector } OBRAM_13_q1 { I 32 vector } OBRAM_13_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1315 \
    name WBRAM_13_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_0 \
    op interface \
    ports { WBRAM_13_0_0_address0 { O 10 vector } WBRAM_13_0_0_ce0 { O 1 bit } WBRAM_13_0_0_d0 { O 32 vector } WBRAM_13_0_0_q0 { I 32 vector } WBRAM_13_0_0_we0 { O 1 bit } WBRAM_13_0_0_address1 { O 10 vector } WBRAM_13_0_0_ce1 { O 1 bit } WBRAM_13_0_0_d1 { O 32 vector } WBRAM_13_0_0_q1 { I 32 vector } WBRAM_13_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1316 \
    name WBRAM_13_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_0 \
    op interface \
    ports { WBRAM_13_1_0_address0 { O 10 vector } WBRAM_13_1_0_ce0 { O 1 bit } WBRAM_13_1_0_d0 { O 32 vector } WBRAM_13_1_0_q0 { I 32 vector } WBRAM_13_1_0_we0 { O 1 bit } WBRAM_13_1_0_address1 { O 10 vector } WBRAM_13_1_0_ce1 { O 1 bit } WBRAM_13_1_0_d1 { O 32 vector } WBRAM_13_1_0_q1 { I 32 vector } WBRAM_13_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1317 \
    name WBRAM_13_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_0 \
    op interface \
    ports { WBRAM_13_2_0_address0 { O 10 vector } WBRAM_13_2_0_ce0 { O 1 bit } WBRAM_13_2_0_d0 { O 32 vector } WBRAM_13_2_0_q0 { I 32 vector } WBRAM_13_2_0_we0 { O 1 bit } WBRAM_13_2_0_address1 { O 10 vector } WBRAM_13_2_0_ce1 { O 1 bit } WBRAM_13_2_0_d1 { O 32 vector } WBRAM_13_2_0_q1 { I 32 vector } WBRAM_13_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1318 \
    name WBRAM_13_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_1 \
    op interface \
    ports { WBRAM_13_0_1_address0 { O 10 vector } WBRAM_13_0_1_ce0 { O 1 bit } WBRAM_13_0_1_d0 { O 32 vector } WBRAM_13_0_1_q0 { I 32 vector } WBRAM_13_0_1_we0 { O 1 bit } WBRAM_13_0_1_address1 { O 10 vector } WBRAM_13_0_1_ce1 { O 1 bit } WBRAM_13_0_1_d1 { O 32 vector } WBRAM_13_0_1_q1 { I 32 vector } WBRAM_13_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1319 \
    name WBRAM_13_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_1 \
    op interface \
    ports { WBRAM_13_1_1_address0 { O 10 vector } WBRAM_13_1_1_ce0 { O 1 bit } WBRAM_13_1_1_d0 { O 32 vector } WBRAM_13_1_1_q0 { I 32 vector } WBRAM_13_1_1_we0 { O 1 bit } WBRAM_13_1_1_address1 { O 10 vector } WBRAM_13_1_1_ce1 { O 1 bit } WBRAM_13_1_1_d1 { O 32 vector } WBRAM_13_1_1_q1 { I 32 vector } WBRAM_13_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1320 \
    name WBRAM_13_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_1 \
    op interface \
    ports { WBRAM_13_2_1_address0 { O 10 vector } WBRAM_13_2_1_ce0 { O 1 bit } WBRAM_13_2_1_d0 { O 32 vector } WBRAM_13_2_1_q0 { I 32 vector } WBRAM_13_2_1_we0 { O 1 bit } WBRAM_13_2_1_address1 { O 10 vector } WBRAM_13_2_1_ce1 { O 1 bit } WBRAM_13_2_1_d1 { O 32 vector } WBRAM_13_2_1_q1 { I 32 vector } WBRAM_13_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1321 \
    name WBRAM_13_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_2 \
    op interface \
    ports { WBRAM_13_0_2_address0 { O 10 vector } WBRAM_13_0_2_ce0 { O 1 bit } WBRAM_13_0_2_d0 { O 32 vector } WBRAM_13_0_2_q0 { I 32 vector } WBRAM_13_0_2_we0 { O 1 bit } WBRAM_13_0_2_address1 { O 10 vector } WBRAM_13_0_2_ce1 { O 1 bit } WBRAM_13_0_2_d1 { O 32 vector } WBRAM_13_0_2_q1 { I 32 vector } WBRAM_13_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1322 \
    name WBRAM_13_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_2 \
    op interface \
    ports { WBRAM_13_1_2_address0 { O 10 vector } WBRAM_13_1_2_ce0 { O 1 bit } WBRAM_13_1_2_d0 { O 32 vector } WBRAM_13_1_2_q0 { I 32 vector } WBRAM_13_1_2_we0 { O 1 bit } WBRAM_13_1_2_address1 { O 10 vector } WBRAM_13_1_2_ce1 { O 1 bit } WBRAM_13_1_2_d1 { O 32 vector } WBRAM_13_1_2_q1 { I 32 vector } WBRAM_13_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1323 \
    name WBRAM_13_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_2 \
    op interface \
    ports { WBRAM_13_2_2_address0 { O 10 vector } WBRAM_13_2_2_ce0 { O 1 bit } WBRAM_13_2_2_d0 { O 32 vector } WBRAM_13_2_2_q0 { I 32 vector } WBRAM_13_2_2_we0 { O 1 bit } WBRAM_13_2_2_address1 { O 10 vector } WBRAM_13_2_2_ce1 { O 1 bit } WBRAM_13_2_2_d1 { O 32 vector } WBRAM_13_2_2_q1 { I 32 vector } WBRAM_13_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1324 \
    name WBRAM_13_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_3 \
    op interface \
    ports { WBRAM_13_0_3_address0 { O 10 vector } WBRAM_13_0_3_ce0 { O 1 bit } WBRAM_13_0_3_d0 { O 32 vector } WBRAM_13_0_3_q0 { I 32 vector } WBRAM_13_0_3_we0 { O 1 bit } WBRAM_13_0_3_address1 { O 10 vector } WBRAM_13_0_3_ce1 { O 1 bit } WBRAM_13_0_3_d1 { O 32 vector } WBRAM_13_0_3_q1 { I 32 vector } WBRAM_13_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1325 \
    name WBRAM_13_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_3 \
    op interface \
    ports { WBRAM_13_1_3_address0 { O 10 vector } WBRAM_13_1_3_ce0 { O 1 bit } WBRAM_13_1_3_d0 { O 32 vector } WBRAM_13_1_3_q0 { I 32 vector } WBRAM_13_1_3_we0 { O 1 bit } WBRAM_13_1_3_address1 { O 10 vector } WBRAM_13_1_3_ce1 { O 1 bit } WBRAM_13_1_3_d1 { O 32 vector } WBRAM_13_1_3_q1 { I 32 vector } WBRAM_13_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1326 \
    name WBRAM_13_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_3 \
    op interface \
    ports { WBRAM_13_2_3_address0 { O 10 vector } WBRAM_13_2_3_ce0 { O 1 bit } WBRAM_13_2_3_d0 { O 32 vector } WBRAM_13_2_3_q0 { I 32 vector } WBRAM_13_2_3_we0 { O 1 bit } WBRAM_13_2_3_address1 { O 10 vector } WBRAM_13_2_3_ce1 { O 1 bit } WBRAM_13_2_3_d1 { O 32 vector } WBRAM_13_2_3_q1 { I 32 vector } WBRAM_13_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1327 \
    name WBRAM_13_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_4 \
    op interface \
    ports { WBRAM_13_0_4_address0 { O 10 vector } WBRAM_13_0_4_ce0 { O 1 bit } WBRAM_13_0_4_d0 { O 32 vector } WBRAM_13_0_4_q0 { I 32 vector } WBRAM_13_0_4_we0 { O 1 bit } WBRAM_13_0_4_address1 { O 10 vector } WBRAM_13_0_4_ce1 { O 1 bit } WBRAM_13_0_4_d1 { O 32 vector } WBRAM_13_0_4_q1 { I 32 vector } WBRAM_13_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1328 \
    name WBRAM_13_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_4 \
    op interface \
    ports { WBRAM_13_1_4_address0 { O 10 vector } WBRAM_13_1_4_ce0 { O 1 bit } WBRAM_13_1_4_d0 { O 32 vector } WBRAM_13_1_4_q0 { I 32 vector } WBRAM_13_1_4_we0 { O 1 bit } WBRAM_13_1_4_address1 { O 10 vector } WBRAM_13_1_4_ce1 { O 1 bit } WBRAM_13_1_4_d1 { O 32 vector } WBRAM_13_1_4_q1 { I 32 vector } WBRAM_13_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1329 \
    name WBRAM_13_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_4 \
    op interface \
    ports { WBRAM_13_2_4_address0 { O 10 vector } WBRAM_13_2_4_ce0 { O 1 bit } WBRAM_13_2_4_d0 { O 32 vector } WBRAM_13_2_4_q0 { I 32 vector } WBRAM_13_2_4_we0 { O 1 bit } WBRAM_13_2_4_address1 { O 10 vector } WBRAM_13_2_4_ce1 { O 1 bit } WBRAM_13_2_4_d1 { O 32 vector } WBRAM_13_2_4_q1 { I 32 vector } WBRAM_13_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1330 \
    name WBRAM_13_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_5 \
    op interface \
    ports { WBRAM_13_0_5_address0 { O 10 vector } WBRAM_13_0_5_ce0 { O 1 bit } WBRAM_13_0_5_d0 { O 32 vector } WBRAM_13_0_5_q0 { I 32 vector } WBRAM_13_0_5_we0 { O 1 bit } WBRAM_13_0_5_address1 { O 10 vector } WBRAM_13_0_5_ce1 { O 1 bit } WBRAM_13_0_5_d1 { O 32 vector } WBRAM_13_0_5_q1 { I 32 vector } WBRAM_13_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1331 \
    name WBRAM_13_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_5 \
    op interface \
    ports { WBRAM_13_1_5_address0 { O 10 vector } WBRAM_13_1_5_ce0 { O 1 bit } WBRAM_13_1_5_d0 { O 32 vector } WBRAM_13_1_5_q0 { I 32 vector } WBRAM_13_1_5_we0 { O 1 bit } WBRAM_13_1_5_address1 { O 10 vector } WBRAM_13_1_5_ce1 { O 1 bit } WBRAM_13_1_5_d1 { O 32 vector } WBRAM_13_1_5_q1 { I 32 vector } WBRAM_13_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1332 \
    name WBRAM_13_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_5 \
    op interface \
    ports { WBRAM_13_2_5_address0 { O 10 vector } WBRAM_13_2_5_ce0 { O 1 bit } WBRAM_13_2_5_d0 { O 32 vector } WBRAM_13_2_5_q0 { I 32 vector } WBRAM_13_2_5_we0 { O 1 bit } WBRAM_13_2_5_address1 { O 10 vector } WBRAM_13_2_5_ce1 { O 1 bit } WBRAM_13_2_5_d1 { O 32 vector } WBRAM_13_2_5_q1 { I 32 vector } WBRAM_13_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1333 \
    name WBRAM_13_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_6 \
    op interface \
    ports { WBRAM_13_0_6_address0 { O 10 vector } WBRAM_13_0_6_ce0 { O 1 bit } WBRAM_13_0_6_d0 { O 32 vector } WBRAM_13_0_6_q0 { I 32 vector } WBRAM_13_0_6_we0 { O 1 bit } WBRAM_13_0_6_address1 { O 10 vector } WBRAM_13_0_6_ce1 { O 1 bit } WBRAM_13_0_6_d1 { O 32 vector } WBRAM_13_0_6_q1 { I 32 vector } WBRAM_13_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1334 \
    name WBRAM_13_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_6 \
    op interface \
    ports { WBRAM_13_1_6_address0 { O 10 vector } WBRAM_13_1_6_ce0 { O 1 bit } WBRAM_13_1_6_d0 { O 32 vector } WBRAM_13_1_6_q0 { I 32 vector } WBRAM_13_1_6_we0 { O 1 bit } WBRAM_13_1_6_address1 { O 10 vector } WBRAM_13_1_6_ce1 { O 1 bit } WBRAM_13_1_6_d1 { O 32 vector } WBRAM_13_1_6_q1 { I 32 vector } WBRAM_13_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1335 \
    name WBRAM_13_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_6 \
    op interface \
    ports { WBRAM_13_2_6_address0 { O 10 vector } WBRAM_13_2_6_ce0 { O 1 bit } WBRAM_13_2_6_d0 { O 32 vector } WBRAM_13_2_6_q0 { I 32 vector } WBRAM_13_2_6_we0 { O 1 bit } WBRAM_13_2_6_address1 { O 10 vector } WBRAM_13_2_6_ce1 { O 1 bit } WBRAM_13_2_6_d1 { O 32 vector } WBRAM_13_2_6_q1 { I 32 vector } WBRAM_13_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1336 \
    name WBRAM_13_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_7 \
    op interface \
    ports { WBRAM_13_0_7_address0 { O 10 vector } WBRAM_13_0_7_ce0 { O 1 bit } WBRAM_13_0_7_d0 { O 32 vector } WBRAM_13_0_7_q0 { I 32 vector } WBRAM_13_0_7_we0 { O 1 bit } WBRAM_13_0_7_address1 { O 10 vector } WBRAM_13_0_7_ce1 { O 1 bit } WBRAM_13_0_7_d1 { O 32 vector } WBRAM_13_0_7_q1 { I 32 vector } WBRAM_13_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1337 \
    name WBRAM_13_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_7 \
    op interface \
    ports { WBRAM_13_1_7_address0 { O 10 vector } WBRAM_13_1_7_ce0 { O 1 bit } WBRAM_13_1_7_d0 { O 32 vector } WBRAM_13_1_7_q0 { I 32 vector } WBRAM_13_1_7_we0 { O 1 bit } WBRAM_13_1_7_address1 { O 10 vector } WBRAM_13_1_7_ce1 { O 1 bit } WBRAM_13_1_7_d1 { O 32 vector } WBRAM_13_1_7_q1 { I 32 vector } WBRAM_13_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1338 \
    name WBRAM_13_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_7 \
    op interface \
    ports { WBRAM_13_2_7_address0 { O 10 vector } WBRAM_13_2_7_ce0 { O 1 bit } WBRAM_13_2_7_d0 { O 32 vector } WBRAM_13_2_7_q0 { I 32 vector } WBRAM_13_2_7_we0 { O 1 bit } WBRAM_13_2_7_address1 { O 10 vector } WBRAM_13_2_7_ce1 { O 1 bit } WBRAM_13_2_7_d1 { O 32 vector } WBRAM_13_2_7_q1 { I 32 vector } WBRAM_13_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1339 \
    name WBRAM_13_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_8 \
    op interface \
    ports { WBRAM_13_0_8_address0 { O 10 vector } WBRAM_13_0_8_ce0 { O 1 bit } WBRAM_13_0_8_d0 { O 32 vector } WBRAM_13_0_8_q0 { I 32 vector } WBRAM_13_0_8_we0 { O 1 bit } WBRAM_13_0_8_address1 { O 10 vector } WBRAM_13_0_8_ce1 { O 1 bit } WBRAM_13_0_8_d1 { O 32 vector } WBRAM_13_0_8_q1 { I 32 vector } WBRAM_13_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1340 \
    name WBRAM_13_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_8 \
    op interface \
    ports { WBRAM_13_1_8_address0 { O 10 vector } WBRAM_13_1_8_ce0 { O 1 bit } WBRAM_13_1_8_d0 { O 32 vector } WBRAM_13_1_8_q0 { I 32 vector } WBRAM_13_1_8_we0 { O 1 bit } WBRAM_13_1_8_address1 { O 10 vector } WBRAM_13_1_8_ce1 { O 1 bit } WBRAM_13_1_8_d1 { O 32 vector } WBRAM_13_1_8_q1 { I 32 vector } WBRAM_13_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1341 \
    name WBRAM_13_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_8 \
    op interface \
    ports { WBRAM_13_2_8_address0 { O 10 vector } WBRAM_13_2_8_ce0 { O 1 bit } WBRAM_13_2_8_d0 { O 32 vector } WBRAM_13_2_8_q0 { I 32 vector } WBRAM_13_2_8_we0 { O 1 bit } WBRAM_13_2_8_address1 { O 10 vector } WBRAM_13_2_8_ce1 { O 1 bit } WBRAM_13_2_8_d1 { O 32 vector } WBRAM_13_2_8_q1 { I 32 vector } WBRAM_13_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1342 \
    name OBRAM_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_14 \
    op interface \
    ports { OBRAM_14_address0 { O 5 vector } OBRAM_14_ce0 { O 1 bit } OBRAM_14_d0 { O 32 vector } OBRAM_14_q0 { I 32 vector } OBRAM_14_we0 { O 1 bit } OBRAM_14_address1 { O 5 vector } OBRAM_14_ce1 { O 1 bit } OBRAM_14_d1 { O 32 vector } OBRAM_14_q1 { I 32 vector } OBRAM_14_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1343 \
    name WBRAM_14_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_0 \
    op interface \
    ports { WBRAM_14_0_0_address0 { O 10 vector } WBRAM_14_0_0_ce0 { O 1 bit } WBRAM_14_0_0_d0 { O 32 vector } WBRAM_14_0_0_q0 { I 32 vector } WBRAM_14_0_0_we0 { O 1 bit } WBRAM_14_0_0_address1 { O 10 vector } WBRAM_14_0_0_ce1 { O 1 bit } WBRAM_14_0_0_d1 { O 32 vector } WBRAM_14_0_0_q1 { I 32 vector } WBRAM_14_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1344 \
    name WBRAM_14_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_0 \
    op interface \
    ports { WBRAM_14_1_0_address0 { O 10 vector } WBRAM_14_1_0_ce0 { O 1 bit } WBRAM_14_1_0_d0 { O 32 vector } WBRAM_14_1_0_q0 { I 32 vector } WBRAM_14_1_0_we0 { O 1 bit } WBRAM_14_1_0_address1 { O 10 vector } WBRAM_14_1_0_ce1 { O 1 bit } WBRAM_14_1_0_d1 { O 32 vector } WBRAM_14_1_0_q1 { I 32 vector } WBRAM_14_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1345 \
    name WBRAM_14_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_0 \
    op interface \
    ports { WBRAM_14_2_0_address0 { O 10 vector } WBRAM_14_2_0_ce0 { O 1 bit } WBRAM_14_2_0_d0 { O 32 vector } WBRAM_14_2_0_q0 { I 32 vector } WBRAM_14_2_0_we0 { O 1 bit } WBRAM_14_2_0_address1 { O 10 vector } WBRAM_14_2_0_ce1 { O 1 bit } WBRAM_14_2_0_d1 { O 32 vector } WBRAM_14_2_0_q1 { I 32 vector } WBRAM_14_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1346 \
    name WBRAM_14_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_1 \
    op interface \
    ports { WBRAM_14_0_1_address0 { O 10 vector } WBRAM_14_0_1_ce0 { O 1 bit } WBRAM_14_0_1_d0 { O 32 vector } WBRAM_14_0_1_q0 { I 32 vector } WBRAM_14_0_1_we0 { O 1 bit } WBRAM_14_0_1_address1 { O 10 vector } WBRAM_14_0_1_ce1 { O 1 bit } WBRAM_14_0_1_d1 { O 32 vector } WBRAM_14_0_1_q1 { I 32 vector } WBRAM_14_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1347 \
    name WBRAM_14_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_1 \
    op interface \
    ports { WBRAM_14_1_1_address0 { O 10 vector } WBRAM_14_1_1_ce0 { O 1 bit } WBRAM_14_1_1_d0 { O 32 vector } WBRAM_14_1_1_q0 { I 32 vector } WBRAM_14_1_1_we0 { O 1 bit } WBRAM_14_1_1_address1 { O 10 vector } WBRAM_14_1_1_ce1 { O 1 bit } WBRAM_14_1_1_d1 { O 32 vector } WBRAM_14_1_1_q1 { I 32 vector } WBRAM_14_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1348 \
    name WBRAM_14_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_1 \
    op interface \
    ports { WBRAM_14_2_1_address0 { O 10 vector } WBRAM_14_2_1_ce0 { O 1 bit } WBRAM_14_2_1_d0 { O 32 vector } WBRAM_14_2_1_q0 { I 32 vector } WBRAM_14_2_1_we0 { O 1 bit } WBRAM_14_2_1_address1 { O 10 vector } WBRAM_14_2_1_ce1 { O 1 bit } WBRAM_14_2_1_d1 { O 32 vector } WBRAM_14_2_1_q1 { I 32 vector } WBRAM_14_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1349 \
    name WBRAM_14_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_2 \
    op interface \
    ports { WBRAM_14_0_2_address0 { O 10 vector } WBRAM_14_0_2_ce0 { O 1 bit } WBRAM_14_0_2_d0 { O 32 vector } WBRAM_14_0_2_q0 { I 32 vector } WBRAM_14_0_2_we0 { O 1 bit } WBRAM_14_0_2_address1 { O 10 vector } WBRAM_14_0_2_ce1 { O 1 bit } WBRAM_14_0_2_d1 { O 32 vector } WBRAM_14_0_2_q1 { I 32 vector } WBRAM_14_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1350 \
    name WBRAM_14_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_2 \
    op interface \
    ports { WBRAM_14_1_2_address0 { O 10 vector } WBRAM_14_1_2_ce0 { O 1 bit } WBRAM_14_1_2_d0 { O 32 vector } WBRAM_14_1_2_q0 { I 32 vector } WBRAM_14_1_2_we0 { O 1 bit } WBRAM_14_1_2_address1 { O 10 vector } WBRAM_14_1_2_ce1 { O 1 bit } WBRAM_14_1_2_d1 { O 32 vector } WBRAM_14_1_2_q1 { I 32 vector } WBRAM_14_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1351 \
    name WBRAM_14_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_2 \
    op interface \
    ports { WBRAM_14_2_2_address0 { O 10 vector } WBRAM_14_2_2_ce0 { O 1 bit } WBRAM_14_2_2_d0 { O 32 vector } WBRAM_14_2_2_q0 { I 32 vector } WBRAM_14_2_2_we0 { O 1 bit } WBRAM_14_2_2_address1 { O 10 vector } WBRAM_14_2_2_ce1 { O 1 bit } WBRAM_14_2_2_d1 { O 32 vector } WBRAM_14_2_2_q1 { I 32 vector } WBRAM_14_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1352 \
    name WBRAM_14_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_3 \
    op interface \
    ports { WBRAM_14_0_3_address0 { O 10 vector } WBRAM_14_0_3_ce0 { O 1 bit } WBRAM_14_0_3_d0 { O 32 vector } WBRAM_14_0_3_q0 { I 32 vector } WBRAM_14_0_3_we0 { O 1 bit } WBRAM_14_0_3_address1 { O 10 vector } WBRAM_14_0_3_ce1 { O 1 bit } WBRAM_14_0_3_d1 { O 32 vector } WBRAM_14_0_3_q1 { I 32 vector } WBRAM_14_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1353 \
    name WBRAM_14_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_3 \
    op interface \
    ports { WBRAM_14_1_3_address0 { O 10 vector } WBRAM_14_1_3_ce0 { O 1 bit } WBRAM_14_1_3_d0 { O 32 vector } WBRAM_14_1_3_q0 { I 32 vector } WBRAM_14_1_3_we0 { O 1 bit } WBRAM_14_1_3_address1 { O 10 vector } WBRAM_14_1_3_ce1 { O 1 bit } WBRAM_14_1_3_d1 { O 32 vector } WBRAM_14_1_3_q1 { I 32 vector } WBRAM_14_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1354 \
    name WBRAM_14_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_3 \
    op interface \
    ports { WBRAM_14_2_3_address0 { O 10 vector } WBRAM_14_2_3_ce0 { O 1 bit } WBRAM_14_2_3_d0 { O 32 vector } WBRAM_14_2_3_q0 { I 32 vector } WBRAM_14_2_3_we0 { O 1 bit } WBRAM_14_2_3_address1 { O 10 vector } WBRAM_14_2_3_ce1 { O 1 bit } WBRAM_14_2_3_d1 { O 32 vector } WBRAM_14_2_3_q1 { I 32 vector } WBRAM_14_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1355 \
    name WBRAM_14_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_4 \
    op interface \
    ports { WBRAM_14_0_4_address0 { O 10 vector } WBRAM_14_0_4_ce0 { O 1 bit } WBRAM_14_0_4_d0 { O 32 vector } WBRAM_14_0_4_q0 { I 32 vector } WBRAM_14_0_4_we0 { O 1 bit } WBRAM_14_0_4_address1 { O 10 vector } WBRAM_14_0_4_ce1 { O 1 bit } WBRAM_14_0_4_d1 { O 32 vector } WBRAM_14_0_4_q1 { I 32 vector } WBRAM_14_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1356 \
    name WBRAM_14_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_4 \
    op interface \
    ports { WBRAM_14_1_4_address0 { O 10 vector } WBRAM_14_1_4_ce0 { O 1 bit } WBRAM_14_1_4_d0 { O 32 vector } WBRAM_14_1_4_q0 { I 32 vector } WBRAM_14_1_4_we0 { O 1 bit } WBRAM_14_1_4_address1 { O 10 vector } WBRAM_14_1_4_ce1 { O 1 bit } WBRAM_14_1_4_d1 { O 32 vector } WBRAM_14_1_4_q1 { I 32 vector } WBRAM_14_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1357 \
    name WBRAM_14_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_4 \
    op interface \
    ports { WBRAM_14_2_4_address0 { O 10 vector } WBRAM_14_2_4_ce0 { O 1 bit } WBRAM_14_2_4_d0 { O 32 vector } WBRAM_14_2_4_q0 { I 32 vector } WBRAM_14_2_4_we0 { O 1 bit } WBRAM_14_2_4_address1 { O 10 vector } WBRAM_14_2_4_ce1 { O 1 bit } WBRAM_14_2_4_d1 { O 32 vector } WBRAM_14_2_4_q1 { I 32 vector } WBRAM_14_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1358 \
    name WBRAM_14_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_5 \
    op interface \
    ports { WBRAM_14_0_5_address0 { O 10 vector } WBRAM_14_0_5_ce0 { O 1 bit } WBRAM_14_0_5_d0 { O 32 vector } WBRAM_14_0_5_q0 { I 32 vector } WBRAM_14_0_5_we0 { O 1 bit } WBRAM_14_0_5_address1 { O 10 vector } WBRAM_14_0_5_ce1 { O 1 bit } WBRAM_14_0_5_d1 { O 32 vector } WBRAM_14_0_5_q1 { I 32 vector } WBRAM_14_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1359 \
    name WBRAM_14_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_5 \
    op interface \
    ports { WBRAM_14_1_5_address0 { O 10 vector } WBRAM_14_1_5_ce0 { O 1 bit } WBRAM_14_1_5_d0 { O 32 vector } WBRAM_14_1_5_q0 { I 32 vector } WBRAM_14_1_5_we0 { O 1 bit } WBRAM_14_1_5_address1 { O 10 vector } WBRAM_14_1_5_ce1 { O 1 bit } WBRAM_14_1_5_d1 { O 32 vector } WBRAM_14_1_5_q1 { I 32 vector } WBRAM_14_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1360 \
    name WBRAM_14_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_5 \
    op interface \
    ports { WBRAM_14_2_5_address0 { O 10 vector } WBRAM_14_2_5_ce0 { O 1 bit } WBRAM_14_2_5_d0 { O 32 vector } WBRAM_14_2_5_q0 { I 32 vector } WBRAM_14_2_5_we0 { O 1 bit } WBRAM_14_2_5_address1 { O 10 vector } WBRAM_14_2_5_ce1 { O 1 bit } WBRAM_14_2_5_d1 { O 32 vector } WBRAM_14_2_5_q1 { I 32 vector } WBRAM_14_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1361 \
    name WBRAM_14_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_6 \
    op interface \
    ports { WBRAM_14_0_6_address0 { O 10 vector } WBRAM_14_0_6_ce0 { O 1 bit } WBRAM_14_0_6_d0 { O 32 vector } WBRAM_14_0_6_q0 { I 32 vector } WBRAM_14_0_6_we0 { O 1 bit } WBRAM_14_0_6_address1 { O 10 vector } WBRAM_14_0_6_ce1 { O 1 bit } WBRAM_14_0_6_d1 { O 32 vector } WBRAM_14_0_6_q1 { I 32 vector } WBRAM_14_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1362 \
    name WBRAM_14_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_6 \
    op interface \
    ports { WBRAM_14_1_6_address0 { O 10 vector } WBRAM_14_1_6_ce0 { O 1 bit } WBRAM_14_1_6_d0 { O 32 vector } WBRAM_14_1_6_q0 { I 32 vector } WBRAM_14_1_6_we0 { O 1 bit } WBRAM_14_1_6_address1 { O 10 vector } WBRAM_14_1_6_ce1 { O 1 bit } WBRAM_14_1_6_d1 { O 32 vector } WBRAM_14_1_6_q1 { I 32 vector } WBRAM_14_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1363 \
    name WBRAM_14_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_6 \
    op interface \
    ports { WBRAM_14_2_6_address0 { O 10 vector } WBRAM_14_2_6_ce0 { O 1 bit } WBRAM_14_2_6_d0 { O 32 vector } WBRAM_14_2_6_q0 { I 32 vector } WBRAM_14_2_6_we0 { O 1 bit } WBRAM_14_2_6_address1 { O 10 vector } WBRAM_14_2_6_ce1 { O 1 bit } WBRAM_14_2_6_d1 { O 32 vector } WBRAM_14_2_6_q1 { I 32 vector } WBRAM_14_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1364 \
    name WBRAM_14_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_7 \
    op interface \
    ports { WBRAM_14_0_7_address0 { O 10 vector } WBRAM_14_0_7_ce0 { O 1 bit } WBRAM_14_0_7_d0 { O 32 vector } WBRAM_14_0_7_q0 { I 32 vector } WBRAM_14_0_7_we0 { O 1 bit } WBRAM_14_0_7_address1 { O 10 vector } WBRAM_14_0_7_ce1 { O 1 bit } WBRAM_14_0_7_d1 { O 32 vector } WBRAM_14_0_7_q1 { I 32 vector } WBRAM_14_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1365 \
    name WBRAM_14_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_7 \
    op interface \
    ports { WBRAM_14_1_7_address0 { O 10 vector } WBRAM_14_1_7_ce0 { O 1 bit } WBRAM_14_1_7_d0 { O 32 vector } WBRAM_14_1_7_q0 { I 32 vector } WBRAM_14_1_7_we0 { O 1 bit } WBRAM_14_1_7_address1 { O 10 vector } WBRAM_14_1_7_ce1 { O 1 bit } WBRAM_14_1_7_d1 { O 32 vector } WBRAM_14_1_7_q1 { I 32 vector } WBRAM_14_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1366 \
    name WBRAM_14_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_7 \
    op interface \
    ports { WBRAM_14_2_7_address0 { O 10 vector } WBRAM_14_2_7_ce0 { O 1 bit } WBRAM_14_2_7_d0 { O 32 vector } WBRAM_14_2_7_q0 { I 32 vector } WBRAM_14_2_7_we0 { O 1 bit } WBRAM_14_2_7_address1 { O 10 vector } WBRAM_14_2_7_ce1 { O 1 bit } WBRAM_14_2_7_d1 { O 32 vector } WBRAM_14_2_7_q1 { I 32 vector } WBRAM_14_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1367 \
    name WBRAM_14_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_8 \
    op interface \
    ports { WBRAM_14_0_8_address0 { O 10 vector } WBRAM_14_0_8_ce0 { O 1 bit } WBRAM_14_0_8_d0 { O 32 vector } WBRAM_14_0_8_q0 { I 32 vector } WBRAM_14_0_8_we0 { O 1 bit } WBRAM_14_0_8_address1 { O 10 vector } WBRAM_14_0_8_ce1 { O 1 bit } WBRAM_14_0_8_d1 { O 32 vector } WBRAM_14_0_8_q1 { I 32 vector } WBRAM_14_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1368 \
    name WBRAM_14_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_8 \
    op interface \
    ports { WBRAM_14_1_8_address0 { O 10 vector } WBRAM_14_1_8_ce0 { O 1 bit } WBRAM_14_1_8_d0 { O 32 vector } WBRAM_14_1_8_q0 { I 32 vector } WBRAM_14_1_8_we0 { O 1 bit } WBRAM_14_1_8_address1 { O 10 vector } WBRAM_14_1_8_ce1 { O 1 bit } WBRAM_14_1_8_d1 { O 32 vector } WBRAM_14_1_8_q1 { I 32 vector } WBRAM_14_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1369 \
    name WBRAM_14_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_8 \
    op interface \
    ports { WBRAM_14_2_8_address0 { O 10 vector } WBRAM_14_2_8_ce0 { O 1 bit } WBRAM_14_2_8_d0 { O 32 vector } WBRAM_14_2_8_q0 { I 32 vector } WBRAM_14_2_8_we0 { O 1 bit } WBRAM_14_2_8_address1 { O 10 vector } WBRAM_14_2_8_ce1 { O 1 bit } WBRAM_14_2_8_d1 { O 32 vector } WBRAM_14_2_8_q1 { I 32 vector } WBRAM_14_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1370 \
    name OBRAM_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_15 \
    op interface \
    ports { OBRAM_15_address0 { O 5 vector } OBRAM_15_ce0 { O 1 bit } OBRAM_15_d0 { O 32 vector } OBRAM_15_q0 { I 32 vector } OBRAM_15_we0 { O 1 bit } OBRAM_15_address1 { O 5 vector } OBRAM_15_ce1 { O 1 bit } OBRAM_15_d1 { O 32 vector } OBRAM_15_q1 { I 32 vector } OBRAM_15_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1371 \
    name WBRAM_15_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_0 \
    op interface \
    ports { WBRAM_15_0_0_address0 { O 10 vector } WBRAM_15_0_0_ce0 { O 1 bit } WBRAM_15_0_0_d0 { O 32 vector } WBRAM_15_0_0_q0 { I 32 vector } WBRAM_15_0_0_we0 { O 1 bit } WBRAM_15_0_0_address1 { O 10 vector } WBRAM_15_0_0_ce1 { O 1 bit } WBRAM_15_0_0_d1 { O 32 vector } WBRAM_15_0_0_q1 { I 32 vector } WBRAM_15_0_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1372 \
    name WBRAM_15_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_0 \
    op interface \
    ports { WBRAM_15_1_0_address0 { O 10 vector } WBRAM_15_1_0_ce0 { O 1 bit } WBRAM_15_1_0_d0 { O 32 vector } WBRAM_15_1_0_q0 { I 32 vector } WBRAM_15_1_0_we0 { O 1 bit } WBRAM_15_1_0_address1 { O 10 vector } WBRAM_15_1_0_ce1 { O 1 bit } WBRAM_15_1_0_d1 { O 32 vector } WBRAM_15_1_0_q1 { I 32 vector } WBRAM_15_1_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1373 \
    name WBRAM_15_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_0 \
    op interface \
    ports { WBRAM_15_2_0_address0 { O 10 vector } WBRAM_15_2_0_ce0 { O 1 bit } WBRAM_15_2_0_d0 { O 32 vector } WBRAM_15_2_0_q0 { I 32 vector } WBRAM_15_2_0_we0 { O 1 bit } WBRAM_15_2_0_address1 { O 10 vector } WBRAM_15_2_0_ce1 { O 1 bit } WBRAM_15_2_0_d1 { O 32 vector } WBRAM_15_2_0_q1 { I 32 vector } WBRAM_15_2_0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1374 \
    name WBRAM_15_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_1 \
    op interface \
    ports { WBRAM_15_0_1_address0 { O 10 vector } WBRAM_15_0_1_ce0 { O 1 bit } WBRAM_15_0_1_d0 { O 32 vector } WBRAM_15_0_1_q0 { I 32 vector } WBRAM_15_0_1_we0 { O 1 bit } WBRAM_15_0_1_address1 { O 10 vector } WBRAM_15_0_1_ce1 { O 1 bit } WBRAM_15_0_1_d1 { O 32 vector } WBRAM_15_0_1_q1 { I 32 vector } WBRAM_15_0_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1375 \
    name WBRAM_15_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_1 \
    op interface \
    ports { WBRAM_15_1_1_address0 { O 10 vector } WBRAM_15_1_1_ce0 { O 1 bit } WBRAM_15_1_1_d0 { O 32 vector } WBRAM_15_1_1_q0 { I 32 vector } WBRAM_15_1_1_we0 { O 1 bit } WBRAM_15_1_1_address1 { O 10 vector } WBRAM_15_1_1_ce1 { O 1 bit } WBRAM_15_1_1_d1 { O 32 vector } WBRAM_15_1_1_q1 { I 32 vector } WBRAM_15_1_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1376 \
    name WBRAM_15_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_1 \
    op interface \
    ports { WBRAM_15_2_1_address0 { O 10 vector } WBRAM_15_2_1_ce0 { O 1 bit } WBRAM_15_2_1_d0 { O 32 vector } WBRAM_15_2_1_q0 { I 32 vector } WBRAM_15_2_1_we0 { O 1 bit } WBRAM_15_2_1_address1 { O 10 vector } WBRAM_15_2_1_ce1 { O 1 bit } WBRAM_15_2_1_d1 { O 32 vector } WBRAM_15_2_1_q1 { I 32 vector } WBRAM_15_2_1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1377 \
    name WBRAM_15_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_2 \
    op interface \
    ports { WBRAM_15_0_2_address0 { O 10 vector } WBRAM_15_0_2_ce0 { O 1 bit } WBRAM_15_0_2_d0 { O 32 vector } WBRAM_15_0_2_q0 { I 32 vector } WBRAM_15_0_2_we0 { O 1 bit } WBRAM_15_0_2_address1 { O 10 vector } WBRAM_15_0_2_ce1 { O 1 bit } WBRAM_15_0_2_d1 { O 32 vector } WBRAM_15_0_2_q1 { I 32 vector } WBRAM_15_0_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1378 \
    name WBRAM_15_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_2 \
    op interface \
    ports { WBRAM_15_1_2_address0 { O 10 vector } WBRAM_15_1_2_ce0 { O 1 bit } WBRAM_15_1_2_d0 { O 32 vector } WBRAM_15_1_2_q0 { I 32 vector } WBRAM_15_1_2_we0 { O 1 bit } WBRAM_15_1_2_address1 { O 10 vector } WBRAM_15_1_2_ce1 { O 1 bit } WBRAM_15_1_2_d1 { O 32 vector } WBRAM_15_1_2_q1 { I 32 vector } WBRAM_15_1_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1379 \
    name WBRAM_15_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_2 \
    op interface \
    ports { WBRAM_15_2_2_address0 { O 10 vector } WBRAM_15_2_2_ce0 { O 1 bit } WBRAM_15_2_2_d0 { O 32 vector } WBRAM_15_2_2_q0 { I 32 vector } WBRAM_15_2_2_we0 { O 1 bit } WBRAM_15_2_2_address1 { O 10 vector } WBRAM_15_2_2_ce1 { O 1 bit } WBRAM_15_2_2_d1 { O 32 vector } WBRAM_15_2_2_q1 { I 32 vector } WBRAM_15_2_2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1380 \
    name WBRAM_15_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_3 \
    op interface \
    ports { WBRAM_15_0_3_address0 { O 10 vector } WBRAM_15_0_3_ce0 { O 1 bit } WBRAM_15_0_3_d0 { O 32 vector } WBRAM_15_0_3_q0 { I 32 vector } WBRAM_15_0_3_we0 { O 1 bit } WBRAM_15_0_3_address1 { O 10 vector } WBRAM_15_0_3_ce1 { O 1 bit } WBRAM_15_0_3_d1 { O 32 vector } WBRAM_15_0_3_q1 { I 32 vector } WBRAM_15_0_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1381 \
    name WBRAM_15_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_3 \
    op interface \
    ports { WBRAM_15_1_3_address0 { O 10 vector } WBRAM_15_1_3_ce0 { O 1 bit } WBRAM_15_1_3_d0 { O 32 vector } WBRAM_15_1_3_q0 { I 32 vector } WBRAM_15_1_3_we0 { O 1 bit } WBRAM_15_1_3_address1 { O 10 vector } WBRAM_15_1_3_ce1 { O 1 bit } WBRAM_15_1_3_d1 { O 32 vector } WBRAM_15_1_3_q1 { I 32 vector } WBRAM_15_1_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1382 \
    name WBRAM_15_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_3 \
    op interface \
    ports { WBRAM_15_2_3_address0 { O 10 vector } WBRAM_15_2_3_ce0 { O 1 bit } WBRAM_15_2_3_d0 { O 32 vector } WBRAM_15_2_3_q0 { I 32 vector } WBRAM_15_2_3_we0 { O 1 bit } WBRAM_15_2_3_address1 { O 10 vector } WBRAM_15_2_3_ce1 { O 1 bit } WBRAM_15_2_3_d1 { O 32 vector } WBRAM_15_2_3_q1 { I 32 vector } WBRAM_15_2_3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1383 \
    name WBRAM_15_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_4 \
    op interface \
    ports { WBRAM_15_0_4_address0 { O 10 vector } WBRAM_15_0_4_ce0 { O 1 bit } WBRAM_15_0_4_d0 { O 32 vector } WBRAM_15_0_4_q0 { I 32 vector } WBRAM_15_0_4_we0 { O 1 bit } WBRAM_15_0_4_address1 { O 10 vector } WBRAM_15_0_4_ce1 { O 1 bit } WBRAM_15_0_4_d1 { O 32 vector } WBRAM_15_0_4_q1 { I 32 vector } WBRAM_15_0_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1384 \
    name WBRAM_15_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_4 \
    op interface \
    ports { WBRAM_15_1_4_address0 { O 10 vector } WBRAM_15_1_4_ce0 { O 1 bit } WBRAM_15_1_4_d0 { O 32 vector } WBRAM_15_1_4_q0 { I 32 vector } WBRAM_15_1_4_we0 { O 1 bit } WBRAM_15_1_4_address1 { O 10 vector } WBRAM_15_1_4_ce1 { O 1 bit } WBRAM_15_1_4_d1 { O 32 vector } WBRAM_15_1_4_q1 { I 32 vector } WBRAM_15_1_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1385 \
    name WBRAM_15_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_4 \
    op interface \
    ports { WBRAM_15_2_4_address0 { O 10 vector } WBRAM_15_2_4_ce0 { O 1 bit } WBRAM_15_2_4_d0 { O 32 vector } WBRAM_15_2_4_q0 { I 32 vector } WBRAM_15_2_4_we0 { O 1 bit } WBRAM_15_2_4_address1 { O 10 vector } WBRAM_15_2_4_ce1 { O 1 bit } WBRAM_15_2_4_d1 { O 32 vector } WBRAM_15_2_4_q1 { I 32 vector } WBRAM_15_2_4_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1386 \
    name WBRAM_15_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_5 \
    op interface \
    ports { WBRAM_15_0_5_address0 { O 10 vector } WBRAM_15_0_5_ce0 { O 1 bit } WBRAM_15_0_5_d0 { O 32 vector } WBRAM_15_0_5_q0 { I 32 vector } WBRAM_15_0_5_we0 { O 1 bit } WBRAM_15_0_5_address1 { O 10 vector } WBRAM_15_0_5_ce1 { O 1 bit } WBRAM_15_0_5_d1 { O 32 vector } WBRAM_15_0_5_q1 { I 32 vector } WBRAM_15_0_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1387 \
    name WBRAM_15_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_5 \
    op interface \
    ports { WBRAM_15_1_5_address0 { O 10 vector } WBRAM_15_1_5_ce0 { O 1 bit } WBRAM_15_1_5_d0 { O 32 vector } WBRAM_15_1_5_q0 { I 32 vector } WBRAM_15_1_5_we0 { O 1 bit } WBRAM_15_1_5_address1 { O 10 vector } WBRAM_15_1_5_ce1 { O 1 bit } WBRAM_15_1_5_d1 { O 32 vector } WBRAM_15_1_5_q1 { I 32 vector } WBRAM_15_1_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1388 \
    name WBRAM_15_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_5 \
    op interface \
    ports { WBRAM_15_2_5_address0 { O 10 vector } WBRAM_15_2_5_ce0 { O 1 bit } WBRAM_15_2_5_d0 { O 32 vector } WBRAM_15_2_5_q0 { I 32 vector } WBRAM_15_2_5_we0 { O 1 bit } WBRAM_15_2_5_address1 { O 10 vector } WBRAM_15_2_5_ce1 { O 1 bit } WBRAM_15_2_5_d1 { O 32 vector } WBRAM_15_2_5_q1 { I 32 vector } WBRAM_15_2_5_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1389 \
    name WBRAM_15_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_6 \
    op interface \
    ports { WBRAM_15_0_6_address0 { O 10 vector } WBRAM_15_0_6_ce0 { O 1 bit } WBRAM_15_0_6_d0 { O 32 vector } WBRAM_15_0_6_q0 { I 32 vector } WBRAM_15_0_6_we0 { O 1 bit } WBRAM_15_0_6_address1 { O 10 vector } WBRAM_15_0_6_ce1 { O 1 bit } WBRAM_15_0_6_d1 { O 32 vector } WBRAM_15_0_6_q1 { I 32 vector } WBRAM_15_0_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1390 \
    name WBRAM_15_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_6 \
    op interface \
    ports { WBRAM_15_1_6_address0 { O 10 vector } WBRAM_15_1_6_ce0 { O 1 bit } WBRAM_15_1_6_d0 { O 32 vector } WBRAM_15_1_6_q0 { I 32 vector } WBRAM_15_1_6_we0 { O 1 bit } WBRAM_15_1_6_address1 { O 10 vector } WBRAM_15_1_6_ce1 { O 1 bit } WBRAM_15_1_6_d1 { O 32 vector } WBRAM_15_1_6_q1 { I 32 vector } WBRAM_15_1_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1391 \
    name WBRAM_15_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_6 \
    op interface \
    ports { WBRAM_15_2_6_address0 { O 10 vector } WBRAM_15_2_6_ce0 { O 1 bit } WBRAM_15_2_6_d0 { O 32 vector } WBRAM_15_2_6_q0 { I 32 vector } WBRAM_15_2_6_we0 { O 1 bit } WBRAM_15_2_6_address1 { O 10 vector } WBRAM_15_2_6_ce1 { O 1 bit } WBRAM_15_2_6_d1 { O 32 vector } WBRAM_15_2_6_q1 { I 32 vector } WBRAM_15_2_6_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1392 \
    name WBRAM_15_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_7 \
    op interface \
    ports { WBRAM_15_0_7_address0 { O 10 vector } WBRAM_15_0_7_ce0 { O 1 bit } WBRAM_15_0_7_d0 { O 32 vector } WBRAM_15_0_7_q0 { I 32 vector } WBRAM_15_0_7_we0 { O 1 bit } WBRAM_15_0_7_address1 { O 10 vector } WBRAM_15_0_7_ce1 { O 1 bit } WBRAM_15_0_7_d1 { O 32 vector } WBRAM_15_0_7_q1 { I 32 vector } WBRAM_15_0_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1393 \
    name WBRAM_15_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_7 \
    op interface \
    ports { WBRAM_15_1_7_address0 { O 10 vector } WBRAM_15_1_7_ce0 { O 1 bit } WBRAM_15_1_7_d0 { O 32 vector } WBRAM_15_1_7_q0 { I 32 vector } WBRAM_15_1_7_we0 { O 1 bit } WBRAM_15_1_7_address1 { O 10 vector } WBRAM_15_1_7_ce1 { O 1 bit } WBRAM_15_1_7_d1 { O 32 vector } WBRAM_15_1_7_q1 { I 32 vector } WBRAM_15_1_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1394 \
    name WBRAM_15_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_7 \
    op interface \
    ports { WBRAM_15_2_7_address0 { O 10 vector } WBRAM_15_2_7_ce0 { O 1 bit } WBRAM_15_2_7_d0 { O 32 vector } WBRAM_15_2_7_q0 { I 32 vector } WBRAM_15_2_7_we0 { O 1 bit } WBRAM_15_2_7_address1 { O 10 vector } WBRAM_15_2_7_ce1 { O 1 bit } WBRAM_15_2_7_d1 { O 32 vector } WBRAM_15_2_7_q1 { I 32 vector } WBRAM_15_2_7_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1395 \
    name WBRAM_15_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_8 \
    op interface \
    ports { WBRAM_15_0_8_address0 { O 10 vector } WBRAM_15_0_8_ce0 { O 1 bit } WBRAM_15_0_8_d0 { O 32 vector } WBRAM_15_0_8_q0 { I 32 vector } WBRAM_15_0_8_we0 { O 1 bit } WBRAM_15_0_8_address1 { O 10 vector } WBRAM_15_0_8_ce1 { O 1 bit } WBRAM_15_0_8_d1 { O 32 vector } WBRAM_15_0_8_q1 { I 32 vector } WBRAM_15_0_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1396 \
    name WBRAM_15_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_8 \
    op interface \
    ports { WBRAM_15_1_8_address0 { O 10 vector } WBRAM_15_1_8_ce0 { O 1 bit } WBRAM_15_1_8_d0 { O 32 vector } WBRAM_15_1_8_q0 { I 32 vector } WBRAM_15_1_8_we0 { O 1 bit } WBRAM_15_1_8_address1 { O 10 vector } WBRAM_15_1_8_ce1 { O 1 bit } WBRAM_15_1_8_d1 { O 32 vector } WBRAM_15_1_8_q1 { I 32 vector } WBRAM_15_1_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 1397 \
    name WBRAM_15_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_8 \
    op interface \
    ports { WBRAM_15_2_8_address0 { O 10 vector } WBRAM_15_2_8_ce0 { O 1 bit } WBRAM_15_2_8_d0 { O 32 vector } WBRAM_15_2_8_q0 { I 32 vector } WBRAM_15_2_8_we0 { O 1 bit } WBRAM_15_2_8_address1 { O 10 vector } WBRAM_15_2_8_ce1 { O 1 bit } WBRAM_15_2_8_d1 { O 32 vector } WBRAM_15_2_8_q1 { I 32 vector } WBRAM_15_2_8_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_8'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 939 \
    name y_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_y_V \
    op interface \
    ports { y_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 940 \
    name x_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_V \
    op interface \
    ports { x_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 941 \
    name ci_in_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ci_in_V \
    op interface \
    ports { ci_in_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 942 \
    name ch_out_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ch_out_V \
    op interface \
    ports { ch_out_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 943 \
    name line_width \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_line_width \
    op interface \
    ports { line_width { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 944 \
    name ImageCache_ch_in_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ImageCache_ch_in_V \
    op interface \
    ports { ImageCache_ch_in_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 945 \
    name ImageCache_width_in_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ImageCache_width_in_V \
    op interface \
    ports { ImageCache_width_in_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 946 \
    name ImageCache_height_in_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ImageCache_height_in_V \
    op interface \
    ports { ImageCache_height_in_V { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 948 \
    name WeightsCache_ch_out_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_WeightsCache_ch_out_V \
    op interface \
    ports { WeightsCache_ch_out_V { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 950 \
    name WeightsCache_kernel_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_WeightsCache_kernel_V \
    op interface \
    ports { WeightsCache_kernel_V { I 2 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


