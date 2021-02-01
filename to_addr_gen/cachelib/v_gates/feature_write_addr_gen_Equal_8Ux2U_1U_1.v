`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 26 2021 16:22:25 KST (Jan 26 2021 07:22:25 UTC)

module feature_write_addr_gen_Equal_8Ux2U_1U_1(in2, in1, out1);
  input [7:0] in2;
  input [1:0] in1;
  output out1;
  wire [7:0] in2;
  wire [1:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13;
  NOR4X2 g45(.A (in2[3]), .B (n_10), .C (in2[2]), .D (n_13), .Y (out1));
  NAND2X2 g46(.A (n_12), .B (n_11), .Y (n_13));
  NAND2X1 g48(.A (n_4), .B (n_8), .Y (n_12));
  NAND2X1 g47(.A (n_6), .B (n_9), .Y (n_11));
  NAND2X2 g49(.A (n_5), .B (n_7), .Y (n_10));
  NAND2X2 g52(.A (n_3), .B (n_0), .Y (n_9));
  NAND2X2 g50(.A (n_2), .B (n_1), .Y (n_8));
  NOR2X2 g51(.A (in2[5]), .B (in2[4]), .Y (n_7));
  NAND2X1 g53(.A (in2[0]), .B (in1[0]), .Y (n_6));
  NOR2X4 g54(.A (in2[7]), .B (in2[6]), .Y (n_5));
  NAND2X1 g55(.A (in2[1]), .B (in1[1]), .Y (n_4));
  INVX2 g56(.A (in2[0]), .Y (n_3));
  CLKINVX4 g57(.A (in2[1]), .Y (n_2));
  INVX2 g59(.A (in1[1]), .Y (n_1));
  INVX2 g58(.A (in1[0]), .Y (n_0));
endmodule


