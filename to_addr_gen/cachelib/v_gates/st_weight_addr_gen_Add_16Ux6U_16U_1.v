`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:42:20 KST (Dec  7 2020 09:42:20 UTC)

module st_weight_addr_gen_Add_16Ux6U_16U_1(in2, in1, out1);
  input [15:0] in2;
  input [5:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [5:0] in1;
  wire [15:0] out1;
  wire add_23_2_n_3, add_23_2_n_4, add_23_2_n_8, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
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
       add_23_2_n_107, add_23_2_n_108, add_23_2_n_109, add_23_2_n_112;
  MXI2X1 add_23_2_g344(.A (add_23_2_n_14), .B (in2[9]), .S0
       (add_23_2_n_73), .Y (out1[9]));
  MXI2X1 add_23_2_g345(.A (add_23_2_n_19), .B (in2[13]), .S0
       (add_23_2_n_71), .Y (out1[13]));
  MXI2X1 add_23_2_g346(.A (add_23_2_n_20), .B (in2[11]), .S0
       (add_23_2_n_70), .Y (out1[11]));
  MXI2X1 add_23_2_g347(.A (add_23_2_n_15), .B (in2[15]), .S0
       (add_23_2_n_69), .Y (out1[15]));
  MXI2X1 add_23_2_g348(.A (add_23_2_n_18), .B (in2[12]), .S0
       (add_23_2_n_75), .Y (out1[12]));
  MXI2X1 add_23_2_g349(.A (add_23_2_n_11), .B (in2[10]), .S0
       (add_23_2_n_74), .Y (out1[10]));
  MXI2X1 add_23_2_g350(.A (add_23_2_n_13), .B (in2[14]), .S0
       (add_23_2_n_72), .Y (out1[14]));
  MXI2XL add_23_2_g353(.A (in2[8]), .B (add_23_2_n_12), .S0
       (add_23_2_n_65), .Y (out1[8]));
  NOR2X1 add_23_2_g355(.A (add_23_2_n_37), .B (add_23_2_n_65), .Y
       (add_23_2_n_75));
  NOR2X1 add_23_2_g356(.A (add_23_2_n_23), .B (add_23_2_n_65), .Y
       (add_23_2_n_74));
  NOR2X1 add_23_2_g357(.A (add_23_2_n_12), .B (add_23_2_n_65), .Y
       (add_23_2_n_73));
  NOR2X1 add_23_2_g358(.A (add_23_2_n_50), .B (add_23_2_n_65), .Y
       (add_23_2_n_72));
  NOR2X1 add_23_2_g359(.A (add_23_2_n_52), .B (add_23_2_n_65), .Y
       (add_23_2_n_71));
  NOR2X1 add_23_2_g360(.A (add_23_2_n_43), .B (add_23_2_n_65), .Y
       (add_23_2_n_70));
  NOR2X1 add_23_2_g361(.A (add_23_2_n_46), .B (add_23_2_n_65), .Y
       (add_23_2_n_69));
  NOR2X1 add_23_2_g362(.A (add_23_2_n_48), .B (add_23_2_n_8), .Y
       (add_23_2_n_68));
  NOR2BX1 add_23_2_g363(.AN (add_23_2_n_34), .B (add_23_2_n_64), .Y
       (add_23_2_n_67));
  NOR2BX1 add_23_2_g364(.AN (add_23_2_n_54), .B (add_23_2_n_63), .Y
       (add_23_2_n_66));
  NOR2X2 add_23_2_g367(.A (add_23_2_n_56), .B (add_23_2_n_62), .Y
       (add_23_2_n_65));
  NOR2X1 add_23_2_g369(.A (add_23_2_n_33), .B (add_23_2_n_60), .Y
       (add_23_2_n_64));
  NOR2X1 add_23_2_g370(.A (add_23_2_n_51), .B (add_23_2_n_60), .Y
       (add_23_2_n_63));
  NOR2X2 add_23_2_g371(.A (add_23_2_n_53), .B (add_23_2_n_60), .Y
       (add_23_2_n_62));
  NOR2BX1 add_23_2_g372(.AN (add_23_2_n_32), .B (add_23_2_n_59), .Y
       (add_23_2_n_61));
  NOR2X2 add_23_2_g374(.A (add_23_2_n_49), .B (add_23_2_n_58), .Y
       (add_23_2_n_60));
  NOR2X1 add_23_2_g375(.A (add_23_2_n_30), .B (add_23_2_n_108), .Y
       (add_23_2_n_59));
  NOR2X2 add_23_2_g376(.A (add_23_2_n_4), .B (add_23_2_n_57), .Y
       (add_23_2_n_58));
  NOR2X4 add_23_2_g377(.A (add_23_2_n_28), .B (add_23_2_n_55), .Y
       (add_23_2_n_57));
  NOR2X1 add_23_2_g379(.A (add_23_2_n_27), .B (add_23_2_n_47), .Y
       (add_23_2_n_56));
  NOR2X4 add_23_2_g380(.A (add_23_2_n_25), .B (add_23_2_n_26), .Y
       (add_23_2_n_55));
  NAND2XL add_23_2_g381(.A (in2[6]), .B (add_23_2_n_48), .Y
       (add_23_2_n_54));
  NAND2BX1 add_23_2_g383(.AN (add_23_2_n_27), .B (add_23_2_n_44), .Y
       (add_23_2_n_53));
  OR2XL add_23_2_g384(.A (add_23_2_n_18), .B (add_23_2_n_37), .Y
       (add_23_2_n_52));
  NAND2X1 add_23_2_g385(.A (in2[6]), .B (add_23_2_n_44), .Y
       (add_23_2_n_51));
  OR2XL add_23_2_g386(.A (add_23_2_n_35), .B (add_23_2_n_37), .Y
       (add_23_2_n_50));
  OAI21X1 add_23_2_g387(.A0 (add_23_2_n_32), .A1 (add_23_2_n_21), .B0
       (add_23_2_n_36), .Y (add_23_2_n_49));
  INVX1 add_23_2_g388(.A (add_23_2_n_47), .Y (add_23_2_n_48));
  NOR2X1 add_23_2_g389(.A (add_23_2_n_3), .B (add_23_2_n_42), .Y
       (add_23_2_n_47));
  OR3XL add_23_2_g390(.A (add_23_2_n_37), .B (add_23_2_n_13), .C
       (add_23_2_n_35), .Y (add_23_2_n_46));
  OR2XL add_23_2_g393(.A (add_23_2_n_11), .B (add_23_2_n_23), .Y
       (add_23_2_n_43));
  NOR2X1 add_23_2_g394(.A (add_23_2_n_34), .B (add_23_2_n_24), .Y
       (add_23_2_n_42));
  NOR2X1 add_23_2_g395(.A (add_23_2_n_28), .B (add_23_2_n_26), .Y
       (add_23_2_n_41));
  NAND2X1 add_23_2_g396(.A (add_23_2_n_32), .B (add_23_2_n_31), .Y
       (add_23_2_n_45));
  NOR2X1 add_23_2_g397(.A (add_23_2_n_24), .B (add_23_2_n_33), .Y
       (add_23_2_n_44));
  NOR2BX1 add_23_2_g403(.AN (add_23_2_n_36), .B (add_23_2_n_112), .Y
       (add_23_2_n_40));
  NOR2X1 add_23_2_g404(.A (add_23_2_n_3), .B (add_23_2_n_24), .Y
       (add_23_2_n_39));
  NAND2BX1 add_23_2_g405(.AN (add_23_2_n_33), .B (add_23_2_n_34), .Y
       (add_23_2_n_38));
  NAND2X2 add_23_2_g406(.A (add_23_2_n_29), .B (add_23_2_n_22), .Y
       (add_23_2_n_37));
  INVX1 add_23_2_g407(.A (add_23_2_n_30), .Y (add_23_2_n_31));
  NOR2X1 add_23_2_g408(.A (add_23_2_n_20), .B (add_23_2_n_11), .Y
       (add_23_2_n_29));
  NAND2X1 add_23_2_g409(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_36));
  NAND2X1 add_23_2_g410(.A (in2[13]), .B (in2[12]), .Y (add_23_2_n_35));
  NAND2X1 add_23_2_g411(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_34));
  NOR2X1 add_23_2_g412(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_33));
  NAND2X2 add_23_2_g413(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_32));
  NOR2X4 add_23_2_g414(.A (in2[2]), .B (in1[2]), .Y (add_23_2_n_30));
  INVX1 add_23_2_g415(.A (add_23_2_n_22), .Y (add_23_2_n_23));
  NOR2X2 add_23_2_g417(.A (add_23_2_n_16), .B (add_23_2_n_17), .Y
       (add_23_2_n_28));
  NAND2X1 add_23_2_g418(.A (in2[7]), .B (in2[6]), .Y (add_23_2_n_27));
  NOR2X4 add_23_2_g419(.A (in2[1]), .B (in1[1]), .Y (add_23_2_n_26));
  NAND2X8 add_23_2_g421(.A (in2[0]), .B (in1[0]), .Y (add_23_2_n_25));
  NOR2X1 add_23_2_g422(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_24));
  NOR2X1 add_23_2_g423(.A (add_23_2_n_14), .B (add_23_2_n_12), .Y
       (add_23_2_n_22));
  NOR2X8 add_23_2_g424(.A (in2[3]), .B (in1[3]), .Y (add_23_2_n_21));
  INVX1 add_23_2_g428(.A (in2[11]), .Y (add_23_2_n_20));
  INVXL add_23_2_g430(.A (in2[13]), .Y (add_23_2_n_19));
  INVX1 add_23_2_g431(.A (in2[12]), .Y (add_23_2_n_18));
  INVX1 add_23_2_g432(.A (in1[1]), .Y (add_23_2_n_17));
  CLKINVX2 add_23_2_g433(.A (in2[1]), .Y (add_23_2_n_16));
  INVXL add_23_2_g434(.A (in2[15]), .Y (add_23_2_n_15));
  INVX1 add_23_2_g435(.A (in2[9]), .Y (add_23_2_n_14));
  INVX1 add_23_2_g436(.A (in2[14]), .Y (add_23_2_n_13));
  INVX1 add_23_2_g437(.A (in2[8]), .Y (add_23_2_n_12));
  INVX1 add_23_2_g438(.A (in2[10]), .Y (add_23_2_n_11));
  XNOR2X1 add_23_2_g2(.A (add_23_2_n_25), .B (add_23_2_n_41), .Y
       (out1[1]));
  CLKXOR2X1 add_23_2_g440(.A (add_23_2_n_45), .B (add_23_2_n_107), .Y
       (out1[2]));
  NOR2BX1 add_23_2_g441(.AN (add_23_2_n_44), .B (add_23_2_n_60), .Y
       (add_23_2_n_8));
  XNOR2X1 add_23_2_g442(.A (add_23_2_n_40), .B (add_23_2_n_61), .Y
       (out1[3]));
  XNOR2XL add_23_2_g443(.A (add_23_2_n_39), .B (add_23_2_n_67), .Y
       (out1[5]));
  CLKXOR2X1 add_23_2_g444(.A (add_23_2_n_38), .B (add_23_2_n_60), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g445(.AN (add_23_2_n_21), .B (add_23_2_n_31), .Y
       (add_23_2_n_4));
  AND2X1 add_23_2_g446(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_3));
  CLKXOR2X1 add_23_2_g447(.A (in2[0]), .B (in1[0]), .Y (out1[0]));
  XNOR2XL add_23_2_g448(.A (in2[7]), .B (add_23_2_n_66), .Y (out1[7]));
  XNOR2XL add_23_2_g449(.A (in2[6]), .B (add_23_2_n_68), .Y (out1[6]));
  INVXL add_23_2_fopt(.A (add_23_2_n_109), .Y (add_23_2_n_107));
  INVXL add_23_2_fopt450(.A (add_23_2_n_109), .Y (add_23_2_n_108));
  INVXL add_23_2_fopt451(.A (add_23_2_n_57), .Y (add_23_2_n_109));
  BUFX2 add_23_2_fopt452(.A (add_23_2_n_21), .Y (add_23_2_n_112));
endmodule


