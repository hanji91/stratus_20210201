`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:43:12 KST (Dec 28 2020 04:43:12 UTC)

module fix2float_OrReduction_10S_1U_4_2(in1, out1);
  input [9:0] in1;
  output out1;
  wire [9:0] in1;
  wire out1;
  wire n_0, n_1;
  OR4X1 g12(.A (in1[1]), .B (in1[0]), .C (n_1), .D (n_0), .Y (out1));
  OR4X1 g13(.A (in1[9]), .B (in1[8]), .C (in1[7]), .D (in1[6]), .Y
       (n_1));
  OR4X1 g14(.A (in1[5]), .B (in1[4]), .C (in1[3]), .D (in1[2]), .Y
       (n_0));
endmodule


