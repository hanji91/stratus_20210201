`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 16 2020 12:51:25 KST (Dec 16 2020 03:51:25 UTC)

module feature_write_addr_gen_Eqi1u3_1(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  wire n_0;
  NOR3X6 g14(.A (in1[1]), .B (in1[2]), .C (n_0), .Y (out1));
  CLKINVX4 g15(.A (in1[0]), .Y (n_0));
endmodule


