`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:51:33 KST (Dec  7 2020 13:51:33 UTC)

module st_weight_addr_gen_EqSubi32u16u16_4_2(in2, in1, out1);
  input [15:0] in2, in1;
  output out1;
  wire [15:0] in2, in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_22, n_23, n_24;
  wire n_25, n_26, n_27, n_28, n_29, n_30, n_31, n_32;
  wire sub_24_2_n_1, sub_24_2_n_3, sub_24_2_n_5, sub_24_2_n_6,
       sub_24_2_n_8, sub_24_2_n_11, sub_24_2_n_13, sub_24_2_n_15;
  wire sub_24_2_n_17;
  NOR4X1 g212(.A (n_18), .B (n_17), .C (n_16), .D (n_20), .Y (out1));
  OR2XL g213(.A (n_32), .B (n_19), .Y (n_20));
  NAND4XL g214(.A (n_15), .B (n_9), .C (n_5), .D (n_4), .Y (n_19));
  NAND4XL g215(.A (n_10), .B (n_8), .C (n_11), .D (n_3), .Y (n_18));
  NAND4XL g216(.A (n_0), .B (n_14), .C (n_12), .D (n_6), .Y (n_17));
  NAND4XL g217(.A (n_7), .B (n_2), .C (n_1), .D (n_13), .Y (n_16));
  XNOR2X1 g218(.A (in2[3]), .B (in1[3]), .Y (n_15));
  XNOR2X1 g219(.A (in2[4]), .B (in1[4]), .Y (n_14));
  XNOR2X1 g220(.A (in2[12]), .B (n_28), .Y (n_13));
  XNOR2X1 g221(.A (in2[7]), .B (n_23), .Y (n_12));
  XNOR2X1 g222(.A (in2[9]), .B (n_25), .Y (n_11));
  XNOR2X1 g223(.A (in2[11]), .B (n_27), .Y (n_10));
  XNOR2X1 g224(.A (in2[2]), .B (in1[2]), .Y (n_9));
  XNOR2X1 g225(.A (in2[10]), .B (n_26), .Y (n_8));
  XNOR2X1 g226(.A (in2[15]), .B (n_31), .Y (n_7));
  XNOR2X1 g227(.A (in2[6]), .B (n_22), .Y (n_6));
  XNOR2X1 g228(.A (in2[1]), .B (in1[1]), .Y (n_5));
  XNOR2X1 g229(.A (in2[0]), .B (in1[0]), .Y (n_4));
  XNOR2X1 g230(.A (in2[8]), .B (n_24), .Y (n_3));
  XNOR2X1 g231(.A (in2[14]), .B (n_30), .Y (n_2));
  XNOR2X1 g232(.A (in2[13]), .B (n_29), .Y (n_1));
  XOR2XL g233(.A (in2[5]), .B (in1[5]), .Y (n_0));
  AO21XL sub_24_2_g311(.A0 (in1[15]), .A1 (sub_24_2_n_17), .B0 (n_32),
       .Y (n_31));
  NOR2X1 sub_24_2_g312(.A (in1[15]), .B (sub_24_2_n_17), .Y (n_32));
  OAI2BB1X1 sub_24_2_g313(.A0N (in1[14]), .A1N (sub_24_2_n_15), .B0
       (sub_24_2_n_17), .Y (n_30));
  OR2X1 sub_24_2_g314(.A (in1[14]), .B (sub_24_2_n_15), .Y
       (sub_24_2_n_17));
  OAI2BB1X1 sub_24_2_g315(.A0N (in1[13]), .A1N (sub_24_2_n_13), .B0
       (sub_24_2_n_15), .Y (n_29));
  OR2XL sub_24_2_g316(.A (in1[13]), .B (sub_24_2_n_13), .Y
       (sub_24_2_n_15));
  OAI2BB1X1 sub_24_2_g317(.A0N (in1[12]), .A1N (sub_24_2_n_11), .B0
       (sub_24_2_n_13), .Y (n_28));
  OR2XL sub_24_2_g318(.A (in1[12]), .B (sub_24_2_n_11), .Y
       (sub_24_2_n_13));
  OAI2BB1X1 sub_24_2_g319(.A0N (in1[11]), .A1N (sub_24_2_n_8), .B0
       (sub_24_2_n_11), .Y (n_27));
  OR2XL sub_24_2_g320(.A (in1[11]), .B (sub_24_2_n_8), .Y
       (sub_24_2_n_11));
  XOR2XL sub_24_2_g321(.A (in1[9]), .B (sub_24_2_n_6), .Y (n_25));
  OAI2BB1X1 sub_24_2_g322(.A0N (in1[10]), .A1N (sub_24_2_n_5), .B0
       (sub_24_2_n_8), .Y (n_26));
  OR2XL sub_24_2_g323(.A (in1[10]), .B (sub_24_2_n_5), .Y
       (sub_24_2_n_8));
  AO21XL sub_24_2_g324(.A0 (in1[8]), .A1 (sub_24_2_n_3), .B0
       (sub_24_2_n_6), .Y (n_24));
  NOR2X1 sub_24_2_g325(.A (in1[8]), .B (sub_24_2_n_3), .Y
       (sub_24_2_n_6));
  OR3XL sub_24_2_g326(.A (sub_24_2_n_3), .B (in1[9]), .C (in1[8]), .Y
       (sub_24_2_n_5));
  OAI2BB1X1 sub_24_2_g327(.A0N (in1[7]), .A1N (sub_24_2_n_1), .B0
       (sub_24_2_n_3), .Y (n_23));
  OR2X1 sub_24_2_g328(.A (in1[7]), .B (sub_24_2_n_1), .Y
       (sub_24_2_n_3));
  OAI2BB1X1 sub_24_2_g329(.A0N (in1[6]), .A1N (in1[5]), .B0
       (sub_24_2_n_1), .Y (n_22));
  OR2XL sub_24_2_g330(.A (in1[6]), .B (in1[5]), .Y (sub_24_2_n_1));
endmodule


