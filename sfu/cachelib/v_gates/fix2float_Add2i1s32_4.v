`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:23:18 KST (Dec 28 2020 04:23:18 UTC)

module fix2float_Add2i1s32_4(in1, out1);
  input [31:0] in1;
  output [31:0] out1;
  wire [31:0] in1;
  wire [31:0] out1;
  wire inc_add_21_2_n_0, inc_add_21_2_n_1, inc_add_21_2_n_2,
       inc_add_21_2_n_3, inc_add_21_2_n_4, inc_add_21_2_n_5,
       inc_add_21_2_n_6, inc_add_21_2_n_7;
  wire inc_add_21_2_n_8, inc_add_21_2_n_9, inc_add_21_2_n_10,
       inc_add_21_2_n_11, inc_add_21_2_n_12, inc_add_21_2_n_14,
       inc_add_21_2_n_15, inc_add_21_2_n_17;
  wire inc_add_21_2_n_19, inc_add_21_2_n_20, inc_add_21_2_n_22,
       inc_add_21_2_n_24, inc_add_21_2_n_26, inc_add_21_2_n_27,
       inc_add_21_2_n_28, inc_add_21_2_n_31;
  wire inc_add_21_2_n_33, inc_add_21_2_n_36, inc_add_21_2_n_39,
       inc_add_21_2_n_40, inc_add_21_2_n_41, inc_add_21_2_n_46,
       inc_add_21_2_n_47, inc_add_21_2_n_48;
  wire inc_add_21_2_n_51, inc_add_21_2_n_52, inc_add_21_2_n_55,
       inc_add_21_2_n_56, inc_add_21_2_n_60, inc_add_21_2_n_65,
       inc_add_21_2_n_67;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 inc_add_21_2_g299(.A (in1[31]), .B (inc_add_21_2_n_67), .Y
       (out1[31]));
  XNOR2X1 inc_add_21_2_g300(.A (in1[30]), .B (inc_add_21_2_n_65), .Y
       (out1[30]));
  NAND2BX1 inc_add_21_2_g301(.AN (inc_add_21_2_n_65), .B (in1[30]), .Y
       (inc_add_21_2_n_67));
  XNOR2X1 inc_add_21_2_g302(.A (in1[29]), .B (inc_add_21_2_n_60), .Y
       (out1[29]));
  NAND3BXL inc_add_21_2_g303(.AN (inc_add_21_2_n_55), .B (in1[29]), .C
       (in1[28]), .Y (inc_add_21_2_n_65));
  XNOR2X1 inc_add_21_2_g304(.A (in1[27]), .B (inc_add_21_2_n_56), .Y
       (out1[27]));
  XNOR2X1 inc_add_21_2_g305(.A (in1[25]), .B (inc_add_21_2_n_51), .Y
       (out1[25]));
  XNOR2X1 inc_add_21_2_g306(.A (in1[28]), .B (inc_add_21_2_n_55), .Y
       (out1[28]));
  XNOR2X1 inc_add_21_2_g307(.A (in1[23]), .B (inc_add_21_2_n_48), .Y
       (out1[23]));
  NAND2BX1 inc_add_21_2_g308(.AN (inc_add_21_2_n_55), .B (in1[28]), .Y
       (inc_add_21_2_n_60));
  XNOR2X1 inc_add_21_2_g309(.A (in1[21]), .B (inc_add_21_2_n_40), .Y
       (out1[21]));
  XNOR2X1 inc_add_21_2_g310(.A (in1[19]), .B (inc_add_21_2_n_39), .Y
       (out1[19]));
  XOR2XL inc_add_21_2_g311(.A (in1[26]), .B (inc_add_21_2_n_52), .Y
       (out1[26]));
  NAND2X1 inc_add_21_2_g312(.A (in1[26]), .B (inc_add_21_2_n_52), .Y
       (inc_add_21_2_n_56));
  NAND4XL inc_add_21_2_g313(.A (in1[27]), .B (in1[26]), .C
       (inc_add_21_2_n_10), .D (inc_add_21_2_n_46), .Y
       (inc_add_21_2_n_55));
  MXI2XL inc_add_21_2_g314(.A (inc_add_21_2_n_47), .B
       (inc_add_21_2_n_46), .S0 (in1[24]), .Y (out1[24]));
  XNOR2X1 inc_add_21_2_g315(.A (in1[17]), .B (inc_add_21_2_n_1), .Y
       (out1[17]));
  NOR2BX1 inc_add_21_2_g316(.AN (inc_add_21_2_n_10), .B
       (inc_add_21_2_n_47), .Y (inc_add_21_2_n_52));
  NAND2X1 inc_add_21_2_g317(.A (in1[24]), .B (inc_add_21_2_n_46), .Y
       (inc_add_21_2_n_51));
  XNOR2X1 inc_add_21_2_g318(.A (in1[15]), .B (inc_add_21_2_n_33), .Y
       (out1[15]));
  XNOR2X1 inc_add_21_2_g319(.A (in1[22]), .B (inc_add_21_2_n_41), .Y
       (out1[22]));
  NAND2BX1 inc_add_21_2_g320(.AN (inc_add_21_2_n_41), .B (in1[22]), .Y
       (inc_add_21_2_n_48));
  INVX1 inc_add_21_2_g321(.A (inc_add_21_2_n_47), .Y
       (inc_add_21_2_n_46));
  NAND4XL inc_add_21_2_g322(.A (in1[22]), .B (inc_add_21_2_n_9), .C
       (in1[23]), .D (inc_add_21_2_n_2), .Y (inc_add_21_2_n_47));
  XNOR2X1 inc_add_21_2_g323(.A (in1[13]), .B (inc_add_21_2_n_27), .Y
       (out1[13]));
  XNOR2X1 inc_add_21_2_g324(.A (in1[11]), .B (inc_add_21_2_n_26), .Y
       (out1[11]));
  XOR2XL inc_add_21_2_g325(.A (in1[20]), .B (inc_add_21_2_n_2), .Y
       (out1[20]));
  XOR2XL inc_add_21_2_g326(.A (in1[18]), .B (inc_add_21_2_n_36), .Y
       (out1[18]));
  NAND2X1 inc_add_21_2_g327(.A (inc_add_21_2_n_9), .B
       (inc_add_21_2_n_2), .Y (inc_add_21_2_n_41));
  NAND2X1 inc_add_21_2_g328(.A (in1[20]), .B (inc_add_21_2_n_2), .Y
       (inc_add_21_2_n_40));
  NAND2X1 inc_add_21_2_g329(.A (in1[18]), .B (inc_add_21_2_n_36), .Y
       (inc_add_21_2_n_39));
  XNOR2X1 inc_add_21_2_g330(.A (in1[16]), .B (inc_add_21_2_n_31), .Y
       (out1[16]));
  XNOR2X1 inc_add_21_2_g331(.A (in1[9]), .B (inc_add_21_2_n_0), .Y
       (out1[9]));
  NOR2X1 inc_add_21_2_g334(.A (inc_add_21_2_n_8), .B
       (inc_add_21_2_n_31), .Y (inc_add_21_2_n_36));
  XNOR2X1 inc_add_21_2_g336(.A (in1[14]), .B (inc_add_21_2_n_28), .Y
       (out1[14]));
  XNOR2X1 inc_add_21_2_g337(.A (in1[7]), .B (inc_add_21_2_n_22), .Y
       (out1[7]));
  NAND2BX1 inc_add_21_2_g338(.AN (inc_add_21_2_n_28), .B (in1[14]), .Y
       (inc_add_21_2_n_33));
  XNOR2X1 inc_add_21_2_g339(.A (in1[5]), .B (inc_add_21_2_n_19), .Y
       (out1[5]));
  NAND4XL inc_add_21_2_g341(.A (in1[14]), .B (inc_add_21_2_n_7), .C
       (in1[15]), .D (inc_add_21_2_n_3), .Y (inc_add_21_2_n_31));
  XOR2XL inc_add_21_2_g342(.A (in1[12]), .B (inc_add_21_2_n_3), .Y
       (out1[12]));
  XOR2XL inc_add_21_2_g343(.A (in1[10]), .B (inc_add_21_2_n_24), .Y
       (out1[10]));
  NAND2X1 inc_add_21_2_g344(.A (inc_add_21_2_n_7), .B
       (inc_add_21_2_n_3), .Y (inc_add_21_2_n_28));
  NAND2X1 inc_add_21_2_g345(.A (in1[12]), .B (inc_add_21_2_n_3), .Y
       (inc_add_21_2_n_27));
  NAND2X1 inc_add_21_2_g346(.A (in1[10]), .B (inc_add_21_2_n_24), .Y
       (inc_add_21_2_n_26));
  XNOR2X1 inc_add_21_2_g347(.A (in1[8]), .B (inc_add_21_2_n_20), .Y
       (out1[8]));
  NOR2X1 inc_add_21_2_g350(.A (inc_add_21_2_n_6), .B
       (inc_add_21_2_n_20), .Y (inc_add_21_2_n_24));
  XOR2XL inc_add_21_2_g352(.A (in1[6]), .B (inc_add_21_2_n_4), .Y
       (out1[6]));
  NAND2X1 inc_add_21_2_g353(.A (in1[6]), .B (inc_add_21_2_n_4), .Y
       (inc_add_21_2_n_22));
  XNOR2X1 inc_add_21_2_g354(.A (in1[4]), .B (inc_add_21_2_n_17), .Y
       (out1[4]));
  NAND3X1 inc_add_21_2_g356(.A (inc_add_21_2_n_4), .B (in1[7]), .C
       (in1[6]), .Y (inc_add_21_2_n_20));
  NAND2BX1 inc_add_21_2_g358(.AN (inc_add_21_2_n_17), .B (in1[4]), .Y
       (inc_add_21_2_n_19));
  XNOR2X1 inc_add_21_2_g360(.A (in1[3]), .B (inc_add_21_2_n_15), .Y
       (out1[3]));
  NAND3X1 inc_add_21_2_g361(.A (in1[3]), .B (in1[2]), .C
       (inc_add_21_2_n_14), .Y (inc_add_21_2_n_17));
  XOR2XL inc_add_21_2_g362(.A (in1[2]), .B (inc_add_21_2_n_14), .Y
       (out1[2]));
  NAND2X1 inc_add_21_2_g363(.A (in1[2]), .B (inc_add_21_2_n_14), .Y
       (inc_add_21_2_n_15));
  ADDHX1 inc_add_21_2_g364(.A (in1[1]), .B (in1[0]), .CO
       (inc_add_21_2_n_14), .S (out1[1]));
  NAND3BXL inc_add_21_2_g365(.AN (inc_add_21_2_n_6), .B (in1[11]), .C
       (in1[10]), .Y (inc_add_21_2_n_12));
  NAND3BXL inc_add_21_2_g366(.AN (inc_add_21_2_n_8), .B (in1[19]), .C
       (in1[18]), .Y (inc_add_21_2_n_11));
  AND2XL inc_add_21_2_g367(.A (in1[25]), .B (in1[24]), .Y
       (inc_add_21_2_n_10));
  AND2XL inc_add_21_2_g368(.A (in1[21]), .B (in1[20]), .Y
       (inc_add_21_2_n_9));
  NAND2X1 inc_add_21_2_g369(.A (in1[17]), .B (in1[16]), .Y
       (inc_add_21_2_n_8));
  AND2XL inc_add_21_2_g370(.A (in1[13]), .B (in1[12]), .Y
       (inc_add_21_2_n_7));
  NAND2X1 inc_add_21_2_g371(.A (in1[9]), .B (in1[8]), .Y
       (inc_add_21_2_n_6));
  NAND2X1 inc_add_21_2_g372(.A (in1[5]), .B (in1[4]), .Y
       (inc_add_21_2_n_5));
  NOR2X1 inc_add_21_2_g373(.A (inc_add_21_2_n_5), .B
       (inc_add_21_2_n_17), .Y (inc_add_21_2_n_4));
  NOR2X1 inc_add_21_2_g374(.A (inc_add_21_2_n_12), .B
       (inc_add_21_2_n_20), .Y (inc_add_21_2_n_3));
  NOR2X1 inc_add_21_2_g375(.A (inc_add_21_2_n_11), .B
       (inc_add_21_2_n_31), .Y (inc_add_21_2_n_2));
  NAND2BX1 inc_add_21_2_g2(.AN (inc_add_21_2_n_31), .B (in1[16]), .Y
       (inc_add_21_2_n_1));
  NAND2BX1 inc_add_21_2_g376(.AN (inc_add_21_2_n_20), .B (in1[8]), .Y
       (inc_add_21_2_n_0));
endmodule


