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
* This file contains the cache_type_wrapper module
* for use in the verilog verification wrapper cache_vlwrapper.v
* It creats an instance of the cache module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "cache_type_wrapper.h"


SC_MODULE_EXPORT(cache_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void cache_type_wrapper::thread_mac_src_0_s0_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[0].read();
   mac_src_0_s0_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[1].read();
   mac_src_0_s0_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[2].read();
   mac_src_0_s0_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[3].read();
   mac_src_0_s0_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[4].read();
   mac_src_0_s0_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[5].read();
   mac_src_0_s0_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[6].read();
   mac_src_0_s0_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[7].read();
   mac_src_0_s0_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[8].read();
   mac_src_0_s0_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[9].read();
   mac_src_0_s0_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[10].read();
   mac_src_0_s0_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[11].read();
   mac_src_0_s0_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[12].read();
   mac_src_0_s0_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[13].read();
   mac_src_0_s0_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[14].read();
   mac_src_0_s0_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[15].read();
   mac_src_0_s0_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[16].read();
   mac_src_0_s0_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[17].read();
   mac_src_0_s0_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[18].read();
   mac_src_0_s0_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[19].read();
   mac_src_0_s0_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[20].read();
   mac_src_0_s0_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[21].read();
   mac_src_0_s0_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[22].read();
   mac_src_0_s0_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[23].read();
   mac_src_0_s0_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[24].read();
   mac_src_0_s0_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[25].read();
   mac_src_0_s0_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[26].read();
   mac_src_0_s0_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[27].read();
   mac_src_0_s0_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[28].read();
   mac_src_0_s0_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[29].read();
   mac_src_0_s0_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[30].read();
   mac_src_0_s0_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s0_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s0[31].read();
   mac_src_0_s0_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[0].read();
   mac_src_0_s1_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[1].read();
   mac_src_0_s1_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[2].read();
   mac_src_0_s1_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[3].read();
   mac_src_0_s1_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[4].read();
   mac_src_0_s1_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[5].read();
   mac_src_0_s1_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[6].read();
   mac_src_0_s1_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[7].read();
   mac_src_0_s1_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[8].read();
   mac_src_0_s1_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[9].read();
   mac_src_0_s1_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[10].read();
   mac_src_0_s1_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[11].read();
   mac_src_0_s1_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[12].read();
   mac_src_0_s1_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[13].read();
   mac_src_0_s1_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[14].read();
   mac_src_0_s1_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[15].read();
   mac_src_0_s1_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[16].read();
   mac_src_0_s1_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[17].read();
   mac_src_0_s1_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[18].read();
   mac_src_0_s1_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[19].read();
   mac_src_0_s1_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[20].read();
   mac_src_0_s1_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[21].read();
   mac_src_0_s1_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[22].read();
   mac_src_0_s1_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[23].read();
   mac_src_0_s1_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[24].read();
   mac_src_0_s1_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[25].read();
   mac_src_0_s1_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[26].read();
   mac_src_0_s1_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[27].read();
   mac_src_0_s1_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[28].read();
   mac_src_0_s1_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[29].read();
   mac_src_0_s1_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[30].read();
   mac_src_0_s1_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s1_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s1[31].read();
   mac_src_0_s1_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[0].read();
   mac_src_0_s2_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[1].read();
   mac_src_0_s2_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[2].read();
   mac_src_0_s2_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[3].read();
   mac_src_0_s2_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[4].read();
   mac_src_0_s2_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[5].read();
   mac_src_0_s2_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[6].read();
   mac_src_0_s2_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[7].read();
   mac_src_0_s2_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[8].read();
   mac_src_0_s2_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[9].read();
   mac_src_0_s2_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[10].read();
   mac_src_0_s2_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[11].read();
   mac_src_0_s2_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[12].read();
   mac_src_0_s2_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[13].read();
   mac_src_0_s2_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[14].read();
   mac_src_0_s2_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[15].read();
   mac_src_0_s2_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[16].read();
   mac_src_0_s2_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[17].read();
   mac_src_0_s2_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[18].read();
   mac_src_0_s2_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[19].read();
   mac_src_0_s2_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[20].read();
   mac_src_0_s2_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[21].read();
   mac_src_0_s2_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[22].read();
   mac_src_0_s2_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[23].read();
   mac_src_0_s2_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[24].read();
   mac_src_0_s2_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[25].read();
   mac_src_0_s2_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[26].read();
   mac_src_0_s2_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[27].read();
   mac_src_0_s2_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[28].read();
   mac_src_0_s2_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[29].read();
   mac_src_0_s2_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[30].read();
   mac_src_0_s2_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s2_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s2[31].read();
   mac_src_0_s2_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[0].read();
   mac_src_0_s3_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[1].read();
   mac_src_0_s3_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[2].read();
   mac_src_0_s3_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[3].read();
   mac_src_0_s3_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[4].read();
   mac_src_0_s3_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[5].read();
   mac_src_0_s3_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[6].read();
   mac_src_0_s3_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[7].read();
   mac_src_0_s3_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[8].read();
   mac_src_0_s3_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[9].read();
   mac_src_0_s3_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[10].read();
   mac_src_0_s3_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[11].read();
   mac_src_0_s3_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[12].read();
   mac_src_0_s3_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[13].read();
   mac_src_0_s3_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[14].read();
   mac_src_0_s3_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[15].read();
   mac_src_0_s3_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[16].read();
   mac_src_0_s3_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[17].read();
   mac_src_0_s3_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[18].read();
   mac_src_0_s3_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[19].read();
   mac_src_0_s3_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[20].read();
   mac_src_0_s3_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[21].read();
   mac_src_0_s3_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[22].read();
   mac_src_0_s3_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[23].read();
   mac_src_0_s3_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[24].read();
   mac_src_0_s3_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[25].read();
   mac_src_0_s3_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[26].read();
   mac_src_0_s3_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[27].read();
   mac_src_0_s3_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[28].read();
   mac_src_0_s3_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[29].read();
   mac_src_0_s3_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[30].read();
   mac_src_0_s3_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s3_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s3[31].read();
   mac_src_0_s3_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[0].read();
   mac_src_0_s4_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[1].read();
   mac_src_0_s4_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[2].read();
   mac_src_0_s4_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[3].read();
   mac_src_0_s4_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[4].read();
   mac_src_0_s4_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[5].read();
   mac_src_0_s4_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[6].read();
   mac_src_0_s4_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[7].read();
   mac_src_0_s4_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[8].read();
   mac_src_0_s4_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[9].read();
   mac_src_0_s4_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[10].read();
   mac_src_0_s4_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[11].read();
   mac_src_0_s4_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[12].read();
   mac_src_0_s4_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[13].read();
   mac_src_0_s4_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[14].read();
   mac_src_0_s4_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[15].read();
   mac_src_0_s4_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[16].read();
   mac_src_0_s4_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[17].read();
   mac_src_0_s4_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[18].read();
   mac_src_0_s4_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[19].read();
   mac_src_0_s4_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[20].read();
   mac_src_0_s4_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[21].read();
   mac_src_0_s4_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[22].read();
   mac_src_0_s4_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[23].read();
   mac_src_0_s4_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[24].read();
   mac_src_0_s4_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[25].read();
   mac_src_0_s4_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[26].read();
   mac_src_0_s4_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[27].read();
   mac_src_0_s4_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[28].read();
   mac_src_0_s4_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[29].read();
   mac_src_0_s4_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[30].read();
   mac_src_0_s4_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s4_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s4[31].read();
   mac_src_0_s4_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[0].read();
   mac_src_0_s5_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[1].read();
   mac_src_0_s5_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[2].read();
   mac_src_0_s5_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[3].read();
   mac_src_0_s5_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[4].read();
   mac_src_0_s5_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[5].read();
   mac_src_0_s5_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[6].read();
   mac_src_0_s5_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[7].read();
   mac_src_0_s5_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[8].read();
   mac_src_0_s5_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[9].read();
   mac_src_0_s5_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[10].read();
   mac_src_0_s5_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[11].read();
   mac_src_0_s5_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[12].read();
   mac_src_0_s5_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[13].read();
   mac_src_0_s5_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[14].read();
   mac_src_0_s5_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[15].read();
   mac_src_0_s5_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[16].read();
   mac_src_0_s5_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[17].read();
   mac_src_0_s5_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[18].read();
   mac_src_0_s5_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[19].read();
   mac_src_0_s5_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[20].read();
   mac_src_0_s5_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[21].read();
   mac_src_0_s5_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[22].read();
   mac_src_0_s5_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[23].read();
   mac_src_0_s5_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[24].read();
   mac_src_0_s5_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[25].read();
   mac_src_0_s5_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[26].read();
   mac_src_0_s5_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[27].read();
   mac_src_0_s5_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[28].read();
   mac_src_0_s5_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[29].read();
   mac_src_0_s5_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[30].read();
   mac_src_0_s5_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s5_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s5[31].read();
   mac_src_0_s5_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_0()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[0].read();
   mac_src_0_s6_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_1()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[1].read();
   mac_src_0_s6_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_2()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[2].read();
   mac_src_0_s6_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_3()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[3].read();
   mac_src_0_s6_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_4()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[4].read();
   mac_src_0_s6_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_5()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[5].read();
   mac_src_0_s6_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_6()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[6].read();
   mac_src_0_s6_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_7()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[7].read();
   mac_src_0_s6_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_8()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[8].read();
   mac_src_0_s6_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_9()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[9].read();
   mac_src_0_s6_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_10()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[10].read();
   mac_src_0_s6_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_11()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[11].read();
   mac_src_0_s6_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_12()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[12].read();
   mac_src_0_s6_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_13()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[13].read();
   mac_src_0_s6_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_14()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[14].read();
   mac_src_0_s6_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_15()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[15].read();
   mac_src_0_s6_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_16()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[16].read();
   mac_src_0_s6_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_17()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[17].read();
   mac_src_0_s6_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_18()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[18].read();
   mac_src_0_s6_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_19()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[19].read();
   mac_src_0_s6_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_20()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[20].read();
   mac_src_0_s6_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_21()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[21].read();
   mac_src_0_s6_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_22()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[22].read();
   mac_src_0_s6_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_23()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[23].read();
   mac_src_0_s6_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_24()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[24].read();
   mac_src_0_s6_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_25()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[25].read();
   mac_src_0_s6_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_26()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[26].read();
   mac_src_0_s6_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_27()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[27].read();
   mac_src_0_s6_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_28()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[28].read();
   mac_src_0_s6_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_29()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[29].read();
   mac_src_0_s6_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_30()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[30].read();
   mac_src_0_s6_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_0_s6_31()
{
   sc_int< 10 > tmp;
   tmp = mac_src_0_s6[31].read();
   mac_src_0_s6_31.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_0()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[0].read();
   mac_src_1_0.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_1()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[1].read();
   mac_src_1_1.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_2()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[2].read();
   mac_src_1_2.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_3()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[3].read();
   mac_src_1_3.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_4()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[4].read();
   mac_src_1_4.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_5()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[5].read();
   mac_src_1_5.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_6()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[6].read();
   mac_src_1_6.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_7()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[7].read();
   mac_src_1_7.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_8()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[8].read();
   mac_src_1_8.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_9()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[9].read();
   mac_src_1_9.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_10()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[10].read();
   mac_src_1_10.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_11()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[11].read();
   mac_src_1_11.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_12()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[12].read();
   mac_src_1_12.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_13()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[13].read();
   mac_src_1_13.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_14()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[14].read();
   mac_src_1_14.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_15()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[15].read();
   mac_src_1_15.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_16()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[16].read();
   mac_src_1_16.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_17()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[17].read();
   mac_src_1_17.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_18()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[18].read();
   mac_src_1_18.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_19()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[19].read();
   mac_src_1_19.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_20()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[20].read();
   mac_src_1_20.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_21()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[21].read();
   mac_src_1_21.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_22()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[22].read();
   mac_src_1_22.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_23()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[23].read();
   mac_src_1_23.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_24()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[24].read();
   mac_src_1_24.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_25()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[25].read();
   mac_src_1_25.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_26()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[26].read();
   mac_src_1_26.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_27()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[27].read();
   mac_src_1_27.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_28()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[28].read();
   mac_src_1_28.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_29()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[29].read();
   mac_src_1_29.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_30()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[30].read();
   mac_src_1_30.write(tmp);
}
void cache_type_wrapper::thread_mac_src_1_31()
{
   sc_int< 8 > tmp;
   tmp = mac_src_1[31].read();
   mac_src_1_31.write(tmp);
}


void cache_type_wrapper::InitInstances()
{
    cache0 = new cache( "cache" );

    cache0->clk(clk);
    cache0->rstn(rstn);
    cache0->cache_en(cache_en);
    cache0->systolic_en(systolic_en);
    cache0->systolic_depth(systolic_depth);
    cache0->addr_if_start(addr_if_start);
    cache0->systolic_sel(systolic_sel);
    cache0->feature_data(feature_data);
    cache0->feature_share_en(feature_share_en);
    cache0->feature_data_en(feature_data_en);
    cache0->feature_data_sel(feature_data_sel);
    cache0->weight_data(weight_data);
    cache0->weight_data_en(weight_data_en);
    cache0->mac_src_0_s0[0](mac_src_0_s0[0]);
    cache0->mac_src_0_s0[1](mac_src_0_s0[1]);
    cache0->mac_src_0_s0[2](mac_src_0_s0[2]);
    cache0->mac_src_0_s0[3](mac_src_0_s0[3]);
    cache0->mac_src_0_s0[4](mac_src_0_s0[4]);
    cache0->mac_src_0_s0[5](mac_src_0_s0[5]);
    cache0->mac_src_0_s0[6](mac_src_0_s0[6]);
    cache0->mac_src_0_s0[7](mac_src_0_s0[7]);
    cache0->mac_src_0_s0[8](mac_src_0_s0[8]);
    cache0->mac_src_0_s0[9](mac_src_0_s0[9]);
    cache0->mac_src_0_s0[10](mac_src_0_s0[10]);
    cache0->mac_src_0_s0[11](mac_src_0_s0[11]);
    cache0->mac_src_0_s0[12](mac_src_0_s0[12]);
    cache0->mac_src_0_s0[13](mac_src_0_s0[13]);
    cache0->mac_src_0_s0[14](mac_src_0_s0[14]);
    cache0->mac_src_0_s0[15](mac_src_0_s0[15]);
    cache0->mac_src_0_s0[16](mac_src_0_s0[16]);
    cache0->mac_src_0_s0[17](mac_src_0_s0[17]);
    cache0->mac_src_0_s0[18](mac_src_0_s0[18]);
    cache0->mac_src_0_s0[19](mac_src_0_s0[19]);
    cache0->mac_src_0_s0[20](mac_src_0_s0[20]);
    cache0->mac_src_0_s0[21](mac_src_0_s0[21]);
    cache0->mac_src_0_s0[22](mac_src_0_s0[22]);
    cache0->mac_src_0_s0[23](mac_src_0_s0[23]);
    cache0->mac_src_0_s0[24](mac_src_0_s0[24]);
    cache0->mac_src_0_s0[25](mac_src_0_s0[25]);
    cache0->mac_src_0_s0[26](mac_src_0_s0[26]);
    cache0->mac_src_0_s0[27](mac_src_0_s0[27]);
    cache0->mac_src_0_s0[28](mac_src_0_s0[28]);
    cache0->mac_src_0_s0[29](mac_src_0_s0[29]);
    cache0->mac_src_0_s0[30](mac_src_0_s0[30]);
    cache0->mac_src_0_s0[31](mac_src_0_s0[31]);
    cache0->mac_src_0_s1[0](mac_src_0_s1[0]);
    cache0->mac_src_0_s1[1](mac_src_0_s1[1]);
    cache0->mac_src_0_s1[2](mac_src_0_s1[2]);
    cache0->mac_src_0_s1[3](mac_src_0_s1[3]);
    cache0->mac_src_0_s1[4](mac_src_0_s1[4]);
    cache0->mac_src_0_s1[5](mac_src_0_s1[5]);
    cache0->mac_src_0_s1[6](mac_src_0_s1[6]);
    cache0->mac_src_0_s1[7](mac_src_0_s1[7]);
    cache0->mac_src_0_s1[8](mac_src_0_s1[8]);
    cache0->mac_src_0_s1[9](mac_src_0_s1[9]);
    cache0->mac_src_0_s1[10](mac_src_0_s1[10]);
    cache0->mac_src_0_s1[11](mac_src_0_s1[11]);
    cache0->mac_src_0_s1[12](mac_src_0_s1[12]);
    cache0->mac_src_0_s1[13](mac_src_0_s1[13]);
    cache0->mac_src_0_s1[14](mac_src_0_s1[14]);
    cache0->mac_src_0_s1[15](mac_src_0_s1[15]);
    cache0->mac_src_0_s1[16](mac_src_0_s1[16]);
    cache0->mac_src_0_s1[17](mac_src_0_s1[17]);
    cache0->mac_src_0_s1[18](mac_src_0_s1[18]);
    cache0->mac_src_0_s1[19](mac_src_0_s1[19]);
    cache0->mac_src_0_s1[20](mac_src_0_s1[20]);
    cache0->mac_src_0_s1[21](mac_src_0_s1[21]);
    cache0->mac_src_0_s1[22](mac_src_0_s1[22]);
    cache0->mac_src_0_s1[23](mac_src_0_s1[23]);
    cache0->mac_src_0_s1[24](mac_src_0_s1[24]);
    cache0->mac_src_0_s1[25](mac_src_0_s1[25]);
    cache0->mac_src_0_s1[26](mac_src_0_s1[26]);
    cache0->mac_src_0_s1[27](mac_src_0_s1[27]);
    cache0->mac_src_0_s1[28](mac_src_0_s1[28]);
    cache0->mac_src_0_s1[29](mac_src_0_s1[29]);
    cache0->mac_src_0_s1[30](mac_src_0_s1[30]);
    cache0->mac_src_0_s1[31](mac_src_0_s1[31]);
    cache0->mac_src_0_s2[0](mac_src_0_s2[0]);
    cache0->mac_src_0_s2[1](mac_src_0_s2[1]);
    cache0->mac_src_0_s2[2](mac_src_0_s2[2]);
    cache0->mac_src_0_s2[3](mac_src_0_s2[3]);
    cache0->mac_src_0_s2[4](mac_src_0_s2[4]);
    cache0->mac_src_0_s2[5](mac_src_0_s2[5]);
    cache0->mac_src_0_s2[6](mac_src_0_s2[6]);
    cache0->mac_src_0_s2[7](mac_src_0_s2[7]);
    cache0->mac_src_0_s2[8](mac_src_0_s2[8]);
    cache0->mac_src_0_s2[9](mac_src_0_s2[9]);
    cache0->mac_src_0_s2[10](mac_src_0_s2[10]);
    cache0->mac_src_0_s2[11](mac_src_0_s2[11]);
    cache0->mac_src_0_s2[12](mac_src_0_s2[12]);
    cache0->mac_src_0_s2[13](mac_src_0_s2[13]);
    cache0->mac_src_0_s2[14](mac_src_0_s2[14]);
    cache0->mac_src_0_s2[15](mac_src_0_s2[15]);
    cache0->mac_src_0_s2[16](mac_src_0_s2[16]);
    cache0->mac_src_0_s2[17](mac_src_0_s2[17]);
    cache0->mac_src_0_s2[18](mac_src_0_s2[18]);
    cache0->mac_src_0_s2[19](mac_src_0_s2[19]);
    cache0->mac_src_0_s2[20](mac_src_0_s2[20]);
    cache0->mac_src_0_s2[21](mac_src_0_s2[21]);
    cache0->mac_src_0_s2[22](mac_src_0_s2[22]);
    cache0->mac_src_0_s2[23](mac_src_0_s2[23]);
    cache0->mac_src_0_s2[24](mac_src_0_s2[24]);
    cache0->mac_src_0_s2[25](mac_src_0_s2[25]);
    cache0->mac_src_0_s2[26](mac_src_0_s2[26]);
    cache0->mac_src_0_s2[27](mac_src_0_s2[27]);
    cache0->mac_src_0_s2[28](mac_src_0_s2[28]);
    cache0->mac_src_0_s2[29](mac_src_0_s2[29]);
    cache0->mac_src_0_s2[30](mac_src_0_s2[30]);
    cache0->mac_src_0_s2[31](mac_src_0_s2[31]);
    cache0->mac_src_0_s3[0](mac_src_0_s3[0]);
    cache0->mac_src_0_s3[1](mac_src_0_s3[1]);
    cache0->mac_src_0_s3[2](mac_src_0_s3[2]);
    cache0->mac_src_0_s3[3](mac_src_0_s3[3]);
    cache0->mac_src_0_s3[4](mac_src_0_s3[4]);
    cache0->mac_src_0_s3[5](mac_src_0_s3[5]);
    cache0->mac_src_0_s3[6](mac_src_0_s3[6]);
    cache0->mac_src_0_s3[7](mac_src_0_s3[7]);
    cache0->mac_src_0_s3[8](mac_src_0_s3[8]);
    cache0->mac_src_0_s3[9](mac_src_0_s3[9]);
    cache0->mac_src_0_s3[10](mac_src_0_s3[10]);
    cache0->mac_src_0_s3[11](mac_src_0_s3[11]);
    cache0->mac_src_0_s3[12](mac_src_0_s3[12]);
    cache0->mac_src_0_s3[13](mac_src_0_s3[13]);
    cache0->mac_src_0_s3[14](mac_src_0_s3[14]);
    cache0->mac_src_0_s3[15](mac_src_0_s3[15]);
    cache0->mac_src_0_s3[16](mac_src_0_s3[16]);
    cache0->mac_src_0_s3[17](mac_src_0_s3[17]);
    cache0->mac_src_0_s3[18](mac_src_0_s3[18]);
    cache0->mac_src_0_s3[19](mac_src_0_s3[19]);
    cache0->mac_src_0_s3[20](mac_src_0_s3[20]);
    cache0->mac_src_0_s3[21](mac_src_0_s3[21]);
    cache0->mac_src_0_s3[22](mac_src_0_s3[22]);
    cache0->mac_src_0_s3[23](mac_src_0_s3[23]);
    cache0->mac_src_0_s3[24](mac_src_0_s3[24]);
    cache0->mac_src_0_s3[25](mac_src_0_s3[25]);
    cache0->mac_src_0_s3[26](mac_src_0_s3[26]);
    cache0->mac_src_0_s3[27](mac_src_0_s3[27]);
    cache0->mac_src_0_s3[28](mac_src_0_s3[28]);
    cache0->mac_src_0_s3[29](mac_src_0_s3[29]);
    cache0->mac_src_0_s3[30](mac_src_0_s3[30]);
    cache0->mac_src_0_s3[31](mac_src_0_s3[31]);
    cache0->mac_src_0_s4[0](mac_src_0_s4[0]);
    cache0->mac_src_0_s4[1](mac_src_0_s4[1]);
    cache0->mac_src_0_s4[2](mac_src_0_s4[2]);
    cache0->mac_src_0_s4[3](mac_src_0_s4[3]);
    cache0->mac_src_0_s4[4](mac_src_0_s4[4]);
    cache0->mac_src_0_s4[5](mac_src_0_s4[5]);
    cache0->mac_src_0_s4[6](mac_src_0_s4[6]);
    cache0->mac_src_0_s4[7](mac_src_0_s4[7]);
    cache0->mac_src_0_s4[8](mac_src_0_s4[8]);
    cache0->mac_src_0_s4[9](mac_src_0_s4[9]);
    cache0->mac_src_0_s4[10](mac_src_0_s4[10]);
    cache0->mac_src_0_s4[11](mac_src_0_s4[11]);
    cache0->mac_src_0_s4[12](mac_src_0_s4[12]);
    cache0->mac_src_0_s4[13](mac_src_0_s4[13]);
    cache0->mac_src_0_s4[14](mac_src_0_s4[14]);
    cache0->mac_src_0_s4[15](mac_src_0_s4[15]);
    cache0->mac_src_0_s4[16](mac_src_0_s4[16]);
    cache0->mac_src_0_s4[17](mac_src_0_s4[17]);
    cache0->mac_src_0_s4[18](mac_src_0_s4[18]);
    cache0->mac_src_0_s4[19](mac_src_0_s4[19]);
    cache0->mac_src_0_s4[20](mac_src_0_s4[20]);
    cache0->mac_src_0_s4[21](mac_src_0_s4[21]);
    cache0->mac_src_0_s4[22](mac_src_0_s4[22]);
    cache0->mac_src_0_s4[23](mac_src_0_s4[23]);
    cache0->mac_src_0_s4[24](mac_src_0_s4[24]);
    cache0->mac_src_0_s4[25](mac_src_0_s4[25]);
    cache0->mac_src_0_s4[26](mac_src_0_s4[26]);
    cache0->mac_src_0_s4[27](mac_src_0_s4[27]);
    cache0->mac_src_0_s4[28](mac_src_0_s4[28]);
    cache0->mac_src_0_s4[29](mac_src_0_s4[29]);
    cache0->mac_src_0_s4[30](mac_src_0_s4[30]);
    cache0->mac_src_0_s4[31](mac_src_0_s4[31]);
    cache0->mac_src_0_s5[0](mac_src_0_s5[0]);
    cache0->mac_src_0_s5[1](mac_src_0_s5[1]);
    cache0->mac_src_0_s5[2](mac_src_0_s5[2]);
    cache0->mac_src_0_s5[3](mac_src_0_s5[3]);
    cache0->mac_src_0_s5[4](mac_src_0_s5[4]);
    cache0->mac_src_0_s5[5](mac_src_0_s5[5]);
    cache0->mac_src_0_s5[6](mac_src_0_s5[6]);
    cache0->mac_src_0_s5[7](mac_src_0_s5[7]);
    cache0->mac_src_0_s5[8](mac_src_0_s5[8]);
    cache0->mac_src_0_s5[9](mac_src_0_s5[9]);
    cache0->mac_src_0_s5[10](mac_src_0_s5[10]);
    cache0->mac_src_0_s5[11](mac_src_0_s5[11]);
    cache0->mac_src_0_s5[12](mac_src_0_s5[12]);
    cache0->mac_src_0_s5[13](mac_src_0_s5[13]);
    cache0->mac_src_0_s5[14](mac_src_0_s5[14]);
    cache0->mac_src_0_s5[15](mac_src_0_s5[15]);
    cache0->mac_src_0_s5[16](mac_src_0_s5[16]);
    cache0->mac_src_0_s5[17](mac_src_0_s5[17]);
    cache0->mac_src_0_s5[18](mac_src_0_s5[18]);
    cache0->mac_src_0_s5[19](mac_src_0_s5[19]);
    cache0->mac_src_0_s5[20](mac_src_0_s5[20]);
    cache0->mac_src_0_s5[21](mac_src_0_s5[21]);
    cache0->mac_src_0_s5[22](mac_src_0_s5[22]);
    cache0->mac_src_0_s5[23](mac_src_0_s5[23]);
    cache0->mac_src_0_s5[24](mac_src_0_s5[24]);
    cache0->mac_src_0_s5[25](mac_src_0_s5[25]);
    cache0->mac_src_0_s5[26](mac_src_0_s5[26]);
    cache0->mac_src_0_s5[27](mac_src_0_s5[27]);
    cache0->mac_src_0_s5[28](mac_src_0_s5[28]);
    cache0->mac_src_0_s5[29](mac_src_0_s5[29]);
    cache0->mac_src_0_s5[30](mac_src_0_s5[30]);
    cache0->mac_src_0_s5[31](mac_src_0_s5[31]);
    cache0->mac_src_0_s6[0](mac_src_0_s6[0]);
    cache0->mac_src_0_s6[1](mac_src_0_s6[1]);
    cache0->mac_src_0_s6[2](mac_src_0_s6[2]);
    cache0->mac_src_0_s6[3](mac_src_0_s6[3]);
    cache0->mac_src_0_s6[4](mac_src_0_s6[4]);
    cache0->mac_src_0_s6[5](mac_src_0_s6[5]);
    cache0->mac_src_0_s6[6](mac_src_0_s6[6]);
    cache0->mac_src_0_s6[7](mac_src_0_s6[7]);
    cache0->mac_src_0_s6[8](mac_src_0_s6[8]);
    cache0->mac_src_0_s6[9](mac_src_0_s6[9]);
    cache0->mac_src_0_s6[10](mac_src_0_s6[10]);
    cache0->mac_src_0_s6[11](mac_src_0_s6[11]);
    cache0->mac_src_0_s6[12](mac_src_0_s6[12]);
    cache0->mac_src_0_s6[13](mac_src_0_s6[13]);
    cache0->mac_src_0_s6[14](mac_src_0_s6[14]);
    cache0->mac_src_0_s6[15](mac_src_0_s6[15]);
    cache0->mac_src_0_s6[16](mac_src_0_s6[16]);
    cache0->mac_src_0_s6[17](mac_src_0_s6[17]);
    cache0->mac_src_0_s6[18](mac_src_0_s6[18]);
    cache0->mac_src_0_s6[19](mac_src_0_s6[19]);
    cache0->mac_src_0_s6[20](mac_src_0_s6[20]);
    cache0->mac_src_0_s6[21](mac_src_0_s6[21]);
    cache0->mac_src_0_s6[22](mac_src_0_s6[22]);
    cache0->mac_src_0_s6[23](mac_src_0_s6[23]);
    cache0->mac_src_0_s6[24](mac_src_0_s6[24]);
    cache0->mac_src_0_s6[25](mac_src_0_s6[25]);
    cache0->mac_src_0_s6[26](mac_src_0_s6[26]);
    cache0->mac_src_0_s6[27](mac_src_0_s6[27]);
    cache0->mac_src_0_s6[28](mac_src_0_s6[28]);
    cache0->mac_src_0_s6[29](mac_src_0_s6[29]);
    cache0->mac_src_0_s6[30](mac_src_0_s6[30]);
    cache0->mac_src_0_s6[31](mac_src_0_s6[31]);
    cache0->mac_src_1[0](mac_src_1[0]);
    cache0->mac_src_1[1](mac_src_1[1]);
    cache0->mac_src_1[2](mac_src_1[2]);
    cache0->mac_src_1[3](mac_src_1[3]);
    cache0->mac_src_1[4](mac_src_1[4]);
    cache0->mac_src_1[5](mac_src_1[5]);
    cache0->mac_src_1[6](mac_src_1[6]);
    cache0->mac_src_1[7](mac_src_1[7]);
    cache0->mac_src_1[8](mac_src_1[8]);
    cache0->mac_src_1[9](mac_src_1[9]);
    cache0->mac_src_1[10](mac_src_1[10]);
    cache0->mac_src_1[11](mac_src_1[11]);
    cache0->mac_src_1[12](mac_src_1[12]);
    cache0->mac_src_1[13](mac_src_1[13]);
    cache0->mac_src_1[14](mac_src_1[14]);
    cache0->mac_src_1[15](mac_src_1[15]);
    cache0->mac_src_1[16](mac_src_1[16]);
    cache0->mac_src_1[17](mac_src_1[17]);
    cache0->mac_src_1[18](mac_src_1[18]);
    cache0->mac_src_1[19](mac_src_1[19]);
    cache0->mac_src_1[20](mac_src_1[20]);
    cache0->mac_src_1[21](mac_src_1[21]);
    cache0->mac_src_1[22](mac_src_1[22]);
    cache0->mac_src_1[23](mac_src_1[23]);
    cache0->mac_src_1[24](mac_src_1[24]);
    cache0->mac_src_1[25](mac_src_1[25]);
    cache0->mac_src_1[26](mac_src_1[26]);
    cache0->mac_src_1[27](mac_src_1[27]);
    cache0->mac_src_1[28](mac_src_1[28]);
    cache0->mac_src_1[29](mac_src_1[29]);
    cache0->mac_src_1[30](mac_src_1[30]);
    cache0->mac_src_1[31](mac_src_1[31]);
    cache0->mac_src_valid(mac_src_valid);
    cache0->mac_clear(mac_clear);

}

void cache_type_wrapper::InitThreads()
{
    SC_METHOD(thread_mac_src_0_s0_0);
      sensitive << mac_src_0_s0[0];
    SC_METHOD(thread_mac_src_0_s0_1);
      sensitive << mac_src_0_s0[1];
    SC_METHOD(thread_mac_src_0_s0_2);
      sensitive << mac_src_0_s0[2];
    SC_METHOD(thread_mac_src_0_s0_3);
      sensitive << mac_src_0_s0[3];
    SC_METHOD(thread_mac_src_0_s0_4);
      sensitive << mac_src_0_s0[4];
    SC_METHOD(thread_mac_src_0_s0_5);
      sensitive << mac_src_0_s0[5];
    SC_METHOD(thread_mac_src_0_s0_6);
      sensitive << mac_src_0_s0[6];
    SC_METHOD(thread_mac_src_0_s0_7);
      sensitive << mac_src_0_s0[7];
    SC_METHOD(thread_mac_src_0_s0_8);
      sensitive << mac_src_0_s0[8];
    SC_METHOD(thread_mac_src_0_s0_9);
      sensitive << mac_src_0_s0[9];
    SC_METHOD(thread_mac_src_0_s0_10);
      sensitive << mac_src_0_s0[10];
    SC_METHOD(thread_mac_src_0_s0_11);
      sensitive << mac_src_0_s0[11];
    SC_METHOD(thread_mac_src_0_s0_12);
      sensitive << mac_src_0_s0[12];
    SC_METHOD(thread_mac_src_0_s0_13);
      sensitive << mac_src_0_s0[13];
    SC_METHOD(thread_mac_src_0_s0_14);
      sensitive << mac_src_0_s0[14];
    SC_METHOD(thread_mac_src_0_s0_15);
      sensitive << mac_src_0_s0[15];
    SC_METHOD(thread_mac_src_0_s0_16);
      sensitive << mac_src_0_s0[16];
    SC_METHOD(thread_mac_src_0_s0_17);
      sensitive << mac_src_0_s0[17];
    SC_METHOD(thread_mac_src_0_s0_18);
      sensitive << mac_src_0_s0[18];
    SC_METHOD(thread_mac_src_0_s0_19);
      sensitive << mac_src_0_s0[19];
    SC_METHOD(thread_mac_src_0_s0_20);
      sensitive << mac_src_0_s0[20];
    SC_METHOD(thread_mac_src_0_s0_21);
      sensitive << mac_src_0_s0[21];
    SC_METHOD(thread_mac_src_0_s0_22);
      sensitive << mac_src_0_s0[22];
    SC_METHOD(thread_mac_src_0_s0_23);
      sensitive << mac_src_0_s0[23];
    SC_METHOD(thread_mac_src_0_s0_24);
      sensitive << mac_src_0_s0[24];
    SC_METHOD(thread_mac_src_0_s0_25);
      sensitive << mac_src_0_s0[25];
    SC_METHOD(thread_mac_src_0_s0_26);
      sensitive << mac_src_0_s0[26];
    SC_METHOD(thread_mac_src_0_s0_27);
      sensitive << mac_src_0_s0[27];
    SC_METHOD(thread_mac_src_0_s0_28);
      sensitive << mac_src_0_s0[28];
    SC_METHOD(thread_mac_src_0_s0_29);
      sensitive << mac_src_0_s0[29];
    SC_METHOD(thread_mac_src_0_s0_30);
      sensitive << mac_src_0_s0[30];
    SC_METHOD(thread_mac_src_0_s0_31);
      sensitive << mac_src_0_s0[31];
    SC_METHOD(thread_mac_src_0_s1_0);
      sensitive << mac_src_0_s1[0];
    SC_METHOD(thread_mac_src_0_s1_1);
      sensitive << mac_src_0_s1[1];
    SC_METHOD(thread_mac_src_0_s1_2);
      sensitive << mac_src_0_s1[2];
    SC_METHOD(thread_mac_src_0_s1_3);
      sensitive << mac_src_0_s1[3];
    SC_METHOD(thread_mac_src_0_s1_4);
      sensitive << mac_src_0_s1[4];
    SC_METHOD(thread_mac_src_0_s1_5);
      sensitive << mac_src_0_s1[5];
    SC_METHOD(thread_mac_src_0_s1_6);
      sensitive << mac_src_0_s1[6];
    SC_METHOD(thread_mac_src_0_s1_7);
      sensitive << mac_src_0_s1[7];
    SC_METHOD(thread_mac_src_0_s1_8);
      sensitive << mac_src_0_s1[8];
    SC_METHOD(thread_mac_src_0_s1_9);
      sensitive << mac_src_0_s1[9];
    SC_METHOD(thread_mac_src_0_s1_10);
      sensitive << mac_src_0_s1[10];
    SC_METHOD(thread_mac_src_0_s1_11);
      sensitive << mac_src_0_s1[11];
    SC_METHOD(thread_mac_src_0_s1_12);
      sensitive << mac_src_0_s1[12];
    SC_METHOD(thread_mac_src_0_s1_13);
      sensitive << mac_src_0_s1[13];
    SC_METHOD(thread_mac_src_0_s1_14);
      sensitive << mac_src_0_s1[14];
    SC_METHOD(thread_mac_src_0_s1_15);
      sensitive << mac_src_0_s1[15];
    SC_METHOD(thread_mac_src_0_s1_16);
      sensitive << mac_src_0_s1[16];
    SC_METHOD(thread_mac_src_0_s1_17);
      sensitive << mac_src_0_s1[17];
    SC_METHOD(thread_mac_src_0_s1_18);
      sensitive << mac_src_0_s1[18];
    SC_METHOD(thread_mac_src_0_s1_19);
      sensitive << mac_src_0_s1[19];
    SC_METHOD(thread_mac_src_0_s1_20);
      sensitive << mac_src_0_s1[20];
    SC_METHOD(thread_mac_src_0_s1_21);
      sensitive << mac_src_0_s1[21];
    SC_METHOD(thread_mac_src_0_s1_22);
      sensitive << mac_src_0_s1[22];
    SC_METHOD(thread_mac_src_0_s1_23);
      sensitive << mac_src_0_s1[23];
    SC_METHOD(thread_mac_src_0_s1_24);
      sensitive << mac_src_0_s1[24];
    SC_METHOD(thread_mac_src_0_s1_25);
      sensitive << mac_src_0_s1[25];
    SC_METHOD(thread_mac_src_0_s1_26);
      sensitive << mac_src_0_s1[26];
    SC_METHOD(thread_mac_src_0_s1_27);
      sensitive << mac_src_0_s1[27];
    SC_METHOD(thread_mac_src_0_s1_28);
      sensitive << mac_src_0_s1[28];
    SC_METHOD(thread_mac_src_0_s1_29);
      sensitive << mac_src_0_s1[29];
    SC_METHOD(thread_mac_src_0_s1_30);
      sensitive << mac_src_0_s1[30];
    SC_METHOD(thread_mac_src_0_s1_31);
      sensitive << mac_src_0_s1[31];
    SC_METHOD(thread_mac_src_0_s2_0);
      sensitive << mac_src_0_s2[0];
    SC_METHOD(thread_mac_src_0_s2_1);
      sensitive << mac_src_0_s2[1];
    SC_METHOD(thread_mac_src_0_s2_2);
      sensitive << mac_src_0_s2[2];
    SC_METHOD(thread_mac_src_0_s2_3);
      sensitive << mac_src_0_s2[3];
    SC_METHOD(thread_mac_src_0_s2_4);
      sensitive << mac_src_0_s2[4];
    SC_METHOD(thread_mac_src_0_s2_5);
      sensitive << mac_src_0_s2[5];
    SC_METHOD(thread_mac_src_0_s2_6);
      sensitive << mac_src_0_s2[6];
    SC_METHOD(thread_mac_src_0_s2_7);
      sensitive << mac_src_0_s2[7];
    SC_METHOD(thread_mac_src_0_s2_8);
      sensitive << mac_src_0_s2[8];
    SC_METHOD(thread_mac_src_0_s2_9);
      sensitive << mac_src_0_s2[9];
    SC_METHOD(thread_mac_src_0_s2_10);
      sensitive << mac_src_0_s2[10];
    SC_METHOD(thread_mac_src_0_s2_11);
      sensitive << mac_src_0_s2[11];
    SC_METHOD(thread_mac_src_0_s2_12);
      sensitive << mac_src_0_s2[12];
    SC_METHOD(thread_mac_src_0_s2_13);
      sensitive << mac_src_0_s2[13];
    SC_METHOD(thread_mac_src_0_s2_14);
      sensitive << mac_src_0_s2[14];
    SC_METHOD(thread_mac_src_0_s2_15);
      sensitive << mac_src_0_s2[15];
    SC_METHOD(thread_mac_src_0_s2_16);
      sensitive << mac_src_0_s2[16];
    SC_METHOD(thread_mac_src_0_s2_17);
      sensitive << mac_src_0_s2[17];
    SC_METHOD(thread_mac_src_0_s2_18);
      sensitive << mac_src_0_s2[18];
    SC_METHOD(thread_mac_src_0_s2_19);
      sensitive << mac_src_0_s2[19];
    SC_METHOD(thread_mac_src_0_s2_20);
      sensitive << mac_src_0_s2[20];
    SC_METHOD(thread_mac_src_0_s2_21);
      sensitive << mac_src_0_s2[21];
    SC_METHOD(thread_mac_src_0_s2_22);
      sensitive << mac_src_0_s2[22];
    SC_METHOD(thread_mac_src_0_s2_23);
      sensitive << mac_src_0_s2[23];
    SC_METHOD(thread_mac_src_0_s2_24);
      sensitive << mac_src_0_s2[24];
    SC_METHOD(thread_mac_src_0_s2_25);
      sensitive << mac_src_0_s2[25];
    SC_METHOD(thread_mac_src_0_s2_26);
      sensitive << mac_src_0_s2[26];
    SC_METHOD(thread_mac_src_0_s2_27);
      sensitive << mac_src_0_s2[27];
    SC_METHOD(thread_mac_src_0_s2_28);
      sensitive << mac_src_0_s2[28];
    SC_METHOD(thread_mac_src_0_s2_29);
      sensitive << mac_src_0_s2[29];
    SC_METHOD(thread_mac_src_0_s2_30);
      sensitive << mac_src_0_s2[30];
    SC_METHOD(thread_mac_src_0_s2_31);
      sensitive << mac_src_0_s2[31];
    SC_METHOD(thread_mac_src_0_s3_0);
      sensitive << mac_src_0_s3[0];
    SC_METHOD(thread_mac_src_0_s3_1);
      sensitive << mac_src_0_s3[1];
    SC_METHOD(thread_mac_src_0_s3_2);
      sensitive << mac_src_0_s3[2];
    SC_METHOD(thread_mac_src_0_s3_3);
      sensitive << mac_src_0_s3[3];
    SC_METHOD(thread_mac_src_0_s3_4);
      sensitive << mac_src_0_s3[4];
    SC_METHOD(thread_mac_src_0_s3_5);
      sensitive << mac_src_0_s3[5];
    SC_METHOD(thread_mac_src_0_s3_6);
      sensitive << mac_src_0_s3[6];
    SC_METHOD(thread_mac_src_0_s3_7);
      sensitive << mac_src_0_s3[7];
    SC_METHOD(thread_mac_src_0_s3_8);
      sensitive << mac_src_0_s3[8];
    SC_METHOD(thread_mac_src_0_s3_9);
      sensitive << mac_src_0_s3[9];
    SC_METHOD(thread_mac_src_0_s3_10);
      sensitive << mac_src_0_s3[10];
    SC_METHOD(thread_mac_src_0_s3_11);
      sensitive << mac_src_0_s3[11];
    SC_METHOD(thread_mac_src_0_s3_12);
      sensitive << mac_src_0_s3[12];
    SC_METHOD(thread_mac_src_0_s3_13);
      sensitive << mac_src_0_s3[13];
    SC_METHOD(thread_mac_src_0_s3_14);
      sensitive << mac_src_0_s3[14];
    SC_METHOD(thread_mac_src_0_s3_15);
      sensitive << mac_src_0_s3[15];
    SC_METHOD(thread_mac_src_0_s3_16);
      sensitive << mac_src_0_s3[16];
    SC_METHOD(thread_mac_src_0_s3_17);
      sensitive << mac_src_0_s3[17];
    SC_METHOD(thread_mac_src_0_s3_18);
      sensitive << mac_src_0_s3[18];
    SC_METHOD(thread_mac_src_0_s3_19);
      sensitive << mac_src_0_s3[19];
    SC_METHOD(thread_mac_src_0_s3_20);
      sensitive << mac_src_0_s3[20];
    SC_METHOD(thread_mac_src_0_s3_21);
      sensitive << mac_src_0_s3[21];
    SC_METHOD(thread_mac_src_0_s3_22);
      sensitive << mac_src_0_s3[22];
    SC_METHOD(thread_mac_src_0_s3_23);
      sensitive << mac_src_0_s3[23];
    SC_METHOD(thread_mac_src_0_s3_24);
      sensitive << mac_src_0_s3[24];
    SC_METHOD(thread_mac_src_0_s3_25);
      sensitive << mac_src_0_s3[25];
    SC_METHOD(thread_mac_src_0_s3_26);
      sensitive << mac_src_0_s3[26];
    SC_METHOD(thread_mac_src_0_s3_27);
      sensitive << mac_src_0_s3[27];
    SC_METHOD(thread_mac_src_0_s3_28);
      sensitive << mac_src_0_s3[28];
    SC_METHOD(thread_mac_src_0_s3_29);
      sensitive << mac_src_0_s3[29];
    SC_METHOD(thread_mac_src_0_s3_30);
      sensitive << mac_src_0_s3[30];
    SC_METHOD(thread_mac_src_0_s3_31);
      sensitive << mac_src_0_s3[31];
    SC_METHOD(thread_mac_src_0_s4_0);
      sensitive << mac_src_0_s4[0];
    SC_METHOD(thread_mac_src_0_s4_1);
      sensitive << mac_src_0_s4[1];
    SC_METHOD(thread_mac_src_0_s4_2);
      sensitive << mac_src_0_s4[2];
    SC_METHOD(thread_mac_src_0_s4_3);
      sensitive << mac_src_0_s4[3];
    SC_METHOD(thread_mac_src_0_s4_4);
      sensitive << mac_src_0_s4[4];
    SC_METHOD(thread_mac_src_0_s4_5);
      sensitive << mac_src_0_s4[5];
    SC_METHOD(thread_mac_src_0_s4_6);
      sensitive << mac_src_0_s4[6];
    SC_METHOD(thread_mac_src_0_s4_7);
      sensitive << mac_src_0_s4[7];
    SC_METHOD(thread_mac_src_0_s4_8);
      sensitive << mac_src_0_s4[8];
    SC_METHOD(thread_mac_src_0_s4_9);
      sensitive << mac_src_0_s4[9];
    SC_METHOD(thread_mac_src_0_s4_10);
      sensitive << mac_src_0_s4[10];
    SC_METHOD(thread_mac_src_0_s4_11);
      sensitive << mac_src_0_s4[11];
    SC_METHOD(thread_mac_src_0_s4_12);
      sensitive << mac_src_0_s4[12];
    SC_METHOD(thread_mac_src_0_s4_13);
      sensitive << mac_src_0_s4[13];
    SC_METHOD(thread_mac_src_0_s4_14);
      sensitive << mac_src_0_s4[14];
    SC_METHOD(thread_mac_src_0_s4_15);
      sensitive << mac_src_0_s4[15];
    SC_METHOD(thread_mac_src_0_s4_16);
      sensitive << mac_src_0_s4[16];
    SC_METHOD(thread_mac_src_0_s4_17);
      sensitive << mac_src_0_s4[17];
    SC_METHOD(thread_mac_src_0_s4_18);
      sensitive << mac_src_0_s4[18];
    SC_METHOD(thread_mac_src_0_s4_19);
      sensitive << mac_src_0_s4[19];
    SC_METHOD(thread_mac_src_0_s4_20);
      sensitive << mac_src_0_s4[20];
    SC_METHOD(thread_mac_src_0_s4_21);
      sensitive << mac_src_0_s4[21];
    SC_METHOD(thread_mac_src_0_s4_22);
      sensitive << mac_src_0_s4[22];
    SC_METHOD(thread_mac_src_0_s4_23);
      sensitive << mac_src_0_s4[23];
    SC_METHOD(thread_mac_src_0_s4_24);
      sensitive << mac_src_0_s4[24];
    SC_METHOD(thread_mac_src_0_s4_25);
      sensitive << mac_src_0_s4[25];
    SC_METHOD(thread_mac_src_0_s4_26);
      sensitive << mac_src_0_s4[26];
    SC_METHOD(thread_mac_src_0_s4_27);
      sensitive << mac_src_0_s4[27];
    SC_METHOD(thread_mac_src_0_s4_28);
      sensitive << mac_src_0_s4[28];
    SC_METHOD(thread_mac_src_0_s4_29);
      sensitive << mac_src_0_s4[29];
    SC_METHOD(thread_mac_src_0_s4_30);
      sensitive << mac_src_0_s4[30];
    SC_METHOD(thread_mac_src_0_s4_31);
      sensitive << mac_src_0_s4[31];
    SC_METHOD(thread_mac_src_0_s5_0);
      sensitive << mac_src_0_s5[0];
    SC_METHOD(thread_mac_src_0_s5_1);
      sensitive << mac_src_0_s5[1];
    SC_METHOD(thread_mac_src_0_s5_2);
      sensitive << mac_src_0_s5[2];
    SC_METHOD(thread_mac_src_0_s5_3);
      sensitive << mac_src_0_s5[3];
    SC_METHOD(thread_mac_src_0_s5_4);
      sensitive << mac_src_0_s5[4];
    SC_METHOD(thread_mac_src_0_s5_5);
      sensitive << mac_src_0_s5[5];
    SC_METHOD(thread_mac_src_0_s5_6);
      sensitive << mac_src_0_s5[6];
    SC_METHOD(thread_mac_src_0_s5_7);
      sensitive << mac_src_0_s5[7];
    SC_METHOD(thread_mac_src_0_s5_8);
      sensitive << mac_src_0_s5[8];
    SC_METHOD(thread_mac_src_0_s5_9);
      sensitive << mac_src_0_s5[9];
    SC_METHOD(thread_mac_src_0_s5_10);
      sensitive << mac_src_0_s5[10];
    SC_METHOD(thread_mac_src_0_s5_11);
      sensitive << mac_src_0_s5[11];
    SC_METHOD(thread_mac_src_0_s5_12);
      sensitive << mac_src_0_s5[12];
    SC_METHOD(thread_mac_src_0_s5_13);
      sensitive << mac_src_0_s5[13];
    SC_METHOD(thread_mac_src_0_s5_14);
      sensitive << mac_src_0_s5[14];
    SC_METHOD(thread_mac_src_0_s5_15);
      sensitive << mac_src_0_s5[15];
    SC_METHOD(thread_mac_src_0_s5_16);
      sensitive << mac_src_0_s5[16];
    SC_METHOD(thread_mac_src_0_s5_17);
      sensitive << mac_src_0_s5[17];
    SC_METHOD(thread_mac_src_0_s5_18);
      sensitive << mac_src_0_s5[18];
    SC_METHOD(thread_mac_src_0_s5_19);
      sensitive << mac_src_0_s5[19];
    SC_METHOD(thread_mac_src_0_s5_20);
      sensitive << mac_src_0_s5[20];
    SC_METHOD(thread_mac_src_0_s5_21);
      sensitive << mac_src_0_s5[21];
    SC_METHOD(thread_mac_src_0_s5_22);
      sensitive << mac_src_0_s5[22];
    SC_METHOD(thread_mac_src_0_s5_23);
      sensitive << mac_src_0_s5[23];
    SC_METHOD(thread_mac_src_0_s5_24);
      sensitive << mac_src_0_s5[24];
    SC_METHOD(thread_mac_src_0_s5_25);
      sensitive << mac_src_0_s5[25];
    SC_METHOD(thread_mac_src_0_s5_26);
      sensitive << mac_src_0_s5[26];
    SC_METHOD(thread_mac_src_0_s5_27);
      sensitive << mac_src_0_s5[27];
    SC_METHOD(thread_mac_src_0_s5_28);
      sensitive << mac_src_0_s5[28];
    SC_METHOD(thread_mac_src_0_s5_29);
      sensitive << mac_src_0_s5[29];
    SC_METHOD(thread_mac_src_0_s5_30);
      sensitive << mac_src_0_s5[30];
    SC_METHOD(thread_mac_src_0_s5_31);
      sensitive << mac_src_0_s5[31];
    SC_METHOD(thread_mac_src_0_s6_0);
      sensitive << mac_src_0_s6[0];
    SC_METHOD(thread_mac_src_0_s6_1);
      sensitive << mac_src_0_s6[1];
    SC_METHOD(thread_mac_src_0_s6_2);
      sensitive << mac_src_0_s6[2];
    SC_METHOD(thread_mac_src_0_s6_3);
      sensitive << mac_src_0_s6[3];
    SC_METHOD(thread_mac_src_0_s6_4);
      sensitive << mac_src_0_s6[4];
    SC_METHOD(thread_mac_src_0_s6_5);
      sensitive << mac_src_0_s6[5];
    SC_METHOD(thread_mac_src_0_s6_6);
      sensitive << mac_src_0_s6[6];
    SC_METHOD(thread_mac_src_0_s6_7);
      sensitive << mac_src_0_s6[7];
    SC_METHOD(thread_mac_src_0_s6_8);
      sensitive << mac_src_0_s6[8];
    SC_METHOD(thread_mac_src_0_s6_9);
      sensitive << mac_src_0_s6[9];
    SC_METHOD(thread_mac_src_0_s6_10);
      sensitive << mac_src_0_s6[10];
    SC_METHOD(thread_mac_src_0_s6_11);
      sensitive << mac_src_0_s6[11];
    SC_METHOD(thread_mac_src_0_s6_12);
      sensitive << mac_src_0_s6[12];
    SC_METHOD(thread_mac_src_0_s6_13);
      sensitive << mac_src_0_s6[13];
    SC_METHOD(thread_mac_src_0_s6_14);
      sensitive << mac_src_0_s6[14];
    SC_METHOD(thread_mac_src_0_s6_15);
      sensitive << mac_src_0_s6[15];
    SC_METHOD(thread_mac_src_0_s6_16);
      sensitive << mac_src_0_s6[16];
    SC_METHOD(thread_mac_src_0_s6_17);
      sensitive << mac_src_0_s6[17];
    SC_METHOD(thread_mac_src_0_s6_18);
      sensitive << mac_src_0_s6[18];
    SC_METHOD(thread_mac_src_0_s6_19);
      sensitive << mac_src_0_s6[19];
    SC_METHOD(thread_mac_src_0_s6_20);
      sensitive << mac_src_0_s6[20];
    SC_METHOD(thread_mac_src_0_s6_21);
      sensitive << mac_src_0_s6[21];
    SC_METHOD(thread_mac_src_0_s6_22);
      sensitive << mac_src_0_s6[22];
    SC_METHOD(thread_mac_src_0_s6_23);
      sensitive << mac_src_0_s6[23];
    SC_METHOD(thread_mac_src_0_s6_24);
      sensitive << mac_src_0_s6[24];
    SC_METHOD(thread_mac_src_0_s6_25);
      sensitive << mac_src_0_s6[25];
    SC_METHOD(thread_mac_src_0_s6_26);
      sensitive << mac_src_0_s6[26];
    SC_METHOD(thread_mac_src_0_s6_27);
      sensitive << mac_src_0_s6[27];
    SC_METHOD(thread_mac_src_0_s6_28);
      sensitive << mac_src_0_s6[28];
    SC_METHOD(thread_mac_src_0_s6_29);
      sensitive << mac_src_0_s6[29];
    SC_METHOD(thread_mac_src_0_s6_30);
      sensitive << mac_src_0_s6[30];
    SC_METHOD(thread_mac_src_0_s6_31);
      sensitive << mac_src_0_s6[31];
    SC_METHOD(thread_mac_src_1_0);
      sensitive << mac_src_1[0];
    SC_METHOD(thread_mac_src_1_1);
      sensitive << mac_src_1[1];
    SC_METHOD(thread_mac_src_1_2);
      sensitive << mac_src_1[2];
    SC_METHOD(thread_mac_src_1_3);
      sensitive << mac_src_1[3];
    SC_METHOD(thread_mac_src_1_4);
      sensitive << mac_src_1[4];
    SC_METHOD(thread_mac_src_1_5);
      sensitive << mac_src_1[5];
    SC_METHOD(thread_mac_src_1_6);
      sensitive << mac_src_1[6];
    SC_METHOD(thread_mac_src_1_7);
      sensitive << mac_src_1[7];
    SC_METHOD(thread_mac_src_1_8);
      sensitive << mac_src_1[8];
    SC_METHOD(thread_mac_src_1_9);
      sensitive << mac_src_1[9];
    SC_METHOD(thread_mac_src_1_10);
      sensitive << mac_src_1[10];
    SC_METHOD(thread_mac_src_1_11);
      sensitive << mac_src_1[11];
    SC_METHOD(thread_mac_src_1_12);
      sensitive << mac_src_1[12];
    SC_METHOD(thread_mac_src_1_13);
      sensitive << mac_src_1[13];
    SC_METHOD(thread_mac_src_1_14);
      sensitive << mac_src_1[14];
    SC_METHOD(thread_mac_src_1_15);
      sensitive << mac_src_1[15];
    SC_METHOD(thread_mac_src_1_16);
      sensitive << mac_src_1[16];
    SC_METHOD(thread_mac_src_1_17);
      sensitive << mac_src_1[17];
    SC_METHOD(thread_mac_src_1_18);
      sensitive << mac_src_1[18];
    SC_METHOD(thread_mac_src_1_19);
      sensitive << mac_src_1[19];
    SC_METHOD(thread_mac_src_1_20);
      sensitive << mac_src_1[20];
    SC_METHOD(thread_mac_src_1_21);
      sensitive << mac_src_1[21];
    SC_METHOD(thread_mac_src_1_22);
      sensitive << mac_src_1[22];
    SC_METHOD(thread_mac_src_1_23);
      sensitive << mac_src_1[23];
    SC_METHOD(thread_mac_src_1_24);
      sensitive << mac_src_1[24];
    SC_METHOD(thread_mac_src_1_25);
      sensitive << mac_src_1[25];
    SC_METHOD(thread_mac_src_1_26);
      sensitive << mac_src_1[26];
    SC_METHOD(thread_mac_src_1_27);
      sensitive << mac_src_1[27];
    SC_METHOD(thread_mac_src_1_28);
      sensitive << mac_src_1[28];
    SC_METHOD(thread_mac_src_1_29);
      sensitive << mac_src_1[29];
    SC_METHOD(thread_mac_src_1_30);
      sensitive << mac_src_1[30];
    SC_METHOD(thread_mac_src_1_31);
      sensitive << mac_src_1[31];

}

void cache_type_wrapper::DeleteInstances()
{
        delete cache0;
        cache0 = 0;
}

