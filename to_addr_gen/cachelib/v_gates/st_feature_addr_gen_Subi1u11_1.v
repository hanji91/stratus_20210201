`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:19:36 KST (Dec  7 2020 13:19:36 UTC)

module st_feature_addr_gen_Subi1u11_1(in1, out1);
  input [10:0] in1;
  output [11:0] out1;
  wire [10:0] in1;
  wire [11:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_3, dec_sub_21_2_n_4, dec_sub_21_2_n_5,
       dec_sub_21_2_n_6, dec_sub_21_2_n_7;
  wire dec_sub_21_2_n_8, dec_sub_21_2_n_9, dec_sub_21_2_n_10,
       dec_sub_21_2_n_11, dec_sub_21_2_n_12, dec_sub_21_2_n_13,
       dec_sub_21_2_n_14, dec_sub_21_2_n_16;
  wire dec_sub_21_2_n_17, dec_sub_21_2_n_18, dec_sub_21_2_n_19,
       dec_sub_21_2_n_20, dec_sub_21_2_n_21, dec_sub_21_2_n_22,
       dec_sub_21_2_n_23, dec_sub_21_2_n_25;
  wire dec_sub_21_2_n_27, dec_sub_21_2_n_28, dec_sub_21_2_n_31,
       dec_sub_21_2_n_59, dec_sub_21_2_n_60, dec_sub_21_2_n_61,
       dec_sub_21_2_n_69, dec_sub_21_2_n_70;
  wire dec_sub_21_2_n_71;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  MXI2X1 dec_sub_21_2_g128(.A (dec_sub_21_2_n_4), .B (in1[9]), .S0
       (dec_sub_21_2_n_31), .Y (out1[9]));
  MXI2XL dec_sub_21_2_g129(.A (dec_sub_21_2_n_7), .B (in1[5]), .S0
       (dec_sub_21_2_n_28), .Y (out1[5]));
  MXI2X1 dec_sub_21_2_g130(.A (dec_sub_21_2_n_9), .B (in1[10]), .S0
       (dec_sub_21_2_n_0), .Y (out1[10]));
  MXI2XL dec_sub_21_2_g131(.A (dec_sub_21_2_n_5), .B (in1[3]), .S0
       (dec_sub_21_2_n_21), .Y (out1[3]));
  MXI2XL dec_sub_21_2_g132(.A (dec_sub_21_2_n_2), .B (in1[6]), .S0
       (dec_sub_21_2_n_1), .Y (out1[6]));
  MXI2XL dec_sub_21_2_g133(.A (dec_sub_21_2_n_6), .B (in1[7]), .S0
       (dec_sub_21_2_n_23), .Y (out1[7]));
  MXI2XL dec_sub_21_2_g134(.A (dec_sub_21_2_n_3), .B (in1[8]), .S0
       (dec_sub_21_2_n_70), .Y (out1[8]));
  NOR2X2 dec_sub_21_2_g136(.A (in1[8]), .B (dec_sub_21_2_n_71), .Y
       (dec_sub_21_2_n_31));
  NAND2BXL dec_sub_21_2_g137(.AN (dec_sub_21_2_n_28), .B
       (dec_sub_21_2_n_27), .Y (out1[4]));
  NOR2X1 dec_sub_21_2_g138(.A (dec_sub_21_2_n_18), .B
       (dec_sub_21_2_n_69), .Y (out1[11]));
  NOR2X1 dec_sub_21_2_g140(.A (in1[4]), .B (dec_sub_21_2_n_60), .Y
       (dec_sub_21_2_n_28));
  NAND2XL dec_sub_21_2_g141(.A (in1[4]), .B (dec_sub_21_2_n_59), .Y
       (dec_sub_21_2_n_27));
  NOR2X4 dec_sub_21_2_g143(.A (dec_sub_21_2_n_16), .B
       (dec_sub_21_2_n_20), .Y (dec_sub_21_2_n_25));
  NAND2BXL dec_sub_21_2_g144(.AN (dec_sub_21_2_n_21), .B
       (dec_sub_21_2_n_22), .Y (out1[2]));
  NOR2X1 dec_sub_21_2_g145(.A (dec_sub_21_2_n_17), .B
       (dec_sub_21_2_n_59), .Y (dec_sub_21_2_n_23));
  NAND2X1 dec_sub_21_2_g146(.A (in1[2]), .B (dec_sub_21_2_n_19), .Y
       (dec_sub_21_2_n_22));
  NOR2X1 dec_sub_21_2_g147(.A (in1[2]), .B (dec_sub_21_2_n_19), .Y
       (dec_sub_21_2_n_21));
  NAND2X6 dec_sub_21_2_g148(.A (dec_sub_21_2_n_13), .B
       (dec_sub_21_2_n_10), .Y (dec_sub_21_2_n_20));
  INVX1 dec_sub_21_2_g149(.A (dec_sub_21_2_n_10), .Y
       (dec_sub_21_2_n_19));
  NAND2X1 dec_sub_21_2_g150(.A (dec_sub_21_2_n_9), .B
       (dec_sub_21_2_n_11), .Y (dec_sub_21_2_n_18));
  NAND2X1 dec_sub_21_2_g151(.A (dec_sub_21_2_n_2), .B
       (dec_sub_21_2_n_12), .Y (dec_sub_21_2_n_17));
  NAND2X4 dec_sub_21_2_g152(.A (dec_sub_21_2_n_14), .B
       (dec_sub_21_2_n_12), .Y (dec_sub_21_2_n_16));
  MXI2XL dec_sub_21_2_g153(.A (in1[1]), .B (dec_sub_21_2_n_8), .S0
       (in1[0]), .Y (out1[1]));
  NOR2X8 dec_sub_21_2_g154(.A (in1[7]), .B (in1[6]), .Y
       (dec_sub_21_2_n_14));
  NOR2X8 dec_sub_21_2_g155(.A (in1[3]), .B (in1[2]), .Y
       (dec_sub_21_2_n_13));
  NOR2X6 dec_sub_21_2_g157(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_21_2_n_12));
  NOR2X1 dec_sub_21_2_g159(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_21_2_n_11));
  NOR2X6 dec_sub_21_2_g160(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_10));
  INVX1 dec_sub_21_2_g161(.A (in1[10]), .Y (dec_sub_21_2_n_9));
  INVX1 dec_sub_21_2_g162(.A (in1[1]), .Y (dec_sub_21_2_n_8));
  INVXL dec_sub_21_2_g163(.A (in1[5]), .Y (dec_sub_21_2_n_7));
  INVXL dec_sub_21_2_g164(.A (in1[7]), .Y (dec_sub_21_2_n_6));
  INVXL dec_sub_21_2_g165(.A (in1[3]), .Y (dec_sub_21_2_n_5));
  INVXL dec_sub_21_2_g166(.A (in1[9]), .Y (dec_sub_21_2_n_4));
  INVXL dec_sub_21_2_g167(.A (in1[8]), .Y (dec_sub_21_2_n_3));
  INVX1 dec_sub_21_2_g168(.A (in1[6]), .Y (dec_sub_21_2_n_2));
  NOR2BX1 dec_sub_21_2_g2(.AN (dec_sub_21_2_n_12), .B
       (dec_sub_21_2_n_59), .Y (dec_sub_21_2_n_1));
  NOR2BX2 dec_sub_21_2_g169(.AN (dec_sub_21_2_n_11), .B
       (dec_sub_21_2_n_71), .Y (dec_sub_21_2_n_0));
  CLKINVX1 dec_sub_21_2_fopt175(.A (dec_sub_21_2_n_61), .Y
       (dec_sub_21_2_n_59));
  INVXL dec_sub_21_2_fopt176(.A (dec_sub_21_2_n_61), .Y
       (dec_sub_21_2_n_60));
  CLKINVX2 dec_sub_21_2_fopt177(.A (dec_sub_21_2_n_20), .Y
       (dec_sub_21_2_n_61));
  INVXL dec_sub_21_2_fopt182(.A (dec_sub_21_2_n_70), .Y
       (dec_sub_21_2_n_69));
  CLKINVX1 dec_sub_21_2_fopt183(.A (dec_sub_21_2_n_71), .Y
       (dec_sub_21_2_n_70));
  CLKINVX3 dec_sub_21_2_fopt184(.A (dec_sub_21_2_n_25), .Y
       (dec_sub_21_2_n_71));
endmodule

