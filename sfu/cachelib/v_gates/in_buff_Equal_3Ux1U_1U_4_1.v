`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:34:58 KST (Dec 23 2020 07:34:58 UTC)

module in_buff_Equal_3Ux1U_1U_4_1(in2, in1, out1);
  input [2:0] in2;
  input in1;
  output out1;
  wire [2:0] in2;
  wire in1;
  wire out1;
  wire n_0;
  NOR3BX1 g27(.AN (n_0), .B (in2[1]), .C (in2[2]), .Y (out1));
  XNOR2X1 g28(.A (in2[0]), .B (in1), .Y (n_0));
endmodule


