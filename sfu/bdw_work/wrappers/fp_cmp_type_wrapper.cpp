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
* This file contains the fp_cmp_type_wrapper module
* for use in the verilog verification wrapper fp_cmp_vlwrapper.v
* It creats an instance of the fp_cmp module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "fp_cmp_type_wrapper.h"


SC_MODULE_EXPORT(fp_cmp_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void fp_cmp_type_wrapper::thread_a()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = a_man.read();
   tmp.exp = a_exp.read();
   tmp.sign = a_sign.read();
   a.write(tmp);
}
void fp_cmp_type_wrapper::thread_b()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = b_man.read();
   tmp.exp = b_exp.read();
   tmp.sign = b_sign.read();
   b.write(tmp);
}
void fp_cmp_type_wrapper::thread_r_man()
{
   r_man = r.read().man;
}
void fp_cmp_type_wrapper::thread_r_exp()
{
   r_exp = r.read().exp;
}
void fp_cmp_type_wrapper::thread_r_sign()
{
   r_sign = r.read().sign;
}


void fp_cmp_type_wrapper::InitInstances()
{
    fp_cmp0 = new fp_cmp( "fp_cmp" );

    fp_cmp0->clk(clk);
    fp_cmp0->rstn(rstn);
    fp_cmp0->enable(enable);
    fp_cmp0->src_valid(src_valid);
    fp_cmp0->a(a);
    fp_cmp0->b(b);
    fp_cmp0->r(r);
    fp_cmp0->dst_valid(dst_valid);

}

void fp_cmp_type_wrapper::InitThreads()
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

void fp_cmp_type_wrapper::DeleteInstances()
{
        delete fp_cmp0;
        fp_cmp0 = 0;
}

