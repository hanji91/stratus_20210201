`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:59 KST (Dec  7 2020 13:18:59 UTC)

module st_feature_addr_gen_Sub_18S_22_1(in1, out1);
  input [16:0] in1;
  output [17:0] out1;
  wire [16:0] in1;
  wire [17:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2,
       dec_sub_21_2_n_3, dec_sub_21_2_n_5, dec_sub_21_2_n_6,
       dec_sub_21_2_n_7, dec_sub_21_2_n_8;
  wire dec_sub_21_2_n_9, dec_sub_21_2_n_10, dec_sub_21_2_n_12,
       dec_sub_21_2_n_13, dec_sub_21_2_n_14, dec_sub_21_2_n_17,
       dec_sub_21_2_n_18, dec_sub_21_2_n_19;
  wire dec_sub_21_2_n_20, dec_sub_21_2_n_21, dec_sub_21_2_n_22,
       dec_sub_21_2_n_23, dec_sub_21_2_n_24, dec_sub_21_2_n_25,
       dec_sub_21_2_n_27, dec_sub_21_2_n_28;
  wire dec_sub_21_2_n_29, dec_sub_21_2_n_30, dec_sub_21_2_n_31,
       dec_sub_21_2_n_32, dec_sub_21_2_n_33, dec_sub_21_2_n_34,
       dec_sub_21_2_n_35, dec_sub_21_2_n_36;
  wire dec_sub_21_2_n_37, dec_sub_21_2_n_38, dec_sub_21_2_n_39,
       dec_sub_21_2_n_40, dec_sub_21_2_n_42, dec_sub_21_2_n_44,
       dec_sub_21_2_n_45, dec_sub_21_2_n_46;
  wire dec_sub_21_2_n_47, dec_sub_21_2_n_48, dec_sub_21_2_n_50,
       dec_sub_21_2_n_51, dec_sub_21_2_n_52, dec_sub_21_2_n_90,
       dec_sub_21_2_n_91, dec_sub_21_2_n_92;
  wire dec_sub_21_2_n_93, dec_sub_21_2_n_94, dec_sub_21_2_n_96,
       dec_sub_21_2_n_97, dec_sub_21_2_n_98, dec_sub_21_2_n_100,
       dec_sub_21_2_n_101, dec_sub_21_2_n_102;
  wire dec_sub_21_2_n_104, dec_sub_21_2_n_105, dec_sub_21_2_n_106,
       dec_sub_21_2_n_108, dec_sub_21_2_n_109, dec_sub_21_2_n_110,
       dec_sub_21_2_n_111, dec_sub_21_2_n_112;
  wire dec_sub_21_2_n_117, dec_sub_21_2_n_118, dec_sub_21_2_n_119,
       dec_sub_21_2_n_123;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  MXI2XL dec_sub_21_2_g217(.A (dec_sub_21_2_n_7), .B (in1[9]), .S0
       (dec_sub_21_2_n_52), .Y (out1[9]));
  MXI2XL dec_sub_21_2_g218(.A (dec_sub_21_2_n_9), .B (in1[5]), .S0
       (dec_sub_21_2_n_45), .Y (out1[5]));
  MXI2XL dec_sub_21_2_g219(.A (dec_sub_21_2_n_12), .B (in1[16]), .S0
       (dec_sub_21_2_n_51), .Y (out1[16]));
  MXI2XL dec_sub_21_2_g220(.A (dec_sub_21_2_n_10), .B (in1[10]), .S0
       (dec_sub_21_2_n_0), .Y (out1[10]));
  MXI2XL dec_sub_21_2_g221(.A (dec_sub_21_2_n_108), .B
       (dec_sub_21_2_n_109), .S0 (dec_sub_21_2_n_50), .Y (out1[14]));
  MXI2XL dec_sub_21_2_g222(.A (dec_sub_21_2_n_91), .B
       (dec_sub_21_2_n_90), .S0 (dec_sub_21_2_n_3), .Y (out1[12]));
  MXI2XL dec_sub_21_2_g223(.A (dec_sub_21_2_n_105), .B
       (dec_sub_21_2_n_104), .S0 (dec_sub_21_2_n_48), .Y (out1[13]));
  MXI2XL dec_sub_21_2_g224(.A (dec_sub_21_2_n_13), .B (in1[11]), .S0
       (dec_sub_21_2_n_46), .Y (out1[11]));
  MXI2XL dec_sub_21_2_g225(.A (dec_sub_21_2_n_17), .B (in1[3]), .S0
       (dec_sub_21_2_n_38), .Y (out1[3]));
  MXI2XL dec_sub_21_2_g226(.A (dec_sub_21_2_n_101), .B
       (dec_sub_21_2_n_100), .S0 (dec_sub_21_2_n_47), .Y (out1[15]));
  NOR3X1 dec_sub_21_2_g227(.A (in1[16]), .B (dec_sub_21_2_n_34), .C
       (dec_sub_21_2_n_117), .Y (out1[17]));
  MXI2XL dec_sub_21_2_g228(.A (dec_sub_21_2_n_6), .B (in1[6]), .S0
       (dec_sub_21_2_n_2), .Y (out1[6]));
  MXI2XL dec_sub_21_2_g229(.A (dec_sub_21_2_n_14), .B (in1[7]), .S0
       (dec_sub_21_2_n_40), .Y (out1[7]));
  MXI2XL dec_sub_21_2_g230(.A (dec_sub_21_2_n_5), .B (in1[8]), .S0
       (dec_sub_21_2_n_118), .Y (out1[8]));
  NOR2X1 dec_sub_21_2_g232(.A (in1[8]), .B (dec_sub_21_2_n_119), .Y
       (dec_sub_21_2_n_52));
  NOR2X1 dec_sub_21_2_g234(.A (dec_sub_21_2_n_34), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_51));
  NOR2X1 dec_sub_21_2_g235(.A (dec_sub_21_2_n_1), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_50));
  NAND2BXL dec_sub_21_2_g236(.AN (dec_sub_21_2_n_45), .B
       (dec_sub_21_2_n_44), .Y (out1[4]));
  NOR2X1 dec_sub_21_2_g237(.A (dec_sub_21_2_n_35), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_48));
  NOR2X1 dec_sub_21_2_g238(.A (dec_sub_21_2_n_33), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_47));
  NOR2X1 dec_sub_21_2_g239(.A (dec_sub_21_2_n_30), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_46));
  NOR2X1 dec_sub_21_2_g241(.A (in1[4]), .B (dec_sub_21_2_n_123), .Y
       (dec_sub_21_2_n_45));
  NAND2XL dec_sub_21_2_g242(.A (in1[4]), .B (dec_sub_21_2_n_123), .Y
       (dec_sub_21_2_n_44));
  NOR2X4 dec_sub_21_2_g244(.A (dec_sub_21_2_n_28), .B
       (dec_sub_21_2_n_37), .Y (dec_sub_21_2_n_42));
  NAND2BXL dec_sub_21_2_g245(.AN (dec_sub_21_2_n_38), .B
       (dec_sub_21_2_n_39), .Y (out1[2]));
  NOR2X1 dec_sub_21_2_g246(.A (dec_sub_21_2_n_32), .B
       (dec_sub_21_2_n_123), .Y (dec_sub_21_2_n_40));
  NAND2X1 dec_sub_21_2_g247(.A (in1[2]), .B (dec_sub_21_2_n_36), .Y
       (dec_sub_21_2_n_39));
  NOR2X1 dec_sub_21_2_g248(.A (in1[2]), .B (dec_sub_21_2_n_36), .Y
       (dec_sub_21_2_n_38));
  NAND2X4 dec_sub_21_2_g249(.A (dec_sub_21_2_n_19), .B
       (dec_sub_21_2_n_25), .Y (dec_sub_21_2_n_37));
  INVX1 dec_sub_21_2_g250(.A (dec_sub_21_2_n_25), .Y
       (dec_sub_21_2_n_36));
  NAND2X1 dec_sub_21_2_g252(.A (dec_sub_21_2_n_92), .B
       (dec_sub_21_2_n_27), .Y (dec_sub_21_2_n_35));
  NAND2X2 dec_sub_21_2_g253(.A (dec_sub_21_2_n_29), .B
       (dec_sub_21_2_n_27), .Y (dec_sub_21_2_n_34));
  NAND2X1 dec_sub_21_2_g254(.A (dec_sub_21_2_n_31), .B
       (dec_sub_21_2_n_27), .Y (dec_sub_21_2_n_33));
  NAND2X1 dec_sub_21_2_g255(.A (dec_sub_21_2_n_6), .B
       (dec_sub_21_2_n_21), .Y (dec_sub_21_2_n_32));
  NOR2X1 dec_sub_21_2_g256(.A (dec_sub_21_2_n_110), .B
       (dec_sub_21_2_n_20), .Y (dec_sub_21_2_n_31));
  NAND2X1 dec_sub_21_2_g257(.A (dec_sub_21_2_n_10), .B
       (dec_sub_21_2_n_97), .Y (dec_sub_21_2_n_30));
  NOR2X2 dec_sub_21_2_g258(.A (dec_sub_21_2_n_24), .B
       (dec_sub_21_2_n_20), .Y (dec_sub_21_2_n_29));
  NAND2X4 dec_sub_21_2_g259(.A (dec_sub_21_2_n_23), .B
       (dec_sub_21_2_n_21), .Y (dec_sub_21_2_n_28));
  CLKAND2X3 dec_sub_21_2_g261(.A (dec_sub_21_2_n_22), .B
       (dec_sub_21_2_n_18), .Y (dec_sub_21_2_n_27));
  MXI2XL dec_sub_21_2_g262(.A (in1[1]), .B (dec_sub_21_2_n_8), .S0
       (in1[0]), .Y (out1[1]));
  NOR2X6 dec_sub_21_2_g263(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_25));
  NAND2X4 dec_sub_21_2_g264(.A (dec_sub_21_2_n_102), .B
       (dec_sub_21_2_n_112), .Y (dec_sub_21_2_n_24));
  NOR2X8 dec_sub_21_2_g265(.A (in1[7]), .B (in1[6]), .Y
       (dec_sub_21_2_n_23));
  NOR2X4 dec_sub_21_2_g266(.A (in1[11]), .B (in1[10]), .Y
       (dec_sub_21_2_n_22));
  NOR2X6 dec_sub_21_2_g268(.A (in1[5]), .B (in1[4]), .Y
       (dec_sub_21_2_n_21));
  NAND2X4 dec_sub_21_2_g270(.A (dec_sub_21_2_n_106), .B
       (dec_sub_21_2_n_94), .Y (dec_sub_21_2_n_20));
  NOR2X8 dec_sub_21_2_g271(.A (in1[3]), .B (in1[2]), .Y
       (dec_sub_21_2_n_19));
  NOR2X2 dec_sub_21_2_g273(.A (in1[9]), .B (in1[8]), .Y
       (dec_sub_21_2_n_18));
  INVXL dec_sub_21_2_g274(.A (in1[3]), .Y (dec_sub_21_2_n_17));
  INVXL dec_sub_21_2_g277(.A (in1[7]), .Y (dec_sub_21_2_n_14));
  INVXL dec_sub_21_2_g278(.A (in1[11]), .Y (dec_sub_21_2_n_13));
  INVXL dec_sub_21_2_g279(.A (in1[16]), .Y (dec_sub_21_2_n_12));
  INVX1 dec_sub_21_2_g281(.A (in1[10]), .Y (dec_sub_21_2_n_10));
  INVXL dec_sub_21_2_g282(.A (in1[5]), .Y (dec_sub_21_2_n_9));
  INVX1 dec_sub_21_2_g283(.A (in1[1]), .Y (dec_sub_21_2_n_8));
  INVXL dec_sub_21_2_g284(.A (in1[9]), .Y (dec_sub_21_2_n_7));
  INVX1 dec_sub_21_2_g285(.A (in1[6]), .Y (dec_sub_21_2_n_6));
  INVXL dec_sub_21_2_g286(.A (in1[8]), .Y (dec_sub_21_2_n_5));
  NOR2BX1 dec_sub_21_2_g2(.AN (dec_sub_21_2_n_27), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_3));
  NOR2BX1 dec_sub_21_2_g288(.AN (dec_sub_21_2_n_21), .B
       (dec_sub_21_2_n_123), .Y (dec_sub_21_2_n_2));
  NAND2BX1 dec_sub_21_2_g289(.AN (dec_sub_21_2_n_20), .B
       (dec_sub_21_2_n_27), .Y (dec_sub_21_2_n_1));
  NOR2BX1 dec_sub_21_2_g290(.AN (dec_sub_21_2_n_96), .B
       (dec_sub_21_2_n_119), .Y (dec_sub_21_2_n_0));
  INVXL dec_sub_21_2_fopt293(.A (dec_sub_21_2_n_91), .Y
       (dec_sub_21_2_n_90));
  INVXL dec_sub_21_2_fopt294(.A (dec_sub_21_2_n_93), .Y
       (dec_sub_21_2_n_91));
  INVXL dec_sub_21_2_fopt295(.A (dec_sub_21_2_n_93), .Y
       (dec_sub_21_2_n_92));
  BUFX2 dec_sub_21_2_fopt296(.A (in1[12]), .Y (dec_sub_21_2_n_93));
  CLKINVX3 dec_sub_21_2_fopt297(.A (in1[12]), .Y (dec_sub_21_2_n_94));
  INVXL dec_sub_21_2_fopt298(.A (dec_sub_21_2_n_98), .Y
       (dec_sub_21_2_n_96));
  INVXL dec_sub_21_2_fopt299(.A (dec_sub_21_2_n_98), .Y
       (dec_sub_21_2_n_97));
  INVXL dec_sub_21_2_fopt300(.A (dec_sub_21_2_n_18), .Y
       (dec_sub_21_2_n_98));
  INVXL dec_sub_21_2_fopt301(.A (dec_sub_21_2_n_101), .Y
       (dec_sub_21_2_n_100));
  INVXL dec_sub_21_2_fopt302(.A (in1[15]), .Y (dec_sub_21_2_n_101));
  CLKINVX4 dec_sub_21_2_fopt303(.A (in1[15]), .Y (dec_sub_21_2_n_102));
  INVXL dec_sub_21_2_fopt304(.A (dec_sub_21_2_n_105), .Y
       (dec_sub_21_2_n_104));
  INVXL dec_sub_21_2_fopt305(.A (in1[13]), .Y (dec_sub_21_2_n_105));
  CLKINVX4 dec_sub_21_2_fopt306(.A (in1[13]), .Y (dec_sub_21_2_n_106));
  INVXL dec_sub_21_2_fopt307(.A (dec_sub_21_2_n_109), .Y
       (dec_sub_21_2_n_108));
  INVXL dec_sub_21_2_fopt308(.A (dec_sub_21_2_n_111), .Y
       (dec_sub_21_2_n_109));
  INVXL dec_sub_21_2_fopt309(.A (dec_sub_21_2_n_111), .Y
       (dec_sub_21_2_n_110));
  INVXL dec_sub_21_2_fopt310(.A (in1[14]), .Y (dec_sub_21_2_n_111));
  CLKINVX3 dec_sub_21_2_fopt311(.A (in1[14]), .Y (dec_sub_21_2_n_112));
  INVXL dec_sub_21_2_fopt314(.A (dec_sub_21_2_n_118), .Y
       (dec_sub_21_2_n_117));
  CLKINVX1 dec_sub_21_2_fopt315(.A (dec_sub_21_2_n_119), .Y
       (dec_sub_21_2_n_118));
  CLKINVX4 dec_sub_21_2_fopt316(.A (dec_sub_21_2_n_42), .Y
       (dec_sub_21_2_n_119));
  BUFX3 dec_sub_21_2_fopt(.A (dec_sub_21_2_n_37), .Y
       (dec_sub_21_2_n_123));
endmodule


