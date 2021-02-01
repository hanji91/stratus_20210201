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
* This file contains the sfu_out_buff_type_wrapper module
* for use in the verilog verification wrapper sfu_out_buff_vlwrapper.v
* It creats an instance of the sfu_out_buff module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "sfu_out_buff_type_wrapper.h"


SC_MODULE_EXPORT(sfu_out_buff_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void sfu_out_buff_type_wrapper::thread_in0_data_0()
{
   in0_data[0] = in0_data_0.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_1()
{
   in0_data[1] = in0_data_1.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_2()
{
   in0_data[2] = in0_data_2.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_3()
{
   in0_data[3] = in0_data_3.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_4()
{
   in0_data[4] = in0_data_4.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_5()
{
   in0_data[5] = in0_data_5.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_6()
{
   in0_data[6] = in0_data_6.read();
}
void sfu_out_buff_type_wrapper::thread_in0_data_7()
{
   in0_data[7] = in0_data_7.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_0()
{
   in1_data[0] = in1_data_0.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_1()
{
   in1_data[1] = in1_data_1.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_2()
{
   in1_data[2] = in1_data_2.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_3()
{
   in1_data[3] = in1_data_3.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_4()
{
   in1_data[4] = in1_data_4.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_5()
{
   in1_data[5] = in1_data_5.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_6()
{
   in1_data[6] = in1_data_6.read();
}
void sfu_out_buff_type_wrapper::thread_in1_data_7()
{
   in1_data[7] = in1_data_7.read();
}


void sfu_out_buff_type_wrapper::InitInstances()
{
    sfu_out_buff0 = new sfu_out_buff( "sfu_out_buff" );

    sfu_out_buff0->clk(clk);
    sfu_out_buff0->rstn(rstn);
    sfu_out_buff0->enable(enable);
    sfu_out_buff0->learned_clip_en(learned_clip_en);
    sfu_out_buff0->in0_data[0](in0_data[0]);
    sfu_out_buff0->in0_data[1](in0_data[1]);
    sfu_out_buff0->in0_data[2](in0_data[2]);
    sfu_out_buff0->in0_data[3](in0_data[3]);
    sfu_out_buff0->in0_data[4](in0_data[4]);
    sfu_out_buff0->in0_data[5](in0_data[5]);
    sfu_out_buff0->in0_data[6](in0_data[6]);
    sfu_out_buff0->in0_data[7](in0_data[7]);
    sfu_out_buff0->in0_data_valid(in0_data_valid);
    sfu_out_buff0->in1_data[0](in1_data[0]);
    sfu_out_buff0->in1_data[1](in1_data[1]);
    sfu_out_buff0->in1_data[2](in1_data[2]);
    sfu_out_buff0->in1_data[3](in1_data[3]);
    sfu_out_buff0->in1_data[4](in1_data[4]);
    sfu_out_buff0->in1_data[5](in1_data[5]);
    sfu_out_buff0->in1_data[6](in1_data[6]);
    sfu_out_buff0->in1_data[7](in1_data[7]);
    sfu_out_buff0->in1_data_valid(in1_data_valid);
    sfu_out_buff0->out_data(out_data);
    sfu_out_buff0->out_data_valid(out_data_valid);

}

void sfu_out_buff_type_wrapper::InitThreads()
{
    SC_METHOD(thread_in0_data_0);
      sensitive << in0_data_0;
    SC_METHOD(thread_in0_data_1);
      sensitive << in0_data_1;
    SC_METHOD(thread_in0_data_2);
      sensitive << in0_data_2;
    SC_METHOD(thread_in0_data_3);
      sensitive << in0_data_3;
    SC_METHOD(thread_in0_data_4);
      sensitive << in0_data_4;
    SC_METHOD(thread_in0_data_5);
      sensitive << in0_data_5;
    SC_METHOD(thread_in0_data_6);
      sensitive << in0_data_6;
    SC_METHOD(thread_in0_data_7);
      sensitive << in0_data_7;
    SC_METHOD(thread_in1_data_0);
      sensitive << in1_data_0;
    SC_METHOD(thread_in1_data_1);
      sensitive << in1_data_1;
    SC_METHOD(thread_in1_data_2);
      sensitive << in1_data_2;
    SC_METHOD(thread_in1_data_3);
      sensitive << in1_data_3;
    SC_METHOD(thread_in1_data_4);
      sensitive << in1_data_4;
    SC_METHOD(thread_in1_data_5);
      sensitive << in1_data_5;
    SC_METHOD(thread_in1_data_6);
      sensitive << in1_data_6;
    SC_METHOD(thread_in1_data_7);
      sensitive << in1_data_7;

}

void sfu_out_buff_type_wrapper::DeleteInstances()
{
        delete sfu_out_buff0;
        sfu_out_buff0 = 0;
}

