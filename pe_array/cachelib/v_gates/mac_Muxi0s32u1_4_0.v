`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  2 2020 17:18:06 KST (Dec  2 2020 08:18:06 UTC)

module mac_Muxi0s32u1_4_0(in2, ctrl1, out1);
  input [31:0] in2;
  input ctrl1;
  output [31:0] out1;
  wire [31:0] in2;
  wire ctrl1;
  wire [31:0] out1;
  NOR2BX1 g303(.AN (in2[21]), .B (ctrl1), .Y (out1[21]));
  NOR2BX1 g305(.AN (in2[1]), .B (ctrl1), .Y (out1[1]));
  NOR2BX1 g294(.AN (in2[0]), .B (ctrl1), .Y (out1[0]));
  NOR2BX1 g290(.AN (in2[30]), .B (ctrl1), .Y (out1[30]));
  NOR2BX1 g319(.AN (in2[2]), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g306(.AN (in2[29]), .B (ctrl1), .Y (out1[29]));
  NOR2BX1 g291(.AN (in2[28]), .B (ctrl1), .Y (out1[28]));
  NOR2BX1 g299(.AN (in2[27]), .B (ctrl1), .Y (out1[27]));
  NOR2BX1 g312(.AN (in2[6]), .B (ctrl1), .Y (out1[6]));
  NOR2BX1 g307(.AN (in2[26]), .B (ctrl1), .Y (out1[26]));
  NOR2BX1 g314(.AN (in2[25]), .B (ctrl1), .Y (out1[25]));
  NOR2BX1 g292(.AN (in2[24]), .B (ctrl1), .Y (out1[24]));
  NOR2BX1 g289(.AN (in2[10]), .B (ctrl1), .Y (out1[10]));
  NOR2BX1 g296(.AN (in2[23]), .B (ctrl1), .Y (out1[23]));
  NOR2BX1 g300(.AN (in2[22]), .B (ctrl1), .Y (out1[22]));
  NOR2BX1 g304(.AN (in2[31]), .B (ctrl1), .Y (out1[31]));
  NOR2BX1 g317(.AN (in2[3]), .B (ctrl1), .Y (out1[3]));
  NOR2BX1 g311(.AN (in2[19]), .B (ctrl1), .Y (out1[19]));
  NOR2BX1 g315(.AN (in2[18]), .B (ctrl1), .Y (out1[18]));
  NOR2BX1 g318(.AN (in2[17]), .B (ctrl1), .Y (out1[17]));
  NOR2BX1 g293(.AN (in2[16]), .B (ctrl1), .Y (out1[16]));
  NOR2BX1 g295(.AN (in2[15]), .B (ctrl1), .Y (out1[15]));
  NOR2BX1 g297(.AN (in2[14]), .B (ctrl1), .Y (out1[14]));
  NOR2BX1 g298(.AN (in2[13]), .B (ctrl1), .Y (out1[13]));
  NOR2BX1 g301(.AN (in2[12]), .B (ctrl1), .Y (out1[12]));
  NOR2BX1 g302(.AN (in2[11]), .B (ctrl1), .Y (out1[11]));
  NOR2BX1 g320(.AN (in2[9]), .B (ctrl1), .Y (out1[9]));
  NOR2BX1 g309(.AN (in2[8]), .B (ctrl1), .Y (out1[8]));
  NOR2BX1 g310(.AN (in2[7]), .B (ctrl1), .Y (out1[7]));
  NOR2BX1 g313(.AN (in2[5]), .B (ctrl1), .Y (out1[5]));
  NOR2BX1 g316(.AN (in2[4]), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g308(.AN (in2[20]), .B (ctrl1), .Y (out1[20]));
endmodule


