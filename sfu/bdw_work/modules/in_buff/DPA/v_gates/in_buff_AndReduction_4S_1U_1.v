`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 14 2021 20:51:03 KST (Jan 14 2021 11:51:03 UTC)

module in_buff_AndReduction_4S_1U_1(in1, out1);
  input [3:0] in1;
  output out1;
  wire [3:0] in1;
  wire out1;
  wire n_0, n_1;
  NOR2X4 g10(.A (n_1), .B (n_0), .Y (out1));
  NAND2X8 g11(.A (in1[3]), .B (in1[2]), .Y (n_1));
  NAND2X4 g12(.A (in1[1]), .B (in1[0]), .Y (n_0));
endmodule

