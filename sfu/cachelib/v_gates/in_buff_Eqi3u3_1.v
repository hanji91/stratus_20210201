`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:44:09 KST (Dec 23 2020 05:44:09 UTC)

module in_buff_Eqi3u3_1(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  wire n_0, n_1;
  NOR2BX2 g14(.AN (in1[0]), .B (n_1), .Y (out1));
  NAND2X6 g15(.A (in1[1]), .B (n_0), .Y (n_1));
  CLKINVX12 g16(.A (in1[2]), .Y (n_0));
endmodule


