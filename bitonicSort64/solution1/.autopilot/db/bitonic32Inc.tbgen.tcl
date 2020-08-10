set moduleName bitonic32Inc
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {bitonic32Inc}
set C_modelType { int 1024 }
set C_modelArgList {
	{ in1_0_V_read int 32 regular  }
	{ in1_1_V_read int 32 regular  }
	{ in1_2_V_read int 32 regular  }
	{ in1_3_V_read int 32 regular  }
	{ in1_4_V_read int 32 regular  }
	{ in1_5_V_read int 32 regular  }
	{ in1_6_V_read int 32 regular  }
	{ in1_7_V_read int 32 regular  }
	{ in1_8_V_read int 32 regular  }
	{ in1_9_V_read int 32 regular  }
	{ in1_10_V_read int 32 regular  }
	{ in1_11_V_read int 32 regular  }
	{ in1_12_V_read int 32 regular  }
	{ in1_13_V_read int 32 regular  }
	{ in1_14_V_read int 32 regular  }
	{ in1_15_V_read int 32 regular  }
	{ in1_16_V_read int 32 regular  }
	{ in1_17_V_read int 32 regular  }
	{ in1_18_V_read int 32 regular  }
	{ in1_19_V_read int 32 regular  }
	{ in1_20_V_read int 32 regular  }
	{ in1_21_V_read int 32 regular  }
	{ in1_22_V_read int 32 regular  }
	{ in1_23_V_read int 32 regular  }
	{ in1_24_V_read int 32 regular  }
	{ in1_25_V_read int 32 regular  }
	{ in1_26_V_read int 32 regular  }
	{ in1_27_V_read int 32 regular  }
	{ in1_28_V_read int 32 regular  }
	{ in1_29_V_read int 32 regular  }
	{ in1_30_V_read int 32 regular  }
	{ in1_31_V_read int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in1_0_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_1_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_2_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_3_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_4_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_5_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_6_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_7_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_8_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_9_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_10_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_11_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_12_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_13_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_14_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_15_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_16_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_17_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_18_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_19_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_20_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_21_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_22_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_23_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_24_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_25_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_26_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_27_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_28_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_29_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_30_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in1_31_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 1024} ]}
# RTL Port declarations: 
set portNum 70
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in1_0_V_read sc_in sc_lv 32 signal 0 } 
	{ in1_1_V_read sc_in sc_lv 32 signal 1 } 
	{ in1_2_V_read sc_in sc_lv 32 signal 2 } 
	{ in1_3_V_read sc_in sc_lv 32 signal 3 } 
	{ in1_4_V_read sc_in sc_lv 32 signal 4 } 
	{ in1_5_V_read sc_in sc_lv 32 signal 5 } 
	{ in1_6_V_read sc_in sc_lv 32 signal 6 } 
	{ in1_7_V_read sc_in sc_lv 32 signal 7 } 
	{ in1_8_V_read sc_in sc_lv 32 signal 8 } 
	{ in1_9_V_read sc_in sc_lv 32 signal 9 } 
	{ in1_10_V_read sc_in sc_lv 32 signal 10 } 
	{ in1_11_V_read sc_in sc_lv 32 signal 11 } 
	{ in1_12_V_read sc_in sc_lv 32 signal 12 } 
	{ in1_13_V_read sc_in sc_lv 32 signal 13 } 
	{ in1_14_V_read sc_in sc_lv 32 signal 14 } 
	{ in1_15_V_read sc_in sc_lv 32 signal 15 } 
	{ in1_16_V_read sc_in sc_lv 32 signal 16 } 
	{ in1_17_V_read sc_in sc_lv 32 signal 17 } 
	{ in1_18_V_read sc_in sc_lv 32 signal 18 } 
	{ in1_19_V_read sc_in sc_lv 32 signal 19 } 
	{ in1_20_V_read sc_in sc_lv 32 signal 20 } 
	{ in1_21_V_read sc_in sc_lv 32 signal 21 } 
	{ in1_22_V_read sc_in sc_lv 32 signal 22 } 
	{ in1_23_V_read sc_in sc_lv 32 signal 23 } 
	{ in1_24_V_read sc_in sc_lv 32 signal 24 } 
	{ in1_25_V_read sc_in sc_lv 32 signal 25 } 
	{ in1_26_V_read sc_in sc_lv 32 signal 26 } 
	{ in1_27_V_read sc_in sc_lv 32 signal 27 } 
	{ in1_28_V_read sc_in sc_lv 32 signal 28 } 
	{ in1_29_V_read sc_in sc_lv 32 signal 29 } 
	{ in1_30_V_read sc_in sc_lv 32 signal 30 } 
	{ in1_31_V_read sc_in sc_lv 32 signal 31 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
	{ ap_return_10 sc_out sc_lv 32 signal -1 } 
	{ ap_return_11 sc_out sc_lv 32 signal -1 } 
	{ ap_return_12 sc_out sc_lv 32 signal -1 } 
	{ ap_return_13 sc_out sc_lv 32 signal -1 } 
	{ ap_return_14 sc_out sc_lv 32 signal -1 } 
	{ ap_return_15 sc_out sc_lv 32 signal -1 } 
	{ ap_return_16 sc_out sc_lv 32 signal -1 } 
	{ ap_return_17 sc_out sc_lv 32 signal -1 } 
	{ ap_return_18 sc_out sc_lv 32 signal -1 } 
	{ ap_return_19 sc_out sc_lv 32 signal -1 } 
	{ ap_return_20 sc_out sc_lv 32 signal -1 } 
	{ ap_return_21 sc_out sc_lv 32 signal -1 } 
	{ ap_return_22 sc_out sc_lv 32 signal -1 } 
	{ ap_return_23 sc_out sc_lv 32 signal -1 } 
	{ ap_return_24 sc_out sc_lv 32 signal -1 } 
	{ ap_return_25 sc_out sc_lv 32 signal -1 } 
	{ ap_return_26 sc_out sc_lv 32 signal -1 } 
	{ ap_return_27 sc_out sc_lv 32 signal -1 } 
	{ ap_return_28 sc_out sc_lv 32 signal -1 } 
	{ ap_return_29 sc_out sc_lv 32 signal -1 } 
	{ ap_return_30 sc_out sc_lv 32 signal -1 } 
	{ ap_return_31 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in1_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_0_V_read", "role": "default" }} , 
 	{ "name": "in1_1_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_1_V_read", "role": "default" }} , 
 	{ "name": "in1_2_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_2_V_read", "role": "default" }} , 
 	{ "name": "in1_3_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_3_V_read", "role": "default" }} , 
 	{ "name": "in1_4_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_4_V_read", "role": "default" }} , 
 	{ "name": "in1_5_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_5_V_read", "role": "default" }} , 
 	{ "name": "in1_6_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_6_V_read", "role": "default" }} , 
 	{ "name": "in1_7_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_7_V_read", "role": "default" }} , 
 	{ "name": "in1_8_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_8_V_read", "role": "default" }} , 
 	{ "name": "in1_9_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_9_V_read", "role": "default" }} , 
 	{ "name": "in1_10_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_10_V_read", "role": "default" }} , 
 	{ "name": "in1_11_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_11_V_read", "role": "default" }} , 
 	{ "name": "in1_12_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_12_V_read", "role": "default" }} , 
 	{ "name": "in1_13_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_13_V_read", "role": "default" }} , 
 	{ "name": "in1_14_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_14_V_read", "role": "default" }} , 
 	{ "name": "in1_15_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_15_V_read", "role": "default" }} , 
 	{ "name": "in1_16_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_16_V_read", "role": "default" }} , 
 	{ "name": "in1_17_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_17_V_read", "role": "default" }} , 
 	{ "name": "in1_18_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_18_V_read", "role": "default" }} , 
 	{ "name": "in1_19_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_19_V_read", "role": "default" }} , 
 	{ "name": "in1_20_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_20_V_read", "role": "default" }} , 
 	{ "name": "in1_21_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_21_V_read", "role": "default" }} , 
 	{ "name": "in1_22_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_22_V_read", "role": "default" }} , 
 	{ "name": "in1_23_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_23_V_read", "role": "default" }} , 
 	{ "name": "in1_24_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_24_V_read", "role": "default" }} , 
 	{ "name": "in1_25_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_25_V_read", "role": "default" }} , 
 	{ "name": "in1_26_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_26_V_read", "role": "default" }} , 
 	{ "name": "in1_27_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_27_V_read", "role": "default" }} , 
 	{ "name": "in1_28_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_28_V_read", "role": "default" }} , 
 	{ "name": "in1_29_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_29_V_read", "role": "default" }} , 
 	{ "name": "in1_30_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_30_V_read", "role": "default" }} , 
 	{ "name": "in1_31_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1_31_V_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "bitonic32Inc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "9",
		"VariableLatency" : "0", "ExactLatency" : "9", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in1_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in1_31_V_read", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	bitonic32Inc {
		in1_0_V_read {Type I LastRead 0 FirstWrite -1}
		in1_1_V_read {Type I LastRead 0 FirstWrite -1}
		in1_2_V_read {Type I LastRead 0 FirstWrite -1}
		in1_3_V_read {Type I LastRead 0 FirstWrite -1}
		in1_4_V_read {Type I LastRead 0 FirstWrite -1}
		in1_5_V_read {Type I LastRead 0 FirstWrite -1}
		in1_6_V_read {Type I LastRead 0 FirstWrite -1}
		in1_7_V_read {Type I LastRead 0 FirstWrite -1}
		in1_8_V_read {Type I LastRead 0 FirstWrite -1}
		in1_9_V_read {Type I LastRead 0 FirstWrite -1}
		in1_10_V_read {Type I LastRead 0 FirstWrite -1}
		in1_11_V_read {Type I LastRead 0 FirstWrite -1}
		in1_12_V_read {Type I LastRead 0 FirstWrite -1}
		in1_13_V_read {Type I LastRead 0 FirstWrite -1}
		in1_14_V_read {Type I LastRead 0 FirstWrite -1}
		in1_15_V_read {Type I LastRead 0 FirstWrite -1}
		in1_16_V_read {Type I LastRead 0 FirstWrite -1}
		in1_17_V_read {Type I LastRead 0 FirstWrite -1}
		in1_18_V_read {Type I LastRead 0 FirstWrite -1}
		in1_19_V_read {Type I LastRead 0 FirstWrite -1}
		in1_20_V_read {Type I LastRead 0 FirstWrite -1}
		in1_21_V_read {Type I LastRead 0 FirstWrite -1}
		in1_22_V_read {Type I LastRead 0 FirstWrite -1}
		in1_23_V_read {Type I LastRead 0 FirstWrite -1}
		in1_24_V_read {Type I LastRead 0 FirstWrite -1}
		in1_25_V_read {Type I LastRead 0 FirstWrite -1}
		in1_26_V_read {Type I LastRead 0 FirstWrite -1}
		in1_27_V_read {Type I LastRead 0 FirstWrite -1}
		in1_28_V_read {Type I LastRead 0 FirstWrite -1}
		in1_29_V_read {Type I LastRead 0 FirstWrite -1}
		in1_30_V_read {Type I LastRead 0 FirstWrite -1}
		in1_31_V_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "9", "Max" : "9"}
	, {"Name" : "Interval", "Min" : "9", "Max" : "9"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in1_0_V_read { ap_none {  { in1_0_V_read in_data 0 32 } } }
	in1_1_V_read { ap_none {  { in1_1_V_read in_data 0 32 } } }
	in1_2_V_read { ap_none {  { in1_2_V_read in_data 0 32 } } }
	in1_3_V_read { ap_none {  { in1_3_V_read in_data 0 32 } } }
	in1_4_V_read { ap_none {  { in1_4_V_read in_data 0 32 } } }
	in1_5_V_read { ap_none {  { in1_5_V_read in_data 0 32 } } }
	in1_6_V_read { ap_none {  { in1_6_V_read in_data 0 32 } } }
	in1_7_V_read { ap_none {  { in1_7_V_read in_data 0 32 } } }
	in1_8_V_read { ap_none {  { in1_8_V_read in_data 0 32 } } }
	in1_9_V_read { ap_none {  { in1_9_V_read in_data 0 32 } } }
	in1_10_V_read { ap_none {  { in1_10_V_read in_data 0 32 } } }
	in1_11_V_read { ap_none {  { in1_11_V_read in_data 0 32 } } }
	in1_12_V_read { ap_none {  { in1_12_V_read in_data 0 32 } } }
	in1_13_V_read { ap_none {  { in1_13_V_read in_data 0 32 } } }
	in1_14_V_read { ap_none {  { in1_14_V_read in_data 0 32 } } }
	in1_15_V_read { ap_none {  { in1_15_V_read in_data 0 32 } } }
	in1_16_V_read { ap_none {  { in1_16_V_read in_data 0 32 } } }
	in1_17_V_read { ap_none {  { in1_17_V_read in_data 0 32 } } }
	in1_18_V_read { ap_none {  { in1_18_V_read in_data 0 32 } } }
	in1_19_V_read { ap_none {  { in1_19_V_read in_data 0 32 } } }
	in1_20_V_read { ap_none {  { in1_20_V_read in_data 0 32 } } }
	in1_21_V_read { ap_none {  { in1_21_V_read in_data 0 32 } } }
	in1_22_V_read { ap_none {  { in1_22_V_read in_data 0 32 } } }
	in1_23_V_read { ap_none {  { in1_23_V_read in_data 0 32 } } }
	in1_24_V_read { ap_none {  { in1_24_V_read in_data 0 32 } } }
	in1_25_V_read { ap_none {  { in1_25_V_read in_data 0 32 } } }
	in1_26_V_read { ap_none {  { in1_26_V_read in_data 0 32 } } }
	in1_27_V_read { ap_none {  { in1_27_V_read in_data 0 32 } } }
	in1_28_V_read { ap_none {  { in1_28_V_read in_data 0 32 } } }
	in1_29_V_read { ap_none {  { in1_29_V_read in_data 0 32 } } }
	in1_30_V_read { ap_none {  { in1_30_V_read in_data 0 32 } } }
	in1_31_V_read { ap_none {  { in1_31_V_read in_data 0 32 } } }
}
