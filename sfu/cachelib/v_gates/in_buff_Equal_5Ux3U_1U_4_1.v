`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:34:59 KST (Dec 23 2020 07:34:59 UTC)

module in_buff_Equal_5Ux3U_1U_4_1(in2, in1, out1);
  input [4:0] in2;
  input [2:0] in1;
  output out1;
  wire [4:0] in2;
  wire [2:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3;
  NOR4X1 g39(.A (in2[4]), .B (n_0), .C (in2[3]), .D (n_3), .Y (out1));
  NAND2X1 g40(.A (n_2), .B (n_1), .Y (n_3));
  XNOR2X1 g43(.A (in2[1]), .B (in1[1]), .Y (n_2));
  XNOR2X1 g41(.A (in2[0]), .B (in1[0]), .Y (n_1));
  XOR2XL g42(.A (in2[2]), .B (in1[2]), .Y (n_0));
endmodule


