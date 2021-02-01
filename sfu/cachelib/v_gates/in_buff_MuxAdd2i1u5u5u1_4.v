`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:43:30 KST (Dec 23 2020 05:43:30 UTC)

module in_buff_MuxAdd2i1u5u5u1_4(in3, in2, ctrl1, out1);
  input [4:0] in3, in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in3, in2;
  wire ctrl1;
  wire [4:0] out1;
  wire inc_add_26_2_n_1, inc_add_26_2_n_2, inc_add_26_2_n_4, n_0, n_1,
       n_2, n_3, n_4;
  wire n_5;
  OAI22X1 g58(.A0 (n_1), .A1 (ctrl1), .B0 (n_0), .B1 (in2[0]), .Y
       (out1[0]));
  MX2XL g59(.A (in3[4]), .B (n_5), .S0 (ctrl1), .Y (out1[4]));
  MX2XL g60(.A (in3[1]), .B (n_2), .S0 (ctrl1), .Y (out1[1]));
  MX2XL g61(.A (n_4), .B (in3[3]), .S0 (n_0), .Y (out1[3]));
  MX2XL g62(.A (in3[2]), .B (n_3), .S0 (ctrl1), .Y (out1[2]));
  INVX1 g63(.A (in3[0]), .Y (n_1));
  INVX1 g64(.A (ctrl1), .Y (n_0));
  XNOR2X1 inc_add_26_2_g40(.A (in2[4]), .B (inc_add_26_2_n_4), .Y
       (n_5));
  XNOR2X1 inc_add_26_2_g41(.A (in2[3]), .B (inc_add_26_2_n_2), .Y
       (n_4));
  NAND3X1 inc_add_26_2_g42(.A (in2[3]), .B (in2[2]), .C
       (inc_add_26_2_n_1), .Y (inc_add_26_2_n_4));
  XOR2XL inc_add_26_2_g43(.A (in2[2]), .B (inc_add_26_2_n_1), .Y (n_3));
  NAND2X1 inc_add_26_2_g44(.A (in2[2]), .B (inc_add_26_2_n_1), .Y
       (inc_add_26_2_n_2));
  ADDHX1 inc_add_26_2_g45(.A (in2[1]), .B (in2[0]), .CO
       (inc_add_26_2_n_1), .S (n_2));
endmodule

