`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 18 2021 16:23:23 KST (Jan 18 2021 07:23:23 UTC)

module st_feature_addr_gen_Add_8Ux1U_9U_4_3(in2, in1, out1);
  input [7:0] in2;
  input in1;
  output [8:0] out1;
  wire [7:0] in2;
  wire in1;
  wire [8:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_2, inc_add_23_2_n_4,
       inc_add_23_2_n_6, inc_add_23_2_n_8, inc_add_23_2_n_9,
       inc_add_23_2_n_10, inc_add_23_2_n_12;
  XNOR2X1 inc_add_23_2_g78(.A (in2[7]), .B (inc_add_23_2_n_12), .Y
       (out1[7]));
  AND3XL inc_add_23_2_g79(.A (in2[7]), .B (in2[6]), .C
       (inc_add_23_2_n_9), .Y (out1[8]));
  XNOR2X1 inc_add_23_2_g80(.A (in2[5]), .B (inc_add_23_2_n_10), .Y
       (out1[5]));
  XNOR2X1 inc_add_23_2_g81(.A (in2[6]), .B (inc_add_23_2_n_8), .Y
       (out1[6]));
  NAND2X1 inc_add_23_2_g82(.A (in2[6]), .B (inc_add_23_2_n_9), .Y
       (inc_add_23_2_n_12));
  XNOR2X1 inc_add_23_2_g83(.A (in2[4]), .B (inc_add_23_2_n_6), .Y
       (out1[4]));
  NAND2BX1 inc_add_23_2_g84(.AN (inc_add_23_2_n_6), .B (in2[4]), .Y
       (inc_add_23_2_n_10));
  INVX1 inc_add_23_2_g85(.A (inc_add_23_2_n_8), .Y (inc_add_23_2_n_9));
  NAND3BXL inc_add_23_2_g86(.AN (inc_add_23_2_n_6), .B (in2[5]), .C
       (in2[4]), .Y (inc_add_23_2_n_8));
  XNOR2X1 inc_add_23_2_g87(.A (in2[3]), .B (inc_add_23_2_n_4), .Y
       (out1[3]));
  NAND3BXL inc_add_23_2_g88(.AN (inc_add_23_2_n_2), .B (in2[3]), .C
       (in2[2]), .Y (inc_add_23_2_n_6));
  XNOR2X1 inc_add_23_2_g89(.A (in2[2]), .B (inc_add_23_2_n_2), .Y
       (out1[2]));
  NAND2BX1 inc_add_23_2_g90(.AN (inc_add_23_2_n_2), .B (in2[2]), .Y
       (inc_add_23_2_n_4));
  XNOR2X1 inc_add_23_2_g91(.A (in2[1]), .B (inc_add_23_2_n_0), .Y
       (out1[1]));
  NAND2BX1 inc_add_23_2_g92(.AN (inc_add_23_2_n_0), .B (in2[1]), .Y
       (inc_add_23_2_n_2));
  XOR2XL inc_add_23_2_g93(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2X1 inc_add_23_2_g94(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_0));
endmodule


