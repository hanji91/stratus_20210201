`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 15 2020 18:02:44 KST (Dec 15 2020 09:02:44 UTC)

module feature_write_addr_gen_Sub_3Ux1U_3S_1(in2, in1, out1);
  input [2:0] in2;
  input in1;
  output [2:0] out1;
  wire [2:0] in2;
  wire in1;
  wire [2:0] out1;
  wire dec_sub_23_2_n_0, dec_sub_23_2_n_1, dec_sub_23_2_n_2,
       dec_sub_23_2_n_4, dec_sub_23_2_n_5;
  MXI2X1 dec_sub_23_2_g31(.A (dec_sub_23_2_n_1), .B (in2[2]), .S0
       (dec_sub_23_2_n_5), .Y (out1[2]));
  NAND2BXL dec_sub_23_2_g32(.AN (dec_sub_23_2_n_5), .B
       (dec_sub_23_2_n_4), .Y (out1[1]));
  NOR2X4 dec_sub_23_2_g33(.A (in2[1]), .B (dec_sub_23_2_n_2), .Y
       (dec_sub_23_2_n_5));
  NAND2XL dec_sub_23_2_g34(.A (in2[1]), .B (dec_sub_23_2_n_2), .Y
       (dec_sub_23_2_n_4));
  MXI2XL dec_sub_23_2_g35(.A (dec_sub_23_2_n_0), .B (in2[0]), .S0
       (in1), .Y (out1[0]));
  NAND2X8 dec_sub_23_2_g36(.A (in1), .B (dec_sub_23_2_n_0), .Y
       (dec_sub_23_2_n_2));
  INVXL dec_sub_23_2_g37(.A (in2[2]), .Y (dec_sub_23_2_n_1));
  CLKINVX12 dec_sub_23_2_g38(.A (in2[0]), .Y (dec_sub_23_2_n_0));
endmodule


