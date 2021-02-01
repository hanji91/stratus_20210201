`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 22:51:01 KST (Dec  7 2020 13:51:01 UTC)

module st_weight_addr_gen_Nei1u16_4_2(in1, out1);
  input [15:0] in1;
  output out1;
  wire [15:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3;
  OR4X1 g38(.A (in1[2]), .B (in1[1]), .C (in1[3]), .D (n_3), .Y (out1));
  NAND4XL g39(.A (in1[0]), .B (n_2), .C (n_1), .D (n_0), .Y (n_3));
  NOR4X1 g41(.A (in1[7]), .B (in1[6]), .C (in1[5]), .D (in1[4]), .Y
       (n_2));
  NOR4X1 g40(.A (in1[15]), .B (in1[14]), .C (in1[13]), .D (in1[12]), .Y
       (n_1));
  NOR4X1 g42(.A (in1[11]), .B (in1[10]), .C (in1[9]), .D (in1[8]), .Y
       (n_0));
endmodule


