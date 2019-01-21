// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Mat2AXIvideo_HH_
#define _Mat2AXIvideo_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct Mat2AXIvideo : public sc_module {
    // Port declarations 25
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > img_data_stream_0_V_dout;
    sc_in< sc_logic > img_data_stream_0_V_empty_n;
    sc_out< sc_logic > img_data_stream_0_V_read;
    sc_in< sc_lv<8> > img_data_stream_1_V_dout;
    sc_in< sc_logic > img_data_stream_1_V_empty_n;
    sc_out< sc_logic > img_data_stream_1_V_read;
    sc_in< sc_lv<8> > img_data_stream_2_V_dout;
    sc_in< sc_logic > img_data_stream_2_V_empty_n;
    sc_out< sc_logic > img_data_stream_2_V_read;
    sc_out< sc_lv<24> > OUTPUT_STREAM_TDATA;
    sc_out< sc_logic > OUTPUT_STREAM_TVALID;
    sc_in< sc_logic > OUTPUT_STREAM_TREADY;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TKEEP;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TSTRB;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TUSER;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TLAST;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TID;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TDEST;


    // Module declarations
    Mat2AXIvideo(sc_module_name name);
    SC_HAS_PROCESS(Mat2AXIvideo);

    ~Mat2AXIvideo();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<24> > AXI_video_strm_V_data_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_ack_out;
    sc_signal< sc_lv<24> > AXI_video_strm_V_data_V_1_payload_A;
    sc_signal< sc_lv<24> > AXI_video_strm_V_data_V_1_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_sel;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_data_V_1_state;
    sc_signal< sc_logic > AXI_video_strm_V_data_V_1_state_cmp_full;
    sc_signal< sc_lv<3> > AXI_video_strm_V_keep_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_ack_out;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_keep_V_1_sel;
    sc_signal< sc_lv<2> > AXI_video_strm_V_keep_V_1_state;
    sc_signal< sc_lv<3> > AXI_video_strm_V_strb_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_ack_out;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_strb_V_1_sel;
    sc_signal< sc_lv<2> > AXI_video_strm_V_strb_V_1_state;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_ack_out;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_1_payload_A;
    sc_signal< sc_lv<1> > AXI_video_strm_V_user_V_1_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_sel;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_user_V_1_state;
    sc_signal< sc_logic > AXI_video_strm_V_user_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_ack_out;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_1_payload_A;
    sc_signal< sc_lv<1> > AXI_video_strm_V_last_V_1_payload_B;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_sel_wr;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_sel;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_load_A;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_load_B;
    sc_signal< sc_lv<2> > AXI_video_strm_V_last_V_1_state;
    sc_signal< sc_logic > AXI_video_strm_V_last_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > AXI_video_strm_V_id_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_ack_out;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_id_V_1_sel;
    sc_signal< sc_lv<2> > AXI_video_strm_V_id_V_1_state;
    sc_signal< sc_lv<1> > AXI_video_strm_V_dest_V_1_data_out;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_vld_in;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_vld_out;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_ack_in;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_ack_out;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_sel_rd;
    sc_signal< sc_logic > AXI_video_strm_V_dest_V_1_sel;
    sc_signal< sc_lv<2> > AXI_video_strm_V_dest_V_1_state;
    sc_signal< sc_logic > img_data_stream_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > exitcond_reg_238;
    sc_signal< sc_logic > img_data_stream_1_V_blk_n;
    sc_signal< sc_logic > img_data_stream_2_V_blk_n;
    sc_signal< sc_logic > OUTPUT_STREAM_TDATA_blk_n;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<1> > exitcond_reg_238_pp0_iter1_reg;
    sc_signal< sc_lv<11> > t_V_1_reg_156;
    sc_signal< sc_lv<1> > exitcond1_fu_172_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<10> > i_V_fu_178_p2;
    sc_signal< sc_lv<10> > i_V_reg_233;
    sc_signal< sc_lv<1> > exitcond_fu_184_p2;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<11> > j_V_fu_190_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > axi_last_V_fu_196_p2;
    sc_signal< sc_lv<1> > axi_last_V_reg_247;
    sc_signal< sc_lv<24> > tmp_data_V_fu_206_p4;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state3;
    sc_signal< sc_lv<10> > t_V_reg_145;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > tmp_user_V_fu_94;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<3> ap_const_lv3_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_2D0;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<11> ap_const_lv11_500;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<11> ap_const_lv11_4FF;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_AXI_video_strm_V_data_V_1_ack_in();
    void thread_AXI_video_strm_V_data_V_1_ack_out();
    void thread_AXI_video_strm_V_data_V_1_data_out();
    void thread_AXI_video_strm_V_data_V_1_load_A();
    void thread_AXI_video_strm_V_data_V_1_load_B();
    void thread_AXI_video_strm_V_data_V_1_sel();
    void thread_AXI_video_strm_V_data_V_1_state_cmp_full();
    void thread_AXI_video_strm_V_data_V_1_vld_in();
    void thread_AXI_video_strm_V_data_V_1_vld_out();
    void thread_AXI_video_strm_V_dest_V_1_ack_in();
    void thread_AXI_video_strm_V_dest_V_1_ack_out();
    void thread_AXI_video_strm_V_dest_V_1_data_out();
    void thread_AXI_video_strm_V_dest_V_1_sel();
    void thread_AXI_video_strm_V_dest_V_1_vld_in();
    void thread_AXI_video_strm_V_dest_V_1_vld_out();
    void thread_AXI_video_strm_V_id_V_1_ack_in();
    void thread_AXI_video_strm_V_id_V_1_ack_out();
    void thread_AXI_video_strm_V_id_V_1_data_out();
    void thread_AXI_video_strm_V_id_V_1_sel();
    void thread_AXI_video_strm_V_id_V_1_vld_in();
    void thread_AXI_video_strm_V_id_V_1_vld_out();
    void thread_AXI_video_strm_V_keep_V_1_ack_in();
    void thread_AXI_video_strm_V_keep_V_1_ack_out();
    void thread_AXI_video_strm_V_keep_V_1_data_out();
    void thread_AXI_video_strm_V_keep_V_1_sel();
    void thread_AXI_video_strm_V_keep_V_1_vld_in();
    void thread_AXI_video_strm_V_keep_V_1_vld_out();
    void thread_AXI_video_strm_V_last_V_1_ack_in();
    void thread_AXI_video_strm_V_last_V_1_ack_out();
    void thread_AXI_video_strm_V_last_V_1_data_out();
    void thread_AXI_video_strm_V_last_V_1_load_A();
    void thread_AXI_video_strm_V_last_V_1_load_B();
    void thread_AXI_video_strm_V_last_V_1_sel();
    void thread_AXI_video_strm_V_last_V_1_state_cmp_full();
    void thread_AXI_video_strm_V_last_V_1_vld_in();
    void thread_AXI_video_strm_V_last_V_1_vld_out();
    void thread_AXI_video_strm_V_strb_V_1_ack_in();
    void thread_AXI_video_strm_V_strb_V_1_ack_out();
    void thread_AXI_video_strm_V_strb_V_1_data_out();
    void thread_AXI_video_strm_V_strb_V_1_sel();
    void thread_AXI_video_strm_V_strb_V_1_vld_in();
    void thread_AXI_video_strm_V_strb_V_1_vld_out();
    void thread_AXI_video_strm_V_user_V_1_ack_in();
    void thread_AXI_video_strm_V_user_V_1_ack_out();
    void thread_AXI_video_strm_V_user_V_1_data_out();
    void thread_AXI_video_strm_V_user_V_1_load_A();
    void thread_AXI_video_strm_V_user_V_1_load_B();
    void thread_AXI_video_strm_V_user_V_1_sel();
    void thread_AXI_video_strm_V_user_V_1_state_cmp_full();
    void thread_AXI_video_strm_V_user_V_1_vld_in();
    void thread_AXI_video_strm_V_user_V_1_vld_out();
    void thread_OUTPUT_STREAM_TDATA();
    void thread_OUTPUT_STREAM_TDATA_blk_n();
    void thread_OUTPUT_STREAM_TDEST();
    void thread_OUTPUT_STREAM_TID();
    void thread_OUTPUT_STREAM_TKEEP();
    void thread_OUTPUT_STREAM_TLAST();
    void thread_OUTPUT_STREAM_TSTRB();
    void thread_OUTPUT_STREAM_TUSER();
    void thread_OUTPUT_STREAM_TVALID();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_block_state3_pp0_stage0_iter0();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_block_state5_io();
    void thread_ap_block_state5_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state3();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_axi_last_V_fu_196_p2();
    void thread_exitcond1_fu_172_p2();
    void thread_exitcond_fu_184_p2();
    void thread_i_V_fu_178_p2();
    void thread_img_data_stream_0_V_blk_n();
    void thread_img_data_stream_0_V_read();
    void thread_img_data_stream_1_V_blk_n();
    void thread_img_data_stream_1_V_read();
    void thread_img_data_stream_2_V_blk_n();
    void thread_img_data_stream_2_V_read();
    void thread_j_V_fu_190_p2();
    void thread_tmp_data_V_fu_206_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
