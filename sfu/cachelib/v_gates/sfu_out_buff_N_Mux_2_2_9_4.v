`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 11 2021 20:23:43 KST (Jan 11 2021 11:23:43 UTC)

module sfu_out_buff_N_Mux_2_2_9_4(in2, ctrl1, out1);
  input [1:0] in2;
  input ctrl1;
  output [1:0] out1;
  wire [1:0] in2;
  wire ctrl1;
  wire [1:0] out1;
  AND2XL g17(.A (in2[1]), .B (ctrl1), .Y (out1[1]));
  AND2XL g18(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
endmodule


