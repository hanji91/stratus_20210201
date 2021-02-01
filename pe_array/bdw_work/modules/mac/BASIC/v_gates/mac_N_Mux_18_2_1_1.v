`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  2 2020 16:54:52 KST (Dec  2 2020 07:54:52 UTC)

module mac_N_Mux_18_2_1_1(in2, ctrl1, out1);
  input [17:0] in2;
  input ctrl1;
  output [17:0] out1;
  wire [17:0] in2;
  wire ctrl1;
  wire [17:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_34;
  NOR2X2 g160(.A (n_3), .B (n_34), .Y (out1[11]));
  NOR2X2 g146(.A (n_5), .B (n_34), .Y (out1[16]));
  NOR2X2 g156(.A (n_14), .B (n_34), .Y (out1[15]));
  NOR2X2 g150(.A (n_1), .B (n_34), .Y (out1[1]));
  NOR2X2 g147(.A (n_10), .B (n_34), .Y (out1[14]));
  NOR2X2 g145(.A (n_4), .B (n_34), .Y (out1[13]));
  NOR2X2 g157(.A (n_11), .B (n_34), .Y (out1[12]));
  NOR2X2 g159(.A (n_0), .B (n_34), .Y (out1[5]));
  NOR2X2 g153(.A (n_13), .B (n_34), .Y (out1[17]));
  NOR2X2 g152(.A (n_15), .B (n_34), .Y (out1[0]));
  NOR2X2 g151(.A (n_9), .B (n_34), .Y (out1[9]));
  NOR2X2 g162(.A (n_16), .B (n_34), .Y (out1[8]));
  NOR2X2 g155(.A (n_17), .B (n_34), .Y (out1[7]));
  NOR2X2 g158(.A (n_7), .B (n_34), .Y (out1[6]));
  NOR2X2 g161(.A (n_6), .B (n_34), .Y (out1[4]));
  NOR2X2 g154(.A (n_12), .B (n_34), .Y (out1[3]));
  NOR2X2 g149(.A (n_2), .B (n_34), .Y (out1[2]));
  NOR2X2 g148(.A (n_8), .B (n_34), .Y (out1[10]));
  INVX2 g176(.A (in2[7]), .Y (n_17));
  INVX2 g168(.A (in2[8]), .Y (n_16));
  INVX2 g167(.A (in2[0]), .Y (n_15));
  INVX2 g163(.A (in2[15]), .Y (n_14));
  INVX2 g173(.A (in2[17]), .Y (n_13));
  INVX2 g172(.A (in2[3]), .Y (n_12));
  INVX2 g177(.A (in2[12]), .Y (n_11));
  INVX2 g175(.A (in2[14]), .Y (n_10));
  CLKINVX12 g171(.A (ctrl1), .Y (n_34));
  INVX2 g165(.A (in2[9]), .Y (n_9));
  INVX2 g174(.A (in2[10]), .Y (n_8));
  INVX2 g169(.A (in2[6]), .Y (n_7));
  INVX2 g181(.A (in2[4]), .Y (n_6));
  INVX2 g164(.A (in2[16]), .Y (n_5));
  INVX2 g180(.A (in2[13]), .Y (n_4));
  INVX2 g178(.A (in2[11]), .Y (n_3));
  INVX2 g179(.A (in2[2]), .Y (n_2));
  INVX2 g166(.A (in2[1]), .Y (n_1));
  INVX2 g170(.A (in2[5]), .Y (n_0));
endmodule
