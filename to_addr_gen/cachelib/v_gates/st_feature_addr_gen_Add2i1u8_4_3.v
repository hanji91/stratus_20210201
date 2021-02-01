`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 18 2021 16:23:38 KST (Jan 18 2021 07:23:38 UTC)

module st_feature_addr_gen_Add2i1u8_4_3(in1, out1);
  input [7:0] in1;
  output [8:0] out1;
  wire [7:0] in1;
  wire [8:0] out1;
  wire inc_add_21_2_n_1, inc_add_21_2_n_2, inc_add_21_2_n_4,
       inc_add_21_2_n_6, inc_add_21_2_n_7, inc_add_21_2_n_8,
       inc_add_21_2_n_10;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 inc_add_21_2_g75(.A (in1[7]), .B (inc_add_21_2_n_10), .Y
       (out1[7]));
  AND3XL inc_add_21_2_g76(.A (in1[7]), .B (in1[6]), .C
       (inc_add_21_2_n_7), .Y (out1[8]));
  XNOR2X1 inc_add_21_2_g77(.A (in1[5]), .B (inc_add_21_2_n_8), .Y
       (out1[5]));
  XNOR2X1 inc_add_21_2_g78(.A (in1[6]), .B (inc_add_21_2_n_6), .Y
       (out1[6]));
  NAND2X1 inc_add_21_2_g79(.A (in1[6]), .B (inc_add_21_2_n_7), .Y
       (inc_add_21_2_n_10));
  XNOR2X1 inc_add_21_2_g80(.A (in1[4]), .B (inc_add_21_2_n_4), .Y
       (out1[4]));
  NAND2BX1 inc_add_21_2_g81(.AN (inc_add_21_2_n_4), .B (in1[4]), .Y
       (inc_add_21_2_n_8));
  INVX1 inc_add_21_2_g82(.A (inc_add_21_2_n_6), .Y (inc_add_21_2_n_7));
  NAND3BXL inc_add_21_2_g83(.AN (inc_add_21_2_n_4), .B (in1[5]), .C
       (in1[4]), .Y (inc_add_21_2_n_6));
  XNOR2X1 inc_add_21_2_g84(.A (in1[3]), .B (inc_add_21_2_n_2), .Y
       (out1[3]));
  NAND3X1 inc_add_21_2_g85(.A (in1[3]), .B (in1[2]), .C
       (inc_add_21_2_n_1), .Y (inc_add_21_2_n_4));
  XOR2XL inc_add_21_2_g86(.A (in1[2]), .B (inc_add_21_2_n_1), .Y
       (out1[2]));
  NAND2X1 inc_add_21_2_g87(.A (in1[2]), .B (inc_add_21_2_n_1), .Y
       (inc_add_21_2_n_2));
  ADDHX1 inc_add_21_2_g88(.A (in1[1]), .B (in1[0]), .CO
       (inc_add_21_2_n_1), .S (out1[1]));
endmodule


