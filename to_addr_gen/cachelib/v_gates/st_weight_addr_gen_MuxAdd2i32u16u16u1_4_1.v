`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:50:59 KST (Jan 19 2021 07:50:59 UTC)

module st_weight_addr_gen_MuxAdd2i32u16u16u1_4_1(in3, in2, ctrl1, out1);
  input [15:0] in3, in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in3, in2;
  wire ctrl1;
  wire [15:0] out1;
  wire add_26_2_n_1, add_26_2_n_2, add_26_2_n_4, add_26_2_n_5,
       add_26_2_n_6, add_26_2_n_8, add_26_2_n_9, add_26_2_n_12;
  wire add_26_2_n_14, add_26_2_n_16, n_0, n_1, n_8, n_9, n_10, n_11;
  wire n_12, n_13, n_14, n_15, n_16, n_17;
  MX2XL g164(.A (in3[8]), .B (n_10), .S0 (ctrl1), .Y (out1[8]));
  MX2XL g165(.A (in3[12]), .B (n_14), .S0 (ctrl1), .Y (out1[12]));
  MX2XL g166(.A (in3[9]), .B (n_11), .S0 (ctrl1), .Y (out1[9]));
  MX2XL g167(.A (in3[2]), .B (in2[2]), .S0 (ctrl1), .Y (out1[2]));
  OAI22X1 g168(.A0 (n_1), .A1 (ctrl1), .B0 (n_0), .B1 (in2[5]), .Y
       (out1[5]));
  MX2XL g169(.A (in3[1]), .B (in2[1]), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g170(.A (in3[0]), .B (in2[0]), .S0 (ctrl1), .Y (out1[0]));
  MX2XL g171(.A (in3[11]), .B (n_13), .S0 (ctrl1), .Y (out1[11]));
  MX2XL g172(.A (in3[13]), .B (n_15), .S0 (ctrl1), .Y (out1[13]));
  MX2XL g173(.A (in3[6]), .B (n_8), .S0 (ctrl1), .Y (out1[6]));
  MX2XL g174(.A (in3[15]), .B (n_17), .S0 (ctrl1), .Y (out1[15]));
  MX2XL g175(.A (n_16), .B (in3[14]), .S0 (n_0), .Y (out1[14]));
  MX2XL g176(.A (in3[7]), .B (n_9), .S0 (ctrl1), .Y (out1[7]));
  MX2XL g177(.A (in3[10]), .B (n_12), .S0 (ctrl1), .Y (out1[10]));
  MX2XL g178(.A (in3[4]), .B (in2[4]), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g179(.A (in3[3]), .B (in2[3]), .S0 (ctrl1), .Y (out1[3]));
  INVX1 g180(.A (in3[5]), .Y (n_1));
  INVX1 g181(.A (ctrl1), .Y (n_0));
  XNOR2X1 add_26_2_g307(.A (in2[15]), .B (add_26_2_n_16), .Y (n_17));
  XNOR2X1 add_26_2_g308(.A (in2[13]), .B (add_26_2_n_12), .Y (n_15));
  XNOR2X1 add_26_2_g309(.A (in2[14]), .B (add_26_2_n_14), .Y (n_16));
  XNOR2X1 add_26_2_g310(.A (in2[11]), .B (add_26_2_n_9), .Y (n_13));
  NAND2BX1 add_26_2_g311(.AN (add_26_2_n_14), .B (in2[14]), .Y
       (add_26_2_n_16));
  XNOR2X1 add_26_2_g312(.A (in2[9]), .B (add_26_2_n_5), .Y (n_11));
  NAND3BXL add_26_2_g313(.AN (add_26_2_n_8), .B (in2[12]), .C
       (in2[13]), .Y (add_26_2_n_14));
  XNOR2X1 add_26_2_g314(.A (in2[12]), .B (add_26_2_n_8), .Y (n_14));
  NAND2BX1 add_26_2_g315(.AN (add_26_2_n_8), .B (in2[12]), .Y
       (add_26_2_n_12));
  XNOR2X1 add_26_2_g316(.A (in2[7]), .B (add_26_2_n_1), .Y (n_9));
  XOR2XL add_26_2_g317(.A (in2[10]), .B (add_26_2_n_6), .Y (n_12));
  NAND2X1 add_26_2_g318(.A (in2[10]), .B (add_26_2_n_6), .Y
       (add_26_2_n_9));
  NAND4XL add_26_2_g319(.A (in2[11]), .B (in2[10]), .C (add_26_2_n_2),
       .D (add_26_2_n_4), .Y (add_26_2_n_8));
  XOR2XL add_26_2_g320(.A (in2[8]), .B (add_26_2_n_4), .Y (n_10));
  AND2XL add_26_2_g321(.A (add_26_2_n_2), .B (add_26_2_n_4), .Y
       (add_26_2_n_6));
  NAND2X1 add_26_2_g322(.A (in2[8]), .B (add_26_2_n_4), .Y
       (add_26_2_n_5));
  AND3XL add_26_2_g323(.A (in2[6]), .B (in2[7]), .C (in2[5]), .Y
       (add_26_2_n_4));
  XOR2XL add_26_2_g324(.A (in2[6]), .B (in2[5]), .Y (n_8));
  AND2XL add_26_2_g325(.A (in2[9]), .B (in2[8]), .Y (add_26_2_n_2));
  NAND2X1 add_26_2_g326(.A (in2[6]), .B (in2[5]), .Y (add_26_2_n_1));
endmodule


