`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:33:19 KST (Dec 23 2020 07:33:19 UTC)

module in_buff_Add_5Ux1U_5U_4_0(in2, in1, out1);
  input [4:0] in2;
  input in1;
  output [4:0] out1;
  wire [4:0] in2;
  wire in1;
  wire [4:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_2, inc_add_23_2_n_4,
       inc_add_23_2_n_6;
  XNOR2X1 inc_add_23_2_g43(.A (in2[4]), .B (inc_add_23_2_n_6), .Y
       (out1[4]));
  XNOR2X1 inc_add_23_2_g44(.A (in2[3]), .B (inc_add_23_2_n_4), .Y
       (out1[3]));
  NAND3BXL inc_add_23_2_g45(.AN (inc_add_23_2_n_2), .B (in2[3]), .C
       (in2[2]), .Y (inc_add_23_2_n_6));
  XNOR2X1 inc_add_23_2_g46(.A (in2[2]), .B (inc_add_23_2_n_2), .Y
       (out1[2]));
  NAND2BX1 inc_add_23_2_g47(.AN (inc_add_23_2_n_2), .B (in2[2]), .Y
       (inc_add_23_2_n_4));
  XNOR2X1 inc_add_23_2_g48(.A (in2[1]), .B (inc_add_23_2_n_0), .Y
       (out1[1]));
  NAND2BX1 inc_add_23_2_g49(.AN (inc_add_23_2_n_0), .B (in2[1]), .Y
       (inc_add_23_2_n_2));
  XOR2XL inc_add_23_2_g50(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2X1 inc_add_23_2_g51(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_0));
endmodule


