`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 24 2021 18:14:02 KST (Jan 24 2021 09:14:02 UTC)

module feature_write_addr_gen_Eqi6u3_4_3(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  wire n_0;
  NOR2X1 g15(.A (in1[0]), .B (n_0), .Y (out1));
  NAND2X1 g16(.A (in1[2]), .B (in1[1]), .Y (n_0));
endmodule


