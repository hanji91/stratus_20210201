`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 17 2021 14:37:36 KST (Jan 17 2021 05:37:36 UTC)

module fp_cmp_Muxi0u8u1_1(in2, ctrl1, out1);
  input [7:0] in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in2;
  wire ctrl1;
  wire [7:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  NOR2X4 g78(.A (ctrl1), .B (n_0), .Y (out1[5]));
  NOR2X4 g74(.A (ctrl1), .B (n_1), .Y (out1[6]));
  NOR2X4 g75(.A (ctrl1), .B (n_4), .Y (out1[7]));
  NOR2X4 g73(.A (ctrl1), .B (n_5), .Y (out1[4]));
  NOR2X4 g80(.A (ctrl1), .B (n_2), .Y (out1[1]));
  NOR2X4 g77(.A (ctrl1), .B (n_3), .Y (out1[2]));
  NOR2X4 g79(.A (ctrl1), .B (n_7), .Y (out1[3]));
  NOR2X4 g76(.A (ctrl1), .B (n_6), .Y (out1[0]));
  CLKINVX12 g83(.A (in2[3]), .Y (n_7));
  CLKINVX12 g85(.A (in2[0]), .Y (n_6));
  CLKINVX12 g81(.A (in2[4]), .Y (n_5));
  CLKINVX12 g86(.A (in2[7]), .Y (n_4));
  CLKINVX12 g84(.A (in2[2]), .Y (n_3));
  CLKINVX12 g88(.A (in2[1]), .Y (n_2));
  CLKINVX12 g82(.A (in2[6]), .Y (n_1));
  CLKINVX12 g87(.A (in2[5]), .Y (n_0));
endmodule

