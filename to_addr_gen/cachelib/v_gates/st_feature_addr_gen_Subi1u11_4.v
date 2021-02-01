`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:43 KST (Dec  7 2020 13:18:43 UTC)

module st_feature_addr_gen_Subi1u11_4(in1, out1);
  input [10:0] in1;
  output [11:0] out1;
  wire [10:0] in1;
  wire [11:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_3,
       dec_sub_21_2_n_5, dec_sub_21_2_n_7, dec_sub_21_2_n_8,
       dec_sub_21_2_n_10, dec_sub_21_2_n_13;
  wire dec_sub_21_2_n_15, dec_sub_21_2_n_17, dec_sub_21_2_n_20;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  INVX1 dec_sub_21_2_g123(.A (dec_sub_21_2_n_20), .Y (out1[10]));
  ADDHX1 dec_sub_21_2_g124(.A (dec_sub_21_2_n_0), .B
       (dec_sub_21_2_n_17), .CO (out1[11]), .S (dec_sub_21_2_n_20));
  AO21XL dec_sub_21_2_g125(.A0 (in1[9]), .A1 (dec_sub_21_2_n_15), .B0
       (dec_sub_21_2_n_17), .Y (out1[9]));
  NOR2X1 dec_sub_21_2_g126(.A (in1[9]), .B (dec_sub_21_2_n_15), .Y
       (dec_sub_21_2_n_17));
  OAI2BB1X1 dec_sub_21_2_g127(.A0N (in1[8]), .A1N (dec_sub_21_2_n_13),
       .B0 (dec_sub_21_2_n_15), .Y (out1[8]));
  OR2X1 dec_sub_21_2_g128(.A (in1[8]), .B (dec_sub_21_2_n_13), .Y
       (dec_sub_21_2_n_15));
  OAI2BB1X1 dec_sub_21_2_g129(.A0N (in1[7]), .A1N (dec_sub_21_2_n_10),
       .B0 (dec_sub_21_2_n_13), .Y (out1[7]));
  OR2XL dec_sub_21_2_g130(.A (in1[7]), .B (dec_sub_21_2_n_10), .Y
       (dec_sub_21_2_n_13));
  XNOR2X1 dec_sub_21_2_g131(.A (in1[5]), .B (dec_sub_21_2_n_8), .Y
       (out1[5]));
  OAI2BB1X1 dec_sub_21_2_g132(.A0N (in1[6]), .A1N (dec_sub_21_2_n_7),
       .B0 (dec_sub_21_2_n_10), .Y (out1[6]));
  OR2XL dec_sub_21_2_g133(.A (in1[6]), .B (dec_sub_21_2_n_7), .Y
       (dec_sub_21_2_n_10));
  OAI2BB1X1 dec_sub_21_2_g134(.A0N (in1[4]), .A1N (dec_sub_21_2_n_5),
       .B0 (dec_sub_21_2_n_8), .Y (out1[4]));
  OR2XL dec_sub_21_2_g135(.A (in1[4]), .B (dec_sub_21_2_n_5), .Y
       (dec_sub_21_2_n_8));
  OR3XL dec_sub_21_2_g136(.A (dec_sub_21_2_n_5), .B (in1[5]), .C
       (in1[4]), .Y (dec_sub_21_2_n_7));
  OAI2BB1X1 dec_sub_21_2_g137(.A0N (in1[3]), .A1N (dec_sub_21_2_n_3),
       .B0 (dec_sub_21_2_n_5), .Y (out1[3]));
  OR2X1 dec_sub_21_2_g138(.A (in1[3]), .B (dec_sub_21_2_n_3), .Y
       (dec_sub_21_2_n_5));
  OAI2BB1X1 dec_sub_21_2_g139(.A0N (in1[2]), .A1N (dec_sub_21_2_n_1),
       .B0 (dec_sub_21_2_n_3), .Y (out1[2]));
  OR2XL dec_sub_21_2_g140(.A (in1[2]), .B (dec_sub_21_2_n_1), .Y
       (dec_sub_21_2_n_3));
  OAI2BB1X1 dec_sub_21_2_g141(.A0N (in1[1]), .A1N (in1[0]), .B0
       (dec_sub_21_2_n_1), .Y (out1[1]));
  OR2XL dec_sub_21_2_g142(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_1));
  INVX1 dec_sub_21_2_g143(.A (in1[10]), .Y (dec_sub_21_2_n_0));
endmodule


