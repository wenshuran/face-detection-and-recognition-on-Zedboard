#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/opt/Xilinx1/SDK/2015.4/bin:/opt/Xilinx1/Vivado/2015.4/ids_lite/ISE/bin/lin64:/opt/Xilinx1/Vivado/2015.4/bin
else
  PATH=/opt/Xilinx1/SDK/2015.4/bin:/opt/Xilinx1/Vivado/2015.4/ids_lite/ISE/bin/lin64:/opt/Xilinx1/Vivado/2015.4/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/opt/Xilinx1/Vivado/2015.4/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/opt/Xilinx1/Vivado/2015.4/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/wenshuran/hdcourse/test_zynqnet/zynqnet_vivado/zynqnet_vivado.runs/synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log fpga_top_ap_fadd_3_full_dsp_32.vds -m64 -mode batch -messageDb vivado.pb -notrace -source fpga_top_ap_fadd_3_full_dsp_32.tcl
