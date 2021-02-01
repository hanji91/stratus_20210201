`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Jan 19 2021 16:41:32 KST (Jan 19 2021 07:41:32 UTC)

module st_weight_addr_gen_N_Mux_16_3_22_4(in4, in3, in2, ctrl1, out1);
  input [15:0] in4;
  input [13:0] in3;
  input [14:0] in2;
  input [7:0] ctrl1;
  output [15:0] out1;
  wire [15:0] in4;
  wire [13:0] in3;
  wire [14:0] in2;
  wire [7:0] ctrl1;
  wire [15:0] out1;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_19, n_20, n_21, n_22, n_23;
  wire n_24, n_25, n_26, n_27, n_28, n_29, n_30, n_31;
  wire n_32, n_33, n_34, n_35, n_36, n_37, n_38, n_39;
  wire n_40, n_41, n_42, n_43, n_44, n_45, n_46, n_47;
  wire n_48, n_49, n_50, n_52, n_53, n_54, n_55, n_56;
  wire n_57, n_58, n_59, n_60, n_61, n_62, n_63, n_64;
  wire n_65, n_66, n_80;
  OAI211X1 g1286(.A0 (n_1), .A1 (n_80), .B0 (n_38), .C0 (n_54), .Y
       (out1[8]));
  OAI211X1 g1275(.A0 (n_6), .A1 (n_80), .B0 (n_39), .C0 (n_52), .Y
       (out1[13]));
  OAI211X1 g1281(.A0 (n_3), .A1 (n_80), .B0 (n_40), .C0 (n_49), .Y
       (out1[12]));
  OAI211X1 g1276(.A0 (n_2), .A1 (n_80), .B0 (n_41), .C0 (n_63), .Y
       (out1[11]));
  OAI211X1 g1274(.A0 (n_5), .A1 (n_80), .B0 (n_35), .C0 (n_65), .Y
       (out1[10]));
  OAI211X1 g1283(.A0 (n_8), .A1 (n_80), .B0 (n_34), .C0 (n_59), .Y
       (out1[9]));
  OAI2BB1X1 g1280(.A0N (in4[14]), .A1N (n_30), .B0 (n_66), .Y
       (out1[14]));
  OAI211X1 g1279(.A0 (n_0), .A1 (n_80), .B0 (n_45), .C0 (n_57), .Y
       (out1[3]));
  OAI211X1 g1288(.A0 (n_12), .A1 (n_80), .B0 (n_42), .C0 (n_56), .Y
       (out1[6]));
  OAI211X1 g1277(.A0 (n_13), .A1 (n_80), .B0 (n_43), .C0 (n_61), .Y
       (out1[5]));
  OAI211X1 g1278(.A0 (n_14), .A1 (n_80), .B0 (n_46), .C0 (n_53), .Y
       (out1[4]));
  OAI211X1 g1287(.A0 (n_10), .A1 (n_80), .B0 (n_37), .C0 (n_50), .Y
       (out1[7]));
  OAI211X1 g1285(.A0 (n_4), .A1 (n_80), .B0 (n_44), .C0 (n_55), .Y
       (out1[2]));
  OAI211X1 g1282(.A0 (n_11), .A1 (n_80), .B0 (n_36), .C0 (n_48), .Y
       (out1[1]));
  OAI211X1 g1284(.A0 (n_7), .A1 (n_80), .B0 (n_47), .C0 (n_60), .Y
       (out1[0]));
  AOI221X1 g1289(.A0 (in4[14]), .A1 (n_32), .B0 (in2[14]), .B1 (n_64),
       .C0 (n_29), .Y (n_66));
  AOI22X1 g1290(.A0 (in2[10]), .A1 (n_64), .B0 (in4[10]), .B1 (n_62),
       .Y (n_65));
  AOI22X1 g1293(.A0 (in2[11]), .A1 (n_64), .B0 (in4[11]), .B1 (n_62),
       .Y (n_63));
  AOI22X1 g1291(.A0 (in3[5]), .A1 (n_58), .B0 (in4[5]), .B1 (n_62), .Y
       (n_61));
  AOI22X1 g1298(.A0 (in2[0]), .A1 (n_64), .B0 (in4[0]), .B1 (n_62), .Y
       (n_60));
  AOI22X1 g1299(.A0 (in3[9]), .A1 (n_58), .B0 (in4[9]), .B1 (n_62), .Y
       (n_59));
  AOI22X1 g1294(.A0 (in2[3]), .A1 (n_64), .B0 (in4[3]), .B1 (n_62), .Y
       (n_57));
  AOI22X1 g1297(.A0 (in3[6]), .A1 (n_58), .B0 (in4[6]), .B1 (n_62), .Y
       (n_56));
  AOI22X1 g1295(.A0 (in3[2]), .A1 (n_58), .B0 (in4[2]), .B1 (n_62), .Y
       (n_55));
  AOI22X1 g1300(.A0 (in2[8]), .A1 (n_64), .B0 (in4[8]), .B1 (n_62), .Y
       (n_54));
  AOI22X1 g1292(.A0 (in3[4]), .A1 (n_58), .B0 (in4[4]), .B1 (n_62), .Y
       (n_53));
  AOI22X1 g1301(.A0 (in2[13]), .A1 (n_64), .B0 (in4[13]), .B1 (n_62),
       .Y (n_52));
  NAND2X1 g1318(.A (n_33), .B (n_31), .Y (out1[15]));
  AOI22X1 g1302(.A0 (in2[7]), .A1 (n_64), .B0 (in4[7]), .B1 (n_62), .Y
       (n_50));
  AOI22X1 g1296(.A0 (in2[12]), .A1 (n_64), .B0 (in4[12]), .B1 (n_62),
       .Y (n_49));
  AOI22X1 g1303(.A0 (in3[1]), .A1 (n_58), .B0 (in4[1]), .B1 (n_62), .Y
       (n_48));
  NAND2X1 g1312(.A (in3[0]), .B (n_58), .Y (n_47));
  NAND2X1 g1307(.A (in2[4]), .B (n_64), .Y (n_46));
  NAND2X1 g1308(.A (in3[3]), .B (n_58), .Y (n_45));
  NAND2X1 g1309(.A (in2[2]), .B (n_64), .Y (n_44));
  NAND2X1 g1310(.A (in2[5]), .B (n_64), .Y (n_43));
  NAND2X1 g1311(.A (in2[6]), .B (n_64), .Y (n_42));
  NAND2X1 g1306(.A (in3[11]), .B (n_58), .Y (n_41));
  NAND2X1 g1305(.A (in3[12]), .B (n_58), .Y (n_40));
  NAND2X1 g1314(.A (in3[13]), .B (n_58), .Y (n_39));
  NAND2X1 g1315(.A (in3[8]), .B (n_58), .Y (n_38));
  NAND2X1 g1316(.A (in3[7]), .B (n_58), .Y (n_37));
  NAND2X1 g1317(.A (in2[1]), .B (n_64), .Y (n_36));
  NAND2X1 g1304(.A (in3[10]), .B (n_58), .Y (n_35));
  NAND2X1 g1313(.A (in2[9]), .B (n_64), .Y (n_34));
  OAI21XL g1322(.A0 (n_28), .A1 (n_32), .B0 (in4[15]), .Y (n_33));
  NOR2X1 g1319(.A (n_19), .B (n_25), .Y (n_80));
  AND3XL g1320(.A (n_26), .B (ctrl1[2]), .C (n_15), .Y (n_58));
  AND4X1 g1321(.A (ctrl1[1]), .B (n_16), .C (n_9), .D (n_23), .Y
       (n_64));
  OAI21X1 g1323(.A0 (n_27), .A1 (n_30), .B0 (in4[15]), .Y (n_31));
  OA21X1 g1325(.A0 (n_28), .A1 (n_27), .B0 (in4[14]), .Y (n_29));
  NOR3BXL g1324(.AN (n_22), .B (ctrl1[0]), .C (ctrl1[3]), .Y (n_26));
  NAND4BX1 g1326(.AN (n_28), .B (n_20), .C (n_24), .D (n_17), .Y
       (n_25));
  NAND2X1 g1331(.A (n_24), .B (n_21), .Y (n_32));
  NOR2BX1 g1327(.AN (n_22), .B (ctrl1[3]), .Y (n_23));
  INVX1 g1336(.A (n_62), .Y (n_21));
  NAND2X1 g1329(.A (n_20), .B (n_18), .Y (n_30));
  NAND2BX1 g1328(.AN (ctrl1[3]), .B (n_18), .Y (n_19));
  NAND2BX1 g1330(.AN (ctrl1[3]), .B (n_17), .Y (n_27));
  NAND2X1 g1338(.A (ctrl1[0]), .B (n_16), .Y (n_24));
  NOR4X1 g1332(.A (ctrl1[7]), .B (ctrl1[6]), .C (ctrl1[5]), .D
       (ctrl1[4]), .Y (n_22));
  AND2X1 g1339(.A (ctrl1[0]), .B (n_15), .Y (n_62));
  NAND2X1 g1333(.A (ctrl1[2]), .B (ctrl1[1]), .Y (n_17));
  NOR2X1 g1334(.A (ctrl1[7]), .B (ctrl1[6]), .Y (n_20));
  NOR2X1 g1337(.A (ctrl1[5]), .B (ctrl1[4]), .Y (n_18));
  NOR2X1 g1335(.A (ctrl1[2]), .B (ctrl1[1]), .Y (n_28));
  INVX1 g1344(.A (in4[4]), .Y (n_14));
  INVX1 g1345(.A (in4[5]), .Y (n_13));
  INVX1 g1343(.A (in4[6]), .Y (n_12));
  INVX1 g1342(.A (in4[1]), .Y (n_11));
  INVX1 g1346(.A (in4[7]), .Y (n_10));
  INVX1 g1355(.A (ctrl1[0]), .Y (n_9));
  INVX1 g1340(.A (in4[9]), .Y (n_8));
  INVX1 g1351(.A (in4[0]), .Y (n_7));
  INVX1 g1354(.A (in4[13]), .Y (n_6));
  INVX1 g1341(.A (in4[10]), .Y (n_5));
  INVX1 g1350(.A (in4[2]), .Y (n_4));
  INVX1 g1347(.A (in4[12]), .Y (n_3));
  INVX1 g1352(.A (in4[11]), .Y (n_2));
  INVX1 g1353(.A (in4[8]), .Y (n_1));
  INVX1 g1348(.A (in4[3]), .Y (n_0));
  INVX1 g1356(.A (ctrl1[2]), .Y (n_16));
  INVX1 g1349(.A (ctrl1[1]), .Y (n_15));
endmodule


