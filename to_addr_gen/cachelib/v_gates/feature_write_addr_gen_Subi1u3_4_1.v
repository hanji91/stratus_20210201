`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 19:27:27 KST (Jan 19 2021 10:27:27 UTC)

module feature_write_addr_gen_Subi1u3_4_1(in1, out1);
  input [2:0] in1;
  output [2:0] out1;
  wire [2:0] in1;
  wire [2:0] out1;
  wire dec_sub_21_2_n_0;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XOR2XL dec_sub_21_2_g21(.A (in1[2]), .B (dec_sub_21_2_n_0), .Y
       (out1[2]));
  XNOR2X1 dec_sub_21_2_g22(.A (in1[1]), .B (in1[0]), .Y (out1[1]));
  NOR2X1 dec_sub_21_2_g23(.A (in1[1]), .B (in1[0]), .Y
       (dec_sub_21_2_n_0));
endmodule


