`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:01:15 KST (Dec 10 2020 07:01:15 UTC)

module pw_weight_addr_gen_Eqi1u16_1(in1, out1);
  input [15:0] in1;
  output out1;
  wire [15:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13;
  NOR2BX1 g43(.AN (n_11), .B (n_13), .Y (out1));
  NAND2X1 g44(.A (in1[0]), .B (n_12), .Y (n_13));
  NOR2X1 g46(.A (n_8), .B (n_10), .Y (n_12));
  NOR2XL g45(.A (n_7), .B (n_9), .Y (n_11));
  NAND2X1 g49(.A (n_3), .B (n_6), .Y (n_10));
  NAND2X1 g50(.A (n_5), .B (n_1), .Y (n_9));
  NAND2BX2 g47(.AN (in1[1]), .B (n_4), .Y (n_8));
  NAND2X1 g48(.A (n_2), .B (n_0), .Y (n_7));
  NOR2X2 g54(.A (in1[13]), .B (in1[12]), .Y (n_6));
  NOR2X1 g55(.A (in1[7]), .B (in1[6]), .Y (n_5));
  NOR2X6 g56(.A (in1[3]), .B (in1[2]), .Y (n_4));
  NOR2X4 g52(.A (in1[15]), .B (in1[14]), .Y (n_3));
  NOR2X1 g51(.A (in1[11]), .B (in1[10]), .Y (n_2));
  NOR2X1 g57(.A (in1[5]), .B (in1[4]), .Y (n_1));
  NOR2X1 g53(.A (in1[9]), .B (in1[8]), .Y (n_0));
endmodule


