`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:10 KST (Dec  7 2020 13:18:10 UTC)

module st_feature_addr_gen_Sub_18S_22_4(in1, out1);
  input [16:0] in1;
  output [17:0] out1;
  wire [16:0] in1;
  wire [17:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_3, dec_sub_21_2_n_5, dec_sub_21_2_n_7,
       dec_sub_21_2_n_9, dec_sub_21_2_n_10;
  wire dec_sub_21_2_n_12, dec_sub_21_2_n_15, dec_sub_21_2_n_17,
       dec_sub_21_2_n_18, dec_sub_21_2_n_19, dec_sub_21_2_n_21,
       dec_sub_21_2_n_22, dec_sub_21_2_n_23;
  wire dec_sub_21_2_n_26, dec_sub_21_2_n_31;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  AO21XL dec_sub_21_2_g192(.A0 (in1[16]), .A1 (dec_sub_21_2_n_31), .B0
       (out1[17]), .Y (out1[16]));
  NOR2X1 dec_sub_21_2_g193(.A (in1[16]), .B (dec_sub_21_2_n_31), .Y
       (out1[17]));
  OAI2BB1X1 dec_sub_21_2_g194(.A0N (in1[15]), .A1N (dec_sub_21_2_n_26),
       .B0 (dec_sub_21_2_n_31), .Y (out1[15]));
  OR2X1 dec_sub_21_2_g195(.A (in1[15]), .B (dec_sub_21_2_n_26), .Y
       (dec_sub_21_2_n_31));
  XNOR2X1 dec_sub_21_2_g196(.A (in1[13]), .B (dec_sub_21_2_n_23), .Y
       (out1[13]));
  XOR2XL dec_sub_21_2_g197(.A (in1[11]), .B (dec_sub_21_2_n_22), .Y
       (out1[11]));
  XNOR2X1 dec_sub_21_2_g198(.A (in1[9]), .B (dec_sub_21_2_n_18), .Y
       (out1[9]));
  OAI2BB1X1 dec_sub_21_2_g199(.A0N (in1[14]), .A1N (dec_sub_21_2_n_21),
       .B0 (dec_sub_21_2_n_26), .Y (out1[14]));
  OR2XL dec_sub_21_2_g200(.A (in1[14]), .B (dec_sub_21_2_n_21), .Y
       (dec_sub_21_2_n_26));
  AO21XL dec_sub_21_2_g201(.A0 (in1[10]), .A1 (dec_sub_21_2_n_19), .B0
       (dec_sub_21_2_n_22), .Y (out1[10]));
  OAI2BB1X1 dec_sub_21_2_g202(.A0N (in1[12]), .A1N (dec_sub_21_2_n_17),
       .B0 (dec_sub_21_2_n_23), .Y (out1[12]));
  OR2XL dec_sub_21_2_g203(.A (in1[12]), .B (dec_sub_21_2_n_17), .Y
       (dec_sub_21_2_n_23));
  NOR2X1 dec_sub_21_2_g204(.A (in1[10]), .B (dec_sub_21_2_n_19), .Y
       (dec_sub_21_2_n_22));
  OR3XL dec_sub_21_2_g205(.A (dec_sub_21_2_n_17), .B (in1[13]), .C
       (in1[12]), .Y (dec_sub_21_2_n_21));
  OAI2BB1X1 dec_sub_21_2_g206(.A0N (in1[8]), .A1N (dec_sub_21_2_n_0),
       .B0 (dec_sub_21_2_n_18), .Y (out1[8]));
  NAND2X1 dec_sub_21_2_g207(.A (dec_sub_21_2_n_1), .B
       (dec_sub_21_2_n_15), .Y (dec_sub_21_2_n_19));
  NAND2BX1 dec_sub_21_2_g208(.AN (in1[8]), .B (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_18));
  OR4X1 dec_sub_21_2_g209(.A (dec_sub_21_2_n_0), .B (in1[10]), .C
       (in1[11]), .D (dec_sub_21_2_n_2), .Y (dec_sub_21_2_n_17));
  OAI2BB1X1 dec_sub_21_2_g211(.A0N (in1[7]), .A1N (dec_sub_21_2_n_12),
       .B0 (dec_sub_21_2_n_0), .Y (out1[7]));
  INVX1 dec_sub_21_2_g212(.A (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_0));
  NOR2X1 dec_sub_21_2_g213(.A (in1[7]), .B (dec_sub_21_2_n_12), .Y
       (dec_sub_21_2_n_15));
  XNOR2X1 dec_sub_21_2_g214(.A (in1[5]), .B (dec_sub_21_2_n_10), .Y
       (out1[5]));
  OAI2BB1X1 dec_sub_21_2_g215(.A0N (in1[6]), .A1N (dec_sub_21_2_n_9),
       .B0 (dec_sub_21_2_n_12), .Y (out1[6]));
  OR2X1 dec_sub_21_2_g216(.A (in1[6]), .B (dec_sub_21_2_n_9), .Y
       (dec_sub_21_2_n_12));
  OAI2BB1X1 dec_sub_21_2_g217(.A0N (in1[4]), .A1N (dec_sub_21_2_n_7),
       .B0 (dec_sub_21_2_n_10), .Y (out1[4]));
  OR2XL dec_sub_21_2_g218(.A (in1[4]), .B (dec_sub_21_2_n_7), .Y
       (dec_sub_21_2_n_10));
  OR3XL dec_sub_21_2_g219(.A (dec_sub_21_2_n_7), .B (in1[5]), .C
       (in1[4]), .Y (dec_sub_21_2_n_9));
  OAI2BB1X1 dec_sub_21_2_g220(.A0N (in1[3]), .A1N (dec_sub_21_2_n_5),
       .B0 (dec_sub_21_2_n_7), .Y (out1[3]));
  OR2X1 dec_sub_21_2_g221(.A (in1[3]), .B (dec_sub_21_2_n_5), .Y
       (dec_sub_21_2_n_7));
  OAI2BB1X1 dec_sub_21_2_g222(.A0N (in1[2]), .A1N (dec_sub_21_2_n_3),
       .B0 (dec_sub_21_2_n_5), .Y (out1[2]));
  OR2XL dec_sub_21_2_g223(.A (in1[2]), .B (dec_sub_21_2_n_3), .Y
       (dec_sub_21_2_n_5));
  OAI2BB1X1 dec_sub_21_2_g224(.A0N (in1[1]), .A1N (in1[0]), .B0
       (dec_sub_21_2_n_3), .Y (out1[1]));
  OR2XL dec_sub_21_2_g225(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_3));
  INVX1 dec_sub_21_2_g226(.A (dec_sub_21_2_n_1), .Y (dec_sub_21_2_n_2));
  NOR2X1 dec_sub_21_2_g227(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_21_2_n_1));
endmodule


