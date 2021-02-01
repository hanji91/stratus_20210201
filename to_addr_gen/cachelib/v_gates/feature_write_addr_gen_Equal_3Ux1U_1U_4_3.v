`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 24 2021 18:13:49 KST (Jan 24 2021 09:13:49 UTC)

module feature_write_addr_gen_Equal_3Ux1U_1U_4_3(in2, in1, out1);
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


