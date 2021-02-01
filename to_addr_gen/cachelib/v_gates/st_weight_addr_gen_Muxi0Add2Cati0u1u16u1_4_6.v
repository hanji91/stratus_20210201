`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec  7 2020 23:36:10 KST (Dec  7 2020 14:36:10 UTC)

module st_weight_addr_gen_Muxi0Add2Cati0u1u16u1_4_6(in3, in2, ctrl1,
     out1);
  input [15:0] in3;
  input in2, ctrl1;
  output [15:0] out1;
  wire [15:0] in3;
  wire in2, ctrl1;
  wire [15:0] out1;
  wire add_29_2_n_1, add_29_2_n_3, add_29_2_n_5, add_29_2_n_7,
       add_29_2_n_9, add_29_2_n_11, add_29_2_n_13, add_29_2_n_15;
  wire add_29_2_n_17, add_29_2_n_19, n_6, n_7, n_8, n_9, n_10, n_11;
  wire n_12, n_13, n_14, n_15, n_16;
  NOR2BX1 g134(.AN (in3[0]), .B (ctrl1), .Y (out1[0]));
  NOR2BX1 g135(.AN (n_15), .B (ctrl1), .Y (out1[14]));
  NOR2BX1 g136(.AN (n_13), .B (ctrl1), .Y (out1[12]));
  NOR2BX1 g137(.AN (n_9), .B (ctrl1), .Y (out1[8]));
  NOR2BX1 g138(.AN (n_16), .B (ctrl1), .Y (out1[15]));
  NOR2BX1 g139(.AN (n_8), .B (ctrl1), .Y (out1[7]));
  NOR2BX1 g140(.AN (n_12), .B (ctrl1), .Y (out1[11]));
  NOR2BX1 g141(.AN (n_7), .B (ctrl1), .Y (out1[6]));
  NOR2BX1 g142(.AN (in3[3]), .B (ctrl1), .Y (out1[3]));
  NOR2BX1 g143(.AN (n_14), .B (ctrl1), .Y (out1[13]));
  NOR2BX1 g144(.AN (n_11), .B (ctrl1), .Y (out1[10]));
  NOR2BX1 g145(.AN (in3[4]), .B (ctrl1), .Y (out1[4]));
  NOR2BX1 g146(.AN (n_6), .B (ctrl1), .Y (out1[5]));
  NOR2BX1 g147(.AN (n_10), .B (ctrl1), .Y (out1[9]));
  NOR2BX1 g148(.AN (in3[2]), .B (ctrl1), .Y (out1[2]));
  NOR2BX1 g149(.AN (in3[1]), .B (ctrl1), .Y (out1[1]));
  XNOR2X1 add_29_2_g320(.A (in3[15]), .B (add_29_2_n_19), .Y (n_16));
  XNOR2X1 add_29_2_g321(.A (in3[14]), .B (add_29_2_n_17), .Y (n_15));
  NAND2BX1 add_29_2_g322(.AN (add_29_2_n_17), .B (in3[14]), .Y
       (add_29_2_n_19));
  XNOR2X1 add_29_2_g323(.A (in3[13]), .B (add_29_2_n_15), .Y (n_14));
  NAND2BX1 add_29_2_g324(.AN (add_29_2_n_15), .B (in3[13]), .Y
       (add_29_2_n_17));
  XNOR2X1 add_29_2_g325(.A (in3[12]), .B (add_29_2_n_13), .Y (n_13));
  NAND2BX1 add_29_2_g326(.AN (add_29_2_n_13), .B (in3[12]), .Y
       (add_29_2_n_15));
  XNOR2X1 add_29_2_g327(.A (in3[11]), .B (add_29_2_n_11), .Y (n_12));
  NAND2BX1 add_29_2_g328(.AN (add_29_2_n_11), .B (in3[11]), .Y
       (add_29_2_n_13));
  XNOR2X1 add_29_2_g329(.A (in3[10]), .B (add_29_2_n_9), .Y (n_11));
  NAND2BX1 add_29_2_g330(.AN (add_29_2_n_9), .B (in3[10]), .Y
       (add_29_2_n_11));
  XNOR2X1 add_29_2_g331(.A (in3[9]), .B (add_29_2_n_7), .Y (n_10));
  NAND2BX1 add_29_2_g332(.AN (add_29_2_n_7), .B (in3[9]), .Y
       (add_29_2_n_9));
  XNOR2X1 add_29_2_g333(.A (in3[8]), .B (add_29_2_n_5), .Y (n_9));
  NAND2BX1 add_29_2_g334(.AN (add_29_2_n_5), .B (in3[8]), .Y
       (add_29_2_n_7));
  XNOR2X1 add_29_2_g335(.A (in3[7]), .B (add_29_2_n_3), .Y (n_8));
  NAND2BX1 add_29_2_g336(.AN (add_29_2_n_3), .B (in3[7]), .Y
       (add_29_2_n_5));
  XNOR2X1 add_29_2_g337(.A (in3[6]), .B (add_29_2_n_1), .Y (n_7));
  NAND2BX1 add_29_2_g338(.AN (add_29_2_n_1), .B (in3[6]), .Y
       (add_29_2_n_3));
  OA21X1 add_29_2_g339(.A0 (in3[5]), .A1 (in2), .B0 (add_29_2_n_1), .Y
       (n_6));
  NAND2X1 add_29_2_g340(.A (in3[5]), .B (in2), .Y (add_29_2_n_1));
endmodule


