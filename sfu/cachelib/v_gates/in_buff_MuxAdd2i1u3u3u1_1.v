`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:44:07 KST (Dec 23 2020 05:44:07 UTC)

module in_buff_MuxAdd2i1u3u3u1_1(in3, in2, ctrl1, out1);
  input [2:0] in3, in2;
  input ctrl1;
  output [2:0] out1;
  wire [2:0] in3, in2;
  wire ctrl1;
  wire [2:0] out1;
  wire inc_add_26_2_n_0, inc_add_26_2_n_1, inc_add_26_2_n_2, n_0, n_1,
       n_2, n_3, n_4;
  wire n_5;
  MXI2XL g40(.A (n_1), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  OAI2BB1X1 g41(.A0N (ctrl1), .A1N (n_5), .B0 (n_3), .Y (out1[2]));
  OAI2BB1X1 g42(.A0N (ctrl1), .A1N (n_4), .B0 (n_2), .Y (out1[1]));
  NAND2X1 g43(.A (in3[2]), .B (n_0), .Y (n_3));
  NAND2X1 g44(.A (in3[1]), .B (n_0), .Y (n_2));
  INVX1 g45(.A (in3[0]), .Y (n_1));
  INVX1 g46(.A (ctrl1), .Y (n_0));
  MXI2X1 inc_add_26_2_g22(.A (in2[2]), .B (inc_add_26_2_n_1), .S0
       (inc_add_26_2_n_2), .Y (n_5));
  MXI2XL inc_add_26_2_g23(.A (inc_add_26_2_n_0), .B (in2[1]), .S0
       (in2[0]), .Y (n_4));
  NAND2X8 inc_add_26_2_g24(.A (in2[1]), .B (in2[0]), .Y
       (inc_add_26_2_n_2));
  INVX1 inc_add_26_2_g25(.A (in2[2]), .Y (inc_add_26_2_n_1));
  INVX1 inc_add_26_2_g26(.A (in2[1]), .Y (inc_add_26_2_n_0));
endmodule


