`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:40:50 KST (Dec  7 2020 13:40:50 UTC)

module st_feature_addr_gen_Sub_16Ux1U_17S_4_0(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire in1;
  wire [16:0] out1;
  wire dec_sub_23_2_n_0, dec_sub_23_2_n_1, dec_sub_23_2_n_2,
       dec_sub_23_2_n_3, dec_sub_23_2_n_5, dec_sub_23_2_n_7,
       dec_sub_23_2_n_9, dec_sub_23_2_n_10;
  wire dec_sub_23_2_n_11, dec_sub_23_2_n_12, dec_sub_23_2_n_14,
       dec_sub_23_2_n_16, dec_sub_23_2_n_18, dec_sub_23_2_n_19,
       dec_sub_23_2_n_21, dec_sub_23_2_n_22;
  wire dec_sub_23_2_n_23, dec_sub_23_2_n_27;
  XNOR2X1 dec_sub_23_2_g198(.A (in2[15]), .B (dec_sub_23_2_n_27), .Y
       (out1[15]));
  XNOR2X1 dec_sub_23_2_g199(.A (in2[13]), .B (dec_sub_23_2_n_23), .Y
       (out1[13]));
  XOR2XL dec_sub_23_2_g200(.A (in2[11]), .B (dec_sub_23_2_n_22), .Y
       (out1[11]));
  XNOR2X1 dec_sub_23_2_g201(.A (in2[9]), .B (dec_sub_23_2_n_18), .Y
       (out1[9]));
  NOR3X1 dec_sub_23_2_g202(.A (in2[14]), .B (in2[15]), .C
       (dec_sub_23_2_n_21), .Y (out1[16]));
  XNOR2X1 dec_sub_23_2_g203(.A (in2[14]), .B (dec_sub_23_2_n_21), .Y
       (out1[14]));
  XOR2XL dec_sub_23_2_g204(.A (in2[7]), .B (dec_sub_23_2_n_14), .Y
       (out1[7]));
  OR2XL dec_sub_23_2_g205(.A (in2[14]), .B (dec_sub_23_2_n_21), .Y
       (dec_sub_23_2_n_27));
  AO21XL dec_sub_23_2_g206(.A0 (in2[10]), .A1 (dec_sub_23_2_n_19), .B0
       (dec_sub_23_2_n_22), .Y (out1[10]));
  OAI2BB1X1 dec_sub_23_2_g207(.A0N (in2[12]), .A1N (dec_sub_23_2_n_16),
       .B0 (dec_sub_23_2_n_23), .Y (out1[12]));
  XNOR2X1 dec_sub_23_2_g208(.A (in2[5]), .B (dec_sub_23_2_n_11), .Y
       (out1[5]));
  OR2XL dec_sub_23_2_g209(.A (in2[12]), .B (dec_sub_23_2_n_16), .Y
       (dec_sub_23_2_n_23));
  NOR2X1 dec_sub_23_2_g210(.A (in2[10]), .B (dec_sub_23_2_n_19), .Y
       (dec_sub_23_2_n_22));
  OR3XL dec_sub_23_2_g211(.A (dec_sub_23_2_n_16), .B (in2[13]), .C
       (in2[12]), .Y (dec_sub_23_2_n_21));
  OAI2BB1X1 dec_sub_23_2_g212(.A0N (in2[8]), .A1N (dec_sub_23_2_n_12),
       .B0 (dec_sub_23_2_n_18), .Y (out1[8]));
  NAND2BX1 dec_sub_23_2_g213(.AN (dec_sub_23_2_n_12), .B
       (dec_sub_23_2_n_1), .Y (dec_sub_23_2_n_19));
  OR2XL dec_sub_23_2_g214(.A (in2[8]), .B (dec_sub_23_2_n_12), .Y
       (dec_sub_23_2_n_18));
  AO21XL dec_sub_23_2_g215(.A0 (in2[6]), .A1 (dec_sub_23_2_n_10), .B0
       (dec_sub_23_2_n_14), .Y (out1[6]));
  OR4X1 dec_sub_23_2_g216(.A (dec_sub_23_2_n_12), .B (in2[10]), .C
       (in2[11]), .D (dec_sub_23_2_n_2), .Y (dec_sub_23_2_n_16));
  XNOR2X1 dec_sub_23_2_g217(.A (in2[3]), .B (dec_sub_23_2_n_7), .Y
       (out1[3]));
  NOR2X1 dec_sub_23_2_g218(.A (in2[6]), .B (dec_sub_23_2_n_10), .Y
       (dec_sub_23_2_n_14));
  OAI2BB1X1 dec_sub_23_2_g219(.A0N (in2[4]), .A1N (dec_sub_23_2_n_9),
       .B0 (dec_sub_23_2_n_11), .Y (out1[4]));
  OR4X1 dec_sub_23_2_g220(.A (in2[7]), .B (in2[6]), .C
       (dec_sub_23_2_n_0), .D (dec_sub_23_2_n_9), .Y
       (dec_sub_23_2_n_12));
  OR2XL dec_sub_23_2_g221(.A (in2[4]), .B (dec_sub_23_2_n_9), .Y
       (dec_sub_23_2_n_11));
  OR2XL dec_sub_23_2_g222(.A (dec_sub_23_2_n_0), .B (dec_sub_23_2_n_9),
       .Y (dec_sub_23_2_n_10));
  OR3XL dec_sub_23_2_g223(.A (in2[2]), .B (in2[3]), .C
       (dec_sub_23_2_n_5), .Y (dec_sub_23_2_n_9));
  OAI2BB1X1 dec_sub_23_2_g224(.A0N (in2[2]), .A1N (dec_sub_23_2_n_5),
       .B0 (dec_sub_23_2_n_7), .Y (out1[2]));
  OR2XL dec_sub_23_2_g225(.A (in2[2]), .B (dec_sub_23_2_n_5), .Y
       (dec_sub_23_2_n_7));
  OAI2BB1X1 dec_sub_23_2_g226(.A0N (in2[1]), .A1N (dec_sub_23_2_n_3),
       .B0 (dec_sub_23_2_n_5), .Y (out1[1]));
  OR2X1 dec_sub_23_2_g227(.A (in2[1]), .B (dec_sub_23_2_n_3), .Y
       (dec_sub_23_2_n_5));
  XOR2XL dec_sub_23_2_g228(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2BX1 dec_sub_23_2_g229(.AN (in2[0]), .B (in1), .Y
       (dec_sub_23_2_n_3));
  INVX1 dec_sub_23_2_g230(.A (dec_sub_23_2_n_1), .Y (dec_sub_23_2_n_2));
  NOR2X1 dec_sub_23_2_g231(.A (in2[9]), .B (in2[8]), .Y
       (dec_sub_23_2_n_1));
  OR2XL dec_sub_23_2_g232(.A (in2[5]), .B (in2[4]), .Y
       (dec_sub_23_2_n_0));
endmodule


