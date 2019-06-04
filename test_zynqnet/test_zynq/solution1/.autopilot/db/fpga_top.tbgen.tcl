set C_TypeInfoList {{ 
"fpga_top" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"layer": [[],"0"] }, {"SHARED_DRAM": [[],{ "pointer": "1"}] }, {"weights_offset": [[], {"scalar": "unsigned int"}] }, {"num_weights": [[],"2"] }, {"input_offset": [[], {"scalar": "unsigned int"}] }],["3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32"],""],
 "3": [ "write_addr", [[],"33"],"34"],
 "4": [ "num_weights", [[],"33"],"34"],
 "5": [ "kernel", [[],"35"],"34"],
 "6": [ "ch_out", [[],"36"],"34"],
 "7": [ "ch_in", [[],"36"],"34"],
 "8": [ "WBRAM", [[], {"array": ["37", [16,3,1024,9]]}],"34"],
 "9": [ "relu", [[], {"scalar": "bool"}],"38"],
 "10": [ "kernel", [[],"39"],"38"],
 "11": [ "OBRAM", [[], {"array": ["40", [512]]}],"41"],
 "12": [ "width_out", [[],"42"],"43"],
 "13": [ "pixels_per_row", [[],"44"],"43"],
 "14": [ "pixel_output_offset", [[],"45"],"43"],
 "15": [ "layer_weights_offset", [[],"45"],"43"],
 "16": [ "layer_pixel_offset", [[],"45"],"43"],
 "17": [ "layer_output_offset", [[],"45"],"43"],
 "18": [ "layer_input_offset", [[],"45"],"43"],
 "19": [ "is_second_split_layer", [[], {"scalar": "bool"}],"43"],
 "20": [ "is_first_split_layer", [[], {"scalar": "bool"}],"43"],
 "21": [ "dram_weights_offset", [[], {"scalar": "unsigned int"}],"43"],
 "22": [ "dram_data_offset", [[], {"scalar": "unsigned int"}],"43"],
 "23": [ "ch_out", [[],"36"],"43"],
 "24": [ "width_in", [[],"46"],"47"],
 "25": [ "loads_left", [[],"48"],"47"],
 "26": [ "line_width", [[],"49"],"47"],
 "27": [ "height_in", [[],"46"],"47"],
 "28": [ "curr_img_cache_line", [[],"50"],"47"],
 "29": [ "curr_img_cache_addr", [[],"49"],"47"],
 "30": [ "ch_in", [[],"51"],"47"],
 "31": [ "IBRAM", [[], {"array": ["52", [32768]]}],"47"],
 "32": [ "GBRAM", [[], {"array": ["53", [512]]}],"54"], 
"0": [ "layer_t", {"struct": [[{"pack": 0}],[],[{ "name": [[],  {"array": [ {"scalar": "char"}, [7]]}]},{ "width": [[16], "55"]},{ "height": [[16], "55"]},{ "channels_in": [[16], "56"]},{ "channels_out": [[16], "56"]},{ "kernel": [[8], "57"]},{ "stride": [[8], "58"]},{ "pad": [[],  {"scalar": "bool"}]},{ "relu": [[],  {"scalar": "bool"}]},{ "is_first_split_layer": [[],  {"scalar": "bool"}]},{ "is_second_split_layer": [[],  {"scalar": "bool"}]},{ "global_pool": [[],  {"scalar": "bool"}]},{ "mem_addr_input": [[32], "59"]},{ "mem_addr_output": [[32], "59"]},{ "mem_addr_weights": [[32], "59"]}],""]}], 
"42": [ "dimension_t", {"typedef": [[[],"60"],""]}], 
"60": [ "ap_uint<9>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 9}}]],""]}}], 
"44": [ "pixelperrow_t", {"typedef": [[[],"61"],""]}], 
"61": [ "ap_uint<14>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 14}}]],""]}}], 
"45": [ "memaddr_t", {"typedef": [[[],"62"],""]}], 
"62": [ "ap_uint<23>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 23}}]],""]}}], 
"46": [ "dimension_t", {"typedef": [[[],"63"],""]}], 
"63": [ "ap_uint<9>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 9}}]],""]}}], 
"48": [ "imgdramoffset_t", {"typedef": [[[],"64"],""]}], 
"64": [ "ap_uint<21>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 21}}]],""]}}], 
"49": [ "imgcacheaddr_t", {"typedef": [[[],"65"],""]}], 
"65": [ "ap_uint<16>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 16}}]],""]}}], 
"50": [ "cacheline_t", {"typedef": [[[],"66"],""]}], 
"51": [ "channel_t", {"typedef": [[[],"67"],""]}], 
"67": [ "ap_uint<10>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"52": [ "data_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"53": [ "data_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"55": [ "dimension_t", {"typedef": [[[],"68"],""]}], 
"68": [ "ap_uint<9>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 9}}]],""]}}], 
"57": [ "kernel_t", {"typedef": [[[],"69"],""]}], 
"69": [ "ap_uint<2>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 2}}]],""]}}], 
"58": [ "stride_t", {"typedef": [[[],"69"],""]}], 
"1": [ "data_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"2": [ "weightaddr_t", {"typedef": [[[],"70"],""]}], 
"70": [ "ap_uint<19>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"33": [ "weightaddr_t", {"typedef": [[[],"71"],""]}], 
"71": [ "ap_uint<19>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 19}}]],""]}}], 
"35": [ "kernel_t", {"typedef": [[[],"72"],""]}], 
"72": [ "ap_uint<2>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 2}}]],""]}}], 
"36": [ "channel_t", {"typedef": [[[],"73"],""]}], 
"73": [ "ap_uint<10>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"37": [ "data_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"39": [ "kernel_t", {"typedef": [[[],"66"],""]}], 
"66": [ "ap_uint<2>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 2}}]],""]}}], 
"40": [ "data_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"56": [ "channel_t", {"typedef": [[[],"74"],""]}], 
"74": [ "ap_uint<10>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 10}}]],""]}}], 
"59": [ "memaddr_t", {"typedef": [[[],"75"],""]}], 
"75": [ "ap_uint<23>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 23}}]],""]}}],
"54": ["GPoolCache", ""],
"47": ["ImageCache", ""],
"38": ["ProcessingElement", ""],
"41": ["OutputCache", ""],
"34": ["WeightsCache", ""],
"43": ["MemoryController", ""]
}}
set moduleName fpga_top
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {fpga_top}
set C_modelType { void 0 }
set C_modelArgList { 
	{ memorybus float 32 regular {axi_master 2}  }
	{ layer_name int 8 unused {axi_slave 3}  }
	{ layer_width_V int 9 regular {axi_slave 0}  }
	{ layer_height_V int 9 regular {axi_slave 0}  }
	{ layer_channels_in_V int 10 regular {axi_slave 0}  }
	{ layer_channels_out_V int 10 regular {axi_slave 0}  }
	{ layer_kernel_V int 2 regular {axi_slave 0}  }
	{ layer_stride_V int 2 regular {axi_slave 0}  }
	{ layer_pad int 1 unused {axi_slave 0}  }
	{ layer_relu int 1 regular {axi_slave 0}  }
	{ layer_is_first_split_layer int 1 regular {axi_slave 0}  }
	{ layer_is_second_split_layer int 1 regular {axi_slave 0}  }
	{ layer_global_pool int 1 regular {axi_slave 0}  }
	{ layer_mem_addr_input_V int 23 regular {axi_slave 0}  }
	{ layer_mem_addr_output_V int 23 regular {axi_slave 0}  }
	{ layer_mem_addr_weights_V int 23 regular {axi_slave 0}  }
	{ SHARED_DRAM int 32 regular {axi_slave 0}  }
	{ weights_offset int 32 regular {axi_slave 0}  }
	{ num_weights_V int 19 regular {axi_slave 0}  }
	{ input_offset int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "memorybus", "interface" : "axi_master", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "SHARED_DRAM","cData": "float","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "SHARED_DRAM","bundle": "AXILiteS"},"direction": "READWRITE","cArray": [{"low" : 0,"up" : 5932575,"step" : 1}]}]}]} , 
 	{ "Name" : "layer_name", "interface" : "axi_slave", "bundle":"axilite","type":"ap_memory","bitwidth" : 8, "direction" : "NONE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "layer.name","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 6,"step" : 1}]}]}], "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "layer_width_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "layer.width.V","cData": "uint9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "layer_height_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 9, "direction" : "READONLY", "bitSlice":[{"low":0,"up":8,"cElement": [{"cName": "layer.height.V","cData": "uint9","bit_use": { "low": 0,"up": 8},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "layer_channels_in_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "layer.channels_in.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "layer_channels_out_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 10, "direction" : "READONLY", "bitSlice":[{"low":0,"up":9,"cElement": [{"cName": "layer.channels_out.V","cData": "uint10","bit_use": { "low": 0,"up": 9},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "layer_kernel_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 2, "direction" : "READONLY", "bitSlice":[{"low":0,"up":1,"cElement": [{"cName": "layer.kernel.V","cData": "uint2","bit_use": { "low": 0,"up": 1},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "layer_stride_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 2, "direction" : "READONLY", "bitSlice":[{"low":0,"up":1,"cElement": [{"cName": "layer.stride.V","cData": "uint2","bit_use": { "low": 0,"up": 1},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "layer_pad", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "layer.pad","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "layer_relu", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "layer.relu","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":80}, "offset_end" : {"in":87}} , 
 	{ "Name" : "layer_is_first_split_layer", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "layer.is_first_split_layer","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":88}, "offset_end" : {"in":95}} , 
 	{ "Name" : "layer_is_second_split_layer", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "layer.is_second_split_layer","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":96}, "offset_end" : {"in":103}} , 
 	{ "Name" : "layer_global_pool", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "layer.global_pool","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":104}, "offset_end" : {"in":111}} , 
 	{ "Name" : "layer_mem_addr_input_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 23, "direction" : "READONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "layer.mem_addr_input.V","cData": "uint23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":112}, "offset_end" : {"in":119}} , 
 	{ "Name" : "layer_mem_addr_output_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 23, "direction" : "READONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "layer.mem_addr_output.V","cData": "uint23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":120}, "offset_end" : {"in":127}} , 
 	{ "Name" : "layer_mem_addr_weights_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 23, "direction" : "READONLY", "bitSlice":[{"low":0,"up":22,"cElement": [{"cName": "layer.mem_addr_weights.V","cData": "uint23","bit_use": { "low": 0,"up": 22},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":128}, "offset_end" : {"in":135}} , 
 	{ "Name" : "SHARED_DRAM", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "weights_offset", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "weights_offset","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":136}, "offset_end" : {"in":143}} , 
 	{ "Name" : "num_weights_V", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 19, "direction" : "READONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "num_weights.V","cData": "uint19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":144}, "offset_end" : {"in":151}} , 
 	{ "Name" : "input_offset", "interface" : "axi_slave", "bundle":"axilite","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "input_offset","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":152}, "offset_end" : {"in":159}} ]}
# RTL Port declarations: 
set portNum 82
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_memorybus_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_memorybus_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_memorybus_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_memorybus_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_memorybus_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_memorybus_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_memorybus_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_memorybus_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_memorybus_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_memorybus_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_memorybus_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_memorybus_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_memorybus_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_memorybus_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_memorybus_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_memorybus_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_memorybus_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_memorybus_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_memorybus_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_memorybus_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_memorybus_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_memorybus_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_memorybus_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_memorybus_BUSER sc_in sc_lv 1 signal 0 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_axilite_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_axilite_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_axilite_AWADDR sc_in sc_lv 8 signal -1 } 
	{ s_axi_axilite_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_axilite_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_axilite_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_axilite_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_axilite_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_axilite_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_axilite_ARADDR sc_in sc_lv 8 signal -1 } 
	{ s_axi_axilite_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_axilite_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_axilite_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_axilite_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_axilite_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_axilite_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_axilite_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"SHARED_DRAM","role":"data","value":"16"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "s_axi_axilite_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "axilite", "role": "AWADDR" },"address":[{"name":"fpga_top","role":"start","value":"0","valid_bit":"0"},{"name":"fpga_top","role":"continue","value":"0","valid_bit":"4"},{"name":"fpga_top","role":"auto_start","value":"0","valid_bit":"7"},{"name":"layer_name","role":"data","value":"16"},{"name":"layer_width_V","role":"data","value":"24"},{"name":"layer_height_V","role":"data","value":"32"},{"name":"layer_channels_in_V","role":"data","value":"40"},{"name":"layer_channels_out_V","role":"data","value":"48"},{"name":"layer_kernel_V","role":"data","value":"56"},{"name":"layer_stride_V","role":"data","value":"64"},{"name":"layer_pad","role":"data","value":"72"},{"name":"layer_relu","role":"data","value":"80"},{"name":"layer_is_first_split_layer","role":"data","value":"88"},{"name":"layer_is_second_split_layer","role":"data","value":"96"},{"name":"layer_global_pool","role":"data","value":"104"},{"name":"layer_mem_addr_input_V","role":"data","value":"112"},{"name":"layer_mem_addr_output_V","role":"data","value":"120"},{"name":"layer_mem_addr_weights_V","role":"data","value":"128"},{"name":"weights_offset","role":"data","value":"136"},{"name":"num_weights_V","role":"data","value":"144"},{"name":"input_offset","role":"data","value":"152"}] },
	{ "name": "s_axi_axilite_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "AWVALID" } },
	{ "name": "s_axi_axilite_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "AWREADY" } },
	{ "name": "s_axi_axilite_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "WVALID" } },
	{ "name": "s_axi_axilite_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "WREADY" } },
	{ "name": "s_axi_axilite_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "axilite", "role": "WDATA" } },
	{ "name": "s_axi_axilite_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "axilite", "role": "WSTRB" } },
	{ "name": "s_axi_axilite_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "axilite", "role": "ARADDR" },"address":[{"name":"fpga_top","role":"start","value":"0","valid_bit":"0"},{"name":"fpga_top","role":"done","value":"0","valid_bit":"1"},{"name":"fpga_top","role":"idle","value":"0","valid_bit":"2"},{"name":"fpga_top","role":"ready","value":"0","valid_bit":"3"},{"name":"fpga_top","role":"auto_start","value":"0","valid_bit":"7"},{"name":"layer_name","role":"data","value":"16"}] },
	{ "name": "s_axi_axilite_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "ARVALID" } },
	{ "name": "s_axi_axilite_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "ARREADY" } },
	{ "name": "s_axi_axilite_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "RVALID" } },
	{ "name": "s_axi_axilite_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "RREADY" } },
	{ "name": "s_axi_axilite_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "axilite", "role": "RDATA" } },
	{ "name": "s_axi_axilite_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "axilite", "role": "RRESP" } },
	{ "name": "s_axi_axilite_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "BVALID" } },
	{ "name": "s_axi_axilite_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "axilite", "role": "BREADY" } },
	{ "name": "s_axi_axilite_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "axilite", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_memorybus_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "AWVALID" }} , 
 	{ "name": "m_axi_memorybus_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "AWREADY" }} , 
 	{ "name": "m_axi_memorybus_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memorybus", "role": "AWADDR" }} , 
 	{ "name": "m_axi_memorybus_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "AWID" }} , 
 	{ "name": "m_axi_memorybus_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "memorybus", "role": "AWLEN" }} , 
 	{ "name": "m_axi_memorybus_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "memorybus", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_memorybus_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "AWBURST" }} , 
 	{ "name": "m_axi_memorybus_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_memorybus_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_memorybus_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "memorybus", "role": "AWPROT" }} , 
 	{ "name": "m_axi_memorybus_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "AWQOS" }} , 
 	{ "name": "m_axi_memorybus_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "AWREGION" }} , 
 	{ "name": "m_axi_memorybus_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "AWUSER" }} , 
 	{ "name": "m_axi_memorybus_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "WVALID" }} , 
 	{ "name": "m_axi_memorybus_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "WREADY" }} , 
 	{ "name": "m_axi_memorybus_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memorybus", "role": "WDATA" }} , 
 	{ "name": "m_axi_memorybus_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "WSTRB" }} , 
 	{ "name": "m_axi_memorybus_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "WLAST" }} , 
 	{ "name": "m_axi_memorybus_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "WID" }} , 
 	{ "name": "m_axi_memorybus_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "WUSER" }} , 
 	{ "name": "m_axi_memorybus_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "ARVALID" }} , 
 	{ "name": "m_axi_memorybus_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "ARREADY" }} , 
 	{ "name": "m_axi_memorybus_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memorybus", "role": "ARADDR" }} , 
 	{ "name": "m_axi_memorybus_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "ARID" }} , 
 	{ "name": "m_axi_memorybus_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "memorybus", "role": "ARLEN" }} , 
 	{ "name": "m_axi_memorybus_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "memorybus", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_memorybus_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "ARBURST" }} , 
 	{ "name": "m_axi_memorybus_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_memorybus_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_memorybus_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "memorybus", "role": "ARPROT" }} , 
 	{ "name": "m_axi_memorybus_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "ARQOS" }} , 
 	{ "name": "m_axi_memorybus_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "memorybus", "role": "ARREGION" }} , 
 	{ "name": "m_axi_memorybus_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "ARUSER" }} , 
 	{ "name": "m_axi_memorybus_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "RVALID" }} , 
 	{ "name": "m_axi_memorybus_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "RREADY" }} , 
 	{ "name": "m_axi_memorybus_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memorybus", "role": "RDATA" }} , 
 	{ "name": "m_axi_memorybus_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "RLAST" }} , 
 	{ "name": "m_axi_memorybus_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "RID" }} , 
 	{ "name": "m_axi_memorybus_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "RUSER" }} , 
 	{ "name": "m_axi_memorybus_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "RRESP" }} , 
 	{ "name": "m_axi_memorybus_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "BVALID" }} , 
 	{ "name": "m_axi_memorybus_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "BREADY" }} , 
 	{ "name": "m_axi_memorybus_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "memorybus", "role": "BRESP" }} , 
 	{ "name": "m_axi_memorybus_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "BID" }} , 
 	{ "name": "m_axi_memorybus_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "memorybus", "role": "BUSER" }} , 
 	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "interrupt", "role": "default" }}  ]}
set Spec2ImplPortList { 
	memorybus { m_axi {  { m_axi_memorybus_AWVALID VALID 1 1 }  { m_axi_memorybus_AWREADY READY 0 1 }  { m_axi_memorybus_AWADDR ADDR 1 32 }  { m_axi_memorybus_AWID ID 1 1 }  { m_axi_memorybus_AWLEN LEN 1 8 }  { m_axi_memorybus_AWSIZE SIZE 1 3 }  { m_axi_memorybus_AWBURST BURST 1 2 }  { m_axi_memorybus_AWLOCK LOCK 1 2 }  { m_axi_memorybus_AWCACHE CACHE 1 4 }  { m_axi_memorybus_AWPROT PROT 1 3 }  { m_axi_memorybus_AWQOS QOS 1 4 }  { m_axi_memorybus_AWREGION REGION 1 4 }  { m_axi_memorybus_AWUSER USER 1 1 }  { m_axi_memorybus_WVALID VALID 1 1 }  { m_axi_memorybus_WREADY READY 0 1 }  { m_axi_memorybus_WDATA DATA 1 32 }  { m_axi_memorybus_WSTRB STRB 1 4 }  { m_axi_memorybus_WLAST LAST 1 1 }  { m_axi_memorybus_WID ID 1 1 }  { m_axi_memorybus_WUSER USER 1 1 }  { m_axi_memorybus_ARVALID VALID 1 1 }  { m_axi_memorybus_ARREADY READY 0 1 }  { m_axi_memorybus_ARADDR ADDR 1 32 }  { m_axi_memorybus_ARID ID 1 1 }  { m_axi_memorybus_ARLEN LEN 1 8 }  { m_axi_memorybus_ARSIZE SIZE 1 3 }  { m_axi_memorybus_ARBURST BURST 1 2 }  { m_axi_memorybus_ARLOCK LOCK 1 2 }  { m_axi_memorybus_ARCACHE CACHE 1 4 }  { m_axi_memorybus_ARPROT PROT 1 3 }  { m_axi_memorybus_ARQOS QOS 1 4 }  { m_axi_memorybus_ARREGION REGION 1 4 }  { m_axi_memorybus_ARUSER USER 1 1 }  { m_axi_memorybus_RVALID VALID 0 1 }  { m_axi_memorybus_RREADY READY 1 1 }  { m_axi_memorybus_RDATA DATA 0 32 }  { m_axi_memorybus_RLAST LAST 0 1 }  { m_axi_memorybus_RID ID 0 1 }  { m_axi_memorybus_RUSER USER 0 1 }  { m_axi_memorybus_RRESP RESP 0 2 }  { m_axi_memorybus_BVALID VALID 0 1 }  { m_axi_memorybus_BREADY READY 1 1 }  { m_axi_memorybus_BRESP RESP 0 2 }  { m_axi_memorybus_BID ID 0 1 }  { m_axi_memorybus_BUSER USER 0 1 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ memorybus 6 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ memorybus 6 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
	{ OBRAM_0 2 }
	{ WBRAM_0_0_0 3 }
	{ WBRAM_0_1_0 3 }
	{ WBRAM_0_2_0 3 }
	{ WBRAM_0_0_1 3 }
	{ WBRAM_0_1_1 3 }
	{ WBRAM_0_2_1 3 }
	{ WBRAM_0_0_2 3 }
	{ WBRAM_0_1_2 3 }
	{ WBRAM_0_2_2 3 }
	{ WBRAM_0_0_3 3 }
	{ WBRAM_0_1_3 3 }
	{ WBRAM_0_2_3 3 }
	{ WBRAM_0_0_4 3 }
	{ WBRAM_0_1_4 3 }
	{ WBRAM_0_2_4 3 }
	{ WBRAM_0_0_5 3 }
	{ WBRAM_0_1_5 3 }
	{ WBRAM_0_2_5 3 }
	{ WBRAM_0_0_6 3 }
	{ WBRAM_0_1_6 3 }
	{ WBRAM_0_2_6 3 }
	{ WBRAM_0_0_7 3 }
	{ WBRAM_0_1_7 3 }
	{ WBRAM_0_2_7 3 }
	{ OBRAM_1 2 }
	{ WBRAM_1_0_0 3 }
	{ WBRAM_1_1_0 3 }
	{ WBRAM_1_2_0 3 }
	{ WBRAM_1_0_1 3 }
	{ WBRAM_1_1_1 3 }
	{ WBRAM_1_2_1 3 }
	{ WBRAM_1_0_2 3 }
	{ WBRAM_1_1_2 3 }
	{ WBRAM_1_2_2 3 }
	{ WBRAM_1_0_3 3 }
	{ WBRAM_1_1_3 3 }
	{ WBRAM_1_2_3 3 }
	{ WBRAM_1_0_4 3 }
	{ WBRAM_1_1_4 3 }
	{ WBRAM_1_2_4 3 }
	{ WBRAM_1_0_5 3 }
	{ WBRAM_1_1_5 3 }
	{ WBRAM_1_2_5 3 }
	{ WBRAM_1_0_6 3 }
	{ WBRAM_1_1_6 3 }
	{ WBRAM_1_2_6 3 }
	{ WBRAM_1_0_7 3 }
	{ WBRAM_1_1_7 3 }
	{ WBRAM_1_2_7 3 }
	{ OBRAM_2 2 }
	{ WBRAM_2_0_0 3 }
	{ WBRAM_2_1_0 3 }
	{ WBRAM_2_2_0 3 }
	{ WBRAM_2_0_1 3 }
	{ WBRAM_2_1_1 3 }
	{ WBRAM_2_2_1 3 }
	{ WBRAM_2_0_2 3 }
	{ WBRAM_2_1_2 3 }
	{ WBRAM_2_2_2 3 }
	{ WBRAM_2_0_3 3 }
	{ WBRAM_2_1_3 3 }
	{ WBRAM_2_2_3 3 }
	{ WBRAM_2_0_4 3 }
	{ WBRAM_2_1_4 3 }
	{ WBRAM_2_2_4 3 }
	{ WBRAM_2_0_5 3 }
	{ WBRAM_2_1_5 3 }
	{ WBRAM_2_2_5 3 }
	{ WBRAM_2_0_6 3 }
	{ WBRAM_2_1_6 3 }
	{ WBRAM_2_2_6 3 }
	{ WBRAM_2_0_7 3 }
	{ WBRAM_2_1_7 3 }
	{ WBRAM_2_2_7 3 }
	{ OBRAM_3 2 }
	{ WBRAM_3_0_0 3 }
	{ WBRAM_3_1_0 3 }
	{ WBRAM_3_2_0 3 }
	{ WBRAM_3_0_1 3 }
	{ WBRAM_3_1_1 3 }
	{ WBRAM_3_2_1 3 }
	{ WBRAM_3_0_2 3 }
	{ WBRAM_3_1_2 3 }
	{ WBRAM_3_2_2 3 }
	{ WBRAM_3_0_3 3 }
	{ WBRAM_3_1_3 3 }
	{ WBRAM_3_2_3 3 }
	{ WBRAM_3_0_4 3 }
	{ WBRAM_3_1_4 3 }
	{ WBRAM_3_2_4 3 }
	{ WBRAM_3_0_5 3 }
	{ WBRAM_3_1_5 3 }
	{ WBRAM_3_2_5 3 }
	{ WBRAM_3_0_6 3 }
	{ WBRAM_3_1_6 3 }
	{ WBRAM_3_2_6 3 }
	{ WBRAM_3_0_7 3 }
	{ WBRAM_3_1_7 3 }
	{ WBRAM_3_2_7 3 }
	{ OBRAM_4 2 }
	{ WBRAM_4_0_0 3 }
	{ WBRAM_4_1_0 3 }
	{ WBRAM_4_2_0 3 }
	{ WBRAM_4_0_1 3 }
	{ WBRAM_4_1_1 3 }
	{ WBRAM_4_2_1 3 }
	{ WBRAM_4_0_2 3 }
	{ WBRAM_4_1_2 3 }
	{ WBRAM_4_2_2 3 }
	{ WBRAM_4_0_3 3 }
	{ WBRAM_4_1_3 3 }
	{ WBRAM_4_2_3 3 }
	{ WBRAM_4_0_4 3 }
	{ WBRAM_4_1_4 3 }
	{ WBRAM_4_2_4 3 }
	{ WBRAM_4_0_5 3 }
	{ WBRAM_4_1_5 3 }
	{ WBRAM_4_2_5 3 }
	{ WBRAM_4_0_6 3 }
	{ WBRAM_4_1_6 3 }
	{ WBRAM_4_2_6 3 }
	{ WBRAM_4_0_7 3 }
	{ WBRAM_4_1_7 3 }
	{ WBRAM_4_2_7 3 }
	{ OBRAM_5 2 }
	{ WBRAM_5_0_0 3 }
	{ WBRAM_5_1_0 3 }
	{ WBRAM_5_2_0 3 }
	{ WBRAM_5_0_1 3 }
	{ WBRAM_5_1_1 3 }
	{ WBRAM_5_2_1 3 }
	{ WBRAM_5_0_2 3 }
	{ WBRAM_5_1_2 3 }
	{ WBRAM_5_2_2 3 }
	{ WBRAM_5_0_3 3 }
	{ WBRAM_5_1_3 3 }
	{ WBRAM_5_2_3 3 }
	{ WBRAM_5_0_4 3 }
	{ WBRAM_5_1_4 3 }
	{ WBRAM_5_2_4 3 }
	{ WBRAM_5_0_5 3 }
	{ WBRAM_5_1_5 3 }
	{ WBRAM_5_2_5 3 }
	{ WBRAM_5_0_6 3 }
	{ WBRAM_5_1_6 3 }
	{ WBRAM_5_2_6 3 }
	{ WBRAM_5_0_7 3 }
	{ WBRAM_5_1_7 3 }
	{ WBRAM_5_2_7 3 }
	{ OBRAM_6 2 }
	{ WBRAM_6_0_0 3 }
	{ WBRAM_6_1_0 3 }
	{ WBRAM_6_2_0 3 }
	{ WBRAM_6_0_1 3 }
	{ WBRAM_6_1_1 3 }
	{ WBRAM_6_2_1 3 }
	{ WBRAM_6_0_2 3 }
	{ WBRAM_6_1_2 3 }
	{ WBRAM_6_2_2 3 }
	{ WBRAM_6_0_3 3 }
	{ WBRAM_6_1_3 3 }
	{ WBRAM_6_2_3 3 }
	{ WBRAM_6_0_4 3 }
	{ WBRAM_6_1_4 3 }
	{ WBRAM_6_2_4 3 }
	{ WBRAM_6_0_5 3 }
	{ WBRAM_6_1_5 3 }
	{ WBRAM_6_2_5 3 }
	{ WBRAM_6_0_6 3 }
	{ WBRAM_6_1_6 3 }
	{ WBRAM_6_2_6 3 }
	{ WBRAM_6_0_7 3 }
	{ WBRAM_6_1_7 3 }
	{ WBRAM_6_2_7 3 }
	{ OBRAM_7 2 }
	{ WBRAM_7_0_0 3 }
	{ WBRAM_7_1_0 3 }
	{ WBRAM_7_2_0 3 }
	{ WBRAM_7_0_1 3 }
	{ WBRAM_7_1_1 3 }
	{ WBRAM_7_2_1 3 }
	{ WBRAM_7_0_2 3 }
	{ WBRAM_7_1_2 3 }
	{ WBRAM_7_2_2 3 }
	{ WBRAM_7_0_3 3 }
	{ WBRAM_7_1_3 3 }
	{ WBRAM_7_2_3 3 }
	{ WBRAM_7_0_4 3 }
	{ WBRAM_7_1_4 3 }
	{ WBRAM_7_2_4 3 }
	{ WBRAM_7_0_5 3 }
	{ WBRAM_7_1_5 3 }
	{ WBRAM_7_2_5 3 }
	{ WBRAM_7_0_6 3 }
	{ WBRAM_7_1_6 3 }
	{ WBRAM_7_2_6 3 }
	{ WBRAM_7_0_7 3 }
	{ WBRAM_7_1_7 3 }
	{ WBRAM_7_2_7 3 }
	{ OBRAM_8 2 }
	{ WBRAM_8_0_0 3 }
	{ WBRAM_8_1_0 3 }
	{ WBRAM_8_2_0 3 }
	{ WBRAM_8_0_1 3 }
	{ WBRAM_8_1_1 3 }
	{ WBRAM_8_2_1 3 }
	{ WBRAM_8_0_2 3 }
	{ WBRAM_8_1_2 3 }
	{ WBRAM_8_2_2 3 }
	{ WBRAM_8_0_3 3 }
	{ WBRAM_8_1_3 3 }
	{ WBRAM_8_2_3 3 }
	{ WBRAM_8_0_4 3 }
	{ WBRAM_8_1_4 3 }
	{ WBRAM_8_2_4 3 }
	{ WBRAM_8_0_5 3 }
	{ WBRAM_8_1_5 3 }
	{ WBRAM_8_2_5 3 }
	{ WBRAM_8_0_6 3 }
	{ WBRAM_8_1_6 3 }
	{ WBRAM_8_2_6 3 }
	{ WBRAM_8_0_7 3 }
	{ WBRAM_8_1_7 3 }
	{ WBRAM_8_2_7 3 }
	{ OBRAM_9 2 }
	{ WBRAM_9_0_0 3 }
	{ WBRAM_9_1_0 3 }
	{ WBRAM_9_2_0 3 }
	{ WBRAM_9_0_1 3 }
	{ WBRAM_9_1_1 3 }
	{ WBRAM_9_2_1 3 }
	{ WBRAM_9_0_2 3 }
	{ WBRAM_9_1_2 3 }
	{ WBRAM_9_2_2 3 }
	{ WBRAM_9_0_3 3 }
	{ WBRAM_9_1_3 3 }
	{ WBRAM_9_2_3 3 }
	{ WBRAM_9_0_4 3 }
	{ WBRAM_9_1_4 3 }
	{ WBRAM_9_2_4 3 }
	{ WBRAM_9_0_5 3 }
	{ WBRAM_9_1_5 3 }
	{ WBRAM_9_2_5 3 }
	{ WBRAM_9_0_6 3 }
	{ WBRAM_9_1_6 3 }
	{ WBRAM_9_2_6 3 }
	{ WBRAM_9_0_7 3 }
	{ WBRAM_9_1_7 3 }
	{ WBRAM_9_2_7 3 }
	{ OBRAM_10 2 }
	{ WBRAM_10_0_0 3 }
	{ WBRAM_10_1_0 3 }
	{ WBRAM_10_2_0 3 }
	{ WBRAM_10_0_1 3 }
	{ WBRAM_10_1_1 3 }
	{ WBRAM_10_2_1 3 }
	{ WBRAM_10_0_2 3 }
	{ WBRAM_10_1_2 3 }
	{ WBRAM_10_2_2 3 }
	{ WBRAM_10_0_3 3 }
	{ WBRAM_10_1_3 3 }
	{ WBRAM_10_2_3 3 }
	{ WBRAM_10_0_4 3 }
	{ WBRAM_10_1_4 3 }
	{ WBRAM_10_2_4 3 }
	{ WBRAM_10_0_5 3 }
	{ WBRAM_10_1_5 3 }
	{ WBRAM_10_2_5 3 }
	{ WBRAM_10_0_6 3 }
	{ WBRAM_10_1_6 3 }
	{ WBRAM_10_2_6 3 }
	{ WBRAM_10_0_7 3 }
	{ WBRAM_10_1_7 3 }
	{ WBRAM_10_2_7 3 }
	{ OBRAM_11 2 }
	{ WBRAM_11_0_0 3 }
	{ WBRAM_11_1_0 3 }
	{ WBRAM_11_2_0 3 }
	{ WBRAM_11_0_1 3 }
	{ WBRAM_11_1_1 3 }
	{ WBRAM_11_2_1 3 }
	{ WBRAM_11_0_2 3 }
	{ WBRAM_11_1_2 3 }
	{ WBRAM_11_2_2 3 }
	{ WBRAM_11_0_3 3 }
	{ WBRAM_11_1_3 3 }
	{ WBRAM_11_2_3 3 }
	{ WBRAM_11_0_4 3 }
	{ WBRAM_11_1_4 3 }
	{ WBRAM_11_2_4 3 }
	{ WBRAM_11_0_5 3 }
	{ WBRAM_11_1_5 3 }
	{ WBRAM_11_2_5 3 }
	{ WBRAM_11_0_6 3 }
	{ WBRAM_11_1_6 3 }
	{ WBRAM_11_2_6 3 }
	{ WBRAM_11_0_7 3 }
	{ WBRAM_11_1_7 3 }
	{ WBRAM_11_2_7 3 }
	{ OBRAM_12 2 }
	{ WBRAM_12_0_0 3 }
	{ WBRAM_12_1_0 3 }
	{ WBRAM_12_2_0 3 }
	{ WBRAM_12_0_1 3 }
	{ WBRAM_12_1_1 3 }
	{ WBRAM_12_2_1 3 }
	{ WBRAM_12_0_2 3 }
	{ WBRAM_12_1_2 3 }
	{ WBRAM_12_2_2 3 }
	{ WBRAM_12_0_3 3 }
	{ WBRAM_12_1_3 3 }
	{ WBRAM_12_2_3 3 }
	{ WBRAM_12_0_4 3 }
	{ WBRAM_12_1_4 3 }
	{ WBRAM_12_2_4 3 }
	{ WBRAM_12_0_5 3 }
	{ WBRAM_12_1_5 3 }
	{ WBRAM_12_2_5 3 }
	{ WBRAM_12_0_6 3 }
	{ WBRAM_12_1_6 3 }
	{ WBRAM_12_2_6 3 }
	{ WBRAM_12_0_7 3 }
	{ WBRAM_12_1_7 3 }
	{ WBRAM_12_2_7 3 }
	{ OBRAM_13 2 }
	{ WBRAM_13_0_0 3 }
	{ WBRAM_13_1_0 3 }
	{ WBRAM_13_2_0 3 }
	{ WBRAM_13_0_1 3 }
	{ WBRAM_13_1_1 3 }
	{ WBRAM_13_2_1 3 }
	{ WBRAM_13_0_2 3 }
	{ WBRAM_13_1_2 3 }
	{ WBRAM_13_2_2 3 }
	{ WBRAM_13_0_3 3 }
	{ WBRAM_13_1_3 3 }
	{ WBRAM_13_2_3 3 }
	{ WBRAM_13_0_4 3 }
	{ WBRAM_13_1_4 3 }
	{ WBRAM_13_2_4 3 }
	{ WBRAM_13_0_5 3 }
	{ WBRAM_13_1_5 3 }
	{ WBRAM_13_2_5 3 }
	{ WBRAM_13_0_6 3 }
	{ WBRAM_13_1_6 3 }
	{ WBRAM_13_2_6 3 }
	{ WBRAM_13_0_7 3 }
	{ WBRAM_13_1_7 3 }
	{ WBRAM_13_2_7 3 }
	{ OBRAM_14 2 }
	{ WBRAM_14_0_0 3 }
	{ WBRAM_14_1_0 3 }
	{ WBRAM_14_2_0 3 }
	{ WBRAM_14_0_1 3 }
	{ WBRAM_14_1_1 3 }
	{ WBRAM_14_2_1 3 }
	{ WBRAM_14_0_2 3 }
	{ WBRAM_14_1_2 3 }
	{ WBRAM_14_2_2 3 }
	{ WBRAM_14_0_3 3 }
	{ WBRAM_14_1_3 3 }
	{ WBRAM_14_2_3 3 }
	{ WBRAM_14_0_4 3 }
	{ WBRAM_14_1_4 3 }
	{ WBRAM_14_2_4 3 }
	{ WBRAM_14_0_5 3 }
	{ WBRAM_14_1_5 3 }
	{ WBRAM_14_2_5 3 }
	{ WBRAM_14_0_6 3 }
	{ WBRAM_14_1_6 3 }
	{ WBRAM_14_2_6 3 }
	{ WBRAM_14_0_7 3 }
	{ WBRAM_14_1_7 3 }
	{ WBRAM_14_2_7 3 }
	{ OBRAM_15 2 }
	{ WBRAM_15_0_0 3 }
	{ WBRAM_15_1_0 3 }
	{ WBRAM_15_2_0 3 }
	{ WBRAM_15_0_1 3 }
	{ WBRAM_15_1_1 3 }
	{ WBRAM_15_2_1 3 }
	{ WBRAM_15_0_2 3 }
	{ WBRAM_15_1_2 3 }
	{ WBRAM_15_2_2 3 }
	{ WBRAM_15_0_3 3 }
	{ WBRAM_15_1_3 3 }
	{ WBRAM_15_2_3 3 }
	{ WBRAM_15_0_4 3 }
	{ WBRAM_15_1_4 3 }
	{ WBRAM_15_2_4 3 }
	{ WBRAM_15_0_5 3 }
	{ WBRAM_15_1_5 3 }
	{ WBRAM_15_2_5 3 }
	{ WBRAM_15_0_6 3 }
	{ WBRAM_15_1_6 3 }
	{ WBRAM_15_2_6 3 }
	{ WBRAM_15_0_7 3 }
	{ WBRAM_15_1_7 3 }
	{ WBRAM_15_2_7 3 }
	{ GBRAM_0 2 }
	{ GBRAM_1 2 }
	{ GBRAM_2 2 }
	{ GBRAM_3 2 }
	{ GBRAM_4 2 }
	{ GBRAM_5 2 }
	{ GBRAM_6 2 }
	{ GBRAM_7 2 }
	{ GBRAM_8 2 }
	{ GBRAM_9 2 }
	{ GBRAM_10 2 }
	{ GBRAM_11 2 }
	{ GBRAM_12 2 }
	{ GBRAM_13 2 }
	{ GBRAM_14 2 }
	{ GBRAM_15 2 }
}
