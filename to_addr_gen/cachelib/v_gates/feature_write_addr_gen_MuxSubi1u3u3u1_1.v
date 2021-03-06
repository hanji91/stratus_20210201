`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 15 2020 18:02:52 KST (Dec 15 2020 09:02:52 UTC)

module feature_write_addr_gen_MuxSubi1u3u3u1_1(in3, in2, ctrl1, out1);
  input [2:0] in3, in2;
  input ctrl1;
  output [2:0] out1;
  wire [2:0] in3, in2;
  wire ctrl1;
  wire [2:0] out1;
  wire dec_sub_26_2_n_0, dec_sub_26_2_n_1, dec_sub_26_2_n_2,
       dec_sub_26_2_n_3, n_0, n_1, n_2, n_3;
  wire n_4, n_5;
  MXI2XL g40(.A (n_1), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  OAI2BB1XL g41(.A0N (ctrl1), .A1N (n_5), .B0 (n_2), .Y (out1[2]));
  OAI2BB1X1 g42(.A0N (in3[1]), .A1N (n_0), .B0 (n_3), .Y (out1[1]));
  NAND2X1 g43(.A (ctrl1), .B (n_4), .Y (n_3));
  NAND2X1 g44(.A (in3[2]), .B (n_0), .Y (n_2));
  INVX1 g45(.A (in3[0]), .Y (n_1));
  INVX1 g46(.A (ctrl1), .Y (n_0));
  MXI2XL dec_sub_26_2_g26(.A (dec_sub_26_2_n_1), .B (in2[2]), .S0
       (dec_sub_26_2_n_2), .Y (n_5));
  NAND2X1 dec_sub_26_2_g27(.A (dec_sub_26_2_n_3), .B
       (dec_sub_26_2_n_0), .Y (n_4));
  NAND2X1 dec_sub_26_2_g28(.A (in2[1]), .B (in2[0]), .Y
       (dec_sub_26_2_n_3));
  NOR2X8 dec_sub_26_2_g29(.A (in2[1]), .B (in2[0]), .Y
       (dec_sub_26_2_n_2));
  INVXL dec_sub_26_2_g31(.A (in2[2]), .Y (dec_sub_26_2_n_1));
  OR2XL dec_sub_26_2_g2(.A (in2[1]), .B (in2[0]), .Y
       (dec_sub_26_2_n_0));
endmodule


