`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:33:22 KST (Dec 23 2020 07:33:22 UTC)

module in_buff_Eqi6u3_4_0(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  wire n_0;
  NOR2X1 g15(.A (in1[0]), .B (n_0), .Y (out1));
  NAND2X1 g16(.A (in1[2]), .B (in1[1]), .Y (n_0));
endmodule


