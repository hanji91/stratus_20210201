`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Dec 10 2020 16:03:31 KST (Dec 10 2020 07:03:31 UTC)

module pw_weight_addr_gen_Add_16Ux8U_16U_4(in2, in1, out1);
  input [15:0] in2;
  input [7:0] in1;
  output [15:0] out1;
  wire [15:0] in2;
  wire [7:0] in1;
  wire [15:0] out1;
  wire add_23_2_n_0, add_23_2_n_1, add_23_2_n_2, add_23_2_n_3,
       add_23_2_n_4, add_23_2_n_5, add_23_2_n_6, add_23_2_n_7;
  wire add_23_2_n_8, add_23_2_n_9, add_23_2_n_10, add_23_2_n_11,
       add_23_2_n_12, add_23_2_n_13, add_23_2_n_14, add_23_2_n_15;
  wire add_23_2_n_17, add_23_2_n_19, add_23_2_n_22, add_23_2_n_23,
       add_23_2_n_25, add_23_2_n_26, add_23_2_n_27, add_23_2_n_29;
  wire add_23_2_n_31, add_23_2_n_32, add_23_2_n_33, add_23_2_n_36,
       add_23_2_n_38, add_23_2_n_40, add_23_2_n_42, add_23_2_n_44;
  wire add_23_2_n_46;
  XNOR2X1 add_23_2_g440(.A (in2[15]), .B (add_23_2_n_46), .Y
       (out1[15]));
  XNOR2X1 add_23_2_g441(.A (in2[14]), .B (add_23_2_n_44), .Y
       (out1[14]));
  NAND2BX1 add_23_2_g442(.AN (add_23_2_n_44), .B (in2[14]), .Y
       (add_23_2_n_46));
  XNOR2X1 add_23_2_g443(.A (in2[13]), .B (add_23_2_n_42), .Y
       (out1[13]));
  NAND2BX1 add_23_2_g444(.AN (add_23_2_n_42), .B (in2[13]), .Y
       (add_23_2_n_44));
  XNOR2X1 add_23_2_g445(.A (in2[12]), .B (add_23_2_n_40), .Y
       (out1[12]));
  NAND2BX1 add_23_2_g446(.AN (add_23_2_n_40), .B (in2[12]), .Y
       (add_23_2_n_42));
  XNOR2X1 add_23_2_g447(.A (in2[11]), .B (add_23_2_n_38), .Y
       (out1[11]));
  NAND2BX1 add_23_2_g448(.AN (add_23_2_n_38), .B (in2[11]), .Y
       (add_23_2_n_40));
  XNOR2X1 add_23_2_g449(.A (in2[10]), .B (add_23_2_n_36), .Y
       (out1[10]));
  NAND2BX1 add_23_2_g450(.AN (add_23_2_n_36), .B (in2[10]), .Y
       (add_23_2_n_38));
  XNOR2X1 add_23_2_g451(.A (in2[9]), .B (add_23_2_n_33), .Y (out1[9]));
  NAND2BX1 add_23_2_g452(.AN (add_23_2_n_33), .B (in2[9]), .Y
       (add_23_2_n_36));
  XNOR2X1 add_23_2_g453(.A (in2[8]), .B (add_23_2_n_31), .Y (out1[8]));
  XNOR2X1 add_23_2_g454(.A (add_23_2_n_9), .B (add_23_2_n_32), .Y
       (out1[7]));
  NAND2BX1 add_23_2_g455(.AN (add_23_2_n_31), .B (in2[8]), .Y
       (add_23_2_n_33));
  OAI21X1 add_23_2_g456(.A0 (add_23_2_n_4), .A1 (add_23_2_n_27), .B0
       (add_23_2_n_3), .Y (add_23_2_n_32));
  AOI211XL add_23_2_g457(.A0 (add_23_2_n_13), .A1 (add_23_2_n_14), .B0
       (add_23_2_n_29), .C0 (add_23_2_n_11), .Y (add_23_2_n_31));
  XNOR2X1 add_23_2_g458(.A (add_23_2_n_8), .B (add_23_2_n_27), .Y
       (out1[6]));
  OAI2BB1X1 add_23_2_g459(.A0N (add_23_2_n_13), .A1N (add_23_2_n_25),
       .B0 (add_23_2_n_7), .Y (add_23_2_n_29));
  XNOR2X1 add_23_2_g460(.A (add_23_2_n_12), .B (add_23_2_n_26), .Y
       (out1[5]));
  NOR2X1 add_23_2_g461(.A (add_23_2_n_14), .B (add_23_2_n_25), .Y
       (add_23_2_n_27));
  NAND2X1 add_23_2_g462(.A (add_23_2_n_6), .B (add_23_2_n_23), .Y
       (add_23_2_n_26));
  NOR2X1 add_23_2_g463(.A (add_23_2_n_5), .B (add_23_2_n_23), .Y
       (add_23_2_n_25));
  XNOR2X1 add_23_2_g464(.A (add_23_2_n_10), .B (add_23_2_n_22), .Y
       (out1[4]));
  NAND2BX1 add_23_2_g465(.AN (add_23_2_n_2), .B (add_23_2_n_22), .Y
       (add_23_2_n_23));
  ADDFX1 add_23_2_g466(.A (add_23_2_n_19), .B (in1[3]), .CI (in2[3]),
       .CO (add_23_2_n_22), .S (out1[3]));
  ADDFX1 add_23_2_g467(.A (add_23_2_n_17), .B (in1[2]), .CI (in2[2]),
       .CO (add_23_2_n_19), .S (out1[2]));
  ADDFX1 add_23_2_g468(.A (add_23_2_n_15), .B (in1[1]), .CI (in2[1]),
       .CO (add_23_2_n_17), .S (out1[1]));
  ADDHX1 add_23_2_g469(.A (in2[0]), .B (in1[0]), .CO (add_23_2_n_15),
       .S (out1[0]));
  OAI21X1 add_23_2_g470(.A0 (add_23_2_n_6), .A1 (add_23_2_n_5), .B0
       (add_23_2_n_0), .Y (add_23_2_n_14));
  NOR2X1 add_23_2_g471(.A (add_23_2_n_1), .B (add_23_2_n_4), .Y
       (add_23_2_n_13));
  NAND2BX1 add_23_2_g472(.AN (add_23_2_n_5), .B (add_23_2_n_0), .Y
       (add_23_2_n_12));
  NOR2X1 add_23_2_g473(.A (add_23_2_n_3), .B (add_23_2_n_1), .Y
       (add_23_2_n_11));
  NAND2BX1 add_23_2_g474(.AN (add_23_2_n_2), .B (add_23_2_n_6), .Y
       (add_23_2_n_10));
  NAND2BX1 add_23_2_g475(.AN (add_23_2_n_1), .B (add_23_2_n_7), .Y
       (add_23_2_n_9));
  NOR2BX1 add_23_2_g476(.AN (add_23_2_n_3), .B (add_23_2_n_4), .Y
       (add_23_2_n_8));
  NAND2X1 add_23_2_g477(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_7));
  NAND2X1 add_23_2_g478(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_6));
  NOR2X1 add_23_2_g479(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_5));
  NOR2X1 add_23_2_g480(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_4));
  NAND2X1 add_23_2_g481(.A (in2[6]), .B (in1[6]), .Y (add_23_2_n_3));
  NOR2X1 add_23_2_g482(.A (in2[4]), .B (in1[4]), .Y (add_23_2_n_2));
  NOR2X1 add_23_2_g483(.A (in2[7]), .B (in1[7]), .Y (add_23_2_n_1));
  NAND2X1 add_23_2_g484(.A (in2[5]), .B (in1[5]), .Y (add_23_2_n_0));
endmodule

