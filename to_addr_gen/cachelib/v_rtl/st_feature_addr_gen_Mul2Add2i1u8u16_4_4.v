`timescale 1ps / 1ps
module st_feature_addr_gen_Mul2Add2i1u8u16_4_4(
          in2,
          in1,
          out1,
          clk
);
   input [15:0] in2;
   input [7:0] in1;
   output [15:0] out1;
   input clk;
wire inc_add_24_2_n_6, inc_add_24_2_n_7, inc_add_24_2_n_8, inc_add_24_2_n_11,
     inc_add_24_2_n_14, inc_add_24_2_n_15, inc_add_24_2_n_19, inc_add_24_2_n_20,
     mul_27_8_n_1, mul_27_8_n_2, mul_27_8_n_4, mul_27_8_n_5, mul_27_8_n_6,
     mul_27_8_n_7, mul_27_8_n_8, mul_27_8_n_9, mul_27_8_n_10, mul_27_8_n_11,
     mul_27_8_n_12, mul_27_8_n_13, mul_27_8_n_14, mul_27_8_n_15, mul_27_8_n_16,
     mul_27_8_n_17, mul_27_8_n_22, mul_27_8_n_24, mul_27_8_n_29, mul_27_8_n_30,
     mul_27_8_n_33, mul_27_8_n_34, mul_27_8_n_35, mul_27_8_n_36, mul_27_8_n_37,
     mul_27_8_n_38, mul_27_8_n_39, mul_27_8_n_40, mul_27_8_n_41, mul_27_8_n_42,
     mul_27_8_n_43, mul_27_8_n_44, mul_27_8_n_45, mul_27_8_n_46, mul_27_8_n_47,
     mul_27_8_n_48, mul_27_8_n_49, mul_27_8_n_50, mul_27_8_n_51, mul_27_8_n_52,
     mul_27_8_n_53, mul_27_8_n_54, mul_27_8_n_55, mul_27_8_n_56, mul_27_8_n_57,
     mul_27_8_n_58, mul_27_8_n_59, mul_27_8_n_60, mul_27_8_n_61, mul_27_8_n_62,
     mul_27_8_n_63, mul_27_8_n_65, mul_27_8_n_66, mul_27_8_n_67, mul_27_8_n_71,
     mul_27_8_n_74, mul_27_8_n_75, mul_27_8_n_76, mul_27_8_n_77, mul_27_8_n_78,
     mul_27_8_n_79, mul_27_8_n_80, mul_27_8_n_81, mul_27_8_n_82, mul_27_8_n_83,
     mul_27_8_n_84, mul_27_8_n_85, mul_27_8_n_86, mul_27_8_n_87, mul_27_8_n_88,
     mul_27_8_n_89, mul_27_8_n_90, mul_27_8_n_91, mul_27_8_n_92, mul_27_8_n_93,
     mul_27_8_n_94, mul_27_8_n_95, mul_27_8_n_96, mul_27_8_n_97, mul_27_8_n_98,
     mul_27_8_n_99, mul_27_8_n_100, mul_27_8_n_101, mul_27_8_n_102,
     mul_27_8_n_105, mul_27_8_n_106, mul_27_8_n_107, mul_27_8_n_108,
     mul_27_8_n_109, mul_27_8_n_110, mul_27_8_n_111, mul_27_8_n_112,
     mul_27_8_n_113, mul_27_8_n_114, mul_27_8_n_115, mul_27_8_n_116,
     mul_27_8_n_117, mul_27_8_n_118, mul_27_8_n_119, mul_27_8_n_120,
     mul_27_8_n_121, mul_27_8_n_122, mul_27_8_n_123, mul_27_8_n_124,
     mul_27_8_n_125, mul_27_8_n_126, mul_27_8_n_127, mul_27_8_n_128,
     mul_27_8_n_129, mul_27_8_n_131, mul_27_8_n_134, mul_27_8_n_135,
     mul_27_8_n_137, mul_27_8_n_140, mul_27_8_n_141, mul_27_8_n_142,
     mul_27_8_n_143, mul_27_8_n_144, mul_27_8_n_145, mul_27_8_n_146,
     mul_27_8_n_147, mul_27_8_n_148, mul_27_8_n_150, mul_27_8_n_151,
     mul_27_8_n_152, mul_27_8_n_153, mul_27_8_n_154, mul_27_8_n_155,
     mul_27_8_n_156, mul_27_8_n_157, mul_27_8_n_158, mul_27_8_n_159,
     mul_27_8_n_160, mul_27_8_n_161, mul_27_8_n_162, mul_27_8_n_163,
     mul_27_8_n_164, mul_27_8_n_165, mul_27_8_n_166, mul_27_8_n_167,
     mul_27_8_n_169, mul_27_8_n_170, mul_27_8_n_171, mul_27_8_n_172,
     mul_27_8_n_173, mul_27_8_n_174, mul_27_8_n_175, mul_27_8_n_176,
     mul_27_8_n_177, mul_27_8_n_178, mul_27_8_n_179, mul_27_8_n_180,
     mul_27_8_n_181, mul_27_8_n_182, mul_27_8_n_183, mul_27_8_n_184,
     mul_27_8_n_185, mul_27_8_n_186, mul_27_8_n_187, mul_27_8_n_188,
     mul_27_8_n_189, mul_27_8_n_190, mul_27_8_n_191, mul_27_8_n_192,
     mul_27_8_n_193, mul_27_8_n_194, mul_27_8_n_195, mul_27_8_n_196,
     mul_27_8_n_197, mul_27_8_n_199, mul_27_8_n_200, mul_27_8_n_201,
     mul_27_8_n_202, mul_27_8_n_203, mul_27_8_n_204, mul_27_8_n_205,
     mul_27_8_n_206, mul_27_8_n_207, mul_27_8_n_208, mul_27_8_n_209,
     mul_27_8_n_210, mul_27_8_n_211, mul_27_8_n_212, mul_27_8_n_213,
     mul_27_8_n_214, mul_27_8_n_215, mul_27_8_n_217, mul_27_8_n_218,
     mul_27_8_n_219, mul_27_8_n_220, mul_27_8_n_221, mul_27_8_n_222,
     mul_27_8_n_223, mul_27_8_n_224, mul_27_8_n_225, mul_27_8_n_226,
     mul_27_8_n_227, mul_27_8_n_228, mul_27_8_n_229, mul_27_8_n_231,
     mul_27_8_n_232, mul_27_8_n_233, mul_27_8_n_234, mul_27_8_n_235,
     mul_27_8_n_236, mul_27_8_n_237, mul_27_8_n_238, mul_27_8_n_239,
     mul_27_8_n_240, mul_27_8_n_241, mul_27_8_n_242, mul_27_8_n_243,
     mul_27_8_n_245, mul_27_8_n_246, mul_27_8_n_247, mul_27_8_n_248,
     mul_27_8_n_249, mul_27_8_n_250, mul_27_8_n_251, mul_27_8_n_252,
     mul_27_8_n_253, mul_27_8_n_254, mul_27_8_n_255, mul_27_8_n_256,
     mul_27_8_n_257, mul_27_8_n_258, mul_27_8_n_259, mul_27_8_n_260,
     mul_27_8_n_261, mul_27_8_n_263, mul_27_8_n_264, mul_27_8_n_265,
     mul_27_8_n_266, mul_27_8_n_267, mul_27_8_n_268, mul_27_8_n_269,
     mul_27_8_n_270, mul_27_8_n_271, mul_27_8_n_272, mul_27_8_n_273,
     mul_27_8_n_274, mul_27_8_n_275, mul_27_8_n_276, mul_27_8_n_277,
     mul_27_8_n_278, mul_27_8_n_279, mul_27_8_n_280, mul_27_8_n_281,
     mul_27_8_n_282, mul_27_8_n_284, mul_27_8_n_285, mul_27_8_n_286,
     mul_27_8_n_287, mul_27_8_n_289, mul_27_8_n_290, mul_27_8_n_291,
     mul_27_8_n_294, mul_27_8_n_295, mul_27_8_n_296, mul_27_8_n_299,
     mul_27_8_n_300, mul_27_8_n_302, mul_27_8_n_303, n_5, n_9, n_14, n_19, clk,
     n_47, n_49, n_53, n_54, n_55, n_56, n_57, n_58, n_59, n_60, n_61, n_62,
     n_63, n_64, n_65, n_66, n_67, n_68, n_69, n_70, n_71, n_72, asc001_0_,
     asc001_1_, asc001_2_, asc001_3_, asc001_4_, asc001_5_, asc001_6_, asc001_7_,
     asc001_8_, asc001_9_, asc001_10_, asc001_11_, asc001_12_, asc001_13_,
     asc001_14_, asc001_15_;
assign {out1[15]} = asc001_15_;
assign {out1[14]} = asc001_14_;
 reg out1_9_L0_reg_N30;
 always @(posedge clk)
         out1_9_L0_reg_N30 <= asc001_6_;
 assign {out1[6]} = out1_9_L0_reg_N30;
 reg out1_3_L0_reg_N30;
 always @(posedge clk)
         out1_3_L0_reg_N30 <= asc001_12_;
 assign {out1[12]} = out1_3_L0_reg_N30;
 reg retime_s1_3_reg_reg_N30;
 always @(posedge clk)
         retime_s1_3_reg_reg_N30 <= mul_27_8_n_266;
 assign n_9 = retime_s1_3_reg_reg_N30;
 reg out1_4_L0_reg_N30;
 always @(posedge clk)
         out1_4_L0_reg_N30 <= asc001_11_;
 assign {out1[11]} = out1_4_L0_reg_N30;
 reg out1_5_L0_reg_N30;
 always @(posedge clk)
         out1_5_L0_reg_N30 <= asc001_10_;
 assign {out1[10]} = out1_5_L0_reg_N30;
 reg out1_6_L0_reg_N30;
 always @(posedge clk)
         out1_6_L0_reg_N30 <= asc001_9_;
 assign {out1[9]} = out1_6_L0_reg_N30;
 reg out1_7_L0_reg_N30;
 always @(posedge clk)
         out1_7_L0_reg_N30 <= asc001_8_;
 assign {out1[8]} = out1_7_L0_reg_N30;
 reg out1_8_L0_reg_N30;
 always @(posedge clk)
         out1_8_L0_reg_N30 <= asc001_7_;
 assign {out1[7]} = out1_8_L0_reg_N30;
 reg out1_2_L0_reg_N30;
 always @(posedge clk)
         out1_2_L0_reg_N30 <= asc001_13_;
 assign {out1[13]} = out1_2_L0_reg_N30;
 reg retime_s1_4_reg_reg_N30;
 always @(posedge clk)
         retime_s1_4_reg_reg_N30 <= mul_27_8_n_258;
 assign n_5 = retime_s1_4_reg_reg_N30;
 reg out1_11_L0_reg_N30;
 always @(posedge clk)
         out1_11_L0_reg_N30 <= asc001_4_;
 assign {out1[4]} = out1_11_L0_reg_N30;
 reg out1_12_L0_reg_N30;
 always @(posedge clk)
         out1_12_L0_reg_N30 <= asc001_3_;
 assign {out1[3]} = out1_12_L0_reg_N30;
 reg out1_13_L0_reg_N30;
 always @(posedge clk)
         out1_13_L0_reg_N30 <= asc001_2_;
 assign {out1[2]} = out1_13_L0_reg_N30;
 reg out1_14_L0_reg_N30;
 always @(posedge clk)
         out1_14_L0_reg_N30 <= asc001_1_;
 assign {out1[1]} = out1_14_L0_reg_N30;
 reg out1_15_L0_reg_N30;
 always @(posedge clk)
         out1_15_L0_reg_N30 <= asc001_0_;
 assign {out1[0]} = out1_15_L0_reg_N30;
 reg retime_s1_1_reg_reg_N30;
 always @(posedge clk)
         retime_s1_1_reg_reg_N30 <= mul_27_8_n_302;
 assign n_19 = retime_s1_1_reg_reg_N30;
 reg retime_s1_2_reg_reg_N30;
 always @(posedge clk)
         retime_s1_2_reg_reg_N30 <= mul_27_8_n_284;
 assign n_14 = retime_s1_2_reg_reg_N30;
 reg out1_10_L0_reg_N30;
 always @(posedge clk)
         out1_10_L0_reg_N30 <= asc001_5_;
 assign {out1[5]} = out1_10_L0_reg_N30;
 assign n_53 = ~{in1[0]};
 assign n_47 = (n_70 ^ inc_add_24_2_n_6);
 assign inc_add_24_2_n_20 = ~(inc_add_24_2_n_15 & {in1[4]});
 assign inc_add_24_2_n_19 = ~(inc_add_24_2_n_15 & inc_add_24_2_n_14);
 assign inc_add_24_2_n_15 = ~(inc_add_24_2_n_7 | inc_add_24_2_n_11);
 assign inc_add_24_2_n_14 = ~(inc_add_24_2_n_8 | inc_add_24_2_n_6);
 assign inc_add_24_2_n_11 = ~({in1[2]} & {in1[3]});
 assign inc_add_24_2_n_8 = ~({in1[4]} & {in1[5]});
 assign inc_add_24_2_n_7 = ~({in1[0]} & {in1[1]});
 assign inc_add_24_2_n_6 = ~{in1[6]};
 assign n_49 = (inc_add_24_2_n_15 ^ {in1[4]});
 assign asc001_15_ = ~(mul_27_8_n_303 ^ n_14);
 assign mul_27_8_n_303 = ((n_19 & n_5) | ((n_5 & n_9) | (n_9 & n_19)));
 assign asc001_14_ = (n_5 ^ (n_9 ^ n_19));
 assign mul_27_8_n_302 = ~(mul_27_8_n_269 & (mul_27_8_n_300 | mul_27_8_n_271));
 assign asc001_13_ = ~(mul_27_8_n_299 ^ mul_27_8_n_280);
 assign mul_27_8_n_300 = ~(mul_27_8_n_267 | (mul_27_8_n_296 & mul_27_8_n_264));
 assign mul_27_8_n_299 = ~(mul_27_8_n_268 & ~(mul_27_8_n_296 & mul_27_8_n_264));
 assign asc001_12_ = ~(mul_27_8_n_296 ^ mul_27_8_n_279);
 assign asc001_11_ = ~(mul_27_8_n_294 ^ mul_27_8_n_286);
 assign mul_27_8_n_296 = ~(mul_27_8_n_291 & (mul_27_8_n_295 & (mul_27_8_n_277 | mul_27_8_n_278)));
 assign mul_27_8_n_295 = ~(mul_27_8_n_281 | (mul_27_8_n_274 & (mul_27_8_n_287 & mul_27_8_n_270)));
 assign mul_27_8_n_294 = ~(mul_27_8_n_278 & (mul_27_8_n_290 | mul_27_8_n_282));
 assign asc001_10_ = ~(mul_27_8_n_290 ^ mul_27_8_n_285);
 assign asc001_9_ = ~(mul_27_8_n_289 ^ mul_27_8_n_260);
 assign mul_27_8_n_291 = ~(mul_27_8_n_276 & mul_27_8_n_287);
 assign mul_27_8_n_290 = ~(mul_27_8_n_276 | (mul_27_8_n_274 & mul_27_8_n_270));
 assign mul_27_8_n_289 = ~(mul_27_8_n_243 & (mul_27_8_n_275 | mul_27_8_n_242));
 assign asc001_8_ = ~(mul_27_8_n_275 ^ mul_27_8_n_246);
 assign mul_27_8_n_287 = ~(mul_27_8_n_277 | mul_27_8_n_282);
 assign mul_27_8_n_286 = (mul_27_8_n_277 | mul_27_8_n_281);
 assign mul_27_8_n_285 = ~(mul_27_8_n_282 | ~mul_27_8_n_278);
 assign mul_27_8_n_284 = ~(mul_27_8_n_227 ^ mul_27_8_n_265);
 assign asc001_7_ = ~(mul_27_8_n_261 ^ mul_27_8_n_245);
 assign mul_27_8_n_282 = ~(mul_27_8_n_273 | mul_27_8_n_249);
 assign mul_27_8_n_281 = (mul_27_8_n_255 & mul_27_8_n_272);
 assign mul_27_8_n_280 = ~(mul_27_8_n_269 & ~mul_27_8_n_271);
 assign mul_27_8_n_279 = ~(mul_27_8_n_264 & mul_27_8_n_268);
 assign mul_27_8_n_278 = ~(mul_27_8_n_273 & mul_27_8_n_249);
 assign mul_27_8_n_277 = ~(mul_27_8_n_255 | mul_27_8_n_272);
 assign mul_27_8_n_276 = ~(mul_27_8_n_253 & (mul_27_8_n_252 | mul_27_8_n_243));
 assign mul_27_8_n_275 = ~mul_27_8_n_274;
 assign mul_27_8_n_274 = ~(mul_27_8_n_251 & (mul_27_8_n_263 & (mul_27_8_n_240 | mul_27_8_n_232)));
 assign mul_27_8_n_267 = ~mul_27_8_n_268;
 assign mul_27_8_n_272 = ((mul_27_8_n_206 & mul_27_8_n_218) | ((mul_27_8_n_218 & mul_27_8_n_188) | (mul_27_8_n_188
    & mul_27_8_n_206)));
 assign mul_27_8_n_273 = (mul_27_8_n_218 ^ (mul_27_8_n_188 ^ mul_27_8_n_206));
 assign mul_27_8_n_265 = ((mul_27_8_n_209 & mul_27_8_n_221) | ((mul_27_8_n_221 & mul_27_8_n_182) | (mul_27_8_n_182
    & mul_27_8_n_209)));
 assign mul_27_8_n_266 = (mul_27_8_n_221 ^ (mul_27_8_n_182 ^ mul_27_8_n_209));
 assign mul_27_8_n_271 = ~(mul_27_8_n_259 | mul_27_8_n_256);
 assign mul_27_8_n_270 = ~(mul_27_8_n_252 | mul_27_8_n_242);
 assign mul_27_8_n_269 = ~(mul_27_8_n_259 & mul_27_8_n_256);
 assign mul_27_8_n_268 = ~(mul_27_8_n_257 & mul_27_8_n_254);
 assign mul_27_8_n_263 = ~(mul_27_8_n_241 | (mul_27_8_n_248 & mul_27_8_n_233));
 assign asc001_6_ = ~(mul_27_8_n_247 ^ mul_27_8_n_239);
 assign mul_27_8_n_261 = ~(mul_27_8_n_232 & (mul_27_8_n_247 | mul_27_8_n_231));
 assign mul_27_8_n_260 = ~(mul_27_8_n_253 & ~mul_27_8_n_252);
 assign mul_27_8_n_264 = (mul_27_8_n_257 | mul_27_8_n_254);
 assign mul_27_8_n_258 = ((mul_27_8_n_211 & mul_27_8_n_210) | ((mul_27_8_n_210 & mul_27_8_n_196) | (mul_27_8_n_196
    & mul_27_8_n_211)));
 assign mul_27_8_n_259 = (mul_27_8_n_210 ^ (mul_27_8_n_196 ^ mul_27_8_n_211));
 assign mul_27_8_n_256 = ((mul_27_8_n_207 & mul_27_8_n_212) | ((mul_27_8_n_212 & mul_27_8_n_192) | (mul_27_8_n_192
    & mul_27_8_n_207)));
 assign mul_27_8_n_257 = (mul_27_8_n_212 ^ (mul_27_8_n_192 ^ mul_27_8_n_207));
 assign mul_27_8_n_254 = ((mul_27_8_n_205 & mul_27_8_n_184) | ((mul_27_8_n_184 & mul_27_8_n_208) | (mul_27_8_n_208
    & mul_27_8_n_205)));
 assign mul_27_8_n_255 = (mul_27_8_n_184 ^ (mul_27_8_n_208 ^ mul_27_8_n_205));
 assign mul_27_8_n_253 = ~(mul_27_8_n_250 & mul_27_8_n_236);
 assign mul_27_8_n_252 = ~(mul_27_8_n_250 | mul_27_8_n_236);
 assign mul_27_8_n_251 = ~(mul_27_8_n_248 & mul_27_8_n_238);
 assign mul_27_8_n_249 = ((mul_27_8_n_180 & mul_27_8_n_219) | ((mul_27_8_n_219 & mul_27_8_n_203) | (mul_27_8_n_203
    & mul_27_8_n_180)));
 assign mul_27_8_n_250 = (mul_27_8_n_219 ^ (mul_27_8_n_203 ^ mul_27_8_n_180));
 assign mul_27_8_n_248 = ~(mul_27_8_n_240 | mul_27_8_n_231);
 assign mul_27_8_n_247 = ~(mul_27_8_n_238 | mul_27_8_n_233);
 assign mul_27_8_n_246 = ~(mul_27_8_n_242 | ~mul_27_8_n_243);
 assign mul_27_8_n_245 = (mul_27_8_n_240 | mul_27_8_n_241);
 assign asc001_5_ = ~(mul_27_8_n_229 ^ mul_27_8_n_228);
 assign mul_27_8_n_243 = ~(mul_27_8_n_237 & mul_27_8_n_234);
 assign mul_27_8_n_242 = ~(mul_27_8_n_237 | mul_27_8_n_234);
 assign mul_27_8_n_241 = (mul_27_8_n_235 & mul_27_8_n_225);
 assign mul_27_8_n_240 = ~(mul_27_8_n_235 | mul_27_8_n_225);
 assign mul_27_8_n_239 = ~(mul_27_8_n_231 | ~mul_27_8_n_232);
 assign mul_27_8_n_238 = ~(mul_27_8_n_222 & (mul_27_8_n_223 | mul_27_8_n_193));
 assign mul_27_8_n_236 = ((mul_27_8_n_185 & mul_27_8_n_204) | ((mul_27_8_n_204 & mul_27_8_n_200) | (mul_27_8_n_200
    & mul_27_8_n_185)));
 assign mul_27_8_n_237 = (mul_27_8_n_204 ^ (mul_27_8_n_200 ^ mul_27_8_n_185));
 assign mul_27_8_n_234 = ((mul_27_8_n_186 & mul_27_8_n_172) | ((mul_27_8_n_172 & mul_27_8_n_189) | (mul_27_8_n_189
    & mul_27_8_n_186)));
 assign mul_27_8_n_235 = (mul_27_8_n_172 ^ (mul_27_8_n_189 ^ mul_27_8_n_186));
 assign mul_27_8_n_233 = ~(mul_27_8_n_223 | mul_27_8_n_224);
 assign mul_27_8_n_232 = ~(mul_27_8_n_226 & mul_27_8_n_214);
 assign mul_27_8_n_231 = ~(mul_27_8_n_226 | mul_27_8_n_214);
 assign asc001_4_ = ~(mul_27_8_n_202 ^ mul_27_8_n_217);
 assign mul_27_8_n_229 = ~(mul_27_8_n_222 & ~mul_27_8_n_223);
 assign mul_27_8_n_228 = ~(mul_27_8_n_224 & mul_27_8_n_193);
 assign mul_27_8_n_227 = ~(mul_27_8_n_213 ^ mul_27_8_n_220);
 assign mul_27_8_n_225 = ((mul_27_8_n_190 & mul_27_8_n_174) | ((mul_27_8_n_174 & mul_27_8_n_162) | (mul_27_8_n_162
    & mul_27_8_n_190)));
 assign mul_27_8_n_226 = (mul_27_8_n_174 ^ (mul_27_8_n_162 ^ mul_27_8_n_190));
 assign mul_27_8_n_224 = ~(mul_27_8_n_217 & mul_27_8_n_194);
 assign mul_27_8_n_223 = ~(mul_27_8_n_215 | mul_27_8_n_177);
 assign mul_27_8_n_222 = ~(mul_27_8_n_215 & mul_27_8_n_177);
 assign mul_27_8_n_220 = ((mul_27_8_n_195 & mul_27_8_n_109) | ((mul_27_8_n_109 & mul_27_8_n_163) | (mul_27_8_n_163
    & mul_27_8_n_195)));
 assign mul_27_8_n_221 = (mul_27_8_n_109 ^ (mul_27_8_n_163 ^ mul_27_8_n_195));
 assign mul_27_8_n_218 = ((mul_27_8_n_199 & mul_27_8_n_115) | ((mul_27_8_n_115 & mul_27_8_n_156) | (mul_27_8_n_156
    & mul_27_8_n_199)));
 assign mul_27_8_n_219 = (mul_27_8_n_115 ^ (mul_27_8_n_156 ^ mul_27_8_n_199));
 assign mul_27_8_n_217 = ((mul_27_8_n_197 & mul_27_8_n_173) | ((mul_27_8_n_173 & mul_27_8_n_129) | (mul_27_8_n_129
    & mul_27_8_n_197)));
 assign asc001_3_ = (mul_27_8_n_173 ^ (mul_27_8_n_129 ^ mul_27_8_n_197));
 assign mul_27_8_n_214 = ((mul_27_8_n_175 & mul_27_8_n_155) | ((mul_27_8_n_155 & mul_27_8_n_110) | (mul_27_8_n_110
    & mul_27_8_n_175)));
 assign mul_27_8_n_215 = (mul_27_8_n_155 ^ (mul_27_8_n_110 ^ mul_27_8_n_175));
 assign mul_27_8_n_213 = ~(mul_27_8_n_201 ^ mul_27_8_n_170);
 assign mul_27_8_n_211 = ((mul_27_8_n_183 & mul_27_8_n_153) | ((mul_27_8_n_153 & mul_27_8_n_117) | (mul_27_8_n_117
    & mul_27_8_n_183)));
 assign mul_27_8_n_212 = (mul_27_8_n_153 ^ (mul_27_8_n_117 ^ mul_27_8_n_183));
 assign mul_27_8_n_209 = ((mul_27_8_n_191 & mul_27_8_n_154) | ((mul_27_8_n_154 & mul_27_8_n_108) | (mul_27_8_n_108
    & mul_27_8_n_191)));
 assign mul_27_8_n_210 = (mul_27_8_n_154 ^ (mul_27_8_n_108 ^ mul_27_8_n_191));
 assign mul_27_8_n_207 = ((mul_27_8_n_187 & mul_27_8_n_120) | ((mul_27_8_n_120 & mul_27_8_n_160) | (mul_27_8_n_160
    & mul_27_8_n_187)));
 assign mul_27_8_n_208 = (mul_27_8_n_120 ^ (mul_27_8_n_160 ^ mul_27_8_n_187));
 assign mul_27_8_n_205 = ((mul_27_8_n_179 & mul_27_8_n_119) | ((mul_27_8_n_119 & mul_27_8_n_152) | (mul_27_8_n_152
    & mul_27_8_n_179)));
 assign mul_27_8_n_206 = (mul_27_8_n_119 ^ (mul_27_8_n_152 ^ mul_27_8_n_179));
 assign mul_27_8_n_203 = ((mul_27_8_n_171 & mul_27_8_n_157) | ((mul_27_8_n_157 & mul_27_8_n_122) | (mul_27_8_n_122
    & mul_27_8_n_171)));
 assign mul_27_8_n_204 = (mul_27_8_n_157 ^ (mul_27_8_n_122 ^ mul_27_8_n_171));
 assign mul_27_8_n_202 = ~(mul_27_8_n_194 & mul_27_8_n_193);
 assign mul_27_8_n_201 = ~(mul_27_8_n_181 ^ mul_27_8_n_169);
 assign mul_27_8_n_199 = ((mul_27_8_n_124 & mul_27_8_n_100) | ((mul_27_8_n_100 & mul_27_8_n_137) | (mul_27_8_n_137
    & mul_27_8_n_124)));
 assign mul_27_8_n_200 = (mul_27_8_n_100 ^ (mul_27_8_n_137 ^ mul_27_8_n_124));
 assign mul_27_8_n_197 = ((mul_27_8_n_166 & mul_27_8_n_94) | ((mul_27_8_n_94 & mul_27_8_n_150) | (mul_27_8_n_150
    & mul_27_8_n_166)));
 assign asc001_2_ = (mul_27_8_n_94 ^ (mul_27_8_n_150 ^ mul_27_8_n_166));
 assign mul_27_8_n_195 = ((n_61 & mul_27_8_n_118) | ((mul_27_8_n_118 & mul_27_8_n_135) | (mul_27_8_n_135
    & n_61)));
 assign mul_27_8_n_196 = (mul_27_8_n_118 ^ (mul_27_8_n_135 ^ n_61));
 assign mul_27_8_n_194 = (mul_27_8_n_178 | mul_27_8_n_176);
 assign mul_27_8_n_193 = ~(mul_27_8_n_178 & mul_27_8_n_176);
 assign mul_27_8_n_191 = ((mul_27_8_n_140 & n_62) | ((n_62 & mul_27_8_n_114) | (mul_27_8_n_114 & mul_27_8_n_140)));
 assign mul_27_8_n_192 = (n_62 ^ (mul_27_8_n_114 ^ mul_27_8_n_140));
 assign mul_27_8_n_189 = ((mul_27_8_n_144 & mul_27_8_n_112) | ((mul_27_8_n_112 & mul_27_8_n_99) | (mul_27_8_n_99
    & mul_27_8_n_144)));
 assign mul_27_8_n_190 = (mul_27_8_n_112 ^ (mul_27_8_n_99 ^ mul_27_8_n_144));
 assign mul_27_8_n_187 = ((mul_27_8_n_126 & n_64) | ((n_64 & mul_27_8_n_131) | (mul_27_8_n_131 & mul_27_8_n_126)));
 assign mul_27_8_n_188 = (n_64 ^ (mul_27_8_n_131 ^ mul_27_8_n_126));
 assign mul_27_8_n_185 = ((mul_27_8_n_123 & mul_27_8_n_161) | ((mul_27_8_n_161 & mul_27_8_n_113) | (mul_27_8_n_113
    & mul_27_8_n_123)));
 assign mul_27_8_n_186 = (mul_27_8_n_161 ^ (mul_27_8_n_113 ^ mul_27_8_n_123));
 assign mul_27_8_n_183 = ((mul_27_8_n_127 & n_65) | ((n_65 & mul_27_8_n_121) | (mul_27_8_n_121 & mul_27_8_n_127)));
 assign mul_27_8_n_184 = (n_65 ^ (mul_27_8_n_121 ^ mul_27_8_n_127));
 assign mul_27_8_n_181 = ((mul_27_8_n_141 & n_63) | ((n_63 & mul_27_8_n_116) | (mul_27_8_n_116 & mul_27_8_n_141)));
 assign mul_27_8_n_182 = (n_63 ^ (mul_27_8_n_116 ^ mul_27_8_n_141));
 assign mul_27_8_n_179 = ((mul_27_8_n_125 & n_66) | ((n_66 & mul_27_8_n_134) | (mul_27_8_n_134 & mul_27_8_n_125)));
 assign mul_27_8_n_180 = (n_66 ^ (mul_27_8_n_134 ^ mul_27_8_n_125));
 assign mul_27_8_n_177 = ((mul_27_8_n_142 & mul_27_8_n_111) | ((mul_27_8_n_111 & mul_27_8_n_107) | (mul_27_8_n_107
    & mul_27_8_n_142)));
 assign mul_27_8_n_178 = (mul_27_8_n_111 ^ (mul_27_8_n_107 ^ mul_27_8_n_142));
 assign mul_27_8_n_174 = (mul_27_8_n_146 & mul_27_8_n_164);
 assign mul_27_8_n_175 = (mul_27_8_n_146 ^ mul_27_8_n_164);
 assign mul_27_8_n_176 = (mul_27_8_n_143 & mul_27_8_n_158);
 assign mul_27_8_n_173 = (mul_27_8_n_143 ^ mul_27_8_n_158);
 assign mul_27_8_n_171 = (mul_27_8_n_145 & mul_27_8_n_159);
 assign mul_27_8_n_172 = (mul_27_8_n_145 ^ mul_27_8_n_159);
 assign mul_27_8_n_170 = ~(mul_27_8_n_167 ^ n_60);
 assign mul_27_8_n_169 = ~(mul_27_8_n_165 ^ mul_27_8_n_147);
 assign asc001_1_ = ~(mul_27_8_n_166 | (mul_27_8_n_151 & mul_27_8_n_81));
 assign mul_27_8_n_167 = ~(mul_27_8_n_148 ^ mul_27_8_n_128);
 assign mul_27_8_n_165 = ~((mul_27_8_n_106 | mul_27_8_n_85) & (n_72 | mul_27_8_n_63));
 assign mul_27_8_n_164 = ~(mul_27_8_n_9 | ((mul_27_8_n_24 & {in2[0]}) | (n_56 & n_49)));
 assign mul_27_8_n_163 = ~((mul_27_8_n_106 | mul_27_8_n_74) & (n_72 | mul_27_8_n_85));
 assign mul_27_8_n_162 = ~((mul_27_8_n_106 | mul_27_8_n_49) & (n_72 | mul_27_8_n_51));
 assign mul_27_8_n_161 = ~((mul_27_8_n_106 | mul_27_8_n_51) & (n_72 | mul_27_8_n_46));
 assign mul_27_8_n_160 = ~((mul_27_8_n_106 | mul_27_8_n_50) & (n_72 | mul_27_8_n_39));
 assign mul_27_8_n_166 = ~(mul_27_8_n_151 | mul_27_8_n_81);
 assign mul_27_8_n_159 = ~(mul_27_8_n_2 | ((mul_27_8_n_17 & n_47) | (n_54 & {in2[0]})));
 assign mul_27_8_n_158 = ~(mul_27_8_n_1 | ((mul_27_8_n_22 & n_58) | (n_59 & {in2[0]})));
 assign mul_27_8_n_157 = ~((mul_27_8_n_106 | mul_27_8_n_46) & (n_72 | mul_27_8_n_47));
 assign mul_27_8_n_156 = ~((mul_27_8_n_106 | mul_27_8_n_47) & (n_72 | mul_27_8_n_48));
 assign mul_27_8_n_155 = ~((mul_27_8_n_106 | mul_27_8_n_30) & (n_72 | mul_27_8_n_49));
 assign mul_27_8_n_154 = ~((mul_27_8_n_106 | mul_27_8_n_75) & (n_72 | mul_27_8_n_74));
 assign mul_27_8_n_153 = ~((mul_27_8_n_106 | mul_27_8_n_39) & (n_72 | mul_27_8_n_75));
 assign mul_27_8_n_152 = ~((mul_27_8_n_106 | mul_27_8_n_48) & (n_72 | mul_27_8_n_50));
 assign mul_27_8_n_150 = ~((mul_27_8_n_102 | mul_27_8_n_34) & (mul_27_8_n_60 | {in1[0]}));
 assign mul_27_8_n_151 = ~((mul_27_8_n_101 & mul_27_8_n_10) | (mul_27_8_n_35 & n_53));
 assign mul_27_8_n_148 = ~((mul_27_8_n_96 | mul_27_8_n_92) & (n_69 | mul_27_8_n_66));
 assign mul_27_8_n_147 = ~((mul_27_8_n_98 | mul_27_8_n_84) & (mul_27_8_n_71 | mul_27_8_n_62));
 assign mul_27_8_n_146 = ~((mul_27_8_n_102 | mul_27_8_n_38) & (mul_27_8_n_36 | {in1[0]}));
 assign mul_27_8_n_145 = ~((mul_27_8_n_102 | mul_27_8_n_59) & (mul_27_8_n_76 | {in1[0]}));
 assign mul_27_8_n_144 = ~((mul_27_8_n_102 | mul_27_8_n_36) & (mul_27_8_n_59 | {in1[0]}));
 assign mul_27_8_n_143 = ~((mul_27_8_n_102 | mul_27_8_n_60) & (mul_27_8_n_37 | {in1[0]}));
 assign mul_27_8_n_142 = ~((mul_27_8_n_102 | mul_27_8_n_37) & (mul_27_8_n_38 | {in1[0]}));
 assign mul_27_8_n_141 = ~((mul_27_8_n_96 | mul_27_8_n_91) & (n_69 | mul_27_8_n_92));
 assign mul_27_8_n_140 = ~((mul_27_8_n_96 | mul_27_8_n_78) & (n_69 | mul_27_8_n_89));
 assign mul_27_8_n_137 = ~((mul_27_8_n_102 | mul_27_8_n_76) & (mul_27_8_n_80 | {in1[0]}));
 assign mul_27_8_n_135 = ~((mul_27_8_n_96 | mul_27_8_n_89) & (n_69 | mul_27_8_n_91));
 assign mul_27_8_n_134 = ~((mul_27_8_n_102 | mul_27_8_n_80) & (mul_27_8_n_79 | {in1[0]}));
 assign mul_27_8_n_131 = ~((mul_27_8_n_102 | mul_27_8_n_79) & (mul_27_8_n_90 | {in1[0]}));
 assign mul_27_8_n_129 = ~((mul_27_8_n_96 | mul_27_8_n_33) & (n_69 | mul_27_8_n_55));
 assign mul_27_8_n_128 = ~((mul_27_8_n_101 & mul_27_8_n_83) | (mul_27_8_n_61 & n_53));
 assign mul_27_8_n_127 = ~((mul_27_8_n_96 | mul_27_8_n_77) & (n_69 | mul_27_8_n_78));
 assign mul_27_8_n_126 = ~((mul_27_8_n_96 | mul_27_8_n_86) & (n_69 | mul_27_8_n_77));
 assign mul_27_8_n_125 = ~((mul_27_8_n_96 | mul_27_8_n_57) & (n_69 | mul_27_8_n_86));
 assign mul_27_8_n_124 = ~((mul_27_8_n_96 | mul_27_8_n_56) & (n_69 | mul_27_8_n_57));
 assign mul_27_8_n_123 = ~(mul_27_8_n_105 & mul_27_8_n_95);
 assign mul_27_8_n_122 = ~((mul_27_8_n_98 | mul_27_8_n_43) & (mul_27_8_n_71 | mul_27_8_n_40));
 assign mul_27_8_n_121 = ~((mul_27_8_n_102 | mul_27_8_n_90) & (mul_27_8_n_87 | {in1[0]}));
 assign mul_27_8_n_120 = ~((mul_27_8_n_98 | mul_27_8_n_45) & (mul_27_8_n_71 | mul_27_8_n_42));
 assign mul_27_8_n_119 = ~((mul_27_8_n_98 | mul_27_8_n_41) & (mul_27_8_n_71 | mul_27_8_n_45));
 assign mul_27_8_n_118 = ~((mul_27_8_n_102 | mul_27_8_n_88) & (mul_27_8_n_93 | {in1[0]}));
 assign mul_27_8_n_117 = ~((mul_27_8_n_98 | mul_27_8_n_42) & (mul_27_8_n_71 | mul_27_8_n_44));
 assign mul_27_8_n_116 = ~((mul_27_8_n_102 | mul_27_8_n_93) & (mul_27_8_n_82 | {in1[0]}));
 assign mul_27_8_n_115 = ~((mul_27_8_n_98 | mul_27_8_n_40) & (mul_27_8_n_71 | mul_27_8_n_41));
 assign mul_27_8_n_114 = ~((mul_27_8_n_102 | mul_27_8_n_87) & (mul_27_8_n_88 | {in1[0]}));
 assign mul_27_8_n_113 = ~((mul_27_8_n_96 | mul_27_8_n_53) & (n_69 | mul_27_8_n_56));
 assign mul_27_8_n_112 = ~((mul_27_8_n_96 | mul_27_8_n_58) & (n_69 | mul_27_8_n_53));
 assign mul_27_8_n_111 = ~((mul_27_8_n_96 | mul_27_8_n_55) & (n_69 | mul_27_8_n_54));
 assign mul_27_8_n_110 = ~((mul_27_8_n_96 | mul_27_8_n_54) & (n_69 | mul_27_8_n_58));
 assign mul_27_8_n_109 = ~((mul_27_8_n_98 | mul_27_8_n_52) & (mul_27_8_n_71 | mul_27_8_n_84));
 assign mul_27_8_n_108 = ~((mul_27_8_n_98 | mul_27_8_n_44) & (mul_27_8_n_71 | mul_27_8_n_52));
 assign mul_27_8_n_107 = ~(n_72 | mul_27_8_n_10);
 assign mul_27_8_n_106 = ~(n_72 & n_67);
 assign mul_27_8_n_105 = ~(mul_27_8_n_97 & mul_27_8_n_29);
 assign mul_27_8_n_101 = ~mul_27_8_n_102;
 assign mul_27_8_n_100 = ~(n_71 | mul_27_8_n_10);
 assign mul_27_8_n_99 = ~(mul_27_8_n_71 | mul_27_8_n_10);
 assign mul_27_8_n_102 = (mul_27_8_n_8 | n_53);
 assign mul_27_8_n_98 = ~mul_27_8_n_97;
 assign mul_27_8_n_95 = (mul_27_8_n_71 | mul_27_8_n_43);
 assign mul_27_8_n_94 = ~(n_69 | mul_27_8_n_10);
 assign mul_27_8_n_97 = ~(n_68 | mul_27_8_n_67);
 assign mul_27_8_n_96 = ~(n_69 & mul_27_8_n_65);
 assign mul_27_8_n_83 = ~mul_27_8_n_82;
 assign mul_27_8_n_71 = ~n_68;
 assign mul_27_8_n_67 = ~((n_57 & ~n_47) | (mul_27_8_n_2 & n_47));
 assign mul_27_8_n_66 = ~((n_56 & ~{in2[13]}) | (mul_27_8_n_1 & {in2[13]}));
 assign mul_27_8_n_65 = (n_56 ^ n_58);
 assign mul_27_8_n_63 = ~((n_54 & ~{in2[11]}) | (mul_27_8_n_9 & {in2[11]}));
 assign mul_27_8_n_62 = ~((mul_27_8_n_2 & {in2[9]}) | (mul_27_8_n_7 & n_57));
 assign mul_27_8_n_61 = ~((mul_27_8_n_8 & ~{in2[15]}) | (n_59 & {in2[15]}));
 assign mul_27_8_n_93 = ~(n_59 ^ {in2[13]});
 assign mul_27_8_n_92 = ~((n_56 & ~{in2[12]}) | (mul_27_8_n_1 & {in2[12]}));
 assign mul_27_8_n_91 = ~((n_56 & ~{in2[11]}) | (mul_27_8_n_1 & {in2[11]}));
 assign mul_27_8_n_90 = ~(n_59 ^ {in2[10]});
 assign mul_27_8_n_89 = ((mul_27_8_n_1 & ~{in2[10]}) | (n_56 & {in2[10]}));
 assign mul_27_8_n_88 = ~(n_59 ^ {in2[12]});
 assign mul_27_8_n_87 = ~(n_59 ^ {in2[11]});
 assign mul_27_8_n_86 = ~((mul_27_8_n_1 & {in2[7]}) | (mul_27_8_n_14 & n_56));
 assign mul_27_8_n_85 = ~((n_54 & ~{in2[10]}) | (mul_27_8_n_9 & {in2[10]}));
 assign mul_27_8_n_84 = ~((mul_27_8_n_2 & {in2[8]}) | (mul_27_8_n_15 & n_57));
 assign mul_27_8_n_82 = ~(n_59 ^ {in2[14]});
 assign mul_27_8_n_81 = ~(n_59 & ~asc001_0_);
 assign mul_27_8_n_80 = ~((mul_27_8_n_8 & {in2[8]}) | (mul_27_8_n_15 & n_59));
 assign mul_27_8_n_79 = ~((mul_27_8_n_8 & {in2[9]}) | (mul_27_8_n_7 & n_59));
 assign mul_27_8_n_78 = ~((mul_27_8_n_1 & {in2[9]}) | (mul_27_8_n_7 & n_56));
 assign mul_27_8_n_77 = ~((mul_27_8_n_1 & {in2[8]}) | (mul_27_8_n_15 & n_56));
 assign mul_27_8_n_76 = ~((mul_27_8_n_8 & {in2[7]}) | (mul_27_8_n_14 & n_59));
 assign mul_27_8_n_75 = ~((mul_27_8_n_9 & {in2[8]}) | (mul_27_8_n_15 & n_54));
 assign mul_27_8_n_74 = ~((mul_27_8_n_9 & {in2[9]}) | (mul_27_8_n_7 & n_54));
 assign mul_27_8_n_35 = ~mul_27_8_n_34;
 assign mul_27_8_n_33 = ~((mul_27_8_n_1 & {in2[0]}) | (mul_27_8_n_10 & n_56));
 assign mul_27_8_n_30 = ~((mul_27_8_n_9 & {in2[0]}) | (mul_27_8_n_10 & n_54));
 assign mul_27_8_n_29 = ~((n_57 | mul_27_8_n_10) & ({in2[0]} | mul_27_8_n_2));
 assign mul_27_8_n_60 = ~((mul_27_8_n_8 & {in2[2]}) | (mul_27_8_n_12 & n_59));
 assign mul_27_8_n_59 = ~((mul_27_8_n_8 & {in2[6]}) | (mul_27_8_n_4 & n_59));
 assign mul_27_8_n_58 = ~((mul_27_8_n_1 & {in2[3]}) | (mul_27_8_n_11 & n_56));
 assign mul_27_8_n_57 = ~((mul_27_8_n_1 & {in2[6]}) | (mul_27_8_n_4 & n_56));
 assign mul_27_8_n_56 = ~((mul_27_8_n_1 & {in2[5]}) | (mul_27_8_n_13 & n_56));
 assign mul_27_8_n_55 = ~((mul_27_8_n_1 & {in2[1]}) | (mul_27_8_n_6 & n_56));
 assign mul_27_8_n_54 = ~((mul_27_8_n_1 & {in2[2]}) | (mul_27_8_n_12 & n_56));
 assign mul_27_8_n_53 = ~((mul_27_8_n_1 & {in2[4]}) | (mul_27_8_n_5 & n_56));
 assign mul_27_8_n_52 = ~((mul_27_8_n_2 & {in2[7]}) | (mul_27_8_n_14 & n_57));
 assign mul_27_8_n_51 = ~((mul_27_8_n_9 & ~mul_27_8_n_12) | (n_54 & mul_27_8_n_12));
 assign mul_27_8_n_50 = ~((mul_27_8_n_9 & {in2[6]}) | (mul_27_8_n_4 & n_54));
 assign mul_27_8_n_49 = ~((mul_27_8_n_9 & {in2[1]}) | (mul_27_8_n_6 & n_54));
 assign mul_27_8_n_48 = ~((mul_27_8_n_9 & {in2[5]}) | (mul_27_8_n_13 & n_54));
 assign mul_27_8_n_47 = ~((mul_27_8_n_9 & {in2[4]}) | (mul_27_8_n_5 & n_54));
 assign mul_27_8_n_46 = ~((mul_27_8_n_9 & ~mul_27_8_n_11) | (n_54 & mul_27_8_n_11));
 assign mul_27_8_n_45 = ~((mul_27_8_n_2 & {in2[4]}) | (mul_27_8_n_5 & n_57));
 assign mul_27_8_n_44 = ~((mul_27_8_n_2 & {in2[6]}) | (mul_27_8_n_4 & n_57));
 assign mul_27_8_n_43 = ~((mul_27_8_n_2 & ~mul_27_8_n_6) | (n_57 & mul_27_8_n_6));
 assign mul_27_8_n_42 = ~((mul_27_8_n_2 & {in2[5]}) | (mul_27_8_n_13 & n_57));
 assign mul_27_8_n_41 = ~((mul_27_8_n_2 & {in2[3]}) | (mul_27_8_n_11 & n_57));
 assign mul_27_8_n_40 = ~((mul_27_8_n_2 & {in2[2]}) | (mul_27_8_n_12 & n_57));
 assign mul_27_8_n_39 = ~((mul_27_8_n_9 & {in2[7]}) | (mul_27_8_n_14 & n_54));
 assign mul_27_8_n_38 = ~((mul_27_8_n_8 & {in2[4]}) | (mul_27_8_n_5 & n_59));
 assign mul_27_8_n_37 = ~((mul_27_8_n_8 & {in2[3]}) | (mul_27_8_n_11 & n_59));
 assign mul_27_8_n_36 = ~((mul_27_8_n_8 & {in2[5]}) | (mul_27_8_n_13 & n_59));
 assign mul_27_8_n_34 = ~((mul_27_8_n_8 & {in2[1]}) | (mul_27_8_n_6 & n_59));
 assign mul_27_8_n_24 = ~(mul_27_8_n_1 & mul_27_8_n_16);
 assign mul_27_8_n_22 = ~(mul_27_8_n_8 & mul_27_8_n_10);
 assign mul_27_8_n_17 = ~(mul_27_8_n_9 & mul_27_8_n_10);
 assign asc001_0_ = ~({in1[0]} | mul_27_8_n_10);
 assign mul_27_8_n_16 = ~n_49;
 assign mul_27_8_n_15 = ~{in2[8]};
 assign mul_27_8_n_14 = ~{in2[7]};
 assign mul_27_8_n_13 = ~{in2[5]};
 assign mul_27_8_n_12 = ~{in2[2]};
 assign mul_27_8_n_11 = ~{in2[3]};
 assign mul_27_8_n_10 = ~{in2[0]};
 assign mul_27_8_n_9 = ~n_54;
 assign mul_27_8_n_8 = ~n_59;
 assign mul_27_8_n_7 = ~{in2[9]};
 assign mul_27_8_n_6 = ~{in2[1]};
 assign mul_27_8_n_5 = ~{in2[4]};
 assign mul_27_8_n_4 = ~{in2[6]};
 assign mul_27_8_n_2 = ~n_57;
 assign mul_27_8_n_1 = ~n_56;
 assign n_54 = ~(inc_add_24_2_n_20 ^ {in1[5]});
 assign n_56 = ({in1[3]} ^ n_55);
 assign n_55 = ~(inc_add_24_2_n_7 | ~{in1[2]});
 assign n_57 = ~(inc_add_24_2_n_19 ^ {in1[7]});
 assign n_58 = ~(inc_add_24_2_n_7 ^ {in1[2]});
 assign n_59 = ({in1[0]} ^ {in1[1]});
 assign n_60 = ~({in2[7]} & ~n_71);
 assign n_61 = ~(n_71 | mul_27_8_n_13);
 assign n_62 = ~(n_71 | mul_27_8_n_5);
 assign n_63 = ~(n_71 | mul_27_8_n_4);
 assign n_64 = ~(n_71 | mul_27_8_n_12);
 assign n_65 = ~(n_71 | mul_27_8_n_11);
 assign n_66 = ~(n_71 | mul_27_8_n_6);
 assign n_67 = ((n_54 & ~n_49) | (mul_27_8_n_9 & n_49));
 assign n_68 = ((n_54 & ~n_47) | (mul_27_8_n_9 & n_47));
 assign n_69 = (n_58 ^ mul_27_8_n_8);
 assign n_70 = ~(inc_add_24_2_n_15 & ~inc_add_24_2_n_8);
 assign n_71 = ~({in1[7]} | ~mul_27_8_n_2);
 assign n_72 = ((n_56 | mul_27_8_n_16) & (n_49 | mul_27_8_n_1));
endmodule

