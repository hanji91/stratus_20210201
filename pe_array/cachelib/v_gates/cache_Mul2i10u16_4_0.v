`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 27 2021 13:48:45 KST (Jan 27 2021 04:48:45 UTC)

module cache_Mul2i10u16_4_0(in1, out1, clk);
  input [15:0] in1;
  input clk;
  output [19:0] out1;
  wire [15:0] in1;
  wire clk;
  wire [19:0] out1;
  wire asc001_3_, asc001_4_, asc001_5_, asc001_6_, asc001_7_,
       asc001_8_, asc001_9_, asc001_10_;
  wire asc001_11_, asc001_12_, asc001_13_, asc001_14_, asc001_15_,
       const_mul_20_8_n_0, const_mul_20_8_n_1, const_mul_20_8_n_7;
  wire const_mul_20_8_n_8, const_mul_20_8_n_9, const_mul_20_8_n_10,
       const_mul_20_8_n_12, const_mul_20_8_n_13, const_mul_20_8_n_17,
       const_mul_20_8_n_18, const_mul_20_8_n_19;
  wire const_mul_20_8_n_20, const_mul_20_8_n_21, const_mul_20_8_n_22,
       const_mul_20_8_n_27, const_mul_20_8_n_29, const_mul_20_8_n_31,
       const_mul_20_8_n_32, const_mul_20_8_n_33;
  wire const_mul_20_8_n_35, const_mul_20_8_n_37, const_mul_20_8_n_39,
       const_mul_20_8_n_41, const_mul_20_8_n_43, const_mul_20_8_n_45,
       const_mul_20_8_n_47, const_mul_20_8_n_49;
  wire n_9, n_12, n_19, n_23, n_39, n_40, n_41, n_42;
  assign out1[0] = 1'b0;
  CLKXOR2X1 const_mul_20_8_g2(.A (const_mul_20_8_n_20), .B
       (const_mul_20_8_n_31), .Y (asc001_8_));
  ADDHX1 const_mul_20_8_g313(.A (n_23), .B (const_mul_20_8_n_49), .CO
       (out1[19]), .S (out1[18]));
  ADDHX1 const_mul_20_8_g314(.A (n_12), .B (const_mul_20_8_n_47), .CO
       (const_mul_20_8_n_49), .S (out1[17]));
  ADDFX1 const_mul_20_8_g315(.A (n_19), .B (n_9), .CI (n_23), .CO
       (const_mul_20_8_n_47), .S (out1[16]));
  ADDFX1 const_mul_20_8_g316(.A (const_mul_20_8_n_43), .B (in1[12]),
       .CI (in1[14]), .CO (const_mul_20_8_n_45), .S (asc001_15_));
  ADDFX1 const_mul_20_8_g317(.A (const_mul_20_8_n_41), .B (in1[11]),
       .CI (in1[13]), .CO (const_mul_20_8_n_43), .S (asc001_14_));
  ADDFX1 const_mul_20_8_g318(.A (const_mul_20_8_n_39), .B (in1[10]),
       .CI (in1[12]), .CO (const_mul_20_8_n_41), .S (asc001_13_));
  ADDFX1 const_mul_20_8_g319(.A (const_mul_20_8_n_37), .B (in1[9]), .CI
       (in1[11]), .CO (const_mul_20_8_n_39), .S (asc001_12_));
  ADDFX1 const_mul_20_8_g320(.A (const_mul_20_8_n_35), .B (in1[8]), .CI
       (in1[10]), .CO (const_mul_20_8_n_37), .S (asc001_11_));
  ADDFX1 const_mul_20_8_g321(.A (const_mul_20_8_n_33), .B (in1[7]), .CI
       (in1[9]), .CO (const_mul_20_8_n_35), .S (asc001_10_));
  ADDFX1 const_mul_20_8_g322(.A (const_mul_20_8_n_32), .B (in1[6]), .CI
       (in1[8]), .CO (const_mul_20_8_n_33), .S (asc001_9_));
  OAI21X1 const_mul_20_8_g323(.A0 (const_mul_20_8_n_13), .A1
       (const_mul_20_8_n_31), .B0 (const_mul_20_8_n_9), .Y
       (const_mul_20_8_n_32));
  NOR2X1 const_mul_20_8_g326(.A (const_mul_20_8_n_10), .B (n_39), .Y
       (const_mul_20_8_n_31));
  NOR2X1 const_mul_20_8_g330(.A (const_mul_20_8_n_1), .B (n_40), .Y
       (const_mul_20_8_n_29));
  NOR2X1 const_mul_20_8_g334(.A (const_mul_20_8_n_0), .B (n_41), .Y
       (const_mul_20_8_n_27));
  XNOR2X1 const_mul_20_8_g339(.A (const_mul_20_8_n_8), .B
       (const_mul_20_8_n_22), .Y (asc001_4_));
  ADDHX1 const_mul_20_8_g341(.A (in1[3]), .B (in1[1]), .CO
       (const_mul_20_8_n_21), .S (const_mul_20_8_n_22));
  XNOR2X1 const_mul_20_8_g342(.A (in1[7]), .B (in1[5]), .Y
       (const_mul_20_8_n_20));
  XNOR2X1 const_mul_20_8_g343(.A (in1[6]), .B (in1[4]), .Y
       (const_mul_20_8_n_19));
  XNOR2X1 const_mul_20_8_g344(.A (in1[5]), .B (in1[3]), .Y
       (const_mul_20_8_n_18));
  XNOR2X1 const_mul_20_8_g345(.A (in1[4]), .B (in1[2]), .Y
       (const_mul_20_8_n_17));
  MXI2XL const_mul_20_8_g346(.A (const_mul_20_8_n_7), .B (in1[2]), .S0
       (in1[0]), .Y (asc001_3_));
  NOR2X1 const_mul_20_8_g349(.A (in1[7]), .B (in1[5]), .Y
       (const_mul_20_8_n_13));
  NOR2X1 const_mul_20_8_g350(.A (in1[3]), .B (in1[1]), .Y
       (const_mul_20_8_n_12));
  AND2XL const_mul_20_8_g353(.A (in1[6]), .B (in1[4]), .Y
       (const_mul_20_8_n_10));
  NAND2X1 const_mul_20_8_g354(.A (in1[7]), .B (in1[5]), .Y
       (const_mul_20_8_n_9));
  NAND2X1 const_mul_20_8_g356(.A (in1[2]), .B (in1[0]), .Y
       (const_mul_20_8_n_8));
  INVX1 const_mul_20_8_g357(.A (in1[2]), .Y (const_mul_20_8_n_7));
  CLKXOR2X1 const_mul_20_8_g361(.A (const_mul_20_8_n_19), .B
       (const_mul_20_8_n_29), .Y (asc001_7_));
  CLKXOR2X1 const_mul_20_8_g362(.A (const_mul_20_8_n_18), .B
       (const_mul_20_8_n_27), .Y (asc001_6_));
  CLKXOR2X1 const_mul_20_8_g363(.A (const_mul_20_8_n_17), .B (n_42), .Y
       (asc001_5_));
  AND2XL const_mul_20_8_g364(.A (in1[5]), .B (in1[3]), .Y
       (const_mul_20_8_n_1));
  NOR2BX1 const_mul_20_8_g365(.AN (in1[4]), .B (const_mul_20_8_n_7), .Y
       (const_mul_20_8_n_0));
  DFFHQX1 out1_11_L0(.CK (clk), .D (asc001_8_), .Q (out1[8]));
  DFFHQX1 retime_s1_5_reg(.CK (clk), .D (in1[13]), .Q (n_9));
  DFFQXL out1_6_L0(.CK (clk), .D (asc001_13_), .Q (out1[13]));
  DFFHQX1 out1_7_L0(.CK (clk), .D (asc001_12_), .Q (out1[12]));
  DFFHQX1 out1_8_L0(.CK (clk), .D (asc001_11_), .Q (out1[11]));
  DFFHQX1 retime_s1_1_reg(.CK (clk), .D (in1[15]), .Q (n_23));
  DFFHQX1 out1_9_L0(.CK (clk), .D (asc001_10_), .Q (out1[10]));
  DFFHQX1 out1_10_L0(.CK (clk), .D (asc001_9_), .Q (out1[9]));
  DFFQXL out1_5_L0(.CK (clk), .D (asc001_14_), .Q (out1[14]));
  DFFHQX1 out1_12_L0(.CK (clk), .D (asc001_7_), .Q (out1[7]));
  DFFHQX1 out1_13_L0(.CK (clk), .D (asc001_6_), .Q (out1[6]));
  DFFHQX1 out1_14_L0(.CK (clk), .D (asc001_5_), .Q (out1[5]));
  DFFHQX1 out1_15_L0(.CK (clk), .D (asc001_4_), .Q (out1[4]));
  DFFHQX1 out1_16_L0(.CK (clk), .D (asc001_3_), .Q (out1[3]));
  DFFHQX1 out1_17_L0(.CK (clk), .D (in1[1]), .Q (out1[2]));
  DFFHQX1 out1_18_L0(.CK (clk), .D (in1[0]), .Q (out1[1]));
  DFFQXL retime_s1_2_reg(.CK (clk), .D (const_mul_20_8_n_45), .Q
       (n_19));
  DFFQXL retime_s1_3_reg(.CK (clk), .D (asc001_15_), .Q (out1[15]));
  DFFHQX1 retime_s1_4_reg(.CK (clk), .D (in1[14]), .Q (n_12));
  AOI2BB1XL g2(.A0N (in1[6]), .A1N (in1[4]), .B0 (const_mul_20_8_n_29),
       .Y (n_39));
  AOI2BB1XL g385(.A0N (in1[5]), .A1N (in1[3]), .B0
       (const_mul_20_8_n_27), .Y (n_40));
  AOI2BB1XL g386(.A0N (in1[4]), .A1N (in1[2]), .B0 (n_42), .Y (n_41));
  AOI2BB1XL g387(.A0N (const_mul_20_8_n_8), .A1N (const_mul_20_8_n_12),
       .B0 (const_mul_20_8_n_21), .Y (n_42));
endmodule

