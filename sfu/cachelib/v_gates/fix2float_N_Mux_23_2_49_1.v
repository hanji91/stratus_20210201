`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:23:59 KST (Dec 28 2020 04:23:59 UTC)

module fix2float_N_Mux_23_2_49_1(in2, ctrl1, out1);
  input [22:0] in2;
  input ctrl1;
  output [22:0] out1;
  wire [22:0] in2;
  wire ctrl1;
  wire [22:0] out1;
  wire n_105, n_106, n_107, n_108, n_109, n_112, n_116, n_121;
  wire n_122, n_123, n_124, n_125, n_126, n_127, n_128, n_129;
  wire n_130, n_131, n_132, n_133, n_134, n_135, n_136, n_137;
  wire n_138, n_139;
  NOR2X2 g196(.A (n_122), .B (n_116), .Y (out1[17]));
  NOR2X2 g186(.A (n_105), .B (n_112), .Y (out1[21]));
  NOR2X2 g201(.A (n_106), .B (n_112), .Y (out1[20]));
  NOR2X2 g187(.A (n_107), .B (n_112), .Y (out1[19]));
  NOR2X2 g194(.A (n_108), .B (n_116), .Y (out1[18]));
  NOR2X2 g190(.A (n_121), .B (n_116), .Y (out1[22]));
  NOR2X2 g205(.A (n_123), .B (n_112), .Y (out1[16]));
  NOR2X2 g188(.A (n_124), .B (n_116), .Y (out1[15]));
  NOR2X2 g185(.A (n_133), .B (n_116), .Y (out1[6]));
  NOR2X2 g191(.A (n_125), .B (n_109), .Y (out1[14]));
  NOR2X2 g195(.A (n_126), .B (n_109), .Y (out1[13]));
  NOR2X2 g192(.A (n_134), .B (n_116), .Y (out1[5]));
  NOR2X2 g203(.A (n_128), .B (n_109), .Y (out1[11]));
  NOR2X2 g204(.A (n_129), .B (n_116), .Y (out1[10]));
  NOR2X2 g206(.A (n_130), .B (n_109), .Y (out1[9]));
  NOR2X2 g207(.A (n_131), .B (n_112), .Y (out1[8]));
  NOR2X2 g189(.A (n_132), .B (n_112), .Y (out1[7]));
  NOR2X2 g198(.A (n_127), .B (n_109), .Y (out1[12]));
  NOR2X2 g193(.A (n_135), .B (n_112), .Y (out1[4]));
  NOR2X2 g202(.A (n_136), .B (n_109), .Y (out1[3]));
  NOR2X2 g197(.A (n_137), .B (n_116), .Y (out1[2]));
  NOR2X2 g199(.A (n_138), .B (n_109), .Y (out1[1]));
  NOR2X2 g200(.A (n_139), .B (n_112), .Y (out1[0]));
  CLKINVX3 fopt254(.A (in2[21]), .Y (n_105));
  CLKINVX3 fopt255(.A (in2[20]), .Y (n_106));
  CLKINVX3 fopt256(.A (in2[19]), .Y (n_107));
  CLKINVX3 fopt257(.A (in2[18]), .Y (n_108));
  CLKINVX8 fopt258(.A (ctrl1), .Y (n_109));
  CLKINVX8 fopt259(.A (ctrl1), .Y (n_112));
  CLKINVX8 fopt260(.A (ctrl1), .Y (n_116));
  CLKINVX3 fopt(.A (in2[22]), .Y (n_121));
  CLKINVX3 fopt261(.A (in2[17]), .Y (n_122));
  CLKINVX3 fopt262(.A (in2[16]), .Y (n_123));
  CLKINVX3 fopt263(.A (in2[15]), .Y (n_124));
  CLKINVX3 fopt264(.A (in2[14]), .Y (n_125));
  CLKINVX3 fopt265(.A (in2[13]), .Y (n_126));
  CLKINVX3 fopt266(.A (in2[12]), .Y (n_127));
  CLKINVX3 fopt267(.A (in2[11]), .Y (n_128));
  CLKINVX3 fopt268(.A (in2[10]), .Y (n_129));
  CLKINVX3 fopt269(.A (in2[9]), .Y (n_130));
  CLKINVX3 fopt270(.A (in2[8]), .Y (n_131));
  CLKINVX3 fopt271(.A (in2[7]), .Y (n_132));
  CLKINVX3 fopt272(.A (in2[6]), .Y (n_133));
  CLKINVX3 fopt273(.A (in2[5]), .Y (n_134));
  CLKINVX3 fopt274(.A (in2[4]), .Y (n_135));
  CLKINVX3 fopt275(.A (in2[3]), .Y (n_136));
  CLKINVX3 fopt276(.A (in2[2]), .Y (n_137));
  CLKINVX3 fopt277(.A (in2[1]), .Y (n_138));
  CLKINVX3 fopt278(.A (in2[0]), .Y (n_139));
endmodule

