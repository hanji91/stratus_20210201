`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 12 2021 16:27:18 KST (Jan 12 2021 07:27:18 UTC)

module finish_gen_Equal_32Ux32U_1U_4_0(in2, in1, out1);
  input [31:0] in2, in1;
  output out1;
  wire [31:0] in2, in1;
  wire out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32, n_33, n_34, n_35, n_36, n_37, n_38, n_39;
  wire n_40, n_41;
  NOR4X1 g365(.A (n_36), .B (n_35), .C (n_38), .D (n_41), .Y (out1));
  NAND4XL g366(.A (n_40), .B (n_32), .C (n_24), .D (n_18), .Y (n_41));
  NOR4X1 g367(.A (n_34), .B (n_33), .C (n_39), .D (n_37), .Y (n_40));
  NAND4XL g368(.A (n_10), .B (n_4), .C (n_1), .D (n_16), .Y (n_39));
  NAND4XL g371(.A (n_14), .B (n_9), .C (n_5), .D (n_31), .Y (n_38));
  NAND4XL g369(.A (n_28), .B (n_21), .C (n_20), .D (n_17), .Y (n_37));
  NAND4XL g370(.A (n_30), .B (n_29), .C (n_27), .D (n_3), .Y (n_36));
  NAND4XL g373(.A (n_11), .B (n_22), .C (n_2), .D (n_23), .Y (n_35));
  NAND4XL g372(.A (n_0), .B (n_12), .C (n_8), .D (n_6), .Y (n_34));
  NAND4XL g374(.A (n_26), .B (n_25), .C (n_19), .D (n_13), .Y (n_33));
  AND2XL g375(.A (n_7), .B (n_15), .Y (n_32));
  XNOR2X1 g380(.A (in2[28]), .B (in1[28]), .Y (n_31));
  XNOR2X1 g389(.A (in2[27]), .B (in1[27]), .Y (n_30));
  XNOR2X1 g390(.A (in2[26]), .B (in1[26]), .Y (n_29));
  XNOR2X1 g376(.A (in2[3]), .B (in1[3]), .Y (n_28));
  XNOR2X1 g391(.A (in2[25]), .B (in1[25]), .Y (n_27));
  XNOR2X1 g392(.A (in2[11]), .B (in1[11]), .Y (n_26));
  XNOR2X1 g377(.A (in2[10]), .B (in1[10]), .Y (n_25));
  XNOR2X1 g393(.A (in2[17]), .B (in1[17]), .Y (n_24));
  XNOR2X1 g394(.A (in2[20]), .B (in1[20]), .Y (n_23));
  XNOR2X1 g378(.A (in2[22]), .B (in1[22]), .Y (n_22));
  XNOR2X1 g395(.A (in2[2]), .B (in1[2]), .Y (n_21));
  XNOR2X1 g396(.A (in2[1]), .B (in1[1]), .Y (n_20));
  XNOR2X1 g379(.A (in2[9]), .B (in1[9]), .Y (n_19));
  XNOR2X1 g397(.A (in2[16]), .B (in1[16]), .Y (n_18));
  XNOR2X1 g398(.A (in2[0]), .B (in1[0]), .Y (n_17));
  XNOR2X1 g388(.A (in2[4]), .B (in1[4]), .Y (n_16));
  XNOR2X1 g387(.A (in2[18]), .B (in1[18]), .Y (n_15));
  XNOR2X1 g400(.A (in2[31]), .B (in1[31]), .Y (n_14));
  XNOR2X1 g381(.A (in2[8]), .B (in1[8]), .Y (n_13));
  XNOR2X1 g401(.A (in2[14]), .B (in1[14]), .Y (n_12));
  XNOR2X1 g402(.A (in2[23]), .B (in1[23]), .Y (n_11));
  XNOR2X1 g382(.A (in2[7]), .B (in1[7]), .Y (n_10));
  XNOR2X1 g403(.A (in2[30]), .B (in1[30]), .Y (n_9));
  XNOR2X1 g404(.A (in2[13]), .B (in1[13]), .Y (n_8));
  XNOR2X1 g383(.A (in2[19]), .B (in1[19]), .Y (n_7));
  XNOR2X1 g405(.A (in2[12]), .B (in1[12]), .Y (n_6));
  XNOR2X1 g406(.A (in2[29]), .B (in1[29]), .Y (n_5));
  XNOR2X1 g384(.A (in2[6]), .B (in1[6]), .Y (n_4));
  XNOR2X1 g407(.A (in2[24]), .B (in1[24]), .Y (n_3));
  XNOR2X1 g385(.A (in2[21]), .B (in1[21]), .Y (n_2));
  XNOR2X1 g386(.A (in2[5]), .B (in1[5]), .Y (n_1));
  XNOR2X1 g399(.A (in2[15]), .B (in1[15]), .Y (n_0));
endmodule


