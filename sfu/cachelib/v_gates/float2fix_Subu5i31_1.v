`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan  7 2021 15:40:58 KST (Jan  7 2021 06:40:58 UTC)

module float2fix_Subu5i31_1(in1, out1);
  input [4:0] in1;
  output [4:0] out1;
  wire [4:0] in1;
  wire [4:0] out1;
  CLKINVX12 g10(.A (in1[4]), .Y (out1[4]));
  CLKINVX12 g14(.A (in1[3]), .Y (out1[3]));
  CLKINVX12 g12(.A (in1[1]), .Y (out1[1]));
  CLKINVX12 g11(.A (in1[0]), .Y (out1[0]));
  CLKINVX12 g13(.A (in1[2]), .Y (out1[2]));
endmodule


