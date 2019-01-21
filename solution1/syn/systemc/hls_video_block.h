// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _hls_video_block_HH_
#define _hls_video_block_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Block_proc.h"
#include "AXIvideo2Mat.h"
#include "CvtColor.h"
#include "hls_2DFilter.h"
#include "CvtColor_1.h"
#include "Mat2AXIvideo.h"
#include "fifo_w11_d2_A.h"
#include "fifo_w12_d2_A.h"
#include "fifo_w8_d2_A.h"
#include "start_for_CvtColog8j.h"
#include "start_for_hls_2DFhbi.h"
#include "start_for_CvtColoibs.h"
#include "start_for_Mat2AXIjbC.h"

namespace ap_rtl {

struct hls_video_block : public sc_module {
    // Port declarations 20
    sc_in< sc_lv<24> > INPUT_STREAM_TDATA;
    sc_in< sc_lv<3> > INPUT_STREAM_TKEEP;
    sc_in< sc_lv<3> > INPUT_STREAM_TSTRB;
    sc_in< sc_lv<1> > INPUT_STREAM_TUSER;
    sc_in< sc_lv<1> > INPUT_STREAM_TLAST;
    sc_in< sc_lv<1> > INPUT_STREAM_TID;
    sc_in< sc_lv<1> > INPUT_STREAM_TDEST;
    sc_out< sc_lv<24> > OUTPUT_STREAM_TDATA;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TKEEP;
    sc_out< sc_lv<3> > OUTPUT_STREAM_TSTRB;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TUSER;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TLAST;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TID;
    sc_out< sc_lv<1> > OUTPUT_STREAM_TDEST;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > INPUT_STREAM_TVALID;
    sc_out< sc_logic > INPUT_STREAM_TREADY;
    sc_out< sc_logic > OUTPUT_STREAM_TVALID;
    sc_in< sc_logic > OUTPUT_STREAM_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    hls_video_block(sc_module_name name);
    SC_HAS_PROCESS(hls_video_block);

    ~hls_video_block();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Block_proc* Block_proc_U0;
    AXIvideo2Mat* AXIvideo2Mat_U0;
    CvtColor* CvtColor_U0;
    hls_2DFilter* hls_2DFilter_U0;
    CvtColor_1* CvtColor_1_U0;
    Mat2AXIvideo* Mat2AXIvideo_U0;
    fifo_w11_d2_A* input_mat_rows_V_c_U;
    fifo_w12_d2_A* input_mat_cols_V_c_U;
    fifo_w8_d2_A* input_mat_data_strea_U;
    fifo_w8_d2_A* input_mat_data_strea_1_U;
    fifo_w8_d2_A* input_mat_data_strea_2_U;
    fifo_w11_d2_A* input_mat_rows_V_c10_U;
    fifo_w12_d2_A* input_mat_cols_V_c11_U;
    fifo_w8_d2_A* im_1_data_stream_0_s_U;
    fifo_w8_d2_A* im_2_data_stream_0_s_U;
    fifo_w8_d2_A* output_mat_data_stre_U;
    fifo_w8_d2_A* output_mat_data_stre_1_U;
    fifo_w8_d2_A* output_mat_data_stre_2_U;
    start_for_CvtColog8j* start_for_CvtColog8j_U;
    start_for_hls_2DFhbi* start_for_hls_2DFhbi_U;
    start_for_CvtColoibs* start_for_CvtColoibs_U;
    start_for_Mat2AXIjbC* start_for_Mat2AXIjbC_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > Block_proc_U0_ap_start;
    sc_signal< sc_logic > Block_proc_U0_ap_done;
    sc_signal< sc_logic > Block_proc_U0_ap_continue;
    sc_signal< sc_logic > Block_proc_U0_ap_idle;
    sc_signal< sc_logic > Block_proc_U0_ap_ready;
    sc_signal< sc_lv<11> > Block_proc_U0_input_mat_rows_V_out_din;
    sc_signal< sc_logic > Block_proc_U0_input_mat_rows_V_out_write;
    sc_signal< sc_lv<12> > Block_proc_U0_input_mat_cols_V_out_din;
    sc_signal< sc_logic > Block_proc_U0_input_mat_cols_V_out_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_start;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_done;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_continue;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_idle;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_out;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_INPUT_STREAM_TREADY;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_read;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_read;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_0_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_0_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_1_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_1_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_2_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_2_V_write;
    sc_signal< sc_lv<11> > AXIvideo2Mat_U0_img_rows_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_out_write;
    sc_signal< sc_lv<12> > AXIvideo2Mat_U0_img_cols_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_out_write;
    sc_signal< sc_logic > CvtColor_U0_ap_start;
    sc_signal< sc_logic > CvtColor_U0_ap_done;
    sc_signal< sc_logic > CvtColor_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_U0_start_out;
    sc_signal< sc_logic > CvtColor_U0_start_write;
    sc_signal< sc_logic > CvtColor_U0_p_src_rows_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_cols_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_0_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_1_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_2_V_read;
    sc_signal< sc_lv<8> > CvtColor_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > CvtColor_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > hls_2DFilter_U0_ap_start;
    sc_signal< sc_logic > hls_2DFilter_U0_ap_done;
    sc_signal< sc_logic > hls_2DFilter_U0_ap_continue;
    sc_signal< sc_logic > hls_2DFilter_U0_ap_idle;
    sc_signal< sc_logic > hls_2DFilter_U0_ap_ready;
    sc_signal< sc_logic > hls_2DFilter_U0_start_out;
    sc_signal< sc_logic > hls_2DFilter_U0_start_write;
    sc_signal< sc_logic > hls_2DFilter_U0_input_mat_data_strea_read;
    sc_signal< sc_lv<8> > hls_2DFilter_U0_output_mat_data_stre_din;
    sc_signal< sc_logic > hls_2DFilter_U0_output_mat_data_stre_write;
    sc_signal< sc_logic > CvtColor_1_U0_ap_start;
    sc_signal< sc_logic > CvtColor_1_U0_ap_done;
    sc_signal< sc_logic > CvtColor_1_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_1_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_1_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_1_U0_start_out;
    sc_signal< sc_logic > CvtColor_1_U0_start_write;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_0_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_0_V_write;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_1_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_1_V_write;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_2_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_2_V_write;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_start;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_done;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_continue;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_idle;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_0_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_1_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_2_V_read;
    sc_signal< sc_lv<24> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDATA;
    sc_signal< sc_logic > Mat2AXIvideo_U0_OUTPUT_STREAM_TVALID;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_OUTPUT_STREAM_TKEEP;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_OUTPUT_STREAM_TSTRB;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TUSER;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TLAST;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TID;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_OUTPUT_STREAM_TDEST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > input_mat_rows_V_c_full_n;
    sc_signal< sc_lv<11> > input_mat_rows_V_c_dout;
    sc_signal< sc_logic > input_mat_rows_V_c_empty_n;
    sc_signal< sc_logic > input_mat_cols_V_c_full_n;
    sc_signal< sc_lv<12> > input_mat_cols_V_c_dout;
    sc_signal< sc_logic > input_mat_cols_V_c_empty_n;
    sc_signal< sc_logic > input_mat_data_strea_full_n;
    sc_signal< sc_lv<8> > input_mat_data_strea_dout;
    sc_signal< sc_logic > input_mat_data_strea_empty_n;
    sc_signal< sc_logic > input_mat_data_strea_1_full_n;
    sc_signal< sc_lv<8> > input_mat_data_strea_1_dout;
    sc_signal< sc_logic > input_mat_data_strea_1_empty_n;
    sc_signal< sc_logic > input_mat_data_strea_2_full_n;
    sc_signal< sc_lv<8> > input_mat_data_strea_2_dout;
    sc_signal< sc_logic > input_mat_data_strea_2_empty_n;
    sc_signal< sc_logic > input_mat_rows_V_c10_full_n;
    sc_signal< sc_lv<11> > input_mat_rows_V_c10_dout;
    sc_signal< sc_logic > input_mat_rows_V_c10_empty_n;
    sc_signal< sc_logic > input_mat_cols_V_c11_full_n;
    sc_signal< sc_lv<12> > input_mat_cols_V_c11_dout;
    sc_signal< sc_logic > input_mat_cols_V_c11_empty_n;
    sc_signal< sc_logic > im_1_data_stream_0_s_full_n;
    sc_signal< sc_lv<8> > im_1_data_stream_0_s_dout;
    sc_signal< sc_logic > im_1_data_stream_0_s_empty_n;
    sc_signal< sc_logic > im_2_data_stream_0_s_full_n;
    sc_signal< sc_lv<8> > im_2_data_stream_0_s_dout;
    sc_signal< sc_logic > im_2_data_stream_0_s_empty_n;
    sc_signal< sc_logic > output_mat_data_stre_full_n;
    sc_signal< sc_lv<8> > output_mat_data_stre_dout;
    sc_signal< sc_logic > output_mat_data_stre_empty_n;
    sc_signal< sc_logic > output_mat_data_stre_1_full_n;
    sc_signal< sc_lv<8> > output_mat_data_stre_1_dout;
    sc_signal< sc_logic > output_mat_data_stre_1_empty_n;
    sc_signal< sc_logic > output_mat_data_stre_2_full_n;
    sc_signal< sc_lv<8> > output_mat_data_stre_2_dout;
    sc_signal< sc_logic > output_mat_data_stre_2_empty_n;
    sc_signal< sc_logic > Block_proc_U0_start_full_n;
    sc_signal< sc_logic > Block_proc_U0_start_write;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_hls_2DFilter_U0_din;
    sc_signal< sc_logic > start_for_hls_2DFilter_U0_full_n;
    sc_signal< sc_lv<1> > start_for_hls_2DFilter_U0_dout;
    sc_signal< sc_logic > start_for_hls_2DFilter_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_din;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_dout;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_empty_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_full_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_write;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_AXIvideo2Mat_U0_ap_continue();
    void thread_AXIvideo2Mat_U0_ap_start();
    void thread_Block_proc_U0_ap_continue();
    void thread_Block_proc_U0_ap_start();
    void thread_Block_proc_U0_start_full_n();
    void thread_Block_proc_U0_start_write();
    void thread_CvtColor_1_U0_ap_continue();
    void thread_CvtColor_1_U0_ap_start();
    void thread_CvtColor_U0_ap_continue();
    void thread_CvtColor_U0_ap_start();
    void thread_INPUT_STREAM_TREADY();
    void thread_Mat2AXIvideo_U0_ap_continue();
    void thread_Mat2AXIvideo_U0_ap_start();
    void thread_Mat2AXIvideo_U0_start_full_n();
    void thread_Mat2AXIvideo_U0_start_write();
    void thread_OUTPUT_STREAM_TDATA();
    void thread_OUTPUT_STREAM_TDEST();
    void thread_OUTPUT_STREAM_TID();
    void thread_OUTPUT_STREAM_TKEEP();
    void thread_OUTPUT_STREAM_TLAST();
    void thread_OUTPUT_STREAM_TSTRB();
    void thread_OUTPUT_STREAM_TUSER();
    void thread_OUTPUT_STREAM_TVALID();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_continue();
    void thread_hls_2DFilter_U0_ap_continue();
    void thread_hls_2DFilter_U0_ap_start();
    void thread_start_for_CvtColor_1_U0_din();
    void thread_start_for_CvtColor_U0_din();
    void thread_start_for_Mat2AXIvideo_U0_din();
    void thread_start_for_hls_2DFilter_U0_din();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
