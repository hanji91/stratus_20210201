`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:35:29 KST (Dec 23 2020 07:35:29 UTC)

module in_buff_Add2i1u5_4_1(in1, out1);
  input [4:0] in1;
  output [4:0] out1;
  wire [4:0] in1;
  wire [4:0] out1;
  wire inc_add_21_2_n_1, inc_add_21_2_n_2, inc_add_21_2_n_4;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 inc_add_21_2_g40(.A (in1[4]), .B (inc_add_21_2_n_4), .Y
       (out1[4]));
  XNOR2X1 inc_add_21_2_g41(.A (in1[3]), .B (inc_add_21_2_n_2), .Y
       (out1[3]));
  NAND3X1 inc_add_21_2_g42(.A (in1[3]), .B (in1[2]), .C
       (inc_add_21_2_n_1), .Y (inc_add_21_2_n_4));
  XOR2XL inc_add_21_2_g43(.A (in1[2]), .B (inc_add_21_2_n_1), .Y
       (out1[2]));
  NAND2X1 inc_add_21_2_g44(.A (in1[2]), .B (inc_add_21_2_n_1), .Y
       (inc_add_21_2_n_2));
  ADDHX1 inc_add_21_2_g45(.A (in1[1]), .B (in1[0]), .CO
       (inc_add_21_2_n_1), .S (out1[1]));
endmodule


