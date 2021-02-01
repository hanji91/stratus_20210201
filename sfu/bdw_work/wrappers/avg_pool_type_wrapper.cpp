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
* This file contains the avg_pool_type_wrapper module
* for use in the verilog verification wrapper avg_pool_vlwrapper.v
* It creats an instance of the avg_pool module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "avg_pool_type_wrapper.h"


SC_MODULE_EXPORT(avg_pool_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void avg_pool_type_wrapper::thread_in_data_0()
{
   in_data[0] = in_data_0.read();
}
void avg_pool_type_wrapper::thread_in_data_1()
{
   in_data[1] = in_data_1.read();
}
void avg_pool_type_wrapper::thread_in_data_2()
{
   in_data[2] = in_data_2.read();
}
void avg_pool_type_wrapper::thread_in_data_3()
{
   in_data[3] = in_data_3.read();
}
void avg_pool_type_wrapper::thread_in_data_4()
{
   in_data[4] = in_data_4.read();
}
void avg_pool_type_wrapper::thread_in_data_5()
{
   in_data[5] = in_data_5.read();
}
void avg_pool_type_wrapper::thread_in_data_6()
{
   in_data[6] = in_data_6.read();
}
void avg_pool_type_wrapper::thread_in_data_7()
{
   in_data[7] = in_data_7.read();
}
void avg_pool_type_wrapper::thread_in_data_8()
{
   in_data[8] = in_data_8.read();
}
void avg_pool_type_wrapper::thread_in_data_9()
{
   in_data[9] = in_data_9.read();
}
void avg_pool_type_wrapper::thread_in_data_10()
{
   in_data[10] = in_data_10.read();
}
void avg_pool_type_wrapper::thread_in_data_11()
{
   in_data[11] = in_data_11.read();
}
void avg_pool_type_wrapper::thread_in_data_12()
{
   in_data[12] = in_data_12.read();
}
void avg_pool_type_wrapper::thread_in_data_13()
{
   in_data[13] = in_data_13.read();
}
void avg_pool_type_wrapper::thread_in_data_14()
{
   in_data[14] = in_data_14.read();
}
void avg_pool_type_wrapper::thread_in_data_15()
{
   in_data[15] = in_data_15.read();
}
void avg_pool_type_wrapper::thread_in_data_16()
{
   in_data[16] = in_data_16.read();
}
void avg_pool_type_wrapper::thread_in_data_17()
{
   in_data[17] = in_data_17.read();
}
void avg_pool_type_wrapper::thread_in_data_18()
{
   in_data[18] = in_data_18.read();
}
void avg_pool_type_wrapper::thread_in_data_19()
{
   in_data[19] = in_data_19.read();
}
void avg_pool_type_wrapper::thread_in_data_20()
{
   in_data[20] = in_data_20.read();
}
void avg_pool_type_wrapper::thread_in_data_21()
{
   in_data[21] = in_data_21.read();
}
void avg_pool_type_wrapper::thread_in_data_22()
{
   in_data[22] = in_data_22.read();
}
void avg_pool_type_wrapper::thread_in_data_23()
{
   in_data[23] = in_data_23.read();
}
void avg_pool_type_wrapper::thread_in_data_24()
{
   in_data[24] = in_data_24.read();
}
void avg_pool_type_wrapper::thread_in_data_25()
{
   in_data[25] = in_data_25.read();
}
void avg_pool_type_wrapper::thread_in_data_26()
{
   in_data[26] = in_data_26.read();
}
void avg_pool_type_wrapper::thread_in_data_27()
{
   in_data[27] = in_data_27.read();
}
void avg_pool_type_wrapper::thread_in_data_28()
{
   in_data[28] = in_data_28.read();
}
void avg_pool_type_wrapper::thread_in_data_29()
{
   in_data[29] = in_data_29.read();
}
void avg_pool_type_wrapper::thread_in_data_30()
{
   in_data[30] = in_data_30.read();
}
void avg_pool_type_wrapper::thread_in_data_31()
{
   in_data[31] = in_data_31.read();
}
void avg_pool_type_wrapper::thread_out_data_0()
{
   sc_int< 32 > tmp;
   tmp = out_data[0].read();
   out_data_0.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_1()
{
   sc_int< 32 > tmp;
   tmp = out_data[1].read();
   out_data_1.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_2()
{
   sc_int< 32 > tmp;
   tmp = out_data[2].read();
   out_data_2.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_3()
{
   sc_int< 32 > tmp;
   tmp = out_data[3].read();
   out_data_3.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_4()
{
   sc_int< 32 > tmp;
   tmp = out_data[4].read();
   out_data_4.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_5()
{
   sc_int< 32 > tmp;
   tmp = out_data[5].read();
   out_data_5.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_6()
{
   sc_int< 32 > tmp;
   tmp = out_data[6].read();
   out_data_6.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_7()
{
   sc_int< 32 > tmp;
   tmp = out_data[7].read();
   out_data_7.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_8()
{
   sc_int< 32 > tmp;
   tmp = out_data[8].read();
   out_data_8.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_9()
{
   sc_int< 32 > tmp;
   tmp = out_data[9].read();
   out_data_9.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_10()
{
   sc_int< 32 > tmp;
   tmp = out_data[10].read();
   out_data_10.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_11()
{
   sc_int< 32 > tmp;
   tmp = out_data[11].read();
   out_data_11.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_12()
{
   sc_int< 32 > tmp;
   tmp = out_data[12].read();
   out_data_12.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_13()
{
   sc_int< 32 > tmp;
   tmp = out_data[13].read();
   out_data_13.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_14()
{
   sc_int< 32 > tmp;
   tmp = out_data[14].read();
   out_data_14.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_15()
{
   sc_int< 32 > tmp;
   tmp = out_data[15].read();
   out_data_15.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_16()
{
   sc_int< 32 > tmp;
   tmp = out_data[16].read();
   out_data_16.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_17()
{
   sc_int< 32 > tmp;
   tmp = out_data[17].read();
   out_data_17.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_18()
{
   sc_int< 32 > tmp;
   tmp = out_data[18].read();
   out_data_18.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_19()
{
   sc_int< 32 > tmp;
   tmp = out_data[19].read();
   out_data_19.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_20()
{
   sc_int< 32 > tmp;
   tmp = out_data[20].read();
   out_data_20.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_21()
{
   sc_int< 32 > tmp;
   tmp = out_data[21].read();
   out_data_21.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_22()
{
   sc_int< 32 > tmp;
   tmp = out_data[22].read();
   out_data_22.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_23()
{
   sc_int< 32 > tmp;
   tmp = out_data[23].read();
   out_data_23.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_24()
{
   sc_int< 32 > tmp;
   tmp = out_data[24].read();
   out_data_24.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_25()
{
   sc_int< 32 > tmp;
   tmp = out_data[25].read();
   out_data_25.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_26()
{
   sc_int< 32 > tmp;
   tmp = out_data[26].read();
   out_data_26.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_27()
{
   sc_int< 32 > tmp;
   tmp = out_data[27].read();
   out_data_27.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_28()
{
   sc_int< 32 > tmp;
   tmp = out_data[28].read();
   out_data_28.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_29()
{
   sc_int< 32 > tmp;
   tmp = out_data[29].read();
   out_data_29.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_30()
{
   sc_int< 32 > tmp;
   tmp = out_data[30].read();
   out_data_30.write(tmp);
}
void avg_pool_type_wrapper::thread_out_data_31()
{
   sc_int< 32 > tmp;
   tmp = out_data[31].read();
   out_data_31.write(tmp);
}


void avg_pool_type_wrapper::InitInstances()
{
    avg_pool0 = new avg_pool( "avg_pool" );

    avg_pool0->clk(clk);
    avg_pool0->rstn(rstn);
    avg_pool0->enable(enable);
    avg_pool0->init(init);
    avg_pool0->in_data[0](in_data[0]);
    avg_pool0->in_data[1](in_data[1]);
    avg_pool0->in_data[2](in_data[2]);
    avg_pool0->in_data[3](in_data[3]);
    avg_pool0->in_data[4](in_data[4]);
    avg_pool0->in_data[5](in_data[5]);
    avg_pool0->in_data[6](in_data[6]);
    avg_pool0->in_data[7](in_data[7]);
    avg_pool0->in_data[8](in_data[8]);
    avg_pool0->in_data[9](in_data[9]);
    avg_pool0->in_data[10](in_data[10]);
    avg_pool0->in_data[11](in_data[11]);
    avg_pool0->in_data[12](in_data[12]);
    avg_pool0->in_data[13](in_data[13]);
    avg_pool0->in_data[14](in_data[14]);
    avg_pool0->in_data[15](in_data[15]);
    avg_pool0->in_data[16](in_data[16]);
    avg_pool0->in_data[17](in_data[17]);
    avg_pool0->in_data[18](in_data[18]);
    avg_pool0->in_data[19](in_data[19]);
    avg_pool0->in_data[20](in_data[20]);
    avg_pool0->in_data[21](in_data[21]);
    avg_pool0->in_data[22](in_data[22]);
    avg_pool0->in_data[23](in_data[23]);
    avg_pool0->in_data[24](in_data[24]);
    avg_pool0->in_data[25](in_data[25]);
    avg_pool0->in_data[26](in_data[26]);
    avg_pool0->in_data[27](in_data[27]);
    avg_pool0->in_data[28](in_data[28]);
    avg_pool0->in_data[29](in_data[29]);
    avg_pool0->in_data[30](in_data[30]);
    avg_pool0->in_data[31](in_data[31]);
    avg_pool0->in_data_valid(in_data_valid);
    avg_pool0->out_data[0](out_data[0]);
    avg_pool0->out_data[1](out_data[1]);
    avg_pool0->out_data[2](out_data[2]);
    avg_pool0->out_data[3](out_data[3]);
    avg_pool0->out_data[4](out_data[4]);
    avg_pool0->out_data[5](out_data[5]);
    avg_pool0->out_data[6](out_data[6]);
    avg_pool0->out_data[7](out_data[7]);
    avg_pool0->out_data[8](out_data[8]);
    avg_pool0->out_data[9](out_data[9]);
    avg_pool0->out_data[10](out_data[10]);
    avg_pool0->out_data[11](out_data[11]);
    avg_pool0->out_data[12](out_data[12]);
    avg_pool0->out_data[13](out_data[13]);
    avg_pool0->out_data[14](out_data[14]);
    avg_pool0->out_data[15](out_data[15]);
    avg_pool0->out_data[16](out_data[16]);
    avg_pool0->out_data[17](out_data[17]);
    avg_pool0->out_data[18](out_data[18]);
    avg_pool0->out_data[19](out_data[19]);
    avg_pool0->out_data[20](out_data[20]);
    avg_pool0->out_data[21](out_data[21]);
    avg_pool0->out_data[22](out_data[22]);
    avg_pool0->out_data[23](out_data[23]);
    avg_pool0->out_data[24](out_data[24]);
    avg_pool0->out_data[25](out_data[25]);
    avg_pool0->out_data[26](out_data[26]);
    avg_pool0->out_data[27](out_data[27]);
    avg_pool0->out_data[28](out_data[28]);
    avg_pool0->out_data[29](out_data[29]);
    avg_pool0->out_data[30](out_data[30]);
    avg_pool0->out_data[31](out_data[31]);
    avg_pool0->out_data_valid(out_data_valid);

}

void avg_pool_type_wrapper::InitThreads()
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
    SC_METHOD(thread_out_data_8);
      sensitive << out_data[8];
    SC_METHOD(thread_out_data_9);
      sensitive << out_data[9];
    SC_METHOD(thread_out_data_10);
      sensitive << out_data[10];
    SC_METHOD(thread_out_data_11);
      sensitive << out_data[11];
    SC_METHOD(thread_out_data_12);
      sensitive << out_data[12];
    SC_METHOD(thread_out_data_13);
      sensitive << out_data[13];
    SC_METHOD(thread_out_data_14);
      sensitive << out_data[14];
    SC_METHOD(thread_out_data_15);
      sensitive << out_data[15];
    SC_METHOD(thread_out_data_16);
      sensitive << out_data[16];
    SC_METHOD(thread_out_data_17);
      sensitive << out_data[17];
    SC_METHOD(thread_out_data_18);
      sensitive << out_data[18];
    SC_METHOD(thread_out_data_19);
      sensitive << out_data[19];
    SC_METHOD(thread_out_data_20);
      sensitive << out_data[20];
    SC_METHOD(thread_out_data_21);
      sensitive << out_data[21];
    SC_METHOD(thread_out_data_22);
      sensitive << out_data[22];
    SC_METHOD(thread_out_data_23);
      sensitive << out_data[23];
    SC_METHOD(thread_out_data_24);
      sensitive << out_data[24];
    SC_METHOD(thread_out_data_25);
      sensitive << out_data[25];
    SC_METHOD(thread_out_data_26);
      sensitive << out_data[26];
    SC_METHOD(thread_out_data_27);
      sensitive << out_data[27];
    SC_METHOD(thread_out_data_28);
      sensitive << out_data[28];
    SC_METHOD(thread_out_data_29);
      sensitive << out_data[29];
    SC_METHOD(thread_out_data_30);
      sensitive << out_data[30];
    SC_METHOD(thread_out_data_31);
      sensitive << out_data[31];

}

void avg_pool_type_wrapper::DeleteInstances()
{
        delete avg_pool0;
        avg_pool0 = 0;
}

