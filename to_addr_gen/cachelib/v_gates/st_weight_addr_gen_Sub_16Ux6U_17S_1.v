`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:20 KST (Dec  7 2020 09:42:20 UTC)

module st_weight_addr_gen_Sub_16Ux6U_17S_1(in2, in1, out1);
  input [15:0] in2;
  input [5:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [5:0] in1;
  wire [16:0] out1;
  wire sub_23_2_n_1, sub_23_2_n_3, sub_23_2_n_4, sub_23_2_n_5,
       sub_23_2_n_6, sub_23_2_n_7, sub_23_2_n_8, sub_23_2_n_14;
  wire sub_23_2_n_15, sub_23_2_n_16, sub_23_2_n_17, sub_23_2_n_18,
       sub_23_2_n_19, sub_23_2_n_20, sub_23_2_n_21, sub_23_2_n_22;
  wire sub_23_2_n_23, sub_23_2_n_24, sub_23_2_n_25, sub_23_2_n_26,
       sub_23_2_n_27, sub_23_2_n_28, sub_23_2_n_29, sub_23_2_n_30;
  wire sub_23_2_n_31, sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34,
       sub_23_2_n_35, sub_23_2_n_36, sub_23_2_n_37, sub_23_2_n_38;
  wire sub_23_2_n_40, sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_43,
       sub_23_2_n_44, sub_23_2_n_45, sub_23_2_n_46, sub_23_2_n_47;
  wire sub_23_2_n_48, sub_23_2_n_49, sub_23_2_n_51, sub_23_2_n_52,
       sub_23_2_n_53, sub_23_2_n_54, sub_23_2_n_55, sub_23_2_n_56;
  wire sub_23_2_n_57, sub_23_2_n_58, sub_23_2_n_59, sub_23_2_n_60,
       sub_23_2_n_61, sub_23_2_n_62, sub_23_2_n_63, sub_23_2_n_64;
  wire sub_23_2_n_65, sub_23_2_n_66, sub_23_2_n_67, sub_23_2_n_68,
       sub_23_2_n_69, sub_23_2_n_70, sub_23_2_n_71, sub_23_2_n_73;
  wire sub_23_2_n_74, sub_23_2_n_105, sub_23_2_n_106, sub_23_2_n_107,
       sub_23_2_n_109, sub_23_2_n_110, sub_23_2_n_112, sub_23_2_n_113;
  wire sub_23_2_n_114, sub_23_2_n_116, sub_23_2_n_117, sub_23_2_n_118,
       sub_23_2_n_120, sub_23_2_n_121, sub_23_2_n_122;
  MXI2XL sub_23_2_g357(.A (sub_23_2_n_16), .B (in2[9]), .S0
       (sub_23_2_n_74), .Y (out1[9]));
  MXI2XL sub_23_2_g358(.A (sub_23_2_n_22), .B (in2[10]), .S0
       (sub_23_2_n_7), .Y (out1[10]));
  MXI2XL sub_23_2_g359(.A (sub_23_2_n_21), .B (in2[12]), .S0
       (sub_23_2_n_73), .Y (out1[12]));
  MXI2XL sub_23_2_g360(.A (sub_23_2_n_14), .B (in2[14]), .S0
       (sub_23_2_n_71), .Y (out1[14]));
  MXI2XL sub_23_2_g361(.A (sub_23_2_n_23), .B (in2[13]), .S0
       (sub_23_2_n_70), .Y (out1[13]));
  MXI2XL sub_23_2_g362(.A (sub_23_2_n_18), .B (in2[11]), .S0
       (sub_23_2_n_68), .Y (out1[11]));
  MXI2XL sub_23_2_g363(.A (sub_23_2_n_17), .B (in2[15]), .S0
       (sub_23_2_n_69), .Y (out1[15]));
  MXI2XL sub_23_2_g364(.A (sub_23_2_n_15), .B (in2[7]), .S0
       (sub_23_2_n_66), .Y (out1[7]));
  NOR2X1 sub_23_2_g369(.A (in2[8]), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_74));
  NOR2X1 sub_23_2_g370(.A (sub_23_2_n_41), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_73));
  NOR2BX1 sub_23_2_g371(.AN (sub_23_2_n_52), .B (sub_23_2_n_64), .Y
       (out1[16]));
  NOR2X1 sub_23_2_g372(.A (sub_23_2_n_54), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_71));
  NOR2X1 sub_23_2_g373(.A (sub_23_2_n_53), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_70));
  NOR2X1 sub_23_2_g374(.A (sub_23_2_n_48), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_69));
  NOR2X1 sub_23_2_g375(.A (sub_23_2_n_47), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_68));
  NOR2X1 sub_23_2_g376(.A (sub_23_2_n_109), .B (sub_23_2_n_121), .Y
       (sub_23_2_n_67));
  NOR2BX1 sub_23_2_g377(.AN (sub_23_2_n_57), .B (sub_23_2_n_120), .Y
       (sub_23_2_n_66));
  NOR2X2 sub_23_2_g378(.A (sub_23_2_n_1), .B (sub_23_2_n_62), .Y
       (sub_23_2_n_65));
  CLKINVX3 sub_23_2_g379(.A (sub_23_2_n_63), .Y (sub_23_2_n_64));
  NOR2X2 sub_23_2_g380(.A (sub_23_2_n_55), .B (sub_23_2_n_61), .Y
       (sub_23_2_n_63));
  NOR2X1 sub_23_2_g383(.A (sub_23_2_n_29), .B (sub_23_2_n_106), .Y
       (sub_23_2_n_62));
  NOR2X2 sub_23_2_g384(.A (sub_23_2_n_46), .B (sub_23_2_n_59), .Y
       (sub_23_2_n_61));
  AOI21X1 sub_23_2_g385(.A0 (sub_23_2_n_34), .A1 (sub_23_2_n_117), .B0
       (sub_23_2_n_31), .Y (sub_23_2_n_60));
  AOI21X2 sub_23_2_g387(.A0 (sub_23_2_n_8), .A1 (sub_23_2_n_58), .B0
       (sub_23_2_n_51), .Y (sub_23_2_n_59));
  NAND2X2 sub_23_2_g389(.A (sub_23_2_n_32), .B (sub_23_2_n_56), .Y
       (sub_23_2_n_58));
  NOR2XL sub_23_2_g391(.A (in2[6]), .B (sub_23_2_n_110), .Y
       (sub_23_2_n_57));
  NAND2X2 sub_23_2_g392(.A (sub_23_2_n_37), .B (sub_23_2_n_38), .Y
       (sub_23_2_n_56));
  NAND2X1 sub_23_2_g393(.A (sub_23_2_n_27), .B (sub_23_2_n_49), .Y
       (sub_23_2_n_55));
  NAND2X1 sub_23_2_g395(.A (sub_23_2_n_30), .B (sub_23_2_n_40), .Y
       (sub_23_2_n_54));
  NAND2X1 sub_23_2_g396(.A (sub_23_2_n_21), .B (sub_23_2_n_40), .Y
       (sub_23_2_n_53));
  NOR4BX1 sub_23_2_g397(.AN (sub_23_2_n_30), .B (sub_23_2_n_41), .C
       (in2[15]), .D (in2[14]), .Y (sub_23_2_n_52));
  OAI2BB1X1 sub_23_2_g398(.A0N (sub_23_2_n_31), .A1N (sub_23_2_n_36),
       .B0 (sub_23_2_n_3), .Y (sub_23_2_n_51));
  AOI21X1 sub_23_2_g400(.A0 (sub_23_2_n_5), .A1 (sub_23_2_n_1), .B0
       (sub_23_2_n_33), .Y (sub_23_2_n_49));
  NAND3X1 sub_23_2_g401(.A (sub_23_2_n_40), .B (sub_23_2_n_14), .C
       (sub_23_2_n_30), .Y (sub_23_2_n_48));
  NAND2X1 sub_23_2_g402(.A (sub_23_2_n_22), .B (sub_23_2_n_35), .Y
       (sub_23_2_n_47));
  NAND2BX1 sub_23_2_g403(.AN (sub_23_2_n_29), .B (sub_23_2_n_113), .Y
       (sub_23_2_n_46));
  NAND2X1 sub_23_2_g408(.A (sub_23_2_n_36), .B (sub_23_2_n_3), .Y
       (sub_23_2_n_45));
  NAND2BX1 sub_23_2_g410(.AN (sub_23_2_n_33), .B (sub_23_2_n_112), .Y
       (sub_23_2_n_44));
  NOR2X1 sub_23_2_g412(.A (sub_23_2_n_29), .B (sub_23_2_n_1), .Y
       (sub_23_2_n_43));
  NAND2X1 sub_23_2_g413(.A (sub_23_2_n_38), .B (sub_23_2_n_32), .Y
       (sub_23_2_n_42));
  INVX1 sub_23_2_g414(.A (sub_23_2_n_41), .Y (sub_23_2_n_40));
  NAND2X1 sub_23_2_g415(.A (sub_23_2_n_28), .B (sub_23_2_n_35), .Y
       (sub_23_2_n_41));
  MXI2XL sub_23_2_g416(.A (sub_23_2_n_19), .B (in2[0]), .S0 (in1[0]),
       .Y (out1[0]));
  INVX1 sub_23_2_g419(.A (sub_23_2_n_4), .Y (sub_23_2_n_34));
  NAND2X4 sub_23_2_g421(.A (in1[1]), .B (sub_23_2_n_25), .Y
       (sub_23_2_n_38));
  NAND2X4 sub_23_2_g422(.A (in1[0]), .B (sub_23_2_n_19), .Y
       (sub_23_2_n_37));
  NAND2X6 sub_23_2_g423(.A (in1[3]), .B (sub_23_2_n_26), .Y
       (sub_23_2_n_36));
  NOR2X1 sub_23_2_g424(.A (in2[9]), .B (in2[8]), .Y (sub_23_2_n_35));
  NOR2X1 sub_23_2_g428(.A (in2[11]), .B (in2[10]), .Y (sub_23_2_n_28));
  NOR2X1 sub_23_2_g429(.A (in2[7]), .B (in2[6]), .Y (sub_23_2_n_27));
  NOR2BX1 sub_23_2_g430(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_33));
  NAND2X1 sub_23_2_g431(.A (in2[1]), .B (sub_23_2_n_24), .Y
       (sub_23_2_n_32));
  NOR2X2 sub_23_2_g432(.A (in1[2]), .B (sub_23_2_n_20), .Y
       (sub_23_2_n_31));
  NOR2X1 sub_23_2_g434(.A (in2[13]), .B (in2[12]), .Y (sub_23_2_n_30));
  NOR2BX1 sub_23_2_g435(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_29));
  CLKINVX12 sub_23_2_g436(.A (in2[3]), .Y (sub_23_2_n_26));
  CLKINVX12 sub_23_2_g438(.A (in2[1]), .Y (sub_23_2_n_25));
  INVX1 sub_23_2_g439(.A (in1[1]), .Y (sub_23_2_n_24));
  INVXL sub_23_2_g442(.A (in2[13]), .Y (sub_23_2_n_23));
  INVX1 sub_23_2_g443(.A (in2[10]), .Y (sub_23_2_n_22));
  INVX1 sub_23_2_g444(.A (in2[12]), .Y (sub_23_2_n_21));
  CLKINVX2 sub_23_2_g447(.A (in2[2]), .Y (sub_23_2_n_20));
  CLKINVX12 sub_23_2_g448(.A (in2[0]), .Y (sub_23_2_n_19));
  INVXL sub_23_2_g449(.A (in2[11]), .Y (sub_23_2_n_18));
  INVXL sub_23_2_g450(.A (in2[15]), .Y (sub_23_2_n_17));
  INVXL sub_23_2_g451(.A (in2[9]), .Y (sub_23_2_n_16));
  INVXL sub_23_2_g452(.A (in2[7]), .Y (sub_23_2_n_15));
  INVX1 sub_23_2_g454(.A (in2[14]), .Y (sub_23_2_n_14));
  XNOR2X1 sub_23_2_g2(.A (sub_23_2_n_6), .B (sub_23_2_n_116), .Y
       (out1[2]));
  XNOR2X1 sub_23_2_g455(.A (sub_23_2_n_37), .B (sub_23_2_n_42), .Y
       (out1[1]));
  CLKXOR2X1 sub_23_2_g456(.A (sub_23_2_n_45), .B (sub_23_2_n_60), .Y
       (out1[3]));
  XOR2XL sub_23_2_g457(.A (sub_23_2_n_44), .B (sub_23_2_n_65), .Y
       (out1[5]));
  XNOR2X1 sub_23_2_g458(.A (sub_23_2_n_43), .B (sub_23_2_n_105), .Y
       (out1[4]));
  NOR2BX1 sub_23_2_g459(.AN (sub_23_2_n_36), .B (sub_23_2_n_4), .Y
       (sub_23_2_n_8));
  NOR2BX1 sub_23_2_g460(.AN (sub_23_2_n_35), .B (sub_23_2_n_64), .Y
       (sub_23_2_n_7));
  NAND2BX1 sub_23_2_g461(.AN (sub_23_2_n_31), .B (sub_23_2_n_34), .Y
       (sub_23_2_n_6));
  NAND2BX1 sub_23_2_g462(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_5));
  NOR2BX1 sub_23_2_g463(.AN (in1[2]), .B (in2[2]), .Y (sub_23_2_n_4));
  NAND2BX1 sub_23_2_g464(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_3));
  CLKXOR2X1 sub_23_2_g465(.A (in2[6]), .B (sub_23_2_n_67), .Y
       (out1[6]));
  NOR2BX1 sub_23_2_g466(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_1));
  XOR2XL sub_23_2_g467(.A (in2[8]), .B (sub_23_2_n_63), .Y (out1[8]));
  INVXL sub_23_2_fopt(.A (sub_23_2_n_107), .Y (sub_23_2_n_105));
  INVXL sub_23_2_fopt468(.A (sub_23_2_n_107), .Y (sub_23_2_n_106));
  INVXL sub_23_2_fopt469(.A (sub_23_2_n_59), .Y (sub_23_2_n_107));
  BUFX2 sub_23_2_fopt470(.A (sub_23_2_n_110), .Y (sub_23_2_n_109));
  INVXL sub_23_2_fopt471(.A (sub_23_2_n_49), .Y (sub_23_2_n_110));
  INVXL sub_23_2_fopt472(.A (sub_23_2_n_114), .Y (sub_23_2_n_112));
  INVXL sub_23_2_fopt473(.A (sub_23_2_n_114), .Y (sub_23_2_n_113));
  INVXL sub_23_2_fopt474(.A (sub_23_2_n_5), .Y (sub_23_2_n_114));
  INVXL sub_23_2_fopt475(.A (sub_23_2_n_118), .Y (sub_23_2_n_116));
  INVXL sub_23_2_fopt476(.A (sub_23_2_n_118), .Y (sub_23_2_n_117));
  INVXL sub_23_2_fopt477(.A (sub_23_2_n_58), .Y (sub_23_2_n_118));
  INVXL sub_23_2_fopt478(.A (sub_23_2_n_122), .Y (sub_23_2_n_120));
  CLKINVX1 sub_23_2_fopt479(.A (sub_23_2_n_122), .Y (sub_23_2_n_121));
  INVXL sub_23_2_fopt480(.A (sub_23_2_n_61), .Y (sub_23_2_n_122));
endmodule


