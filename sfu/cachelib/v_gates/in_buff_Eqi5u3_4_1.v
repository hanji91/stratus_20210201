`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:35:27 KST (Dec 23 2020 07:35:27 UTC)

module in_buff_Eqi5u3_4_1(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  wire n_0;
  NOR3BX1 g15(.AN (in1[2]), .B (n_0), .C (in1[1]), .Y (out1));
  INVX1 g16(.A (in1[0]), .Y (n_0));
endmodule


