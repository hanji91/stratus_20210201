`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:19:36 KST (Jan 20 2021 09:19:36 UTC)

module st_feature_addr_gen_Subi1u11_4_4(in1, out1);
  input [10:0] in1;
  output [11:0] out1;
  wire [10:0] in1;
  wire [11:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_4, dec_sub_21_2_n_5, dec_sub_21_2_n_7,
       dec_sub_21_2_n_8, dec_sub_21_2_n_9;
  wire dec_sub_21_2_n_11, dec_sub_21_2_n_14, dec_sub_21_2_n_16;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 dec_sub_21_2_g126(.A (in1[9]), .B (dec_sub_21_2_n_14), .Y
       (out1[9]));
  XOR2XL dec_sub_21_2_g127(.A (in1[10]), .B (dec_sub_21_2_n_16), .Y
       (out1[10]));
  XOR2XL dec_sub_21_2_g128(.A (in1[7]), .B (dec_sub_21_2_n_11), .Y
       (out1[7]));
  NOR2BX1 dec_sub_21_2_g129(.AN (dec_sub_21_2_n_16), .B (in1[10]), .Y
       (out1[11]));
  XNOR2X1 dec_sub_21_2_g130(.A (in1[5]), .B (dec_sub_21_2_n_7), .Y
       (out1[5]));
  NOR3BX1 dec_sub_21_2_g131(.AN (dec_sub_21_2_n_9), .B (in1[8]), .C
       (in1[9]), .Y (dec_sub_21_2_n_16));
  OAI21XL dec_sub_21_2_g132(.A0 (dec_sub_21_2_n_0), .A1
       (dec_sub_21_2_n_9), .B0 (dec_sub_21_2_n_14), .Y (out1[8]));
  NAND2X1 dec_sub_21_2_g133(.A (dec_sub_21_2_n_0), .B
       (dec_sub_21_2_n_9), .Y (dec_sub_21_2_n_14));
  AO21XL dec_sub_21_2_g134(.A0 (in1[6]), .A1 (dec_sub_21_2_n_8), .B0
       (dec_sub_21_2_n_11), .Y (out1[6]));
  XNOR2X1 dec_sub_21_2_g135(.A (in1[3]), .B (dec_sub_21_2_n_4), .Y
       (out1[3]));
  NOR2X1 dec_sub_21_2_g136(.A (in1[6]), .B (dec_sub_21_2_n_8), .Y
       (dec_sub_21_2_n_11));
  OAI2BB1X1 dec_sub_21_2_g137(.A0N (in1[4]), .A1N (dec_sub_21_2_n_5),
       .B0 (dec_sub_21_2_n_7), .Y (out1[4]));
  NOR4X1 dec_sub_21_2_g138(.A (in1[7]), .B (in1[6]), .C
       (dec_sub_21_2_n_2), .D (dec_sub_21_2_n_5), .Y
       (dec_sub_21_2_n_9));
  OR2XL dec_sub_21_2_g139(.A (dec_sub_21_2_n_2), .B (dec_sub_21_2_n_5),
       .Y (dec_sub_21_2_n_8));
  OR2XL dec_sub_21_2_g140(.A (in1[4]), .B (dec_sub_21_2_n_5), .Y
       (dec_sub_21_2_n_7));
  OAI2BB1X1 dec_sub_21_2_g141(.A0N (in1[2]), .A1N (dec_sub_21_2_n_1),
       .B0 (dec_sub_21_2_n_4), .Y (out1[2]));
  OR3XL dec_sub_21_2_g142(.A (in1[2]), .B (in1[3]), .C
       (dec_sub_21_2_n_1), .Y (dec_sub_21_2_n_5));
  OR2XL dec_sub_21_2_g143(.A (in1[2]), .B (dec_sub_21_2_n_1), .Y
       (dec_sub_21_2_n_4));
  XNOR2X1 dec_sub_21_2_g144(.A (in1[1]), .B (in1[0]), .Y (out1[1]));
  OR2XL dec_sub_21_2_g145(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_21_2_n_2));
  OR2XL dec_sub_21_2_g146(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_1));
  INVX1 dec_sub_21_2_g147(.A (in1[8]), .Y (dec_sub_21_2_n_0));
endmodule

