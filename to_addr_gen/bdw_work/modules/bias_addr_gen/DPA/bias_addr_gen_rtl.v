// Generated by stratus_hls 19.10-p100  (91500.011111)
// Wed Jan 27 10:22:58 2021
// from bias_addr_gen.cpp

`timescale 1ps / 1ps

      
module bias_addr_gen(clk, rstn, init, out_feature_width, out_feature_height, out_feature_channel, bias_read_base_addr, bias_en, start_rising, data_en, bias_addr, bias_addr_valid);

      input clk;
      input rstn;
      input init;
      input [15:0] out_feature_width;
      input [15:0] out_feature_height;
      input [15:0] out_feature_channel;
      input [31:0] bias_read_base_addr;
      input bias_en;
      input start_rising;
      input data_en;
      output [31:0] bias_addr;
      reg [31:0] bias_addr;
      output bias_addr_valid;
      reg bias_addr_valid;
      reg of_enable_4d;
      reg of_enable_3d;
      reg of_enable_2d;
      reg of_enable_1d;
      reg of_enable_5d;
      reg of_enable_6d;
      wire bias_addr_gen_Or_1Ux1U_1U_4_5_out1;
      wire bias_addr_gen_And_1Ux1U_1U_4_6_out1;
      wire bias_addr_gen_EqSubi1u16u16_1_7_out1;
      reg[15:0] bias_addr_gen_MuxAdd2i1u16u16u1_4_11_out1;
      wire bias_addr_gen_And_1Ux1U_1U_1_9_out1;
      wire bias_addr_gen_Or_1Ux1U_1U_4_10_out1;
      reg[15:0] bias_addr_gen_Muxi0u16u1_4_12_out1;
      reg[15:0] ox_cnt;
      wire bias_addr_gen_EqSubi1u16u16_1_13_out1;
      reg[15:0] bias_addr_gen_MuxAdd2i1u16u16u1_1_16_out1;
      wire bias_addr_gen_And_1Ux1U_1U_1_8_out1;
      wire bias_addr_gen_Or_1Ux1U_1U_4_15_out1;
      reg[15:0] bias_addr_gen_Muxi0u16u1_4_17_out1;
      reg[15:0] oy_cnt;
      wire bias_addr_gen_EqSubi1u16u16_1_18_out1;
      reg[15:0] bias_addr_gen_MuxAdd2i1u16u16u1_1_21_out1;
      wire bias_addr_gen_And_1Ux1U_1U_1_14_out1;
      wire bias_addr_gen_And_1Ux1U_1U_1_19_out1;
      wire bias_addr_gen_Or_1Ux1U_1U_4_20_out1;
      reg[15:0] bias_addr_gen_Muxi0u16u1_4_22_out1;
      reg[15:0] of_cnt_max;
      reg[15:0] oy_cnt_max;
      reg[15:0] ox_cnt_max;
      wire[31:0] bias_addr_gen_Add_32Ux14U_32U_1_3_out1;
      reg[15:0] of_cnt;
      wire[13:0] bias_addr_gen_Add_32Ux14U_32U_1_3_in1;
      reg[31:0] bias_addr_gen_N_Mux_32_2_12_4_4_out1;
      reg bias_addr_update;
      wire bias_addr_gen_Not_1U_1U_4_1_out1;
      wire bias_addr_gen_And_1Ux1U_1U_4_2_out1;

         // rtl_process:bias_addr_gen/drive_bias_addr_valid
         // Sharing or Control mux
         // Sharing/Controlling 2 operation(s) on drive_bias_addr_valid
         // at: bias_addr_gen.h:149:7
         // at: bias_addr_gen.h:155:7
         always @(posedge clk or negedge rstn)
          begin :drive_bias_addr_valid
            if (rstn == 1'b0) begin
               // op:_bias_addr_valid/OP0
               bias_addr_valid <= 1'd0;
            end
            else begin
               // op:_bias_addr_valid/OP5
               bias_addr_valid <= bias_addr_gen_And_1Ux1U_1U_4_2_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Not_1U_1U_4_1
         // Resource=bias_addr_gen_Not_1U_1U_4, Function=not : Inputs=1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:150:10
         assign bias_addr_gen_Not_1U_1U_4_1_out1 = !init;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_4_2
         // Resource=bias_addr_gen_And_1Ux1U_1U_4, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:150:10
         assign bias_addr_gen_And_1Ux1U_1U_4_2_out1 = bias_addr_gen_Not_1U_1U_4_1_out1 & bias_addr_update;

         // rtl_process:bias_addr_gen/drive_bias_addr
         // Sharing or Control mux
         // Sharing/Controlling 3 operation(s) on drive_bias_addr
         // at: bias_addr_gen.h:142:7
         // at: bias_addr_gen.h:144:7
         always @(posedge clk or negedge rstn)
          begin :drive_bias_addr
            if (rstn == 1'b0) begin
               // op:_bias_add/OP9
               bias_addr <= 32'd0000000000;
            end
            else begin
               // op:_bias_add/OP17
               bias_addr <= bias_addr_gen_N_Mux_32_2_12_4_4_out1;
            end
         end

         // rtl_process:bias_addr_gen/drive_bias_addr_gen_Add_32Ux14U_32U_1_3_in1
         // Sharing or Control mux
         // Sharing/Controlling 1 operation(s) on drive_bias_addr_gen_Add_32Ux14U_32U_1_3_in1
         // at: bias_addr_gen.h:144:63
         assign bias_addr_gen_Add_32Ux14U_32U_1_3_in1 = of_cnt[15:2];

         // rtl_instance:bias_addr_gen/bias_addr_gen_Add_32Ux14U_32U_1_3
         // Resource=bias_addr_gen_Add_32Ux14U_32U_1, Function=add : Inputs=32,14 Outputs=32
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:144:46
         assign bias_addr_gen_Add_32Ux14U_32U_1_3_out1 = bias_read_base_addr + {18'b000000000000000000, bias_addr_gen_Add_32Ux14U_32U_1_3_in1};

         // rtl_instance:bias_addr_gen/bias_addr_gen_N_Mux_32_2_12_4
         always @(bias_addr or bias_en or bias_addr_gen_Add_32Ux14U_32U_1_3_out1)
          begin :bias_addr_gen_N_Mux_32_2_12_4_4
            if (bias_en) begin
               bias_addr_gen_N_Mux_32_2_12_4_4_out1 = bias_addr_gen_Add_32Ux14U_32U_1_3_out1;
            end
            else begin
               bias_addr_gen_N_Mux_32_2_12_4_4_out1 = bias_addr;
            end
         end

         // rtl_process:bias_addr_gen/drive_ox_cnt_max
         // Sharing or Control mux
         // Sharing/Controlling 2 operation(s) on drive_ox_cnt_max
         // at: bias_addr_gen.h:135:5
         // at: bias_addr_gen.h:88:56
         always @(posedge clk)
          begin :drive_ox_cnt_max
            // op:_set_max_num/OP28
            ox_cnt_max <= out_feature_width;
         end

         // rtl_process:bias_addr_gen/drive_oy_cnt_max
         // Sharing or Control mux
         // Sharing/Controlling 2 operation(s) on drive_oy_cnt_max
         // at: bias_addr_gen.h:136:5
         // at: bias_addr_gen.h:104:56
         always @(posedge clk)
          begin :drive_oy_cnt_max
            // op:_set_max_num/OP27
            oy_cnt_max <= out_feature_height;
         end

         // rtl_process:bias_addr_gen/drive_of_cnt_max
         // Sharing or Control mux
         // Sharing/Controlling 2 operation(s) on drive_of_cnt_max
         // at: bias_addr_gen.h:137:5
         // at: bias_addr_gen.h:120:56
         always @(posedge clk)
          begin :drive_of_cnt_max
            // op:_set_max_num/OP26
            of_cnt_max <= out_feature_channel;
         end

         // rtl_process:bias_addr_gen/drive_of_cnt
         // Sharing or Control mux
         // Sharing/Controlling 3 operation(s) on drive_of_cnt
         // at: bias_addr_gen.h:131:7
         // at: bias_addr_gen.h:125:7
         always @(posedge clk or negedge rstn)
          begin :drive_of_cnt
            if (rstn == 1'b0) begin
               // op:_of_counter/OP114
               of_cnt <= 16'd00000;
            end
            else begin
               // op:_of_counter/OP123
               of_cnt <= bias_addr_gen_Muxi0u16u1_4_22_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Or_1Ux1U_1U_4_20
         // Resource=bias_addr_gen_Or_1Ux1U_1U_4, Function=or : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:126:14
         assign bias_addr_gen_Or_1Ux1U_1U_4_20_out1 = init | bias_addr_gen_And_1Ux1U_1U_1_19_out1;

         // rtl_instance:bias_addr_gen/bias_addr_gen_MuxAdd2i1u16u16u1_1
         always @(of_cnt or bias_addr_gen_And_1Ux1U_1U_1_14_out1)
          begin :bias_addr_gen_MuxAdd2i1u16u16u1_1_21
            if (bias_addr_gen_And_1Ux1U_1U_1_14_out1) begin
               bias_addr_gen_MuxAdd2i1u16u16u1_1_21_out1 = of_cnt + 16'd00001;
            end
            else begin
               bias_addr_gen_MuxAdd2i1u16u16u1_1_21_out1 = of_cnt;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Muxi0u16u1_4
         always @(bias_addr_gen_Or_1Ux1U_1U_4_20_out1 or bias_addr_gen_MuxAdd2i1u16u16u1_1_21_out1)
          begin :bias_addr_gen_Muxi0u16u1_4_22
            if (bias_addr_gen_Or_1Ux1U_1U_4_20_out1) begin
               bias_addr_gen_Muxi0u16u1_4_22_out1 = 16'd00000;
            end
            else begin
               bias_addr_gen_Muxi0u16u1_4_22_out1 = bias_addr_gen_MuxAdd2i1u16u16u1_1_21_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_EqSubi1u16u16_1_18
         // Resource=bias_addr_gen_EqSubi1u16u16_1, Function=sub eq : Inputs=16,16 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:120:53
         assign bias_addr_gen_EqSubi1u16u16_1_18_out1 = {1'b0, of_cnt} == {1'b0, of_cnt_max} - 17'd000001;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_1_19
         // Resource=bias_addr_gen_And_1Ux1U_1U_1, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:120:35
         assign bias_addr_gen_And_1Ux1U_1U_1_19_out1 = bias_addr_gen_EqSubi1u16u16_1_18_out1 & bias_addr_gen_And_1Ux1U_1U_1_14_out1;

         // rtl_process:bias_addr_gen/drive_oy_cnt
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_oy_cnt
         // at: bias_addr_gen.h:104:39
         // at: bias_addr_gen.h:109:7
         // at: bias_addr_gen.h:115:7
         always @(posedge clk or negedge rstn)
          begin :drive_oy_cnt
            if (rstn == 1'b0) begin
               // op:_oy_counter/OP85
               oy_cnt <= 16'd00000;
            end
            else begin
               // op:_oy_counter/OP94
               oy_cnt <= bias_addr_gen_Muxi0u16u1_4_17_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Or_1Ux1U_1U_4_15
         // Resource=bias_addr_gen_Or_1Ux1U_1U_4, Function=or : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:110:14
         assign bias_addr_gen_Or_1Ux1U_1U_4_15_out1 = init | bias_addr_gen_And_1Ux1U_1U_1_14_out1;

         // rtl_instance:bias_addr_gen/bias_addr_gen_MuxAdd2i1u16u16u1_1
         always @(oy_cnt or bias_addr_gen_And_1Ux1U_1U_1_8_out1)
          begin :bias_addr_gen_MuxAdd2i1u16u16u1_1_16
            if (bias_addr_gen_And_1Ux1U_1U_1_8_out1) begin
               bias_addr_gen_MuxAdd2i1u16u16u1_1_16_out1 = oy_cnt + 16'd00001;
            end
            else begin
               bias_addr_gen_MuxAdd2i1u16u16u1_1_16_out1 = oy_cnt;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Muxi0u16u1_4
         always @(bias_addr_gen_Or_1Ux1U_1U_4_15_out1 or bias_addr_gen_MuxAdd2i1u16u16u1_1_16_out1)
          begin :bias_addr_gen_Muxi0u16u1_4_17
            if (bias_addr_gen_Or_1Ux1U_1U_4_15_out1) begin
               bias_addr_gen_Muxi0u16u1_4_17_out1 = 16'd00000;
            end
            else begin
               bias_addr_gen_Muxi0u16u1_4_17_out1 = bias_addr_gen_MuxAdd2i1u16u16u1_1_16_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_EqSubi1u16u16_1_13
         // Resource=bias_addr_gen_EqSubi1u16u16_1, Function=sub eq : Inputs=16,16 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:104:53
         assign bias_addr_gen_EqSubi1u16u16_1_13_out1 = {1'b0, oy_cnt} == {1'b0, oy_cnt_max} - 17'd000001;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_1_14
         // Resource=bias_addr_gen_And_1Ux1U_1U_1, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:104:35
         assign bias_addr_gen_And_1Ux1U_1U_1_14_out1 = bias_addr_gen_EqSubi1u16u16_1_13_out1 & bias_addr_gen_And_1Ux1U_1U_1_8_out1;

         // rtl_process:bias_addr_gen/drive_ox_cnt
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_ox_cnt
         // at: bias_addr_gen.h:88:39
         // at: bias_addr_gen.h:93:7
         // at: bias_addr_gen.h:99:7
         always @(posedge clk or negedge rstn)
          begin :drive_ox_cnt
            if (rstn == 1'b0) begin
               // op:_ox_counter/OP56
               ox_cnt <= 16'd00000;
            end
            else begin
               // op:_ox_counter/OP65
               ox_cnt <= bias_addr_gen_Muxi0u16u1_4_12_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Or_1Ux1U_1U_4_10
         // Resource=bias_addr_gen_Or_1Ux1U_1U_4, Function=or : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:94:14
         assign bias_addr_gen_Or_1Ux1U_1U_4_10_out1 = init | bias_addr_gen_And_1Ux1U_1U_1_8_out1;

         // rtl_instance:bias_addr_gen/bias_addr_gen_MuxAdd2i1u16u16u1_4
         always @(ox_cnt or bias_addr_gen_And_1Ux1U_1U_1_9_out1)
          begin :bias_addr_gen_MuxAdd2i1u16u16u1_4_11
            if (bias_addr_gen_And_1Ux1U_1U_1_9_out1) begin
               bias_addr_gen_MuxAdd2i1u16u16u1_4_11_out1 = ox_cnt + 16'd00001;
            end
            else begin
               bias_addr_gen_MuxAdd2i1u16u16u1_4_11_out1 = ox_cnt;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Muxi0u16u1_4
         always @(bias_addr_gen_Or_1Ux1U_1U_4_10_out1 or bias_addr_gen_MuxAdd2i1u16u16u1_4_11_out1)
          begin :bias_addr_gen_Muxi0u16u1_4_12
            if (bias_addr_gen_Or_1Ux1U_1U_4_10_out1) begin
               bias_addr_gen_Muxi0u16u1_4_12_out1 = 16'd00000;
            end
            else begin
               bias_addr_gen_Muxi0u16u1_4_12_out1 = bias_addr_gen_MuxAdd2i1u16u16u1_4_11_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_EqSubi1u16u16_1_7
         // Resource=bias_addr_gen_EqSubi1u16u16_1, Function=sub eq : Inputs=16,16 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:88:53
         assign bias_addr_gen_EqSubi1u16u16_1_7_out1 = {1'b0, ox_cnt} == {1'b0, ox_cnt_max} - 17'd000001;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_1_8
         // Resource=bias_addr_gen_And_1Ux1U_1U_1, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:88:35
         assign bias_addr_gen_And_1Ux1U_1U_1_8_out1 = bias_addr_gen_EqSubi1u16u16_1_7_out1 & bias_addr_gen_And_1Ux1U_1U_1_9_out1;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_1_9
         // Resource=bias_addr_gen_And_1Ux1U_1U_1, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:87:33
         assign bias_addr_gen_And_1Ux1U_1U_1_9_out1 = data_en & bias_en;

         // rtl_process:bias_addr_gen/drive_bias_addr_update
         // Sharing or Control mux
         // Sharing/Controlling 3 operation(s) on drive_bias_addr_update
         // at: bias_addr_gen.h:152:14
         // at: bias_addr_gen.h:76:7
         // at: bias_addr_gen.h:82:7
         always @(posedge clk or negedge rstn)
          begin :drive_bias_addr_update
            if (rstn == 1'b0) begin
               // op:_bias_addr_update/OP29
               bias_addr_update <= 1'd0;
            end
            else begin
               // op:_bias_addr_update/OP35
               bias_addr_update <= bias_addr_gen_And_1Ux1U_1U_4_6_out1;
            end
         end

         // rtl_instance:bias_addr_gen/bias_addr_gen_Or_1Ux1U_1U_4_5
         // Resource=bias_addr_gen_Or_1Ux1U_1U_4, Function=or : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:77:37
         assign bias_addr_gen_Or_1Ux1U_1U_4_5_out1 = start_rising | of_enable_6d;

         // rtl_instance:bias_addr_gen/bias_addr_gen_And_1Ux1U_1U_4_6
         // Resource=bias_addr_gen_And_1Ux1U_1U_4, Function=and : Inputs=1,1 Outputs=1
         // Implements 1 operation(s)
         // at: bias_addr_gen.h:77:34
         assign bias_addr_gen_And_1Ux1U_1U_4_6_out1 = bias_addr_gen_Or_1Ux1U_1U_4_5_out1 & bias_en;

         // rtl_process:bias_addr_gen/drive_of_enable_6d
         // Sharing or Control mux
         // Sharing/Controlling 3 operation(s) on drive_of_enable_6d
         // at: bias_addr_gen.h:79:37
         // at: bias_addr_gen.h:62:7
         // at: bias_addr_gen.h:70:7
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_6d
            if (rstn == 1'b0) begin
               // op:_delay/OP136
               of_enable_6d <= 1'b0;
            end
            else begin
               // op:_delay/OP148
               of_enable_6d <= of_enable_5d;
            end
         end

         // rtl_process:bias_addr_gen/drive_of_enable_1d
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_of_enable_1d
         // at: bias_addr_gen.h:57:7
         // at: bias_addr_gen.h:65:7
         // at: bias_addr_gen.h:66:22
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_1d
            if (rstn == 1'b0) begin
               // op:_delay/OP131
               of_enable_1d <= 1'b0;
            end
            else begin
               // op:_delay/OP153
               of_enable_1d <= bias_addr_gen_And_1Ux1U_1U_1_14_out1;
            end
         end

         // rtl_process:bias_addr_gen/drive_of_enable_2d
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_of_enable_2d
         // at: bias_addr_gen.h:58:7
         // at: bias_addr_gen.h:66:7
         // at: bias_addr_gen.h:67:22
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_2d
            if (rstn == 1'b0) begin
               // op:_delay/OP132
               of_enable_2d <= 1'b0;
            end
            else begin
               // op:_delay/OP152
               of_enable_2d <= of_enable_1d;
            end
         end

         // rtl_process:bias_addr_gen/drive_of_enable_3d
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_of_enable_3d
         // at: bias_addr_gen.h:59:7
         // at: bias_addr_gen.h:67:7
         // at: bias_addr_gen.h:68:22
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_3d
            if (rstn == 1'b0) begin
               // op:_delay/OP133
               of_enable_3d <= 1'b0;
            end
            else begin
               // op:_delay/OP151
               of_enable_3d <= of_enable_2d;
            end
         end

         // rtl_process:bias_addr_gen/drive_of_enable_4d
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_of_enable_4d
         // at: bias_addr_gen.h:60:7
         // at: bias_addr_gen.h:68:7
         // at: bias_addr_gen.h:69:22
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_4d
            if (rstn == 1'b0) begin
               // op:_delay/OP134
               of_enable_4d <= 1'b0;
            end
            else begin
               // op:_delay/OP150
               of_enable_4d <= of_enable_3d;
            end
         end

         // rtl_process:bias_addr_gen/drive_of_enable_5d
         // Sharing or Control mux
         // Sharing/Controlling 4 operation(s) on drive_of_enable_5d
         // at: bias_addr_gen.h:61:7
         // at: bias_addr_gen.h:69:7
         // at: bias_addr_gen.h:70:22
         always @(posedge clk or negedge rstn)
          begin :drive_of_enable_5d
            if (rstn == 1'b0) begin
               // op:_delay/OP135
               of_enable_5d <= 1'b0;
            end
            else begin
               // op:_delay/OP149
               of_enable_5d <= of_enable_4d;
            end
         end


endmodule

