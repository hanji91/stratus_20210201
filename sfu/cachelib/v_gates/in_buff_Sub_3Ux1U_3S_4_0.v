`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:33:18 KST (Dec 23 2020 07:33:18 UTC)

module in_buff_Sub_3Ux1U_3S_4_0(in2, in1, out1);
  input [2:0] in2;
  input in1;
  output [2:0] out1;
  wire [2:0] in2;
  wire in1;
  wire [2:0] out1;
  wire dec_sub_23_2_n_0, dec_sub_23_2_n_2;
  XOR2XL dec_sub_23_2_g29(.A (in2[2]), .B (dec_sub_23_2_n_2), .Y
       (out1[2]));
  AO21XL dec_sub_23_2_g30(.A0 (in2[1]), .A1 (dec_sub_23_2_n_0), .B0
       (dec_sub_23_2_n_2), .Y (out1[1]));
  NOR2X1 dec_sub_23_2_g31(.A (in2[1]), .B (dec_sub_23_2_n_0), .Y
       (dec_sub_23_2_n_2));
  XOR2XL dec_sub_23_2_g32(.A (in2[0]), .B (in1), .Y (out1[0]));
  NAND2BX1 dec_sub_23_2_g33(.AN (in2[0]), .B (in1), .Y
       (dec_sub_23_2_n_0));
endmodule


