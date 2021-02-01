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
* This file contains the m_float2fix_type_wrapper module
* for use in the verilog verification wrapper m_float2fix_vlwrapper.v
* It creats an instance of the m_float2fix module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "m_float2fix_type_wrapper.h"


SC_MODULE_EXPORT(m_float2fix_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void m_float2fix_type_wrapper::thread_src_0()
{
   src[0] = src_0.read();
}
void m_float2fix_type_wrapper::thread_src_1()
{
   src[1] = src_1.read();
}
void m_float2fix_type_wrapper::thread_src_2()
{
   src[2] = src_2.read();
}
void m_float2fix_type_wrapper::thread_src_3()
{
   src[3] = src_3.read();
}
void m_float2fix_type_wrapper::thread_src_4()
{
   src[4] = src_4.read();
}
void m_float2fix_type_wrapper::thread_src_5()
{
   src[5] = src_5.read();
}
void m_float2fix_type_wrapper::thread_src_6()
{
   src[6] = src_6.read();
}
void m_float2fix_type_wrapper::thread_src_7()
{
   src[7] = src_7.read();
}
void m_float2fix_type_wrapper::thread_dst_0()
{
   sc_uint< 32 > tmp;
   tmp = dst[0].read();
   dst_0.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_1()
{
   sc_uint< 32 > tmp;
   tmp = dst[1].read();
   dst_1.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_2()
{
   sc_uint< 32 > tmp;
   tmp = dst[2].read();
   dst_2.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_3()
{
   sc_uint< 32 > tmp;
   tmp = dst[3].read();
   dst_3.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_4()
{
   sc_uint< 32 > tmp;
   tmp = dst[4].read();
   dst_4.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_5()
{
   sc_uint< 32 > tmp;
   tmp = dst[5].read();
   dst_5.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_6()
{
   sc_uint< 32 > tmp;
   tmp = dst[6].read();
   dst_6.write(tmp);
}
void m_float2fix_type_wrapper::thread_dst_7()
{
   sc_uint< 32 > tmp;
   tmp = dst[7].read();
   dst_7.write(tmp);
}


void m_float2fix_type_wrapper::InitInstances()
{
    m_float2fix0 = new m_float2fix( "m_float2fix" );

    m_float2fix0->clk(clk);
    m_float2fix0->rstn(rstn);
    m_float2fix0->src_valid(src_valid);
    m_float2fix0->src[0](src[0]);
    m_float2fix0->src[1](src[1]);
    m_float2fix0->src[2](src[2]);
    m_float2fix0->src[3](src[3]);
    m_float2fix0->src[4](src[4]);
    m_float2fix0->src[5](src[5]);
    m_float2fix0->src[6](src[6]);
    m_float2fix0->src[7](src[7]);
    m_float2fix0->dst_valid(dst_valid);
    m_float2fix0->dst[0](dst[0]);
    m_float2fix0->dst[1](dst[1]);
    m_float2fix0->dst[2](dst[2]);
    m_float2fix0->dst[3](dst[3]);
    m_float2fix0->dst[4](dst[4]);
    m_float2fix0->dst[5](dst[5]);
    m_float2fix0->dst[6](dst[6]);
    m_float2fix0->dst[7](dst[7]);

}

void m_float2fix_type_wrapper::InitThreads()
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

void m_float2fix_type_wrapper::DeleteInstances()
{
        delete m_float2fix0;
        m_float2fix0 = 0;
}

