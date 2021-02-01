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
* block called "fp_cmp". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"fp_cmp_sc_wrap.h"
#include	"fp_cmp_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports
void fp_cmp_wrapper::thread_a_man()
{
   a_man = a.read().man;
}
void fp_cmp_wrapper::thread_a_exp()
{
   a_exp = a.read().exp;
}
void fp_cmp_wrapper::thread_a_sign()
{
   a_sign = a.read().sign;
}
void fp_cmp_wrapper::thread_b_man()
{
   b_man = b.read().man;
}
void fp_cmp_wrapper::thread_b_exp()
{
   b_exp = b.read().exp;
}
void fp_cmp_wrapper::thread_b_sign()
{
   b_sign = b.read().sign;
}
void fp_cmp_wrapper::thread_r()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = r_man.read();
   tmp.exp = r_exp.read();
   tmp.sign = r_sign.read();
   r.write(tmp);
}


void fp_cmp_wrapper::InitInstances(  )
{
	
            
    fp_cmp0 = new fp_cmp( "fp_cmp" );

    fp_cmp0->clk(clk);
    fp_cmp0->rstn(rstn);
    fp_cmp0->enable(enable);
    fp_cmp0->src_valid(src_valid);
    fp_cmp0->a_man(a_man);
    fp_cmp0->a_exp(a_exp);
    fp_cmp0->a_sign(a_sign);
    fp_cmp0->b_man(b_man);
    fp_cmp0->b_exp(b_exp);
    fp_cmp0->b_sign(b_sign);
    fp_cmp0->r_man(r_man);
    fp_cmp0->r_exp(r_exp);
    fp_cmp0->r_sign(r_sign);
    fp_cmp0->dst_valid(dst_valid);

}

void fp_cmp_wrapper::InitThreads()
{
    SC_METHOD(thread_a_man);
      sensitive << a;
    SC_METHOD(thread_a_exp);
      sensitive << a;
    SC_METHOD(thread_a_sign);
      sensitive << a;
    SC_METHOD(thread_b_man);
      sensitive << b;
    SC_METHOD(thread_b_exp);
      sensitive << b;
    SC_METHOD(thread_b_sign);
      sensitive << b;
    SC_METHOD(thread_r);
      sensitive << r_man;
      sensitive << r_exp;
      sensitive << r_sign;

}

void fp_cmp_wrapper::DeleteInstances()
{
    if (fp_cmp0)
    {
        delete fp_cmp0;
        fp_cmp0 = 0;
    }
}

