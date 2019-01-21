// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _passthrough_HH_
#define _passthrough_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct passthrough : public sc_module {
    // Port declarations 28
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_in< sc_lv<8> > input_mat_data_strea_dout;
    sc_in< sc_logic > input_mat_data_strea_empty_n;
    sc_out< sc_logic > input_mat_data_strea_read;
    sc_in< sc_lv<8> > input_mat_data_strea_3_dout;
    sc_in< sc_logic > input_mat_data_strea_3_empty_n;
    sc_out< sc_logic > input_mat_data_strea_3_read;
    sc_in< sc_lv<8> > input_mat_data_strea_4_dout;
    sc_in< sc_logic > input_mat_data_strea_4_empty_n;
    sc_out< sc_logic > input_mat_data_strea_4_read;
    sc_out< sc_lv<8> > output_mat_data_stre_din;
    sc_in< sc_logic > output_mat_data_stre_full_n;
    sc_out< sc_logic > output_mat_data_stre_write;
    sc_out< sc_lv<8> > output_mat_data_stre_3_din;
    sc_in< sc_logic > output_mat_data_stre_3_full_n;
    sc_out< sc_logic > output_mat_data_stre_3_write;
    sc_out< sc_lv<8> > output_mat_data_stre_4_din;
    sc_in< sc_logic > output_mat_data_stre_4_full_n;
    sc_out< sc_logic > output_mat_data_stre_4_write;


    // Module declarations
    passthrough(sc_module_name name);
    SC_HAS_PROCESS(passthrough);

    ~passthrough();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > input_mat_data_strea_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond_fu_210_p2;
    sc_signal< sc_logic > input_mat_data_strea_3_blk_n;
    sc_signal< sc_logic > input_mat_data_strea_4_blk_n;
    sc_signal< sc_logic > output_mat_data_stre_blk_n;
    sc_signal< sc_logic > output_mat_data_stre_3_blk_n;
    sc_signal< sc_logic > output_mat_data_stre_4_blk_n;
    sc_signal< sc_lv<10> > i_1_fu_204_p2;
    sc_signal< sc_lv<10> > i_1_reg_225;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<11> > j_1_fu_216_p2;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<10> > i_reg_176;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<11> > j_reg_187;
    sc_signal< sc_lv<1> > exitcond1_fu_198_p2;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<10> ap_const_lv10_2D0;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<11> ap_const_lv11_438;
    static const sc_lv<11> ap_const_lv11_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_state1();
    void thread_ap_block_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_198_p2();
    void thread_exitcond_fu_210_p2();
    void thread_i_1_fu_204_p2();
    void thread_input_mat_data_strea_3_blk_n();
    void thread_input_mat_data_strea_3_read();
    void thread_input_mat_data_strea_4_blk_n();
    void thread_input_mat_data_strea_4_read();
    void thread_input_mat_data_strea_blk_n();
    void thread_input_mat_data_strea_read();
    void thread_internal_ap_ready();
    void thread_j_1_fu_216_p2();
    void thread_output_mat_data_stre_3_blk_n();
    void thread_output_mat_data_stre_3_din();
    void thread_output_mat_data_stre_3_write();
    void thread_output_mat_data_stre_4_blk_n();
    void thread_output_mat_data_stre_4_din();
    void thread_output_mat_data_stre_4_write();
    void thread_output_mat_data_stre_blk_n();
    void thread_output_mat_data_stre_din();
    void thread_output_mat_data_stre_write();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif