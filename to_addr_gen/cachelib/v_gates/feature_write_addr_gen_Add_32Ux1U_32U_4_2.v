`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 20:37:26 KST (Jan 19 2021 11:37:26 UTC)

module feature_write_addr_gen_Add_32Ux1U_32U_4_2(in2, in1, out1);
  input [31:0] in2;
  input in1;
  output [31:0] out1;
  wire [31:0] in2;
  wire in1;
  wire [31:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_1, inc_add_23_2_n_2,
       inc_add_23_2_n_3, inc_add_23_2_n_4, inc_add_23_2_n_5,
       inc_add_23_2_n_6, inc_add_23_2_n_7;
  wire inc_add_23_2_n_8, inc_add_23_2_n_9, inc_add_23_2_n_10,
       inc_add_23_2_n_11, inc_add_23_2_n_12, inc_add_23_2_n_13,
       inc_add_23_2_n_16, inc_add_23_2_n_17;
  wire inc_add_23_2_n_19, inc_add_23_2_n_21, inc_add_23_2_n_22,
       inc_add_23_2_n_24, inc_add_23_2_n_26, inc_add_23_2_n_28,
       inc_add_23_2_n_29, inc_add_23_2_n_30;
  wire inc_add_23_2_n_34, inc_add_23_2_n_35, inc_add_23_2_n_38,
       inc_add_23_2_n_41, inc_add_23_2_n_42, inc_add_23_2_n_43,
       inc_add_23_2_n_48, inc_add_23_2_n_49;
  wire inc_add_23_2_n_50, inc_add_23_2_n_53, inc_add_23_2_n_54,
       inc_add_23_2_n_57, inc_add_23_2_n_58, inc_add_23_2_n_62,
       inc_add_23_2_n_67, inc_add_23_2_n_69;
  XNOR2X1 inc_add_23_2_g302(.A (in2[31]), .B (inc_add_23_2_n_69), .Y
       (out1[31]));
  XNOR2X1 inc_add_23_2_g303(.A (in2[30]), .B (inc_add_23_2_n_67), .Y
       (out1[30]));
  NAND2BX1 inc_add_23_2_g304(.AN (inc_add_23_2_n_67), .B (in2[30]), .Y
       (inc_add_23_2_n_69));
  XNOR2X1 inc_add_23_2_g305(.A (in2[29]), .B (inc_add_23_2_n_62), .Y
       (out1[29]));
  NAND3BXL inc_add_23_2_g306(.AN (inc_add_23_2_n_57), .B (in2[29]), .C
       (in2[28]), .Y (inc_add_23_2_n_67));
  XNOR2X1 inc_add_23_2_g307(.A (in2[27]), .B (inc_add_23_2_n_58), .Y
       (out1[27]));
  XNOR2X1 inc_add_23_2_g308(.A (in2[25]), .B (inc_add_23_2_n_53), .Y
       (out1[25]));
  XNOR2X1 inc_add_23_2_g309(.A (in2[28]), .B (inc_add_23_2_n_57), .Y
       (out1[28]));
  XNOR2X1 inc_add_23_2_g310(.A (in2[23]), .B (inc_add_23_2_n_50), .Y
       (out1[23]));
  NAND2BX1 inc_add_23_2_g311(.AN (inc_add_23_2_n_57), .B (in2[28]), .Y
       (inc_add_23_2_n_62));
  XNOR2X1 inc_add_23_2_g312(.A (in2[21]), .B (inc_add_23_2_n_42), .Y
       (out1[21]));
  XNOR2X1 inc_add_23_2_g313(.A (in2[19]), .B (inc_add_23_2_n_41), .Y
       (out1[19]));
  XOR2XL inc_add_23_2_g314(.A (in2[26]), .B (inc_add_23_2_n_54), .Y
       (out1[26]));
  NAND2X1 inc_add_23_2_g315(.A (in2[26]), .B (inc_add_23_2_n_54), .Y
       (inc_add_23_2_n_58));
  NAND4XL inc_add_23_2_g316(.A (in2[27]), .B (in2[26]), .C
       (inc_add_23_2_n_5), .D (inc_add_23_2_n_48), .Y
       (inc_add_23_2_n_57));
  MXI2XL inc_add_23_2_g317(.A (inc_add_23_2_n_49), .B
       (inc_add_23_2_n_48), .S0 (in2[24]), .Y (out1[24]));
  XNOR2X1 inc_add_23_2_g318(.A (in2[17]), .B (inc_add_23_2_n_1), .Y
       (out1[17]));
  NOR2BX1 inc_add_23_2_g319(.AN (inc_add_23_2_n_5), .B
       (inc_add_23_2_n_49), .Y (inc_add_23_2_n_54));
  NAND2X1 inc_add_23_2_g320(.A (in2[24]), .B (inc_add_23_2_n_48), .Y
       (inc_add_23_2_n_53));
  XNOR2X1 inc_add_23_2_g321(.A (in2[15]), .B (inc_add_23_2_n_35), .Y
       (out1[15]));
  XNOR2X1 inc_add_23_2_g322(.A (in2[22]), .B (inc_add_23_2_n_43), .Y
       (out1[22]));
  NAND2BX1 inc_add_23_2_g323(.AN (inc_add_23_2_n_43), .B (in2[22]), .Y
       (inc_add_23_2_n_50));
  INVX1 inc_add_23_2_g324(.A (inc_add_23_2_n_49), .Y
       (inc_add_23_2_n_48));
  NAND4XL inc_add_23_2_g325(.A (in2[22]), .B (inc_add_23_2_n_9), .C
       (in2[23]), .D (inc_add_23_2_n_2), .Y (inc_add_23_2_n_49));
  XNOR2X1 inc_add_23_2_g326(.A (in2[13]), .B (inc_add_23_2_n_29), .Y
       (out1[13]));
  XNOR2X1 inc_add_23_2_g327(.A (in2[11]), .B (inc_add_23_2_n_28), .Y
       (out1[11]));
  XOR2XL inc_add_23_2_g328(.A (in2[20]), .B (inc_add_23_2_n_2), .Y
       (out1[20]));
  XOR2XL inc_add_23_2_g329(.A (in2[18]), .B (inc_add_23_2_n_38), .Y
       (out1[18]));
  NAND2X1 inc_add_23_2_g330(.A (inc_add_23_2_n_9), .B
       (inc_add_23_2_n_2), .Y (inc_add_23_2_n_43));
  NAND2X1 inc_add_23_2_g331(.A (in2[20]), .B (inc_add_23_2_n_2), .Y
       (inc_add_23_2_n_42));
  NAND2X1 inc_add_23_2_g332(.A (in2[18]), .B (inc_add_23_2_n_38), .Y
       (inc_add_23_2_n_41));
  XNOR2X1 inc_add_23_2_g333(.A (in2[16]), .B (inc_add_23_2_n_34), .Y
       (out1[16]));
  XNOR2X1 inc_add_23_2_g334(.A (in2[9]), .B (inc_add_23_2_n_0), .Y
       (out1[9]));
  NOR2X1 inc_add_23_2_g337(.A (inc_add_23_2_n_10), .B
       (inc_add_23_2_n_34), .Y (inc_add_23_2_n_38));
  XNOR2X1 inc_add_23_2_g339(.A (in2[14]), .B (inc_add_23_2_n_30), .Y
       (out1[14]));
  XNOR2X1 inc_add_23_2_g340(.A (in2[7]), .B (inc_add_23_2_n_24), .Y
       (out1[7]));
  NAND2BX1 inc_add_23_2_g341(.AN (inc_add_23_2_n_30), .B (in2[14]), .Y
       (inc_add_23_2_n_35));
  NAND4XL inc_add_23_2_g343(.A (in2[14]), .B (inc_add_23_2_n_8), .C
       (in2[15]), .D (inc_add_23_2_n_3), .Y (inc_add_23_2_n_34));
  XNOR2X1 inc_add_23_2_g344(.A (in2[5]), .B (inc_add_23_2_n_21), .Y
       (out1[5]));
  XOR2XL inc_add_23_2_g345(.A (in2[12]), .B (inc_add_23_2_n_3), .Y
       (out1[12]));
  XOR2XL inc_add_23_2_g346(.A (in2[10]), .B (inc_add_23_2_n_26), .Y
       (out1[10]));
  NAND2X1 inc_add_23_2_g347(.A (inc_add_23_2_n_8), .B
       (inc_add_23_2_n_3), .Y (inc_add_23_2_n_30));
  NAND2X1 inc_add_23_2_g348(.A (in2[12]), .B (inc_add_23_2_n_3), .Y
       (inc_add_23_2_n_29));
  NAND2X1 inc_add_23_2_g349(.A (in2[10]), .B (inc_add_23_2_n_26), .Y
       (inc_add_23_2_n_28));
  XNOR2X1 inc_add_23_2_g350(.A (in2[8]), .B (inc_add_23_2_n_22), .Y
       (out1[8]));
  NOR2X1 inc_add_23_2_g352(.A (inc_add_23_2_n_7), .B
       (inc_add_23_2_n_22), .Y (inc_add_23_2_n_26));
  XOR2XL inc_add_23_2_g355(.A (in2[6]), .B (inc_add_23_2_n_4), .Y
       (out1[6]));
  NAND2X1 inc_add_23_2_g356(.A (in2[6]), .B (inc_add_23_2_n_4), .Y
       (inc_add_23_2_n_24));
  XNOR2X1 inc_add_23_2_g357(.A (in2[4]), .B (inc_add_23_2_n_19), .Y
       (out1[4]));
  NAND3X1 inc_add_23_2_g359(.A (inc_add_23_2_n_4), .B (in2[7]), .C
       (in2[6]), .Y (inc_add_23_2_n_22));
  NAND2BX1 inc_add_23_2_g360(.AN (inc_add_23_2_n_19), .B (in2[4]), .Y
       (inc_add_23_2_n_21));
  XNOR2X1 inc_add_23_2_g363(.A (in2[3]), .B (inc_add_23_2_n_17), .Y
       (out1[3]));
  NAND3X1 inc_add_23_2_g364(.A (in2[3]), .B (in2[2]), .C
       (inc_add_23_2_n_16), .Y (inc_add_23_2_n_19));
  XOR2XL inc_add_23_2_g365(.A (in2[2]), .B (inc_add_23_2_n_16), .Y
       (out1[2]));
  NAND2X1 inc_add_23_2_g366(.A (in2[2]), .B (inc_add_23_2_n_16), .Y
       (inc_add_23_2_n_17));
  ADDHX1 inc_add_23_2_g367(.A (in2[1]), .B (inc_add_23_2_n_13), .CO
       (inc_add_23_2_n_16), .S (out1[1]));
  ADDHX1 inc_add_23_2_g368(.A (in2[0]), .B (in1), .CO
       (inc_add_23_2_n_13), .S (out1[0]));
  NAND3BXL inc_add_23_2_g369(.AN (inc_add_23_2_n_7), .B (in2[11]), .C
       (in2[10]), .Y (inc_add_23_2_n_12));
  NAND3BXL inc_add_23_2_g370(.AN (inc_add_23_2_n_10), .B (in2[19]), .C
       (in2[18]), .Y (inc_add_23_2_n_11));
  NAND2X1 inc_add_23_2_g371(.A (in2[17]), .B (in2[16]), .Y
       (inc_add_23_2_n_10));
  AND2XL inc_add_23_2_g372(.A (in2[21]), .B (in2[20]), .Y
       (inc_add_23_2_n_9));
  AND2XL inc_add_23_2_g373(.A (in2[13]), .B (in2[12]), .Y
       (inc_add_23_2_n_8));
  NAND2X1 inc_add_23_2_g374(.A (in2[9]), .B (in2[8]), .Y
       (inc_add_23_2_n_7));
  NAND2X1 inc_add_23_2_g375(.A (in2[5]), .B (in2[4]), .Y
       (inc_add_23_2_n_6));
  AND2XL inc_add_23_2_g376(.A (in2[25]), .B (in2[24]), .Y
       (inc_add_23_2_n_5));
  NOR2X1 inc_add_23_2_g377(.A (inc_add_23_2_n_6), .B
       (inc_add_23_2_n_19), .Y (inc_add_23_2_n_4));
  NOR2X1 inc_add_23_2_g378(.A (inc_add_23_2_n_12), .B
       (inc_add_23_2_n_22), .Y (inc_add_23_2_n_3));
  NOR2X1 inc_add_23_2_g379(.A (inc_add_23_2_n_11), .B
       (inc_add_23_2_n_34), .Y (inc_add_23_2_n_2));
  NAND2BX1 inc_add_23_2_g2(.AN (inc_add_23_2_n_34), .B (in2[16]), .Y
       (inc_add_23_2_n_1));
  NAND2BX1 inc_add_23_2_g380(.AN (inc_add_23_2_n_22), .B (in2[8]), .Y
       (inc_add_23_2_n_0));
endmodule


