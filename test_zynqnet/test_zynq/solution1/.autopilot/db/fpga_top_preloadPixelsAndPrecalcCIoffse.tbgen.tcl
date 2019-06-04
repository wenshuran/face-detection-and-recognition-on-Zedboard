set moduleName fpga_top_preloadPixelsAndPrecalcCIoffse
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set pipeII 9
set pipeLatency 13
set C_modelName {fpga_top_preloadPixelsAndPrecalcCIoffse}
set C_modelType { int 307 }
set C_modelArgList { 
	{ y_V_2 int 9 regular  }
	{ x_V_3 int 9 regular  }
	{ ci_V int 10 regular  }
	{ ch_out_V int 10 regular  }
	{ ci_V_out int 10 regular {fifo 1}  }
	{ ch_out_V_out int 10 regular {fifo 1}  }
	{ line_width int 16 regular {pointer 0} {global 0}  }
	{ ImageCache_ch_in_V int 10 regular {pointer 0} {global 0}  }
	{ ImageCache_width_in_V int 9 regular {pointer 0} {global 0}  }
	{ ImageCache_height_in_V int 9 regular {pointer 0} {global 0}  }
	{ ImageCache_IBRAM float 32 regular {array 32768 { 1 3 } 1 1 } {global 0}  }
	{ WeightsCache_ch_out_V int 10 regular {pointer 0} {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y_V_2", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "x_V_3", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "ci_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "ch_out_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "ci_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ch_out_V_out", "interface" : "fifo", "bitwidth" : 10, "direction" : "WRITEONLY"} , 
 	{ "Name" : "line_width", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "line_width","cData": "","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ImageCache_ch_in_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "ImageCache::ch_in.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ImageCache_width_in_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "ImageCache::width_in.V","cData": "uint9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ImageCache_height_in_V", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "ImageCache::height_in.V","cData": "uint9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ImageCache_IBRAM", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ImageCache::IBRAM","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 32767,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "WeightsCache_ch_out_V", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "WeightsCache::ch_out.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 307} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ y_V_2 sc_in sc_lv 9 signal 0 } 
	{ x_V_3 sc_in sc_lv 9 signal 1 } 
	{ ci_V sc_in sc_lv 10 signal 2 } 
	{ ch_out_V sc_in sc_lv 10 signal 3 } 
	{ ci_V_out_din sc_out sc_lv 10 signal 4 } 
	{ ci_V_out_full_n sc_in sc_logic 1 signal 4 } 
	{ ci_V_out_write sc_out sc_logic 1 signal 4 } 
	{ ch_out_V_out_din sc_out sc_lv 10 signal 5 } 
	{ ch_out_V_out_full_n sc_in sc_logic 1 signal 5 } 
	{ ch_out_V_out_write sc_out sc_logic 1 signal 5 } 
	{ line_width sc_in sc_lv 16 signal 6 } 
	{ ImageCache_ch_in_V sc_in sc_lv 10 signal 7 } 
	{ ImageCache_width_in_V sc_in sc_lv 9 signal 8 } 
	{ ImageCache_height_in_V sc_in sc_lv 9 signal 9 } 
	{ ImageCache_IBRAM_address0 sc_out sc_lv 15 signal 10 } 
	{ ImageCache_IBRAM_ce0 sc_out sc_logic 1 signal 10 } 
	{ ImageCache_IBRAM_q0 sc_in sc_lv 32 signal 10 } 
	{ WeightsCache_ch_out_V sc_in sc_lv 10 signal 11 } 
	{ ap_return_0 sc_out sc_lv 19 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "y_V_2", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "y_V_2", "role": "default" }} , 
 	{ "name": "x_V_3", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "x_V_3", "role": "default" }} , 
 	{ "name": "ci_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ci_V", "role": "default" }} , 
 	{ "name": "ch_out_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ch_out_V", "role": "default" }} , 
 	{ "name": "ci_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ci_V_out", "role": "din" }} , 
 	{ "name": "ci_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ci_V_out", "role": "full_n" }} , 
 	{ "name": "ci_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ci_V_out", "role": "write" }} , 
 	{ "name": "ch_out_V_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ch_out_V_out", "role": "din" }} , 
 	{ "name": "ch_out_V_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ch_out_V_out", "role": "full_n" }} , 
 	{ "name": "ch_out_V_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ch_out_V_out", "role": "write" }} , 
 	{ "name": "line_width", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "line_width", "role": "default" }} , 
 	{ "name": "ImageCache_ch_in_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ImageCache_ch_in_V", "role": "default" }} , 
 	{ "name": "ImageCache_width_in_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImageCache_width_in_V", "role": "default" }} , 
 	{ "name": "ImageCache_height_in_V", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ImageCache_height_in_V", "role": "default" }} , 
 	{ "name": "ImageCache_IBRAM_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "ImageCache_IBRAM", "role": "address0" }} , 
 	{ "name": "ImageCache_IBRAM_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ImageCache_IBRAM", "role": "ce0" }} , 
 	{ "name": "ImageCache_IBRAM_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ImageCache_IBRAM", "role": "q0" }} , 
 	{ "name": "WeightsCache_ch_out_V", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "WeightsCache_ch_out_V", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }}  ]}
set Spec2ImplPortList { 
	y_V_2 { ap_none {  { y_V_2 in_data 0 9 } } }
	x_V_3 { ap_none {  { x_V_3 in_data 0 9 } } }
	ci_V { ap_none {  { ci_V in_data 0 10 } } }
	ch_out_V { ap_none {  { ch_out_V in_data 0 10 } } }
	ci_V_out { ap_fifo {  { ci_V_out_din fifo_data 1 10 }  { ci_V_out_full_n fifo_status 0 1 }  { ci_V_out_write fifo_update 1 1 } } }
	ch_out_V_out { ap_fifo {  { ch_out_V_out_din fifo_data 1 10 }  { ch_out_V_out_full_n fifo_status 0 1 }  { ch_out_V_out_write fifo_update 1 1 } } }
	line_width { ap_none {  { line_width in_data 0 16 } } }
	ImageCache_ch_in_V { ap_none {  { ImageCache_ch_in_V in_data 0 10 } } }
	ImageCache_width_in_V { ap_none {  { ImageCache_width_in_V in_data 0 9 } } }
	ImageCache_height_in_V { ap_none {  { ImageCache_height_in_V in_data 0 9 } } }
	ImageCache_IBRAM { ap_memory {  { ImageCache_IBRAM_address0 mem_address 1 15 }  { ImageCache_IBRAM_ce0 mem_ce 1 1 }  { ImageCache_IBRAM_q0 mem_dout 0 32 } } }
	WeightsCache_ch_out_V { ap_none {  { WeightsCache_ch_out_V in_data 0 10 } } }
}
