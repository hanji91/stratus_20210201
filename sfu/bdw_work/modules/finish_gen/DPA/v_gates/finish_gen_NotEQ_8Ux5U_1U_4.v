`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 12 2021 16:27:20 KST (Jan 12 2021 07:27:20 UTC)

module finish_gen_NotEQ_8Ux5U_1U_4(in2, in1, out1);
  input [7:0] in2;
  input [4:0] in1;
  output out1;
  wire [7:0] in2;
  wire [4:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6;
  NAND4XL g79(.A (n_5), .B (n_0), .C (n_3), .D (n_6), .Y (out1));
  NOR4X1 g80(.A (in2[6]), .B (in2[5]), .C (in2[7]), .D (n_4), .Y (n_6));
  AND2XL g81(.A (n_2), .B (n_1), .Y (n_5));
  XOR2XL g86(.A (in2[4]), .B (in1[4]), .Y (n_4));
  XNOR2X1 g83(.A (in2[0]), .B (in1[0]), .Y (n_3));
  XNOR2X1 g84(.A (in2[3]), .B (in1[3]), .Y (n_2));
  XNOR2X1 g82(.A (in2[2]), .B (in1[2]), .Y (n_1));
  XNOR2X1 g85(.A (in2[1]), .B (in1[1]), .Y (n_0));
endmodule

