#ifndef BN_FLOAT32_H
#define BN_FLOAT32_H
#include "systemc.h"
#include "stratus_hls.h"
#include "cynw_cm_float.h"
#include "cynw_cm_float_int.h"
#include "config.h"
#include "fp_mul.h"
#include "fp_add.h"

SC_MODULE(bn_float32)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_valid;
  sc_in< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > src[8];
  //sc_in<sc_uint<32>> mul_coeff;
  //sc_in<sc_uint<32>> add_coeff;
  sc_in< sc_biguint<512> > bn_data;

  sc_out<bool> dst_valid;
  sc_out< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > dst[8];


  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > r_src[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > r2_src[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > r3_src[8];
  sc_signal<bool> r_src_valid;
  sc_signal<bool> r2_src_valid;
  sc_signal<bool> r3_src_valid;
  //sc_signal< sc_uint<32> > tmp_mul_coeff[8];
  sc_uint<32> tmp1_mul_coeff[8];
  cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> tmp2_mul_coeff[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > mul_coeff[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > mul_result[8];
  //sc_signal< sc_uint<32> > tmp_add_coeff[8];
  sc_uint<32> tmp1_add_coeff[8];
  cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> tmp2_add_coeff[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > add_coeff[8];
  sc_signal< cynw_cm_float<8, 23, CYNW_BEST_ACCURACY, CYNW_DYNAMIC_RM, 1> > add_result[8];
  sc_signal<bool> mul_valid[8];
  sc_signal<bool> add_valid[8];

  void _delay() // Added on 2021/01/05/ by hanji
  {
   if (!rstn.read()) { 
    for (int i = 0; i < 8; i++) {
	r_src[i].write(0);
	r2_src[i].write(0);
	r3_src[i].write(0);
    }
	r_src_valid.write(0);
	r2_src_valid.write(0);
	r3_src_valid.write(0);
   }
   else {
    for (int i = 0; i < 8; i++) {
	r_src[i] = src[i].read();
	r2_src[i] = r_src[i].read();
	r3_src[i] = r2_src[i].read();
    }
	r_src_valid = src_valid.read();
	r2_src_valid = r_src_valid.read();
	r3_src_valid = r2_src_valid.read();
   } 
  }

  void _separate_write_coeff()
  {
   for (int i = 0; i < 8; i++) {
    tmp1_mul_coeff[i] = bn_data.read().range((32 * 2 * i) + 31, 32 * 2 * i).to_uint();
    //tmp2_mul_coeff[i].raw_bits(tmp1_mul_coeff[i]);
    //mul_coeff[i].write(tmp2_mul_coeff[i]);
   }
    //tmp_mul_coeff[0].write(bn_data.read().range((32 * 0) + 31, 32 * 0).to_uint());
    //tmp_mul_coeff[1].write(bn_data.read().range((32 * 2) + 31, 32 * 2).to_uint());
    //tmp_mul_coeff[2].write(bn_data.read().range((32 * 4) + 31, 32 * 4).to_uint());
    //tmp_mul_coeff[3].write(bn_data.read().range((32 * 6) + 31, 32 * 6).to_uint());
    //tmp_mul_coeff[4].write(bn_data.read().range((32 * 8) + 31, 32 * 8).to_uint());
    //tmp_mul_coeff[5].write(bn_data.read().range((32 * 10) + 31, 32 * 10).to_uint());
    //tmp_mul_coeff[6].write(bn_data.read().range((32 * 12) + 31, 32 * 12).to_uint());
    //tmp_mul_coeff[7].write(bn_data.read().range((32 * 14) + 31, 32 * 14).to_uint());

/*
   for (int i = 0; i < 8; i++) {
    tmp1_add_coeff[i] = bn_data.read().range((32 * 2 * (i+1)) + 31, 32 * 2 * (i+1)).to_uint();
    //tmp2_add_coeff[i].raw_bits(tmp1_add_coeff[i]);
    //add_coeff[i].write(tmp2_add_coeff[i]);
   }
*/
    //tmp_add_coeff[0].write(bn_data.read().range((32 * 1) + 31, 32 * 1).to_uint());
    //tmp_add_coeff[1].write(bn_data.read().range((32 * 3) + 31, 32 * 3).to_uint());
    //tmp_add_coeff[2].write(bn_data.read().range((32 * 5) + 31, 32 * 5).to_uint());
    //tmp_add_coeff[3].write(bn_data.read().range((32 * 7) + 31, 32 * 7).to_uint());
    //tmp_add_coeff[4].write(bn_data.read().range((32 * 9) + 31, 32 * 9).to_uint());
    //tmp_add_coeff[5].write(bn_data.read().range((32 * 11) + 31, 32 * 11).to_uint());
    //tmp_add_coeff[6].write(bn_data.read().range((32 * 13) + 31, 32 * 13).to_uint());
    //tmp_add_coeff[7].write(bn_data.read().range((32 * 15) + 31, 32 * 15).to_uint());
  }

  void _separate_read_coeff()
  {
   for (int i = 0; i < 8; i++) {
    //tmp1_mul_coeff[i] = bn_data.read().range((32 * 2 * i) + 31, 32 * 2 * i).to_uint();
    tmp2_mul_coeff[i].raw_bits(tmp1_mul_coeff[i]);
    mul_coeff[i].write(tmp2_mul_coeff[i]);
   }

/*
   for (int i = 0; i < 8; i++) {
    //tmp1_add_coeff[i] = bn_data.read().range((32 * 2 * (i+1)) + 31, 32 * 2 * (i+1)).to_uint();
    tmp2_add_coeff[i].raw_bits(tmp1_add_coeff[i]);
    add_coeff[i].write(tmp2_add_coeff[i]);
   }
*/
  }

  void _dst()
  {
    if (!rstn.read()) { // Added on 2021/01/05 by hanji
     for (size_t i = 0; i < 8; i++)
      dst[i].write(0);
     }
    else if (enable.read() == 1) {
     for (size_t i = 0; i < 8; i++)
      dst[i] = add_result[i].read();
    }
    else { 
     for (size_t i = 0; i < 8; i++)
      dst[i] = src[i].read();
    }
  }
  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2021/01/05 by hanji
      dst_valid.write(0);
    else if (enable.read() == 1)
      dst_valid = add_valid[0].read();
    else
      dst_valid = src_valid.read();
  }

  fp_mul *u_fp_mul[8];
  fp_add *u_fp_add[8];

  SC_CTOR(bn_float32) 
  {
    u_fp_mul[0] = new fp_mul("u_fp_mul_0");
    u_fp_mul[1] = new fp_mul("u_fp_mul_1");
    u_fp_mul[2] = new fp_mul("u_fp_mul_2");
    u_fp_mul[3] = new fp_mul("u_fp_mul_3");
    u_fp_mul[4] = new fp_mul("u_fp_mul_4");
    u_fp_mul[5] = new fp_mul("u_fp_mul_5");
    u_fp_mul[6] = new fp_mul("u_fp_mul_6");
    u_fp_mul[7] = new fp_mul("u_fp_mul_7");
 
    u_fp_add[0] = new fp_add("u_fp_add_0");
    u_fp_add[1] = new fp_add("u_fp_add_1");
    u_fp_add[2] = new fp_add("u_fp_add_2");
    u_fp_add[3] = new fp_add("u_fp_add_3");
    u_fp_add[4] = new fp_add("u_fp_add_4");
    u_fp_add[5] = new fp_add("u_fp_add_5");
    u_fp_add[6] = new fp_add("u_fp_add_6");
    u_fp_add[7] = new fp_add("u_fp_add_7");

    for (size_t i = 0; i < 8; i++)
    {
    u_fp_mul[i]->clk(clk);
    u_fp_mul[i]->rstn(rstn);
    u_fp_mul[i]->src_valid(r_src_valid);
    u_fp_mul[i]->a(r_src[i]);
    u_fp_mul[i]->b(mul_coeff[i]);
    u_fp_mul[i]->r(mul_result[i]);
    u_fp_mul[i]->dst_valid(mul_valid[i]);
    }

    for (size_t i = 0; i < 8; i++)
    {
    u_fp_add[i]->clk(clk);
    u_fp_add[i]->rstn(rstn);
    u_fp_add[i]->src_valid(mul_valid[i]);
    u_fp_add[i]->a(mul_result[i]);
    u_fp_add[i]->b(add_coeff[i]);
    u_fp_add[i]->r(add_result[i]);
    u_fp_add[i]->dst_valid(add_valid[i]);
    }

    SC_METHOD(_separate_write_coeff);
    sensitive << clk.pos();
    //sensitive << bn_data;
    SC_METHOD(_separate_read_coeff);
    sensitive << clk.pos();

    SC_METHOD(_dst);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << enable << add_result << src;

    SC_METHOD(_dst_valid);
    sensitive << clk.pos() << rstn.neg();
    //sensitive << src_valid;
  };
};
#endif
