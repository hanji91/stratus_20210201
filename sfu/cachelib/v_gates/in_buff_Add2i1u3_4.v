`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 14:43:26 KST (Dec 23 2020 05:43:26 UTC)

module in_buff_Add2i1u3_4(in1, out1);
  input [2:0] in1;
  output [2:0] out1;
  wire [2:0] in1;
  wire [2:0] out1;
  wire inc_add_21_2_n_0;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  XNOR2X1 inc_add_21_2_g19(.A (in1[2]), .B (inc_add_21_2_n_0), .Y
       (out1[2]));
  XOR2XL inc_add_21_2_g20(.A (in1[1]), .B (in1[0]), .Y (out1[1]));
  NAND2X1 inc_add_21_2_g21(.A (in1[1]), .B (in1[0]), .Y
       (inc_add_21_2_n_0));
endmodule


