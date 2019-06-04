# This script segment is generated automatically by AutoPilot

set id 18
set name fpga_top_fadd_32ns_32ns_32_5_full_dsp
set corename simcore_fadd
set op fadd
set stage_num 5
set max_latency -1
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fadd] == "ap_gen_simcore_fadd"} {
eval "ap_gen_simcore_fadd { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fadd, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fadd
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 178
set name fpga_top_fmul_32ns_32ns_32_4_max_dsp
set corename simcore_fmul
set op fmul
set stage_num 4
set max_latency -1
set registered_input 1
set impl_style max_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fmul] == "ap_gen_simcore_fmul"} {
eval "ap_gen_simcore_fmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fmul
set corename FMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 322
set name fpga_top_mux_3to1_sel2_32_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set in1_width 32
set in1_signed 0
set in2_width 32
set in2_signed 0
set in3_width 32
set in3_signed 0
set in4_width 2
set in4_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    in3_width ${in3_width} \
    in3_signed ${in3_signed} \
    in4_width ${in4_width} \
    in4_signed ${in4_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
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
    id 478 \
    name OBRAM_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_0 \
    op interface \
    ports { OBRAM_0_address0 { O 5 vector } OBRAM_0_ce0 { O 1 bit } OBRAM_0_we0 { O 1 bit } OBRAM_0_d0 { O 32 vector } OBRAM_0_q0 { I 32 vector } OBRAM_0_address1 { O 5 vector } OBRAM_0_ce1 { O 1 bit } OBRAM_0_we1 { O 1 bit } OBRAM_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 480 \
    name WBRAM_0_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_0 \
    op interface \
    ports { WBRAM_0_0_0_address0 { O 10 vector } WBRAM_0_0_0_ce0 { O 1 bit } WBRAM_0_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 481 \
    name WBRAM_0_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_0 \
    op interface \
    ports { WBRAM_0_1_0_address0 { O 10 vector } WBRAM_0_1_0_ce0 { O 1 bit } WBRAM_0_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 482 \
    name WBRAM_0_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_0 \
    op interface \
    ports { WBRAM_0_2_0_address0 { O 10 vector } WBRAM_0_2_0_ce0 { O 1 bit } WBRAM_0_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 483 \
    name WBRAM_0_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_1 \
    op interface \
    ports { WBRAM_0_0_1_address0 { O 10 vector } WBRAM_0_0_1_ce0 { O 1 bit } WBRAM_0_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 484 \
    name WBRAM_0_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_1 \
    op interface \
    ports { WBRAM_0_1_1_address0 { O 10 vector } WBRAM_0_1_1_ce0 { O 1 bit } WBRAM_0_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 485 \
    name WBRAM_0_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_1 \
    op interface \
    ports { WBRAM_0_2_1_address0 { O 10 vector } WBRAM_0_2_1_ce0 { O 1 bit } WBRAM_0_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 486 \
    name WBRAM_0_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_2 \
    op interface \
    ports { WBRAM_0_0_2_address0 { O 10 vector } WBRAM_0_0_2_ce0 { O 1 bit } WBRAM_0_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 487 \
    name WBRAM_0_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_2 \
    op interface \
    ports { WBRAM_0_1_2_address0 { O 10 vector } WBRAM_0_1_2_ce0 { O 1 bit } WBRAM_0_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 488 \
    name WBRAM_0_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_2 \
    op interface \
    ports { WBRAM_0_2_2_address0 { O 10 vector } WBRAM_0_2_2_ce0 { O 1 bit } WBRAM_0_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 489 \
    name WBRAM_0_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_3 \
    op interface \
    ports { WBRAM_0_0_3_address0 { O 10 vector } WBRAM_0_0_3_ce0 { O 1 bit } WBRAM_0_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 490 \
    name WBRAM_0_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_3 \
    op interface \
    ports { WBRAM_0_1_3_address0 { O 10 vector } WBRAM_0_1_3_ce0 { O 1 bit } WBRAM_0_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 491 \
    name WBRAM_0_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_3 \
    op interface \
    ports { WBRAM_0_2_3_address0 { O 10 vector } WBRAM_0_2_3_ce0 { O 1 bit } WBRAM_0_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 492 \
    name WBRAM_0_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_4 \
    op interface \
    ports { WBRAM_0_0_4_address0 { O 10 vector } WBRAM_0_0_4_ce0 { O 1 bit } WBRAM_0_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 493 \
    name WBRAM_0_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_4 \
    op interface \
    ports { WBRAM_0_1_4_address0 { O 10 vector } WBRAM_0_1_4_ce0 { O 1 bit } WBRAM_0_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 494 \
    name WBRAM_0_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_4 \
    op interface \
    ports { WBRAM_0_2_4_address0 { O 10 vector } WBRAM_0_2_4_ce0 { O 1 bit } WBRAM_0_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 495 \
    name WBRAM_0_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_5 \
    op interface \
    ports { WBRAM_0_0_5_address0 { O 10 vector } WBRAM_0_0_5_ce0 { O 1 bit } WBRAM_0_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 496 \
    name WBRAM_0_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_5 \
    op interface \
    ports { WBRAM_0_1_5_address0 { O 10 vector } WBRAM_0_1_5_ce0 { O 1 bit } WBRAM_0_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 497 \
    name WBRAM_0_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_5 \
    op interface \
    ports { WBRAM_0_2_5_address0 { O 10 vector } WBRAM_0_2_5_ce0 { O 1 bit } WBRAM_0_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 498 \
    name WBRAM_0_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_6 \
    op interface \
    ports { WBRAM_0_0_6_address0 { O 10 vector } WBRAM_0_0_6_ce0 { O 1 bit } WBRAM_0_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 499 \
    name WBRAM_0_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_6 \
    op interface \
    ports { WBRAM_0_1_6_address0 { O 10 vector } WBRAM_0_1_6_ce0 { O 1 bit } WBRAM_0_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 500 \
    name WBRAM_0_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_6 \
    op interface \
    ports { WBRAM_0_2_6_address0 { O 10 vector } WBRAM_0_2_6_ce0 { O 1 bit } WBRAM_0_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 501 \
    name WBRAM_0_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_7 \
    op interface \
    ports { WBRAM_0_0_7_address0 { O 10 vector } WBRAM_0_0_7_ce0 { O 1 bit } WBRAM_0_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 502 \
    name WBRAM_0_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_7 \
    op interface \
    ports { WBRAM_0_1_7_address0 { O 10 vector } WBRAM_0_1_7_ce0 { O 1 bit } WBRAM_0_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 503 \
    name WBRAM_0_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_7 \
    op interface \
    ports { WBRAM_0_2_7_address0 { O 10 vector } WBRAM_0_2_7_ce0 { O 1 bit } WBRAM_0_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 504 \
    name WBRAM_0_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_0_8 \
    op interface \
    ports { WBRAM_0_0_8_address0 { O 10 vector } WBRAM_0_0_8_ce0 { O 1 bit } WBRAM_0_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 505 \
    name WBRAM_0_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_1_8 \
    op interface \
    ports { WBRAM_0_1_8_address0 { O 10 vector } WBRAM_0_1_8_ce0 { O 1 bit } WBRAM_0_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 506 \
    name WBRAM_0_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_0_2_8 \
    op interface \
    ports { WBRAM_0_2_8_address0 { O 10 vector } WBRAM_0_2_8_ce0 { O 1 bit } WBRAM_0_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_0_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 507 \
    name OBRAM_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_1 \
    op interface \
    ports { OBRAM_1_address0 { O 5 vector } OBRAM_1_ce0 { O 1 bit } OBRAM_1_we0 { O 1 bit } OBRAM_1_d0 { O 32 vector } OBRAM_1_q0 { I 32 vector } OBRAM_1_address1 { O 5 vector } OBRAM_1_ce1 { O 1 bit } OBRAM_1_we1 { O 1 bit } OBRAM_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 508 \
    name WBRAM_1_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_0 \
    op interface \
    ports { WBRAM_1_0_0_address0 { O 10 vector } WBRAM_1_0_0_ce0 { O 1 bit } WBRAM_1_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 509 \
    name WBRAM_1_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_0 \
    op interface \
    ports { WBRAM_1_1_0_address0 { O 10 vector } WBRAM_1_1_0_ce0 { O 1 bit } WBRAM_1_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 510 \
    name WBRAM_1_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_0 \
    op interface \
    ports { WBRAM_1_2_0_address0 { O 10 vector } WBRAM_1_2_0_ce0 { O 1 bit } WBRAM_1_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 511 \
    name WBRAM_1_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_1 \
    op interface \
    ports { WBRAM_1_0_1_address0 { O 10 vector } WBRAM_1_0_1_ce0 { O 1 bit } WBRAM_1_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 512 \
    name WBRAM_1_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_1 \
    op interface \
    ports { WBRAM_1_1_1_address0 { O 10 vector } WBRAM_1_1_1_ce0 { O 1 bit } WBRAM_1_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 513 \
    name WBRAM_1_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_1 \
    op interface \
    ports { WBRAM_1_2_1_address0 { O 10 vector } WBRAM_1_2_1_ce0 { O 1 bit } WBRAM_1_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 514 \
    name WBRAM_1_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_2 \
    op interface \
    ports { WBRAM_1_0_2_address0 { O 10 vector } WBRAM_1_0_2_ce0 { O 1 bit } WBRAM_1_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 515 \
    name WBRAM_1_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_2 \
    op interface \
    ports { WBRAM_1_1_2_address0 { O 10 vector } WBRAM_1_1_2_ce0 { O 1 bit } WBRAM_1_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 516 \
    name WBRAM_1_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_2 \
    op interface \
    ports { WBRAM_1_2_2_address0 { O 10 vector } WBRAM_1_2_2_ce0 { O 1 bit } WBRAM_1_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 517 \
    name WBRAM_1_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_3 \
    op interface \
    ports { WBRAM_1_0_3_address0 { O 10 vector } WBRAM_1_0_3_ce0 { O 1 bit } WBRAM_1_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 518 \
    name WBRAM_1_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_3 \
    op interface \
    ports { WBRAM_1_1_3_address0 { O 10 vector } WBRAM_1_1_3_ce0 { O 1 bit } WBRAM_1_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 519 \
    name WBRAM_1_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_3 \
    op interface \
    ports { WBRAM_1_2_3_address0 { O 10 vector } WBRAM_1_2_3_ce0 { O 1 bit } WBRAM_1_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 520 \
    name WBRAM_1_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_4 \
    op interface \
    ports { WBRAM_1_0_4_address0 { O 10 vector } WBRAM_1_0_4_ce0 { O 1 bit } WBRAM_1_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 521 \
    name WBRAM_1_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_4 \
    op interface \
    ports { WBRAM_1_1_4_address0 { O 10 vector } WBRAM_1_1_4_ce0 { O 1 bit } WBRAM_1_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 522 \
    name WBRAM_1_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_4 \
    op interface \
    ports { WBRAM_1_2_4_address0 { O 10 vector } WBRAM_1_2_4_ce0 { O 1 bit } WBRAM_1_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 523 \
    name WBRAM_1_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_5 \
    op interface \
    ports { WBRAM_1_0_5_address0 { O 10 vector } WBRAM_1_0_5_ce0 { O 1 bit } WBRAM_1_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 524 \
    name WBRAM_1_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_5 \
    op interface \
    ports { WBRAM_1_1_5_address0 { O 10 vector } WBRAM_1_1_5_ce0 { O 1 bit } WBRAM_1_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 525 \
    name WBRAM_1_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_5 \
    op interface \
    ports { WBRAM_1_2_5_address0 { O 10 vector } WBRAM_1_2_5_ce0 { O 1 bit } WBRAM_1_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 526 \
    name WBRAM_1_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_6 \
    op interface \
    ports { WBRAM_1_0_6_address0 { O 10 vector } WBRAM_1_0_6_ce0 { O 1 bit } WBRAM_1_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 527 \
    name WBRAM_1_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_6 \
    op interface \
    ports { WBRAM_1_1_6_address0 { O 10 vector } WBRAM_1_1_6_ce0 { O 1 bit } WBRAM_1_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 528 \
    name WBRAM_1_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_6 \
    op interface \
    ports { WBRAM_1_2_6_address0 { O 10 vector } WBRAM_1_2_6_ce0 { O 1 bit } WBRAM_1_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 529 \
    name WBRAM_1_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_7 \
    op interface \
    ports { WBRAM_1_0_7_address0 { O 10 vector } WBRAM_1_0_7_ce0 { O 1 bit } WBRAM_1_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 530 \
    name WBRAM_1_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_7 \
    op interface \
    ports { WBRAM_1_1_7_address0 { O 10 vector } WBRAM_1_1_7_ce0 { O 1 bit } WBRAM_1_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 531 \
    name WBRAM_1_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_7 \
    op interface \
    ports { WBRAM_1_2_7_address0 { O 10 vector } WBRAM_1_2_7_ce0 { O 1 bit } WBRAM_1_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 532 \
    name WBRAM_1_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_0_8 \
    op interface \
    ports { WBRAM_1_0_8_address0 { O 10 vector } WBRAM_1_0_8_ce0 { O 1 bit } WBRAM_1_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 533 \
    name WBRAM_1_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_1_8 \
    op interface \
    ports { WBRAM_1_1_8_address0 { O 10 vector } WBRAM_1_1_8_ce0 { O 1 bit } WBRAM_1_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 534 \
    name WBRAM_1_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_1_2_8 \
    op interface \
    ports { WBRAM_1_2_8_address0 { O 10 vector } WBRAM_1_2_8_ce0 { O 1 bit } WBRAM_1_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_1_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 535 \
    name OBRAM_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_2 \
    op interface \
    ports { OBRAM_2_address0 { O 5 vector } OBRAM_2_ce0 { O 1 bit } OBRAM_2_we0 { O 1 bit } OBRAM_2_d0 { O 32 vector } OBRAM_2_q0 { I 32 vector } OBRAM_2_address1 { O 5 vector } OBRAM_2_ce1 { O 1 bit } OBRAM_2_we1 { O 1 bit } OBRAM_2_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 536 \
    name WBRAM_2_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_0 \
    op interface \
    ports { WBRAM_2_0_0_address0 { O 10 vector } WBRAM_2_0_0_ce0 { O 1 bit } WBRAM_2_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 537 \
    name WBRAM_2_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_0 \
    op interface \
    ports { WBRAM_2_1_0_address0 { O 10 vector } WBRAM_2_1_0_ce0 { O 1 bit } WBRAM_2_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 538 \
    name WBRAM_2_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_0 \
    op interface \
    ports { WBRAM_2_2_0_address0 { O 10 vector } WBRAM_2_2_0_ce0 { O 1 bit } WBRAM_2_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 539 \
    name WBRAM_2_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_1 \
    op interface \
    ports { WBRAM_2_0_1_address0 { O 10 vector } WBRAM_2_0_1_ce0 { O 1 bit } WBRAM_2_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 540 \
    name WBRAM_2_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_1 \
    op interface \
    ports { WBRAM_2_1_1_address0 { O 10 vector } WBRAM_2_1_1_ce0 { O 1 bit } WBRAM_2_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 541 \
    name WBRAM_2_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_1 \
    op interface \
    ports { WBRAM_2_2_1_address0 { O 10 vector } WBRAM_2_2_1_ce0 { O 1 bit } WBRAM_2_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 542 \
    name WBRAM_2_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_2 \
    op interface \
    ports { WBRAM_2_0_2_address0 { O 10 vector } WBRAM_2_0_2_ce0 { O 1 bit } WBRAM_2_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 543 \
    name WBRAM_2_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_2 \
    op interface \
    ports { WBRAM_2_1_2_address0 { O 10 vector } WBRAM_2_1_2_ce0 { O 1 bit } WBRAM_2_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 544 \
    name WBRAM_2_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_2 \
    op interface \
    ports { WBRAM_2_2_2_address0 { O 10 vector } WBRAM_2_2_2_ce0 { O 1 bit } WBRAM_2_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 545 \
    name WBRAM_2_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_3 \
    op interface \
    ports { WBRAM_2_0_3_address0 { O 10 vector } WBRAM_2_0_3_ce0 { O 1 bit } WBRAM_2_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 546 \
    name WBRAM_2_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_3 \
    op interface \
    ports { WBRAM_2_1_3_address0 { O 10 vector } WBRAM_2_1_3_ce0 { O 1 bit } WBRAM_2_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 547 \
    name WBRAM_2_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_3 \
    op interface \
    ports { WBRAM_2_2_3_address0 { O 10 vector } WBRAM_2_2_3_ce0 { O 1 bit } WBRAM_2_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 548 \
    name WBRAM_2_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_4 \
    op interface \
    ports { WBRAM_2_0_4_address0 { O 10 vector } WBRAM_2_0_4_ce0 { O 1 bit } WBRAM_2_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 549 \
    name WBRAM_2_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_4 \
    op interface \
    ports { WBRAM_2_1_4_address0 { O 10 vector } WBRAM_2_1_4_ce0 { O 1 bit } WBRAM_2_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 550 \
    name WBRAM_2_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_4 \
    op interface \
    ports { WBRAM_2_2_4_address0 { O 10 vector } WBRAM_2_2_4_ce0 { O 1 bit } WBRAM_2_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 551 \
    name WBRAM_2_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_5 \
    op interface \
    ports { WBRAM_2_0_5_address0 { O 10 vector } WBRAM_2_0_5_ce0 { O 1 bit } WBRAM_2_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 552 \
    name WBRAM_2_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_5 \
    op interface \
    ports { WBRAM_2_1_5_address0 { O 10 vector } WBRAM_2_1_5_ce0 { O 1 bit } WBRAM_2_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 553 \
    name WBRAM_2_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_5 \
    op interface \
    ports { WBRAM_2_2_5_address0 { O 10 vector } WBRAM_2_2_5_ce0 { O 1 bit } WBRAM_2_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 554 \
    name WBRAM_2_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_6 \
    op interface \
    ports { WBRAM_2_0_6_address0 { O 10 vector } WBRAM_2_0_6_ce0 { O 1 bit } WBRAM_2_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 555 \
    name WBRAM_2_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_6 \
    op interface \
    ports { WBRAM_2_1_6_address0 { O 10 vector } WBRAM_2_1_6_ce0 { O 1 bit } WBRAM_2_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 556 \
    name WBRAM_2_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_6 \
    op interface \
    ports { WBRAM_2_2_6_address0 { O 10 vector } WBRAM_2_2_6_ce0 { O 1 bit } WBRAM_2_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 557 \
    name WBRAM_2_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_7 \
    op interface \
    ports { WBRAM_2_0_7_address0 { O 10 vector } WBRAM_2_0_7_ce0 { O 1 bit } WBRAM_2_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 558 \
    name WBRAM_2_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_7 \
    op interface \
    ports { WBRAM_2_1_7_address0 { O 10 vector } WBRAM_2_1_7_ce0 { O 1 bit } WBRAM_2_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 559 \
    name WBRAM_2_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_7 \
    op interface \
    ports { WBRAM_2_2_7_address0 { O 10 vector } WBRAM_2_2_7_ce0 { O 1 bit } WBRAM_2_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 560 \
    name WBRAM_2_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_0_8 \
    op interface \
    ports { WBRAM_2_0_8_address0 { O 10 vector } WBRAM_2_0_8_ce0 { O 1 bit } WBRAM_2_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 561 \
    name WBRAM_2_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_1_8 \
    op interface \
    ports { WBRAM_2_1_8_address0 { O 10 vector } WBRAM_2_1_8_ce0 { O 1 bit } WBRAM_2_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 562 \
    name WBRAM_2_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_2_2_8 \
    op interface \
    ports { WBRAM_2_2_8_address0 { O 10 vector } WBRAM_2_2_8_ce0 { O 1 bit } WBRAM_2_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_2_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 563 \
    name OBRAM_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_3 \
    op interface \
    ports { OBRAM_3_address0 { O 5 vector } OBRAM_3_ce0 { O 1 bit } OBRAM_3_we0 { O 1 bit } OBRAM_3_d0 { O 32 vector } OBRAM_3_q0 { I 32 vector } OBRAM_3_address1 { O 5 vector } OBRAM_3_ce1 { O 1 bit } OBRAM_3_we1 { O 1 bit } OBRAM_3_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 564 \
    name WBRAM_3_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_0 \
    op interface \
    ports { WBRAM_3_0_0_address0 { O 10 vector } WBRAM_3_0_0_ce0 { O 1 bit } WBRAM_3_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 565 \
    name WBRAM_3_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_0 \
    op interface \
    ports { WBRAM_3_1_0_address0 { O 10 vector } WBRAM_3_1_0_ce0 { O 1 bit } WBRAM_3_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 566 \
    name WBRAM_3_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_0 \
    op interface \
    ports { WBRAM_3_2_0_address0 { O 10 vector } WBRAM_3_2_0_ce0 { O 1 bit } WBRAM_3_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 567 \
    name WBRAM_3_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_1 \
    op interface \
    ports { WBRAM_3_0_1_address0 { O 10 vector } WBRAM_3_0_1_ce0 { O 1 bit } WBRAM_3_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 568 \
    name WBRAM_3_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_1 \
    op interface \
    ports { WBRAM_3_1_1_address0 { O 10 vector } WBRAM_3_1_1_ce0 { O 1 bit } WBRAM_3_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 569 \
    name WBRAM_3_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_1 \
    op interface \
    ports { WBRAM_3_2_1_address0 { O 10 vector } WBRAM_3_2_1_ce0 { O 1 bit } WBRAM_3_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 570 \
    name WBRAM_3_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_2 \
    op interface \
    ports { WBRAM_3_0_2_address0 { O 10 vector } WBRAM_3_0_2_ce0 { O 1 bit } WBRAM_3_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 571 \
    name WBRAM_3_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_2 \
    op interface \
    ports { WBRAM_3_1_2_address0 { O 10 vector } WBRAM_3_1_2_ce0 { O 1 bit } WBRAM_3_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 572 \
    name WBRAM_3_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_2 \
    op interface \
    ports { WBRAM_3_2_2_address0 { O 10 vector } WBRAM_3_2_2_ce0 { O 1 bit } WBRAM_3_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 573 \
    name WBRAM_3_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_3 \
    op interface \
    ports { WBRAM_3_0_3_address0 { O 10 vector } WBRAM_3_0_3_ce0 { O 1 bit } WBRAM_3_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 574 \
    name WBRAM_3_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_3 \
    op interface \
    ports { WBRAM_3_1_3_address0 { O 10 vector } WBRAM_3_1_3_ce0 { O 1 bit } WBRAM_3_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 575 \
    name WBRAM_3_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_3 \
    op interface \
    ports { WBRAM_3_2_3_address0 { O 10 vector } WBRAM_3_2_3_ce0 { O 1 bit } WBRAM_3_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 576 \
    name WBRAM_3_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_4 \
    op interface \
    ports { WBRAM_3_0_4_address0 { O 10 vector } WBRAM_3_0_4_ce0 { O 1 bit } WBRAM_3_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 577 \
    name WBRAM_3_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_4 \
    op interface \
    ports { WBRAM_3_1_4_address0 { O 10 vector } WBRAM_3_1_4_ce0 { O 1 bit } WBRAM_3_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 578 \
    name WBRAM_3_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_4 \
    op interface \
    ports { WBRAM_3_2_4_address0 { O 10 vector } WBRAM_3_2_4_ce0 { O 1 bit } WBRAM_3_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 579 \
    name WBRAM_3_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_5 \
    op interface \
    ports { WBRAM_3_0_5_address0 { O 10 vector } WBRAM_3_0_5_ce0 { O 1 bit } WBRAM_3_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 580 \
    name WBRAM_3_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_5 \
    op interface \
    ports { WBRAM_3_1_5_address0 { O 10 vector } WBRAM_3_1_5_ce0 { O 1 bit } WBRAM_3_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 581 \
    name WBRAM_3_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_5 \
    op interface \
    ports { WBRAM_3_2_5_address0 { O 10 vector } WBRAM_3_2_5_ce0 { O 1 bit } WBRAM_3_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 582 \
    name WBRAM_3_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_6 \
    op interface \
    ports { WBRAM_3_0_6_address0 { O 10 vector } WBRAM_3_0_6_ce0 { O 1 bit } WBRAM_3_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 583 \
    name WBRAM_3_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_6 \
    op interface \
    ports { WBRAM_3_1_6_address0 { O 10 vector } WBRAM_3_1_6_ce0 { O 1 bit } WBRAM_3_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 584 \
    name WBRAM_3_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_6 \
    op interface \
    ports { WBRAM_3_2_6_address0 { O 10 vector } WBRAM_3_2_6_ce0 { O 1 bit } WBRAM_3_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 585 \
    name WBRAM_3_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_7 \
    op interface \
    ports { WBRAM_3_0_7_address0 { O 10 vector } WBRAM_3_0_7_ce0 { O 1 bit } WBRAM_3_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 586 \
    name WBRAM_3_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_7 \
    op interface \
    ports { WBRAM_3_1_7_address0 { O 10 vector } WBRAM_3_1_7_ce0 { O 1 bit } WBRAM_3_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 587 \
    name WBRAM_3_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_7 \
    op interface \
    ports { WBRAM_3_2_7_address0 { O 10 vector } WBRAM_3_2_7_ce0 { O 1 bit } WBRAM_3_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 588 \
    name WBRAM_3_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_0_8 \
    op interface \
    ports { WBRAM_3_0_8_address0 { O 10 vector } WBRAM_3_0_8_ce0 { O 1 bit } WBRAM_3_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 589 \
    name WBRAM_3_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_1_8 \
    op interface \
    ports { WBRAM_3_1_8_address0 { O 10 vector } WBRAM_3_1_8_ce0 { O 1 bit } WBRAM_3_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 590 \
    name WBRAM_3_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_3_2_8 \
    op interface \
    ports { WBRAM_3_2_8_address0 { O 10 vector } WBRAM_3_2_8_ce0 { O 1 bit } WBRAM_3_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_3_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 591 \
    name OBRAM_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_4 \
    op interface \
    ports { OBRAM_4_address0 { O 5 vector } OBRAM_4_ce0 { O 1 bit } OBRAM_4_we0 { O 1 bit } OBRAM_4_d0 { O 32 vector } OBRAM_4_q0 { I 32 vector } OBRAM_4_address1 { O 5 vector } OBRAM_4_ce1 { O 1 bit } OBRAM_4_we1 { O 1 bit } OBRAM_4_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 592 \
    name WBRAM_4_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_0 \
    op interface \
    ports { WBRAM_4_0_0_address0 { O 10 vector } WBRAM_4_0_0_ce0 { O 1 bit } WBRAM_4_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 593 \
    name WBRAM_4_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_0 \
    op interface \
    ports { WBRAM_4_1_0_address0 { O 10 vector } WBRAM_4_1_0_ce0 { O 1 bit } WBRAM_4_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 594 \
    name WBRAM_4_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_0 \
    op interface \
    ports { WBRAM_4_2_0_address0 { O 10 vector } WBRAM_4_2_0_ce0 { O 1 bit } WBRAM_4_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 595 \
    name WBRAM_4_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_1 \
    op interface \
    ports { WBRAM_4_0_1_address0 { O 10 vector } WBRAM_4_0_1_ce0 { O 1 bit } WBRAM_4_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 596 \
    name WBRAM_4_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_1 \
    op interface \
    ports { WBRAM_4_1_1_address0 { O 10 vector } WBRAM_4_1_1_ce0 { O 1 bit } WBRAM_4_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 597 \
    name WBRAM_4_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_1 \
    op interface \
    ports { WBRAM_4_2_1_address0 { O 10 vector } WBRAM_4_2_1_ce0 { O 1 bit } WBRAM_4_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 598 \
    name WBRAM_4_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_2 \
    op interface \
    ports { WBRAM_4_0_2_address0 { O 10 vector } WBRAM_4_0_2_ce0 { O 1 bit } WBRAM_4_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 599 \
    name WBRAM_4_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_2 \
    op interface \
    ports { WBRAM_4_1_2_address0 { O 10 vector } WBRAM_4_1_2_ce0 { O 1 bit } WBRAM_4_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 600 \
    name WBRAM_4_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_2 \
    op interface \
    ports { WBRAM_4_2_2_address0 { O 10 vector } WBRAM_4_2_2_ce0 { O 1 bit } WBRAM_4_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 601 \
    name WBRAM_4_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_3 \
    op interface \
    ports { WBRAM_4_0_3_address0 { O 10 vector } WBRAM_4_0_3_ce0 { O 1 bit } WBRAM_4_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 602 \
    name WBRAM_4_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_3 \
    op interface \
    ports { WBRAM_4_1_3_address0 { O 10 vector } WBRAM_4_1_3_ce0 { O 1 bit } WBRAM_4_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 603 \
    name WBRAM_4_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_3 \
    op interface \
    ports { WBRAM_4_2_3_address0 { O 10 vector } WBRAM_4_2_3_ce0 { O 1 bit } WBRAM_4_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 604 \
    name WBRAM_4_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_4 \
    op interface \
    ports { WBRAM_4_0_4_address0 { O 10 vector } WBRAM_4_0_4_ce0 { O 1 bit } WBRAM_4_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 605 \
    name WBRAM_4_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_4 \
    op interface \
    ports { WBRAM_4_1_4_address0 { O 10 vector } WBRAM_4_1_4_ce0 { O 1 bit } WBRAM_4_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 606 \
    name WBRAM_4_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_4 \
    op interface \
    ports { WBRAM_4_2_4_address0 { O 10 vector } WBRAM_4_2_4_ce0 { O 1 bit } WBRAM_4_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 607 \
    name WBRAM_4_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_5 \
    op interface \
    ports { WBRAM_4_0_5_address0 { O 10 vector } WBRAM_4_0_5_ce0 { O 1 bit } WBRAM_4_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 608 \
    name WBRAM_4_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_5 \
    op interface \
    ports { WBRAM_4_1_5_address0 { O 10 vector } WBRAM_4_1_5_ce0 { O 1 bit } WBRAM_4_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 609 \
    name WBRAM_4_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_5 \
    op interface \
    ports { WBRAM_4_2_5_address0 { O 10 vector } WBRAM_4_2_5_ce0 { O 1 bit } WBRAM_4_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 610 \
    name WBRAM_4_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_6 \
    op interface \
    ports { WBRAM_4_0_6_address0 { O 10 vector } WBRAM_4_0_6_ce0 { O 1 bit } WBRAM_4_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 611 \
    name WBRAM_4_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_6 \
    op interface \
    ports { WBRAM_4_1_6_address0 { O 10 vector } WBRAM_4_1_6_ce0 { O 1 bit } WBRAM_4_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 612 \
    name WBRAM_4_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_6 \
    op interface \
    ports { WBRAM_4_2_6_address0 { O 10 vector } WBRAM_4_2_6_ce0 { O 1 bit } WBRAM_4_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 613 \
    name WBRAM_4_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_7 \
    op interface \
    ports { WBRAM_4_0_7_address0 { O 10 vector } WBRAM_4_0_7_ce0 { O 1 bit } WBRAM_4_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 614 \
    name WBRAM_4_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_7 \
    op interface \
    ports { WBRAM_4_1_7_address0 { O 10 vector } WBRAM_4_1_7_ce0 { O 1 bit } WBRAM_4_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 615 \
    name WBRAM_4_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_7 \
    op interface \
    ports { WBRAM_4_2_7_address0 { O 10 vector } WBRAM_4_2_7_ce0 { O 1 bit } WBRAM_4_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 616 \
    name WBRAM_4_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_0_8 \
    op interface \
    ports { WBRAM_4_0_8_address0 { O 10 vector } WBRAM_4_0_8_ce0 { O 1 bit } WBRAM_4_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 617 \
    name WBRAM_4_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_1_8 \
    op interface \
    ports { WBRAM_4_1_8_address0 { O 10 vector } WBRAM_4_1_8_ce0 { O 1 bit } WBRAM_4_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 618 \
    name WBRAM_4_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_4_2_8 \
    op interface \
    ports { WBRAM_4_2_8_address0 { O 10 vector } WBRAM_4_2_8_ce0 { O 1 bit } WBRAM_4_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_4_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 619 \
    name OBRAM_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_5 \
    op interface \
    ports { OBRAM_5_address0 { O 5 vector } OBRAM_5_ce0 { O 1 bit } OBRAM_5_we0 { O 1 bit } OBRAM_5_d0 { O 32 vector } OBRAM_5_q0 { I 32 vector } OBRAM_5_address1 { O 5 vector } OBRAM_5_ce1 { O 1 bit } OBRAM_5_we1 { O 1 bit } OBRAM_5_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 620 \
    name WBRAM_5_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_0 \
    op interface \
    ports { WBRAM_5_0_0_address0 { O 10 vector } WBRAM_5_0_0_ce0 { O 1 bit } WBRAM_5_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 621 \
    name WBRAM_5_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_0 \
    op interface \
    ports { WBRAM_5_1_0_address0 { O 10 vector } WBRAM_5_1_0_ce0 { O 1 bit } WBRAM_5_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 622 \
    name WBRAM_5_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_0 \
    op interface \
    ports { WBRAM_5_2_0_address0 { O 10 vector } WBRAM_5_2_0_ce0 { O 1 bit } WBRAM_5_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 623 \
    name WBRAM_5_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_1 \
    op interface \
    ports { WBRAM_5_0_1_address0 { O 10 vector } WBRAM_5_0_1_ce0 { O 1 bit } WBRAM_5_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 624 \
    name WBRAM_5_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_1 \
    op interface \
    ports { WBRAM_5_1_1_address0 { O 10 vector } WBRAM_5_1_1_ce0 { O 1 bit } WBRAM_5_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 625 \
    name WBRAM_5_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_1 \
    op interface \
    ports { WBRAM_5_2_1_address0 { O 10 vector } WBRAM_5_2_1_ce0 { O 1 bit } WBRAM_5_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 626 \
    name WBRAM_5_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_2 \
    op interface \
    ports { WBRAM_5_0_2_address0 { O 10 vector } WBRAM_5_0_2_ce0 { O 1 bit } WBRAM_5_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 627 \
    name WBRAM_5_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_2 \
    op interface \
    ports { WBRAM_5_1_2_address0 { O 10 vector } WBRAM_5_1_2_ce0 { O 1 bit } WBRAM_5_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 628 \
    name WBRAM_5_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_2 \
    op interface \
    ports { WBRAM_5_2_2_address0 { O 10 vector } WBRAM_5_2_2_ce0 { O 1 bit } WBRAM_5_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 629 \
    name WBRAM_5_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_3 \
    op interface \
    ports { WBRAM_5_0_3_address0 { O 10 vector } WBRAM_5_0_3_ce0 { O 1 bit } WBRAM_5_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 630 \
    name WBRAM_5_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_3 \
    op interface \
    ports { WBRAM_5_1_3_address0 { O 10 vector } WBRAM_5_1_3_ce0 { O 1 bit } WBRAM_5_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 631 \
    name WBRAM_5_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_3 \
    op interface \
    ports { WBRAM_5_2_3_address0 { O 10 vector } WBRAM_5_2_3_ce0 { O 1 bit } WBRAM_5_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 632 \
    name WBRAM_5_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_4 \
    op interface \
    ports { WBRAM_5_0_4_address0 { O 10 vector } WBRAM_5_0_4_ce0 { O 1 bit } WBRAM_5_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 633 \
    name WBRAM_5_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_4 \
    op interface \
    ports { WBRAM_5_1_4_address0 { O 10 vector } WBRAM_5_1_4_ce0 { O 1 bit } WBRAM_5_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 634 \
    name WBRAM_5_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_4 \
    op interface \
    ports { WBRAM_5_2_4_address0 { O 10 vector } WBRAM_5_2_4_ce0 { O 1 bit } WBRAM_5_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 635 \
    name WBRAM_5_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_5 \
    op interface \
    ports { WBRAM_5_0_5_address0 { O 10 vector } WBRAM_5_0_5_ce0 { O 1 bit } WBRAM_5_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 636 \
    name WBRAM_5_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_5 \
    op interface \
    ports { WBRAM_5_1_5_address0 { O 10 vector } WBRAM_5_1_5_ce0 { O 1 bit } WBRAM_5_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 637 \
    name WBRAM_5_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_5 \
    op interface \
    ports { WBRAM_5_2_5_address0 { O 10 vector } WBRAM_5_2_5_ce0 { O 1 bit } WBRAM_5_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 638 \
    name WBRAM_5_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_6 \
    op interface \
    ports { WBRAM_5_0_6_address0 { O 10 vector } WBRAM_5_0_6_ce0 { O 1 bit } WBRAM_5_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 639 \
    name WBRAM_5_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_6 \
    op interface \
    ports { WBRAM_5_1_6_address0 { O 10 vector } WBRAM_5_1_6_ce0 { O 1 bit } WBRAM_5_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 640 \
    name WBRAM_5_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_6 \
    op interface \
    ports { WBRAM_5_2_6_address0 { O 10 vector } WBRAM_5_2_6_ce0 { O 1 bit } WBRAM_5_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 641 \
    name WBRAM_5_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_7 \
    op interface \
    ports { WBRAM_5_0_7_address0 { O 10 vector } WBRAM_5_0_7_ce0 { O 1 bit } WBRAM_5_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 642 \
    name WBRAM_5_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_7 \
    op interface \
    ports { WBRAM_5_1_7_address0 { O 10 vector } WBRAM_5_1_7_ce0 { O 1 bit } WBRAM_5_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 643 \
    name WBRAM_5_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_7 \
    op interface \
    ports { WBRAM_5_2_7_address0 { O 10 vector } WBRAM_5_2_7_ce0 { O 1 bit } WBRAM_5_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 644 \
    name WBRAM_5_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_0_8 \
    op interface \
    ports { WBRAM_5_0_8_address0 { O 10 vector } WBRAM_5_0_8_ce0 { O 1 bit } WBRAM_5_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 645 \
    name WBRAM_5_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_1_8 \
    op interface \
    ports { WBRAM_5_1_8_address0 { O 10 vector } WBRAM_5_1_8_ce0 { O 1 bit } WBRAM_5_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 646 \
    name WBRAM_5_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_5_2_8 \
    op interface \
    ports { WBRAM_5_2_8_address0 { O 10 vector } WBRAM_5_2_8_ce0 { O 1 bit } WBRAM_5_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_5_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 647 \
    name OBRAM_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_6 \
    op interface \
    ports { OBRAM_6_address0 { O 5 vector } OBRAM_6_ce0 { O 1 bit } OBRAM_6_we0 { O 1 bit } OBRAM_6_d0 { O 32 vector } OBRAM_6_q0 { I 32 vector } OBRAM_6_address1 { O 5 vector } OBRAM_6_ce1 { O 1 bit } OBRAM_6_we1 { O 1 bit } OBRAM_6_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 648 \
    name WBRAM_6_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_0 \
    op interface \
    ports { WBRAM_6_0_0_address0 { O 10 vector } WBRAM_6_0_0_ce0 { O 1 bit } WBRAM_6_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 649 \
    name WBRAM_6_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_0 \
    op interface \
    ports { WBRAM_6_1_0_address0 { O 10 vector } WBRAM_6_1_0_ce0 { O 1 bit } WBRAM_6_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 650 \
    name WBRAM_6_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_0 \
    op interface \
    ports { WBRAM_6_2_0_address0 { O 10 vector } WBRAM_6_2_0_ce0 { O 1 bit } WBRAM_6_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 651 \
    name WBRAM_6_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_1 \
    op interface \
    ports { WBRAM_6_0_1_address0 { O 10 vector } WBRAM_6_0_1_ce0 { O 1 bit } WBRAM_6_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 652 \
    name WBRAM_6_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_1 \
    op interface \
    ports { WBRAM_6_1_1_address0 { O 10 vector } WBRAM_6_1_1_ce0 { O 1 bit } WBRAM_6_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 653 \
    name WBRAM_6_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_1 \
    op interface \
    ports { WBRAM_6_2_1_address0 { O 10 vector } WBRAM_6_2_1_ce0 { O 1 bit } WBRAM_6_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 654 \
    name WBRAM_6_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_2 \
    op interface \
    ports { WBRAM_6_0_2_address0 { O 10 vector } WBRAM_6_0_2_ce0 { O 1 bit } WBRAM_6_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 655 \
    name WBRAM_6_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_2 \
    op interface \
    ports { WBRAM_6_1_2_address0 { O 10 vector } WBRAM_6_1_2_ce0 { O 1 bit } WBRAM_6_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 656 \
    name WBRAM_6_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_2 \
    op interface \
    ports { WBRAM_6_2_2_address0 { O 10 vector } WBRAM_6_2_2_ce0 { O 1 bit } WBRAM_6_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 657 \
    name WBRAM_6_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_3 \
    op interface \
    ports { WBRAM_6_0_3_address0 { O 10 vector } WBRAM_6_0_3_ce0 { O 1 bit } WBRAM_6_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 658 \
    name WBRAM_6_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_3 \
    op interface \
    ports { WBRAM_6_1_3_address0 { O 10 vector } WBRAM_6_1_3_ce0 { O 1 bit } WBRAM_6_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 659 \
    name WBRAM_6_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_3 \
    op interface \
    ports { WBRAM_6_2_3_address0 { O 10 vector } WBRAM_6_2_3_ce0 { O 1 bit } WBRAM_6_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 660 \
    name WBRAM_6_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_4 \
    op interface \
    ports { WBRAM_6_0_4_address0 { O 10 vector } WBRAM_6_0_4_ce0 { O 1 bit } WBRAM_6_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 661 \
    name WBRAM_6_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_4 \
    op interface \
    ports { WBRAM_6_1_4_address0 { O 10 vector } WBRAM_6_1_4_ce0 { O 1 bit } WBRAM_6_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 662 \
    name WBRAM_6_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_4 \
    op interface \
    ports { WBRAM_6_2_4_address0 { O 10 vector } WBRAM_6_2_4_ce0 { O 1 bit } WBRAM_6_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 663 \
    name WBRAM_6_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_5 \
    op interface \
    ports { WBRAM_6_0_5_address0 { O 10 vector } WBRAM_6_0_5_ce0 { O 1 bit } WBRAM_6_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 664 \
    name WBRAM_6_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_5 \
    op interface \
    ports { WBRAM_6_1_5_address0 { O 10 vector } WBRAM_6_1_5_ce0 { O 1 bit } WBRAM_6_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 665 \
    name WBRAM_6_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_5 \
    op interface \
    ports { WBRAM_6_2_5_address0 { O 10 vector } WBRAM_6_2_5_ce0 { O 1 bit } WBRAM_6_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 666 \
    name WBRAM_6_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_6 \
    op interface \
    ports { WBRAM_6_0_6_address0 { O 10 vector } WBRAM_6_0_6_ce0 { O 1 bit } WBRAM_6_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 667 \
    name WBRAM_6_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_6 \
    op interface \
    ports { WBRAM_6_1_6_address0 { O 10 vector } WBRAM_6_1_6_ce0 { O 1 bit } WBRAM_6_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 668 \
    name WBRAM_6_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_6 \
    op interface \
    ports { WBRAM_6_2_6_address0 { O 10 vector } WBRAM_6_2_6_ce0 { O 1 bit } WBRAM_6_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 669 \
    name WBRAM_6_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_7 \
    op interface \
    ports { WBRAM_6_0_7_address0 { O 10 vector } WBRAM_6_0_7_ce0 { O 1 bit } WBRAM_6_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 670 \
    name WBRAM_6_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_7 \
    op interface \
    ports { WBRAM_6_1_7_address0 { O 10 vector } WBRAM_6_1_7_ce0 { O 1 bit } WBRAM_6_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 671 \
    name WBRAM_6_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_7 \
    op interface \
    ports { WBRAM_6_2_7_address0 { O 10 vector } WBRAM_6_2_7_ce0 { O 1 bit } WBRAM_6_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 672 \
    name WBRAM_6_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_0_8 \
    op interface \
    ports { WBRAM_6_0_8_address0 { O 10 vector } WBRAM_6_0_8_ce0 { O 1 bit } WBRAM_6_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 673 \
    name WBRAM_6_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_1_8 \
    op interface \
    ports { WBRAM_6_1_8_address0 { O 10 vector } WBRAM_6_1_8_ce0 { O 1 bit } WBRAM_6_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 674 \
    name WBRAM_6_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_6_2_8 \
    op interface \
    ports { WBRAM_6_2_8_address0 { O 10 vector } WBRAM_6_2_8_ce0 { O 1 bit } WBRAM_6_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_6_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 675 \
    name OBRAM_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_7 \
    op interface \
    ports { OBRAM_7_address0 { O 5 vector } OBRAM_7_ce0 { O 1 bit } OBRAM_7_we0 { O 1 bit } OBRAM_7_d0 { O 32 vector } OBRAM_7_q0 { I 32 vector } OBRAM_7_address1 { O 5 vector } OBRAM_7_ce1 { O 1 bit } OBRAM_7_we1 { O 1 bit } OBRAM_7_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 676 \
    name WBRAM_7_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_0 \
    op interface \
    ports { WBRAM_7_0_0_address0 { O 10 vector } WBRAM_7_0_0_ce0 { O 1 bit } WBRAM_7_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 677 \
    name WBRAM_7_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_0 \
    op interface \
    ports { WBRAM_7_1_0_address0 { O 10 vector } WBRAM_7_1_0_ce0 { O 1 bit } WBRAM_7_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 678 \
    name WBRAM_7_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_0 \
    op interface \
    ports { WBRAM_7_2_0_address0 { O 10 vector } WBRAM_7_2_0_ce0 { O 1 bit } WBRAM_7_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 679 \
    name WBRAM_7_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_1 \
    op interface \
    ports { WBRAM_7_0_1_address0 { O 10 vector } WBRAM_7_0_1_ce0 { O 1 bit } WBRAM_7_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 680 \
    name WBRAM_7_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_1 \
    op interface \
    ports { WBRAM_7_1_1_address0 { O 10 vector } WBRAM_7_1_1_ce0 { O 1 bit } WBRAM_7_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 681 \
    name WBRAM_7_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_1 \
    op interface \
    ports { WBRAM_7_2_1_address0 { O 10 vector } WBRAM_7_2_1_ce0 { O 1 bit } WBRAM_7_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 682 \
    name WBRAM_7_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_2 \
    op interface \
    ports { WBRAM_7_0_2_address0 { O 10 vector } WBRAM_7_0_2_ce0 { O 1 bit } WBRAM_7_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 683 \
    name WBRAM_7_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_2 \
    op interface \
    ports { WBRAM_7_1_2_address0 { O 10 vector } WBRAM_7_1_2_ce0 { O 1 bit } WBRAM_7_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 684 \
    name WBRAM_7_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_2 \
    op interface \
    ports { WBRAM_7_2_2_address0 { O 10 vector } WBRAM_7_2_2_ce0 { O 1 bit } WBRAM_7_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 685 \
    name WBRAM_7_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_3 \
    op interface \
    ports { WBRAM_7_0_3_address0 { O 10 vector } WBRAM_7_0_3_ce0 { O 1 bit } WBRAM_7_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 686 \
    name WBRAM_7_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_3 \
    op interface \
    ports { WBRAM_7_1_3_address0 { O 10 vector } WBRAM_7_1_3_ce0 { O 1 bit } WBRAM_7_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 687 \
    name WBRAM_7_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_3 \
    op interface \
    ports { WBRAM_7_2_3_address0 { O 10 vector } WBRAM_7_2_3_ce0 { O 1 bit } WBRAM_7_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 688 \
    name WBRAM_7_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_4 \
    op interface \
    ports { WBRAM_7_0_4_address0 { O 10 vector } WBRAM_7_0_4_ce0 { O 1 bit } WBRAM_7_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 689 \
    name WBRAM_7_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_4 \
    op interface \
    ports { WBRAM_7_1_4_address0 { O 10 vector } WBRAM_7_1_4_ce0 { O 1 bit } WBRAM_7_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 690 \
    name WBRAM_7_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_4 \
    op interface \
    ports { WBRAM_7_2_4_address0 { O 10 vector } WBRAM_7_2_4_ce0 { O 1 bit } WBRAM_7_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 691 \
    name WBRAM_7_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_5 \
    op interface \
    ports { WBRAM_7_0_5_address0 { O 10 vector } WBRAM_7_0_5_ce0 { O 1 bit } WBRAM_7_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 692 \
    name WBRAM_7_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_5 \
    op interface \
    ports { WBRAM_7_1_5_address0 { O 10 vector } WBRAM_7_1_5_ce0 { O 1 bit } WBRAM_7_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 693 \
    name WBRAM_7_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_5 \
    op interface \
    ports { WBRAM_7_2_5_address0 { O 10 vector } WBRAM_7_2_5_ce0 { O 1 bit } WBRAM_7_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 694 \
    name WBRAM_7_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_6 \
    op interface \
    ports { WBRAM_7_0_6_address0 { O 10 vector } WBRAM_7_0_6_ce0 { O 1 bit } WBRAM_7_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 695 \
    name WBRAM_7_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_6 \
    op interface \
    ports { WBRAM_7_1_6_address0 { O 10 vector } WBRAM_7_1_6_ce0 { O 1 bit } WBRAM_7_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 696 \
    name WBRAM_7_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_6 \
    op interface \
    ports { WBRAM_7_2_6_address0 { O 10 vector } WBRAM_7_2_6_ce0 { O 1 bit } WBRAM_7_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 697 \
    name WBRAM_7_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_7 \
    op interface \
    ports { WBRAM_7_0_7_address0 { O 10 vector } WBRAM_7_0_7_ce0 { O 1 bit } WBRAM_7_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 698 \
    name WBRAM_7_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_7 \
    op interface \
    ports { WBRAM_7_1_7_address0 { O 10 vector } WBRAM_7_1_7_ce0 { O 1 bit } WBRAM_7_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 699 \
    name WBRAM_7_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_7 \
    op interface \
    ports { WBRAM_7_2_7_address0 { O 10 vector } WBRAM_7_2_7_ce0 { O 1 bit } WBRAM_7_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 700 \
    name WBRAM_7_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_0_8 \
    op interface \
    ports { WBRAM_7_0_8_address0 { O 10 vector } WBRAM_7_0_8_ce0 { O 1 bit } WBRAM_7_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 701 \
    name WBRAM_7_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_1_8 \
    op interface \
    ports { WBRAM_7_1_8_address0 { O 10 vector } WBRAM_7_1_8_ce0 { O 1 bit } WBRAM_7_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 702 \
    name WBRAM_7_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_7_2_8 \
    op interface \
    ports { WBRAM_7_2_8_address0 { O 10 vector } WBRAM_7_2_8_ce0 { O 1 bit } WBRAM_7_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_7_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 703 \
    name OBRAM_8 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_8 \
    op interface \
    ports { OBRAM_8_address0 { O 5 vector } OBRAM_8_ce0 { O 1 bit } OBRAM_8_we0 { O 1 bit } OBRAM_8_d0 { O 32 vector } OBRAM_8_q0 { I 32 vector } OBRAM_8_address1 { O 5 vector } OBRAM_8_ce1 { O 1 bit } OBRAM_8_we1 { O 1 bit } OBRAM_8_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 704 \
    name WBRAM_8_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_0 \
    op interface \
    ports { WBRAM_8_0_0_address0 { O 10 vector } WBRAM_8_0_0_ce0 { O 1 bit } WBRAM_8_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 705 \
    name WBRAM_8_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_0 \
    op interface \
    ports { WBRAM_8_1_0_address0 { O 10 vector } WBRAM_8_1_0_ce0 { O 1 bit } WBRAM_8_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 706 \
    name WBRAM_8_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_0 \
    op interface \
    ports { WBRAM_8_2_0_address0 { O 10 vector } WBRAM_8_2_0_ce0 { O 1 bit } WBRAM_8_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 707 \
    name WBRAM_8_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_1 \
    op interface \
    ports { WBRAM_8_0_1_address0 { O 10 vector } WBRAM_8_0_1_ce0 { O 1 bit } WBRAM_8_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 708 \
    name WBRAM_8_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_1 \
    op interface \
    ports { WBRAM_8_1_1_address0 { O 10 vector } WBRAM_8_1_1_ce0 { O 1 bit } WBRAM_8_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 709 \
    name WBRAM_8_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_1 \
    op interface \
    ports { WBRAM_8_2_1_address0 { O 10 vector } WBRAM_8_2_1_ce0 { O 1 bit } WBRAM_8_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 710 \
    name WBRAM_8_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_2 \
    op interface \
    ports { WBRAM_8_0_2_address0 { O 10 vector } WBRAM_8_0_2_ce0 { O 1 bit } WBRAM_8_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 711 \
    name WBRAM_8_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_2 \
    op interface \
    ports { WBRAM_8_1_2_address0 { O 10 vector } WBRAM_8_1_2_ce0 { O 1 bit } WBRAM_8_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 712 \
    name WBRAM_8_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_2 \
    op interface \
    ports { WBRAM_8_2_2_address0 { O 10 vector } WBRAM_8_2_2_ce0 { O 1 bit } WBRAM_8_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 713 \
    name WBRAM_8_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_3 \
    op interface \
    ports { WBRAM_8_0_3_address0 { O 10 vector } WBRAM_8_0_3_ce0 { O 1 bit } WBRAM_8_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 714 \
    name WBRAM_8_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_3 \
    op interface \
    ports { WBRAM_8_1_3_address0 { O 10 vector } WBRAM_8_1_3_ce0 { O 1 bit } WBRAM_8_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 715 \
    name WBRAM_8_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_3 \
    op interface \
    ports { WBRAM_8_2_3_address0 { O 10 vector } WBRAM_8_2_3_ce0 { O 1 bit } WBRAM_8_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 716 \
    name WBRAM_8_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_4 \
    op interface \
    ports { WBRAM_8_0_4_address0 { O 10 vector } WBRAM_8_0_4_ce0 { O 1 bit } WBRAM_8_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 717 \
    name WBRAM_8_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_4 \
    op interface \
    ports { WBRAM_8_1_4_address0 { O 10 vector } WBRAM_8_1_4_ce0 { O 1 bit } WBRAM_8_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 718 \
    name WBRAM_8_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_4 \
    op interface \
    ports { WBRAM_8_2_4_address0 { O 10 vector } WBRAM_8_2_4_ce0 { O 1 bit } WBRAM_8_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 719 \
    name WBRAM_8_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_5 \
    op interface \
    ports { WBRAM_8_0_5_address0 { O 10 vector } WBRAM_8_0_5_ce0 { O 1 bit } WBRAM_8_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 720 \
    name WBRAM_8_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_5 \
    op interface \
    ports { WBRAM_8_1_5_address0 { O 10 vector } WBRAM_8_1_5_ce0 { O 1 bit } WBRAM_8_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 721 \
    name WBRAM_8_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_5 \
    op interface \
    ports { WBRAM_8_2_5_address0 { O 10 vector } WBRAM_8_2_5_ce0 { O 1 bit } WBRAM_8_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 722 \
    name WBRAM_8_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_6 \
    op interface \
    ports { WBRAM_8_0_6_address0 { O 10 vector } WBRAM_8_0_6_ce0 { O 1 bit } WBRAM_8_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 723 \
    name WBRAM_8_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_6 \
    op interface \
    ports { WBRAM_8_1_6_address0 { O 10 vector } WBRAM_8_1_6_ce0 { O 1 bit } WBRAM_8_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 724 \
    name WBRAM_8_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_6 \
    op interface \
    ports { WBRAM_8_2_6_address0 { O 10 vector } WBRAM_8_2_6_ce0 { O 1 bit } WBRAM_8_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 725 \
    name WBRAM_8_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_7 \
    op interface \
    ports { WBRAM_8_0_7_address0 { O 10 vector } WBRAM_8_0_7_ce0 { O 1 bit } WBRAM_8_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 726 \
    name WBRAM_8_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_7 \
    op interface \
    ports { WBRAM_8_1_7_address0 { O 10 vector } WBRAM_8_1_7_ce0 { O 1 bit } WBRAM_8_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 727 \
    name WBRAM_8_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_7 \
    op interface \
    ports { WBRAM_8_2_7_address0 { O 10 vector } WBRAM_8_2_7_ce0 { O 1 bit } WBRAM_8_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 728 \
    name WBRAM_8_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_0_8 \
    op interface \
    ports { WBRAM_8_0_8_address0 { O 10 vector } WBRAM_8_0_8_ce0 { O 1 bit } WBRAM_8_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 729 \
    name WBRAM_8_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_1_8 \
    op interface \
    ports { WBRAM_8_1_8_address0 { O 10 vector } WBRAM_8_1_8_ce0 { O 1 bit } WBRAM_8_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 730 \
    name WBRAM_8_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_8_2_8 \
    op interface \
    ports { WBRAM_8_2_8_address0 { O 10 vector } WBRAM_8_2_8_ce0 { O 1 bit } WBRAM_8_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_8_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 731 \
    name OBRAM_9 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_9 \
    op interface \
    ports { OBRAM_9_address0 { O 5 vector } OBRAM_9_ce0 { O 1 bit } OBRAM_9_we0 { O 1 bit } OBRAM_9_d0 { O 32 vector } OBRAM_9_q0 { I 32 vector } OBRAM_9_address1 { O 5 vector } OBRAM_9_ce1 { O 1 bit } OBRAM_9_we1 { O 1 bit } OBRAM_9_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 732 \
    name WBRAM_9_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_0 \
    op interface \
    ports { WBRAM_9_0_0_address0 { O 10 vector } WBRAM_9_0_0_ce0 { O 1 bit } WBRAM_9_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 733 \
    name WBRAM_9_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_0 \
    op interface \
    ports { WBRAM_9_1_0_address0 { O 10 vector } WBRAM_9_1_0_ce0 { O 1 bit } WBRAM_9_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 734 \
    name WBRAM_9_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_0 \
    op interface \
    ports { WBRAM_9_2_0_address0 { O 10 vector } WBRAM_9_2_0_ce0 { O 1 bit } WBRAM_9_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 735 \
    name WBRAM_9_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_1 \
    op interface \
    ports { WBRAM_9_0_1_address0 { O 10 vector } WBRAM_9_0_1_ce0 { O 1 bit } WBRAM_9_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 736 \
    name WBRAM_9_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_1 \
    op interface \
    ports { WBRAM_9_1_1_address0 { O 10 vector } WBRAM_9_1_1_ce0 { O 1 bit } WBRAM_9_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 737 \
    name WBRAM_9_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_1 \
    op interface \
    ports { WBRAM_9_2_1_address0 { O 10 vector } WBRAM_9_2_1_ce0 { O 1 bit } WBRAM_9_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 738 \
    name WBRAM_9_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_2 \
    op interface \
    ports { WBRAM_9_0_2_address0 { O 10 vector } WBRAM_9_0_2_ce0 { O 1 bit } WBRAM_9_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 739 \
    name WBRAM_9_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_2 \
    op interface \
    ports { WBRAM_9_1_2_address0 { O 10 vector } WBRAM_9_1_2_ce0 { O 1 bit } WBRAM_9_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 740 \
    name WBRAM_9_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_2 \
    op interface \
    ports { WBRAM_9_2_2_address0 { O 10 vector } WBRAM_9_2_2_ce0 { O 1 bit } WBRAM_9_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 741 \
    name WBRAM_9_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_3 \
    op interface \
    ports { WBRAM_9_0_3_address0 { O 10 vector } WBRAM_9_0_3_ce0 { O 1 bit } WBRAM_9_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 742 \
    name WBRAM_9_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_3 \
    op interface \
    ports { WBRAM_9_1_3_address0 { O 10 vector } WBRAM_9_1_3_ce0 { O 1 bit } WBRAM_9_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 743 \
    name WBRAM_9_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_3 \
    op interface \
    ports { WBRAM_9_2_3_address0 { O 10 vector } WBRAM_9_2_3_ce0 { O 1 bit } WBRAM_9_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 744 \
    name WBRAM_9_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_4 \
    op interface \
    ports { WBRAM_9_0_4_address0 { O 10 vector } WBRAM_9_0_4_ce0 { O 1 bit } WBRAM_9_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 745 \
    name WBRAM_9_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_4 \
    op interface \
    ports { WBRAM_9_1_4_address0 { O 10 vector } WBRAM_9_1_4_ce0 { O 1 bit } WBRAM_9_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 746 \
    name WBRAM_9_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_4 \
    op interface \
    ports { WBRAM_9_2_4_address0 { O 10 vector } WBRAM_9_2_4_ce0 { O 1 bit } WBRAM_9_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 747 \
    name WBRAM_9_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_5 \
    op interface \
    ports { WBRAM_9_0_5_address0 { O 10 vector } WBRAM_9_0_5_ce0 { O 1 bit } WBRAM_9_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 748 \
    name WBRAM_9_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_5 \
    op interface \
    ports { WBRAM_9_1_5_address0 { O 10 vector } WBRAM_9_1_5_ce0 { O 1 bit } WBRAM_9_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 749 \
    name WBRAM_9_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_5 \
    op interface \
    ports { WBRAM_9_2_5_address0 { O 10 vector } WBRAM_9_2_5_ce0 { O 1 bit } WBRAM_9_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 750 \
    name WBRAM_9_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_6 \
    op interface \
    ports { WBRAM_9_0_6_address0 { O 10 vector } WBRAM_9_0_6_ce0 { O 1 bit } WBRAM_9_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 751 \
    name WBRAM_9_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_6 \
    op interface \
    ports { WBRAM_9_1_6_address0 { O 10 vector } WBRAM_9_1_6_ce0 { O 1 bit } WBRAM_9_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 752 \
    name WBRAM_9_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_6 \
    op interface \
    ports { WBRAM_9_2_6_address0 { O 10 vector } WBRAM_9_2_6_ce0 { O 1 bit } WBRAM_9_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 753 \
    name WBRAM_9_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_7 \
    op interface \
    ports { WBRAM_9_0_7_address0 { O 10 vector } WBRAM_9_0_7_ce0 { O 1 bit } WBRAM_9_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 754 \
    name WBRAM_9_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_7 \
    op interface \
    ports { WBRAM_9_1_7_address0 { O 10 vector } WBRAM_9_1_7_ce0 { O 1 bit } WBRAM_9_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 755 \
    name WBRAM_9_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_7 \
    op interface \
    ports { WBRAM_9_2_7_address0 { O 10 vector } WBRAM_9_2_7_ce0 { O 1 bit } WBRAM_9_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 756 \
    name WBRAM_9_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_0_8 \
    op interface \
    ports { WBRAM_9_0_8_address0 { O 10 vector } WBRAM_9_0_8_ce0 { O 1 bit } WBRAM_9_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 757 \
    name WBRAM_9_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_1_8 \
    op interface \
    ports { WBRAM_9_1_8_address0 { O 10 vector } WBRAM_9_1_8_ce0 { O 1 bit } WBRAM_9_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 758 \
    name WBRAM_9_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_9_2_8 \
    op interface \
    ports { WBRAM_9_2_8_address0 { O 10 vector } WBRAM_9_2_8_ce0 { O 1 bit } WBRAM_9_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_9_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 759 \
    name OBRAM_10 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_10 \
    op interface \
    ports { OBRAM_10_address0 { O 5 vector } OBRAM_10_ce0 { O 1 bit } OBRAM_10_we0 { O 1 bit } OBRAM_10_d0 { O 32 vector } OBRAM_10_q0 { I 32 vector } OBRAM_10_address1 { O 5 vector } OBRAM_10_ce1 { O 1 bit } OBRAM_10_we1 { O 1 bit } OBRAM_10_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 760 \
    name WBRAM_10_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_0 \
    op interface \
    ports { WBRAM_10_0_0_address0 { O 10 vector } WBRAM_10_0_0_ce0 { O 1 bit } WBRAM_10_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 761 \
    name WBRAM_10_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_0 \
    op interface \
    ports { WBRAM_10_1_0_address0 { O 10 vector } WBRAM_10_1_0_ce0 { O 1 bit } WBRAM_10_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 762 \
    name WBRAM_10_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_0 \
    op interface \
    ports { WBRAM_10_2_0_address0 { O 10 vector } WBRAM_10_2_0_ce0 { O 1 bit } WBRAM_10_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 763 \
    name WBRAM_10_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_1 \
    op interface \
    ports { WBRAM_10_0_1_address0 { O 10 vector } WBRAM_10_0_1_ce0 { O 1 bit } WBRAM_10_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 764 \
    name WBRAM_10_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_1 \
    op interface \
    ports { WBRAM_10_1_1_address0 { O 10 vector } WBRAM_10_1_1_ce0 { O 1 bit } WBRAM_10_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 765 \
    name WBRAM_10_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_1 \
    op interface \
    ports { WBRAM_10_2_1_address0 { O 10 vector } WBRAM_10_2_1_ce0 { O 1 bit } WBRAM_10_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 766 \
    name WBRAM_10_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_2 \
    op interface \
    ports { WBRAM_10_0_2_address0 { O 10 vector } WBRAM_10_0_2_ce0 { O 1 bit } WBRAM_10_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 767 \
    name WBRAM_10_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_2 \
    op interface \
    ports { WBRAM_10_1_2_address0 { O 10 vector } WBRAM_10_1_2_ce0 { O 1 bit } WBRAM_10_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 768 \
    name WBRAM_10_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_2 \
    op interface \
    ports { WBRAM_10_2_2_address0 { O 10 vector } WBRAM_10_2_2_ce0 { O 1 bit } WBRAM_10_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 769 \
    name WBRAM_10_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_3 \
    op interface \
    ports { WBRAM_10_0_3_address0 { O 10 vector } WBRAM_10_0_3_ce0 { O 1 bit } WBRAM_10_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 770 \
    name WBRAM_10_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_3 \
    op interface \
    ports { WBRAM_10_1_3_address0 { O 10 vector } WBRAM_10_1_3_ce0 { O 1 bit } WBRAM_10_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 771 \
    name WBRAM_10_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_3 \
    op interface \
    ports { WBRAM_10_2_3_address0 { O 10 vector } WBRAM_10_2_3_ce0 { O 1 bit } WBRAM_10_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 772 \
    name WBRAM_10_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_4 \
    op interface \
    ports { WBRAM_10_0_4_address0 { O 10 vector } WBRAM_10_0_4_ce0 { O 1 bit } WBRAM_10_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 773 \
    name WBRAM_10_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_4 \
    op interface \
    ports { WBRAM_10_1_4_address0 { O 10 vector } WBRAM_10_1_4_ce0 { O 1 bit } WBRAM_10_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 774 \
    name WBRAM_10_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_4 \
    op interface \
    ports { WBRAM_10_2_4_address0 { O 10 vector } WBRAM_10_2_4_ce0 { O 1 bit } WBRAM_10_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 775 \
    name WBRAM_10_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_5 \
    op interface \
    ports { WBRAM_10_0_5_address0 { O 10 vector } WBRAM_10_0_5_ce0 { O 1 bit } WBRAM_10_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 776 \
    name WBRAM_10_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_5 \
    op interface \
    ports { WBRAM_10_1_5_address0 { O 10 vector } WBRAM_10_1_5_ce0 { O 1 bit } WBRAM_10_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 777 \
    name WBRAM_10_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_5 \
    op interface \
    ports { WBRAM_10_2_5_address0 { O 10 vector } WBRAM_10_2_5_ce0 { O 1 bit } WBRAM_10_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 778 \
    name WBRAM_10_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_6 \
    op interface \
    ports { WBRAM_10_0_6_address0 { O 10 vector } WBRAM_10_0_6_ce0 { O 1 bit } WBRAM_10_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 779 \
    name WBRAM_10_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_6 \
    op interface \
    ports { WBRAM_10_1_6_address0 { O 10 vector } WBRAM_10_1_6_ce0 { O 1 bit } WBRAM_10_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 780 \
    name WBRAM_10_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_6 \
    op interface \
    ports { WBRAM_10_2_6_address0 { O 10 vector } WBRAM_10_2_6_ce0 { O 1 bit } WBRAM_10_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 781 \
    name WBRAM_10_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_7 \
    op interface \
    ports { WBRAM_10_0_7_address0 { O 10 vector } WBRAM_10_0_7_ce0 { O 1 bit } WBRAM_10_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 782 \
    name WBRAM_10_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_7 \
    op interface \
    ports { WBRAM_10_1_7_address0 { O 10 vector } WBRAM_10_1_7_ce0 { O 1 bit } WBRAM_10_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 783 \
    name WBRAM_10_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_7 \
    op interface \
    ports { WBRAM_10_2_7_address0 { O 10 vector } WBRAM_10_2_7_ce0 { O 1 bit } WBRAM_10_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 784 \
    name WBRAM_10_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_0_8 \
    op interface \
    ports { WBRAM_10_0_8_address0 { O 10 vector } WBRAM_10_0_8_ce0 { O 1 bit } WBRAM_10_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 785 \
    name WBRAM_10_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_1_8 \
    op interface \
    ports { WBRAM_10_1_8_address0 { O 10 vector } WBRAM_10_1_8_ce0 { O 1 bit } WBRAM_10_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 786 \
    name WBRAM_10_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_10_2_8 \
    op interface \
    ports { WBRAM_10_2_8_address0 { O 10 vector } WBRAM_10_2_8_ce0 { O 1 bit } WBRAM_10_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_10_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 787 \
    name OBRAM_11 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_11 \
    op interface \
    ports { OBRAM_11_address0 { O 5 vector } OBRAM_11_ce0 { O 1 bit } OBRAM_11_we0 { O 1 bit } OBRAM_11_d0 { O 32 vector } OBRAM_11_q0 { I 32 vector } OBRAM_11_address1 { O 5 vector } OBRAM_11_ce1 { O 1 bit } OBRAM_11_we1 { O 1 bit } OBRAM_11_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 788 \
    name WBRAM_11_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_0 \
    op interface \
    ports { WBRAM_11_0_0_address0 { O 10 vector } WBRAM_11_0_0_ce0 { O 1 bit } WBRAM_11_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 789 \
    name WBRAM_11_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_0 \
    op interface \
    ports { WBRAM_11_1_0_address0 { O 10 vector } WBRAM_11_1_0_ce0 { O 1 bit } WBRAM_11_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 790 \
    name WBRAM_11_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_0 \
    op interface \
    ports { WBRAM_11_2_0_address0 { O 10 vector } WBRAM_11_2_0_ce0 { O 1 bit } WBRAM_11_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 791 \
    name WBRAM_11_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_1 \
    op interface \
    ports { WBRAM_11_0_1_address0 { O 10 vector } WBRAM_11_0_1_ce0 { O 1 bit } WBRAM_11_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 792 \
    name WBRAM_11_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_1 \
    op interface \
    ports { WBRAM_11_1_1_address0 { O 10 vector } WBRAM_11_1_1_ce0 { O 1 bit } WBRAM_11_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 793 \
    name WBRAM_11_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_1 \
    op interface \
    ports { WBRAM_11_2_1_address0 { O 10 vector } WBRAM_11_2_1_ce0 { O 1 bit } WBRAM_11_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 794 \
    name WBRAM_11_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_2 \
    op interface \
    ports { WBRAM_11_0_2_address0 { O 10 vector } WBRAM_11_0_2_ce0 { O 1 bit } WBRAM_11_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 795 \
    name WBRAM_11_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_2 \
    op interface \
    ports { WBRAM_11_1_2_address0 { O 10 vector } WBRAM_11_1_2_ce0 { O 1 bit } WBRAM_11_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 796 \
    name WBRAM_11_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_2 \
    op interface \
    ports { WBRAM_11_2_2_address0 { O 10 vector } WBRAM_11_2_2_ce0 { O 1 bit } WBRAM_11_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 797 \
    name WBRAM_11_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_3 \
    op interface \
    ports { WBRAM_11_0_3_address0 { O 10 vector } WBRAM_11_0_3_ce0 { O 1 bit } WBRAM_11_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 798 \
    name WBRAM_11_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_3 \
    op interface \
    ports { WBRAM_11_1_3_address0 { O 10 vector } WBRAM_11_1_3_ce0 { O 1 bit } WBRAM_11_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 799 \
    name WBRAM_11_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_3 \
    op interface \
    ports { WBRAM_11_2_3_address0 { O 10 vector } WBRAM_11_2_3_ce0 { O 1 bit } WBRAM_11_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 800 \
    name WBRAM_11_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_4 \
    op interface \
    ports { WBRAM_11_0_4_address0 { O 10 vector } WBRAM_11_0_4_ce0 { O 1 bit } WBRAM_11_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 801 \
    name WBRAM_11_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_4 \
    op interface \
    ports { WBRAM_11_1_4_address0 { O 10 vector } WBRAM_11_1_4_ce0 { O 1 bit } WBRAM_11_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 802 \
    name WBRAM_11_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_4 \
    op interface \
    ports { WBRAM_11_2_4_address0 { O 10 vector } WBRAM_11_2_4_ce0 { O 1 bit } WBRAM_11_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 803 \
    name WBRAM_11_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_5 \
    op interface \
    ports { WBRAM_11_0_5_address0 { O 10 vector } WBRAM_11_0_5_ce0 { O 1 bit } WBRAM_11_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 804 \
    name WBRAM_11_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_5 \
    op interface \
    ports { WBRAM_11_1_5_address0 { O 10 vector } WBRAM_11_1_5_ce0 { O 1 bit } WBRAM_11_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 805 \
    name WBRAM_11_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_5 \
    op interface \
    ports { WBRAM_11_2_5_address0 { O 10 vector } WBRAM_11_2_5_ce0 { O 1 bit } WBRAM_11_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 806 \
    name WBRAM_11_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_6 \
    op interface \
    ports { WBRAM_11_0_6_address0 { O 10 vector } WBRAM_11_0_6_ce0 { O 1 bit } WBRAM_11_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 807 \
    name WBRAM_11_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_6 \
    op interface \
    ports { WBRAM_11_1_6_address0 { O 10 vector } WBRAM_11_1_6_ce0 { O 1 bit } WBRAM_11_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 808 \
    name WBRAM_11_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_6 \
    op interface \
    ports { WBRAM_11_2_6_address0 { O 10 vector } WBRAM_11_2_6_ce0 { O 1 bit } WBRAM_11_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 809 \
    name WBRAM_11_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_7 \
    op interface \
    ports { WBRAM_11_0_7_address0 { O 10 vector } WBRAM_11_0_7_ce0 { O 1 bit } WBRAM_11_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 810 \
    name WBRAM_11_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_7 \
    op interface \
    ports { WBRAM_11_1_7_address0 { O 10 vector } WBRAM_11_1_7_ce0 { O 1 bit } WBRAM_11_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 811 \
    name WBRAM_11_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_7 \
    op interface \
    ports { WBRAM_11_2_7_address0 { O 10 vector } WBRAM_11_2_7_ce0 { O 1 bit } WBRAM_11_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 812 \
    name WBRAM_11_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_0_8 \
    op interface \
    ports { WBRAM_11_0_8_address0 { O 10 vector } WBRAM_11_0_8_ce0 { O 1 bit } WBRAM_11_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 813 \
    name WBRAM_11_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_1_8 \
    op interface \
    ports { WBRAM_11_1_8_address0 { O 10 vector } WBRAM_11_1_8_ce0 { O 1 bit } WBRAM_11_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 814 \
    name WBRAM_11_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_11_2_8 \
    op interface \
    ports { WBRAM_11_2_8_address0 { O 10 vector } WBRAM_11_2_8_ce0 { O 1 bit } WBRAM_11_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_11_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 815 \
    name OBRAM_12 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_12 \
    op interface \
    ports { OBRAM_12_address0 { O 5 vector } OBRAM_12_ce0 { O 1 bit } OBRAM_12_we0 { O 1 bit } OBRAM_12_d0 { O 32 vector } OBRAM_12_q0 { I 32 vector } OBRAM_12_address1 { O 5 vector } OBRAM_12_ce1 { O 1 bit } OBRAM_12_we1 { O 1 bit } OBRAM_12_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 816 \
    name WBRAM_12_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_0 \
    op interface \
    ports { WBRAM_12_0_0_address0 { O 10 vector } WBRAM_12_0_0_ce0 { O 1 bit } WBRAM_12_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 817 \
    name WBRAM_12_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_0 \
    op interface \
    ports { WBRAM_12_1_0_address0 { O 10 vector } WBRAM_12_1_0_ce0 { O 1 bit } WBRAM_12_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 818 \
    name WBRAM_12_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_0 \
    op interface \
    ports { WBRAM_12_2_0_address0 { O 10 vector } WBRAM_12_2_0_ce0 { O 1 bit } WBRAM_12_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 819 \
    name WBRAM_12_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_1 \
    op interface \
    ports { WBRAM_12_0_1_address0 { O 10 vector } WBRAM_12_0_1_ce0 { O 1 bit } WBRAM_12_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 820 \
    name WBRAM_12_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_1 \
    op interface \
    ports { WBRAM_12_1_1_address0 { O 10 vector } WBRAM_12_1_1_ce0 { O 1 bit } WBRAM_12_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 821 \
    name WBRAM_12_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_1 \
    op interface \
    ports { WBRAM_12_2_1_address0 { O 10 vector } WBRAM_12_2_1_ce0 { O 1 bit } WBRAM_12_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 822 \
    name WBRAM_12_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_2 \
    op interface \
    ports { WBRAM_12_0_2_address0 { O 10 vector } WBRAM_12_0_2_ce0 { O 1 bit } WBRAM_12_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 823 \
    name WBRAM_12_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_2 \
    op interface \
    ports { WBRAM_12_1_2_address0 { O 10 vector } WBRAM_12_1_2_ce0 { O 1 bit } WBRAM_12_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 824 \
    name WBRAM_12_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_2 \
    op interface \
    ports { WBRAM_12_2_2_address0 { O 10 vector } WBRAM_12_2_2_ce0 { O 1 bit } WBRAM_12_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 825 \
    name WBRAM_12_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_3 \
    op interface \
    ports { WBRAM_12_0_3_address0 { O 10 vector } WBRAM_12_0_3_ce0 { O 1 bit } WBRAM_12_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 826 \
    name WBRAM_12_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_3 \
    op interface \
    ports { WBRAM_12_1_3_address0 { O 10 vector } WBRAM_12_1_3_ce0 { O 1 bit } WBRAM_12_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 827 \
    name WBRAM_12_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_3 \
    op interface \
    ports { WBRAM_12_2_3_address0 { O 10 vector } WBRAM_12_2_3_ce0 { O 1 bit } WBRAM_12_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 828 \
    name WBRAM_12_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_4 \
    op interface \
    ports { WBRAM_12_0_4_address0 { O 10 vector } WBRAM_12_0_4_ce0 { O 1 bit } WBRAM_12_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 829 \
    name WBRAM_12_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_4 \
    op interface \
    ports { WBRAM_12_1_4_address0 { O 10 vector } WBRAM_12_1_4_ce0 { O 1 bit } WBRAM_12_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 830 \
    name WBRAM_12_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_4 \
    op interface \
    ports { WBRAM_12_2_4_address0 { O 10 vector } WBRAM_12_2_4_ce0 { O 1 bit } WBRAM_12_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 831 \
    name WBRAM_12_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_5 \
    op interface \
    ports { WBRAM_12_0_5_address0 { O 10 vector } WBRAM_12_0_5_ce0 { O 1 bit } WBRAM_12_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 832 \
    name WBRAM_12_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_5 \
    op interface \
    ports { WBRAM_12_1_5_address0 { O 10 vector } WBRAM_12_1_5_ce0 { O 1 bit } WBRAM_12_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 833 \
    name WBRAM_12_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_5 \
    op interface \
    ports { WBRAM_12_2_5_address0 { O 10 vector } WBRAM_12_2_5_ce0 { O 1 bit } WBRAM_12_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 834 \
    name WBRAM_12_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_6 \
    op interface \
    ports { WBRAM_12_0_6_address0 { O 10 vector } WBRAM_12_0_6_ce0 { O 1 bit } WBRAM_12_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 835 \
    name WBRAM_12_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_6 \
    op interface \
    ports { WBRAM_12_1_6_address0 { O 10 vector } WBRAM_12_1_6_ce0 { O 1 bit } WBRAM_12_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 836 \
    name WBRAM_12_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_6 \
    op interface \
    ports { WBRAM_12_2_6_address0 { O 10 vector } WBRAM_12_2_6_ce0 { O 1 bit } WBRAM_12_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 837 \
    name WBRAM_12_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_7 \
    op interface \
    ports { WBRAM_12_0_7_address0 { O 10 vector } WBRAM_12_0_7_ce0 { O 1 bit } WBRAM_12_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 838 \
    name WBRAM_12_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_7 \
    op interface \
    ports { WBRAM_12_1_7_address0 { O 10 vector } WBRAM_12_1_7_ce0 { O 1 bit } WBRAM_12_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 839 \
    name WBRAM_12_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_7 \
    op interface \
    ports { WBRAM_12_2_7_address0 { O 10 vector } WBRAM_12_2_7_ce0 { O 1 bit } WBRAM_12_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 840 \
    name WBRAM_12_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_0_8 \
    op interface \
    ports { WBRAM_12_0_8_address0 { O 10 vector } WBRAM_12_0_8_ce0 { O 1 bit } WBRAM_12_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 841 \
    name WBRAM_12_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_1_8 \
    op interface \
    ports { WBRAM_12_1_8_address0 { O 10 vector } WBRAM_12_1_8_ce0 { O 1 bit } WBRAM_12_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 842 \
    name WBRAM_12_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_12_2_8 \
    op interface \
    ports { WBRAM_12_2_8_address0 { O 10 vector } WBRAM_12_2_8_ce0 { O 1 bit } WBRAM_12_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_12_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 843 \
    name OBRAM_13 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_13 \
    op interface \
    ports { OBRAM_13_address0 { O 5 vector } OBRAM_13_ce0 { O 1 bit } OBRAM_13_we0 { O 1 bit } OBRAM_13_d0 { O 32 vector } OBRAM_13_q0 { I 32 vector } OBRAM_13_address1 { O 5 vector } OBRAM_13_ce1 { O 1 bit } OBRAM_13_we1 { O 1 bit } OBRAM_13_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 844 \
    name WBRAM_13_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_0 \
    op interface \
    ports { WBRAM_13_0_0_address0 { O 10 vector } WBRAM_13_0_0_ce0 { O 1 bit } WBRAM_13_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 845 \
    name WBRAM_13_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_0 \
    op interface \
    ports { WBRAM_13_1_0_address0 { O 10 vector } WBRAM_13_1_0_ce0 { O 1 bit } WBRAM_13_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 846 \
    name WBRAM_13_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_0 \
    op interface \
    ports { WBRAM_13_2_0_address0 { O 10 vector } WBRAM_13_2_0_ce0 { O 1 bit } WBRAM_13_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 847 \
    name WBRAM_13_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_1 \
    op interface \
    ports { WBRAM_13_0_1_address0 { O 10 vector } WBRAM_13_0_1_ce0 { O 1 bit } WBRAM_13_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 848 \
    name WBRAM_13_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_1 \
    op interface \
    ports { WBRAM_13_1_1_address0 { O 10 vector } WBRAM_13_1_1_ce0 { O 1 bit } WBRAM_13_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 849 \
    name WBRAM_13_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_1 \
    op interface \
    ports { WBRAM_13_2_1_address0 { O 10 vector } WBRAM_13_2_1_ce0 { O 1 bit } WBRAM_13_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 850 \
    name WBRAM_13_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_2 \
    op interface \
    ports { WBRAM_13_0_2_address0 { O 10 vector } WBRAM_13_0_2_ce0 { O 1 bit } WBRAM_13_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 851 \
    name WBRAM_13_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_2 \
    op interface \
    ports { WBRAM_13_1_2_address0 { O 10 vector } WBRAM_13_1_2_ce0 { O 1 bit } WBRAM_13_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 852 \
    name WBRAM_13_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_2 \
    op interface \
    ports { WBRAM_13_2_2_address0 { O 10 vector } WBRAM_13_2_2_ce0 { O 1 bit } WBRAM_13_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 853 \
    name WBRAM_13_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_3 \
    op interface \
    ports { WBRAM_13_0_3_address0 { O 10 vector } WBRAM_13_0_3_ce0 { O 1 bit } WBRAM_13_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 854 \
    name WBRAM_13_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_3 \
    op interface \
    ports { WBRAM_13_1_3_address0 { O 10 vector } WBRAM_13_1_3_ce0 { O 1 bit } WBRAM_13_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 855 \
    name WBRAM_13_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_3 \
    op interface \
    ports { WBRAM_13_2_3_address0 { O 10 vector } WBRAM_13_2_3_ce0 { O 1 bit } WBRAM_13_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 856 \
    name WBRAM_13_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_4 \
    op interface \
    ports { WBRAM_13_0_4_address0 { O 10 vector } WBRAM_13_0_4_ce0 { O 1 bit } WBRAM_13_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 857 \
    name WBRAM_13_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_4 \
    op interface \
    ports { WBRAM_13_1_4_address0 { O 10 vector } WBRAM_13_1_4_ce0 { O 1 bit } WBRAM_13_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 858 \
    name WBRAM_13_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_4 \
    op interface \
    ports { WBRAM_13_2_4_address0 { O 10 vector } WBRAM_13_2_4_ce0 { O 1 bit } WBRAM_13_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 859 \
    name WBRAM_13_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_5 \
    op interface \
    ports { WBRAM_13_0_5_address0 { O 10 vector } WBRAM_13_0_5_ce0 { O 1 bit } WBRAM_13_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 860 \
    name WBRAM_13_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_5 \
    op interface \
    ports { WBRAM_13_1_5_address0 { O 10 vector } WBRAM_13_1_5_ce0 { O 1 bit } WBRAM_13_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 861 \
    name WBRAM_13_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_5 \
    op interface \
    ports { WBRAM_13_2_5_address0 { O 10 vector } WBRAM_13_2_5_ce0 { O 1 bit } WBRAM_13_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 862 \
    name WBRAM_13_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_6 \
    op interface \
    ports { WBRAM_13_0_6_address0 { O 10 vector } WBRAM_13_0_6_ce0 { O 1 bit } WBRAM_13_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 863 \
    name WBRAM_13_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_6 \
    op interface \
    ports { WBRAM_13_1_6_address0 { O 10 vector } WBRAM_13_1_6_ce0 { O 1 bit } WBRAM_13_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 864 \
    name WBRAM_13_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_6 \
    op interface \
    ports { WBRAM_13_2_6_address0 { O 10 vector } WBRAM_13_2_6_ce0 { O 1 bit } WBRAM_13_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 865 \
    name WBRAM_13_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_7 \
    op interface \
    ports { WBRAM_13_0_7_address0 { O 10 vector } WBRAM_13_0_7_ce0 { O 1 bit } WBRAM_13_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 866 \
    name WBRAM_13_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_7 \
    op interface \
    ports { WBRAM_13_1_7_address0 { O 10 vector } WBRAM_13_1_7_ce0 { O 1 bit } WBRAM_13_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 867 \
    name WBRAM_13_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_7 \
    op interface \
    ports { WBRAM_13_2_7_address0 { O 10 vector } WBRAM_13_2_7_ce0 { O 1 bit } WBRAM_13_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 868 \
    name WBRAM_13_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_0_8 \
    op interface \
    ports { WBRAM_13_0_8_address0 { O 10 vector } WBRAM_13_0_8_ce0 { O 1 bit } WBRAM_13_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 869 \
    name WBRAM_13_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_1_8 \
    op interface \
    ports { WBRAM_13_1_8_address0 { O 10 vector } WBRAM_13_1_8_ce0 { O 1 bit } WBRAM_13_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 870 \
    name WBRAM_13_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_13_2_8 \
    op interface \
    ports { WBRAM_13_2_8_address0 { O 10 vector } WBRAM_13_2_8_ce0 { O 1 bit } WBRAM_13_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_13_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 871 \
    name OBRAM_14 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_14 \
    op interface \
    ports { OBRAM_14_address0 { O 5 vector } OBRAM_14_ce0 { O 1 bit } OBRAM_14_we0 { O 1 bit } OBRAM_14_d0 { O 32 vector } OBRAM_14_q0 { I 32 vector } OBRAM_14_address1 { O 5 vector } OBRAM_14_ce1 { O 1 bit } OBRAM_14_we1 { O 1 bit } OBRAM_14_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 872 \
    name WBRAM_14_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_0 \
    op interface \
    ports { WBRAM_14_0_0_address0 { O 10 vector } WBRAM_14_0_0_ce0 { O 1 bit } WBRAM_14_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 873 \
    name WBRAM_14_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_0 \
    op interface \
    ports { WBRAM_14_1_0_address0 { O 10 vector } WBRAM_14_1_0_ce0 { O 1 bit } WBRAM_14_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 874 \
    name WBRAM_14_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_0 \
    op interface \
    ports { WBRAM_14_2_0_address0 { O 10 vector } WBRAM_14_2_0_ce0 { O 1 bit } WBRAM_14_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 875 \
    name WBRAM_14_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_1 \
    op interface \
    ports { WBRAM_14_0_1_address0 { O 10 vector } WBRAM_14_0_1_ce0 { O 1 bit } WBRAM_14_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 876 \
    name WBRAM_14_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_1 \
    op interface \
    ports { WBRAM_14_1_1_address0 { O 10 vector } WBRAM_14_1_1_ce0 { O 1 bit } WBRAM_14_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 877 \
    name WBRAM_14_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_1 \
    op interface \
    ports { WBRAM_14_2_1_address0 { O 10 vector } WBRAM_14_2_1_ce0 { O 1 bit } WBRAM_14_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 878 \
    name WBRAM_14_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_2 \
    op interface \
    ports { WBRAM_14_0_2_address0 { O 10 vector } WBRAM_14_0_2_ce0 { O 1 bit } WBRAM_14_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 879 \
    name WBRAM_14_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_2 \
    op interface \
    ports { WBRAM_14_1_2_address0 { O 10 vector } WBRAM_14_1_2_ce0 { O 1 bit } WBRAM_14_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 880 \
    name WBRAM_14_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_2 \
    op interface \
    ports { WBRAM_14_2_2_address0 { O 10 vector } WBRAM_14_2_2_ce0 { O 1 bit } WBRAM_14_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 881 \
    name WBRAM_14_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_3 \
    op interface \
    ports { WBRAM_14_0_3_address0 { O 10 vector } WBRAM_14_0_3_ce0 { O 1 bit } WBRAM_14_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 882 \
    name WBRAM_14_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_3 \
    op interface \
    ports { WBRAM_14_1_3_address0 { O 10 vector } WBRAM_14_1_3_ce0 { O 1 bit } WBRAM_14_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 883 \
    name WBRAM_14_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_3 \
    op interface \
    ports { WBRAM_14_2_3_address0 { O 10 vector } WBRAM_14_2_3_ce0 { O 1 bit } WBRAM_14_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 884 \
    name WBRAM_14_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_4 \
    op interface \
    ports { WBRAM_14_0_4_address0 { O 10 vector } WBRAM_14_0_4_ce0 { O 1 bit } WBRAM_14_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 885 \
    name WBRAM_14_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_4 \
    op interface \
    ports { WBRAM_14_1_4_address0 { O 10 vector } WBRAM_14_1_4_ce0 { O 1 bit } WBRAM_14_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 886 \
    name WBRAM_14_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_4 \
    op interface \
    ports { WBRAM_14_2_4_address0 { O 10 vector } WBRAM_14_2_4_ce0 { O 1 bit } WBRAM_14_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 887 \
    name WBRAM_14_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_5 \
    op interface \
    ports { WBRAM_14_0_5_address0 { O 10 vector } WBRAM_14_0_5_ce0 { O 1 bit } WBRAM_14_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 888 \
    name WBRAM_14_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_5 \
    op interface \
    ports { WBRAM_14_1_5_address0 { O 10 vector } WBRAM_14_1_5_ce0 { O 1 bit } WBRAM_14_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 889 \
    name WBRAM_14_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_5 \
    op interface \
    ports { WBRAM_14_2_5_address0 { O 10 vector } WBRAM_14_2_5_ce0 { O 1 bit } WBRAM_14_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 890 \
    name WBRAM_14_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_6 \
    op interface \
    ports { WBRAM_14_0_6_address0 { O 10 vector } WBRAM_14_0_6_ce0 { O 1 bit } WBRAM_14_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 891 \
    name WBRAM_14_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_6 \
    op interface \
    ports { WBRAM_14_1_6_address0 { O 10 vector } WBRAM_14_1_6_ce0 { O 1 bit } WBRAM_14_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 892 \
    name WBRAM_14_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_6 \
    op interface \
    ports { WBRAM_14_2_6_address0 { O 10 vector } WBRAM_14_2_6_ce0 { O 1 bit } WBRAM_14_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 893 \
    name WBRAM_14_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_7 \
    op interface \
    ports { WBRAM_14_0_7_address0 { O 10 vector } WBRAM_14_0_7_ce0 { O 1 bit } WBRAM_14_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 894 \
    name WBRAM_14_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_7 \
    op interface \
    ports { WBRAM_14_1_7_address0 { O 10 vector } WBRAM_14_1_7_ce0 { O 1 bit } WBRAM_14_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 895 \
    name WBRAM_14_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_7 \
    op interface \
    ports { WBRAM_14_2_7_address0 { O 10 vector } WBRAM_14_2_7_ce0 { O 1 bit } WBRAM_14_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 896 \
    name WBRAM_14_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_0_8 \
    op interface \
    ports { WBRAM_14_0_8_address0 { O 10 vector } WBRAM_14_0_8_ce0 { O 1 bit } WBRAM_14_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 897 \
    name WBRAM_14_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_1_8 \
    op interface \
    ports { WBRAM_14_1_8_address0 { O 10 vector } WBRAM_14_1_8_ce0 { O 1 bit } WBRAM_14_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 898 \
    name WBRAM_14_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_14_2_8 \
    op interface \
    ports { WBRAM_14_2_8_address0 { O 10 vector } WBRAM_14_2_8_ce0 { O 1 bit } WBRAM_14_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_14_2_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 899 \
    name OBRAM_15 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OBRAM_15 \
    op interface \
    ports { OBRAM_15_address0 { O 5 vector } OBRAM_15_ce0 { O 1 bit } OBRAM_15_we0 { O 1 bit } OBRAM_15_d0 { O 32 vector } OBRAM_15_q0 { I 32 vector } OBRAM_15_address1 { O 5 vector } OBRAM_15_ce1 { O 1 bit } OBRAM_15_we1 { O 1 bit } OBRAM_15_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OBRAM_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 900 \
    name WBRAM_15_0_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_0 \
    op interface \
    ports { WBRAM_15_0_0_address0 { O 10 vector } WBRAM_15_0_0_ce0 { O 1 bit } WBRAM_15_0_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 901 \
    name WBRAM_15_1_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_0 \
    op interface \
    ports { WBRAM_15_1_0_address0 { O 10 vector } WBRAM_15_1_0_ce0 { O 1 bit } WBRAM_15_1_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 902 \
    name WBRAM_15_2_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_0 \
    op interface \
    ports { WBRAM_15_2_0_address0 { O 10 vector } WBRAM_15_2_0_ce0 { O 1 bit } WBRAM_15_2_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 903 \
    name WBRAM_15_0_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_1 \
    op interface \
    ports { WBRAM_15_0_1_address0 { O 10 vector } WBRAM_15_0_1_ce0 { O 1 bit } WBRAM_15_0_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 904 \
    name WBRAM_15_1_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_1 \
    op interface \
    ports { WBRAM_15_1_1_address0 { O 10 vector } WBRAM_15_1_1_ce0 { O 1 bit } WBRAM_15_1_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 905 \
    name WBRAM_15_2_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_1 \
    op interface \
    ports { WBRAM_15_2_1_address0 { O 10 vector } WBRAM_15_2_1_ce0 { O 1 bit } WBRAM_15_2_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 906 \
    name WBRAM_15_0_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_2 \
    op interface \
    ports { WBRAM_15_0_2_address0 { O 10 vector } WBRAM_15_0_2_ce0 { O 1 bit } WBRAM_15_0_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 907 \
    name WBRAM_15_1_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_2 \
    op interface \
    ports { WBRAM_15_1_2_address0 { O 10 vector } WBRAM_15_1_2_ce0 { O 1 bit } WBRAM_15_1_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 908 \
    name WBRAM_15_2_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_2 \
    op interface \
    ports { WBRAM_15_2_2_address0 { O 10 vector } WBRAM_15_2_2_ce0 { O 1 bit } WBRAM_15_2_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 909 \
    name WBRAM_15_0_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_3 \
    op interface \
    ports { WBRAM_15_0_3_address0 { O 10 vector } WBRAM_15_0_3_ce0 { O 1 bit } WBRAM_15_0_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 910 \
    name WBRAM_15_1_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_3 \
    op interface \
    ports { WBRAM_15_1_3_address0 { O 10 vector } WBRAM_15_1_3_ce0 { O 1 bit } WBRAM_15_1_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 911 \
    name WBRAM_15_2_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_3 \
    op interface \
    ports { WBRAM_15_2_3_address0 { O 10 vector } WBRAM_15_2_3_ce0 { O 1 bit } WBRAM_15_2_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 912 \
    name WBRAM_15_0_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_4 \
    op interface \
    ports { WBRAM_15_0_4_address0 { O 10 vector } WBRAM_15_0_4_ce0 { O 1 bit } WBRAM_15_0_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 913 \
    name WBRAM_15_1_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_4 \
    op interface \
    ports { WBRAM_15_1_4_address0 { O 10 vector } WBRAM_15_1_4_ce0 { O 1 bit } WBRAM_15_1_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 914 \
    name WBRAM_15_2_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_4 \
    op interface \
    ports { WBRAM_15_2_4_address0 { O 10 vector } WBRAM_15_2_4_ce0 { O 1 bit } WBRAM_15_2_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 915 \
    name WBRAM_15_0_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_5 \
    op interface \
    ports { WBRAM_15_0_5_address0 { O 10 vector } WBRAM_15_0_5_ce0 { O 1 bit } WBRAM_15_0_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 916 \
    name WBRAM_15_1_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_5 \
    op interface \
    ports { WBRAM_15_1_5_address0 { O 10 vector } WBRAM_15_1_5_ce0 { O 1 bit } WBRAM_15_1_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 917 \
    name WBRAM_15_2_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_5 \
    op interface \
    ports { WBRAM_15_2_5_address0 { O 10 vector } WBRAM_15_2_5_ce0 { O 1 bit } WBRAM_15_2_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 918 \
    name WBRAM_15_0_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_6 \
    op interface \
    ports { WBRAM_15_0_6_address0 { O 10 vector } WBRAM_15_0_6_ce0 { O 1 bit } WBRAM_15_0_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 919 \
    name WBRAM_15_1_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_6 \
    op interface \
    ports { WBRAM_15_1_6_address0 { O 10 vector } WBRAM_15_1_6_ce0 { O 1 bit } WBRAM_15_1_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 920 \
    name WBRAM_15_2_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_6 \
    op interface \
    ports { WBRAM_15_2_6_address0 { O 10 vector } WBRAM_15_2_6_ce0 { O 1 bit } WBRAM_15_2_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 921 \
    name WBRAM_15_0_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_7 \
    op interface \
    ports { WBRAM_15_0_7_address0 { O 10 vector } WBRAM_15_0_7_ce0 { O 1 bit } WBRAM_15_0_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 922 \
    name WBRAM_15_1_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_7 \
    op interface \
    ports { WBRAM_15_1_7_address0 { O 10 vector } WBRAM_15_1_7_ce0 { O 1 bit } WBRAM_15_1_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 923 \
    name WBRAM_15_2_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_7 \
    op interface \
    ports { WBRAM_15_2_7_address0 { O 10 vector } WBRAM_15_2_7_ce0 { O 1 bit } WBRAM_15_2_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 924 \
    name WBRAM_15_0_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_0_8 \
    op interface \
    ports { WBRAM_15_0_8_address0 { O 10 vector } WBRAM_15_0_8_ce0 { O 1 bit } WBRAM_15_0_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_0_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 925 \
    name WBRAM_15_1_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_1_8 \
    op interface \
    ports { WBRAM_15_1_8_address0 { O 10 vector } WBRAM_15_1_8_ce0 { O 1 bit } WBRAM_15_1_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_1_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 926 \
    name WBRAM_15_2_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WBRAM_15_2_8 \
    op interface \
    ports { WBRAM_15_2_8_address0 { O 10 vector } WBRAM_15_2_8_ce0 { O 1 bit } WBRAM_15_2_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WBRAM_15_2_8'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name ch_out_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ch_out_V \
    op interface \
    ports { ch_out_V_dout { I 10 vector } ch_out_V_empty_n { I 1 bit } ch_out_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name ci_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_ci_V \
    op interface \
    ports { ci_V_dout { I 10 vector } ci_V_empty_n { I 1 bit } ci_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name p_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read \
    op interface \
    ports { p_read { I 19 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name p_read1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read1 \
    op interface \
    ports { p_read1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name p_read2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read2 \
    op interface \
    ports { p_read2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name p_read3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read3 \
    op interface \
    ports { p_read3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name p_read4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read4 \
    op interface \
    ports { p_read4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name p_read5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read5 \
    op interface \
    ports { p_read5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name p_read6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read6 \
    op interface \
    ports { p_read6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name p_read7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read7 \
    op interface \
    ports { p_read7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name p_read8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read8 \
    op interface \
    ports { p_read8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name p_read9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read9 \
    op interface \
    ports { p_read9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


