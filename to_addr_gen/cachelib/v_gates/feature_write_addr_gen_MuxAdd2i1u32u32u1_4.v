`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 15 2020 18:02:41 KST (Dec 15 2020 09:02:41 UTC)

module feature_write_addr_gen_MuxAdd2i1u32u32u1_4(in3, in2, ctrl1,
     out1);
  input [31:0] in3, in2;
  input ctrl1;
  output [31:0] out1;
  wire [31:0] in3, in2;
  wire ctrl1;
  wire [31:0] out1;
  wire inc_add_26_2_n_0, inc_add_26_2_n_1, inc_add_26_2_n_2,
       inc_add_26_2_n_3, inc_add_26_2_n_4, inc_add_26_2_n_6,
       inc_add_26_2_n_8, inc_add_26_2_n_10;
  wire inc_add_26_2_n_11, inc_add_26_2_n_13, inc_add_26_2_n_16,
       inc_add_26_2_n_18, inc_add_26_2_n_19, inc_add_26_2_n_21,
       inc_add_26_2_n_22, inc_add_26_2_n_23;
  wire inc_add_26_2_n_26, inc_add_26_2_n_31, inc_add_26_2_n_33,
       inc_add_26_2_n_34, inc_add_26_2_n_36, inc_add_26_2_n_37,
       inc_add_26_2_n_38, inc_add_26_2_n_41;
  wire inc_add_26_2_n_46, inc_add_26_2_n_48, inc_add_26_2_n_49,
       inc_add_26_2_n_51, inc_add_26_2_n_54, inc_add_26_2_n_56,
       inc_add_26_2_n_58, inc_add_26_2_n_60;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32;
  MX2XL g324(.A (in3[15]), .B (n_16), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g325(.A (in3[31]), .B (n_32), .S0 (ctrl1), .Y (out1[31]));
  MX2XL g326(.A (in3[28]), .B (n_29), .S0 (ctrl1), .Y (out1[28]));
  MX2XL g327(.A (in3[18]), .B (n_19), .S0 (ctrl1), .Y (out1[18]));
  MX2XL g328(.A (in3[5]), .B (n_6), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g329(.A (in3[4]), .B (n_5), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g330(.A (in3[3]), .B (n_4), .S0 (ctrl1), .Y (out1[3]));
  MX2XL g331(.A (in3[25]), .B (n_26), .S0 (ctrl1), .Y (out1[25]));
  MX2XL g332(.A (in3[17]), .B (n_18), .S0 (ctrl1), .Y (out1[17]));
  MX2XL g333(.A (in3[2]), .B (n_3), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g334(.A (in3[24]), .B (n_25), .S0 (ctrl1), .Y (out1[24]));
  MX2XL g335(.A (in3[1]), .B (n_2), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g336(.A (in3[16]), .B (n_17), .S0 (ctrl1), .Y (out1[16]));
  MX2XL g337(.A (in3[27]), .B (n_28), .S0 (ctrl1), .Y (out1[27]));
  MX2XL g338(.A (in3[23]), .B (n_24), .S0 (ctrl1), .Y (out1[23]));
  OAI22X1 g339(.A0 (n_1), .A1 (ctrl1), .B0 (n_0), .B1 (in2[0]), .Y
       (out1[0]));
  MX2XL g340(.A (n_7), .B (in3[6]), .S0 (n_0), .Y (out1[6]));
  MX2XL g341(.A (in3[22]), .B (n_23), .S0 (ctrl1), .Y (out1[22]));
  MX2XL g342(.A (n_14), .B (in3[13]), .S0 (n_0), .Y (out1[13]));
  MX2XL g343(.A (in3[30]), .B (n_31), .S0 (ctrl1), .Y (out1[30]));
  MX2XL g344(.A (in3[29]), .B (n_30), .S0 (ctrl1), .Y (out1[29]));
  MX2XL g345(.A (in3[12]), .B (n_13), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g346(.A (n_12), .B (in3[11]), .S0 (n_0), .Y (out1[11]));
  MX2XL g347(.A (in3[26]), .B (n_27), .S0 (ctrl1), .Y (out1[26]));
  MX2XL g348(.A (in3[21]), .B (n_22), .S0 (ctrl1), .Y (out1[21]));
  MX2XL g349(.A (in3[10]), .B (n_11), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g350(.A (in3[20]), .B (n_21), .S0 (ctrl1), .Y (out1[20]));
  MX2XL g351(.A (in3[9]), .B (n_10), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g352(.A (n_9), .B (in3[8]), .S0 (n_0), .Y (out1[8]));
  MX2XL g353(.A (in3[19]), .B (n_20), .S0 (ctrl1), .Y (out1[19]));
  MX2XL g354(.A (in3[7]), .B (n_8), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g355(.A (n_15), .B (in3[14]), .S0 (n_0), .Y (out1[14]));
  INVX1 g356(.A (in3[0]), .Y (n_1));
  INVX1 g357(.A (ctrl1), .Y (n_0));
  XNOR2X1 inc_add_26_2_g305(.A (in2[31]), .B (inc_add_26_2_n_60), .Y
       (n_32));
  XNOR2X1 inc_add_26_2_g306(.A (in2[30]), .B (inc_add_26_2_n_58), .Y
       (n_31));
  NAND2BX1 inc_add_26_2_g307(.AN (inc_add_26_2_n_58), .B (in2[30]), .Y
       (inc_add_26_2_n_60));
  XNOR2X1 inc_add_26_2_g308(.A (in2[29]), .B (inc_add_26_2_n_56), .Y
       (n_30));
  NAND2BX1 inc_add_26_2_g309(.AN (inc_add_26_2_n_56), .B (in2[29]), .Y
       (inc_add_26_2_n_58));
  XNOR2X1 inc_add_26_2_g310(.A (in2[28]), .B (inc_add_26_2_n_54), .Y
       (n_29));
  NAND2BX1 inc_add_26_2_g311(.AN (inc_add_26_2_n_54), .B (in2[28]), .Y
       (inc_add_26_2_n_56));
  XNOR2X1 inc_add_26_2_g312(.A (in2[27]), .B (inc_add_26_2_n_51), .Y
       (n_28));
  NAND2BX1 inc_add_26_2_g313(.AN (inc_add_26_2_n_51), .B (in2[27]), .Y
       (inc_add_26_2_n_54));
  XNOR2X1 inc_add_26_2_g314(.A (in2[25]), .B (inc_add_26_2_n_49), .Y
       (n_26));
  XNOR2X1 inc_add_26_2_g315(.A (in2[26]), .B (inc_add_26_2_n_48), .Y
       (n_27));
  NAND2BX1 inc_add_26_2_g316(.AN (inc_add_26_2_n_48), .B (in2[26]), .Y
       (inc_add_26_2_n_51));
  XNOR2X1 inc_add_26_2_g317(.A (in2[24]), .B (inc_add_26_2_n_46), .Y
       (n_25));
  NAND2BX1 inc_add_26_2_g318(.AN (inc_add_26_2_n_46), .B (in2[24]), .Y
       (inc_add_26_2_n_49));
  NAND3BXL inc_add_26_2_g319(.AN (inc_add_26_2_n_46), .B (in2[25]), .C
       (in2[24]), .Y (inc_add_26_2_n_48));
  XNOR2X1 inc_add_26_2_g320(.A (in2[23]), .B (inc_add_26_2_n_41), .Y
       (n_24));
  NAND2BX1 inc_add_26_2_g321(.AN (inc_add_26_2_n_41), .B (in2[23]), .Y
       (inc_add_26_2_n_46));
  XNOR2X1 inc_add_26_2_g322(.A (in2[21]), .B (inc_add_26_2_n_38), .Y
       (n_22));
  XNOR2X1 inc_add_26_2_g323(.A (in2[19]), .B (inc_add_26_2_n_36), .Y
       (n_20));
  XNOR2X1 inc_add_26_2_g324(.A (in2[17]), .B (inc_add_26_2_n_33), .Y
       (n_18));
  XNOR2X1 inc_add_26_2_g325(.A (in2[22]), .B (inc_add_26_2_n_37), .Y
       (n_23));
  NAND2BX1 inc_add_26_2_g326(.AN (inc_add_26_2_n_37), .B (in2[22]), .Y
       (inc_add_26_2_n_41));
  XNOR2X1 inc_add_26_2_g327(.A (in2[20]), .B (inc_add_26_2_n_1), .Y
       (n_21));
  XOR2XL inc_add_26_2_g328(.A (in2[18]), .B (inc_add_26_2_n_34), .Y
       (n_19));
  NAND2BX1 inc_add_26_2_g329(.AN (inc_add_26_2_n_1), .B (in2[20]), .Y
       (inc_add_26_2_n_38));
  NAND3BXL inc_add_26_2_g330(.AN (inc_add_26_2_n_1), .B (in2[21]), .C
       (in2[20]), .Y (inc_add_26_2_n_37));
  NAND2X1 inc_add_26_2_g331(.A (in2[18]), .B (inc_add_26_2_n_34), .Y
       (inc_add_26_2_n_36));
  XNOR2X1 inc_add_26_2_g332(.A (in2[16]), .B (inc_add_26_2_n_31), .Y
       (n_17));
  NOR2X1 inc_add_26_2_g333(.A (inc_add_26_2_n_3), .B
       (inc_add_26_2_n_31), .Y (inc_add_26_2_n_34));
  NAND2BX1 inc_add_26_2_g334(.AN (inc_add_26_2_n_31), .B (in2[16]), .Y
       (inc_add_26_2_n_33));
  XNOR2X1 inc_add_26_2_g337(.A (in2[15]), .B (inc_add_26_2_n_26), .Y
       (n_16));
  NAND2BX1 inc_add_26_2_g338(.AN (inc_add_26_2_n_26), .B (in2[15]), .Y
       (inc_add_26_2_n_31));
  XNOR2X1 inc_add_26_2_g339(.A (in2[13]), .B (inc_add_26_2_n_23), .Y
       (n_14));
  XNOR2X1 inc_add_26_2_g340(.A (in2[11]), .B (inc_add_26_2_n_22), .Y
       (n_12));
  XNOR2X1 inc_add_26_2_g341(.A (in2[9]), .B (inc_add_26_2_n_18), .Y
       (n_10));
  XNOR2X1 inc_add_26_2_g342(.A (in2[14]), .B (inc_add_26_2_n_21), .Y
       (n_15));
  NAND2BX1 inc_add_26_2_g343(.AN (inc_add_26_2_n_21), .B (in2[14]), .Y
       (inc_add_26_2_n_26));
  XNOR2X1 inc_add_26_2_g344(.A (in2[12]), .B (inc_add_26_2_n_0), .Y
       (n_13));
  XOR2XL inc_add_26_2_g345(.A (in2[10]), .B (inc_add_26_2_n_19), .Y
       (n_11));
  NAND2BX1 inc_add_26_2_g346(.AN (inc_add_26_2_n_0), .B (in2[12]), .Y
       (inc_add_26_2_n_23));
  NAND2X1 inc_add_26_2_g347(.A (in2[10]), .B (inc_add_26_2_n_19), .Y
       (inc_add_26_2_n_22));
  NAND3BXL inc_add_26_2_g348(.AN (inc_add_26_2_n_0), .B (in2[13]), .C
       (in2[12]), .Y (inc_add_26_2_n_21));
  XNOR2X1 inc_add_26_2_g349(.A (in2[8]), .B (inc_add_26_2_n_16), .Y
       (n_9));
  NOR2X1 inc_add_26_2_g350(.A (inc_add_26_2_n_4), .B
       (inc_add_26_2_n_16), .Y (inc_add_26_2_n_19));
  NAND2BX1 inc_add_26_2_g351(.AN (inc_add_26_2_n_16), .B (in2[8]), .Y
       (inc_add_26_2_n_18));
  XNOR2X1 inc_add_26_2_g354(.A (in2[7]), .B (inc_add_26_2_n_13), .Y
       (n_8));
  NAND2BX1 inc_add_26_2_g355(.AN (inc_add_26_2_n_13), .B (in2[7]), .Y
       (inc_add_26_2_n_16));
  XNOR2X1 inc_add_26_2_g356(.A (in2[5]), .B (inc_add_26_2_n_11), .Y
       (n_6));
  XNOR2X1 inc_add_26_2_g357(.A (in2[6]), .B (inc_add_26_2_n_10), .Y
       (n_7));
  NAND2BX1 inc_add_26_2_g358(.AN (inc_add_26_2_n_10), .B (in2[6]), .Y
       (inc_add_26_2_n_13));
  XNOR2X1 inc_add_26_2_g359(.A (in2[4]), .B (inc_add_26_2_n_8), .Y
       (n_5));
  NAND2BX1 inc_add_26_2_g360(.AN (inc_add_26_2_n_8), .B (in2[4]), .Y
       (inc_add_26_2_n_11));
  NAND3BXL inc_add_26_2_g361(.AN (inc_add_26_2_n_8), .B (in2[5]), .C
       (in2[4]), .Y (inc_add_26_2_n_10));
  XNOR2X1 inc_add_26_2_g362(.A (in2[3]), .B (inc_add_26_2_n_6), .Y
       (n_4));
  NAND2BX1 inc_add_26_2_g363(.AN (inc_add_26_2_n_6), .B (in2[3]), .Y
       (inc_add_26_2_n_8));
  XNOR2X1 inc_add_26_2_g364(.A (in2[2]), .B (inc_add_26_2_n_2), .Y
       (n_3));
  NAND2BX1 inc_add_26_2_g365(.AN (inc_add_26_2_n_2), .B (in2[2]), .Y
       (inc_add_26_2_n_6));
  XOR2XL inc_add_26_2_g366(.A (in2[1]), .B (in2[0]), .Y (n_2));
  NAND2X1 inc_add_26_2_g367(.A (in2[9]), .B (in2[8]), .Y
       (inc_add_26_2_n_4));
  NAND2X1 inc_add_26_2_g368(.A (in2[17]), .B (in2[16]), .Y
       (inc_add_26_2_n_3));
  NAND2X1 inc_add_26_2_g369(.A (in2[1]), .B (in2[0]), .Y
       (inc_add_26_2_n_2));
  NAND4BBXL inc_add_26_2_g2(.AN (inc_add_26_2_n_3), .BN
       (inc_add_26_2_n_31), .C (in2[19]), .D (in2[18]), .Y
       (inc_add_26_2_n_1));
  NAND4BBXL inc_add_26_2_g370(.AN (inc_add_26_2_n_4), .BN
       (inc_add_26_2_n_16), .C (in2[11]), .D (in2[10]), .Y
       (inc_add_26_2_n_0));
endmodule

