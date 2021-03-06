`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:21:01 KST (Dec  7 2020 13:21:01 UTC)

module st_feature_addr_gen_Subi1u16_4(in1, out1);
  input [15:0] in1;
  output [16:0] out1;
  wire [15:0] in1;
  wire [16:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_3, dec_sub_21_2_n_5, dec_sub_21_2_n_6,
       dec_sub_21_2_n_8, dec_sub_21_2_n_9;
  wire dec_sub_21_2_n_10, dec_sub_21_2_n_12, dec_sub_21_2_n_15,
       dec_sub_21_2_n_16, dec_sub_21_2_n_17, dec_sub_21_2_n_19,
       dec_sub_21_2_n_20, dec_sub_21_2_n_21;
  wire dec_sub_21_2_n_25;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 dec_sub_21_2_g190(.A (in1[15]), .B (dec_sub_21_2_n_25), .Y
       (out1[15]));
  XNOR2X1 dec_sub_21_2_g191(.A (in1[13]), .B (dec_sub_21_2_n_21), .Y
       (out1[13]));
  XOR2XL dec_sub_21_2_g192(.A (in1[11]), .B (dec_sub_21_2_n_20), .Y
       (out1[11]));
  XNOR2X1 dec_sub_21_2_g193(.A (in1[9]), .B (dec_sub_21_2_n_16), .Y
       (out1[9]));
  NOR3X1 dec_sub_21_2_g194(.A (in1[14]), .B (in1[15]), .C
       (dec_sub_21_2_n_19), .Y (out1[16]));
  XNOR2X1 dec_sub_21_2_g195(.A (in1[14]), .B (dec_sub_21_2_n_19), .Y
       (out1[14]));
  XOR2XL dec_sub_21_2_g196(.A (in1[7]), .B (dec_sub_21_2_n_12), .Y
       (out1[7]));
  OR2XL dec_sub_21_2_g197(.A (in1[14]), .B (dec_sub_21_2_n_19), .Y
       (dec_sub_21_2_n_25));
  AO21XL dec_sub_21_2_g198(.A0 (in1[10]), .A1 (dec_sub_21_2_n_17), .B0
       (dec_sub_21_2_n_20), .Y (out1[10]));
  OAI2BB1X1 dec_sub_21_2_g199(.A0N (in1[12]), .A1N (dec_sub_21_2_n_15),
       .B0 (dec_sub_21_2_n_21), .Y (out1[12]));
  XNOR2X1 dec_sub_21_2_g200(.A (in1[5]), .B (dec_sub_21_2_n_9), .Y
       (out1[5]));
  OR2XL dec_sub_21_2_g201(.A (in1[12]), .B (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_21));
  NOR2X1 dec_sub_21_2_g202(.A (in1[10]), .B (dec_sub_21_2_n_17), .Y
       (dec_sub_21_2_n_20));
  OR3XL dec_sub_21_2_g203(.A (dec_sub_21_2_n_15), .B (in1[13]), .C
       (in1[12]), .Y (dec_sub_21_2_n_19));
  OAI2BB1X1 dec_sub_21_2_g204(.A0N (in1[8]), .A1N (dec_sub_21_2_n_10),
       .B0 (dec_sub_21_2_n_16), .Y (out1[8]));
  NAND2BX1 dec_sub_21_2_g205(.AN (dec_sub_21_2_n_10), .B
       (dec_sub_21_2_n_0), .Y (dec_sub_21_2_n_17));
  OR2XL dec_sub_21_2_g206(.A (in1[8]), .B (dec_sub_21_2_n_10), .Y
       (dec_sub_21_2_n_16));
  OR4X1 dec_sub_21_2_g207(.A (dec_sub_21_2_n_10), .B (in1[10]), .C
       (in1[11]), .D (dec_sub_21_2_n_1), .Y (dec_sub_21_2_n_15));
  AO21XL dec_sub_21_2_g208(.A0 (in1[6]), .A1 (dec_sub_21_2_n_8), .B0
       (dec_sub_21_2_n_12), .Y (out1[6]));
  XNOR2X1 dec_sub_21_2_g209(.A (in1[3]), .B (dec_sub_21_2_n_5), .Y
       (out1[3]));
  NOR2X1 dec_sub_21_2_g210(.A (in1[6]), .B (dec_sub_21_2_n_8), .Y
       (dec_sub_21_2_n_12));
  OAI2BB1X1 dec_sub_21_2_g211(.A0N (in1[4]), .A1N (dec_sub_21_2_n_6),
       .B0 (dec_sub_21_2_n_9), .Y (out1[4]));
  OR4X1 dec_sub_21_2_g212(.A (in1[7]), .B (in1[6]), .C
       (dec_sub_21_2_n_2), .D (dec_sub_21_2_n_6), .Y
       (dec_sub_21_2_n_10));
  OR2XL dec_sub_21_2_g213(.A (in1[4]), .B (dec_sub_21_2_n_6), .Y
       (dec_sub_21_2_n_9));
  OR2XL dec_sub_21_2_g214(.A (dec_sub_21_2_n_2), .B (dec_sub_21_2_n_6),
       .Y (dec_sub_21_2_n_8));
  OAI2BB1X1 dec_sub_21_2_g215(.A0N (in1[2]), .A1N (dec_sub_21_2_n_3),
       .B0 (dec_sub_21_2_n_5), .Y (out1[2]));
  OR3XL dec_sub_21_2_g216(.A (in1[2]), .B (in1[3]), .C
       (dec_sub_21_2_n_3), .Y (dec_sub_21_2_n_6));
  OR2XL dec_sub_21_2_g217(.A (in1[2]), .B (dec_sub_21_2_n_3), .Y
       (dec_sub_21_2_n_5));
  XNOR2X1 dec_sub_21_2_g218(.A (in1[1]), .B (in1[0]), .Y (out1[1]));
  OR2XL dec_sub_21_2_g219(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_3));
  OR2XL dec_sub_21_2_g220(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_21_2_n_2));
  INVX1 dec_sub_21_2_g221(.A (dec_sub_21_2_n_0), .Y (dec_sub_21_2_n_1));
  NOR2X1 dec_sub_21_2_g222(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_21_2_n_0));
endmodule


