`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 23 2020 16:33:27 KST (Dec 23 2020 07:33:27 UTC)

module in_buff_DECODE_2U_23_4(in1, out1);
  input in1;
  output [1:0] out1;
  wire in1;
  wire [1:0] out1;
  assign out1[1] = in1;
  INVX1 g2(.A (in1), .Y (out1[0]));
endmodule


