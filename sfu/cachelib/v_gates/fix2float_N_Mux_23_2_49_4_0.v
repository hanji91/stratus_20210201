`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:26:11 KST (Dec 28 2020 04:26:11 UTC)

module fix2float_N_Mux_23_2_49_4_0(in2, ctrl1, out1);
  input [22:0] in2;
  input ctrl1;
  output [22:0] out1;
  wire [22:0] in2;
  wire ctrl1;
  wire [22:0] out1;
  AND2XL g194(.A (in2[18]), .B (ctrl1), .Y (out1[18]));
  AND2XL g186(.A (in2[21]), .B (ctrl1), .Y (out1[21]));
  AND2XL g201(.A (in2[20]), .B (ctrl1), .Y (out1[20]));
  AND2XL g187(.A (in2[19]), .B (ctrl1), .Y (out1[19]));
  AND2XL g197(.A (in2[2]), .B (ctrl1), .Y (out1[2]));
  AND2XL g190(.A (in2[22]), .B (ctrl1), .Y (out1[22]));
  AND2XL g196(.A (in2[17]), .B (ctrl1), .Y (out1[17]));
  AND2XL g205(.A (in2[16]), .B (ctrl1), .Y (out1[16]));
  AND2XL g185(.A (in2[6]), .B (ctrl1), .Y (out1[6]));
  AND2XL g188(.A (in2[15]), .B (ctrl1), .Y (out1[15]));
  AND2XL g191(.A (in2[14]), .B (ctrl1), .Y (out1[14]));
  AND2XL g189(.A (in2[7]), .B (ctrl1), .Y (out1[7]));
  AND2XL g198(.A (in2[12]), .B (ctrl1), .Y (out1[12]));
  AND2XL g203(.A (in2[11]), .B (ctrl1), .Y (out1[11]));
  AND2XL g204(.A (in2[10]), .B (ctrl1), .Y (out1[10]));
  AND2XL g206(.A (in2[9]), .B (ctrl1), .Y (out1[9]));
  AND2XL g207(.A (in2[8]), .B (ctrl1), .Y (out1[8]));
  AND2XL g195(.A (in2[13]), .B (ctrl1), .Y (out1[13]));
  AND2XL g192(.A (in2[5]), .B (ctrl1), .Y (out1[5]));
  AND2XL g193(.A (in2[4]), .B (ctrl1), .Y (out1[4]));
  AND2XL g202(.A (in2[3]), .B (ctrl1), .Y (out1[3]));
  AND2XL g199(.A (in2[1]), .B (ctrl1), .Y (out1[1]));
  AND2XL g200(.A (in2[0]), .B (ctrl1), .Y (out1[0]));
endmodule


