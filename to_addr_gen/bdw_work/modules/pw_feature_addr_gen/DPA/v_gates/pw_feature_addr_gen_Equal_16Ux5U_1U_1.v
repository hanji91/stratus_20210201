`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:11:06 KST (Dec 10 2020 07:11:06 UTC)

module pw_feature_addr_gen_Equal_16Ux5U_1U_1(in2, in1, out1);
  input [15:0] in2;
  input [4:0] in1;
  output out1;
  wire [15:0] in2;
  wire [4:0] in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32, n_33, n_34, n_35, n_36, n_37, n_38;
  NOR2X1 g120(.A (n_38), .B (n_37), .Y (out1));
  NAND2X1 g121(.A (n_33), .B (n_36), .Y (n_38));
  NAND2X1 g122(.A (n_34), .B (n_35), .Y (n_37));
  NOR2X1 g123(.A (n_26), .B (n_29), .Y (n_36));
  NOR2X1 g124(.A (n_28), .B (n_31), .Y (n_35));
  NOR2X2 g125(.A (n_32), .B (n_30), .Y (n_34));
  NOR2X1 g126(.A (n_25), .B (n_27), .Y (n_33));
  NOR2X1 g132(.A (n_11), .B (n_20), .Y (n_32));
  NOR2X1 g133(.A (n_17), .B (n_24), .Y (n_31));
  NOR2X1 g127(.A (n_13), .B (n_21), .Y (n_30));
  NOR2X1 g128(.A (n_14), .B (n_22), .Y (n_29));
  NOR2X1 g130(.A (n_10), .B (n_23), .Y (n_28));
  NAND2X1 g131(.A (n_18), .B (n_16), .Y (n_27));
  NAND2X1 g134(.A (n_12), .B (n_15), .Y (n_26));
  NAND2BX2 g129(.AN (in2[5]), .B (n_19), .Y (n_25));
  NOR2X1 g145(.A (n_7), .B (n_3), .Y (n_24));
  NOR2X1 g146(.A (n_5), .B (n_8), .Y (n_23));
  NOR2X1 g138(.A (n_1), .B (n_6), .Y (n_22));
  NOR2X1 g139(.A (n_0), .B (n_4), .Y (n_21));
  NOR2X2 g141(.A (n_2), .B (n_9), .Y (n_20));
  NOR2X6 g144(.A (in2[7]), .B (in2[6]), .Y (n_19));
  NOR2X4 g143(.A (in2[11]), .B (in2[10]), .Y (n_18));
  NOR2X1 g142(.A (in2[0]), .B (in1[0]), .Y (n_17));
  NOR2X2 g147(.A (in2[9]), .B (in2[8]), .Y (n_16));
  NOR2X2 g148(.A (in2[13]), .B (in2[12]), .Y (n_15));
  NOR2X1 g140(.A (in2[4]), .B (in1[4]), .Y (n_14));
  NOR2X1 g135(.A (in2[2]), .B (in1[2]), .Y (n_13));
  NOR2X4 g149(.A (in2[15]), .B (in2[14]), .Y (n_12));
  NOR2X1 g136(.A (in2[3]), .B (in1[3]), .Y (n_11));
  NOR2X1 g137(.A (in2[1]), .B (in1[1]), .Y (n_10));
  INVX2 g154(.A (in1[3]), .Y (n_9));
  INVX1 g157(.A (in1[1]), .Y (n_8));
  INVX1 g153(.A (in2[0]), .Y (n_7));
  INVX2 g155(.A (in1[4]), .Y (n_6));
  INVX2 g152(.A (in2[1]), .Y (n_5));
  INVX1 g158(.A (in1[2]), .Y (n_4));
  INVX1 g159(.A (in1[0]), .Y (n_3));
  INVX2 g156(.A (in2[3]), .Y (n_2));
  INVX2 g150(.A (in2[4]), .Y (n_1));
  INVX2 g151(.A (in2[2]), .Y (n_0));
endmodule

