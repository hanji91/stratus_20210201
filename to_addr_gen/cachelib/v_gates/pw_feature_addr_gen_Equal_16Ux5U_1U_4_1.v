`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 21 2021 19:50:37 KST (Jan 21 2021 10:50:37 UTC)

module pw_feature_addr_gen_Equal_16Ux5U_1U_4_1(in2, in1, out1);
  input [15:0] in2;
  input [4:0] in1;
  output out1;
  wire [15:0] in2;
  wire [4:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9;
  AND3XL g100(.A (n_9), .B (n_1), .C (n_5), .Y (out1));
  NOR4X1 g101(.A (n_7), .B (n_8), .C (in2[6]), .D (in2[5]), .Y (n_9));
  NAND4BX1 g102(.AN (in2[7]), .B (n_0), .C (n_3), .D (n_6), .Y (n_8));
  NAND2X1 g103(.A (n_4), .B (n_2), .Y (n_7));
  NOR4X1 g107(.A (in2[15]), .B (in2[14]), .C (in2[13]), .D (in2[12]),
       .Y (n_6));
  XNOR2X1 g104(.A (in2[2]), .B (in1[2]), .Y (n_5));
  XNOR2X1 g108(.A (in2[1]), .B (in1[1]), .Y (n_4));
  NOR4X1 g110(.A (in2[11]), .B (in2[10]), .C (in2[9]), .D (in2[8]), .Y
       (n_3));
  XNOR2X1 g105(.A (in2[0]), .B (in1[0]), .Y (n_2));
  XNOR2X1 g109(.A (in2[3]), .B (in1[3]), .Y (n_1));
  XNOR2X1 g106(.A (in2[4]), .B (in1[4]), .Y (n_0));
endmodule


