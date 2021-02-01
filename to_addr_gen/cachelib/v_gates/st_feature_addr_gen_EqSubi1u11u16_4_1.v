`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:42:40 KST (Dec  7 2020 13:42:40 UTC)

module st_feature_addr_gen_EqSubi1u11u16_4_1(in2, in1, out1);
  input [15:0] in2;
  input [10:0] in1;
  output out1;
  wire [15:0] in2;
  wire [10:0] in1;
  wire out1;
  wire dec_sub_24_2_n_0, dec_sub_24_2_n_1, dec_sub_24_2_n_2,
       dec_sub_24_2_n_4, dec_sub_24_2_n_5, dec_sub_24_2_n_7,
       dec_sub_24_2_n_8, dec_sub_24_2_n_9;
  wire dec_sub_24_2_n_11, dec_sub_24_2_n_14, dec_sub_24_2_n_16, n_0,
       n_1, n_2, n_3, n_4;
  wire n_5, n_6, n_7, n_8, n_9, n_10, n_11, n_12;
  wire n_13, n_14, n_15, n_16, n_17, n_18, n_19, n_20;
  wire n_21, n_22, n_23, n_24, n_25, n_26, n_27, n_28;
  wire n_29, n_30;
  NOR4X1 g182(.A (n_15), .B (n_16), .C (n_17), .D (n_19), .Y (out1));
  OR4X1 g183(.A (n_6), .B (n_18), .C (in2[15]), .D (n_30), .Y (n_19));
  NAND4XL g184(.A (n_13), .B (n_11), .C (n_0), .D (n_10), .Y (n_18));
  NAND4XL g185(.A (n_7), .B (n_9), .C (n_14), .D (n_3), .Y (n_17));
  NAND4XL g186(.A (n_4), .B (n_2), .C (n_1), .D (n_5), .Y (n_16));
  NAND2X1 g187(.A (n_8), .B (n_12), .Y (n_15));
  XNOR2X1 g188(.A (in2[8]), .B (n_27), .Y (n_14));
  XNOR2X1 g189(.A (in2[3]), .B (n_22), .Y (n_13));
  XNOR2X1 g190(.A (in2[4]), .B (n_23), .Y (n_12));
  XNOR2X1 g191(.A (in2[2]), .B (n_21), .Y (n_11));
  XNOR2X1 g192(.A (in2[1]), .B (n_20), .Y (n_10));
  XNOR2X1 g193(.A (in2[9]), .B (n_28), .Y (n_9));
  XNOR2X1 g194(.A (in2[5]), .B (n_24), .Y (n_8));
  XNOR2X1 g195(.A (in2[11]), .B (n_30), .Y (n_7));
  XOR2XL g196(.A (in2[10]), .B (n_29), .Y (n_6));
  XNOR2X1 g197(.A (in2[6]), .B (n_25), .Y (n_5));
  XNOR2X1 g198(.A (in2[14]), .B (n_30), .Y (n_4));
  XNOR2X1 g199(.A (in2[7]), .B (n_26), .Y (n_3));
  XNOR2X1 g200(.A (in2[13]), .B (n_30), .Y (n_2));
  XNOR2X1 g201(.A (in2[12]), .B (n_30), .Y (n_1));
  XOR2XL g202(.A (in2[0]), .B (in1[0]), .Y (n_0));
  XNOR2X1 dec_sub_24_2_g126(.A (in1[9]), .B (dec_sub_24_2_n_14), .Y
       (n_28));
  XOR2XL dec_sub_24_2_g127(.A (in1[10]), .B (dec_sub_24_2_n_16), .Y
       (n_29));
  XOR2XL dec_sub_24_2_g128(.A (in1[7]), .B (dec_sub_24_2_n_11), .Y
       (n_26));
  NOR2BX1 dec_sub_24_2_g129(.AN (dec_sub_24_2_n_16), .B (in1[10]), .Y
       (n_30));
  XNOR2X1 dec_sub_24_2_g130(.A (in1[5]), .B (dec_sub_24_2_n_7), .Y
       (n_24));
  NOR3BX1 dec_sub_24_2_g131(.AN (dec_sub_24_2_n_9), .B (in1[8]), .C
       (in1[9]), .Y (dec_sub_24_2_n_16));
  OAI21X1 dec_sub_24_2_g132(.A0 (dec_sub_24_2_n_0), .A1
       (dec_sub_24_2_n_9), .B0 (dec_sub_24_2_n_14), .Y (n_27));
  NAND2X1 dec_sub_24_2_g133(.A (dec_sub_24_2_n_0), .B
       (dec_sub_24_2_n_9), .Y (dec_sub_24_2_n_14));
  AO21XL dec_sub_24_2_g134(.A0 (in1[6]), .A1 (dec_sub_24_2_n_8), .B0
       (dec_sub_24_2_n_11), .Y (n_25));
  XNOR2X1 dec_sub_24_2_g135(.A (in1[3]), .B (dec_sub_24_2_n_4), .Y
       (n_22));
  NOR2X1 dec_sub_24_2_g136(.A (in1[6]), .B (dec_sub_24_2_n_8), .Y
       (dec_sub_24_2_n_11));
  OAI2BB1X1 dec_sub_24_2_g137(.A0N (in1[4]), .A1N (dec_sub_24_2_n_5),
       .B0 (dec_sub_24_2_n_7), .Y (n_23));
  NOR4X1 dec_sub_24_2_g138(.A (in1[7]), .B (in1[6]), .C
       (dec_sub_24_2_n_2), .D (dec_sub_24_2_n_5), .Y
       (dec_sub_24_2_n_9));
  OR2XL dec_sub_24_2_g139(.A (dec_sub_24_2_n_2), .B (dec_sub_24_2_n_5),
       .Y (dec_sub_24_2_n_8));
  OR2XL dec_sub_24_2_g140(.A (in1[4]), .B (dec_sub_24_2_n_5), .Y
       (dec_sub_24_2_n_7));
  OAI2BB1X1 dec_sub_24_2_g141(.A0N (in1[2]), .A1N (dec_sub_24_2_n_1),
       .B0 (dec_sub_24_2_n_4), .Y (n_21));
  OR3XL dec_sub_24_2_g142(.A (in1[2]), .B (in1[3]), .C
       (dec_sub_24_2_n_1), .Y (dec_sub_24_2_n_5));
  OR2XL dec_sub_24_2_g143(.A (in1[2]), .B (dec_sub_24_2_n_1), .Y
       (dec_sub_24_2_n_4));
  XNOR2X1 dec_sub_24_2_g144(.A (in1[1]), .B (in1[0]), .Y (n_20));
  OR2XL dec_sub_24_2_g145(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_24_2_n_2));
  OR2XL dec_sub_24_2_g146(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_24_2_n_1));
  INVX1 dec_sub_24_2_g147(.A (in1[8]), .Y (dec_sub_24_2_n_0));
endmodule


