
set TopModule "fpga_top"
set ClockPeriod "10.000000"
set ClockList {ap_clk}
set multiClockList {}
set PortClockMap {}
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag  1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 1
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 0
set ResetLevelFlag 0
set ResetStyle "control"
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set fsmEncStyle "onehot"
set maxFanout "0"
set RtlPrefix ""
set ExtraCCFlags ""
set ExtraCLdFlags ""
set SynCheckOptions ""
set PresynOptions ""
set PreprocOptions ""
set SchedOptions ""
set BindOptions ""
set RtlGenOptions ""
set RtlWriterOptions ""
set CbcGenFlag ""
set CasGenFlag ""
set CasMonitorFlag ""
set AutoSimOptions {}
set ExportMCPathFlag "0"
set SCTraceFileName "mytrace"
set SCTraceFileFormat "vcd"
set SCTraceOption "all"
set TargetInfo "xc7z020:clg484:-1"
set SourceFiles {sc {} c {../../../zynqnet-master/_HLS_CODE/weights_cache.cpp ../../../zynqnet-master/_HLS_CODE/unittests.cpp ../../../zynqnet-master/_HLS_CODE/processing_element.cpp ../../../zynqnet-master/_HLS_CODE/output_cache.cpp ../../../zynqnet-master/_HLS_CODE/network.cpp ../../../zynqnet-master/_HLS_CODE/netconfig.cpp ../../../zynqnet-master/_HLS_CODE/memory_controller.cpp ../../../zynqnet-master/_HLS_CODE/image_cache.cpp ../../../zynqnet-master/_HLS_CODE/gpool_cache.cpp ../../../zynqnet-master/_HLS_CODE/fpga_top.cpp}}
set SourceFlags {sc {} c {{} {} {} {} {} {} {} {} {} {}}}
set DirectiveFile {/home/wenshuran/hdcourse/test_zynqnet/test_zynq/solution1/solution1.directive}
set TBFiles {verilog {../../../zynqnet-master/_HLS_CODE/cpu_top.hpp ../../../zynqnet-master/_HLS_CODE/cpu_top.cpp} bc {../../../zynqnet-master/_HLS_CODE/cpu_top.hpp ../../../zynqnet-master/_HLS_CODE/cpu_top.cpp} sc {../../../zynqnet-master/_HLS_CODE/cpu_top.hpp ../../../zynqnet-master/_HLS_CODE/cpu_top.cpp} vhdl {../../../zynqnet-master/_HLS_CODE/cpu_top.hpp ../../../zynqnet-master/_HLS_CODE/cpu_top.cpp} c {} cas {../../../zynqnet-master/_HLS_CODE/cpu_top.hpp ../../../zynqnet-master/_HLS_CODE/cpu_top.cpp}}
set SpecLanguage "C"
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set TBInstNames {verilog {} bc {} sc {} vhdl {} c {} cas {}}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set PlatformFiles {{DefaultPlatform {xilinx/zynq/zynq xilinx/zynq/zynq_fpv6}}}
set DefaultPlatform "DefaultPlatform"
set TBTVFileNotFound ""
set AppFile "../vivado_hls.app"
set ApsFile "solution1.aps"
set AvePath "../.."
set HPFPO "0"
