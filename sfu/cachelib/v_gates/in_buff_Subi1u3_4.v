`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:43:27 KST (Dec 23 2020 05:43:27 UTC)

module in_buff_Subi1u3_4(in1, out1);
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


