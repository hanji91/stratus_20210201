`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:41:34 KST (Jan 19 2021 07:41:34 UTC)

module st_weight_addr_gen_Add3u1u1u1_4(in3, in2, in1, out1);
  input in3, in2, in1;
  output [1:0] out1;
  wire in3, in2, in1;
  wire [1:0] out1;
  ADDFX1 addinc_add_28_2_g25(.A (in1), .B (in2), .CI (in3), .CO
       (out1[1]), .S (out1[0]));
endmodule


