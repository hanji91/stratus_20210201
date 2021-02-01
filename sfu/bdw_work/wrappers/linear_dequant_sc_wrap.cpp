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
* block called "linear_dequant". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"linear_dequant_sc_wrap.h"
#include	"linear_dequant_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports
void linear_dequant_wrapper::thread_src_man_0()
{
   src_man_0 = src[0].read().man;
}
void linear_dequant_wrapper::thread_src_exp_0()
{
   src_exp_0 = src[0].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_0()
{
   src_sign_0 = src[0].read().sign;
}
void linear_dequant_wrapper::thread_src_man_1()
{
   src_man_1 = src[1].read().man;
}
void linear_dequant_wrapper::thread_src_exp_1()
{
   src_exp_1 = src[1].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_1()
{
   src_sign_1 = src[1].read().sign;
}
void linear_dequant_wrapper::thread_src_man_2()
{
   src_man_2 = src[2].read().man;
}
void linear_dequant_wrapper::thread_src_exp_2()
{
   src_exp_2 = src[2].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_2()
{
   src_sign_2 = src[2].read().sign;
}
void linear_dequant_wrapper::thread_src_man_3()
{
   src_man_3 = src[3].read().man;
}
void linear_dequant_wrapper::thread_src_exp_3()
{
   src_exp_3 = src[3].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_3()
{
   src_sign_3 = src[3].read().sign;
}
void linear_dequant_wrapper::thread_src_man_4()
{
   src_man_4 = src[4].read().man;
}
void linear_dequant_wrapper::thread_src_exp_4()
{
   src_exp_4 = src[4].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_4()
{
   src_sign_4 = src[4].read().sign;
}
void linear_dequant_wrapper::thread_src_man_5()
{
   src_man_5 = src[5].read().man;
}
void linear_dequant_wrapper::thread_src_exp_5()
{
   src_exp_5 = src[5].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_5()
{
   src_sign_5 = src[5].read().sign;
}
void linear_dequant_wrapper::thread_src_man_6()
{
   src_man_6 = src[6].read().man;
}
void linear_dequant_wrapper::thread_src_exp_6()
{
   src_exp_6 = src[6].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_6()
{
   src_sign_6 = src[6].read().sign;
}
void linear_dequant_wrapper::thread_src_man_7()
{
   src_man_7 = src[7].read().man;
}
void linear_dequant_wrapper::thread_src_exp_7()
{
   src_exp_7 = src[7].read().exp;
}
void linear_dequant_wrapper::thread_src_sign_7()
{
   src_sign_7 = src[7].read().sign;
}
void linear_dequant_wrapper::thread_divisor_man()
{
   divisor_man = divisor.read().man;
}
void linear_dequant_wrapper::thread_divisor_exp()
{
   divisor_exp = divisor.read().exp;
}
void linear_dequant_wrapper::thread_divisor_sign()
{
   divisor_sign = divisor.read().sign;
}
void linear_dequant_wrapper::thread_dst_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_0.read();
   tmp.exp = dst_exp_0.read();
   tmp.sign = dst_sign_0.read();
   dst[0].write(tmp);
}
void linear_dequant_wrapper::thread_dst_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_1.read();
   tmp.exp = dst_exp_1.read();
   tmp.sign = dst_sign_1.read();
   dst[1].write(tmp);
}
void linear_dequant_wrapper::thread_dst_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_2.read();
   tmp.exp = dst_exp_2.read();
   tmp.sign = dst_sign_2.read();
   dst[2].write(tmp);
}
void linear_dequant_wrapper::thread_dst_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_3.read();
   tmp.exp = dst_exp_3.read();
   tmp.sign = dst_sign_3.read();
   dst[3].write(tmp);
}
void linear_dequant_wrapper::thread_dst_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_4.read();
   tmp.exp = dst_exp_4.read();
   tmp.sign = dst_sign_4.read();
   dst[4].write(tmp);
}
void linear_dequant_wrapper::thread_dst_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_5.read();
   tmp.exp = dst_exp_5.read();
   tmp.sign = dst_sign_5.read();
   dst[5].write(tmp);
}
void linear_dequant_wrapper::thread_dst_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_6.read();
   tmp.exp = dst_exp_6.read();
   tmp.sign = dst_sign_6.read();
   dst[6].write(tmp);
}
void linear_dequant_wrapper::thread_dst_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = dst_man_7.read();
   tmp.exp = dst_exp_7.read();
   tmp.sign = dst_sign_7.read();
   dst[7].write(tmp);
}


void linear_dequant_wrapper::InitInstances(  )
{
	
            
    linear_dequant0 = new linear_dequant( "linear_dequant" );

    linear_dequant0->clk(clk);
    linear_dequant0->rstn(rstn);
    linear_dequant0->enable(enable);
    linear_dequant0->src_valid(src_valid);
    linear_dequant0->src_man_0(src_man_0);
    linear_dequant0->src_exp_0(src_exp_0);
    linear_dequant0->src_sign_0(src_sign_0);
    linear_dequant0->src_man_1(src_man_1);
    linear_dequant0->src_exp_1(src_exp_1);
    linear_dequant0->src_sign_1(src_sign_1);
    linear_dequant0->src_man_2(src_man_2);
    linear_dequant0->src_exp_2(src_exp_2);
    linear_dequant0->src_sign_2(src_sign_2);
    linear_dequant0->src_man_3(src_man_3);
    linear_dequant0->src_exp_3(src_exp_3);
    linear_dequant0->src_sign_3(src_sign_3);
    linear_dequant0->src_man_4(src_man_4);
    linear_dequant0->src_exp_4(src_exp_4);
    linear_dequant0->src_sign_4(src_sign_4);
    linear_dequant0->src_man_5(src_man_5);
    linear_dequant0->src_exp_5(src_exp_5);
    linear_dequant0->src_sign_5(src_sign_5);
    linear_dequant0->src_man_6(src_man_6);
    linear_dequant0->src_exp_6(src_exp_6);
    linear_dequant0->src_sign_6(src_sign_6);
    linear_dequant0->src_man_7(src_man_7);
    linear_dequant0->src_exp_7(src_exp_7);
    linear_dequant0->src_sign_7(src_sign_7);
    linear_dequant0->divisor_man(divisor_man);
    linear_dequant0->divisor_exp(divisor_exp);
    linear_dequant0->divisor_sign(divisor_sign);
    linear_dequant0->dst_valid(dst_valid);
    linear_dequant0->dst_man_0(dst_man_0);
    linear_dequant0->dst_exp_0(dst_exp_0);
    linear_dequant0->dst_sign_0(dst_sign_0);
    linear_dequant0->dst_man_1(dst_man_1);
    linear_dequant0->dst_exp_1(dst_exp_1);
    linear_dequant0->dst_sign_1(dst_sign_1);
    linear_dequant0->dst_man_2(dst_man_2);
    linear_dequant0->dst_exp_2(dst_exp_2);
    linear_dequant0->dst_sign_2(dst_sign_2);
    linear_dequant0->dst_man_3(dst_man_3);
    linear_dequant0->dst_exp_3(dst_exp_3);
    linear_dequant0->dst_sign_3(dst_sign_3);
    linear_dequant0->dst_man_4(dst_man_4);
    linear_dequant0->dst_exp_4(dst_exp_4);
    linear_dequant0->dst_sign_4(dst_sign_4);
    linear_dequant0->dst_man_5(dst_man_5);
    linear_dequant0->dst_exp_5(dst_exp_5);
    linear_dequant0->dst_sign_5(dst_sign_5);
    linear_dequant0->dst_man_6(dst_man_6);
    linear_dequant0->dst_exp_6(dst_exp_6);
    linear_dequant0->dst_sign_6(dst_sign_6);
    linear_dequant0->dst_man_7(dst_man_7);
    linear_dequant0->dst_exp_7(dst_exp_7);
    linear_dequant0->dst_sign_7(dst_sign_7);

}

void linear_dequant_wrapper::InitThreads()
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
    SC_METHOD(thread_divisor_man);
      sensitive << divisor;
    SC_METHOD(thread_divisor_exp);
      sensitive << divisor;
    SC_METHOD(thread_divisor_sign);
      sensitive << divisor;
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

void linear_dequant_wrapper::DeleteInstances()
{
    if (linear_dequant0)
    {
        delete linear_dequant0;
        linear_dequant0 = 0;
    }
}

