`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 19:58:40 KST (Jan 27 2021 10:58:40 UTC)

module avg_pool_Eqi48s8_4_1(in1, out1);
  input [7:0] in1;
  output out1;
  wire [7:0] in1;
  wire out1;
  wire n_0, n_1;
  NOR4X1 g51(.A (in1[2]), .B (in1[1]), .C (in1[0]), .D (n_1), .Y
       (out1));
  OR4X1 g52(.A (in1[3]), .B (n_0), .C (in1[7]), .D (in1[6]), .Y (n_1));
  NAND2X1 g53(.A (in1[5]), .B (in1[4]), .Y (n_0));
endmodule

