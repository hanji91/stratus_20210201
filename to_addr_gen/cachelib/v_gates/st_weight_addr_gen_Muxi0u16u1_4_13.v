`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:50:54 KST (Jan 19 2021 07:50:54 UTC)

module st_weight_addr_gen_Muxi0u16u1_4_13(in2, ctrl1, out1);
  input [15:0] in2;
  input ctrl1;
  output [15:0] out1;
  wire [15:0] in2;
  wire ctrl1;
  wire [15:0] out1;
  NOR2BX1 g159(.AN (in2[2]), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g160(.AN (in2[1]), .B (ctrl1), .Y (out1[1]));
  NOR2BX1 g145(.AN (in2[0]), .B (ctrl1), .Y (out1[0]));
  NOR2BX1 g146(.AN (in2[14]), .B (ctrl1), .Y (out1[14]));
  NOR2BX1 g149(.AN (in2[15]), .B (ctrl1), .Y (out1[15]));
  NOR2BX1 g154(.AN (in2[13]), .B (ctrl1), .Y (out1[13]));
  NOR2BX1 g147(.AN (in2[12]), .B (ctrl1), .Y (out1[12]));
  NOR2BX1 g151(.AN (in2[11]), .B (ctrl1), .Y (out1[11]));
  NOR2BX1 g150(.AN (in2[7]), .B (ctrl1), .Y (out1[7]));
  NOR2BX1 g155(.AN (in2[10]), .B (ctrl1), .Y (out1[10]));
  NOR2BX1 g158(.AN (in2[9]), .B (ctrl1), .Y (out1[9]));
  NOR2BX1 g148(.AN (in2[8]), .B (ctrl1), .Y (out1[8]));
  NOR2BX1 g152(.AN (in2[6]), .B (ctrl1), .Y (out1[6]));
  NOR2BX1 g157(.AN (in2[5]), .B (ctrl1), .Y (out1[5]));
  NOR2BX1 g156(.AN (in2[4]), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g153(.AN (in2[3]), .B (ctrl1), .Y (out1[3]));
endmodule


