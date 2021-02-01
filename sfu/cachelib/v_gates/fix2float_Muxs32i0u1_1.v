`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 28 2020 13:24:13 KST (Dec 28 2020 04:24:13 UTC)

module fix2float_Muxs32i0u1_1(in2, ctrl1, out1);
  input [31:0] in2;
  input ctrl1;
  output [31:0] out1;
  wire [31:0] in2;
  wire ctrl1;
  wire [31:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_62;
  NOR2X1 g279(.A (n_14), .B (n_62), .Y (out1[19]));
  NOR2X1 g258(.A (n_24), .B (n_62), .Y (out1[30]));
  NOR2X1 g274(.A (n_11), .B (n_62), .Y (out1[29]));
  NOR2X1 g259(.A (n_26), .B (n_62), .Y (out1[28]));
  NOR2X1 g267(.A (n_4), .B (n_62), .Y (out1[27]));
  NOR2X1 g285(.A (n_1), .B (n_62), .Y (out1[3]));
  NOR2X1 g275(.A (n_22), .B (n_62), .Y (out1[26]));
  NOR2X1 g282(.A (n_9), .B (n_62), .Y (out1[25]));
  NOR2X1 g260(.A (n_15), .B (n_62), .Y (out1[24]));
  NOR2X1 g278(.A (n_12), .B (n_62), .Y (out1[7]));
  NOR2X1 g264(.A (n_23), .B (n_62), .Y (out1[23]));
  NOR2X1 g268(.A (n_13), .B (n_62), .Y (out1[22]));
  NOR2X1 g271(.A (n_2), .B (n_62), .Y (out1[21]));
  NOR2X1 g270(.A (n_8), .B (n_62), .Y (out1[11]));
  NOR2X1 g276(.A (n_19), .B (n_62), .Y (out1[20]));
  NOR2X1 g272(.A (n_6), .B (n_62), .Y (out1[31]));
  NOR2X1 g262(.A (n_25), .B (n_62), .Y (out1[0]));
  NOR2X1 g286(.A (n_27), .B (n_62), .Y (out1[17]));
  NOR2X1 g261(.A (n_28), .B (n_62), .Y (out1[16]));
  NOR2X1 g263(.A (n_0), .B (n_62), .Y (out1[15]));
  NOR2X1 g265(.A (n_18), .B (n_62), .Y (out1[14]));
  NOR2X1 g266(.A (n_5), .B (n_62), .Y (out1[13]));
  NOR2X1 g269(.A (n_20), .B (n_62), .Y (out1[12]));
  NOR2X1 g257(.A (n_31), .B (n_62), .Y (out1[10]));
  NOR2X1 g288(.A (n_21), .B (n_62), .Y (out1[9]));
  NOR2X1 g277(.A (n_29), .B (n_62), .Y (out1[8]));
  NOR2X1 g280(.A (n_16), .B (n_62), .Y (out1[6]));
  NOR2X1 g281(.A (n_10), .B (n_62), .Y (out1[5]));
  NOR2X1 g284(.A (n_17), .B (n_62), .Y (out1[4]));
  NOR2X1 g287(.A (n_30), .B (n_62), .Y (out1[2]));
  NOR2X1 g273(.A (n_7), .B (n_62), .Y (out1[1]));
  NOR2X1 g283(.A (n_3), .B (n_62), .Y (out1[18]));
  INVX1 g310(.A (in2[10]), .Y (n_31));
  INVX1 g289(.A (in2[2]), .Y (n_30));
  INVX1 g298(.A (in2[8]), .Y (n_29));
  INVX1 g291(.A (in2[16]), .Y (n_28));
  INVX1 g305(.A (in2[17]), .Y (n_27));
  INVX1 g320(.A (in2[28]), .Y (n_26));
  INVX1 g307(.A (in2[0]), .Y (n_25));
  INVX1 g293(.A (in2[30]), .Y (n_24));
  INVX1 g308(.A (in2[23]), .Y (n_23));
  INVX1 g318(.A (in2[26]), .Y (n_22));
  INVX1 g297(.A (in2[9]), .Y (n_21));
  INVX1 g309(.A (in2[12]), .Y (n_20));
  INVX1 g299(.A (in2[20]), .Y (n_19));
  INVX1 g316(.A (in2[14]), .Y (n_18));
  INVX1 g302(.A (in2[4]), .Y (n_17));
  CLKINVX8 g321(.A (ctrl1), .Y (n_62));
  INVX1 g312(.A (in2[6]), .Y (n_16));
  INVX1 g290(.A (in2[24]), .Y (n_15));
  INVX1 g300(.A (in2[19]), .Y (n_14));
  INVX1 g294(.A (in2[22]), .Y (n_13));
  INVX1 g311(.A (in2[7]), .Y (n_12));
  INVX1 g313(.A (in2[29]), .Y (n_11));
  INVX1 g301(.A (in2[5]), .Y (n_10));
  INVX1 g314(.A (in2[25]), .Y (n_9));
  INVX1 g295(.A (in2[11]), .Y (n_8));
  INVX1 g315(.A (in2[1]), .Y (n_7));
  INVX1 g306(.A (in2[31]), .Y (n_6));
  INVX1 g292(.A (in2[13]), .Y (n_5));
  INVX1 g317(.A (in2[27]), .Y (n_4));
  INVX1 g303(.A (in2[18]), .Y (n_3));
  INVX1 g296(.A (in2[21]), .Y (n_2));
  INVX1 g319(.A (in2[3]), .Y (n_1));
  INVX1 g304(.A (in2[15]), .Y (n_0));
endmodule

