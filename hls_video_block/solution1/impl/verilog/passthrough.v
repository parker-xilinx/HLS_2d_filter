// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module passthrough (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        input_mat_data_strea_dout,
        input_mat_data_strea_empty_n,
        input_mat_data_strea_read,
        input_mat_data_strea_3_dout,
        input_mat_data_strea_3_empty_n,
        input_mat_data_strea_3_read,
        input_mat_data_strea_4_dout,
        input_mat_data_strea_4_empty_n,
        input_mat_data_strea_4_read,
        output_mat_data_stre_din,
        output_mat_data_stre_full_n,
        output_mat_data_stre_write,
        output_mat_data_stre_3_din,
        output_mat_data_stre_3_full_n,
        output_mat_data_stre_3_write,
        output_mat_data_stre_4_din,
        output_mat_data_stre_4_full_n,
        output_mat_data_stre_4_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [7:0] input_mat_data_strea_dout;
input   input_mat_data_strea_empty_n;
output   input_mat_data_strea_read;
input  [7:0] input_mat_data_strea_3_dout;
input   input_mat_data_strea_3_empty_n;
output   input_mat_data_strea_3_read;
input  [7:0] input_mat_data_strea_4_dout;
input   input_mat_data_strea_4_empty_n;
output   input_mat_data_strea_4_read;
output  [7:0] output_mat_data_stre_din;
input   output_mat_data_stre_full_n;
output   output_mat_data_stre_write;
output  [7:0] output_mat_data_stre_3_din;
input   output_mat_data_stre_3_full_n;
output   output_mat_data_stre_3_write;
output  [7:0] output_mat_data_stre_4_din;
input   output_mat_data_stre_4_full_n;
output   output_mat_data_stre_4_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg input_mat_data_strea_read;
reg input_mat_data_strea_3_read;
reg input_mat_data_strea_4_read;
reg output_mat_data_stre_write;
reg output_mat_data_stre_3_write;
reg output_mat_data_stre_4_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    input_mat_data_strea_blk_n;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond_fu_210_p2;
reg    input_mat_data_strea_3_blk_n;
reg    input_mat_data_strea_4_blk_n;
reg    output_mat_data_stre_blk_n;
reg    output_mat_data_stre_3_blk_n;
reg    output_mat_data_stre_4_blk_n;
wire   [9:0] i_1_fu_204_p2;
reg   [9:0] i_1_reg_225;
wire    ap_CS_fsm_state2;
wire   [10:0] j_1_fu_216_p2;
reg    ap_block_state3;
reg   [9:0] i_reg_176;
reg    ap_block_state1;
reg   [10:0] j_reg_187;
wire   [0:0] exitcond1_fu_198_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_198_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_176 <= i_1_reg_225;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_176 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        j_reg_187 <= j_1_fu_216_p2;
    end else if (((exitcond1_fu_198_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_187 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_225 <= i_1_fu_204_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_198_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_3_blk_n = input_mat_data_strea_3_empty_n;
    end else begin
        input_mat_data_strea_3_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_3_read = 1'b1;
    end else begin
        input_mat_data_strea_3_read = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_4_blk_n = input_mat_data_strea_4_empty_n;
    end else begin
        input_mat_data_strea_4_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_4_read = 1'b1;
    end else begin
        input_mat_data_strea_4_read = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_blk_n = input_mat_data_strea_empty_n;
    end else begin
        input_mat_data_strea_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        input_mat_data_strea_read = 1'b1;
    end else begin
        input_mat_data_strea_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_198_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_3_blk_n = output_mat_data_stre_3_full_n;
    end else begin
        output_mat_data_stre_3_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_3_write = 1'b1;
    end else begin
        output_mat_data_stre_3_write = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_4_blk_n = output_mat_data_stre_4_full_n;
    end else begin
        output_mat_data_stre_4_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_4_write = 1'b1;
    end else begin
        output_mat_data_stre_4_write = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_blk_n = output_mat_data_stre_full_n;
    end else begin
        output_mat_data_stre_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        output_mat_data_stre_write = 1'b1;
    end else begin
        output_mat_data_stre_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_198_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if ((~(((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0))) & (exitcond_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state3 = (((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_3_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_full_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_4_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_3_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (input_mat_data_strea_empty_n == 1'b0)) | ((exitcond_fu_210_p2 == 1'd0) & (output_mat_data_stre_4_full_n == 1'b0)));
end

assign ap_ready = internal_ap_ready;

assign exitcond1_fu_198_p2 = ((i_reg_176 == 10'd720) ? 1'b1 : 1'b0);

assign exitcond_fu_210_p2 = ((j_reg_187 == 11'd1080) ? 1'b1 : 1'b0);

assign i_1_fu_204_p2 = (i_reg_176 + 10'd1);

assign j_1_fu_216_p2 = (j_reg_187 + 11'd1);

assign output_mat_data_stre_3_din = input_mat_data_strea_3_dout;

assign output_mat_data_stre_4_din = input_mat_data_strea_4_dout;

assign output_mat_data_stre_din = input_mat_data_strea_dout;

assign start_out = real_start;

endmodule //passthrough
