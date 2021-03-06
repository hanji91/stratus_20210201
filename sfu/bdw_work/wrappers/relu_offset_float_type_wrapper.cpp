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
* This file contains the relu_offset_float_type_wrapper module
* for use in the verilog verification wrapper relu_offset_float_vlwrapper.v
* It creats an instance of the relu_offset_float module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "relu_offset_float_type_wrapper.h"


SC_MODULE_EXPORT(relu_offset_float_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void relu_offset_float_type_wrapper::thread_src_0()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_0.read();
   tmp.exp = src_exp_0.read();
   tmp.sign = src_sign_0.read();
   src[0].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_1()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_1.read();
   tmp.exp = src_exp_1.read();
   tmp.sign = src_sign_1.read();
   src[1].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_2()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_2.read();
   tmp.exp = src_exp_2.read();
   tmp.sign = src_sign_2.read();
   src[2].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_3()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_3.read();
   tmp.exp = src_exp_3.read();
   tmp.sign = src_sign_3.read();
   src[3].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_4()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_4.read();
   tmp.exp = src_exp_4.read();
   tmp.sign = src_sign_4.read();
   src[4].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_5()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_5.read();
   tmp.exp = src_exp_5.read();
   tmp.sign = src_sign_5.read();
   src[5].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_6()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_6.read();
   tmp.exp = src_exp_6.read();
   tmp.sign = src_sign_6.read();
   src[6].write(tmp);
}
void relu_offset_float_type_wrapper::thread_src_7()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = src_man_7.read();
   tmp.exp = src_exp_7.read();
   tmp.sign = src_sign_7.read();
   src[7].write(tmp);
}
void relu_offset_float_type_wrapper::thread_offset()
{
   cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > tmp;
   tmp.man = offset_man.read();
   tmp.exp = offset_exp.read();
   tmp.sign = offset_sign.read();
   offset.write(tmp);
}
void relu_offset_float_type_wrapper::thread_dst_man_0()
{
   dst_man_0 = dst[0].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_0()
{
   dst_exp_0 = dst[0].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_0()
{
   dst_sign_0 = dst[0].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_1()
{
   dst_man_1 = dst[1].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_1()
{
   dst_exp_1 = dst[1].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_1()
{
   dst_sign_1 = dst[1].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_2()
{
   dst_man_2 = dst[2].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_2()
{
   dst_exp_2 = dst[2].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_2()
{
   dst_sign_2 = dst[2].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_3()
{
   dst_man_3 = dst[3].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_3()
{
   dst_exp_3 = dst[3].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_3()
{
   dst_sign_3 = dst[3].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_4()
{
   dst_man_4 = dst[4].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_4()
{
   dst_exp_4 = dst[4].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_4()
{
   dst_sign_4 = dst[4].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_5()
{
   dst_man_5 = dst[5].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_5()
{
   dst_exp_5 = dst[5].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_5()
{
   dst_sign_5 = dst[5].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_6()
{
   dst_man_6 = dst[6].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_6()
{
   dst_exp_6 = dst[6].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_6()
{
   dst_sign_6 = dst[6].read().sign;
}
void relu_offset_float_type_wrapper::thread_dst_man_7()
{
   dst_man_7 = dst[7].read().man;
}
void relu_offset_float_type_wrapper::thread_dst_exp_7()
{
   dst_exp_7 = dst[7].read().exp;
}
void relu_offset_float_type_wrapper::thread_dst_sign_7()
{
   dst_sign_7 = dst[7].read().sign;
}


void relu_offset_float_type_wrapper::InitInstances()
{
    relu_offset_float0 = new relu_offset_float( "relu_offset_float" );

    relu_offset_float0->clk(clk);
    relu_offset_float0->rstn(rstn);
    relu_offset_float0->enable(enable);
    relu_offset_float0->src_valid(src_valid);
    relu_offset_float0->src[0](src[0]);
    relu_offset_float0->src[1](src[1]);
    relu_offset_float0->src[2](src[2]);
    relu_offset_float0->src[3](src[3]);
    relu_offset_float0->src[4](src[4]);
    relu_offset_float0->src[5](src[5]);
    relu_offset_float0->src[6](src[6]);
    relu_offset_float0->src[7](src[7]);
    relu_offset_float0->offset(offset);
    relu_offset_float0->dst_valid(dst_valid);
    relu_offset_float0->dst[0](dst[0]);
    relu_offset_float0->dst[1](dst[1]);
    relu_offset_float0->dst[2](dst[2]);
    relu_offset_float0->dst[3](dst[3]);
    relu_offset_float0->dst[4](dst[4]);
    relu_offset_float0->dst[5](dst[5]);
    relu_offset_float0->dst[6](dst[6]);
    relu_offset_float0->dst[7](dst[7]);

}

void relu_offset_float_type_wrapper::InitThreads()
{
    SC_METHOD(thread_src_0);
      sensitive << src_man_0;
      sensitive << src_exp_0;
      sensitive << src_sign_0;
    SC_METHOD(thread_src_1);
      sensitive << src_man_1;
      sensitive << src_exp_1;
      sensitive << src_sign_1;
    SC_METHOD(thread_src_2);
      sensitive << src_man_2;
      sensitive << src_exp_2;
      sensitive << src_sign_2;
    SC_METHOD(thread_src_3);
      sensitive << src_man_3;
      sensitive << src_exp_3;
      sensitive << src_sign_3;
    SC_METHOD(thread_src_4);
      sensitive << src_man_4;
      sensitive << src_exp_4;
      sensitive << src_sign_4;
    SC_METHOD(thread_src_5);
      sensitive << src_man_5;
      sensitive << src_exp_5;
      sensitive << src_sign_5;
    SC_METHOD(thread_src_6);
      sensitive << src_man_6;
      sensitive << src_exp_6;
      sensitive << src_sign_6;
    SC_METHOD(thread_src_7);
      sensitive << src_man_7;
      sensitive << src_exp_7;
      sensitive << src_sign_7;
    SC_METHOD(thread_offset);
      sensitive << offset_man;
      sensitive << offset_exp;
      sensitive << offset_sign;
    SC_METHOD(thread_dst_man_0);
      sensitive << dst[0];
    SC_METHOD(thread_dst_exp_0);
      sensitive << dst[0];
    SC_METHOD(thread_dst_sign_0);
      sensitive << dst[0];
    SC_METHOD(thread_dst_man_1);
      sensitive << dst[1];
    SC_METHOD(thread_dst_exp_1);
      sensitive << dst[1];
    SC_METHOD(thread_dst_sign_1);
      sensitive << dst[1];
    SC_METHOD(thread_dst_man_2);
      sensitive << dst[2];
    SC_METHOD(thread_dst_exp_2);
      sensitive << dst[2];
    SC_METHOD(thread_dst_sign_2);
      sensitive << dst[2];
    SC_METHOD(thread_dst_man_3);
      sensitive << dst[3];
    SC_METHOD(thread_dst_exp_3);
      sensitive << dst[3];
    SC_METHOD(thread_dst_sign_3);
      sensitive << dst[3];
    SC_METHOD(thread_dst_man_4);
      sensitive << dst[4];
    SC_METHOD(thread_dst_exp_4);
      sensitive << dst[4];
    SC_METHOD(thread_dst_sign_4);
      sensitive << dst[4];
    SC_METHOD(thread_dst_man_5);
      sensitive << dst[5];
    SC_METHOD(thread_dst_exp_5);
      sensitive << dst[5];
    SC_METHOD(thread_dst_sign_5);
      sensitive << dst[5];
    SC_METHOD(thread_dst_man_6);
      sensitive << dst[6];
    SC_METHOD(thread_dst_exp_6);
      sensitive << dst[6];
    SC_METHOD(thread_dst_sign_6);
      sensitive << dst[6];
    SC_METHOD(thread_dst_man_7);
      sensitive << dst[7];
    SC_METHOD(thread_dst_exp_7);
      sensitive << dst[7];
    SC_METHOD(thread_dst_sign_7);
      sensitive << dst[7];

}

void relu_offset_float_type_wrapper::DeleteInstances()
{
        delete relu_offset_float0;
        relu_offset_float0 = 0;
}

