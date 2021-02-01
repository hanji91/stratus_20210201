`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:55 KST (Dec  7 2020 13:18:55 UTC)

module st_feature_addr_gen_Sub_17Ux8U_18S_1(in2, in1, out1);
  input [16:0] in2;
  input [7:0] in1;
  output [17:0] out1;
  wire [16:0] in2;
  wire [7:0] in1;
  wire [17:0] out1;
  wire sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_3, sub_23_2_n_4,
       sub_23_2_n_5, sub_23_2_n_6, sub_23_2_n_7, sub_23_2_n_8;
  wire sub_23_2_n_9, sub_23_2_n_10, sub_23_2_n_14, sub_23_2_n_18,
       sub_23_2_n_20, sub_23_2_n_21, sub_23_2_n_22, sub_23_2_n_23;
  wire sub_23_2_n_24, sub_23_2_n_25, sub_23_2_n_26, sub_23_2_n_27,
       sub_23_2_n_28, sub_23_2_n_29, sub_23_2_n_30, sub_23_2_n_31;
  wire sub_23_2_n_32, sub_23_2_n_33, sub_23_2_n_34, sub_23_2_n_35,
       sub_23_2_n_36, sub_23_2_n_37, sub_23_2_n_38, sub_23_2_n_39;
  wire sub_23_2_n_40, sub_23_2_n_41, sub_23_2_n_42, sub_23_2_n_43,
       sub_23_2_n_44, sub_23_2_n_45, sub_23_2_n_47, sub_23_2_n_48;
  wire sub_23_2_n_49, sub_23_2_n_50, sub_23_2_n_51, sub_23_2_n_52,
       sub_23_2_n_53, sub_23_2_n_54, sub_23_2_n_55, sub_23_2_n_56;
  wire sub_23_2_n_57, sub_23_2_n_58, sub_23_2_n_59, sub_23_2_n_60,
       sub_23_2_n_61, sub_23_2_n_62, sub_23_2_n_63, sub_23_2_n_64;
  wire sub_23_2_n_65, sub_23_2_n_66, sub_23_2_n_67, sub_23_2_n_68,
       sub_23_2_n_69, sub_23_2_n_70, sub_23_2_n_71, sub_23_2_n_72;
  wire sub_23_2_n_73, sub_23_2_n_74, sub_23_2_n_75, sub_23_2_n_76,
       sub_23_2_n_77, sub_23_2_n_78, sub_23_2_n_79, sub_23_2_n_80;
  wire sub_23_2_n_81, sub_23_2_n_82, sub_23_2_n_83, sub_23_2_n_84,
       sub_23_2_n_85, sub_23_2_n_86, sub_23_2_n_87, sub_23_2_n_88;
  MXI2XL sub_23_2_g396(.A (sub_23_2_n_27), .B (in2[9]), .S0
       (sub_23_2_n_87), .Y (out1[9]));
  MXI2XL sub_23_2_g397(.A (in2[16]), .B (sub_23_2_n_29), .S0
       (sub_23_2_n_85), .Y (out1[16]));
  MXI2XL sub_23_2_g398(.A (in2[10]), .B (sub_23_2_n_24), .S0
       (sub_23_2_n_88), .Y (out1[10]));
  MXI2XL sub_23_2_g399(.A (in2[14]), .B (sub_23_2_n_25), .S0
       (sub_23_2_n_84), .Y (out1[14]));
  MXI2XL sub_23_2_g400(.A (in2[13]), .B (sub_23_2_n_21), .S0
       (sub_23_2_n_82), .Y (out1[13]));
  MXI2XL sub_23_2_g401(.A (in2[12]), .B (sub_23_2_n_26), .S0
       (sub_23_2_n_86), .Y (out1[12]));
  MXI2XL sub_23_2_g402(.A (sub_23_2_n_30), .B (in2[11]), .S0
       (sub_23_2_n_81), .Y (out1[11]));
  MXI2XL sub_23_2_g403(.A (sub_23_2_n_20), .B (in2[15]), .S0
       (sub_23_2_n_83), .Y (out1[15]));
  NOR3BX1 sub_23_2_g404(.AN (sub_23_2_n_62), .B (in2[16]), .C
       (sub_23_2_n_78), .Y (out1[17]));
  NAND2X1 sub_23_2_g409(.A (sub_23_2_n_39), .B (sub_23_2_n_79), .Y
       (sub_23_2_n_88));
  NOR2X1 sub_23_2_g410(.A (in2[8]), .B (sub_23_2_n_78), .Y
       (sub_23_2_n_87));
  NAND2X1 sub_23_2_g411(.A (sub_23_2_n_47), .B (sub_23_2_n_79), .Y
       (sub_23_2_n_86));
  NAND2X1 sub_23_2_g412(.A (sub_23_2_n_62), .B (sub_23_2_n_79), .Y
       (sub_23_2_n_85));
  NAND2X1 sub_23_2_g413(.A (sub_23_2_n_66), .B (sub_23_2_n_79), .Y
       (sub_23_2_n_84));
  NOR2X1 sub_23_2_g414(.A (sub_23_2_n_58), .B (sub_23_2_n_78), .Y
       (sub_23_2_n_83));
  NAND2X1 sub_23_2_g415(.A (sub_23_2_n_65), .B (sub_23_2_n_79), .Y
       (sub_23_2_n_82));
  NOR2X1 sub_23_2_g416(.A (sub_23_2_n_53), .B (sub_23_2_n_78), .Y
       (sub_23_2_n_81));
  NOR2X1 sub_23_2_g418(.A (sub_23_2_n_3), .B (sub_23_2_n_76), .Y
       (sub_23_2_n_80));
  CLKINVX3 sub_23_2_g419(.A (sub_23_2_n_79), .Y (sub_23_2_n_78));
  NOR2X4 sub_23_2_g420(.A (sub_23_2_n_68), .B (sub_23_2_n_75), .Y
       (sub_23_2_n_79));
  NOR2X1 sub_23_2_g423(.A (sub_23_2_n_69), .B (sub_23_2_n_74), .Y
       (sub_23_2_n_77));
  NOR2X1 sub_23_2_g425(.A (sub_23_2_n_4), .B (sub_23_2_n_72), .Y
       (sub_23_2_n_76));
  NOR2X2 sub_23_2_g426(.A (sub_23_2_n_64), .B (sub_23_2_n_72), .Y
       (sub_23_2_n_75));
  NOR2X1 sub_23_2_g427(.A (sub_23_2_n_63), .B (sub_23_2_n_72), .Y
       (sub_23_2_n_74));
  AOI21X1 sub_23_2_g428(.A0 (sub_23_2_n_36), .A1 (sub_23_2_n_70), .B0
       (sub_23_2_n_33), .Y (sub_23_2_n_73));
  NOR2X4 sub_23_2_g430(.A (sub_23_2_n_59), .B (sub_23_2_n_71), .Y
       (sub_23_2_n_72));
  NOR2X2 sub_23_2_g431(.A (sub_23_2_n_45), .B (sub_23_2_n_67), .Y
       (sub_23_2_n_71));
  INVX1 sub_23_2_g432(.A (sub_23_2_n_67), .Y (sub_23_2_n_70));
  OAI21X1 sub_23_2_g433(.A0 (sub_23_2_n_2), .A1 (sub_23_2_n_61), .B0
       (sub_23_2_n_38), .Y (sub_23_2_n_69));
  OAI21X2 sub_23_2_g434(.A0 (sub_23_2_n_61), .A1 (sub_23_2_n_52), .B0
       (sub_23_2_n_60), .Y (sub_23_2_n_68));
  AOI21X4 sub_23_2_g435(.A0 (sub_23_2_n_35), .A1 (sub_23_2_n_44), .B0
       (sub_23_2_n_37), .Y (sub_23_2_n_67));
  AND2XL sub_23_2_g438(.A (sub_23_2_n_40), .B (sub_23_2_n_47), .Y
       (sub_23_2_n_66));
  NOR2X1 sub_23_2_g439(.A (in2[12]), .B (sub_23_2_n_48), .Y
       (sub_23_2_n_65));
  NAND2X1 sub_23_2_g440(.A (sub_23_2_n_8), .B (sub_23_2_n_55), .Y
       (sub_23_2_n_64));
  NAND2BX1 sub_23_2_g441(.AN (sub_23_2_n_2), .B (sub_23_2_n_55), .Y
       (sub_23_2_n_63));
  NOR4BX1 sub_23_2_g442(.AN (sub_23_2_n_40), .B (sub_23_2_n_48), .C
       (in2[15]), .D (in2[14]), .Y (sub_23_2_n_62));
  AOI21X2 sub_23_2_g444(.A0 (sub_23_2_n_3), .A1 (sub_23_2_n_5), .B0
       (sub_23_2_n_43), .Y (sub_23_2_n_61));
  AOI21X1 sub_23_2_g445(.A0 (sub_23_2_n_1), .A1 (sub_23_2_n_6), .B0
       (sub_23_2_n_42), .Y (sub_23_2_n_60));
  NAND2X4 sub_23_2_g446(.A (sub_23_2_n_7), .B (sub_23_2_n_54), .Y
       (sub_23_2_n_59));
  NAND3X1 sub_23_2_g447(.A (sub_23_2_n_47), .B (sub_23_2_n_25), .C
       (sub_23_2_n_40), .Y (sub_23_2_n_58));
  NAND2X2 sub_23_2_g452(.A (sub_23_2_n_33), .B (sub_23_2_n_34), .Y
       (sub_23_2_n_54));
  NAND2X1 sub_23_2_g453(.A (sub_23_2_n_24), .B (sub_23_2_n_39), .Y
       (sub_23_2_n_53));
  NOR2X1 sub_23_2_g454(.A (sub_23_2_n_2), .B (sub_23_2_n_6), .Y
       (sub_23_2_n_57));
  NAND2X1 sub_23_2_g457(.A (sub_23_2_n_34), .B (sub_23_2_n_7), .Y
       (sub_23_2_n_56));
  NOR2X2 sub_23_2_g458(.A (sub_23_2_n_41), .B (sub_23_2_n_4), .Y
       (sub_23_2_n_55));
  INVX1 sub_23_2_g459(.A (sub_23_2_n_8), .Y (sub_23_2_n_52));
  INVX1 sub_23_2_g463(.A (sub_23_2_n_48), .Y (sub_23_2_n_47));
  MXI2XL sub_23_2_g464(.A (sub_23_2_n_28), .B (in2[0]), .S0 (in1[0]),
       .Y (out1[0]));
  NAND2X1 sub_23_2_g465(.A (sub_23_2_n_34), .B (sub_23_2_n_36), .Y
       (sub_23_2_n_45));
  NOR2X1 sub_23_2_g467(.A (sub_23_2_n_41), .B (sub_23_2_n_43), .Y
       (sub_23_2_n_51));
  NOR2X1 sub_23_2_g468(.A (sub_23_2_n_4), .B (sub_23_2_n_3), .Y
       (sub_23_2_n_50));
  NOR2BX1 sub_23_2_g469(.AN (sub_23_2_n_1), .B (sub_23_2_n_42), .Y
       (sub_23_2_n_49));
  NAND2X1 sub_23_2_g470(.A (sub_23_2_n_32), .B (sub_23_2_n_39), .Y
       (sub_23_2_n_48));
  INVX1 sub_23_2_g471(.A (sub_23_2_n_5), .Y (sub_23_2_n_41));
  INVX1 sub_23_2_g472(.A (sub_23_2_n_6), .Y (sub_23_2_n_38));
  NAND2X2 sub_23_2_g473(.A (in1[1]), .B (sub_23_2_n_23), .Y
       (sub_23_2_n_44));
  NOR2BX1 sub_23_2_g474(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_43));
  NOR2BX1 sub_23_2_g476(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_42));
  NOR2X1 sub_23_2_g478(.A (in2[13]), .B (in2[12]), .Y (sub_23_2_n_40));
  NOR2X1 sub_23_2_g480(.A (in2[9]), .B (in2[8]), .Y (sub_23_2_n_39));
  NOR2X1 sub_23_2_g485(.A (in2[11]), .B (in2[10]), .Y (sub_23_2_n_32));
  NOR2X2 sub_23_2_g486(.A (sub_23_2_n_23), .B (in1[1]), .Y
       (sub_23_2_n_37));
  NAND2X1 sub_23_2_g487(.A (in1[2]), .B (sub_23_2_n_31), .Y
       (sub_23_2_n_36));
  NAND2X2 sub_23_2_g489(.A (in1[0]), .B (sub_23_2_n_28), .Y
       (sub_23_2_n_35));
  NAND2X4 sub_23_2_g490(.A (in1[3]), .B (sub_23_2_n_22), .Y
       (sub_23_2_n_34));
  NOR2X2 sub_23_2_g491(.A (sub_23_2_n_31), .B (in1[2]), .Y
       (sub_23_2_n_33));
  INVX2 sub_23_2_g494(.A (in2[2]), .Y (sub_23_2_n_31));
  INVXL sub_23_2_g497(.A (in2[11]), .Y (sub_23_2_n_30));
  INVXL sub_23_2_g498(.A (in2[16]), .Y (sub_23_2_n_29));
  INVX2 sub_23_2_g499(.A (in2[0]), .Y (sub_23_2_n_28));
  INVX1 sub_23_2_g500(.A (in2[9]), .Y (sub_23_2_n_27));
  INVXL sub_23_2_g501(.A (in2[12]), .Y (sub_23_2_n_26));
  INVX1 sub_23_2_g502(.A (in2[14]), .Y (sub_23_2_n_25));
  INVX1 sub_23_2_g503(.A (in2[10]), .Y (sub_23_2_n_24));
  CLKINVX4 sub_23_2_g508(.A (in2[1]), .Y (sub_23_2_n_23));
  INVX1 sub_23_2_g510(.A (in2[3]), .Y (sub_23_2_n_22));
  INVXL sub_23_2_g511(.A (in2[13]), .Y (sub_23_2_n_21));
  INVXL sub_23_2_g513(.A (in2[15]), .Y (sub_23_2_n_20));
  XNOR2X1 sub_23_2_g2(.A (sub_23_2_n_35), .B (sub_23_2_n_10), .Y
       (out1[1]));
  NOR2BX1 sub_23_2_g514(.AN (sub_23_2_n_61), .B (sub_23_2_n_14), .Y
       (sub_23_2_n_18));
  XNOR2X1 sub_23_2_g515(.A (sub_23_2_n_57), .B (sub_23_2_n_18), .Y
       (out1[6]));
  CLKXOR2X1 sub_23_2_g516(.A (sub_23_2_n_9), .B (sub_23_2_n_67), .Y
       (out1[2]));
  CLKXOR2X1 sub_23_2_g517(.A (sub_23_2_n_56), .B (sub_23_2_n_73), .Y
       (out1[3]));
  NOR2BX1 sub_23_2_g518(.AN (sub_23_2_n_55), .B (sub_23_2_n_72), .Y
       (sub_23_2_n_14));
  XNOR2X1 sub_23_2_g519(.A (sub_23_2_n_51), .B (sub_23_2_n_80), .Y
       (out1[5]));
  XNOR2X1 sub_23_2_g520(.A (sub_23_2_n_50), .B (sub_23_2_n_72), .Y
       (out1[4]));
  XNOR2X1 sub_23_2_g521(.A (sub_23_2_n_49), .B (sub_23_2_n_77), .Y
       (out1[7]));
  NAND2BX1 sub_23_2_g522(.AN (sub_23_2_n_37), .B (sub_23_2_n_44), .Y
       (sub_23_2_n_10));
  NAND2BX1 sub_23_2_g523(.AN (sub_23_2_n_33), .B (sub_23_2_n_36), .Y
       (sub_23_2_n_9));
  NOR2BX1 sub_23_2_g524(.AN (sub_23_2_n_1), .B (sub_23_2_n_2), .Y
       (sub_23_2_n_8));
  NAND2BX1 sub_23_2_g525(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_7));
  NOR2BX1 sub_23_2_g526(.AN (in2[6]), .B (in1[6]), .Y (sub_23_2_n_6));
  NAND2BX4 sub_23_2_g527(.AN (in2[5]), .B (in1[5]), .Y (sub_23_2_n_5));
  NOR2BX1 sub_23_2_g528(.AN (in1[4]), .B (in2[4]), .Y (sub_23_2_n_4));
  NOR2BX2 sub_23_2_g529(.AN (in2[4]), .B (in1[4]), .Y (sub_23_2_n_3));
  NOR2BX1 sub_23_2_g530(.AN (in1[6]), .B (in2[6]), .Y (sub_23_2_n_2));
  NAND2BX1 sub_23_2_g531(.AN (in2[7]), .B (in1[7]), .Y (sub_23_2_n_1));
  XOR2XL sub_23_2_g532(.A (in2[8]), .B (sub_23_2_n_79), .Y (out1[8]));
endmodule

