`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 19:27:15 KST (Jan 19 2021 10:27:15 UTC)

module feature_write_addr_gen_Equal_3Ux2U_1U_4_1(in2, in1, out1);
  input [2:0] in2;
  input [1:0] in1;
  output out1;
  wire [2:0] in2;
  wire [1:0] in1;
  wire out1;
  wire n_0, n_1, n_2;
  NOR2X1 g36(.A (in2[2]), .B (n_2), .Y (out1));
  NAND2X1 g37(.A (n_1), .B (n_0), .Y (n_2));
  XNOR2X1 g38(.A (in2[1]), .B (in1[1]), .Y (n_1));
  XNOR2X1 g39(.A (in2[0]), .B (in1[0]), .Y (n_0));
endmodule


