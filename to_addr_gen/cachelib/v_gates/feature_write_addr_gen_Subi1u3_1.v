`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 15 2020 18:02:51 KST (Dec 15 2020 09:02:51 UTC)

module feature_write_addr_gen_Subi1u3_1(in1, out1);
  input [2:0] in1;
  output [2:0] out1;
  wire [2:0] in1;
  wire [2:0] out1;
  wire dec_sub_21_2_n_0, dec_sub_21_2_n_1, dec_sub_21_2_n_2;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  MXI2X1 dec_sub_21_2_g26(.A (dec_sub_21_2_n_1), .B (in1[2]), .S0
       (dec_sub_21_2_n_2), .Y (out1[2]));
  MXI2XL dec_sub_21_2_g27(.A (in1[0]), .B (dec_sub_21_2_n_0), .S0
       (in1[1]), .Y (out1[1]));
  NOR2X8 dec_sub_21_2_g28(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_2));
  INVX1 dec_sub_21_2_g29(.A (in1[2]), .Y (dec_sub_21_2_n_1));
  INVX1 dec_sub_21_2_g30(.A (in1[0]), .Y (dec_sub_21_2_n_0));
endmodule


