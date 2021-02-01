`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 18:18:19 KST (Dec  7 2020 09:18:19 UTC)

module st_weight_addr_gen_NotEQ_16Ux1U_1U_4(in2, in1, out1);
  input [15:0] in2;
  input in1;
  output out1;
  wire [15:0] in2;
  wire in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4;
  OR4X1 g46(.A (in2[2]), .B (in2[1]), .C (in2[3]), .D (n_4), .Y (out1));
  NAND4XL g47(.A (n_3), .B (n_2), .C (n_1), .D (n_0), .Y (n_4));
  XNOR2X1 g48(.A (in2[0]), .B (in1), .Y (n_3));
  NOR4X1 g50(.A (in2[7]), .B (in2[6]), .C (in2[5]), .D (in2[4]), .Y
       (n_2));
  NOR4X1 g49(.A (in2[15]), .B (in2[14]), .C (in2[13]), .D (in2[12]), .Y
       (n_1));
  NOR4X1 g51(.A (in2[11]), .B (in2[10]), .C (in2[9]), .D (in2[8]), .Y
       (n_0));
endmodule

