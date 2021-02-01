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
* block called "fp_add". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"fp_add_sc_wrap.h"
#include	"fp_add_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports
void fp_add_wrapper::thread_a_man()
{
   a_man = a.read().man;
}
void fp_add_wrapper::thread_a_exp()
{
   a_exp = a.read().exp;
}
void fp_add_wrapper::thread_a_sign()
{
   a_sign = a.read().sign;
}
void fp_add_wrapper::thread_b_man()
{
   b_man = b.read().man;
}
void fp_add_wrapper::thread_b_exp()
{
   b_exp = b.read().exp;
}
void fp_add_wrapper::thread_b_sign()
{
   b_sign = b.read().sign;
}
void fp_add_wrapper::thread_r()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = r_man.read();
   tmp.exp = r_exp.read();
   tmp.sign = r_sign.read();
   r.write(tmp);
}


void fp_add_wrapper::InitInstances(  )
{
	
            
    fp_add0 = new fp_add( "fp_add" );

    fp_add0->clk(clk);
    fp_add0->rstn(rstn);
    fp_add0->src_valid(src_valid);
    fp_add0->a_man(a_man);
    fp_add0->a_exp(a_exp);
    fp_add0->a_sign(a_sign);
    fp_add0->b_man(b_man);
    fp_add0->b_exp(b_exp);
    fp_add0->b_sign(b_sign);
    fp_add0->r_man(r_man);
    fp_add0->r_exp(r_exp);
    fp_add0->r_sign(r_sign);
    fp_add0->dst_valid(dst_valid);

}

void fp_add_wrapper::InitThreads()
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

void fp_add_wrapper::DeleteInstances()
{
    if (fp_add0)
    {
        delete fp_add0;
        fp_add0 = 0;
    }
}

