`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 18 2021 16:23:36 KST (Jan 18 2021 07:23:36 UTC)

module st_feature_addr_gen_EqSubi1u16u16_4_1(in2, in1, out1);
  input [15:0] in2, in1;
  output out1;
  wire [15:0] in2, in1;
  wire out1;
  wire dec_sub_24_2_n_0, dec_sub_24_2_n_1, dec_sub_24_2_n_2,
       dec_sub_24_2_n_3, dec_sub_24_2_n_5, dec_sub_24_2_n_6,
       dec_sub_24_2_n_8, dec_sub_24_2_n_9;
  wire dec_sub_24_2_n_10, dec_sub_24_2_n_12, dec_sub_24_2_n_15,
       dec_sub_24_2_n_16, dec_sub_24_2_n_17, dec_sub_24_2_n_19,
       dec_sub_24_2_n_20, dec_sub_24_2_n_21;
  wire dec_sub_24_2_n_25, n_0, n_1, n_2, n_3, n_4, n_5, n_6;
  wire n_7, n_8, n_9, n_10, n_11, n_12, n_13, n_14;
  wire n_15, n_16, n_17, n_18, n_19, n_20, n_21, n_22;
  wire n_23, n_24, n_25, n_26, n_27, n_28, n_29, n_30;
  wire n_31, n_32, n_33, n_34, n_35, n_36;
  NOR4X1 g212(.A (n_19), .B (n_18), .C (n_17), .D (n_20), .Y (out1));
  OR4X1 g213(.A (n_36), .B (n_16), .C (n_0), .D (n_5), .Y (n_20));
  NAND4XL g214(.A (n_10), .B (n_8), .C (n_11), .D (n_3), .Y (n_19));
  NAND4XL g215(.A (n_7), .B (n_14), .C (n_12), .D (n_6), .Y (n_18));
  NAND4XL g216(.A (n_4), .B (n_2), .C (n_1), .D (n_13), .Y (n_17));
  NAND2X1 g217(.A (n_15), .B (n_9), .Y (n_16));
  XNOR2X1 g218(.A (in2[3]), .B (n_23), .Y (n_15));
  XNOR2X1 g219(.A (in2[6]), .B (n_26), .Y (n_14));
  XNOR2X1 g220(.A (in2[12]), .B (n_32), .Y (n_13));
  XNOR2X1 g221(.A (in2[5]), .B (n_25), .Y (n_12));
  XNOR2X1 g222(.A (in2[9]), .B (n_29), .Y (n_11));
  XNOR2X1 g223(.A (in2[11]), .B (n_31), .Y (n_10));
  XNOR2X1 g224(.A (in2[2]), .B (n_22), .Y (n_9));
  XNOR2X1 g225(.A (in2[10]), .B (n_30), .Y (n_8));
  XNOR2X1 g226(.A (in2[7]), .B (n_27), .Y (n_7));
  XNOR2X1 g227(.A (in2[4]), .B (n_24), .Y (n_6));
  XOR2XL g228(.A (in2[1]), .B (n_21), .Y (n_5));
  XNOR2X1 g229(.A (in2[15]), .B (n_35), .Y (n_4));
  XNOR2X1 g230(.A (in2[8]), .B (n_28), .Y (n_3));
  XNOR2X1 g231(.A (in2[14]), .B (n_34), .Y (n_2));
  XNOR2X1 g232(.A (in2[13]), .B (n_33), .Y (n_1));
  XNOR2X1 g233(.A (in2[0]), .B (in1[0]), .Y (n_0));
  XNOR2X1 dec_sub_24_2_g190(.A (in1[15]), .B (dec_sub_24_2_n_25), .Y
       (n_35));
  XNOR2X1 dec_sub_24_2_g191(.A (in1[13]), .B (dec_sub_24_2_n_21), .Y
       (n_33));
  XOR2XL dec_sub_24_2_g192(.A (in1[11]), .B (dec_sub_24_2_n_20), .Y
       (n_31));
  XNOR2X1 dec_sub_24_2_g193(.A (in1[9]), .B (dec_sub_24_2_n_16), .Y
       (n_29));
  NOR3XL dec_sub_24_2_g194(.A (in1[14]), .B (in1[15]), .C
       (dec_sub_24_2_n_19), .Y (n_36));
  XNOR2X1 dec_sub_24_2_g195(.A (in1[14]), .B (dec_sub_24_2_n_19), .Y
       (n_34));
  XOR2XL dec_sub_24_2_g196(.A (in1[7]), .B (dec_sub_24_2_n_12), .Y
       (n_27));
  OR2XL dec_sub_24_2_g197(.A (in1[14]), .B (dec_sub_24_2_n_19), .Y
       (dec_sub_24_2_n_25));
  AO21XL dec_sub_24_2_g198(.A0 (in1[10]), .A1 (dec_sub_24_2_n_17), .B0
       (dec_sub_24_2_n_20), .Y (n_30));
  OAI2BB1X1 dec_sub_24_2_g199(.A0N (in1[12]), .A1N (dec_sub_24_2_n_15),
       .B0 (dec_sub_24_2_n_21), .Y (n_32));
  XNOR2X1 dec_sub_24_2_g200(.A (in1[5]), .B (dec_sub_24_2_n_9), .Y
       (n_25));
  OR2XL dec_sub_24_2_g201(.A (in1[12]), .B (dec_sub_24_2_n_15), .Y
       (dec_sub_24_2_n_21));
  NOR2X1 dec_sub_24_2_g202(.A (in1[10]), .B (dec_sub_24_2_n_17), .Y
       (dec_sub_24_2_n_20));
  OR3XL dec_sub_24_2_g203(.A (dec_sub_24_2_n_15), .B (in1[13]), .C
       (in1[12]), .Y (dec_sub_24_2_n_19));
  OAI2BB1X1 dec_sub_24_2_g204(.A0N (in1[8]), .A1N (dec_sub_24_2_n_10),
       .B0 (dec_sub_24_2_n_16), .Y (n_28));
  NAND2BX1 dec_sub_24_2_g205(.AN (dec_sub_24_2_n_10), .B
       (dec_sub_24_2_n_0), .Y (dec_sub_24_2_n_17));
  OR2XL dec_sub_24_2_g206(.A (in1[8]), .B (dec_sub_24_2_n_10), .Y
       (dec_sub_24_2_n_16));
  OR4X1 dec_sub_24_2_g207(.A (dec_sub_24_2_n_10), .B (in1[10]), .C
       (in1[11]), .D (dec_sub_24_2_n_1), .Y (dec_sub_24_2_n_15));
  AO21XL dec_sub_24_2_g208(.A0 (in1[6]), .A1 (dec_sub_24_2_n_8), .B0
       (dec_sub_24_2_n_12), .Y (n_26));
  XNOR2X1 dec_sub_24_2_g209(.A (in1[3]), .B (dec_sub_24_2_n_5), .Y
       (n_23));
  NOR2X1 dec_sub_24_2_g210(.A (in1[6]), .B (dec_sub_24_2_n_8), .Y
       (dec_sub_24_2_n_12));
  OAI2BB1X1 dec_sub_24_2_g211(.A0N (in1[4]), .A1N (dec_sub_24_2_n_6),
       .B0 (dec_sub_24_2_n_9), .Y (n_24));
  OR4X1 dec_sub_24_2_g212(.A (in1[7]), .B (in1[6]), .C
       (dec_sub_24_2_n_2), .D (dec_sub_24_2_n_6), .Y
       (dec_sub_24_2_n_10));
  OR2XL dec_sub_24_2_g213(.A (in1[4]), .B (dec_sub_24_2_n_6), .Y
       (dec_sub_24_2_n_9));
  OR2XL dec_sub_24_2_g214(.A (dec_sub_24_2_n_2), .B (dec_sub_24_2_n_6),
       .Y (dec_sub_24_2_n_8));
  OAI2BB1X1 dec_sub_24_2_g215(.A0N (in1[2]), .A1N (dec_sub_24_2_n_3),
       .B0 (dec_sub_24_2_n_5), .Y (n_22));
  OR3XL dec_sub_24_2_g216(.A (in1[2]), .B (in1[3]), .C
       (dec_sub_24_2_n_3), .Y (dec_sub_24_2_n_6));
  OR2XL dec_sub_24_2_g217(.A (in1[2]), .B (dec_sub_24_2_n_3), .Y
       (dec_sub_24_2_n_5));
  XNOR2X1 dec_sub_24_2_g218(.A (in1[1]), .B (in1[0]), .Y (n_21));
  OR2XL dec_sub_24_2_g219(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_24_2_n_3));
  OR2XL dec_sub_24_2_g220(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_24_2_n_2));
  INVX1 dec_sub_24_2_g221(.A (dec_sub_24_2_n_0), .Y (dec_sub_24_2_n_1));
  NOR2X1 dec_sub_24_2_g222(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_24_2_n_0));
endmodule


