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
* This file contains the bias_add_type_wrapper module
* for use in the verilog verification wrapper bias_add_vlwrapper.v
* It creats an instance of the bias_add module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "bias_add_type_wrapper.h"


SC_MODULE_EXPORT(bias_add_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void bias_add_type_wrapper::thread_src_0()
{
   src[0] = src_0.read();
}
void bias_add_type_wrapper::thread_src_1()
{
   src[1] = src_1.read();
}
void bias_add_type_wrapper::thread_src_2()
{
   src[2] = src_2.read();
}
void bias_add_type_wrapper::thread_src_3()
{
   src[3] = src_3.read();
}
void bias_add_type_wrapper::thread_src_4()
{
   src[4] = src_4.read();
}
void bias_add_type_wrapper::thread_src_5()
{
   src[5] = src_5.read();
}
void bias_add_type_wrapper::thread_src_6()
{
   src[6] = src_6.read();
}
void bias_add_type_wrapper::thread_src_7()
{
   src[7] = src_7.read();
}
void bias_add_type_wrapper::thread_dst_0()
{
   sc_uint< 32 > tmp;
   tmp = dst[0].read();
   dst_0.write(tmp);
}
void bias_add_type_wrapper::thread_dst_1()
{
   sc_uint< 32 > tmp;
   tmp = dst[1].read();
   dst_1.write(tmp);
}
void bias_add_type_wrapper::thread_dst_2()
{
   sc_uint< 32 > tmp;
   tmp = dst[2].read();
   dst_2.write(tmp);
}
void bias_add_type_wrapper::thread_dst_3()
{
   sc_uint< 32 > tmp;
   tmp = dst[3].read();
   dst_3.write(tmp);
}
void bias_add_type_wrapper::thread_dst_4()
{
   sc_uint< 32 > tmp;
   tmp = dst[4].read();
   dst_4.write(tmp);
}
void bias_add_type_wrapper::thread_dst_5()
{
   sc_uint< 32 > tmp;
   tmp = dst[5].read();
   dst_5.write(tmp);
}
void bias_add_type_wrapper::thread_dst_6()
{
   sc_uint< 32 > tmp;
   tmp = dst[6].read();
   dst_6.write(tmp);
}
void bias_add_type_wrapper::thread_dst_7()
{
   sc_uint< 32 > tmp;
   tmp = dst[7].read();
   dst_7.write(tmp);
}


void bias_add_type_wrapper::InitInstances()
{
    bias_add0 = new bias_add( "bias_add" );

    bias_add0->clk(clk);
    bias_add0->rstn(rstn);
    bias_add0->enable(enable);
    bias_add0->src_valid(src_valid);
    bias_add0->src[0](src[0]);
    bias_add0->src[1](src[1]);
    bias_add0->src[2](src[2]);
    bias_add0->src[3](src[3]);
    bias_add0->src[4](src[4]);
    bias_add0->src[5](src[5]);
    bias_add0->src[6](src[6]);
    bias_add0->src[7](src[7]);
    bias_add0->bias_data(bias_data);
    bias_add0->dst_valid(dst_valid);
    bias_add0->dst[0](dst[0]);
    bias_add0->dst[1](dst[1]);
    bias_add0->dst[2](dst[2]);
    bias_add0->dst[3](dst[3]);
    bias_add0->dst[4](dst[4]);
    bias_add0->dst[5](dst[5]);
    bias_add0->dst[6](dst[6]);
    bias_add0->dst[7](dst[7]);

}

void bias_add_type_wrapper::InitThreads()
{
    SC_METHOD(thread_src_0);
      sensitive << src_0;
    SC_METHOD(thread_src_1);
      sensitive << src_1;
    SC_METHOD(thread_src_2);
      sensitive << src_2;
    SC_METHOD(thread_src_3);
      sensitive << src_3;
    SC_METHOD(thread_src_4);
      sensitive << src_4;
    SC_METHOD(thread_src_5);
      sensitive << src_5;
    SC_METHOD(thread_src_6);
      sensitive << src_6;
    SC_METHOD(thread_src_7);
      sensitive << src_7;
    SC_METHOD(thread_dst_0);
      sensitive << dst[0];
    SC_METHOD(thread_dst_1);
      sensitive << dst[1];
    SC_METHOD(thread_dst_2);
      sensitive << dst[2];
    SC_METHOD(thread_dst_3);
      sensitive << dst[3];
    SC_METHOD(thread_dst_4);
      sensitive << dst[4];
    SC_METHOD(thread_dst_5);
      sensitive << dst[5];
    SC_METHOD(thread_dst_6);
      sensitive << dst[6];
    SC_METHOD(thread_dst_7);
      sensitive << dst[7];

}

void bias_add_type_wrapper::DeleteInstances()
{
        delete bias_add0;
        bias_add0 = 0;
}

