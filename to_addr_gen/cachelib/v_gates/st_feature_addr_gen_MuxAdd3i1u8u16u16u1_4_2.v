`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  8 2020 09:47:23 KST (Dec  8 2020 00:47:23 UTC)

module st_feature_addr_gen_MuxAdd3i1u8u16u16u1_4_2(in4, in3, in2, ctrl1,
     out1);
  input [15:0] in4, in3;
  input [7:0] in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in4, in3;
  wire [7:0] in2;
  wire ctrl1;
  wire [15:0] out1;
  wire addinc_add_31_2_n_0, addinc_add_31_2_n_2, addinc_add_31_2_n_4,
       addinc_add_31_2_n_6, addinc_add_31_2_n_8, addinc_add_31_2_n_10,
       addinc_add_31_2_n_12, addinc_add_31_2_n_15;
  wire addinc_add_31_2_n_16, addinc_add_31_2_n_18,
       addinc_add_31_2_n_20, addinc_add_31_2_n_22,
       addinc_add_31_2_n_24, addinc_add_31_2_n_26,
       addinc_add_31_2_n_28, n_0;
  wire n_1, n_2, n_3, n_4, n_5, n_6, n_7, n_8;
  wire n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  MX2XL g161(.A (in4[8]), .B (n_8), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g162(.A (in4[12]), .B (n_12), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g163(.A (in4[9]), .B (n_9), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g164(.A (in4[2]), .B (n_2), .S0 (ctrl1), .Y (out1[2]));
  MX2XL g165(.A (in4[15]), .B (n_15), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g166(.A (in4[1]), .B (n_1), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g167(.A (in4[0]), .B (n_0), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g168(.A (in4[11]), .B (n_11), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g169(.A (in4[10]), .B (n_10), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g170(.A (in4[6]), .B (n_6), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g171(.A (in4[14]), .B (n_14), .S0 (ctrl1), .Y (out1[14]));
  MX2XL g172(.A (in4[13]), .B (n_13), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g173(.A (in4[7]), .B (n_7), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g174(.A (in4[5]), .B (n_5), .S0 (ctrl1), .Y (out1[5]));
  MX2XL g175(.A (in4[4]), .B (n_4), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g176(.A (in4[3]), .B (n_3), .S0 (ctrl1), .Y (out1[3]));
  XNOR2X1 addinc_add_31_2_g204(.A (in3[15]), .B (addinc_add_31_2_n_28),
       .Y (n_15));
  XNOR2X1 addinc_add_31_2_g205(.A (in3[14]), .B (addinc_add_31_2_n_26),
       .Y (n_14));
  NAND2BX1 addinc_add_31_2_g206(.AN (addinc_add_31_2_n_26), .B
       (in3[14]), .Y (addinc_add_31_2_n_28));
  XNOR2X1 addinc_add_31_2_g207(.A (in3[13]), .B (addinc_add_31_2_n_24),
       .Y (n_13));
  NAND2BX1 addinc_add_31_2_g208(.AN (addinc_add_31_2_n_24), .B
       (in3[13]), .Y (addinc_add_31_2_n_26));
  XNOR2X1 addinc_add_31_2_g209(.A (in3[12]), .B (addinc_add_31_2_n_22),
       .Y (n_12));
  NAND2BX1 addinc_add_31_2_g210(.AN (addinc_add_31_2_n_22), .B
       (in3[12]), .Y (addinc_add_31_2_n_24));
  XNOR2X1 addinc_add_31_2_g211(.A (in3[11]), .B (addinc_add_31_2_n_20),
       .Y (n_11));
  NAND2BX1 addinc_add_31_2_g212(.AN (addinc_add_31_2_n_20), .B
       (in3[11]), .Y (addinc_add_31_2_n_22));
  XNOR2X1 addinc_add_31_2_g213(.A (in3[10]), .B (addinc_add_31_2_n_18),
       .Y (n_10));
  NAND2BX1 addinc_add_31_2_g214(.AN (addinc_add_31_2_n_18), .B
       (in3[10]), .Y (addinc_add_31_2_n_20));
  XNOR2X1 addinc_add_31_2_g215(.A (in3[9]), .B (addinc_add_31_2_n_16),
       .Y (n_9));
  NAND2BX1 addinc_add_31_2_g216(.AN (addinc_add_31_2_n_16), .B
       (in3[9]), .Y (addinc_add_31_2_n_18));
  XOR2XL addinc_add_31_2_g217(.A (in3[8]), .B (addinc_add_31_2_n_15),
       .Y (n_8));
  NAND2X1 addinc_add_31_2_g218(.A (in3[8]), .B (addinc_add_31_2_n_15),
       .Y (addinc_add_31_2_n_16));
  ADDFX1 addinc_add_31_2_g219(.A (addinc_add_31_2_n_12), .B (in2[7]),
       .CI (in3[7]), .CO (addinc_add_31_2_n_15), .S (n_7));
  ADDFX1 addinc_add_31_2_g220(.A (addinc_add_31_2_n_10), .B (in2[6]),
       .CI (in3[6]), .CO (addinc_add_31_2_n_12), .S (n_6));
  ADDFX1 addinc_add_31_2_g221(.A (addinc_add_31_2_n_8), .B (in2[5]),
       .CI (in3[5]), .CO (addinc_add_31_2_n_10), .S (n_5));
  ADDFX1 addinc_add_31_2_g222(.A (addinc_add_31_2_n_6), .B (in2[4]),
       .CI (in3[4]), .CO (addinc_add_31_2_n_8), .S (n_4));
  ADDFX1 addinc_add_31_2_g223(.A (addinc_add_31_2_n_4), .B (in2[3]),
       .CI (in3[3]), .CO (addinc_add_31_2_n_6), .S (n_3));
  ADDFX1 addinc_add_31_2_g224(.A (addinc_add_31_2_n_2), .B (in2[2]),
       .CI (in3[2]), .CO (addinc_add_31_2_n_4), .S (n_2));
  ADDFX1 addinc_add_31_2_g225(.A (addinc_add_31_2_n_0), .B (in2[1]),
       .CI (in3[1]), .CO (addinc_add_31_2_n_2), .S (n_1));
  OAI2BB1X1 addinc_add_31_2_g226(.A0N (in3[0]), .A1N (in2[0]), .B0
       (addinc_add_31_2_n_0), .Y (n_0));
  OR2X1 addinc_add_31_2_g227(.A (in3[0]), .B (in2[0]), .Y
       (addinc_add_31_2_n_0));
endmodule


