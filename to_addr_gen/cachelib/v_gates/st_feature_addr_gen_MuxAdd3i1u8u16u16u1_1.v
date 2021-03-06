`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:19:02 KST (Dec  7 2020 13:19:02 UTC)

module st_feature_addr_gen_MuxAdd3i1u8u16u16u1_1(in4, in3, in2, ctrl1,
     out1);
  input [15:0] in4, in3;
  input [7:0] in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in4, in3;
  wire [7:0] in2;
  wire ctrl1;
  wire [15:0] out1;
  wire addinc_add_31_2_n_0, addinc_add_31_2_n_6, addinc_add_31_2_n_7,
       addinc_add_31_2_n_8, addinc_add_31_2_n_9, addinc_add_31_2_n_10,
       addinc_add_31_2_n_11, addinc_add_31_2_n_12;
  wire addinc_add_31_2_n_13, addinc_add_31_2_n_14,
       addinc_add_31_2_n_15, addinc_add_31_2_n_16,
       addinc_add_31_2_n_17, addinc_add_31_2_n_18,
       addinc_add_31_2_n_19, addinc_add_31_2_n_20;
  wire addinc_add_31_2_n_21, addinc_add_31_2_n_22,
       addinc_add_31_2_n_23, addinc_add_31_2_n_24,
       addinc_add_31_2_n_25, addinc_add_31_2_n_26,
       addinc_add_31_2_n_27, addinc_add_31_2_n_28;
  wire addinc_add_31_2_n_29, addinc_add_31_2_n_31,
       addinc_add_31_2_n_32, addinc_add_31_2_n_33,
       addinc_add_31_2_n_34, addinc_add_31_2_n_36,
       addinc_add_31_2_n_37, addinc_add_31_2_n_38;
  wire addinc_add_31_2_n_39, addinc_add_31_2_n_40,
       addinc_add_31_2_n_41, addinc_add_31_2_n_42,
       addinc_add_31_2_n_43, addinc_add_31_2_n_44,
       addinc_add_31_2_n_45, addinc_add_31_2_n_46;
  wire addinc_add_31_2_n_47, addinc_add_31_2_n_48,
       addinc_add_31_2_n_49, addinc_add_31_2_n_50,
       addinc_add_31_2_n_51, addinc_add_31_2_n_52,
       addinc_add_31_2_n_53, addinc_add_31_2_n_54;
  wire addinc_add_31_2_n_55, addinc_add_31_2_n_56,
       addinc_add_31_2_n_57, addinc_add_31_2_n_58,
       addinc_add_31_2_n_59, addinc_add_31_2_n_60,
       addinc_add_31_2_n_61, addinc_add_31_2_n_63;
  wire addinc_add_31_2_n_64, addinc_add_31_2_n_66,
       addinc_add_31_2_n_67, addinc_add_31_2_n_68,
       addinc_add_31_2_n_69, addinc_add_31_2_n_70,
       addinc_add_31_2_n_71, addinc_add_31_2_n_72;
  wire addinc_add_31_2_n_73, addinc_add_31_2_n_74,
       addinc_add_31_2_n_75, addinc_add_31_2_n_76,
       addinc_add_31_2_n_77, addinc_add_31_2_n_78,
       addinc_add_31_2_n_79, addinc_add_31_2_n_80;
  wire addinc_add_31_2_n_81, addinc_add_31_2_n_115,
       addinc_add_31_2_n_117, addinc_add_31_2_n_118,
       addinc_add_31_2_n_120, addinc_add_31_2_n_121,
       addinc_add_31_2_n_122, addinc_add_31_2_n_124;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32;
  OAI2BB1XL g161(.A0N (ctrl1), .A1N (n_25), .B0 (n_9), .Y (out1[8]));
  OAI2BB1X1 g162(.A0N (ctrl1), .A1N (n_29), .B0 (n_10), .Y (out1[12]));
  OAI2BB1X1 g163(.A0N (ctrl1), .A1N (n_26), .B0 (n_15), .Y (out1[9]));
  OAI2BB1X1 g164(.A0N (ctrl1), .A1N (n_19), .B0 (n_14), .Y (out1[2]));
  OAI2BB1X1 g165(.A0N (ctrl1), .A1N (n_32), .B0 (n_6), .Y (out1[15]));
  OAI2BB1X1 g166(.A0N (ctrl1), .A1N (n_18), .B0 (n_13), .Y (out1[1]));
  OAI2BB1X1 g167(.A0N (ctrl1), .A1N (n_17), .B0 (n_16), .Y (out1[0]));
  OAI2BB1X1 g168(.A0N (ctrl1), .A1N (n_28), .B0 (n_5), .Y (out1[11]));
  OAI2BB1X1 g169(.A0N (ctrl1), .A1N (n_27), .B0 (n_1), .Y (out1[10]));
  OAI2BB1X1 g170(.A0N (ctrl1), .A1N (n_23), .B0 (n_8), .Y (out1[6]));
  OAI2BB1X1 g171(.A0N (ctrl1), .A1N (n_31), .B0 (n_4), .Y (out1[14]));
  OAI2BB1X1 g172(.A0N (ctrl1), .A1N (n_30), .B0 (n_3), .Y (out1[13]));
  OAI2BB1X1 g173(.A0N (ctrl1), .A1N (n_24), .B0 (n_7), .Y (out1[7]));
  OAI2BB1X1 g174(.A0N (ctrl1), .A1N (n_22), .B0 (n_11), .Y (out1[5]));
  OAI2BB1X1 g175(.A0N (ctrl1), .A1N (n_21), .B0 (n_2), .Y (out1[4]));
  OAI2BB1X1 g176(.A0N (ctrl1), .A1N (n_20), .B0 (n_12), .Y (out1[3]));
  NAND2X1 g177(.A (in4[0]), .B (n_0), .Y (n_16));
  NAND2X1 g178(.A (in4[9]), .B (n_0), .Y (n_15));
  NAND2X1 g179(.A (in4[2]), .B (n_0), .Y (n_14));
  NAND2X1 g180(.A (in4[1]), .B (n_0), .Y (n_13));
  NAND2X1 g181(.A (in4[3]), .B (n_0), .Y (n_12));
  NAND2X1 g182(.A (in4[5]), .B (n_0), .Y (n_11));
  NAND2X1 g183(.A (in4[12]), .B (n_0), .Y (n_10));
  NAND2X1 g184(.A (in4[8]), .B (n_0), .Y (n_9));
  NAND2X1 g185(.A (in4[6]), .B (n_0), .Y (n_8));
  NAND2X1 g186(.A (in4[7]), .B (n_0), .Y (n_7));
  NAND2X1 g187(.A (in4[15]), .B (n_0), .Y (n_6));
  NAND2X1 g188(.A (in4[11]), .B (n_0), .Y (n_5));
  NAND2X1 g189(.A (in4[14]), .B (n_0), .Y (n_4));
  NAND2X1 g190(.A (in4[13]), .B (n_0), .Y (n_3));
  NAND2X1 g191(.A (in4[4]), .B (n_0), .Y (n_2));
  NAND2X1 g192(.A (in4[10]), .B (n_0), .Y (n_1));
  INVX1 g193(.A (ctrl1), .Y (n_0));
  MXI2XL addinc_add_31_2_g354(.A (addinc_add_31_2_n_13), .B (in3[9]),
       .S0 (addinc_add_31_2_n_79), .Y (n_26));
  MXI2XL addinc_add_31_2_g355(.A (addinc_add_31_2_n_8), .B (in3[13]),
       .S0 (addinc_add_31_2_n_77), .Y (n_30));
  MXI2XL addinc_add_31_2_g356(.A (addinc_add_31_2_n_9), .B (in3[11]),
       .S0 (addinc_add_31_2_n_76), .Y (n_28));
  MXI2XL addinc_add_31_2_g357(.A (addinc_add_31_2_n_10), .B (in3[15]),
       .S0 (addinc_add_31_2_n_75), .Y (n_32));
  MXI2XL addinc_add_31_2_g358(.A (addinc_add_31_2_n_7), .B (in3[14]),
       .S0 (addinc_add_31_2_n_78), .Y (n_31));
  MXI2XL addinc_add_31_2_g359(.A (addinc_add_31_2_n_11), .B (in3[12]),
       .S0 (addinc_add_31_2_n_81), .Y (n_29));
  MXI2XL addinc_add_31_2_g360(.A (addinc_add_31_2_n_12), .B (in3[10]),
       .S0 (addinc_add_31_2_n_80), .Y (n_27));
  MXI2XL addinc_add_31_2_g361(.A (in3[8]), .B (addinc_add_31_2_n_6),
       .S0 (addinc_add_31_2_n_74), .Y (n_25));
  MXI2XL addinc_add_31_2_g364(.A (addinc_add_31_2_n_40), .B
       (addinc_add_31_2_n_41), .S0 (addinc_add_31_2_n_72), .Y (n_22));
  NOR2X1 addinc_add_31_2_g365(.A (addinc_add_31_2_n_37), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_81));
  NOR2X1 addinc_add_31_2_g366(.A (addinc_add_31_2_n_19), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_80));
  NOR2X1 addinc_add_31_2_g367(.A (addinc_add_31_2_n_6), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_79));
  NOR2X1 addinc_add_31_2_g368(.A (addinc_add_31_2_n_58), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_78));
  NOR2X1 addinc_add_31_2_g369(.A (addinc_add_31_2_n_57), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_77));
  NOR2X1 addinc_add_31_2_g370(.A (addinc_add_31_2_n_43), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_76));
  NOR2X1 addinc_add_31_2_g371(.A (addinc_add_31_2_n_51), .B
       (addinc_add_31_2_n_74), .Y (addinc_add_31_2_n_75));
  NOR2X4 addinc_add_31_2_g372(.A (addinc_add_31_2_n_60), .B
       (addinc_add_31_2_n_68), .Y (addinc_add_31_2_n_74));
  NOR2X1 addinc_add_31_2_g373(.A (addinc_add_31_2_n_54), .B
       (addinc_add_31_2_n_69), .Y (addinc_add_31_2_n_73));
  NOR2BX1 addinc_add_31_2_g374(.AN (addinc_add_31_2_n_28), .B
       (addinc_add_31_2_n_70), .Y (addinc_add_31_2_n_72));
  NOR2X1 addinc_add_31_2_g377(.A (addinc_add_31_2_n_61), .B
       (addinc_add_31_2_n_67), .Y (addinc_add_31_2_n_71));
  NOR2X1 addinc_add_31_2_g378(.A (addinc_add_31_2_n_17), .B
       (addinc_add_31_2_n_64), .Y (addinc_add_31_2_n_70));
  NOR2BX1 addinc_add_31_2_g379(.AN (addinc_add_31_2_n_45), .B
       (addinc_add_31_2_n_64), .Y (addinc_add_31_2_n_69));
  NOR2X4 addinc_add_31_2_g380(.A (addinc_add_31_2_n_56), .B
       (addinc_add_31_2_n_64), .Y (addinc_add_31_2_n_68));
  NOR2X1 addinc_add_31_2_g381(.A (addinc_add_31_2_n_55), .B
       (addinc_add_31_2_n_64), .Y (addinc_add_31_2_n_67));
  AOI21X1 addinc_add_31_2_g382(.A0 (addinc_add_31_2_n_27), .A1
       (addinc_add_31_2_n_121), .B0 (addinc_add_31_2_n_118), .Y
       (addinc_add_31_2_n_66));
  MXI2XL addinc_add_31_2_g383(.A (addinc_add_31_2_n_48), .B
       (addinc_add_31_2_n_49), .S0 (addinc_add_31_2_n_120), .Y (n_19));
  NOR2X4 addinc_add_31_2_g384(.A (addinc_add_31_2_n_52), .B
       (addinc_add_31_2_n_63), .Y (addinc_add_31_2_n_64));
  NOR2X4 addinc_add_31_2_g385(.A (addinc_add_31_2_n_36), .B
       (addinc_add_31_2_n_59), .Y (addinc_add_31_2_n_63));
  OAI2BB1X1 addinc_add_31_2_g387(.A0N (addinc_add_31_2_n_15), .A1N
       (addinc_add_31_2_n_54), .B0 (addinc_add_31_2_n_20), .Y
       (addinc_add_31_2_n_61));
  OAI2BB1X1 addinc_add_31_2_g388(.A0N (addinc_add_31_2_n_38), .A1N
       (addinc_add_31_2_n_54), .B0 (addinc_add_31_2_n_53), .Y
       (addinc_add_31_2_n_60));
  AOI21X4 addinc_add_31_2_g389(.A0 (addinc_add_31_2_n_24), .A1
       (addinc_add_31_2_n_44), .B0 (addinc_add_31_2_n_0), .Y
       (addinc_add_31_2_n_59));
  OR2XL addinc_add_31_2_g391(.A (addinc_add_31_2_n_32), .B
       (addinc_add_31_2_n_37), .Y (addinc_add_31_2_n_58));
  OR2XL addinc_add_31_2_g392(.A (addinc_add_31_2_n_11), .B
       (addinc_add_31_2_n_37), .Y (addinc_add_31_2_n_57));
  NAND2X1 addinc_add_31_2_g393(.A (addinc_add_31_2_n_38), .B
       (addinc_add_31_2_n_45), .Y (addinc_add_31_2_n_56));
  NAND2X1 addinc_add_31_2_g394(.A (addinc_add_31_2_n_15), .B
       (addinc_add_31_2_n_45), .Y (addinc_add_31_2_n_55));
  OAI21X2 addinc_add_31_2_g395(.A0 (addinc_add_31_2_n_28), .A1
       (addinc_add_31_2_n_26), .B0 (addinc_add_31_2_n_33), .Y
       (addinc_add_31_2_n_54));
  OA21X1 addinc_add_31_2_g396(.A0 (addinc_add_31_2_n_20), .A1
       (addinc_add_31_2_n_18), .B0 (addinc_add_31_2_n_22), .Y
       (addinc_add_31_2_n_53));
  OAI21X1 addinc_add_31_2_g397(.A0 (addinc_add_31_2_n_16), .A1
       (addinc_add_31_2_n_29), .B0 (addinc_add_31_2_n_21), .Y
       (addinc_add_31_2_n_52));
  OR3XL addinc_add_31_2_g398(.A (addinc_add_31_2_n_37), .B
       (addinc_add_31_2_n_7), .C (addinc_add_31_2_n_32), .Y
       (addinc_add_31_2_n_51));
  INVX1 addinc_add_31_2_g400(.A (addinc_add_31_2_n_48), .Y
       (addinc_add_31_2_n_49));
  OR2XL addinc_add_31_2_g403(.A (addinc_add_31_2_n_12), .B
       (addinc_add_31_2_n_19), .Y (addinc_add_31_2_n_43));
  NAND2BX1 addinc_add_31_2_g404(.AN (addinc_add_31_2_n_17), .B
       (addinc_add_31_2_n_28), .Y (addinc_add_31_2_n_50));
  NAND2X1 addinc_add_31_2_g405(.A (addinc_add_31_2_n_117), .B
       (addinc_add_31_2_n_27), .Y (addinc_add_31_2_n_48));
  NOR2X1 addinc_add_31_2_g406(.A (addinc_add_31_2_n_0), .B
       (addinc_add_31_2_n_23), .Y (addinc_add_31_2_n_47));
  NAND2BX1 addinc_add_31_2_g407(.AN (addinc_add_31_2_n_16), .B
       (addinc_add_31_2_n_21), .Y (addinc_add_31_2_n_46));
  NOR2X1 addinc_add_31_2_g408(.A (addinc_add_31_2_n_26), .B
       (addinc_add_31_2_n_17), .Y (addinc_add_31_2_n_45));
  NAND2X4 addinc_add_31_2_g409(.A (addinc_add_31_2_n_31), .B
       (addinc_add_31_2_n_34), .Y (addinc_add_31_2_n_44));
  INVXL addinc_add_31_2_g411(.A (addinc_add_31_2_n_40), .Y
       (addinc_add_31_2_n_41));
  NAND2BX4 addinc_add_31_2_g413(.AN (addinc_add_31_2_n_16), .B
       (addinc_add_31_2_n_27), .Y (addinc_add_31_2_n_36));
  NAND2BXL addinc_add_31_2_g414(.AN (addinc_add_31_2_n_31), .B
       (addinc_add_31_2_n_34), .Y (n_17));
  NAND2X1 addinc_add_31_2_g415(.A (addinc_add_31_2_n_20), .B
       (addinc_add_31_2_n_15), .Y (addinc_add_31_2_n_42));
  NOR2BX1 addinc_add_31_2_g416(.AN (addinc_add_31_2_n_33), .B
       (addinc_add_31_2_n_26), .Y (addinc_add_31_2_n_40));
  NAND2BX1 addinc_add_31_2_g417(.AN (addinc_add_31_2_n_18), .B
       (addinc_add_31_2_n_22), .Y (addinc_add_31_2_n_39));
  NOR2X1 addinc_add_31_2_g418(.A (addinc_add_31_2_n_18), .B
       (addinc_add_31_2_n_14), .Y (addinc_add_31_2_n_38));
  OR2X1 addinc_add_31_2_g419(.A (addinc_add_31_2_n_25), .B
       (addinc_add_31_2_n_19), .Y (addinc_add_31_2_n_37));
  NAND2X1 addinc_add_31_2_g421(.A (in3[11]), .B (in3[10]), .Y
       (addinc_add_31_2_n_25));
  NAND2X8 addinc_add_31_2_g422(.A (in3[0]), .B (in2[0]), .Y
       (addinc_add_31_2_n_34));
  NAND2X1 addinc_add_31_2_g423(.A (in3[5]), .B (in2[5]), .Y
       (addinc_add_31_2_n_33));
  NAND2X1 addinc_add_31_2_g424(.A (in3[13]), .B (in3[12]), .Y
       (addinc_add_31_2_n_32));
  NOR2X6 addinc_add_31_2_g425(.A (in3[0]), .B (in2[0]), .Y
       (addinc_add_31_2_n_31));
  NAND2X2 addinc_add_31_2_g426(.A (in3[2]), .B (in2[2]), .Y
       (addinc_add_31_2_n_29));
  NAND2X2 addinc_add_31_2_g427(.A (in3[4]), .B (in2[4]), .Y
       (addinc_add_31_2_n_28));
  OR2X8 addinc_add_31_2_g428(.A (in3[2]), .B (in2[2]), .Y
       (addinc_add_31_2_n_27));
  NOR2X2 addinc_add_31_2_g429(.A (in3[5]), .B (in2[5]), .Y
       (addinc_add_31_2_n_26));
  CLKINVX2 addinc_add_31_2_g430(.A (addinc_add_31_2_n_23), .Y
       (addinc_add_31_2_n_24));
  INVX1 addinc_add_31_2_g431(.A (addinc_add_31_2_n_14), .Y
       (addinc_add_31_2_n_15));
  NOR2X2 addinc_add_31_2_g432(.A (in3[1]), .B (in2[1]), .Y
       (addinc_add_31_2_n_23));
  NAND2X1 addinc_add_31_2_g433(.A (in3[7]), .B (in2[7]), .Y
       (addinc_add_31_2_n_22));
  NAND2X1 addinc_add_31_2_g434(.A (in3[3]), .B (in2[3]), .Y
       (addinc_add_31_2_n_21));
  NAND2X1 addinc_add_31_2_g436(.A (in3[6]), .B (in2[6]), .Y
       (addinc_add_31_2_n_20));
  NAND2X2 addinc_add_31_2_g437(.A (in3[9]), .B (in3[8]), .Y
       (addinc_add_31_2_n_19));
  NOR2X2 addinc_add_31_2_g438(.A (in3[7]), .B (in2[7]), .Y
       (addinc_add_31_2_n_18));
  NOR2X1 addinc_add_31_2_g439(.A (in3[4]), .B (in2[4]), .Y
       (addinc_add_31_2_n_17));
  NOR2X2 addinc_add_31_2_g440(.A (in3[3]), .B (in2[3]), .Y
       (addinc_add_31_2_n_16));
  NOR2X1 addinc_add_31_2_g441(.A (in3[6]), .B (in2[6]), .Y
       (addinc_add_31_2_n_14));
  INVX1 addinc_add_31_2_g443(.A (in3[9]), .Y (addinc_add_31_2_n_13));
  INVX1 addinc_add_31_2_g444(.A (in3[10]), .Y (addinc_add_31_2_n_12));
  INVX1 addinc_add_31_2_g445(.A (in3[12]), .Y (addinc_add_31_2_n_11));
  INVX1 addinc_add_31_2_g447(.A (in3[15]), .Y (addinc_add_31_2_n_10));
  INVX1 addinc_add_31_2_g448(.A (in3[11]), .Y (addinc_add_31_2_n_9));
  INVX1 addinc_add_31_2_g449(.A (in3[13]), .Y (addinc_add_31_2_n_8));
  INVX1 addinc_add_31_2_g450(.A (in3[14]), .Y (addinc_add_31_2_n_7));
  INVX1 addinc_add_31_2_g451(.A (in3[8]), .Y (addinc_add_31_2_n_6));
  XOR2XL addinc_add_31_2_g2(.A (addinc_add_31_2_n_50), .B
       (addinc_add_31_2_n_124), .Y (n_21));
  XOR2XL addinc_add_31_2_g452(.A (addinc_add_31_2_n_47), .B
       (addinc_add_31_2_n_115), .Y (n_18));
  XOR2XL addinc_add_31_2_g453(.A (addinc_add_31_2_n_46), .B
       (addinc_add_31_2_n_66), .Y (n_20));
  XOR2XL addinc_add_31_2_g454(.A (addinc_add_31_2_n_42), .B
       (addinc_add_31_2_n_73), .Y (n_23));
  XOR2XL addinc_add_31_2_g455(.A (addinc_add_31_2_n_39), .B
       (addinc_add_31_2_n_71), .Y (n_24));
  CLKAND2X3 addinc_add_31_2_g456(.A (in3[1]), .B (in2[1]), .Y
       (addinc_add_31_2_n_0));
  BUFX2 addinc_add_31_2_fopt(.A (addinc_add_31_2_n_44), .Y
       (addinc_add_31_2_n_115));
  CLKINVX1 addinc_add_31_2_fopt457(.A (addinc_add_31_2_n_118), .Y
       (addinc_add_31_2_n_117));
  CLKINVX1 addinc_add_31_2_fopt458(.A (addinc_add_31_2_n_29), .Y
       (addinc_add_31_2_n_118));
  INVXL addinc_add_31_2_fopt459(.A (addinc_add_31_2_n_122), .Y
       (addinc_add_31_2_n_120));
  INVXL addinc_add_31_2_fopt460(.A (addinc_add_31_2_n_122), .Y
       (addinc_add_31_2_n_121));
  BUFX2 addinc_add_31_2_fopt461(.A (addinc_add_31_2_n_59), .Y
       (addinc_add_31_2_n_122));
  BUFX2 addinc_add_31_2_fopt462(.A (addinc_add_31_2_n_64), .Y
       (addinc_add_31_2_n_124));
endmodule


