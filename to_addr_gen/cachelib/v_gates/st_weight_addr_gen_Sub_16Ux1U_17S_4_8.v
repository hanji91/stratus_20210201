`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 00:05:35 KST (Dec  7 2020 15:05:35 UTC)

module st_weight_addr_gen_Sub_16Ux1U_17S_4_8(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire in1;
  wire [16:0] out1;
  wire dec_sub_23_2_n_0, dec_sub_23_2_n_1, dec_sub_23_2_n_2,
       dec_sub_23_2_n_3, dec_sub_23_2_n_4, dec_sub_23_2_n_6,
       dec_sub_23_2_n_8, dec_sub_23_2_n_10;
  wire dec_sub_23_2_n_12, dec_sub_23_2_n_13, dec_sub_23_2_n_15,
       dec_sub_23_2_n_18, dec_sub_23_2_n_20, dec_sub_23_2_n_21,
       dec_sub_23_2_n_22, dec_sub_23_2_n_24;
  wire dec_sub_23_2_n_25, dec_sub_23_2_n_26, dec_sub_23_2_n_29;
  AO21XL dec_sub_23_2_g189(.A0 (in2[15]), .A1 (dec_sub_23_2_n_29), .B0
       (out1[16]), .Y (out1[15]));
  NOR2X1 dec_sub_23_2_g190(.A (in2[15]), .B (dec_sub_23_2_n_29), .Y
       (out1[16]));
  XNOR2X1 dec_sub_23_2_g191(.A (in2[13]), .B (dec_sub_23_2_n_26), .Y
       (out1[13]));
  XOR2XL dec_sub_23_2_g192(.A (in2[11]), .B (dec_sub_23_2_n_25), .Y
       (out1[11]));
  XNOR2X1 dec_sub_23_2_g193(.A (in2[9]), .B (dec_sub_23_2_n_21), .Y
       (out1[9]));
  OAI2BB1X1 dec_sub_23_2_g194(.A0N (in2[14]), .A1N (dec_sub_23_2_n_24),
       .B0 (dec_sub_23_2_n_29), .Y (out1[14]));
  OR2X1 dec_sub_23_2_g195(.A (in2[14]), .B (dec_sub_23_2_n_24), .Y
       (dec_sub_23_2_n_29));
  AO21XL dec_sub_23_2_g196(.A0 (in2[10]), .A1 (dec_sub_23_2_n_22), .B0
       (dec_sub_23_2_n_25), .Y (out1[10]));
  OAI2BB1X1 dec_sub_23_2_g197(.A0N (in2[12]), .A1N (dec_sub_23_2_n_20),
       .B0 (dec_sub_23_2_n_26), .Y (out1[12]));
  OR2XL dec_sub_23_2_g198(.A (in2[12]), .B (dec_sub_23_2_n_20), .Y
       (dec_sub_23_2_n_26));
  NOR2X1 dec_sub_23_2_g199(.A (in2[10]), .B (dec_sub_23_2_n_22), .Y
       (dec_sub_23_2_n_25));
  OR3XL dec_sub_23_2_g200(.A (dec_sub_23_2_n_20), .B (in2[13]), .C
       (in2[12]), .Y (dec_sub_23_2_n_24));
  OAI2BB1X1 dec_sub_23_2_g201(.A0N (in2[8]), .A1N (dec_sub_23_2_n_0),
       .B0 (dec_sub_23_2_n_21), .Y (out1[8]));
  NAND2X1 dec_sub_23_2_g202(.A (dec_sub_23_2_n_3), .B
       (dec_sub_23_2_n_18), .Y (dec_sub_23_2_n_22));
  NAND2BX1 dec_sub_23_2_g203(.AN (in2[8]), .B (dec_sub_23_2_n_18), .Y
       (dec_sub_23_2_n_21));
  OR4X1 dec_sub_23_2_g204(.A (dec_sub_23_2_n_0), .B (in2[10]), .C
       (in2[11]), .D (dec_sub_23_2_n_4), .Y (dec_sub_23_2_n_20));
  OAI2BB1X1 dec_sub_23_2_g206(.A0N (in2[7]), .A1N (dec_sub_23_2_n_15),
       .B0 (dec_sub_23_2_n_0), .Y (out1[7]));
  INVX1 dec_sub_23_2_g207(.A (dec_sub_23_2_n_18), .Y
       (dec_sub_23_2_n_0));
  NOR2X1 dec_sub_23_2_g208(.A (in2[7]), .B (dec_sub_23_2_n_15), .Y
       (dec_sub_23_2_n_18));
  XNOR2X1 dec_sub_23_2_g209(.A (in2[5]), .B (dec_sub_23_2_n_13), .Y
       (out1[5]));
  OAI2BB1X1 dec_sub_23_2_g210(.A0N (in2[6]), .A1N (dec_sub_23_2_n_12),
       .B0 (dec_sub_23_2_n_15), .Y (out1[6]));
  OR2X1 dec_sub_23_2_g211(.A (in2[6]), .B (dec_sub_23_2_n_12), .Y
       (dec_sub_23_2_n_15));
  OAI2BB1X1 dec_sub_23_2_g212(.A0N (in2[4]), .A1N (dec_sub_23_2_n_10),
       .B0 (dec_sub_23_2_n_13), .Y (out1[4]));
  OR2XL dec_sub_23_2_g213(.A (in2[4]), .B (dec_sub_23_2_n_10), .Y
       (dec_sub_23_2_n_13));
  OR3XL dec_sub_23_2_g214(.A (dec_sub_23_2_n_10), .B (in2[5]), .C
       (in2[4]), .Y (dec_sub_23_2_n_12));
  OAI2BB1X1 dec_sub_23_2_g215(.A0N (in2[3]), .A1N (dec_sub_23_2_n_8),
       .B0 (dec_sub_23_2_n_10), .Y (out1[3]));
  OR2XL dec_sub_23_2_g216(.A (in2[3]), .B (dec_sub_23_2_n_8), .Y
       (dec_sub_23_2_n_10));
  OAI2BB1X1 dec_sub_23_2_g217(.A0N (in2[2]), .A1N (dec_sub_23_2_n_6),
       .B0 (dec_sub_23_2_n_8), .Y (out1[2]));
  OR2XL dec_sub_23_2_g218(.A (in2[2]), .B (dec_sub_23_2_n_6), .Y
       (dec_sub_23_2_n_8));
  OAI2BB1X1 dec_sub_23_2_g219(.A0N (in2[1]), .A1N (dec_sub_23_2_n_2),
       .B0 (dec_sub_23_2_n_6), .Y (out1[1]));
  OR2XL dec_sub_23_2_g220(.A (in2[1]), .B (dec_sub_23_2_n_2), .Y
       (dec_sub_23_2_n_6));
  OAI2BB1X1 dec_sub_23_2_g221(.A0N (in2[0]), .A1N (dec_sub_23_2_n_1),
       .B0 (dec_sub_23_2_n_2), .Y (out1[0]));
  INVX1 dec_sub_23_2_g222(.A (dec_sub_23_2_n_3), .Y (dec_sub_23_2_n_4));
  NOR2X1 dec_sub_23_2_g223(.A (in2[9]), .B (in2[8]), .Y
       (dec_sub_23_2_n_3));
  NAND2BX1 dec_sub_23_2_g224(.AN (in2[0]), .B (in1), .Y
       (dec_sub_23_2_n_2));
  INVXL dec_sub_23_2_g225(.A (in1), .Y (dec_sub_23_2_n_1));
endmodule


