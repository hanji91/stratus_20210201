`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:18:58 KST (Dec  7 2020 13:18:58 UTC)

module st_feature_addr_gen_Add_16Ux8U_17U_1(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [16:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [16:0] out1;
  wire add_23_2_n_1, add_23_2_n_2, add_23_2_n_3, add_23_2_n_8,
       add_23_2_n_11, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_16, add_23_2_n_17, add_23_2_n_18, add_23_2_n_19,
       add_23_2_n_20, add_23_2_n_21, add_23_2_n_22, add_23_2_n_23;
  wire add_23_2_n_24, add_23_2_n_25, add_23_2_n_26, add_23_2_n_27,
       add_23_2_n_28, add_23_2_n_29, add_23_2_n_30, add_23_2_n_31;
  wire add_23_2_n_32, add_23_2_n_33, add_23_2_n_34, add_23_2_n_35,
       add_23_2_n_36, add_23_2_n_37, add_23_2_n_38, add_23_2_n_39;
  wire add_23_2_n_40, add_23_2_n_41, add_23_2_n_42, add_23_2_n_43,
       add_23_2_n_44, add_23_2_n_45, add_23_2_n_46, add_23_2_n_47;
  wire add_23_2_n_48, add_23_2_n_49, add_23_2_n_50, add_23_2_n_51,
       add_23_2_n_52, add_23_2_n_53, add_23_2_n_54, add_23_2_n_55;
  wire add_23_2_n_56, add_23_2_n_57, add_23_2_n_58, add_23_2_n_59,
       add_23_2_n_60, add_23_2_n_61, add_23_2_n_62, add_23_2_n_63;
  wire add_23_2_n_64, add_23_2_n_65, add_23_2_n_66, add_23_2_n_67,
       add_23_2_n_68, add_23_2_n_69, add_23_2_n_70, add_23_2_n_71;
  wire add_23_2_n_72, add_23_2_n_73, add_23_2_n_74, add_23_2_n_75,
       add_23_2_n_76, add_23_2_n_77, add_23_2_n_78, add_23_2_n_80;
  wire add_23_2_n_81, add_23_2_n_82, add_23_2_n_83, add_23_2_n_117,
       add_23_2_n_118, add_23_2_n_119, add_23_2_n_122;
  MXI2XL add_23_2_g356(.A (add_23_2_n_15), .B (in2[9]), .S0
       (add_23_2_n_81), .Y (out1[9]));
  MXI2XL add_23_2_g357(.A (add_23_2_n_17), .B (in2[13]), .S0
       (add_23_2_n_78), .Y (out1[13]));
  MXI2XL add_23_2_g358(.A (add_23_2_n_16), .B (in2[11]), .S0
       (add_23_2_n_77), .Y (out1[11]));
  MXI2XL add_23_2_g359(.A (add_23_2_n_21), .B (in2[15]), .S0
       (add_23_2_n_76), .Y (out1[15]));
  MXI2XL add_23_2_g360(.A (add_23_2_n_13), .B (in2[14]), .S0
       (add_23_2_n_80), .Y (out1[14]));
  MXI2XL add_23_2_g361(.A (add_23_2_n_19), .B (in2[12]), .S0
       (add_23_2_n_83), .Y (out1[12]));
  MXI2XL add_23_2_g362(.A (add_23_2_n_14), .B (in2[10]), .S0
       (add_23_2_n_82), .Y (out1[10]));
  MXI2XL add_23_2_g363(.A (in2[8]), .B (add_23_2_n_20), .S0
       (add_23_2_n_75), .Y (out1[8]));
  NOR2X1 add_23_2_g367(.A (add_23_2_n_41), .B (add_23_2_n_75), .Y
       (add_23_2_n_83));
  NOR2X1 add_23_2_g368(.A (add_23_2_n_34), .B (add_23_2_n_75), .Y
       (add_23_2_n_82));
  NOR2X1 add_23_2_g369(.A (add_23_2_n_20), .B (add_23_2_n_75), .Y
       (add_23_2_n_81));
  NOR2BX1 add_23_2_g370(.AN (add_23_2_n_62), .B (add_23_2_n_75), .Y
       (add_23_2_n_80));
  NOR2X1 add_23_2_g371(.A (add_23_2_n_58), .B (add_23_2_n_75), .Y
       (out1[16]));
  NOR2X1 add_23_2_g372(.A (add_23_2_n_61), .B (add_23_2_n_75), .Y
       (add_23_2_n_78));
  NOR2X1 add_23_2_g373(.A (add_23_2_n_48), .B (add_23_2_n_75), .Y
       (add_23_2_n_77));
  NOR2X1 add_23_2_g374(.A (add_23_2_n_54), .B (add_23_2_n_75), .Y
       (add_23_2_n_76));
  NOR2X2 add_23_2_g375(.A (add_23_2_n_65), .B (add_23_2_n_71), .Y
       (add_23_2_n_75));
  NOR2BX1 add_23_2_g377(.AN (add_23_2_n_36), .B (add_23_2_n_72), .Y
       (add_23_2_n_74));
  NOR2X1 add_23_2_g380(.A (add_23_2_n_66), .B (add_23_2_n_70), .Y
       (add_23_2_n_73));
  NOR2X1 add_23_2_g381(.A (add_23_2_n_33), .B (add_23_2_n_68), .Y
       (add_23_2_n_72));
  NOR2X2 add_23_2_g383(.A (add_23_2_n_60), .B (add_23_2_n_68), .Y
       (add_23_2_n_71));
  NOR2X1 add_23_2_g384(.A (add_23_2_n_59), .B (add_23_2_n_68), .Y
       (add_23_2_n_70));
  NOR2BX1 add_23_2_g385(.AN (add_23_2_n_28), .B (add_23_2_n_2), .Y
       (add_23_2_n_69));
  NOR2X4 add_23_2_g387(.A (add_23_2_n_56), .B (add_23_2_n_67), .Y
       (add_23_2_n_68));
  NOR2X2 add_23_2_g389(.A (add_23_2_n_3), .B (add_23_2_n_64), .Y
       (add_23_2_n_67));
  OAI21X1 add_23_2_g390(.A0 (add_23_2_n_23), .A1 (add_23_2_n_55), .B0
       (add_23_2_n_29), .Y (add_23_2_n_66));
  OAI21X1 add_23_2_g391(.A0 (add_23_2_n_51), .A1 (add_23_2_n_55), .B0
       (add_23_2_n_57), .Y (add_23_2_n_65));
  NOR2X4 add_23_2_g392(.A (add_23_2_n_1), .B (add_23_2_n_63), .Y
       (add_23_2_n_64));
  NOR2X2 add_23_2_g394(.A (add_23_2_n_37), .B (add_23_2_n_26), .Y
       (add_23_2_n_63));
  NOR2X1 add_23_2_g396(.A (add_23_2_n_25), .B (add_23_2_n_41), .Y
       (add_23_2_n_62));
  NAND2X1 add_23_2_g397(.A (in2[12]), .B (add_23_2_n_42), .Y
       (add_23_2_n_61));
  NAND2X1 add_23_2_g398(.A (add_23_2_n_50), .B (add_23_2_n_49), .Y
       (add_23_2_n_60));
  NAND2BX1 add_23_2_g399(.AN (add_23_2_n_23), .B (add_23_2_n_49), .Y
       (add_23_2_n_59));
  NAND4BX1 add_23_2_g400(.AN (add_23_2_n_25), .B (add_23_2_n_42), .C
       (in2[15]), .D (in2[14]), .Y (add_23_2_n_58));
  AOI2BB1X1 add_23_2_g401(.A0N (add_23_2_n_29), .A1N (add_23_2_n_24),
       .B0 (add_23_2_n_39), .Y (add_23_2_n_57));
  OAI21X2 add_23_2_g402(.A0 (add_23_2_n_35), .A1 (add_23_2_n_28), .B0
       (add_23_2_n_30), .Y (add_23_2_n_56));
  NOR2X2 add_23_2_g404(.A (add_23_2_n_38), .B (add_23_2_n_40), .Y
       (add_23_2_n_55));
  NAND3BXL add_23_2_g405(.AN (add_23_2_n_25), .B (add_23_2_n_42), .C
       (in2[14]), .Y (add_23_2_n_54));
  INVX1 add_23_2_g408(.A (add_23_2_n_50), .Y (add_23_2_n_51));
  OR2XL add_23_2_g411(.A (add_23_2_n_14), .B (add_23_2_n_34), .Y
       (add_23_2_n_48));
  NAND2X1 add_23_2_g412(.A (add_23_2_n_28), .B (add_23_2_n_27), .Y
       (add_23_2_n_53));
  NOR2BX1 add_23_2_g413(.AN (add_23_2_n_30), .B (add_23_2_n_122), .Y
       (add_23_2_n_52));
  NOR2X1 add_23_2_g414(.A (add_23_2_n_24), .B (add_23_2_n_23), .Y
       (add_23_2_n_50));
  NOR2X1 add_23_2_g415(.A (add_23_2_n_1), .B (add_23_2_n_37), .Y
       (add_23_2_n_47));
  NOR2X1 add_23_2_g416(.A (add_23_2_n_32), .B (add_23_2_n_33), .Y
       (add_23_2_n_49));
  INVX1 add_23_2_g421(.A (add_23_2_n_42), .Y (add_23_2_n_41));
  NOR2X1 add_23_2_g423(.A (add_23_2_n_36), .B (add_23_2_n_32), .Y
       (add_23_2_n_40));
  NAND2BX1 add_23_2_g424(.AN (add_23_2_n_23), .B (add_23_2_n_29), .Y
       (add_23_2_n_46));
  NOR2X1 add_23_2_g425(.A (add_23_2_n_38), .B (add_23_2_n_32), .Y
       (add_23_2_n_45));
  NAND2BX1 add_23_2_g426(.AN (add_23_2_n_33), .B (add_23_2_n_36), .Y
       (add_23_2_n_44));
  NOR2X1 add_23_2_g427(.A (add_23_2_n_39), .B (add_23_2_n_24), .Y
       (add_23_2_n_43));
  NOR2X1 add_23_2_g428(.A (add_23_2_n_31), .B (add_23_2_n_34), .Y
       (add_23_2_n_42));
  NAND2X1 add_23_2_g430(.A (in2[11]), .B (in2[10]), .Y (add_23_2_n_31));
  AND2X1 add_23_2_g431(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_39));
  AND2X1 add_23_2_g432(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_38));
  NOR2X6 add_23_2_g433(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_37));
  NAND2X1 add_23_2_g434(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_36));
  NOR2X8 add_23_2_g435(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_35));
  NAND2X1 add_23_2_g436(.A (in2[9]), .B (in2[8]), .Y (add_23_2_n_34));
  NOR2X1 add_23_2_g437(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_33));
  NOR2X2 add_23_2_g438(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_32));
  NAND2X1 add_23_2_g440(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_30));
  NAND2X1 add_23_2_g442(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_29));
  NAND2X1 add_23_2_g443(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_28));
  NAND2X4 add_23_2_g444(.A (add_23_2_n_22), .B (add_23_2_n_18), .Y
       (add_23_2_n_27));
  NAND2X6 add_23_2_g445(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_26));
  NAND2X1 add_23_2_g446(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_25));
  NOR2X2 add_23_2_g447(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_24));
  NOR2X2 add_23_2_g448(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_23));
  CLKINVX2 add_23_2_g450(.A (in2[2]), .Y (add_23_2_n_22));
  INVXL add_23_2_g451(.A (in2[15]), .Y (add_23_2_n_21));
  INVX1 add_23_2_g452(.A (in2[8]), .Y (add_23_2_n_20));
  INVXL add_23_2_g453(.A (in2[12]), .Y (add_23_2_n_19));
  CLKINVX2 add_23_2_g455(.A (in1[2]), .Y (add_23_2_n_18));
  INVXL add_23_2_g457(.A (in2[13]), .Y (add_23_2_n_17));
  INVXL add_23_2_g458(.A (in2[11]), .Y (add_23_2_n_16));
  INVXL add_23_2_g459(.A (in2[9]), .Y (add_23_2_n_15));
  INVX1 add_23_2_g460(.A (in2[10]), .Y (add_23_2_n_14));
  INVXL add_23_2_g461(.A (in2[14]), .Y (add_23_2_n_13));
  XNOR2X1 add_23_2_g2(.A (add_23_2_n_26), .B (add_23_2_n_47), .Y
       (out1[1]));
  NOR2BX1 add_23_2_g462(.AN (add_23_2_n_55), .B (add_23_2_n_8), .Y
       (add_23_2_n_11));
  CLKXOR2X1 add_23_2_g463(.A (add_23_2_n_53), .B (add_23_2_n_117), .Y
       (out1[2]));
  XNOR2X1 add_23_2_g464(.A (add_23_2_n_52), .B (add_23_2_n_69), .Y
       (out1[3]));
  NOR2BX1 add_23_2_g465(.AN (add_23_2_n_49), .B (add_23_2_n_68), .Y
       (add_23_2_n_8));
  CLKXOR2X1 add_23_2_g466(.A (add_23_2_n_46), .B (add_23_2_n_11), .Y
       (out1[6]));
  XNOR2XL add_23_2_g467(.A (add_23_2_n_45), .B (add_23_2_n_74), .Y
       (out1[5]));
  CLKXOR2X1 add_23_2_g468(.A (add_23_2_n_44), .B (add_23_2_n_68), .Y
       (out1[4]));
  XNOR2XL add_23_2_g469(.A (add_23_2_n_43), .B (add_23_2_n_73), .Y
       (out1[7]));
  NAND2BX1 add_23_2_g470(.AN (add_23_2_n_35), .B (add_23_2_n_27), .Y
       (add_23_2_n_3));
  NOR2BX1 add_23_2_g471(.AN (add_23_2_n_27), .B (add_23_2_n_118), .Y
       (add_23_2_n_2));
  CLKAND2X6 add_23_2_g472(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_1));
  CLKXOR2X1 add_23_2_g473(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  INVXL add_23_2_fopt(.A (add_23_2_n_119), .Y (add_23_2_n_117));
  INVXL add_23_2_fopt474(.A (add_23_2_n_119), .Y (add_23_2_n_118));
  INVXL add_23_2_fopt475(.A (add_23_2_n_64), .Y (add_23_2_n_119));
  BUFX2 add_23_2_fopt476(.A (add_23_2_n_35), .Y (add_23_2_n_122));
endmodule

