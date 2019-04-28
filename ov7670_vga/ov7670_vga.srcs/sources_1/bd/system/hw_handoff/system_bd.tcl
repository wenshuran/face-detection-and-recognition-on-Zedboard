
################################################################
# This is a generated script based on design: system
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2015.4
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   puts "ERROR: This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source system_script.tcl

# If you do not already have a project created,
# you can create a project using the following command:
#    create_project project_1 myproj -part xc7z020clg484-1
#    set_property BOARD_PART em.avnet.com:zed:part0:1.3 [current_project]

# CHECKING IF PROJECT EXISTS
if { [get_projects -quiet] eq "" } {
   puts "ERROR: Please open or create a project!"
   return 1
}



# CHANGE DESIGN NAME HERE
set design_name system

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "ERROR: Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      puts "INFO: Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   puts "INFO: Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "ERROR: Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   puts "INFO: Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   puts "INFO: Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

puts "INFO: Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   puts $errMsg
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     puts "ERROR: Unable to find parent cell <$parentCell>!"
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     puts "ERROR: Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]
  set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]

  # Create ports
  set btnc [ create_bd_port -dir I btnc ]
  set config_finished [ create_bd_port -dir O config_finished ]
  set ov7670_data [ create_bd_port -dir I -from 7 -to 0 ov7670_data ]
  set ov7670_href [ create_bd_port -dir I ov7670_href ]
  set ov7670_pclk [ create_bd_port -dir I ov7670_pclk ]
  set ov7670_pwdn [ create_bd_port -dir O -from 0 -to 0 ov7670_pwdn ]
  set ov7670_reset [ create_bd_port -dir O -from 0 -to 0 ov7670_reset ]
  set ov7670_sioc [ create_bd_port -dir O ov7670_sioc ]
  set ov7670_siod [ create_bd_port -dir IO ov7670_siod ]
  set ov7670_vsync [ create_bd_port -dir I ov7670_vsync ]
  set ov7670_xclk [ create_bd_port -dir O -type clk ov7670_xclk ]
  set vga_b [ create_bd_port -dir O -from 3 -to 0 vga_b ]
  set vga_g [ create_bd_port -dir O -from 3 -to 0 vga_g ]
  set vga_hsync [ create_bd_port -dir O vga_hsync ]
  set vga_r [ create_bd_port -dir O -from 3 -to 0 vga_r ]
  set vga_vsync [ create_bd_port -dir O vga_vsync ]

  # Create instance: axi_periph, and set properties
  set axi_periph [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_periph ]
  set_property -dict [ list \
CONFIG.NUM_MI {3} \
 ] $axi_periph

  # Create instance: fifo_mm2s, and set properties
  set fifo_mm2s [ create_bd_cell -type ip -vlnv xilinx.com:ip:fifo_generator:13.0 fifo_mm2s ]
  set_property -dict [ list \
CONFIG.Clock_Type_AXI {Independent_Clock} \
CONFIG.Empty_Threshold_Assert_Value_axis {1021} \
CONFIG.Empty_Threshold_Assert_Value_rach {13} \
CONFIG.Empty_Threshold_Assert_Value_rdch {1021} \
CONFIG.Empty_Threshold_Assert_Value_wach {13} \
CONFIG.Empty_Threshold_Assert_Value_wdch {1021} \
CONFIG.Empty_Threshold_Assert_Value_wrch {13} \
CONFIG.Enable_TLAST {true} \
CONFIG.FIFO_Implementation_axis {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_rach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_rdch {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_wach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_wdch {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_wrch {Independent_Clocks_Distributed_RAM} \
CONFIG.Full_Flags_Reset_Value {1} \
CONFIG.Full_Threshold_Assert_Value_rach {15} \
CONFIG.Full_Threshold_Assert_Value_wach {15} \
CONFIG.Full_Threshold_Assert_Value_wrch {15} \
CONFIG.INTERFACE_TYPE {AXI_STREAM} \
CONFIG.Reset_Type {Asynchronous_Reset} \
CONFIG.TDATA_NUM_BYTES {2} \
CONFIG.TKEEP_WIDTH {2} \
CONFIG.TSTRB_WIDTH {2} \
CONFIG.TUSER_WIDTH {1} \
CONFIG.synchronization_stages_axi {4} \
 ] $fifo_mm2s

  # Create instance: fifo_s2mm, and set properties
  set fifo_s2mm [ create_bd_cell -type ip -vlnv xilinx.com:ip:fifo_generator:13.0 fifo_s2mm ]
  set_property -dict [ list \
CONFIG.Clock_Type_AXI {Independent_Clock} \
CONFIG.Empty_Threshold_Assert_Value_axis {1021} \
CONFIG.Empty_Threshold_Assert_Value_rach {13} \
CONFIG.Empty_Threshold_Assert_Value_rdch {1021} \
CONFIG.Empty_Threshold_Assert_Value_wach {13} \
CONFIG.Empty_Threshold_Assert_Value_wdch {1021} \
CONFIG.Empty_Threshold_Assert_Value_wrch {13} \
CONFIG.Enable_TLAST {true} \
CONFIG.FIFO_Implementation_axis {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_rach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_rdch {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_wach {Independent_Clocks_Distributed_RAM} \
CONFIG.FIFO_Implementation_wdch {Independent_Clocks_Block_RAM} \
CONFIG.FIFO_Implementation_wrch {Independent_Clocks_Distributed_RAM} \
CONFIG.Full_Flags_Reset_Value {1} \
CONFIG.Full_Threshold_Assert_Value_rach {15} \
CONFIG.Full_Threshold_Assert_Value_wach {15} \
CONFIG.Full_Threshold_Assert_Value_wrch {15} \
CONFIG.INTERFACE_TYPE {AXI_STREAM} \
CONFIG.Reset_Type {Asynchronous_Reset} \
CONFIG.TDATA_NUM_BYTES {2} \
CONFIG.TKEEP_WIDTH {2} \
CONFIG.TSTRB_WIDTH {2} \
CONFIG.TUSER_WIDTH {1} \
CONFIG.synchronization_stages_axi {4} \
 ] $fifo_s2mm

  # Create instance: ila_0, and set properties
  set ila_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:ila:6.0 ila_0 ]
  set_property -dict [ list \
CONFIG.C_NUM_OF_PROBES {9} \
CONFIG.C_SLOT_0_AXI_PROTOCOL {AXI4S} \
 ] $ila_0

  # Create instance: ov7670_controller_0, and set properties
  set ov7670_controller_0 [ create_bd_cell -type ip -vlnv user.org:user:ov7670_controller:1.0 ov7670_controller_0 ]

  # Create instance: ov7670_debounce_0, and set properties
  set ov7670_debounce_0 [ create_bd_cell -type ip -vlnv Aerotenna:user:ov7670_debounce:1.0 ov7670_debounce_0 ]

  # Create instance: ov7670_decode_stream_0, and set properties
  set ov7670_decode_stream_0 [ create_bd_cell -type ip -vlnv user.org:user:ov7670_decode_stream:1.0 ov7670_decode_stream_0 ]

  # Create instance: processing_system7_0, and set properties
  set processing_system7_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0 ]
  set_property -dict [ list \
CONFIG.PCW_EN_CLK1_PORT {1} \
CONFIG.PCW_EN_CLK2_PORT {1} \
CONFIG.PCW_FPGA1_PERIPHERAL_FREQMHZ {25} \
CONFIG.PCW_FPGA2_PERIPHERAL_FREQMHZ {25} \
CONFIG.PCW_IRQ_F2P_INTR {1} \
CONFIG.PCW_USE_FABRIC_INTERRUPT {1} \
CONFIG.PCW_USE_M_AXI_GP0 {1} \
CONFIG.PCW_USE_S_AXI_HP0 {1} \
CONFIG.PCW_USE_S_AXI_HP1 {1} \
CONFIG.preset {ZedBoard} \
 ] $processing_system7_0

  # Create instance: pwdn, and set properties
  set pwdn [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlconstant:1.1 pwdn ]
  set_property -dict [ list \
CONFIG.CONST_VAL {0} \
 ] $pwdn

  # Create instance: reset, and set properties
  set reset [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlconstant:1.1 reset ]

  # Create instance: rst_ov7670_pclk, and set properties
  set rst_ov7670_pclk [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_ov7670_pclk ]

  # Create instance: rst_processing_system7_0_100M, and set properties
  set rst_processing_system7_0_100M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_processing_system7_0_100M ]

  # Create instance: rst_vga_clk25, and set properties
  set rst_vga_clk25 [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_vga_clk25 ]

  # Create instance: stream_to_vga_0, and set properties
  set stream_to_vga_0 [ create_bd_cell -type ip -vlnv user.org:user:stream_to_vga:1.0 stream_to_vga_0 ]

  # Create instance: vdma_mm2s, and set properties
  set vdma_mm2s [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_vdma:6.2 vdma_mm2s ]
  set_property -dict [ list \
CONFIG.c_include_mm2s {1} \
CONFIG.c_include_s2mm {0} \
CONFIG.c_m_axis_mm2s_tdata_width {16} \
CONFIG.c_mm2s_genlock_mode {2} \
CONFIG.c_mm2s_linebuffer_depth {1024} \
CONFIG.c_mm2s_max_burst_length {256} \
CONFIG.c_num_fstores {1} \
CONFIG.c_s2mm_linebuffer_depth {512} \
CONFIG.c_s2mm_max_burst_length {8} \
CONFIG.c_use_mm2s_fsync {1} \
 ] $vdma_mm2s

  # Create instance: vdma_mm2s_intercon, and set properties
  set vdma_mm2s_intercon [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 vdma_mm2s_intercon ]
  set_property -dict [ list \
CONFIG.NUM_MI {1} \
 ] $vdma_mm2s_intercon

  # Create instance: vdma_s2mm, and set properties
  set vdma_s2mm [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_vdma:6.2 vdma_s2mm ]
  set_property -dict [ list \
CONFIG.c_include_mm2s {0} \
CONFIG.c_mm2s_genlock_mode {0} \
CONFIG.c_num_fstores {1} \
CONFIG.c_s2mm_linebuffer_depth {1024} \
CONFIG.c_s2mm_max_burst_length {256} \
 ] $vdma_s2mm

  # Create instance: vdma_s2mm_intercon, and set properties
  set vdma_s2mm_intercon [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 vdma_s2mm_intercon ]
  set_property -dict [ list \
CONFIG.NUM_MI {1} \
 ] $vdma_s2mm_intercon

  # Create instance: xlconcat_0, and set properties
  set xlconcat_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlconcat:2.1 xlconcat_0 ]

  # Create interface connections
  connect_bd_intf_net -intf_net axi_mem_intercon_M00_AXI [get_bd_intf_pins processing_system7_0/S_AXI_HP0] [get_bd_intf_pins vdma_s2mm_intercon/M00_AXI]
  connect_bd_intf_net -intf_net axi_mem_intercon_M00_AXI1 [get_bd_intf_pins processing_system7_0/S_AXI_HP1] [get_bd_intf_pins vdma_mm2s_intercon/M00_AXI]
  connect_bd_intf_net -intf_net axi_vdma_0_M_AXI_S2MM [get_bd_intf_pins vdma_s2mm/M_AXI_S2MM] [get_bd_intf_pins vdma_s2mm_intercon/S00_AXI]
  connect_bd_intf_net -intf_net axi_vdma_1_M_AXIS_MM2S [get_bd_intf_pins fifo_mm2s/S_AXIS] [get_bd_intf_pins vdma_mm2s/M_AXIS_MM2S]
connect_bd_intf_net -intf_net [get_bd_intf_nets axi_vdma_1_M_AXIS_MM2S] [get_bd_intf_pins ila_0/SLOT_0_AXIS] [get_bd_intf_pins vdma_mm2s/M_AXIS_MM2S]
  connect_bd_intf_net -intf_net axi_vdma_1_M_AXI_MM2S [get_bd_intf_pins vdma_mm2s/M_AXI_MM2S] [get_bd_intf_pins vdma_mm2s_intercon/S00_AXI]
  connect_bd_intf_net -intf_net fifo_generator_0_M_AXIS [get_bd_intf_pins fifo_s2mm/M_AXIS] [get_bd_intf_pins vdma_s2mm/S_AXIS_S2MM]
  connect_bd_intf_net -intf_net fifo_mm2s_M_AXIS [get_bd_intf_pins fifo_mm2s/M_AXIS] [get_bd_intf_pins stream_to_vga_0/rgb_in]
  connect_bd_intf_net -intf_net microblaze_0_axi_periph_M00_AXI [get_bd_intf_pins axi_periph/M00_AXI] [get_bd_intf_pins vdma_s2mm/S_AXI_LITE]
  connect_bd_intf_net -intf_net microblaze_0_axi_periph_M01_AXI [get_bd_intf_pins axi_periph/M01_AXI] [get_bd_intf_pins ov7670_decode_stream_0/S00_AXI]
  connect_bd_intf_net -intf_net microblaze_0_axi_periph_M02_AXI [get_bd_intf_pins axi_periph/M02_AXI] [get_bd_intf_pins vdma_mm2s/S_AXI_LITE]
  connect_bd_intf_net -intf_net ov7670_decode_stream_0_axis_out [get_bd_intf_pins fifo_s2mm/S_AXIS] [get_bd_intf_pins ov7670_decode_stream_0/axis_out]
  connect_bd_intf_net -intf_net processing_system7_0_DDR [get_bd_intf_ports DDR] [get_bd_intf_pins processing_system7_0/DDR]
  connect_bd_intf_net -intf_net processing_system7_0_FIXED_IO [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins processing_system7_0/FIXED_IO]
  connect_bd_intf_net -intf_net processing_system7_0_M_AXI_GP0 [get_bd_intf_pins axi_periph/S00_AXI] [get_bd_intf_pins processing_system7_0/M_AXI_GP0]

  # Create port connections
  connect_bd_net -net M01_ARESETN_1 [get_bd_pins axi_periph/M01_ARESETN] [get_bd_pins fifo_s2mm/s_aresetn] [get_bd_pins ov7670_decode_stream_0/s00_axi_aresetn] [get_bd_pins rst_ov7670_pclk/peripheral_aresetn]
  connect_bd_net -net Net [get_bd_ports ov7670_siod] [get_bd_pins ov7670_controller_0/siod]
  connect_bd_net -net d_1 [get_bd_ports ov7670_data] [get_bd_pins ov7670_decode_stream_0/d]
  connect_bd_net -net href_1 [get_bd_ports ov7670_href] [get_bd_pins ov7670_decode_stream_0/href]
  connect_bd_net -net i_1 [get_bd_ports btnc] [get_bd_pins ov7670_debounce_0/i]
  connect_bd_net -net microblaze_0_Clk [get_bd_pins axi_periph/ACLK] [get_bd_pins axi_periph/M00_ACLK] [get_bd_pins axi_periph/M02_ACLK] [get_bd_pins axi_periph/S00_ACLK] [get_bd_pins fifo_mm2s/s_aclk] [get_bd_pins fifo_s2mm/m_aclk] [get_bd_pins ila_0/clk] [get_bd_pins processing_system7_0/FCLK_CLK0] [get_bd_pins processing_system7_0/M_AXI_GP0_ACLK] [get_bd_pins processing_system7_0/S_AXI_HP0_ACLK] [get_bd_pins processing_system7_0/S_AXI_HP1_ACLK] [get_bd_pins rst_processing_system7_0_100M/slowest_sync_clk] [get_bd_pins vdma_mm2s/m_axi_mm2s_aclk] [get_bd_pins vdma_mm2s/m_axis_mm2s_aclk] [get_bd_pins vdma_mm2s/s_axi_lite_aclk] [get_bd_pins vdma_mm2s_intercon/ACLK] [get_bd_pins vdma_mm2s_intercon/M00_ACLK] [get_bd_pins vdma_mm2s_intercon/S00_ACLK] [get_bd_pins vdma_s2mm/m_axi_s2mm_aclk] [get_bd_pins vdma_s2mm/s_axi_lite_aclk] [get_bd_pins vdma_s2mm/s_axis_s2mm_aclk] [get_bd_pins vdma_s2mm_intercon/ACLK] [get_bd_pins vdma_s2mm_intercon/M00_ACLK] [get_bd_pins vdma_s2mm_intercon/S00_ACLK]
  connect_bd_net -net ov7670_controller_0_config_finished [get_bd_ports config_finished] [get_bd_pins ov7670_controller_0/config_finished]
  connect_bd_net -net ov7670_controller_0_sioc [get_bd_ports ov7670_sioc] [get_bd_pins ov7670_controller_0/sioc]
  connect_bd_net -net ov7670_controller_0_xclk [get_bd_ports ov7670_xclk] [get_bd_pins ov7670_controller_0/xclk]
  connect_bd_net -net ov7670_debounce_0_o [get_bd_pins ov7670_controller_0/resend] [get_bd_pins ov7670_debounce_0/o]
  connect_bd_net -net pclk_1 [get_bd_ports ov7670_pclk] [get_bd_pins axi_periph/M01_ACLK] [get_bd_pins fifo_s2mm/s_aclk] [get_bd_pins ov7670_decode_stream_0/pclk] [get_bd_pins ov7670_decode_stream_0/s00_axi_aclk] [get_bd_pins rst_ov7670_pclk/slowest_sync_clk]
  connect_bd_net -net processing_system7_0_FCLK_CLK1 [get_bd_pins ov7670_controller_0/clk] [get_bd_pins ov7670_debounce_0/clk] [get_bd_pins processing_system7_0/FCLK_CLK1]
  connect_bd_net -net processing_system7_0_FCLK_CLK2 [get_bd_pins fifo_mm2s/m_aclk] [get_bd_pins processing_system7_0/FCLK_CLK2] [get_bd_pins rst_vga_clk25/slowest_sync_clk] [get_bd_pins stream_to_vga_0/clk25]
  connect_bd_net -net processing_system7_0_FCLK_RESET0_N [get_bd_pins processing_system7_0/FCLK_RESET0_N] [get_bd_pins rst_ov7670_pclk/ext_reset_in] [get_bd_pins rst_processing_system7_0_100M/ext_reset_in] [get_bd_pins rst_vga_clk25/ext_reset_in]
  connect_bd_net -net pwdn_dout [get_bd_ports ov7670_pwdn] [get_bd_pins pwdn/dout]
  connect_bd_net -net reset_dout [get_bd_ports ov7670_reset] [get_bd_pins reset/dout]
  connect_bd_net -net rst_ov7670_pclk1_peripheral_aresetn [get_bd_pins rst_vga_clk25/peripheral_aresetn] [get_bd_pins stream_to_vga_0/aresetn]
  connect_bd_net -net rst_processing_system7_0_100M_interconnect_aresetn [get_bd_pins axi_periph/ARESETN] [get_bd_pins rst_processing_system7_0_100M/interconnect_aresetn] [get_bd_pins vdma_mm2s_intercon/ARESETN] [get_bd_pins vdma_s2mm_intercon/ARESETN]
  connect_bd_net -net rst_processing_system7_0_100M_peripheral_aresetn [get_bd_pins axi_periph/M00_ARESETN] [get_bd_pins axi_periph/M02_ARESETN] [get_bd_pins axi_periph/S00_ARESETN] [get_bd_pins fifo_mm2s/s_aresetn] [get_bd_pins rst_processing_system7_0_100M/peripheral_aresetn] [get_bd_pins vdma_mm2s/axi_resetn] [get_bd_pins vdma_mm2s_intercon/M00_ARESETN] [get_bd_pins vdma_mm2s_intercon/S00_ARESETN] [get_bd_pins vdma_s2mm/axi_resetn] [get_bd_pins vdma_s2mm_intercon/M00_ARESETN] [get_bd_pins vdma_s2mm_intercon/S00_ARESETN]
  connect_bd_net -net stream_to_vga_0_blue [get_bd_ports vga_b] [get_bd_pins stream_to_vga_0/blue]
  connect_bd_net -net stream_to_vga_0_fsync [get_bd_pins stream_to_vga_0/fsync] [get_bd_pins vdma_mm2s/mm2s_fsync]
  connect_bd_net -net stream_to_vga_0_green [get_bd_ports vga_g] [get_bd_pins stream_to_vga_0/green]
  connect_bd_net -net stream_to_vga_0_hsync [get_bd_ports vga_hsync] [get_bd_pins stream_to_vga_0/hsync]
  connect_bd_net -net stream_to_vga_0_red [get_bd_ports vga_r] [get_bd_pins stream_to_vga_0/red]
  connect_bd_net -net stream_to_vga_0_vsync [get_bd_ports vga_vsync] [get_bd_pins stream_to_vga_0/vsync]
  connect_bd_net -net vdma_mm2s_mm2s_introut [get_bd_pins vdma_mm2s/mm2s_introut] [get_bd_pins xlconcat_0/In1]
  connect_bd_net -net vdma_s2mm_s2mm_introut [get_bd_pins vdma_s2mm/s2mm_introut] [get_bd_pins xlconcat_0/In0]
  connect_bd_net -net vsync_1 [get_bd_ports ov7670_vsync] [get_bd_pins ov7670_decode_stream_0/vsync]
  connect_bd_net -net xlconcat_0_dout [get_bd_pins processing_system7_0/IRQ_F2P] [get_bd_pins xlconcat_0/dout]

  # Create address segments
  create_bd_addr_seg -range 0x10000 -offset 0x43C00000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs ov7670_decode_stream_0/S00_AXI/S00_AXI_reg] SEG_ov7670_decode_stream_0_S00_AXI_reg
  create_bd_addr_seg -range 0x10000 -offset 0x43000000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs vdma_mm2s/S_AXI_LITE/Reg] SEG_vdma_mm2s_Reg
  create_bd_addr_seg -range 0x10000 -offset 0x43010000 [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs vdma_s2mm/S_AXI_LITE/Reg] SEG_vdma_s2mm_Reg
  create_bd_addr_seg -range 0x10000000 -offset 0x10000000 [get_bd_addr_spaces vdma_mm2s/Data_MM2S] [get_bd_addr_segs processing_system7_0/S_AXI_HP1/HP1_DDR_LOWOCM] SEG_processing_system7_0_HP1_DDR_LOWOCM
  create_bd_addr_seg -range 0x10000000 -offset 0x10000000 [get_bd_addr_spaces vdma_s2mm/Data_S2MM] [get_bd_addr_segs processing_system7_0/S_AXI_HP0/HP0_DDR_LOWOCM] SEG_processing_system7_0_HP0_DDR_LOWOCM

  # Perform GUI Layout
  regenerate_bd_layout -layout_string {
   guistr: "# # String gsaved with Nlview 6.5.5  2015-06-26 bk=1.3371 VDI=38 GEI=35 GUI=JA:1.8
#  -string -flagsOSRD
preplace port vga_hsync -pg 1 -y 550 -defaultsOSRD
preplace port DDR -pg 1 -y 90 -defaultsOSRD
preplace port ov7670_pclk -pg 1 -y 230 -defaultsOSRD
preplace port ov7670_xclk -pg 1 -y 340 -defaultsOSRD
preplace port ov7670_vsync -pg 1 -y 390 -defaultsOSRD
preplace port ov7670_href -pg 1 -y 370 -defaultsOSRD
preplace port FIXED_IO -pg 1 -y 110 -defaultsOSRD
preplace port ov7670_sioc -pg 1 -y 300 -defaultsOSRD
preplace port ov7670_siod -pg 1 -y 320 -defaultsOSRD
preplace port config_finished -pg 1 -y 280 -defaultsOSRD
preplace port btnc -pg 1 -y 410 -defaultsOSRD
preplace port vga_vsync -pg 1 -y 570 -defaultsOSRD
preplace portBus ov7670_reset -pg 1 -y 420 -defaultsOSRD
preplace portBus vga_b -pg 1 -y 630 -defaultsOSRD
preplace portBus ov7670_pwdn -pg 1 -y 500 -defaultsOSRD
preplace portBus vga_r -pg 1 -y 590 -defaultsOSRD
preplace portBus vga_g -pg 1 -y 610 -defaultsOSRD
preplace portBus ov7670_data -pg 1 -y 350 -defaultsOSRD
preplace inst pwdn -pg 1 -lvl 10 -y 500 -defaultsOSRD
preplace inst fifo_mm2s -pg 1 -lvl 7 -y 600 -defaultsOSRD
preplace inst rst_processing_system7_0_100M -pg 1 -lvl 1 -y 100 -defaultsOSRD
preplace inst rst_ov7670_pclk -pg 1 -lvl 1 -y 270 -defaultsOSRD
preplace inst ov7670_debounce_0 -pg 1 -lvl 9 -y 470 -defaultsOSRD
preplace inst ov7670_controller_0 -pg 1 -lvl 10 -y 290 -defaultsOSRD
preplace inst xlconcat_0 -pg 1 -lvl 7 -y -50 -defaultsOSRD
preplace inst vdma_s2mm_intercon -pg 1 -lvl 7 -y 170 -defaultsOSRD
preplace inst vdma_mm2s_intercon -pg 1 -lvl 7 -y 390 -defaultsOSRD
preplace inst vdma_s2mm -pg 1 -lvl 5 -y 170 -defaultsOSRD
preplace inst vdma_mm2s -pg 1 -lvl 5 -y 400 -defaultsOSRD
preplace inst ila_0 -pg 1 -lvl 6 -y 600 -defaultsOSRD
preplace inst fifo_s2mm -pg 1 -lvl 4 -y 260 -defaultsOSRD
preplace inst axi_periph -pg 1 -lvl 2 -y 170 -defaultsOSRD
preplace inst rst_vga_clk25 -pg 1 -lvl 7 -y 780 -defaultsOSRD
preplace inst ov7670_decode_stream_0 -pg 1 -lvl 3 -y 230 -defaultsOSRD
preplace inst reset -pg 1 -lvl 10 -y 410 -defaultsOSRD
preplace inst processing_system7_0 -pg 1 -lvl 8 -y 190 -defaultsOSRD
preplace inst stream_to_vga_0 -pg 1 -lvl 8 -y 460 -defaultsOSRD
preplace netloc processing_system7_0_DDR 1 8 3 NJ 90 NJ 90 NJ
preplace netloc ov7670_decode_stream_0_axis_out 1 3 1 N
preplace netloc fifo_mm2s_M_AXIS 1 7 1 2370
preplace netloc reset_dout 1 10 1 NJ
preplace netloc stream_to_vga_0_blue 1 8 3 NJ 580 NJ 580 NJ
preplace netloc stream_to_vga_0_fsync 1 4 5 1180 530 NJ 520 NJ 520 NJ 590 2830
preplace netloc processing_system7_0_M_AXI_GP0 1 1 8 290 -110 NJ -110 NJ -110 NJ -110 NJ -110 NJ -110 NJ -110 2880
preplace netloc axi_vdma_1_M_AXI_MM2S 1 5 2 1590 330 N
preplace netloc microblaze_0_Clk 1 0 9 -130 -20 280 -20 NJ -20 880 150 1150 540 1580 530 1790 50 2380 340 2830
preplace netloc processing_system7_0_FCLK_RESET0_N 1 0 9 -120 -10 NJ -10 NJ -10 NJ -10 NJ -10 N -10 NJ 40 NJ 40 2840
preplace netloc i_1 1 0 9 NJ 410 NJ 410 NJ 410 NJ 410 NJ 510 NJ 510 NJ 510 NJ 580 NJ
preplace netloc href_1 1 0 3 NJ -40 NJ -40 NJ
preplace netloc microblaze_0_axi_periph_M00_AXI 1 2 3 NJ 110 NJ 110 N
preplace netloc fifo_generator_0_M_AXIS 1 4 1 1160
preplace netloc axi_mem_intercon_M00_AXI 1 7 1 2370
preplace netloc rst_processing_system7_0_100M_peripheral_aresetn 1 1 6 250 370 NJ 370 NJ 370 1170 520 1560 500 1800
preplace netloc ov7670_controller_0_config_finished 1 10 1 NJ
preplace netloc axi_vdma_1_M_AXIS_MM2S 1 5 2 1590 540 1780
preplace netloc xlconcat_0_dout 1 7 1 2390
preplace netloc pwdn_dout 1 10 1 NJ
preplace netloc ov7670_controller_0_xclk 1 10 1 NJ
preplace netloc stream_to_vga_0_vsync 1 8 3 NJ 410 NJ 570 NJ
preplace netloc processing_system7_0_FIXED_IO 1 8 3 NJ 110 NJ 110 NJ
preplace netloc microblaze_0_axi_periph_M01_AXI 1 2 1 N
preplace netloc vdma_s2mm_s2mm_introut 1 5 2 1560 -60 N
preplace netloc ov7670_debounce_0_o 1 9 1 3110
preplace netloc pclk_1 1 0 4 -140 10 260 340 610 360 NJ
preplace netloc d_1 1 0 3 NJ 360 NJ 350 NJ
preplace netloc microblaze_0_axi_periph_M02_AXI 1 2 3 NJ 340 NJ 340 N
preplace netloc rst_processing_system7_0_100M_interconnect_aresetn 1 1 6 270 10 NJ 10 NJ 10 NJ 10 N 10 1780
preplace netloc rst_ov7670_pclk1_peripheral_aresetn 1 7 1 2390
preplace netloc stream_to_vga_0_red 1 8 3 NJ 400 NJ 590 NJ
preplace netloc Net 1 10 1 NJ
preplace netloc axi_vdma_0_M_AXI_S2MM 1 5 2 1570 110 N
preplace netloc vdma_mm2s_mm2s_introut 1 5 2 1580 -40 N
preplace netloc processing_system7_0_FCLK_CLK1 1 8 2 2880 280 N
preplace netloc ov7670_controller_0_sioc 1 10 1 NJ
preplace netloc stream_to_vga_0_hsync 1 8 3 NJ 390 NJ 550 NJ
preplace netloc stream_to_vga_0_green 1 8 3 NJ 380 NJ 610 NJ
preplace netloc axi_mem_intercon_M00_AXI1 1 7 1 2370
preplace netloc vsync_1 1 0 3 NJ 370 NJ 360 NJ
preplace netloc processing_system7_0_FCLK_CLK2 1 6 3 1810 680 2380 600 2850
preplace netloc M01_ARESETN_1 1 1 3 290 330 630 350 NJ
levelinfo -pg 1 -170 60 440 760 1020 1370 1680 2180 2610 2980 3220 3370 -top -120 -bot 870
",
}

  # Restore current instance
  current_bd_instance $oldCurInst

  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


