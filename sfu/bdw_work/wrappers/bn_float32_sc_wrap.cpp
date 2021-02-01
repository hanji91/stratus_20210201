/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* This file is used to wrap the three different versions of the DUT
* block called "bn_float32". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"bn_float32_sc_wrap.h"
#include	"bn_float32_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports
void bn_float32_wrapper::thread_src_man_0()
{
   src_man_0 = src[0].read().man;
}
void bn_float32_wrapper::thread_src_exp_0()
{
   src_exp_0 = src[0].read().exp;
}
void bn_float32_wrapper::thread_src_sign_0()
{
   src_sign_0 = src[0].read().sign;
}
void bn_float32_wrapper::thread_src_man_1()
{
   src_man_1 = src[1].read().man;
}
void bn_float32_wrapper::thread_src_exp_1()
{
   src_exp_1 = src[1].read().exp;
}
void bn_float32_wrapper::thread_src_sign_1()
{
   src_sign_1 = src[1].read().sign;
}
void bn_float32_wrapper::thread_src_man_2()
{
   src_man_2 = src[2].read().man;
}
void bn_float32_wrapper::thread_src_exp_2()
{
   src_exp_2 = src[2].read().exp;
}
void bn_float32_wrapper::thread_src_sign_2()
{
   src_sign_2 = src[2].read().sign;
}
void bn_float32_wrapper::thread_src_man_3()
{
   src_man_3 = src[3].read().man;
}
void bn_float32_wrapper::thread_src_exp_3()
{
   src_exp_3 = src[3].read().exp;
}
void bn_float32_wrapper::thread_src_sign_3()
{
   src_sign_3 = src[3].read().sign;
}
void bn_float32_wrapper::thread_src_man_4()
{
   src_man_4 = src[4].read().man;
}
void bn_float32_wrapper::thread_src_exp_4()
{
   src_exp_4 = src[4].read().exp;
}
void bn_float32_wrapper::thread_src_sign_4()
{
   src_sign_4 = src[4].read().sign;
}
void bn_float32_wrapper::thread_src_man_5()
{
   src_man_5 = src[5].read().man;
}
void bn_float32_wrapper::thread_src_exp_5()
{
   src_exp_5 = src[5].read().exp;
}
void bn_float32_wrapper::thread_src_sign_5()
{
   src_sign_5 = src[5].read().sign;
}
void bn_float32_wrapper::thread_src_man_6()
{
   src_man_6 = src[6].read().man;
}
void bn_float32_wrapper::thread_src_exp_6()
{
   src_exp_6 = src[6].read().exp;
}
void bn_float32_wrapper::thread_src_sign_6()
{
   src_sign_6 = src[6].read().sign;
}
void bn_float32_wrapper::thread_src_man_7()
{
   src_man_7 = src[7].read().man;
}
void bn_float32_wrapper::thread_src_exp_7()
{
   src_exp_7 = src[7].read().exp;
}
void bn_float32_wrapper::thread_src_sign_7()
{
   src_sign_7 = src[7].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_0()
{
   mul_coeff_man_0 = mul_coeff[0].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_0()
{
   mul_coeff_exp_0 = mul_coeff[0].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_0()
{
   mul_coeff_sign_0 = mul_coeff[0].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_1()
{
   mul_coeff_man_1 = mul_coeff[1].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_1()
{
   mul_coeff_exp_1 = mul_coeff[1].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_1()
{
   mul_coeff_sign_1 = mul_coeff[1].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_2()
{
   mul_coeff_man_2 = mul_coeff[2].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_2()
{
   mul_coeff_exp_2 = mul_coeff[2].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_2()
{
   mul_coeff_sign_2 = mul_coeff[2].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_3()
{
   mul_coeff_man_3 = mul_coeff[3].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_3()
{
   mul_coeff_exp_3 = mul_coeff[3].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_3()
{
   mul_coeff_sign_3 = mul_coeff[3].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_4()
{
   mul_coeff_man_4 = mul_coeff[4].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_4()
{
   mul_coeff_exp_4 = mul_coeff[4].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_4()
{
   mul_coeff_sign_4 = mul_coeff[4].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_5()
{
   mul_coeff_man_5 = mul_coeff[5].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_5()
{
   mul_coeff_exp_5 = mul_coeff[5].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_5()
{
   mul_coeff_sign_5 = mul_coeff[5].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_6()
{
   mul_coeff_man_6 = mul_coeff[6].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_6()
{
   mul_coeff_exp_6 = mul_coeff[6].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_6()
{
   mul_coeff_sign_6 = mul_coeff[6].read().sign;
}
void bn_float32_wrapper::thread_mul_coeff_man_7()
{
   mul_coeff_man_7 = mul_coeff[7].read().man;
}
void bn_float32_wrapper::thread_mul_coeff_exp_7()
{
   mul_coeff_exp_7 = mul_coeff[7].read().exp;
}
void bn_float32_wrapper::thread_mul_coeff_sign_7()
{
   mul_coeff_sign_7 = mul_coeff[7].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_0()
{
   add_coeff_man_0 = add_coeff[0].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_0()
{
   add_coeff_exp_0 = add_coeff[0].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_0()
{
   add_coeff_sign_0 = add_coeff[0].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_1()
{
   add_coeff_man_1 = add_coeff[1].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_1()
{
   add_coeff_exp_1 = add_coeff[1].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_1()
{
   add_coeff_sign_1 = add_coeff[1].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_2()
{
   add_coeff_man_2 = add_coeff[2].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_2()
{
   add_coeff_exp_2 = add_coeff[2].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_2()
{
   add_coeff_sign_2 = add_coeff[2].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_3()
{
   add_coeff_man_3 = add_coeff[3].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_3()
{
   add_coeff_exp_3 = add_coeff[3].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_3()
{
   add_coeff_sign_3 = add_coeff[3].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_4()
{
   add_coeff_man_4 = add_coeff[4].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_4()
{
   add_coeff_exp_4 = add_coeff[4].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_4()
{
   add_coeff_sign_4 = add_coeff[4].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_5()
{
   add_coeff_man_5 = add_coeff[5].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_5()
{
   add_coeff_exp_5 = add_coeff[5].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_5()
{
   add_coeff_sign_5 = add_coeff[5].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_6()
{
   add_coeff_man_6 = add_coeff[6].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_6()
{
   add_coeff_exp_6 = add_coeff[6].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_6()
{
   add_coeff_sign_6 = add_coeff[6].read().sign;
}
void bn_float32_wrapper::thread_add_coeff_man_7()
{
   add_coeff_man_7 = add_coeff[7].read().man;
}
void bn_float32_wrapper::thread_add_coeff_exp_7()
{
   add_coeff_exp_7 = add_coeff[7].read().exp;
}
void bn_float32_wrapper::thread_add_coeff_sign_7()
{
   add_coeff_sign_7 = add_coeff[7].read().sign;
}
void bn_float32_wrapper::thread_dst_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_0.read();
   tmp.exp = dst_exp_0.read();
   tmp.sign = dst_sign_0.read();
   dst[0].write(tmp);
}
void bn_float32_wrapper::thread_dst_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_1.read();
   tmp.exp = dst_exp_1.read();
   tmp.sign = dst_sign_1.read();
   dst[1].write(tmp);
}
void bn_float32_wrapper::thread_dst_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_2.read();
   tmp.exp = dst_exp_2.read();
   tmp.sign = dst_sign_2.read();
   dst[2].write(tmp);
}
void bn_float32_wrapper::thread_dst_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_3.read();
   tmp.exp = dst_exp_3.read();
   tmp.sign = dst_sign_3.read();
   dst[3].write(tmp);
}
void bn_float32_wrapper::thread_dst_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_4.read();
   tmp.exp = dst_exp_4.read();
   tmp.sign = dst_sign_4.read();
   dst[4].write(tmp);
}
void bn_float32_wrapper::thread_dst_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_5.read();
   tmp.exp = dst_exp_5.read();
   tmp.sign = dst_sign_5.read();
   dst[5].write(tmp);
}
void bn_float32_wrapper::thread_dst_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_6.read();
   tmp.exp = dst_exp_6.read();
   tmp.sign = dst_sign_6.read();
   dst[6].write(tmp);
}
void bn_float32_wrapper::thread_dst_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_7.read();
   tmp.exp = dst_exp_7.read();
   tmp.sign = dst_sign_7.read();
   dst[7].write(tmp);
}


void bn_float32_wrapper::InitInstances(  )
{
	
            
    bn_float320 = new bn_float32( "bn_float32" );

    bn_float320->clk(clk);
    bn_float320->rstn(rstn);
    bn_float320->enable(enable);
    bn_float320->src_valid(src_valid);
    bn_float320->src_man_0(src_man_0);
    bn_float320->src_exp_0(src_exp_0);
    bn_float320->src_sign_0(src_sign_0);
    bn_float320->src_man_1(src_man_1);
    bn_float320->src_exp_1(src_exp_1);
    bn_float320->src_sign_1(src_sign_1);
    bn_float320->src_man_2(src_man_2);
    bn_float320->src_exp_2(src_exp_2);
    bn_float320->src_sign_2(src_sign_2);
    bn_float320->src_man_3(src_man_3);
    bn_float320->src_exp_3(src_exp_3);
    bn_float320->src_sign_3(src_sign_3);
    bn_float320->src_man_4(src_man_4);
    bn_float320->src_exp_4(src_exp_4);
    bn_float320->src_sign_4(src_sign_4);
    bn_float320->src_man_5(src_man_5);
    bn_float320->src_exp_5(src_exp_5);
    bn_float320->src_sign_5(src_sign_5);
    bn_float320->src_man_6(src_man_6);
    bn_float320->src_exp_6(src_exp_6);
    bn_float320->src_sign_6(src_sign_6);
    bn_float320->src_man_7(src_man_7);
    bn_float320->src_exp_7(src_exp_7);
    bn_float320->src_sign_7(src_sign_7);
    bn_float320->mul_coeff_man_0(mul_coeff_man_0);
    bn_float320->mul_coeff_exp_0(mul_coeff_exp_0);
    bn_float320->mul_coeff_sign_0(mul_coeff_sign_0);
    bn_float320->mul_coeff_man_1(mul_coeff_man_1);
    bn_float320->mul_coeff_exp_1(mul_coeff_exp_1);
    bn_float320->mul_coeff_sign_1(mul_coeff_sign_1);
    bn_float320->mul_coeff_man_2(mul_coeff_man_2);
    bn_float320->mul_coeff_exp_2(mul_coeff_exp_2);
    bn_float320->mul_coeff_sign_2(mul_coeff_sign_2);
    bn_float320->mul_coeff_man_3(mul_coeff_man_3);
    bn_float320->mul_coeff_exp_3(mul_coeff_exp_3);
    bn_float320->mul_coeff_sign_3(mul_coeff_sign_3);
    bn_float320->mul_coeff_man_4(mul_coeff_man_4);
    bn_float320->mul_coeff_exp_4(mul_coeff_exp_4);
    bn_float320->mul_coeff_sign_4(mul_coeff_sign_4);
    bn_float320->mul_coeff_man_5(mul_coeff_man_5);
    bn_float320->mul_coeff_exp_5(mul_coeff_exp_5);
    bn_float320->mul_coeff_sign_5(mul_coeff_sign_5);
    bn_float320->mul_coeff_man_6(mul_coeff_man_6);
    bn_float320->mul_coeff_exp_6(mul_coeff_exp_6);
    bn_float320->mul_coeff_sign_6(mul_coeff_sign_6);
    bn_float320->mul_coeff_man_7(mul_coeff_man_7);
    bn_float320->mul_coeff_exp_7(mul_coeff_exp_7);
    bn_float320->mul_coeff_sign_7(mul_coeff_sign_7);
    bn_float320->add_coeff_man_0(add_coeff_man_0);
    bn_float320->add_coeff_exp_0(add_coeff_exp_0);
    bn_float320->add_coeff_sign_0(add_coeff_sign_0);
    bn_float320->add_coeff_man_1(add_coeff_man_1);
    bn_float320->add_coeff_exp_1(add_coeff_exp_1);
    bn_float320->add_coeff_sign_1(add_coeff_sign_1);
    bn_float320->add_coeff_man_2(add_coeff_man_2);
    bn_float320->add_coeff_exp_2(add_coeff_exp_2);
    bn_float320->add_coeff_sign_2(add_coeff_sign_2);
    bn_float320->add_coeff_man_3(add_coeff_man_3);
    bn_float320->add_coeff_exp_3(add_coeff_exp_3);
    bn_float320->add_coeff_sign_3(add_coeff_sign_3);
    bn_float320->add_coeff_man_4(add_coeff_man_4);
    bn_float320->add_coeff_exp_4(add_coeff_exp_4);
    bn_float320->add_coeff_sign_4(add_coeff_sign_4);
    bn_float320->add_coeff_man_5(add_coeff_man_5);
    bn_float320->add_coeff_exp_5(add_coeff_exp_5);
    bn_float320->add_coeff_sign_5(add_coeff_sign_5);
    bn_float320->add_coeff_man_6(add_coeff_man_6);
    bn_float320->add_coeff_exp_6(add_coeff_exp_6);
    bn_float320->add_coeff_sign_6(add_coeff_sign_6);
    bn_float320->add_coeff_man_7(add_coeff_man_7);
    bn_float320->add_coeff_exp_7(add_coeff_exp_7);
    bn_float320->add_coeff_sign_7(add_coeff_sign_7);
    bn_float320->dst_valid(dst_valid);
    bn_float320->dst_man_0(dst_man_0);
    bn_float320->dst_exp_0(dst_exp_0);
    bn_float320->dst_sign_0(dst_sign_0);
    bn_float320->dst_man_1(dst_man_1);
    bn_float320->dst_exp_1(dst_exp_1);
    bn_float320->dst_sign_1(dst_sign_1);
    bn_float320->dst_man_2(dst_man_2);
    bn_float320->dst_exp_2(dst_exp_2);
    bn_float320->dst_sign_2(dst_sign_2);
    bn_float320->dst_man_3(dst_man_3);
    bn_float320->dst_exp_3(dst_exp_3);
    bn_float320->dst_sign_3(dst_sign_3);
    bn_float320->dst_man_4(dst_man_4);
    bn_float320->dst_exp_4(dst_exp_4);
    bn_float320->dst_sign_4(dst_sign_4);
    bn_float320->dst_man_5(dst_man_5);
    bn_float320->dst_exp_5(dst_exp_5);
    bn_float320->dst_sign_5(dst_sign_5);
    bn_float320->dst_man_6(dst_man_6);
    bn_float320->dst_exp_6(dst_exp_6);
    bn_float320->dst_sign_6(dst_sign_6);
    bn_float320->dst_man_7(dst_man_7);
    bn_float320->dst_exp_7(dst_exp_7);
    bn_float320->dst_sign_7(dst_sign_7);

}

void bn_float32_wrapper::InitThreads()
{
    SC_METHOD(thread_src_man_0);
      sensitive << src[0];
    SC_METHOD(thread_src_exp_0);
      sensitive << src[0];
    SC_METHOD(thread_src_sign_0);
      sensitive << src[0];
    SC_METHOD(thread_src_man_1);
      sensitive << src[1];
    SC_METHOD(thread_src_exp_1);
      sensitive << src[1];
    SC_METHOD(thread_src_sign_1);
      sensitive << src[1];
    SC_METHOD(thread_src_man_2);
      sensitive << src[2];
    SC_METHOD(thread_src_exp_2);
      sensitive << src[2];
    SC_METHOD(thread_src_sign_2);
      sensitive << src[2];
    SC_METHOD(thread_src_man_3);
      sensitive << src[3];
    SC_METHOD(thread_src_exp_3);
      sensitive << src[3];
    SC_METHOD(thread_src_sign_3);
      sensitive << src[3];
    SC_METHOD(thread_src_man_4);
      sensitive << src[4];
    SC_METHOD(thread_src_exp_4);
      sensitive << src[4];
    SC_METHOD(thread_src_sign_4);
      sensitive << src[4];
    SC_METHOD(thread_src_man_5);
      sensitive << src[5];
    SC_METHOD(thread_src_exp_5);
      sensitive << src[5];
    SC_METHOD(thread_src_sign_5);
      sensitive << src[5];
    SC_METHOD(thread_src_man_6);
      sensitive << src[6];
    SC_METHOD(thread_src_exp_6);
      sensitive << src[6];
    SC_METHOD(thread_src_sign_6);
      sensitive << src[6];
    SC_METHOD(thread_src_man_7);
      sensitive << src[7];
    SC_METHOD(thread_src_exp_7);
      sensitive << src[7];
    SC_METHOD(thread_src_sign_7);
      sensitive << src[7];
    SC_METHOD(thread_mul_coeff_man_0);
      sensitive << mul_coeff[0];
    SC_METHOD(thread_mul_coeff_exp_0);
      sensitive << mul_coeff[0];
    SC_METHOD(thread_mul_coeff_sign_0);
      sensitive << mul_coeff[0];
    SC_METHOD(thread_mul_coeff_man_1);
      sensitive << mul_coeff[1];
    SC_METHOD(thread_mul_coeff_exp_1);
      sensitive << mul_coeff[1];
    SC_METHOD(thread_mul_coeff_sign_1);
      sensitive << mul_coeff[1];
    SC_METHOD(thread_mul_coeff_man_2);
      sensitive << mul_coeff[2];
    SC_METHOD(thread_mul_coeff_exp_2);
      sensitive << mul_coeff[2];
    SC_METHOD(thread_mul_coeff_sign_2);
      sensitive << mul_coeff[2];
    SC_METHOD(thread_mul_coeff_man_3);
      sensitive << mul_coeff[3];
    SC_METHOD(thread_mul_coeff_exp_3);
      sensitive << mul_coeff[3];
    SC_METHOD(thread_mul_coeff_sign_3);
      sensitive << mul_coeff[3];
    SC_METHOD(thread_mul_coeff_man_4);
      sensitive << mul_coeff[4];
    SC_METHOD(thread_mul_coeff_exp_4);
      sensitive << mul_coeff[4];
    SC_METHOD(thread_mul_coeff_sign_4);
      sensitive << mul_coeff[4];
    SC_METHOD(thread_mul_coeff_man_5);
      sensitive << mul_coeff[5];
    SC_METHOD(thread_mul_coeff_exp_5);
      sensitive << mul_coeff[5];
    SC_METHOD(thread_mul_coeff_sign_5);
      sensitive << mul_coeff[5];
    SC_METHOD(thread_mul_coeff_man_6);
      sensitive << mul_coeff[6];
    SC_METHOD(thread_mul_coeff_exp_6);
      sensitive << mul_coeff[6];
    SC_METHOD(thread_mul_coeff_sign_6);
      sensitive << mul_coeff[6];
    SC_METHOD(thread_mul_coeff_man_7);
      sensitive << mul_coeff[7];
    SC_METHOD(thread_mul_coeff_exp_7);
      sensitive << mul_coeff[7];
    SC_METHOD(thread_mul_coeff_sign_7);
      sensitive << mul_coeff[7];
    SC_METHOD(thread_add_coeff_man_0);
      sensitive << add_coeff[0];
    SC_METHOD(thread_add_coeff_exp_0);
      sensitive << add_coeff[0];
    SC_METHOD(thread_add_coeff_sign_0);
      sensitive << add_coeff[0];
    SC_METHOD(thread_add_coeff_man_1);
      sensitive << add_coeff[1];
    SC_METHOD(thread_add_coeff_exp_1);
      sensitive << add_coeff[1];
    SC_METHOD(thread_add_coeff_sign_1);
      sensitive << add_coeff[1];
    SC_METHOD(thread_add_coeff_man_2);
      sensitive << add_coeff[2];
    SC_METHOD(thread_add_coeff_exp_2);
      sensitive << add_coeff[2];
    SC_METHOD(thread_add_coeff_sign_2);
      sensitive << add_coeff[2];
    SC_METHOD(thread_add_coeff_man_3);
      sensitive << add_coeff[3];
    SC_METHOD(thread_add_coeff_exp_3);
      sensitive << add_coeff[3];
    SC_METHOD(thread_add_coeff_sign_3);
      sensitive << add_coeff[3];
    SC_METHOD(thread_add_coeff_man_4);
      sensitive << add_coeff[4];
    SC_METHOD(thread_add_coeff_exp_4);
      sensitive << add_coeff[4];
    SC_METHOD(thread_add_coeff_sign_4);
      sensitive << add_coeff[4];
    SC_METHOD(thread_add_coeff_man_5);
      sensitive << add_coeff[5];
    SC_METHOD(thread_add_coeff_exp_5);
      sensitive << add_coeff[5];
    SC_METHOD(thread_add_coeff_sign_5);
      sensitive << add_coeff[5];
    SC_METHOD(thread_add_coeff_man_6);
      sensitive << add_coeff[6];
    SC_METHOD(thread_add_coeff_exp_6);
      sensitive << add_coeff[6];
    SC_METHOD(thread_add_coeff_sign_6);
      sensitive << add_coeff[6];
    SC_METHOD(thread_add_coeff_man_7);
      sensitive << add_coeff[7];
    SC_METHOD(thread_add_coeff_exp_7);
      sensitive << add_coeff[7];
    SC_METHOD(thread_add_coeff_sign_7);
      sensitive << add_coeff[7];
    SC_METHOD(thread_dst_0);
      sensitive << dst_man_0;
      sensitive << dst_exp_0;
      sensitive << dst_sign_0;
    SC_METHOD(thread_dst_1);
      sensitive << dst_man_1;
      sensitive << dst_exp_1;
      sensitive << dst_sign_1;
    SC_METHOD(thread_dst_2);
      sensitive << dst_man_2;
      sensitive << dst_exp_2;
      sensitive << dst_sign_2;
    SC_METHOD(thread_dst_3);
      sensitive << dst_man_3;
      sensitive << dst_exp_3;
      sensitive << dst_sign_3;
    SC_METHOD(thread_dst_4);
      sensitive << dst_man_4;
      sensitive << dst_exp_4;
      sensitive << dst_sign_4;
    SC_METHOD(thread_dst_5);
      sensitive << dst_man_5;
      sensitive << dst_exp_5;
      sensitive << dst_sign_5;
    SC_METHOD(thread_dst_6);
      sensitive << dst_man_6;
      sensitive << dst_exp_6;
      sensitive << dst_sign_6;
    SC_METHOD(thread_dst_7);
      sensitive << dst_man_7;
      sensitive << dst_exp_7;
      sensitive << dst_sign_7;

}

void bn_float32_wrapper::DeleteInstances()
{
    if (bn_float320)
    {
        delete bn_float320;
        bn_float320 = 0;
    }
}

