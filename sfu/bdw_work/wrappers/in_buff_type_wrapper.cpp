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
* This file contains the in_buff_type_wrapper module
* for use in the verilog verification wrapper in_buff_vlwrapper.v
* It creats an instance of the in_buff module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "in_buff_type_wrapper.h"


SC_MODULE_EXPORT(in_buff_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void in_buff_type_wrapper::thread_in_data_0()
{
   in_data[0] = in_data_0.read();
}
void in_buff_type_wrapper::thread_in_data_1()
{
   in_data[1] = in_data_1.read();
}
void in_buff_type_wrapper::thread_in_data_2()
{
   in_data[2] = in_data_2.read();
}
void in_buff_type_wrapper::thread_in_data_3()
{
   in_data[3] = in_data_3.read();
}
void in_buff_type_wrapper::thread_in_data_4()
{
   in_data[4] = in_data_4.read();
}
void in_buff_type_wrapper::thread_in_data_5()
{
   in_data[5] = in_data_5.read();
}
void in_buff_type_wrapper::thread_in_data_6()
{
   in_data[6] = in_data_6.read();
}
void in_buff_type_wrapper::thread_in_data_7()
{
   in_data[7] = in_data_7.read();
}
void in_buff_type_wrapper::thread_in_data_8()
{
   in_data[8] = in_data_8.read();
}
void in_buff_type_wrapper::thread_in_data_9()
{
   in_data[9] = in_data_9.read();
}
void in_buff_type_wrapper::thread_in_data_10()
{
   in_data[10] = in_data_10.read();
}
void in_buff_type_wrapper::thread_in_data_11()
{
   in_data[11] = in_data_11.read();
}
void in_buff_type_wrapper::thread_in_data_12()
{
   in_data[12] = in_data_12.read();
}
void in_buff_type_wrapper::thread_in_data_13()
{
   in_data[13] = in_data_13.read();
}
void in_buff_type_wrapper::thread_in_data_14()
{
   in_data[14] = in_data_14.read();
}
void in_buff_type_wrapper::thread_in_data_15()
{
   in_data[15] = in_data_15.read();
}
void in_buff_type_wrapper::thread_in_data_16()
{
   in_data[16] = in_data_16.read();
}
void in_buff_type_wrapper::thread_in_data_17()
{
   in_data[17] = in_data_17.read();
}
void in_buff_type_wrapper::thread_in_data_18()
{
   in_data[18] = in_data_18.read();
}
void in_buff_type_wrapper::thread_in_data_19()
{
   in_data[19] = in_data_19.read();
}
void in_buff_type_wrapper::thread_in_data_20()
{
   in_data[20] = in_data_20.read();
}
void in_buff_type_wrapper::thread_in_data_21()
{
   in_data[21] = in_data_21.read();
}
void in_buff_type_wrapper::thread_in_data_22()
{
   in_data[22] = in_data_22.read();
}
void in_buff_type_wrapper::thread_in_data_23()
{
   in_data[23] = in_data_23.read();
}
void in_buff_type_wrapper::thread_in_data_24()
{
   in_data[24] = in_data_24.read();
}
void in_buff_type_wrapper::thread_in_data_25()
{
   in_data[25] = in_data_25.read();
}
void in_buff_type_wrapper::thread_in_data_26()
{
   in_data[26] = in_data_26.read();
}
void in_buff_type_wrapper::thread_in_data_27()
{
   in_data[27] = in_data_27.read();
}
void in_buff_type_wrapper::thread_in_data_28()
{
   in_data[28] = in_data_28.read();
}
void in_buff_type_wrapper::thread_in_data_29()
{
   in_data[29] = in_data_29.read();
}
void in_buff_type_wrapper::thread_in_data_30()
{
   in_data[30] = in_data_30.read();
}
void in_buff_type_wrapper::thread_in_data_31()
{
   in_data[31] = in_data_31.read();
}
void in_buff_type_wrapper::thread_out_data_0()
{
   sc_int< 32 > tmp;
   tmp = out_data[0].read();
   out_data_0.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_1()
{
   sc_int< 32 > tmp;
   tmp = out_data[1].read();
   out_data_1.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_2()
{
   sc_int< 32 > tmp;
   tmp = out_data[2].read();
   out_data_2.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_3()
{
   sc_int< 32 > tmp;
   tmp = out_data[3].read();
   out_data_3.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_4()
{
   sc_int< 32 > tmp;
   tmp = out_data[4].read();
   out_data_4.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_5()
{
   sc_int< 32 > tmp;
   tmp = out_data[5].read();
   out_data_5.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_6()
{
   sc_int< 32 > tmp;
   tmp = out_data[6].read();
   out_data_6.write(tmp);
}
void in_buff_type_wrapper::thread_out_data_7()
{
   sc_int< 32 > tmp;
   tmp = out_data[7].read();
   out_data_7.write(tmp);
}


void in_buff_type_wrapper::InitInstances()
{
    in_buff0 = new in_buff( "in_buff" );

    in_buff0->clk(clk);
    in_buff0->rstn(rstn);
    in_buff0->enable(enable);
    in_buff0->in_data[0](in_data[0]);
    in_buff0->in_data[1](in_data[1]);
    in_buff0->in_data[2](in_data[2]);
    in_buff0->in_data[3](in_data[3]);
    in_buff0->in_data[4](in_data[4]);
    in_buff0->in_data[5](in_data[5]);
    in_buff0->in_data[6](in_data[6]);
    in_buff0->in_data[7](in_data[7]);
    in_buff0->in_data[8](in_data[8]);
    in_buff0->in_data[9](in_data[9]);
    in_buff0->in_data[10](in_data[10]);
    in_buff0->in_data[11](in_data[11]);
    in_buff0->in_data[12](in_data[12]);
    in_buff0->in_data[13](in_data[13]);
    in_buff0->in_data[14](in_data[14]);
    in_buff0->in_data[15](in_data[15]);
    in_buff0->in_data[16](in_data[16]);
    in_buff0->in_data[17](in_data[17]);
    in_buff0->in_data[18](in_data[18]);
    in_buff0->in_data[19](in_data[19]);
    in_buff0->in_data[20](in_data[20]);
    in_buff0->in_data[21](in_data[21]);
    in_buff0->in_data[22](in_data[22]);
    in_buff0->in_data[23](in_data[23]);
    in_buff0->in_data[24](in_data[24]);
    in_buff0->in_data[25](in_data[25]);
    in_buff0->in_data[26](in_data[26]);
    in_buff0->in_data[27](in_data[27]);
    in_buff0->in_data[28](in_data[28]);
    in_buff0->in_data[29](in_data[29]);
    in_buff0->in_data[30](in_data[30]);
    in_buff0->in_data[31](in_data[31]);
    in_buff0->in_data_valid(in_data_valid);
    in_buff0->out_data[0](out_data[0]);
    in_buff0->out_data[1](out_data[1]);
    in_buff0->out_data[2](out_data[2]);
    in_buff0->out_data[3](out_data[3]);
    in_buff0->out_data[4](out_data[4]);
    in_buff0->out_data[5](out_data[5]);
    in_buff0->out_data[6](out_data[6]);
    in_buff0->out_data[7](out_data[7]);
    in_buff0->out_data_valid(out_data_valid);

}

void in_buff_type_wrapper::InitThreads()
{
    SC_METHOD(thread_in_data_0);
      sensitive << in_data_0;
    SC_METHOD(thread_in_data_1);
      sensitive << in_data_1;
    SC_METHOD(thread_in_data_2);
      sensitive << in_data_2;
    SC_METHOD(thread_in_data_3);
      sensitive << in_data_3;
    SC_METHOD(thread_in_data_4);
      sensitive << in_data_4;
    SC_METHOD(thread_in_data_5);
      sensitive << in_data_5;
    SC_METHOD(thread_in_data_6);
      sensitive << in_data_6;
    SC_METHOD(thread_in_data_7);
      sensitive << in_data_7;
    SC_METHOD(thread_in_data_8);
      sensitive << in_data_8;
    SC_METHOD(thread_in_data_9);
      sensitive << in_data_9;
    SC_METHOD(thread_in_data_10);
      sensitive << in_data_10;
    SC_METHOD(thread_in_data_11);
      sensitive << in_data_11;
    SC_METHOD(thread_in_data_12);
      sensitive << in_data_12;
    SC_METHOD(thread_in_data_13);
      sensitive << in_data_13;
    SC_METHOD(thread_in_data_14);
      sensitive << in_data_14;
    SC_METHOD(thread_in_data_15);
      sensitive << in_data_15;
    SC_METHOD(thread_in_data_16);
      sensitive << in_data_16;
    SC_METHOD(thread_in_data_17);
      sensitive << in_data_17;
    SC_METHOD(thread_in_data_18);
      sensitive << in_data_18;
    SC_METHOD(thread_in_data_19);
      sensitive << in_data_19;
    SC_METHOD(thread_in_data_20);
      sensitive << in_data_20;
    SC_METHOD(thread_in_data_21);
      sensitive << in_data_21;
    SC_METHOD(thread_in_data_22);
      sensitive << in_data_22;
    SC_METHOD(thread_in_data_23);
      sensitive << in_data_23;
    SC_METHOD(thread_in_data_24);
      sensitive << in_data_24;
    SC_METHOD(thread_in_data_25);
      sensitive << in_data_25;
    SC_METHOD(thread_in_data_26);
      sensitive << in_data_26;
    SC_METHOD(thread_in_data_27);
      sensitive << in_data_27;
    SC_METHOD(thread_in_data_28);
      sensitive << in_data_28;
    SC_METHOD(thread_in_data_29);
      sensitive << in_data_29;
    SC_METHOD(thread_in_data_30);
      sensitive << in_data_30;
    SC_METHOD(thread_in_data_31);
      sensitive << in_data_31;
    SC_METHOD(thread_out_data_0);
      sensitive << out_data[0];
    SC_METHOD(thread_out_data_1);
      sensitive << out_data[1];
    SC_METHOD(thread_out_data_2);
      sensitive << out_data[2];
    SC_METHOD(thread_out_data_3);
      sensitive << out_data[3];
    SC_METHOD(thread_out_data_4);
      sensitive << out_data[4];
    SC_METHOD(thread_out_data_5);
      sensitive << out_data[5];
    SC_METHOD(thread_out_data_6);
      sensitive << out_data[6];
    SC_METHOD(thread_out_data_7);
      sensitive << out_data[7];

}

void in_buff_type_wrapper::DeleteInstances()
{
        delete in_buff0;
        in_buff0 = 0;
}

