`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 23:26:27 KST (Dec  7 2020 14:26:27 UTC)

module st_weight_addr_gen_Equal_17Sx16U_1U_4_5(in2, in1, out1);
  input [16:0] in2;
  input [15:0] in1;
  output out1;
  wire [16:0] in2;
  wire [15:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20;
  NOR4X1 g206(.A (n_17), .B (n_18), .C (n_16), .D (n_20), .Y (out1));
  OR2XL g207(.A (in2[16]), .B (n_19), .Y (n_20));
  NAND4XL g208(.A (n_13), .B (n_11), .C (n_9), .D (n_8), .Y (n_19));
  NAND4XL g210(.A (n_5), .B (n_10), .C (n_4), .D (n_15), .Y (n_18));
  NAND4XL g209(.A (n_0), .B (n_14), .C (n_1), .D (n_6), .Y (n_17));
  NAND4XL g211(.A (n_12), .B (n_7), .C (n_2), .D (n_3), .Y (n_16));
  XNOR2X1 g221(.A (in2[4]), .B (in1[4]), .Y (n_15));
  XNOR2X1 g219(.A (in2[10]), .B (in1[10]), .Y (n_14));
  XNOR2X1 g212(.A (in2[3]), .B (in1[3]), .Y (n_13));
  XNOR2X1 g220(.A (in2[15]), .B (in1[15]), .Y (n_12));
  XNOR2X1 g218(.A (in2[2]), .B (in1[2]), .Y (n_11));
  XNOR2X1 g213(.A (in2[6]), .B (in1[6]), .Y (n_10));
  XNOR2X1 g222(.A (in2[1]), .B (in1[1]), .Y (n_9));
  XNOR2X1 g223(.A (in2[0]), .B (in1[0]), .Y (n_8));
  XNOR2X1 g226(.A (in2[14]), .B (in1[14]), .Y (n_7));
  XNOR2X1 g224(.A (in2[8]), .B (in1[8]), .Y (n_6));
  XNOR2X1 g225(.A (in2[7]), .B (in1[7]), .Y (n_5));
  XNOR2X1 g215(.A (in2[5]), .B (in1[5]), .Y (n_4));
  XNOR2X1 g214(.A (in2[12]), .B (in1[12]), .Y (n_3));
  XNOR2X1 g227(.A (in2[13]), .B (in1[13]), .Y (n_2));
  XNOR2X1 g216(.A (in2[9]), .B (in1[9]), .Y (n_1));
  XNOR2X1 g217(.A (in2[11]), .B (in1[11]), .Y (n_0));
endmodule


