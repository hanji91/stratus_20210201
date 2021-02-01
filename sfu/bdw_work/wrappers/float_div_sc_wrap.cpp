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
* block called "float_div". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"float_div_sc_wrap.h"
#include	"float_div_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports
void float_div_wrapper::thread_a_man()
{
   a_man = a.read().man;
}
void float_div_wrapper::thread_a_exp()
{
   a_exp = a.read().exp;
}
void float_div_wrapper::thread_a_sign()
{
   a_sign = a.read().sign;
}
void float_div_wrapper::thread_b_man()
{
   b_man = b.read().man;
}
void float_div_wrapper::thread_b_exp()
{
   b_exp = b.read().exp;
}
void float_div_wrapper::thread_b_sign()
{
   b_sign = b.read().sign;
}
void float_div_wrapper::thread_r()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = r_man.read();
   tmp.exp = r_exp.read();
   tmp.sign = r_sign.read();
   r.write(tmp);
}


void float_div_wrapper::InitInstances(  )
{
	
            
    float_div0 = new float_div( "float_div" );

    float_div0->clk(clk);
    float_div0->rstn(rstn);
    float_div0->enable(enable);
    float_div0->a_man(a_man);
    float_div0->a_exp(a_exp);
    float_div0->a_sign(a_sign);
    float_div0->b_man(b_man);
    float_div0->b_exp(b_exp);
    float_div0->b_sign(b_sign);
    float_div0->r_man(r_man);
    float_div0->r_exp(r_exp);
    float_div0->r_sign(r_sign);

}

void float_div_wrapper::InitThreads()
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

void float_div_wrapper::DeleteInstances()
{
    if (float_div0)
    {
        delete float_div0;
        float_div0 = 0;
    }
}

