`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 26 2021 16:22:23 KST (Jan 26 2021 07:22:23 UTC)

module feature_write_addr_gen_Equal_8Ux3U_1U_4(in2, in1, out1);
  input [7:0] in2;
  input [2:0] in1;
  output out1;
  wire [7:0] in2;
  wire [2:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4;
  NOR4X1 g60(.A (in2[6]), .B (in2[5]), .C (in2[4]), .D (n_4), .Y
       (out1));
  OR4X1 g61(.A (in2[7]), .B (n_3), .C (in2[3]), .D (n_1), .Y (n_4));
  NAND2X1 g62(.A (n_0), .B (n_2), .Y (n_3));
  XNOR2X1 g64(.A (in2[0]), .B (in1[0]), .Y (n_2));
  XOR2XL g65(.A (in2[2]), .B (in1[2]), .Y (n_1));
  XNOR2X1 g63(.A (in2[1]), .B (in1[1]), .Y (n_0));
endmodule


