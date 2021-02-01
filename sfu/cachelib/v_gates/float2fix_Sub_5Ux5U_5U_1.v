`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 15:40:53 KST (Jan  7 2021 06:40:53 UTC)

module float2fix_Sub_5Ux5U_5U_1(in2, in1, out1);
  input [4:0] in2, in1;
  output [4:0] out1;
  wire [4:0] in2, in1;
  wire [4:0] out1;
  wire sub_23_2_n_0, sub_23_2_n_1, sub_23_2_n_2, sub_23_2_n_5,
       sub_23_2_n_7, sub_23_2_n_8, sub_23_2_n_10, sub_23_2_n_11;
  wire sub_23_2_n_12, sub_23_2_n_13, sub_23_2_n_14, sub_23_2_n_16,
       sub_23_2_n_17, sub_23_2_n_18, sub_23_2_n_19, sub_23_2_n_20;
  wire sub_23_2_n_21, sub_23_2_n_22, sub_23_2_n_24, sub_23_2_n_26,
       sub_23_2_n_38, sub_23_2_n_39, sub_23_2_n_41, sub_23_2_n_42;
  wire sub_23_2_n_44;
  MXI2X1 sub_23_2_g97(.A (sub_23_2_n_13), .B (sub_23_2_n_14), .S0
       (sub_23_2_n_24), .Y (out1[4]));
  OAI21X1 sub_23_2_g99(.A0 (sub_23_2_n_12), .A1 (sub_23_2_n_22), .B0
       (sub_23_2_n_1), .Y (sub_23_2_n_26));
  MXI2XL sub_23_2_g100(.A (sub_23_2_n_17), .B (sub_23_2_n_16), .S0
       (sub_23_2_n_38), .Y (out1[2]));
  AOI21X1 sub_23_2_g101(.A0 (sub_23_2_n_18), .A1 (sub_23_2_n_39), .B0
       (sub_23_2_n_21), .Y (sub_23_2_n_24));
  AOI21X4 sub_23_2_g103(.A0 (sub_23_2_n_7), .A1 (sub_23_2_n_10), .B0
       (sub_23_2_n_8), .Y (sub_23_2_n_22));
  OAI21X1 sub_23_2_g106(.A0 (sub_23_2_n_1), .A1 (sub_23_2_n_0), .B0
       (sub_23_2_n_11), .Y (sub_23_2_n_21));
  NOR2BX1 sub_23_2_g108(.AN (sub_23_2_n_11), .B (sub_23_2_n_0), .Y
       (sub_23_2_n_20));
  NAND2X1 sub_23_2_g109(.A (sub_23_2_n_7), .B (sub_23_2_n_44), .Y
       (sub_23_2_n_19));
  NOR2X1 sub_23_2_g110(.A (sub_23_2_n_0), .B (sub_23_2_n_12), .Y
       (sub_23_2_n_18));
  INVXL sub_23_2_g111(.A (sub_23_2_n_16), .Y (sub_23_2_n_17));
  NAND2X1 sub_23_2_g112(.A (sub_23_2_n_2), .B (sub_23_2_n_1), .Y
       (sub_23_2_n_16));
  MXI2XL sub_23_2_g113(.A (sub_23_2_n_5), .B (in2[0]), .S0 (in1[0]), .Y
       (out1[0]));
  INVXL sub_23_2_g114(.A (sub_23_2_n_13), .Y (sub_23_2_n_14));
  XNOR2X1 sub_23_2_g115(.A (in2[4]), .B (in1[4]), .Y (sub_23_2_n_13));
  INVX1 sub_23_2_g116(.A (sub_23_2_n_2), .Y (sub_23_2_n_12));
  NAND2BX1 sub_23_2_g118(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_11));
  NAND2X4 sub_23_2_g119(.A (in1[0]), .B (sub_23_2_n_5), .Y
       (sub_23_2_n_10));
  NOR2X4 sub_23_2_g121(.A (in1[1]), .B (sub_23_2_n_41), .Y
       (sub_23_2_n_8));
  NAND2X4 sub_23_2_g123(.A (in1[1]), .B (sub_23_2_n_42), .Y
       (sub_23_2_n_7));
  CLKINVX3 sub_23_2_g129(.A (in2[0]), .Y (sub_23_2_n_5));
  XNOR2XL sub_23_2_g2(.A (sub_23_2_n_10), .B (sub_23_2_n_19), .Y
       (out1[1]));
  CLKXOR2X1 sub_23_2_g130(.A (sub_23_2_n_20), .B (sub_23_2_n_26), .Y
       (out1[3]));
  NAND2BX1 sub_23_2_g131(.AN (in2[2]), .B (in1[2]), .Y (sub_23_2_n_2));
  NAND2BX1 sub_23_2_g132(.AN (in1[2]), .B (in2[2]), .Y (sub_23_2_n_1));
  NOR2BX2 sub_23_2_g133(.AN (in1[3]), .B (in2[3]), .Y (sub_23_2_n_0));
  INVXL sub_23_2_fopt(.A (sub_23_2_n_39), .Y (sub_23_2_n_38));
  CLKINVX1 sub_23_2_fopt134(.A (sub_23_2_n_22), .Y (sub_23_2_n_39));
  CLKINVX3 sub_23_2_fopt135(.A (in2[1]), .Y (sub_23_2_n_41));
  CLKINVX4 sub_23_2_fopt136(.A (in2[1]), .Y (sub_23_2_n_42));
  INVXL sub_23_2_fopt137(.A (sub_23_2_n_8), .Y (sub_23_2_n_44));
endmodule


