`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:23:36 KST (Dec 28 2020 04:23:36 UTC)

module fix2float_Muxi4u5u1_4(in2, ctrl1, out1);
  input [4:0] in2;
  input ctrl1;
  output [4:0] out1;
  wire [4:0] in2;
  wire ctrl1;
  wire [4:0] out1;
  NOR2BX1 g39(.AN (in2[4]), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g40(.AN (in2[3]), .B (ctrl1), .Y (out1[3]));
  OR2XL g43(.A (in2[2]), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g41(.AN (in2[1]), .B (ctrl1), .Y (out1[1]));
  NOR2BX1 g42(.AN (in2[0]), .B (ctrl1), .Y (out1[0]));
endmodule


