`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:40:29 KST (Dec 28 2020 04:40:29 UTC)

module fix2float_MuxSubu8i127i0u1_4_1(in2, ctrl1, out1);
  input [7:0] in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in2;
  wire ctrl1;
  wire [7:0] out1;
  wire n_6;
  NOR2X1 g82(.A (n_6), .B (in2[6]), .Y (out1[6]));
  NOR2X1 g85(.A (n_6), .B (in2[2]), .Y (out1[2]));
  NOR2X1 g88(.A (n_6), .B (in2[1]), .Y (out1[1]));
  NOR2X1 g81(.A (n_6), .B (in2[4]), .Y (out1[4]));
  NOR2X1 g86(.A (n_6), .B (in2[5]), .Y (out1[5]));
  NOR2X1 g84(.A (n_6), .B (in2[0]), .Y (out1[0]));
  NOR2X1 g87(.A (n_6), .B (in2[3]), .Y (out1[3]));
  AND2XL g83(.A (in2[7]), .B (ctrl1), .Y (out1[7]));
  INVX1 g89(.A (ctrl1), .Y (n_6));
endmodule


