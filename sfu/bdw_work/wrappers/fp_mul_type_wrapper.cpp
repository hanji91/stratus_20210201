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
* This file contains the fp_mul_type_wrapper module
* for use in the verilog verification wrapper fp_mul_vlwrapper.v
* It creats an instance of the fp_mul module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "fp_mul_type_wrapper.h"


SC_MODULE_EXPORT(fp_mul_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void fp_mul_type_wrapper::thread_a()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = a_man.read();
   tmp.exp = a_exp.read();
   tmp.sign = a_sign.read();
   a.write(tmp);
}
void fp_mul_type_wrapper::thread_b()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = b_man.read();
   tmp.exp = b_exp.read();
   tmp.sign = b_sign.read();
   b.write(tmp);
}
void fp_mul_type_wrapper::thread_r_man()
{
   r_man = r.read().man;
}
void fp_mul_type_wrapper::thread_r_exp()
{
   r_exp = r.read().exp;
}
void fp_mul_type_wrapper::thread_r_sign()
{
   r_sign = r.read().sign;
}


void fp_mul_type_wrapper::InitInstances()
{
    fp_mul0 = new fp_mul( "fp_mul" );

    fp_mul0->clk(clk);
    fp_mul0->rstn(rstn);
    fp_mul0->src_valid(src_valid);
    fp_mul0->a(a);
    fp_mul0->b(b);
    fp_mul0->r(r);
    fp_mul0->dst_valid(dst_valid);

}

void fp_mul_type_wrapper::InitThreads()
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

void fp_mul_type_wrapper::DeleteInstances()
{
        delete fp_mul0;
        fp_mul0 = 0;
}

