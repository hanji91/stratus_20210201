`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:54:00 KST (Dec  7 2020 13:54:00 UTC)

module st_weight_addr_gen_Subi1u16_4_3(in1, out1);
  input [15:0] in1;
  output [16:0] out1;
  wire [15:0] in1;
  wire [16:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_3, dec_sub_21_2_n_5, dec_sub_21_2_n_7,
       dec_sub_21_2_n_9, dec_sub_21_2_n_10;
  wire dec_sub_21_2_n_12, dec_sub_21_2_n_15, dec_sub_21_2_n_17,
       dec_sub_21_2_n_18, dec_sub_21_2_n_19, dec_sub_21_2_n_21,
       dec_sub_21_2_n_22, dec_sub_21_2_n_23;
  wire dec_sub_21_2_n_26;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  AO21XL dec_sub_21_2_g184(.A0 (in1[15]), .A1 (dec_sub_21_2_n_26), .B0
       (out1[16]), .Y (out1[15]));
  NOR2X1 dec_sub_21_2_g185(.A (in1[15]), .B (dec_sub_21_2_n_26), .Y
       (out1[16]));
  XNOR2X1 dec_sub_21_2_g186(.A (in1[13]), .B (dec_sub_21_2_n_23), .Y
       (out1[13]));
  XOR2XL dec_sub_21_2_g187(.A (in1[11]), .B (dec_sub_21_2_n_22), .Y
       (out1[11]));
  XNOR2X1 dec_sub_21_2_g188(.A (in1[9]), .B (dec_sub_21_2_n_18), .Y
       (out1[9]));
  OAI2BB1X1 dec_sub_21_2_g189(.A0N (in1[14]), .A1N (dec_sub_21_2_n_21),
       .B0 (dec_sub_21_2_n_26), .Y (out1[14]));
  OR2X1 dec_sub_21_2_g190(.A (in1[14]), .B (dec_sub_21_2_n_21), .Y
       (dec_sub_21_2_n_26));
  AO21XL dec_sub_21_2_g191(.A0 (in1[10]), .A1 (dec_sub_21_2_n_19), .B0
       (dec_sub_21_2_n_22), .Y (out1[10]));
  OAI2BB1X1 dec_sub_21_2_g192(.A0N (in1[12]), .A1N (dec_sub_21_2_n_17),
       .B0 (dec_sub_21_2_n_23), .Y (out1[12]));
  OR2XL dec_sub_21_2_g193(.A (in1[12]), .B (dec_sub_21_2_n_17), .Y
       (dec_sub_21_2_n_23));
  NOR2X1 dec_sub_21_2_g194(.A (in1[10]), .B (dec_sub_21_2_n_19), .Y
       (dec_sub_21_2_n_22));
  OR3XL dec_sub_21_2_g195(.A (dec_sub_21_2_n_17), .B (in1[13]), .C
       (in1[12]), .Y (dec_sub_21_2_n_21));
  OAI2BB1X1 dec_sub_21_2_g196(.A0N (in1[8]), .A1N (dec_sub_21_2_n_0),
       .B0 (dec_sub_21_2_n_18), .Y (out1[8]));
  NAND2X1 dec_sub_21_2_g197(.A (dec_sub_21_2_n_2), .B
       (dec_sub_21_2_n_15), .Y (dec_sub_21_2_n_19));
  NAND2BX1 dec_sub_21_2_g198(.AN (in1[8]), .B (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_18));
  OR4X1 dec_sub_21_2_g199(.A (dec_sub_21_2_n_0), .B (in1[10]), .C
       (in1[11]), .D (dec_sub_21_2_n_3), .Y (dec_sub_21_2_n_17));
  OAI2BB1X1 dec_sub_21_2_g201(.A0N (in1[7]), .A1N (dec_sub_21_2_n_12),
       .B0 (dec_sub_21_2_n_0), .Y (out1[7]));
  INVX1 dec_sub_21_2_g202(.A (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_0));
  NOR2X1 dec_sub_21_2_g203(.A (in1[7]), .B (dec_sub_21_2_n_12), .Y
       (dec_sub_21_2_n_15));
  XNOR2X1 dec_sub_21_2_g204(.A (in1[5]), .B (dec_sub_21_2_n_10), .Y
       (out1[5]));
  OAI2BB1X1 dec_sub_21_2_g205(.A0N (in1[6]), .A1N (dec_sub_21_2_n_9),
       .B0 (dec_sub_21_2_n_12), .Y (out1[6]));
  OR2X1 dec_sub_21_2_g206(.A (in1[6]), .B (dec_sub_21_2_n_9), .Y
       (dec_sub_21_2_n_12));
  OAI2BB1X1 dec_sub_21_2_g207(.A0N (in1[4]), .A1N (dec_sub_21_2_n_7),
       .B0 (dec_sub_21_2_n_10), .Y (out1[4]));
  OR2XL dec_sub_21_2_g208(.A (in1[4]), .B (dec_sub_21_2_n_7), .Y
       (dec_sub_21_2_n_10));
  OR3XL dec_sub_21_2_g209(.A (dec_sub_21_2_n_7), .B (in1[5]), .C
       (in1[4]), .Y (dec_sub_21_2_n_9));
  OAI2BB1X1 dec_sub_21_2_g210(.A0N (in1[3]), .A1N (dec_sub_21_2_n_5),
       .B0 (dec_sub_21_2_n_7), .Y (out1[3]));
  OR2X1 dec_sub_21_2_g211(.A (in1[3]), .B (dec_sub_21_2_n_5), .Y
       (dec_sub_21_2_n_7));
  OAI2BB1X1 dec_sub_21_2_g212(.A0N (in1[2]), .A1N (dec_sub_21_2_n_1),
       .B0 (dec_sub_21_2_n_5), .Y (out1[2]));
  OR2XL dec_sub_21_2_g213(.A (in1[2]), .B (dec_sub_21_2_n_1), .Y
       (dec_sub_21_2_n_5));
  OAI2BB1X1 dec_sub_21_2_g214(.A0N (in1[1]), .A1N (in1[0]), .B0
       (dec_sub_21_2_n_1), .Y (out1[1]));
  INVX1 dec_sub_21_2_g215(.A (dec_sub_21_2_n_2), .Y (dec_sub_21_2_n_3));
  NOR2X1 dec_sub_21_2_g216(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_21_2_n_2));
  OR2XL dec_sub_21_2_g217(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_1));
endmodule


