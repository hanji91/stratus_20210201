`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:35:24 KST (Dec 23 2020 07:35:24 UTC)

module in_buff_OrReduction_3U_1U_4_1(in1, out1);
  input [2:0] in1;
  output out1;
  wire [2:0] in1;
  wire out1;
  OR3XL g6(.A (in1[0]), .B (in1[2]), .C (in1[1]), .Y (out1));
endmodule


