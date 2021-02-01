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
* This file contains the float_div_type_wrapper module
* for use in the verilog verification wrapper float_div_vlwrapper.v
* It creats an instance of the float_div module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "float_div_type_wrapper.h"


SC_MODULE_EXPORT(float_div_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void float_div_type_wrapper::thread_a()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = a_man.read();
   tmp.exp = a_exp.read();
   tmp.sign = a_sign.read();
   a.write(tmp);
}
void float_div_type_wrapper::thread_b()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = b_man.read();
   tmp.exp = b_exp.read();
   tmp.sign = b_sign.read();
   b.write(tmp);
}
void float_div_type_wrapper::thread_r_man()
{
   r_man = r.read().man;
}
void float_div_type_wrapper::thread_r_exp()
{
   r_exp = r.read().exp;
}
void float_div_type_wrapper::thread_r_sign()
{
   r_sign = r.read().sign;
}


void float_div_type_wrapper::InitInstances()
{
    float_div0 = new float_div( "float_div" );

    float_div0->clk(clk);
    float_div0->rstn(rstn);
    float_div0->enable(enable);
    float_div0->a(a);
    float_div0->b(b);
    float_div0->r(r);

}

void float_div_type_wrapper::InitThreads()
{
    SC_METHOD(thread_a);
      sensitive << a_man;
      sensitive << a_exp;
      sensitive << a_sign;
    SC_METHOD(thread_b);
      sensitive << b_man;
      sensitive << b_exp;
      sensitive << b_sign;
    SC_METHOD(thread_r_man);
      sensitive << r;
    SC_METHOD(thread_r_exp);
      sensitive << r;
    SC_METHOD(thread_r_sign);
      sensitive << r;

}

void float_div_type_wrapper::DeleteInstances()
{
        delete float_div0;
        float_div0 = 0;
}

