`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 14 2021 20:51:02 KST (Jan 14 2021 11:51:02 UTC)

module in_buff_AndReduction_4S_1U_4(in1, out1);
  input [3:0] in1;
  output out1;
  wire [3:0] in1;
  wire out1;
  AND4XL g10(.A (in1[3]), .B (in1[2]), .C (in1[1]), .D (in1[0]), .Y
       (out1));
endmodule

