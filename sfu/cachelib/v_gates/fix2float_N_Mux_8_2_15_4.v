`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  6 2021 14:47:48 KST (Jan  6 2021 05:47:48 UTC)

module fix2float_N_Mux_8_2_15_4(in2, ctrl1, out1);
  input [7:0] in2;
  input ctrl1;
  output [7:0] out1;
  wire [7:0] in2;
  wire ctrl1;
  wire [7:0] out1;
  AND2XL g68(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
  AND2XL g72(.A (in2[1]), .B (ctrl1), .Y (out1[1]));
  AND2XL g67(.A (in2[7]), .B (ctrl1), .Y (out1[7]));
  AND2XL g66(.A (in2[6]), .B (ctrl1), .Y (out1[6]));
  AND2XL g65(.A (in2[4]), .B (ctrl1), .Y (out1[4]));
  AND2XL g70(.A (in2[5]), .B (ctrl1), .Y (out1[5]));
  AND2XL g69(.A (in2[2]), .B (ctrl1), .Y (out1[2]));
  AND2XL g71(.A (in2[3]), .B (ctrl1), .Y (out1[3]));
endmodule


