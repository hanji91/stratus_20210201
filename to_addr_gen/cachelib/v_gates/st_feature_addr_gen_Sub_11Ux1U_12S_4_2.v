`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:14 KST (Dec  8 2020 00:47:14 UTC)

module st_feature_addr_gen_Sub_11Ux1U_12S_4_2(in2, in1, out1);
  input [10:0] in2;
  input in1;
  output [11:0] out1;
  wire [10:0] in2;
  wire in1;
  wire [11:0] out1;
  wire dec_sub_23_2_n_0, dec_sub_23_2_n_1, dec_sub_23_2_n_2,
       dec_sub_23_2_n_4, dec_sub_23_2_n_6, dec_sub_23_2_n_8,
       dec_sub_23_2_n_10, dec_sub_23_2_n_11;
  wire dec_sub_23_2_n_13, dec_sub_23_2_n_16, dec_sub_23_2_n_18,
       dec_sub_23_2_n_20, dec_sub_23_2_n_23;
  INVX1 dec_sub_23_2_g128(.A (dec_sub_23_2_n_23), .Y (out1[10]));
  ADDHX1 dec_sub_23_2_g129(.A (dec_sub_23_2_n_1), .B
       (dec_sub_23_2_n_20), .CO (out1[11]), .S (dec_sub_23_2_n_23));
  AO21XL dec_sub_23_2_g130(.A0 (in2[9]), .A1 (dec_sub_23_2_n_18), .B0
       (dec_sub_23_2_n_20), .Y (out1[9]));
  NOR2X1 dec_sub_23_2_g131(.A (in2[9]), .B (dec_sub_23_2_n_18), .Y
       (dec_sub_23_2_n_20));
  OAI2BB1X1 dec_sub_23_2_g132(.A0N (in2[8]), .A1N (dec_sub_23_2_n_16),
       .B0 (dec_sub_23_2_n_18), .Y (out1[8]));
  OR2X1 dec_sub_23_2_g133(.A (in2[8]), .B (dec_sub_23_2_n_16), .Y
       (dec_sub_23_2_n_18));
  OAI2BB1X1 dec_sub_23_2_g134(.A0N (in2[7]), .A1N (dec_sub_23_2_n_13),
       .B0 (dec_sub_23_2_n_16), .Y (out1[7]));
  OR2XL dec_sub_23_2_g135(.A (in2[7]), .B (dec_sub_23_2_n_13), .Y
       (dec_sub_23_2_n_16));
  XNOR2X1 dec_sub_23_2_g136(.A (in2[5]), .B (dec_sub_23_2_n_11), .Y
       (out1[5]));
  OAI2BB1X1 dec_sub_23_2_g137(.A0N (in2[6]), .A1N (dec_sub_23_2_n_10),
       .B0 (dec_sub_23_2_n_13), .Y (out1[6]));
  OR2XL dec_sub_23_2_g138(.A (in2[6]), .B (dec_sub_23_2_n_10), .Y
       (dec_sub_23_2_n_13));
  OAI2BB1X1 dec_sub_23_2_g139(.A0N (in2[4]), .A1N (dec_sub_23_2_n_8),
       .B0 (dec_sub_23_2_n_11), .Y (out1[4]));
  OR2XL dec_sub_23_2_g140(.A (in2[4]), .B (dec_sub_23_2_n_8), .Y
       (dec_sub_23_2_n_11));
  OR3XL dec_sub_23_2_g141(.A (dec_sub_23_2_n_8), .B (in2[5]), .C
       (in2[4]), .Y (dec_sub_23_2_n_10));
  OAI2BB1X1 dec_sub_23_2_g142(.A0N (in2[3]), .A1N (dec_sub_23_2_n_6),
       .B0 (dec_sub_23_2_n_8), .Y (out1[3]));
  OR2XL dec_sub_23_2_g143(.A (in2[3]), .B (dec_sub_23_2_n_6), .Y
       (dec_sub_23_2_n_8));
  OAI2BB1X1 dec_sub_23_2_g144(.A0N (in2[2]), .A1N (dec_sub_23_2_n_4),
       .B0 (dec_sub_23_2_n_6), .Y (out1[2]));
  OR2XL dec_sub_23_2_g145(.A (in2[2]), .B (dec_sub_23_2_n_4), .Y
       (dec_sub_23_2_n_6));
  OAI2BB1X1 dec_sub_23_2_g146(.A0N (in2[1]), .A1N (dec_sub_23_2_n_2),
       .B0 (dec_sub_23_2_n_4), .Y (out1[1]));
  OR2XL dec_sub_23_2_g147(.A (in2[1]), .B (dec_sub_23_2_n_2), .Y
       (dec_sub_23_2_n_4));
  OAI2BB1X1 dec_sub_23_2_g148(.A0N (in2[0]), .A1N (dec_sub_23_2_n_0),
       .B0 (dec_sub_23_2_n_2), .Y (out1[0]));
  NAND2BX1 dec_sub_23_2_g149(.AN (in2[0]), .B (in1), .Y
       (dec_sub_23_2_n_2));
  INVX1 dec_sub_23_2_g150(.A (in2[10]), .Y (dec_sub_23_2_n_1));
  INVXL dec_sub_23_2_g151(.A (in1), .Y (dec_sub_23_2_n_0));
endmodule


