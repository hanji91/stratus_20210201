`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:10:43 KST (Dec 10 2020 07:10:43 UTC)

module pw_feature_addr_gen_MuxAdd2i1u8u8u1_4(in3, in2, ctrl1, out1);
  input [7:0] in3, in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in3, in2;
  wire ctrl1;
  wire [7:0] out1;
  wire inc_add_26_2_n_1, inc_add_26_2_n_2, inc_add_26_2_n_4,
       inc_add_26_2_n_6, inc_add_26_2_n_8, inc_add_26_2_n_10, n_0, n_1;
  wire n_2, n_3, n_4, n_5, n_6, n_7, n_8;
  MX2XL g85(.A (in3[4]), .B (n_5), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g86(.A (in3[7]), .B (n_8), .S0 (ctrl1), .Y (out1[7]));
  OAI22X1 g87(.A0 (n_1), .A1 (ctrl1), .B0 (n_0), .B1 (in2[0]), .Y
       (out1[0]));
  MX2XL g88(.A (in3[1]), .B (n_2), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g89(.A (n_6), .B (in3[5]), .S0 (n_0), .Y (out1[5]));
  MX2XL g90(.A (n_7), .B (in3[6]), .S0 (n_0), .Y (out1[6]));
  MX2XL g91(.A (n_4), .B (in3[3]), .S0 (n_0), .Y (out1[3]));
  MX2XL g92(.A (in3[2]), .B (n_3), .S0 (ctrl1), .Y (out1[2]));
  INVX1 g93(.A (in3[0]), .Y (n_1));
  INVX1 g94(.A (ctrl1), .Y (n_0));
  XNOR2X1 inc_add_26_2_g67(.A (in2[7]), .B (inc_add_26_2_n_10), .Y
       (n_8));
  XNOR2X1 inc_add_26_2_g68(.A (in2[6]), .B (inc_add_26_2_n_8), .Y
       (n_7));
  NAND2BX1 inc_add_26_2_g69(.AN (inc_add_26_2_n_8), .B (in2[6]), .Y
       (inc_add_26_2_n_10));
  XNOR2X1 inc_add_26_2_g70(.A (in2[5]), .B (inc_add_26_2_n_6), .Y
       (n_6));
  NAND3BXL inc_add_26_2_g71(.AN (inc_add_26_2_n_4), .B (in2[5]), .C
       (in2[4]), .Y (inc_add_26_2_n_8));
  XNOR2X1 inc_add_26_2_g72(.A (in2[4]), .B (inc_add_26_2_n_4), .Y
       (n_5));
  NAND2BX1 inc_add_26_2_g73(.AN (inc_add_26_2_n_4), .B (in2[4]), .Y
       (inc_add_26_2_n_6));
  XNOR2X1 inc_add_26_2_g74(.A (in2[3]), .B (inc_add_26_2_n_2), .Y
       (n_4));
  NAND3X1 inc_add_26_2_g75(.A (in2[3]), .B (in2[2]), .C
       (inc_add_26_2_n_1), .Y (inc_add_26_2_n_4));
  XOR2XL inc_add_26_2_g76(.A (in2[2]), .B (inc_add_26_2_n_1), .Y (n_3));
  NAND2X1 inc_add_26_2_g77(.A (in2[2]), .B (inc_add_26_2_n_1), .Y
       (inc_add_26_2_n_2));
  ADDHX1 inc_add_26_2_g78(.A (in2[1]), .B (in2[0]), .CO
       (inc_add_26_2_n_1), .S (n_2));
endmodule

