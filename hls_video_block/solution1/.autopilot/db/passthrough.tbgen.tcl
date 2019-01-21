set moduleName passthrough
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {passthrough}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_mat_data_strea int 8 regular {fifo 0 volatile }  }
	{ input_mat_data_strea_3 int 8 regular {fifo 0 volatile }  }
	{ input_mat_data_strea_4 int 8 regular {fifo 0 volatile }  }
	{ output_mat_data_stre int 8 regular {fifo 1 volatile }  }
	{ output_mat_data_stre_3 int 8 regular {fifo 1 volatile }  }
	{ output_mat_data_stre_4 int 8 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_mat_data_strea", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_mat_data_strea_3", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_mat_data_strea_4", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_mat_data_stre", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_mat_data_stre_3", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_mat_data_stre_4", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ start_full_n sc_in sc_logic 1 signal -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ start_out sc_out sc_logic 1 signal -1 } 
	{ start_write sc_out sc_logic 1 signal -1 } 
	{ input_mat_data_strea_dout sc_in sc_lv 8 signal 0 } 
	{ input_mat_data_strea_empty_n sc_in sc_logic 1 signal 0 } 
	{ input_mat_data_strea_read sc_out sc_logic 1 signal 0 } 
	{ input_mat_data_strea_3_dout sc_in sc_lv 8 signal 1 } 
	{ input_mat_data_strea_3_empty_n sc_in sc_logic 1 signal 1 } 
	{ input_mat_data_strea_3_read sc_out sc_logic 1 signal 1 } 
	{ input_mat_data_strea_4_dout sc_in sc_lv 8 signal 2 } 
	{ input_mat_data_strea_4_empty_n sc_in sc_logic 1 signal 2 } 
	{ input_mat_data_strea_4_read sc_out sc_logic 1 signal 2 } 
	{ output_mat_data_stre_din sc_out sc_lv 8 signal 3 } 
	{ output_mat_data_stre_full_n sc_in sc_logic 1 signal 3 } 
	{ output_mat_data_stre_write sc_out sc_logic 1 signal 3 } 
	{ output_mat_data_stre_3_din sc_out sc_lv 8 signal 4 } 
	{ output_mat_data_stre_3_full_n sc_in sc_logic 1 signal 4 } 
	{ output_mat_data_stre_3_write sc_out sc_logic 1 signal 4 } 
	{ output_mat_data_stre_4_din sc_out sc_lv 8 signal 5 } 
	{ output_mat_data_stre_4_full_n sc_in sc_logic 1 signal 5 } 
	{ output_mat_data_stre_4_write sc_out sc_logic 1 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "start_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_full_n", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "start_out", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_out", "role": "default" }} , 
 	{ "name": "start_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "start_write", "role": "default" }} , 
 	{ "name": "input_mat_data_strea_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_mat_data_strea", "role": "dout" }} , 
 	{ "name": "input_mat_data_strea_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea", "role": "empty_n" }} , 
 	{ "name": "input_mat_data_strea_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea", "role": "read" }} , 
 	{ "name": "input_mat_data_strea_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_mat_data_strea_3", "role": "dout" }} , 
 	{ "name": "input_mat_data_strea_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea_3", "role": "empty_n" }} , 
 	{ "name": "input_mat_data_strea_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea_3", "role": "read" }} , 
 	{ "name": "input_mat_data_strea_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_mat_data_strea_4", "role": "dout" }} , 
 	{ "name": "input_mat_data_strea_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea_4", "role": "empty_n" }} , 
 	{ "name": "input_mat_data_strea_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_mat_data_strea_4", "role": "read" }} , 
 	{ "name": "output_mat_data_stre_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_mat_data_stre", "role": "din" }} , 
 	{ "name": "output_mat_data_stre_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre", "role": "full_n" }} , 
 	{ "name": "output_mat_data_stre_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre", "role": "write" }} , 
 	{ "name": "output_mat_data_stre_3_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_mat_data_stre_3", "role": "din" }} , 
 	{ "name": "output_mat_data_stre_3_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre_3", "role": "full_n" }} , 
 	{ "name": "output_mat_data_stre_3_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre_3", "role": "write" }} , 
 	{ "name": "output_mat_data_stre_4_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_mat_data_stre_4", "role": "din" }} , 
 	{ "name": "output_mat_data_stre_4_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre_4", "role": "full_n" }} , 
 	{ "name": "output_mat_data_stre_4_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_mat_data_stre_4", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "passthrough",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "779041", "EstimateLatencyMax" : "779041",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_mat_data_strea", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "input_mat_data_strea_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "input_mat_data_strea_3", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "input_mat_data_strea_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "input_mat_data_strea_4", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "input_mat_data_strea_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "output_mat_data_stre", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "output_mat_data_stre_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "output_mat_data_stre_3", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "output_mat_data_stre_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "output_mat_data_stre_4", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "output_mat_data_stre_4_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	passthrough {
		input_mat_data_strea {Type I LastRead 2 FirstWrite -1}
		input_mat_data_strea_3 {Type I LastRead 2 FirstWrite -1}
		input_mat_data_strea_4 {Type I LastRead 2 FirstWrite -1}
		output_mat_data_stre {Type O LastRead -1 FirstWrite 2}
		output_mat_data_stre_3 {Type O LastRead -1 FirstWrite 2}
		output_mat_data_stre_4 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "779041", "Max" : "779041"}
	, {"Name" : "Interval", "Min" : "779041", "Max" : "779041"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_mat_data_strea { ap_fifo {  { input_mat_data_strea_dout fifo_data 0 8 }  { input_mat_data_strea_empty_n fifo_status 0 1 }  { input_mat_data_strea_read fifo_update 1 1 } } }
	input_mat_data_strea_3 { ap_fifo {  { input_mat_data_strea_3_dout fifo_data 0 8 }  { input_mat_data_strea_3_empty_n fifo_status 0 1 }  { input_mat_data_strea_3_read fifo_update 1 1 } } }
	input_mat_data_strea_4 { ap_fifo {  { input_mat_data_strea_4_dout fifo_data 0 8 }  { input_mat_data_strea_4_empty_n fifo_status 0 1 }  { input_mat_data_strea_4_read fifo_update 1 1 } } }
	output_mat_data_stre { ap_fifo {  { output_mat_data_stre_din fifo_data 1 8 }  { output_mat_data_stre_full_n fifo_status 0 1 }  { output_mat_data_stre_write fifo_update 1 1 } } }
	output_mat_data_stre_3 { ap_fifo {  { output_mat_data_stre_3_din fifo_data 1 8 }  { output_mat_data_stre_3_full_n fifo_status 0 1 }  { output_mat_data_stre_3_write fifo_update 1 1 } } }
	output_mat_data_stre_4 { ap_fifo {  { output_mat_data_stre_4_din fifo_data 1 8 }  { output_mat_data_stre_4_full_n fifo_status 0 1 }  { output_mat_data_stre_4_write fifo_update 1 1 } } }
}
