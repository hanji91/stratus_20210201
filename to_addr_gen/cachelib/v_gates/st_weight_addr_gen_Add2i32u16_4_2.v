`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 20 2021 18:35:45 KST (Jan 20 2021 09:35:45 UTC)

module st_weight_addr_gen_Add2i32u16_4_2(in1, out1);
  input [15:0] in1;
  output [15:0] out1;
  wire [15:0] in1;
  wire [15:0] out1;
  wire add_21_2_n_1, add_21_2_n_2, add_21_2_n_4, add_21_2_n_5,
       add_21_2_n_6, add_21_2_n_8, add_21_2_n_9, add_21_2_n_12;
  wire add_21_2_n_14, add_21_2_n_16;
  assign out1[0] = in1[0];
  assign out1[1] = in1[1];
  assign out1[2] = in1[2];
  assign out1[3] = in1[3];
  assign out1[4] = in1[4];
  INVX1 g7(.A (in1[5]), .Y (out1[5]));
  XNOR2X1 add_21_2_g307(.A (in1[15]), .B (add_21_2_n_16), .Y
       (out1[15]));
  XNOR2X1 add_21_2_g308(.A (in1[13]), .B (add_21_2_n_12), .Y
       (out1[13]));
  XNOR2X1 add_21_2_g309(.A (in1[14]), .B (add_21_2_n_14), .Y
       (out1[14]));
  XNOR2X1 add_21_2_g310(.A (in1[11]), .B (add_21_2_n_9), .Y (out1[11]));
  NAND2BX1 add_21_2_g311(.AN (add_21_2_n_14), .B (in1[14]), .Y
       (add_21_2_n_16));
  XNOR2X1 add_21_2_g312(.A (in1[9]), .B (add_21_2_n_5), .Y (out1[9]));
  NAND3BXL add_21_2_g313(.AN (add_21_2_n_8), .B (in1[12]), .C
       (in1[13]), .Y (add_21_2_n_14));
  XNOR2X1 add_21_2_g314(.A (in1[12]), .B (add_21_2_n_8), .Y (out1[12]));
  NAND2BX1 add_21_2_g315(.AN (add_21_2_n_8), .B (in1[12]), .Y
       (add_21_2_n_12));
  XNOR2X1 add_21_2_g316(.A (in1[7]), .B (add_21_2_n_1), .Y (out1[7]));
  XOR2XL add_21_2_g317(.A (in1[10]), .B (add_21_2_n_6), .Y (out1[10]));
  NAND2X1 add_21_2_g318(.A (in1[10]), .B (add_21_2_n_6), .Y
       (add_21_2_n_9));
  NAND4XL add_21_2_g319(.A (in1[11]), .B (in1[10]), .C (add_21_2_n_2),
       .D (add_21_2_n_4), .Y (add_21_2_n_8));
  XOR2XL add_21_2_g320(.A (in1[8]), .B (add_21_2_n_4), .Y (out1[8]));
  AND2XL add_21_2_g321(.A (add_21_2_n_2), .B (add_21_2_n_4), .Y
       (add_21_2_n_6));
  NAND2X1 add_21_2_g322(.A (in1[8]), .B (add_21_2_n_4), .Y
       (add_21_2_n_5));
  AND3XL add_21_2_g323(.A (in1[6]), .B (in1[7]), .C (in1[5]), .Y
       (add_21_2_n_4));
  XOR2XL add_21_2_g324(.A (in1[6]), .B (in1[5]), .Y (out1[6]));
  AND2XL add_21_2_g325(.A (in1[9]), .B (in1[8]), .Y (add_21_2_n_2));
  NAND2X1 add_21_2_g326(.A (in1[6]), .B (in1[5]), .Y (add_21_2_n_1));
endmodule


