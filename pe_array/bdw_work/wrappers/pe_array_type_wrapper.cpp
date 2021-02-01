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
* This file contains the pe_array_type_wrapper module
* for use in the verilog verification wrapper pe_array_vlwrapper.v
* It creats an instance of the pe_array module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "pe_array_type_wrapper.h"


SC_MODULE_EXPORT(pe_array_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports
void pe_array_type_wrapper::thread_src_0_s0_0()
{
   src_0_s0[0] = src_0_s0_0.read();
}
void pe_array_type_wrapper::thread_src_0_s0_1()
{
   src_0_s0[1] = src_0_s0_1.read();
}
void pe_array_type_wrapper::thread_src_0_s0_2()
{
   src_0_s0[2] = src_0_s0_2.read();
}
void pe_array_type_wrapper::thread_src_0_s0_3()
{
   src_0_s0[3] = src_0_s0_3.read();
}
void pe_array_type_wrapper::thread_src_0_s0_4()
{
   src_0_s0[4] = src_0_s0_4.read();
}
void pe_array_type_wrapper::thread_src_0_s0_5()
{
   src_0_s0[5] = src_0_s0_5.read();
}
void pe_array_type_wrapper::thread_src_0_s0_6()
{
   src_0_s0[6] = src_0_s0_6.read();
}
void pe_array_type_wrapper::thread_src_0_s0_7()
{
   src_0_s0[7] = src_0_s0_7.read();
}
void pe_array_type_wrapper::thread_src_0_s0_8()
{
   src_0_s0[8] = src_0_s0_8.read();
}
void pe_array_type_wrapper::thread_src_0_s0_9()
{
   src_0_s0[9] = src_0_s0_9.read();
}
void pe_array_type_wrapper::thread_src_0_s0_10()
{
   src_0_s0[10] = src_0_s0_10.read();
}
void pe_array_type_wrapper::thread_src_0_s0_11()
{
   src_0_s0[11] = src_0_s0_11.read();
}
void pe_array_type_wrapper::thread_src_0_s0_12()
{
   src_0_s0[12] = src_0_s0_12.read();
}
void pe_array_type_wrapper::thread_src_0_s0_13()
{
   src_0_s0[13] = src_0_s0_13.read();
}
void pe_array_type_wrapper::thread_src_0_s0_14()
{
   src_0_s0[14] = src_0_s0_14.read();
}
void pe_array_type_wrapper::thread_src_0_s0_15()
{
   src_0_s0[15] = src_0_s0_15.read();
}
void pe_array_type_wrapper::thread_src_0_s0_16()
{
   src_0_s0[16] = src_0_s0_16.read();
}
void pe_array_type_wrapper::thread_src_0_s0_17()
{
   src_0_s0[17] = src_0_s0_17.read();
}
void pe_array_type_wrapper::thread_src_0_s0_18()
{
   src_0_s0[18] = src_0_s0_18.read();
}
void pe_array_type_wrapper::thread_src_0_s0_19()
{
   src_0_s0[19] = src_0_s0_19.read();
}
void pe_array_type_wrapper::thread_src_0_s0_20()
{
   src_0_s0[20] = src_0_s0_20.read();
}
void pe_array_type_wrapper::thread_src_0_s0_21()
{
   src_0_s0[21] = src_0_s0_21.read();
}
void pe_array_type_wrapper::thread_src_0_s0_22()
{
   src_0_s0[22] = src_0_s0_22.read();
}
void pe_array_type_wrapper::thread_src_0_s0_23()
{
   src_0_s0[23] = src_0_s0_23.read();
}
void pe_array_type_wrapper::thread_src_0_s0_24()
{
   src_0_s0[24] = src_0_s0_24.read();
}
void pe_array_type_wrapper::thread_src_0_s0_25()
{
   src_0_s0[25] = src_0_s0_25.read();
}
void pe_array_type_wrapper::thread_src_0_s0_26()
{
   src_0_s0[26] = src_0_s0_26.read();
}
void pe_array_type_wrapper::thread_src_0_s0_27()
{
   src_0_s0[27] = src_0_s0_27.read();
}
void pe_array_type_wrapper::thread_src_0_s0_28()
{
   src_0_s0[28] = src_0_s0_28.read();
}
void pe_array_type_wrapper::thread_src_0_s0_29()
{
   src_0_s0[29] = src_0_s0_29.read();
}
void pe_array_type_wrapper::thread_src_0_s0_30()
{
   src_0_s0[30] = src_0_s0_30.read();
}
void pe_array_type_wrapper::thread_src_0_s0_31()
{
   src_0_s0[31] = src_0_s0_31.read();
}
void pe_array_type_wrapper::thread_src_0_s1_0()
{
   src_0_s1[0] = src_0_s1_0.read();
}
void pe_array_type_wrapper::thread_src_0_s1_1()
{
   src_0_s1[1] = src_0_s1_1.read();
}
void pe_array_type_wrapper::thread_src_0_s1_2()
{
   src_0_s1[2] = src_0_s1_2.read();
}
void pe_array_type_wrapper::thread_src_0_s1_3()
{
   src_0_s1[3] = src_0_s1_3.read();
}
void pe_array_type_wrapper::thread_src_0_s1_4()
{
   src_0_s1[4] = src_0_s1_4.read();
}
void pe_array_type_wrapper::thread_src_0_s1_5()
{
   src_0_s1[5] = src_0_s1_5.read();
}
void pe_array_type_wrapper::thread_src_0_s1_6()
{
   src_0_s1[6] = src_0_s1_6.read();
}
void pe_array_type_wrapper::thread_src_0_s1_7()
{
   src_0_s1[7] = src_0_s1_7.read();
}
void pe_array_type_wrapper::thread_src_0_s1_8()
{
   src_0_s1[8] = src_0_s1_8.read();
}
void pe_array_type_wrapper::thread_src_0_s1_9()
{
   src_0_s1[9] = src_0_s1_9.read();
}
void pe_array_type_wrapper::thread_src_0_s1_10()
{
   src_0_s1[10] = src_0_s1_10.read();
}
void pe_array_type_wrapper::thread_src_0_s1_11()
{
   src_0_s1[11] = src_0_s1_11.read();
}
void pe_array_type_wrapper::thread_src_0_s1_12()
{
   src_0_s1[12] = src_0_s1_12.read();
}
void pe_array_type_wrapper::thread_src_0_s1_13()
{
   src_0_s1[13] = src_0_s1_13.read();
}
void pe_array_type_wrapper::thread_src_0_s1_14()
{
   src_0_s1[14] = src_0_s1_14.read();
}
void pe_array_type_wrapper::thread_src_0_s1_15()
{
   src_0_s1[15] = src_0_s1_15.read();
}
void pe_array_type_wrapper::thread_src_0_s1_16()
{
   src_0_s1[16] = src_0_s1_16.read();
}
void pe_array_type_wrapper::thread_src_0_s1_17()
{
   src_0_s1[17] = src_0_s1_17.read();
}
void pe_array_type_wrapper::thread_src_0_s1_18()
{
   src_0_s1[18] = src_0_s1_18.read();
}
void pe_array_type_wrapper::thread_src_0_s1_19()
{
   src_0_s1[19] = src_0_s1_19.read();
}
void pe_array_type_wrapper::thread_src_0_s1_20()
{
   src_0_s1[20] = src_0_s1_20.read();
}
void pe_array_type_wrapper::thread_src_0_s1_21()
{
   src_0_s1[21] = src_0_s1_21.read();
}
void pe_array_type_wrapper::thread_src_0_s1_22()
{
   src_0_s1[22] = src_0_s1_22.read();
}
void pe_array_type_wrapper::thread_src_0_s1_23()
{
   src_0_s1[23] = src_0_s1_23.read();
}
void pe_array_type_wrapper::thread_src_0_s1_24()
{
   src_0_s1[24] = src_0_s1_24.read();
}
void pe_array_type_wrapper::thread_src_0_s1_25()
{
   src_0_s1[25] = src_0_s1_25.read();
}
void pe_array_type_wrapper::thread_src_0_s1_26()
{
   src_0_s1[26] = src_0_s1_26.read();
}
void pe_array_type_wrapper::thread_src_0_s1_27()
{
   src_0_s1[27] = src_0_s1_27.read();
}
void pe_array_type_wrapper::thread_src_0_s1_28()
{
   src_0_s1[28] = src_0_s1_28.read();
}
void pe_array_type_wrapper::thread_src_0_s1_29()
{
   src_0_s1[29] = src_0_s1_29.read();
}
void pe_array_type_wrapper::thread_src_0_s1_30()
{
   src_0_s1[30] = src_0_s1_30.read();
}
void pe_array_type_wrapper::thread_src_0_s1_31()
{
   src_0_s1[31] = src_0_s1_31.read();
}
void pe_array_type_wrapper::thread_src_0_s2_0()
{
   src_0_s2[0] = src_0_s2_0.read();
}
void pe_array_type_wrapper::thread_src_0_s2_1()
{
   src_0_s2[1] = src_0_s2_1.read();
}
void pe_array_type_wrapper::thread_src_0_s2_2()
{
   src_0_s2[2] = src_0_s2_2.read();
}
void pe_array_type_wrapper::thread_src_0_s2_3()
{
   src_0_s2[3] = src_0_s2_3.read();
}
void pe_array_type_wrapper::thread_src_0_s2_4()
{
   src_0_s2[4] = src_0_s2_4.read();
}
void pe_array_type_wrapper::thread_src_0_s2_5()
{
   src_0_s2[5] = src_0_s2_5.read();
}
void pe_array_type_wrapper::thread_src_0_s2_6()
{
   src_0_s2[6] = src_0_s2_6.read();
}
void pe_array_type_wrapper::thread_src_0_s2_7()
{
   src_0_s2[7] = src_0_s2_7.read();
}
void pe_array_type_wrapper::thread_src_0_s2_8()
{
   src_0_s2[8] = src_0_s2_8.read();
}
void pe_array_type_wrapper::thread_src_0_s2_9()
{
   src_0_s2[9] = src_0_s2_9.read();
}
void pe_array_type_wrapper::thread_src_0_s2_10()
{
   src_0_s2[10] = src_0_s2_10.read();
}
void pe_array_type_wrapper::thread_src_0_s2_11()
{
   src_0_s2[11] = src_0_s2_11.read();
}
void pe_array_type_wrapper::thread_src_0_s2_12()
{
   src_0_s2[12] = src_0_s2_12.read();
}
void pe_array_type_wrapper::thread_src_0_s2_13()
{
   src_0_s2[13] = src_0_s2_13.read();
}
void pe_array_type_wrapper::thread_src_0_s2_14()
{
   src_0_s2[14] = src_0_s2_14.read();
}
void pe_array_type_wrapper::thread_src_0_s2_15()
{
   src_0_s2[15] = src_0_s2_15.read();
}
void pe_array_type_wrapper::thread_src_0_s2_16()
{
   src_0_s2[16] = src_0_s2_16.read();
}
void pe_array_type_wrapper::thread_src_0_s2_17()
{
   src_0_s2[17] = src_0_s2_17.read();
}
void pe_array_type_wrapper::thread_src_0_s2_18()
{
   src_0_s2[18] = src_0_s2_18.read();
}
void pe_array_type_wrapper::thread_src_0_s2_19()
{
   src_0_s2[19] = src_0_s2_19.read();
}
void pe_array_type_wrapper::thread_src_0_s2_20()
{
   src_0_s2[20] = src_0_s2_20.read();
}
void pe_array_type_wrapper::thread_src_0_s2_21()
{
   src_0_s2[21] = src_0_s2_21.read();
}
void pe_array_type_wrapper::thread_src_0_s2_22()
{
   src_0_s2[22] = src_0_s2_22.read();
}
void pe_array_type_wrapper::thread_src_0_s2_23()
{
   src_0_s2[23] = src_0_s2_23.read();
}
void pe_array_type_wrapper::thread_src_0_s2_24()
{
   src_0_s2[24] = src_0_s2_24.read();
}
void pe_array_type_wrapper::thread_src_0_s2_25()
{
   src_0_s2[25] = src_0_s2_25.read();
}
void pe_array_type_wrapper::thread_src_0_s2_26()
{
   src_0_s2[26] = src_0_s2_26.read();
}
void pe_array_type_wrapper::thread_src_0_s2_27()
{
   src_0_s2[27] = src_0_s2_27.read();
}
void pe_array_type_wrapper::thread_src_0_s2_28()
{
   src_0_s2[28] = src_0_s2_28.read();
}
void pe_array_type_wrapper::thread_src_0_s2_29()
{
   src_0_s2[29] = src_0_s2_29.read();
}
void pe_array_type_wrapper::thread_src_0_s2_30()
{
   src_0_s2[30] = src_0_s2_30.read();
}
void pe_array_type_wrapper::thread_src_0_s2_31()
{
   src_0_s2[31] = src_0_s2_31.read();
}
void pe_array_type_wrapper::thread_src_0_s3_0()
{
   src_0_s3[0] = src_0_s3_0.read();
}
void pe_array_type_wrapper::thread_src_0_s3_1()
{
   src_0_s3[1] = src_0_s3_1.read();
}
void pe_array_type_wrapper::thread_src_0_s3_2()
{
   src_0_s3[2] = src_0_s3_2.read();
}
void pe_array_type_wrapper::thread_src_0_s3_3()
{
   src_0_s3[3] = src_0_s3_3.read();
}
void pe_array_type_wrapper::thread_src_0_s3_4()
{
   src_0_s3[4] = src_0_s3_4.read();
}
void pe_array_type_wrapper::thread_src_0_s3_5()
{
   src_0_s3[5] = src_0_s3_5.read();
}
void pe_array_type_wrapper::thread_src_0_s3_6()
{
   src_0_s3[6] = src_0_s3_6.read();
}
void pe_array_type_wrapper::thread_src_0_s3_7()
{
   src_0_s3[7] = src_0_s3_7.read();
}
void pe_array_type_wrapper::thread_src_0_s3_8()
{
   src_0_s3[8] = src_0_s3_8.read();
}
void pe_array_type_wrapper::thread_src_0_s3_9()
{
   src_0_s3[9] = src_0_s3_9.read();
}
void pe_array_type_wrapper::thread_src_0_s3_10()
{
   src_0_s3[10] = src_0_s3_10.read();
}
void pe_array_type_wrapper::thread_src_0_s3_11()
{
   src_0_s3[11] = src_0_s3_11.read();
}
void pe_array_type_wrapper::thread_src_0_s3_12()
{
   src_0_s3[12] = src_0_s3_12.read();
}
void pe_array_type_wrapper::thread_src_0_s3_13()
{
   src_0_s3[13] = src_0_s3_13.read();
}
void pe_array_type_wrapper::thread_src_0_s3_14()
{
   src_0_s3[14] = src_0_s3_14.read();
}
void pe_array_type_wrapper::thread_src_0_s3_15()
{
   src_0_s3[15] = src_0_s3_15.read();
}
void pe_array_type_wrapper::thread_src_0_s3_16()
{
   src_0_s3[16] = src_0_s3_16.read();
}
void pe_array_type_wrapper::thread_src_0_s3_17()
{
   src_0_s3[17] = src_0_s3_17.read();
}
void pe_array_type_wrapper::thread_src_0_s3_18()
{
   src_0_s3[18] = src_0_s3_18.read();
}
void pe_array_type_wrapper::thread_src_0_s3_19()
{
   src_0_s3[19] = src_0_s3_19.read();
}
void pe_array_type_wrapper::thread_src_0_s3_20()
{
   src_0_s3[20] = src_0_s3_20.read();
}
void pe_array_type_wrapper::thread_src_0_s3_21()
{
   src_0_s3[21] = src_0_s3_21.read();
}
void pe_array_type_wrapper::thread_src_0_s3_22()
{
   src_0_s3[22] = src_0_s3_22.read();
}
void pe_array_type_wrapper::thread_src_0_s3_23()
{
   src_0_s3[23] = src_0_s3_23.read();
}
void pe_array_type_wrapper::thread_src_0_s3_24()
{
   src_0_s3[24] = src_0_s3_24.read();
}
void pe_array_type_wrapper::thread_src_0_s3_25()
{
   src_0_s3[25] = src_0_s3_25.read();
}
void pe_array_type_wrapper::thread_src_0_s3_26()
{
   src_0_s3[26] = src_0_s3_26.read();
}
void pe_array_type_wrapper::thread_src_0_s3_27()
{
   src_0_s3[27] = src_0_s3_27.read();
}
void pe_array_type_wrapper::thread_src_0_s3_28()
{
   src_0_s3[28] = src_0_s3_28.read();
}
void pe_array_type_wrapper::thread_src_0_s3_29()
{
   src_0_s3[29] = src_0_s3_29.read();
}
void pe_array_type_wrapper::thread_src_0_s3_30()
{
   src_0_s3[30] = src_0_s3_30.read();
}
void pe_array_type_wrapper::thread_src_0_s3_31()
{
   src_0_s3[31] = src_0_s3_31.read();
}
void pe_array_type_wrapper::thread_src_0_s4_0()
{
   src_0_s4[0] = src_0_s4_0.read();
}
void pe_array_type_wrapper::thread_src_0_s4_1()
{
   src_0_s4[1] = src_0_s4_1.read();
}
void pe_array_type_wrapper::thread_src_0_s4_2()
{
   src_0_s4[2] = src_0_s4_2.read();
}
void pe_array_type_wrapper::thread_src_0_s4_3()
{
   src_0_s4[3] = src_0_s4_3.read();
}
void pe_array_type_wrapper::thread_src_0_s4_4()
{
   src_0_s4[4] = src_0_s4_4.read();
}
void pe_array_type_wrapper::thread_src_0_s4_5()
{
   src_0_s4[5] = src_0_s4_5.read();
}
void pe_array_type_wrapper::thread_src_0_s4_6()
{
   src_0_s4[6] = src_0_s4_6.read();
}
void pe_array_type_wrapper::thread_src_0_s4_7()
{
   src_0_s4[7] = src_0_s4_7.read();
}
void pe_array_type_wrapper::thread_src_0_s4_8()
{
   src_0_s4[8] = src_0_s4_8.read();
}
void pe_array_type_wrapper::thread_src_0_s4_9()
{
   src_0_s4[9] = src_0_s4_9.read();
}
void pe_array_type_wrapper::thread_src_0_s4_10()
{
   src_0_s4[10] = src_0_s4_10.read();
}
void pe_array_type_wrapper::thread_src_0_s4_11()
{
   src_0_s4[11] = src_0_s4_11.read();
}
void pe_array_type_wrapper::thread_src_0_s4_12()
{
   src_0_s4[12] = src_0_s4_12.read();
}
void pe_array_type_wrapper::thread_src_0_s4_13()
{
   src_0_s4[13] = src_0_s4_13.read();
}
void pe_array_type_wrapper::thread_src_0_s4_14()
{
   src_0_s4[14] = src_0_s4_14.read();
}
void pe_array_type_wrapper::thread_src_0_s4_15()
{
   src_0_s4[15] = src_0_s4_15.read();
}
void pe_array_type_wrapper::thread_src_0_s4_16()
{
   src_0_s4[16] = src_0_s4_16.read();
}
void pe_array_type_wrapper::thread_src_0_s4_17()
{
   src_0_s4[17] = src_0_s4_17.read();
}
void pe_array_type_wrapper::thread_src_0_s4_18()
{
   src_0_s4[18] = src_0_s4_18.read();
}
void pe_array_type_wrapper::thread_src_0_s4_19()
{
   src_0_s4[19] = src_0_s4_19.read();
}
void pe_array_type_wrapper::thread_src_0_s4_20()
{
   src_0_s4[20] = src_0_s4_20.read();
}
void pe_array_type_wrapper::thread_src_0_s4_21()
{
   src_0_s4[21] = src_0_s4_21.read();
}
void pe_array_type_wrapper::thread_src_0_s4_22()
{
   src_0_s4[22] = src_0_s4_22.read();
}
void pe_array_type_wrapper::thread_src_0_s4_23()
{
   src_0_s4[23] = src_0_s4_23.read();
}
void pe_array_type_wrapper::thread_src_0_s4_24()
{
   src_0_s4[24] = src_0_s4_24.read();
}
void pe_array_type_wrapper::thread_src_0_s4_25()
{
   src_0_s4[25] = src_0_s4_25.read();
}
void pe_array_type_wrapper::thread_src_0_s4_26()
{
   src_0_s4[26] = src_0_s4_26.read();
}
void pe_array_type_wrapper::thread_src_0_s4_27()
{
   src_0_s4[27] = src_0_s4_27.read();
}
void pe_array_type_wrapper::thread_src_0_s4_28()
{
   src_0_s4[28] = src_0_s4_28.read();
}
void pe_array_type_wrapper::thread_src_0_s4_29()
{
   src_0_s4[29] = src_0_s4_29.read();
}
void pe_array_type_wrapper::thread_src_0_s4_30()
{
   src_0_s4[30] = src_0_s4_30.read();
}
void pe_array_type_wrapper::thread_src_0_s4_31()
{
   src_0_s4[31] = src_0_s4_31.read();
}
void pe_array_type_wrapper::thread_src_0_s5_0()
{
   src_0_s5[0] = src_0_s5_0.read();
}
void pe_array_type_wrapper::thread_src_0_s5_1()
{
   src_0_s5[1] = src_0_s5_1.read();
}
void pe_array_type_wrapper::thread_src_0_s5_2()
{
   src_0_s5[2] = src_0_s5_2.read();
}
void pe_array_type_wrapper::thread_src_0_s5_3()
{
   src_0_s5[3] = src_0_s5_3.read();
}
void pe_array_type_wrapper::thread_src_0_s5_4()
{
   src_0_s5[4] = src_0_s5_4.read();
}
void pe_array_type_wrapper::thread_src_0_s5_5()
{
   src_0_s5[5] = src_0_s5_5.read();
}
void pe_array_type_wrapper::thread_src_0_s5_6()
{
   src_0_s5[6] = src_0_s5_6.read();
}
void pe_array_type_wrapper::thread_src_0_s5_7()
{
   src_0_s5[7] = src_0_s5_7.read();
}
void pe_array_type_wrapper::thread_src_0_s5_8()
{
   src_0_s5[8] = src_0_s5_8.read();
}
void pe_array_type_wrapper::thread_src_0_s5_9()
{
   src_0_s5[9] = src_0_s5_9.read();
}
void pe_array_type_wrapper::thread_src_0_s5_10()
{
   src_0_s5[10] = src_0_s5_10.read();
}
void pe_array_type_wrapper::thread_src_0_s5_11()
{
   src_0_s5[11] = src_0_s5_11.read();
}
void pe_array_type_wrapper::thread_src_0_s5_12()
{
   src_0_s5[12] = src_0_s5_12.read();
}
void pe_array_type_wrapper::thread_src_0_s5_13()
{
   src_0_s5[13] = src_0_s5_13.read();
}
void pe_array_type_wrapper::thread_src_0_s5_14()
{
   src_0_s5[14] = src_0_s5_14.read();
}
void pe_array_type_wrapper::thread_src_0_s5_15()
{
   src_0_s5[15] = src_0_s5_15.read();
}
void pe_array_type_wrapper::thread_src_0_s5_16()
{
   src_0_s5[16] = src_0_s5_16.read();
}
void pe_array_type_wrapper::thread_src_0_s5_17()
{
   src_0_s5[17] = src_0_s5_17.read();
}
void pe_array_type_wrapper::thread_src_0_s5_18()
{
   src_0_s5[18] = src_0_s5_18.read();
}
void pe_array_type_wrapper::thread_src_0_s5_19()
{
   src_0_s5[19] = src_0_s5_19.read();
}
void pe_array_type_wrapper::thread_src_0_s5_20()
{
   src_0_s5[20] = src_0_s5_20.read();
}
void pe_array_type_wrapper::thread_src_0_s5_21()
{
   src_0_s5[21] = src_0_s5_21.read();
}
void pe_array_type_wrapper::thread_src_0_s5_22()
{
   src_0_s5[22] = src_0_s5_22.read();
}
void pe_array_type_wrapper::thread_src_0_s5_23()
{
   src_0_s5[23] = src_0_s5_23.read();
}
void pe_array_type_wrapper::thread_src_0_s5_24()
{
   src_0_s5[24] = src_0_s5_24.read();
}
void pe_array_type_wrapper::thread_src_0_s5_25()
{
   src_0_s5[25] = src_0_s5_25.read();
}
void pe_array_type_wrapper::thread_src_0_s5_26()
{
   src_0_s5[26] = src_0_s5_26.read();
}
void pe_array_type_wrapper::thread_src_0_s5_27()
{
   src_0_s5[27] = src_0_s5_27.read();
}
void pe_array_type_wrapper::thread_src_0_s5_28()
{
   src_0_s5[28] = src_0_s5_28.read();
}
void pe_array_type_wrapper::thread_src_0_s5_29()
{
   src_0_s5[29] = src_0_s5_29.read();
}
void pe_array_type_wrapper::thread_src_0_s5_30()
{
   src_0_s5[30] = src_0_s5_30.read();
}
void pe_array_type_wrapper::thread_src_0_s5_31()
{
   src_0_s5[31] = src_0_s5_31.read();
}
void pe_array_type_wrapper::thread_src_0_s6_0()
{
   src_0_s6[0] = src_0_s6_0.read();
}
void pe_array_type_wrapper::thread_src_0_s6_1()
{
   src_0_s6[1] = src_0_s6_1.read();
}
void pe_array_type_wrapper::thread_src_0_s6_2()
{
   src_0_s6[2] = src_0_s6_2.read();
}
void pe_array_type_wrapper::thread_src_0_s6_3()
{
   src_0_s6[3] = src_0_s6_3.read();
}
void pe_array_type_wrapper::thread_src_0_s6_4()
{
   src_0_s6[4] = src_0_s6_4.read();
}
void pe_array_type_wrapper::thread_src_0_s6_5()
{
   src_0_s6[5] = src_0_s6_5.read();
}
void pe_array_type_wrapper::thread_src_0_s6_6()
{
   src_0_s6[6] = src_0_s6_6.read();
}
void pe_array_type_wrapper::thread_src_0_s6_7()
{
   src_0_s6[7] = src_0_s6_7.read();
}
void pe_array_type_wrapper::thread_src_0_s6_8()
{
   src_0_s6[8] = src_0_s6_8.read();
}
void pe_array_type_wrapper::thread_src_0_s6_9()
{
   src_0_s6[9] = src_0_s6_9.read();
}
void pe_array_type_wrapper::thread_src_0_s6_10()
{
   src_0_s6[10] = src_0_s6_10.read();
}
void pe_array_type_wrapper::thread_src_0_s6_11()
{
   src_0_s6[11] = src_0_s6_11.read();
}
void pe_array_type_wrapper::thread_src_0_s6_12()
{
   src_0_s6[12] = src_0_s6_12.read();
}
void pe_array_type_wrapper::thread_src_0_s6_13()
{
   src_0_s6[13] = src_0_s6_13.read();
}
void pe_array_type_wrapper::thread_src_0_s6_14()
{
   src_0_s6[14] = src_0_s6_14.read();
}
void pe_array_type_wrapper::thread_src_0_s6_15()
{
   src_0_s6[15] = src_0_s6_15.read();
}
void pe_array_type_wrapper::thread_src_0_s6_16()
{
   src_0_s6[16] = src_0_s6_16.read();
}
void pe_array_type_wrapper::thread_src_0_s6_17()
{
   src_0_s6[17] = src_0_s6_17.read();
}
void pe_array_type_wrapper::thread_src_0_s6_18()
{
   src_0_s6[18] = src_0_s6_18.read();
}
void pe_array_type_wrapper::thread_src_0_s6_19()
{
   src_0_s6[19] = src_0_s6_19.read();
}
void pe_array_type_wrapper::thread_src_0_s6_20()
{
   src_0_s6[20] = src_0_s6_20.read();
}
void pe_array_type_wrapper::thread_src_0_s6_21()
{
   src_0_s6[21] = src_0_s6_21.read();
}
void pe_array_type_wrapper::thread_src_0_s6_22()
{
   src_0_s6[22] = src_0_s6_22.read();
}
void pe_array_type_wrapper::thread_src_0_s6_23()
{
   src_0_s6[23] = src_0_s6_23.read();
}
void pe_array_type_wrapper::thread_src_0_s6_24()
{
   src_0_s6[24] = src_0_s6_24.read();
}
void pe_array_type_wrapper::thread_src_0_s6_25()
{
   src_0_s6[25] = src_0_s6_25.read();
}
void pe_array_type_wrapper::thread_src_0_s6_26()
{
   src_0_s6[26] = src_0_s6_26.read();
}
void pe_array_type_wrapper::thread_src_0_s6_27()
{
   src_0_s6[27] = src_0_s6_27.read();
}
void pe_array_type_wrapper::thread_src_0_s6_28()
{
   src_0_s6[28] = src_0_s6_28.read();
}
void pe_array_type_wrapper::thread_src_0_s6_29()
{
   src_0_s6[29] = src_0_s6_29.read();
}
void pe_array_type_wrapper::thread_src_0_s6_30()
{
   src_0_s6[30] = src_0_s6_30.read();
}
void pe_array_type_wrapper::thread_src_0_s6_31()
{
   src_0_s6[31] = src_0_s6_31.read();
}
void pe_array_type_wrapper::thread_src_1_0()
{
   src_1[0] = src_1_0.read();
}
void pe_array_type_wrapper::thread_src_1_1()
{
   src_1[1] = src_1_1.read();
}
void pe_array_type_wrapper::thread_src_1_2()
{
   src_1[2] = src_1_2.read();
}
void pe_array_type_wrapper::thread_src_1_3()
{
   src_1[3] = src_1_3.read();
}
void pe_array_type_wrapper::thread_src_1_4()
{
   src_1[4] = src_1_4.read();
}
void pe_array_type_wrapper::thread_src_1_5()
{
   src_1[5] = src_1_5.read();
}
void pe_array_type_wrapper::thread_src_1_6()
{
   src_1[6] = src_1_6.read();
}
void pe_array_type_wrapper::thread_src_1_7()
{
   src_1[7] = src_1_7.read();
}
void pe_array_type_wrapper::thread_src_1_8()
{
   src_1[8] = src_1_8.read();
}
void pe_array_type_wrapper::thread_src_1_9()
{
   src_1[9] = src_1_9.read();
}
void pe_array_type_wrapper::thread_src_1_10()
{
   src_1[10] = src_1_10.read();
}
void pe_array_type_wrapper::thread_src_1_11()
{
   src_1[11] = src_1_11.read();
}
void pe_array_type_wrapper::thread_src_1_12()
{
   src_1[12] = src_1_12.read();
}
void pe_array_type_wrapper::thread_src_1_13()
{
   src_1[13] = src_1_13.read();
}
void pe_array_type_wrapper::thread_src_1_14()
{
   src_1[14] = src_1_14.read();
}
void pe_array_type_wrapper::thread_src_1_15()
{
   src_1[15] = src_1_15.read();
}
void pe_array_type_wrapper::thread_src_1_16()
{
   src_1[16] = src_1_16.read();
}
void pe_array_type_wrapper::thread_src_1_17()
{
   src_1[17] = src_1_17.read();
}
void pe_array_type_wrapper::thread_src_1_18()
{
   src_1[18] = src_1_18.read();
}
void pe_array_type_wrapper::thread_src_1_19()
{
   src_1[19] = src_1_19.read();
}
void pe_array_type_wrapper::thread_src_1_20()
{
   src_1[20] = src_1_20.read();
}
void pe_array_type_wrapper::thread_src_1_21()
{
   src_1[21] = src_1_21.read();
}
void pe_array_type_wrapper::thread_src_1_22()
{
   src_1[22] = src_1_22.read();
}
void pe_array_type_wrapper::thread_src_1_23()
{
   src_1[23] = src_1_23.read();
}
void pe_array_type_wrapper::thread_src_1_24()
{
   src_1[24] = src_1_24.read();
}
void pe_array_type_wrapper::thread_src_1_25()
{
   src_1[25] = src_1_25.read();
}
void pe_array_type_wrapper::thread_src_1_26()
{
   src_1[26] = src_1_26.read();
}
void pe_array_type_wrapper::thread_src_1_27()
{
   src_1[27] = src_1_27.read();
}
void pe_array_type_wrapper::thread_src_1_28()
{
   src_1[28] = src_1_28.read();
}
void pe_array_type_wrapper::thread_src_1_29()
{
   src_1[29] = src_1_29.read();
}
void pe_array_type_wrapper::thread_src_1_30()
{
   src_1[30] = src_1_30.read();
}
void pe_array_type_wrapper::thread_src_1_31()
{
   src_1[31] = src_1_31.read();
}
void pe_array_type_wrapper::thread_pe_data_0()
{
   sc_int< 32 > tmp;
   tmp = pe_data[0].read();
   pe_data_0.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_1()
{
   sc_int< 32 > tmp;
   tmp = pe_data[1].read();
   pe_data_1.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_2()
{
   sc_int< 32 > tmp;
   tmp = pe_data[2].read();
   pe_data_2.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_3()
{
   sc_int< 32 > tmp;
   tmp = pe_data[3].read();
   pe_data_3.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_4()
{
   sc_int< 32 > tmp;
   tmp = pe_data[4].read();
   pe_data_4.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_5()
{
   sc_int< 32 > tmp;
   tmp = pe_data[5].read();
   pe_data_5.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_6()
{
   sc_int< 32 > tmp;
   tmp = pe_data[6].read();
   pe_data_6.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_7()
{
   sc_int< 32 > tmp;
   tmp = pe_data[7].read();
   pe_data_7.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_8()
{
   sc_int< 32 > tmp;
   tmp = pe_data[8].read();
   pe_data_8.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_9()
{
   sc_int< 32 > tmp;
   tmp = pe_data[9].read();
   pe_data_9.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_10()
{
   sc_int< 32 > tmp;
   tmp = pe_data[10].read();
   pe_data_10.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_11()
{
   sc_int< 32 > tmp;
   tmp = pe_data[11].read();
   pe_data_11.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_12()
{
   sc_int< 32 > tmp;
   tmp = pe_data[12].read();
   pe_data_12.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_13()
{
   sc_int< 32 > tmp;
   tmp = pe_data[13].read();
   pe_data_13.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_14()
{
   sc_int< 32 > tmp;
   tmp = pe_data[14].read();
   pe_data_14.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_15()
{
   sc_int< 32 > tmp;
   tmp = pe_data[15].read();
   pe_data_15.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_16()
{
   sc_int< 32 > tmp;
   tmp = pe_data[16].read();
   pe_data_16.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_17()
{
   sc_int< 32 > tmp;
   tmp = pe_data[17].read();
   pe_data_17.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_18()
{
   sc_int< 32 > tmp;
   tmp = pe_data[18].read();
   pe_data_18.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_19()
{
   sc_int< 32 > tmp;
   tmp = pe_data[19].read();
   pe_data_19.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_20()
{
   sc_int< 32 > tmp;
   tmp = pe_data[20].read();
   pe_data_20.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_21()
{
   sc_int< 32 > tmp;
   tmp = pe_data[21].read();
   pe_data_21.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_22()
{
   sc_int< 32 > tmp;
   tmp = pe_data[22].read();
   pe_data_22.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_23()
{
   sc_int< 32 > tmp;
   tmp = pe_data[23].read();
   pe_data_23.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_24()
{
   sc_int< 32 > tmp;
   tmp = pe_data[24].read();
   pe_data_24.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_25()
{
   sc_int< 32 > tmp;
   tmp = pe_data[25].read();
   pe_data_25.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_26()
{
   sc_int< 32 > tmp;
   tmp = pe_data[26].read();
   pe_data_26.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_27()
{
   sc_int< 32 > tmp;
   tmp = pe_data[27].read();
   pe_data_27.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_28()
{
   sc_int< 32 > tmp;
   tmp = pe_data[28].read();
   pe_data_28.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_29()
{
   sc_int< 32 > tmp;
   tmp = pe_data[29].read();
   pe_data_29.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_30()
{
   sc_int< 32 > tmp;
   tmp = pe_data[30].read();
   pe_data_30.write(tmp);
}
void pe_array_type_wrapper::thread_pe_data_31()
{
   sc_int< 32 > tmp;
   tmp = pe_data[31].read();
   pe_data_31.write(tmp);
}


void pe_array_type_wrapper::InitInstances()
{
    pe_array0 = new pe_array( "pe_array" );

    pe_array0->clk(clk);
    pe_array0->rstn(rstn);
    pe_array0->enable(enable);
    pe_array0->src_vld(src_vld);
    pe_array0->clear(clear);
    pe_array0->init(init);
    pe_array0->systolic_en(systolic_en);
    pe_array0->systolic_depth(systolic_depth);
    pe_array0->mac_shift_len(mac_shift_len);
    pe_array0->src_0_s0[0](src_0_s0[0]);
    pe_array0->src_0_s0[1](src_0_s0[1]);
    pe_array0->src_0_s0[2](src_0_s0[2]);
    pe_array0->src_0_s0[3](src_0_s0[3]);
    pe_array0->src_0_s0[4](src_0_s0[4]);
    pe_array0->src_0_s0[5](src_0_s0[5]);
    pe_array0->src_0_s0[6](src_0_s0[6]);
    pe_array0->src_0_s0[7](src_0_s0[7]);
    pe_array0->src_0_s0[8](src_0_s0[8]);
    pe_array0->src_0_s0[9](src_0_s0[9]);
    pe_array0->src_0_s0[10](src_0_s0[10]);
    pe_array0->src_0_s0[11](src_0_s0[11]);
    pe_array0->src_0_s0[12](src_0_s0[12]);
    pe_array0->src_0_s0[13](src_0_s0[13]);
    pe_array0->src_0_s0[14](src_0_s0[14]);
    pe_array0->src_0_s0[15](src_0_s0[15]);
    pe_array0->src_0_s0[16](src_0_s0[16]);
    pe_array0->src_0_s0[17](src_0_s0[17]);
    pe_array0->src_0_s0[18](src_0_s0[18]);
    pe_array0->src_0_s0[19](src_0_s0[19]);
    pe_array0->src_0_s0[20](src_0_s0[20]);
    pe_array0->src_0_s0[21](src_0_s0[21]);
    pe_array0->src_0_s0[22](src_0_s0[22]);
    pe_array0->src_0_s0[23](src_0_s0[23]);
    pe_array0->src_0_s0[24](src_0_s0[24]);
    pe_array0->src_0_s0[25](src_0_s0[25]);
    pe_array0->src_0_s0[26](src_0_s0[26]);
    pe_array0->src_0_s0[27](src_0_s0[27]);
    pe_array0->src_0_s0[28](src_0_s0[28]);
    pe_array0->src_0_s0[29](src_0_s0[29]);
    pe_array0->src_0_s0[30](src_0_s0[30]);
    pe_array0->src_0_s0[31](src_0_s0[31]);
    pe_array0->src_0_s1[0](src_0_s1[0]);
    pe_array0->src_0_s1[1](src_0_s1[1]);
    pe_array0->src_0_s1[2](src_0_s1[2]);
    pe_array0->src_0_s1[3](src_0_s1[3]);
    pe_array0->src_0_s1[4](src_0_s1[4]);
    pe_array0->src_0_s1[5](src_0_s1[5]);
    pe_array0->src_0_s1[6](src_0_s1[6]);
    pe_array0->src_0_s1[7](src_0_s1[7]);
    pe_array0->src_0_s1[8](src_0_s1[8]);
    pe_array0->src_0_s1[9](src_0_s1[9]);
    pe_array0->src_0_s1[10](src_0_s1[10]);
    pe_array0->src_0_s1[11](src_0_s1[11]);
    pe_array0->src_0_s1[12](src_0_s1[12]);
    pe_array0->src_0_s1[13](src_0_s1[13]);
    pe_array0->src_0_s1[14](src_0_s1[14]);
    pe_array0->src_0_s1[15](src_0_s1[15]);
    pe_array0->src_0_s1[16](src_0_s1[16]);
    pe_array0->src_0_s1[17](src_0_s1[17]);
    pe_array0->src_0_s1[18](src_0_s1[18]);
    pe_array0->src_0_s1[19](src_0_s1[19]);
    pe_array0->src_0_s1[20](src_0_s1[20]);
    pe_array0->src_0_s1[21](src_0_s1[21]);
    pe_array0->src_0_s1[22](src_0_s1[22]);
    pe_array0->src_0_s1[23](src_0_s1[23]);
    pe_array0->src_0_s1[24](src_0_s1[24]);
    pe_array0->src_0_s1[25](src_0_s1[25]);
    pe_array0->src_0_s1[26](src_0_s1[26]);
    pe_array0->src_0_s1[27](src_0_s1[27]);
    pe_array0->src_0_s1[28](src_0_s1[28]);
    pe_array0->src_0_s1[29](src_0_s1[29]);
    pe_array0->src_0_s1[30](src_0_s1[30]);
    pe_array0->src_0_s1[31](src_0_s1[31]);
    pe_array0->src_0_s2[0](src_0_s2[0]);
    pe_array0->src_0_s2[1](src_0_s2[1]);
    pe_array0->src_0_s2[2](src_0_s2[2]);
    pe_array0->src_0_s2[3](src_0_s2[3]);
    pe_array0->src_0_s2[4](src_0_s2[4]);
    pe_array0->src_0_s2[5](src_0_s2[5]);
    pe_array0->src_0_s2[6](src_0_s2[6]);
    pe_array0->src_0_s2[7](src_0_s2[7]);
    pe_array0->src_0_s2[8](src_0_s2[8]);
    pe_array0->src_0_s2[9](src_0_s2[9]);
    pe_array0->src_0_s2[10](src_0_s2[10]);
    pe_array0->src_0_s2[11](src_0_s2[11]);
    pe_array0->src_0_s2[12](src_0_s2[12]);
    pe_array0->src_0_s2[13](src_0_s2[13]);
    pe_array0->src_0_s2[14](src_0_s2[14]);
    pe_array0->src_0_s2[15](src_0_s2[15]);
    pe_array0->src_0_s2[16](src_0_s2[16]);
    pe_array0->src_0_s2[17](src_0_s2[17]);
    pe_array0->src_0_s2[18](src_0_s2[18]);
    pe_array0->src_0_s2[19](src_0_s2[19]);
    pe_array0->src_0_s2[20](src_0_s2[20]);
    pe_array0->src_0_s2[21](src_0_s2[21]);
    pe_array0->src_0_s2[22](src_0_s2[22]);
    pe_array0->src_0_s2[23](src_0_s2[23]);
    pe_array0->src_0_s2[24](src_0_s2[24]);
    pe_array0->src_0_s2[25](src_0_s2[25]);
    pe_array0->src_0_s2[26](src_0_s2[26]);
    pe_array0->src_0_s2[27](src_0_s2[27]);
    pe_array0->src_0_s2[28](src_0_s2[28]);
    pe_array0->src_0_s2[29](src_0_s2[29]);
    pe_array0->src_0_s2[30](src_0_s2[30]);
    pe_array0->src_0_s2[31](src_0_s2[31]);
    pe_array0->src_0_s3[0](src_0_s3[0]);
    pe_array0->src_0_s3[1](src_0_s3[1]);
    pe_array0->src_0_s3[2](src_0_s3[2]);
    pe_array0->src_0_s3[3](src_0_s3[3]);
    pe_array0->src_0_s3[4](src_0_s3[4]);
    pe_array0->src_0_s3[5](src_0_s3[5]);
    pe_array0->src_0_s3[6](src_0_s3[6]);
    pe_array0->src_0_s3[7](src_0_s3[7]);
    pe_array0->src_0_s3[8](src_0_s3[8]);
    pe_array0->src_0_s3[9](src_0_s3[9]);
    pe_array0->src_0_s3[10](src_0_s3[10]);
    pe_array0->src_0_s3[11](src_0_s3[11]);
    pe_array0->src_0_s3[12](src_0_s3[12]);
    pe_array0->src_0_s3[13](src_0_s3[13]);
    pe_array0->src_0_s3[14](src_0_s3[14]);
    pe_array0->src_0_s3[15](src_0_s3[15]);
    pe_array0->src_0_s3[16](src_0_s3[16]);
    pe_array0->src_0_s3[17](src_0_s3[17]);
    pe_array0->src_0_s3[18](src_0_s3[18]);
    pe_array0->src_0_s3[19](src_0_s3[19]);
    pe_array0->src_0_s3[20](src_0_s3[20]);
    pe_array0->src_0_s3[21](src_0_s3[21]);
    pe_array0->src_0_s3[22](src_0_s3[22]);
    pe_array0->src_0_s3[23](src_0_s3[23]);
    pe_array0->src_0_s3[24](src_0_s3[24]);
    pe_array0->src_0_s3[25](src_0_s3[25]);
    pe_array0->src_0_s3[26](src_0_s3[26]);
    pe_array0->src_0_s3[27](src_0_s3[27]);
    pe_array0->src_0_s3[28](src_0_s3[28]);
    pe_array0->src_0_s3[29](src_0_s3[29]);
    pe_array0->src_0_s3[30](src_0_s3[30]);
    pe_array0->src_0_s3[31](src_0_s3[31]);
    pe_array0->src_0_s4[0](src_0_s4[0]);
    pe_array0->src_0_s4[1](src_0_s4[1]);
    pe_array0->src_0_s4[2](src_0_s4[2]);
    pe_array0->src_0_s4[3](src_0_s4[3]);
    pe_array0->src_0_s4[4](src_0_s4[4]);
    pe_array0->src_0_s4[5](src_0_s4[5]);
    pe_array0->src_0_s4[6](src_0_s4[6]);
    pe_array0->src_0_s4[7](src_0_s4[7]);
    pe_array0->src_0_s4[8](src_0_s4[8]);
    pe_array0->src_0_s4[9](src_0_s4[9]);
    pe_array0->src_0_s4[10](src_0_s4[10]);
    pe_array0->src_0_s4[11](src_0_s4[11]);
    pe_array0->src_0_s4[12](src_0_s4[12]);
    pe_array0->src_0_s4[13](src_0_s4[13]);
    pe_array0->src_0_s4[14](src_0_s4[14]);
    pe_array0->src_0_s4[15](src_0_s4[15]);
    pe_array0->src_0_s4[16](src_0_s4[16]);
    pe_array0->src_0_s4[17](src_0_s4[17]);
    pe_array0->src_0_s4[18](src_0_s4[18]);
    pe_array0->src_0_s4[19](src_0_s4[19]);
    pe_array0->src_0_s4[20](src_0_s4[20]);
    pe_array0->src_0_s4[21](src_0_s4[21]);
    pe_array0->src_0_s4[22](src_0_s4[22]);
    pe_array0->src_0_s4[23](src_0_s4[23]);
    pe_array0->src_0_s4[24](src_0_s4[24]);
    pe_array0->src_0_s4[25](src_0_s4[25]);
    pe_array0->src_0_s4[26](src_0_s4[26]);
    pe_array0->src_0_s4[27](src_0_s4[27]);
    pe_array0->src_0_s4[28](src_0_s4[28]);
    pe_array0->src_0_s4[29](src_0_s4[29]);
    pe_array0->src_0_s4[30](src_0_s4[30]);
    pe_array0->src_0_s4[31](src_0_s4[31]);
    pe_array0->src_0_s5[0](src_0_s5[0]);
    pe_array0->src_0_s5[1](src_0_s5[1]);
    pe_array0->src_0_s5[2](src_0_s5[2]);
    pe_array0->src_0_s5[3](src_0_s5[3]);
    pe_array0->src_0_s5[4](src_0_s5[4]);
    pe_array0->src_0_s5[5](src_0_s5[5]);
    pe_array0->src_0_s5[6](src_0_s5[6]);
    pe_array0->src_0_s5[7](src_0_s5[7]);
    pe_array0->src_0_s5[8](src_0_s5[8]);
    pe_array0->src_0_s5[9](src_0_s5[9]);
    pe_array0->src_0_s5[10](src_0_s5[10]);
    pe_array0->src_0_s5[11](src_0_s5[11]);
    pe_array0->src_0_s5[12](src_0_s5[12]);
    pe_array0->src_0_s5[13](src_0_s5[13]);
    pe_array0->src_0_s5[14](src_0_s5[14]);
    pe_array0->src_0_s5[15](src_0_s5[15]);
    pe_array0->src_0_s5[16](src_0_s5[16]);
    pe_array0->src_0_s5[17](src_0_s5[17]);
    pe_array0->src_0_s5[18](src_0_s5[18]);
    pe_array0->src_0_s5[19](src_0_s5[19]);
    pe_array0->src_0_s5[20](src_0_s5[20]);
    pe_array0->src_0_s5[21](src_0_s5[21]);
    pe_array0->src_0_s5[22](src_0_s5[22]);
    pe_array0->src_0_s5[23](src_0_s5[23]);
    pe_array0->src_0_s5[24](src_0_s5[24]);
    pe_array0->src_0_s5[25](src_0_s5[25]);
    pe_array0->src_0_s5[26](src_0_s5[26]);
    pe_array0->src_0_s5[27](src_0_s5[27]);
    pe_array0->src_0_s5[28](src_0_s5[28]);
    pe_array0->src_0_s5[29](src_0_s5[29]);
    pe_array0->src_0_s5[30](src_0_s5[30]);
    pe_array0->src_0_s5[31](src_0_s5[31]);
    pe_array0->src_0_s6[0](src_0_s6[0]);
    pe_array0->src_0_s6[1](src_0_s6[1]);
    pe_array0->src_0_s6[2](src_0_s6[2]);
    pe_array0->src_0_s6[3](src_0_s6[3]);
    pe_array0->src_0_s6[4](src_0_s6[4]);
    pe_array0->src_0_s6[5](src_0_s6[5]);
    pe_array0->src_0_s6[6](src_0_s6[6]);
    pe_array0->src_0_s6[7](src_0_s6[7]);
    pe_array0->src_0_s6[8](src_0_s6[8]);
    pe_array0->src_0_s6[9](src_0_s6[9]);
    pe_array0->src_0_s6[10](src_0_s6[10]);
    pe_array0->src_0_s6[11](src_0_s6[11]);
    pe_array0->src_0_s6[12](src_0_s6[12]);
    pe_array0->src_0_s6[13](src_0_s6[13]);
    pe_array0->src_0_s6[14](src_0_s6[14]);
    pe_array0->src_0_s6[15](src_0_s6[15]);
    pe_array0->src_0_s6[16](src_0_s6[16]);
    pe_array0->src_0_s6[17](src_0_s6[17]);
    pe_array0->src_0_s6[18](src_0_s6[18]);
    pe_array0->src_0_s6[19](src_0_s6[19]);
    pe_array0->src_0_s6[20](src_0_s6[20]);
    pe_array0->src_0_s6[21](src_0_s6[21]);
    pe_array0->src_0_s6[22](src_0_s6[22]);
    pe_array0->src_0_s6[23](src_0_s6[23]);
    pe_array0->src_0_s6[24](src_0_s6[24]);
    pe_array0->src_0_s6[25](src_0_s6[25]);
    pe_array0->src_0_s6[26](src_0_s6[26]);
    pe_array0->src_0_s6[27](src_0_s6[27]);
    pe_array0->src_0_s6[28](src_0_s6[28]);
    pe_array0->src_0_s6[29](src_0_s6[29]);
    pe_array0->src_0_s6[30](src_0_s6[30]);
    pe_array0->src_0_s6[31](src_0_s6[31]);
    pe_array0->src_1[0](src_1[0]);
    pe_array0->src_1[1](src_1[1]);
    pe_array0->src_1[2](src_1[2]);
    pe_array0->src_1[3](src_1[3]);
    pe_array0->src_1[4](src_1[4]);
    pe_array0->src_1[5](src_1[5]);
    pe_array0->src_1[6](src_1[6]);
    pe_array0->src_1[7](src_1[7]);
    pe_array0->src_1[8](src_1[8]);
    pe_array0->src_1[9](src_1[9]);
    pe_array0->src_1[10](src_1[10]);
    pe_array0->src_1[11](src_1[11]);
    pe_array0->src_1[12](src_1[12]);
    pe_array0->src_1[13](src_1[13]);
    pe_array0->src_1[14](src_1[14]);
    pe_array0->src_1[15](src_1[15]);
    pe_array0->src_1[16](src_1[16]);
    pe_array0->src_1[17](src_1[17]);
    pe_array0->src_1[18](src_1[18]);
    pe_array0->src_1[19](src_1[19]);
    pe_array0->src_1[20](src_1[20]);
    pe_array0->src_1[21](src_1[21]);
    pe_array0->src_1[22](src_1[22]);
    pe_array0->src_1[23](src_1[23]);
    pe_array0->src_1[24](src_1[24]);
    pe_array0->src_1[25](src_1[25]);
    pe_array0->src_1[26](src_1[26]);
    pe_array0->src_1[27](src_1[27]);
    pe_array0->src_1[28](src_1[28]);
    pe_array0->src_1[29](src_1[29]);
    pe_array0->src_1[30](src_1[30]);
    pe_array0->src_1[31](src_1[31]);
    pe_array0->pe_data[0](pe_data[0]);
    pe_array0->pe_data[1](pe_data[1]);
    pe_array0->pe_data[2](pe_data[2]);
    pe_array0->pe_data[3](pe_data[3]);
    pe_array0->pe_data[4](pe_data[4]);
    pe_array0->pe_data[5](pe_data[5]);
    pe_array0->pe_data[6](pe_data[6]);
    pe_array0->pe_data[7](pe_data[7]);
    pe_array0->pe_data[8](pe_data[8]);
    pe_array0->pe_data[9](pe_data[9]);
    pe_array0->pe_data[10](pe_data[10]);
    pe_array0->pe_data[11](pe_data[11]);
    pe_array0->pe_data[12](pe_data[12]);
    pe_array0->pe_data[13](pe_data[13]);
    pe_array0->pe_data[14](pe_data[14]);
    pe_array0->pe_data[15](pe_data[15]);
    pe_array0->pe_data[16](pe_data[16]);
    pe_array0->pe_data[17](pe_data[17]);
    pe_array0->pe_data[18](pe_data[18]);
    pe_array0->pe_data[19](pe_data[19]);
    pe_array0->pe_data[20](pe_data[20]);
    pe_array0->pe_data[21](pe_data[21]);
    pe_array0->pe_data[22](pe_data[22]);
    pe_array0->pe_data[23](pe_data[23]);
    pe_array0->pe_data[24](pe_data[24]);
    pe_array0->pe_data[25](pe_data[25]);
    pe_array0->pe_data[26](pe_data[26]);
    pe_array0->pe_data[27](pe_data[27]);
    pe_array0->pe_data[28](pe_data[28]);
    pe_array0->pe_data[29](pe_data[29]);
    pe_array0->pe_data[30](pe_data[30]);
    pe_array0->pe_data[31](pe_data[31]);
    pe_array0->pe_data_valid(pe_data_valid);

}

void pe_array_type_wrapper::InitThreads()
{
    SC_METHOD(thread_src_0_s0_0);
      sensitive << src_0_s0_0;
    SC_METHOD(thread_src_0_s0_1);
      sensitive << src_0_s0_1;
    SC_METHOD(thread_src_0_s0_2);
      sensitive << src_0_s0_2;
    SC_METHOD(thread_src_0_s0_3);
      sensitive << src_0_s0_3;
    SC_METHOD(thread_src_0_s0_4);
      sensitive << src_0_s0_4;
    SC_METHOD(thread_src_0_s0_5);
      sensitive << src_0_s0_5;
    SC_METHOD(thread_src_0_s0_6);
      sensitive << src_0_s0_6;
    SC_METHOD(thread_src_0_s0_7);
      sensitive << src_0_s0_7;
    SC_METHOD(thread_src_0_s0_8);
      sensitive << src_0_s0_8;
    SC_METHOD(thread_src_0_s0_9);
      sensitive << src_0_s0_9;
    SC_METHOD(thread_src_0_s0_10);
      sensitive << src_0_s0_10;
    SC_METHOD(thread_src_0_s0_11);
      sensitive << src_0_s0_11;
    SC_METHOD(thread_src_0_s0_12);
      sensitive << src_0_s0_12;
    SC_METHOD(thread_src_0_s0_13);
      sensitive << src_0_s0_13;
    SC_METHOD(thread_src_0_s0_14);
      sensitive << src_0_s0_14;
    SC_METHOD(thread_src_0_s0_15);
      sensitive << src_0_s0_15;
    SC_METHOD(thread_src_0_s0_16);
      sensitive << src_0_s0_16;
    SC_METHOD(thread_src_0_s0_17);
      sensitive << src_0_s0_17;
    SC_METHOD(thread_src_0_s0_18);
      sensitive << src_0_s0_18;
    SC_METHOD(thread_src_0_s0_19);
      sensitive << src_0_s0_19;
    SC_METHOD(thread_src_0_s0_20);
      sensitive << src_0_s0_20;
    SC_METHOD(thread_src_0_s0_21);
      sensitive << src_0_s0_21;
    SC_METHOD(thread_src_0_s0_22);
      sensitive << src_0_s0_22;
    SC_METHOD(thread_src_0_s0_23);
      sensitive << src_0_s0_23;
    SC_METHOD(thread_src_0_s0_24);
      sensitive << src_0_s0_24;
    SC_METHOD(thread_src_0_s0_25);
      sensitive << src_0_s0_25;
    SC_METHOD(thread_src_0_s0_26);
      sensitive << src_0_s0_26;
    SC_METHOD(thread_src_0_s0_27);
      sensitive << src_0_s0_27;
    SC_METHOD(thread_src_0_s0_28);
      sensitive << src_0_s0_28;
    SC_METHOD(thread_src_0_s0_29);
      sensitive << src_0_s0_29;
    SC_METHOD(thread_src_0_s0_30);
      sensitive << src_0_s0_30;
    SC_METHOD(thread_src_0_s0_31);
      sensitive << src_0_s0_31;
    SC_METHOD(thread_src_0_s1_0);
      sensitive << src_0_s1_0;
    SC_METHOD(thread_src_0_s1_1);
      sensitive << src_0_s1_1;
    SC_METHOD(thread_src_0_s1_2);
      sensitive << src_0_s1_2;
    SC_METHOD(thread_src_0_s1_3);
      sensitive << src_0_s1_3;
    SC_METHOD(thread_src_0_s1_4);
      sensitive << src_0_s1_4;
    SC_METHOD(thread_src_0_s1_5);
      sensitive << src_0_s1_5;
    SC_METHOD(thread_src_0_s1_6);
      sensitive << src_0_s1_6;
    SC_METHOD(thread_src_0_s1_7);
      sensitive << src_0_s1_7;
    SC_METHOD(thread_src_0_s1_8);
      sensitive << src_0_s1_8;
    SC_METHOD(thread_src_0_s1_9);
      sensitive << src_0_s1_9;
    SC_METHOD(thread_src_0_s1_10);
      sensitive << src_0_s1_10;
    SC_METHOD(thread_src_0_s1_11);
      sensitive << src_0_s1_11;
    SC_METHOD(thread_src_0_s1_12);
      sensitive << src_0_s1_12;
    SC_METHOD(thread_src_0_s1_13);
      sensitive << src_0_s1_13;
    SC_METHOD(thread_src_0_s1_14);
      sensitive << src_0_s1_14;
    SC_METHOD(thread_src_0_s1_15);
      sensitive << src_0_s1_15;
    SC_METHOD(thread_src_0_s1_16);
      sensitive << src_0_s1_16;
    SC_METHOD(thread_src_0_s1_17);
      sensitive << src_0_s1_17;
    SC_METHOD(thread_src_0_s1_18);
      sensitive << src_0_s1_18;
    SC_METHOD(thread_src_0_s1_19);
      sensitive << src_0_s1_19;
    SC_METHOD(thread_src_0_s1_20);
      sensitive << src_0_s1_20;
    SC_METHOD(thread_src_0_s1_21);
      sensitive << src_0_s1_21;
    SC_METHOD(thread_src_0_s1_22);
      sensitive << src_0_s1_22;
    SC_METHOD(thread_src_0_s1_23);
      sensitive << src_0_s1_23;
    SC_METHOD(thread_src_0_s1_24);
      sensitive << src_0_s1_24;
    SC_METHOD(thread_src_0_s1_25);
      sensitive << src_0_s1_25;
    SC_METHOD(thread_src_0_s1_26);
      sensitive << src_0_s1_26;
    SC_METHOD(thread_src_0_s1_27);
      sensitive << src_0_s1_27;
    SC_METHOD(thread_src_0_s1_28);
      sensitive << src_0_s1_28;
    SC_METHOD(thread_src_0_s1_29);
      sensitive << src_0_s1_29;
    SC_METHOD(thread_src_0_s1_30);
      sensitive << src_0_s1_30;
    SC_METHOD(thread_src_0_s1_31);
      sensitive << src_0_s1_31;
    SC_METHOD(thread_src_0_s2_0);
      sensitive << src_0_s2_0;
    SC_METHOD(thread_src_0_s2_1);
      sensitive << src_0_s2_1;
    SC_METHOD(thread_src_0_s2_2);
      sensitive << src_0_s2_2;
    SC_METHOD(thread_src_0_s2_3);
      sensitive << src_0_s2_3;
    SC_METHOD(thread_src_0_s2_4);
      sensitive << src_0_s2_4;
    SC_METHOD(thread_src_0_s2_5);
      sensitive << src_0_s2_5;
    SC_METHOD(thread_src_0_s2_6);
      sensitive << src_0_s2_6;
    SC_METHOD(thread_src_0_s2_7);
      sensitive << src_0_s2_7;
    SC_METHOD(thread_src_0_s2_8);
      sensitive << src_0_s2_8;
    SC_METHOD(thread_src_0_s2_9);
      sensitive << src_0_s2_9;
    SC_METHOD(thread_src_0_s2_10);
      sensitive << src_0_s2_10;
    SC_METHOD(thread_src_0_s2_11);
      sensitive << src_0_s2_11;
    SC_METHOD(thread_src_0_s2_12);
      sensitive << src_0_s2_12;
    SC_METHOD(thread_src_0_s2_13);
      sensitive << src_0_s2_13;
    SC_METHOD(thread_src_0_s2_14);
      sensitive << src_0_s2_14;
    SC_METHOD(thread_src_0_s2_15);
      sensitive << src_0_s2_15;
    SC_METHOD(thread_src_0_s2_16);
      sensitive << src_0_s2_16;
    SC_METHOD(thread_src_0_s2_17);
      sensitive << src_0_s2_17;
    SC_METHOD(thread_src_0_s2_18);
      sensitive << src_0_s2_18;
    SC_METHOD(thread_src_0_s2_19);
      sensitive << src_0_s2_19;
    SC_METHOD(thread_src_0_s2_20);
      sensitive << src_0_s2_20;
    SC_METHOD(thread_src_0_s2_21);
      sensitive << src_0_s2_21;
    SC_METHOD(thread_src_0_s2_22);
      sensitive << src_0_s2_22;
    SC_METHOD(thread_src_0_s2_23);
      sensitive << src_0_s2_23;
    SC_METHOD(thread_src_0_s2_24);
      sensitive << src_0_s2_24;
    SC_METHOD(thread_src_0_s2_25);
      sensitive << src_0_s2_25;
    SC_METHOD(thread_src_0_s2_26);
      sensitive << src_0_s2_26;
    SC_METHOD(thread_src_0_s2_27);
      sensitive << src_0_s2_27;
    SC_METHOD(thread_src_0_s2_28);
      sensitive << src_0_s2_28;
    SC_METHOD(thread_src_0_s2_29);
      sensitive << src_0_s2_29;
    SC_METHOD(thread_src_0_s2_30);
      sensitive << src_0_s2_30;
    SC_METHOD(thread_src_0_s2_31);
      sensitive << src_0_s2_31;
    SC_METHOD(thread_src_0_s3_0);
      sensitive << src_0_s3_0;
    SC_METHOD(thread_src_0_s3_1);
      sensitive << src_0_s3_1;
    SC_METHOD(thread_src_0_s3_2);
      sensitive << src_0_s3_2;
    SC_METHOD(thread_src_0_s3_3);
      sensitive << src_0_s3_3;
    SC_METHOD(thread_src_0_s3_4);
      sensitive << src_0_s3_4;
    SC_METHOD(thread_src_0_s3_5);
      sensitive << src_0_s3_5;
    SC_METHOD(thread_src_0_s3_6);
      sensitive << src_0_s3_6;
    SC_METHOD(thread_src_0_s3_7);
      sensitive << src_0_s3_7;
    SC_METHOD(thread_src_0_s3_8);
      sensitive << src_0_s3_8;
    SC_METHOD(thread_src_0_s3_9);
      sensitive << src_0_s3_9;
    SC_METHOD(thread_src_0_s3_10);
      sensitive << src_0_s3_10;
    SC_METHOD(thread_src_0_s3_11);
      sensitive << src_0_s3_11;
    SC_METHOD(thread_src_0_s3_12);
      sensitive << src_0_s3_12;
    SC_METHOD(thread_src_0_s3_13);
      sensitive << src_0_s3_13;
    SC_METHOD(thread_src_0_s3_14);
      sensitive << src_0_s3_14;
    SC_METHOD(thread_src_0_s3_15);
      sensitive << src_0_s3_15;
    SC_METHOD(thread_src_0_s3_16);
      sensitive << src_0_s3_16;
    SC_METHOD(thread_src_0_s3_17);
      sensitive << src_0_s3_17;
    SC_METHOD(thread_src_0_s3_18);
      sensitive << src_0_s3_18;
    SC_METHOD(thread_src_0_s3_19);
      sensitive << src_0_s3_19;
    SC_METHOD(thread_src_0_s3_20);
      sensitive << src_0_s3_20;
    SC_METHOD(thread_src_0_s3_21);
      sensitive << src_0_s3_21;
    SC_METHOD(thread_src_0_s3_22);
      sensitive << src_0_s3_22;
    SC_METHOD(thread_src_0_s3_23);
      sensitive << src_0_s3_23;
    SC_METHOD(thread_src_0_s3_24);
      sensitive << src_0_s3_24;
    SC_METHOD(thread_src_0_s3_25);
      sensitive << src_0_s3_25;
    SC_METHOD(thread_src_0_s3_26);
      sensitive << src_0_s3_26;
    SC_METHOD(thread_src_0_s3_27);
      sensitive << src_0_s3_27;
    SC_METHOD(thread_src_0_s3_28);
      sensitive << src_0_s3_28;
    SC_METHOD(thread_src_0_s3_29);
      sensitive << src_0_s3_29;
    SC_METHOD(thread_src_0_s3_30);
      sensitive << src_0_s3_30;
    SC_METHOD(thread_src_0_s3_31);
      sensitive << src_0_s3_31;
    SC_METHOD(thread_src_0_s4_0);
      sensitive << src_0_s4_0;
    SC_METHOD(thread_src_0_s4_1);
      sensitive << src_0_s4_1;
    SC_METHOD(thread_src_0_s4_2);
      sensitive << src_0_s4_2;
    SC_METHOD(thread_src_0_s4_3);
      sensitive << src_0_s4_3;
    SC_METHOD(thread_src_0_s4_4);
      sensitive << src_0_s4_4;
    SC_METHOD(thread_src_0_s4_5);
      sensitive << src_0_s4_5;
    SC_METHOD(thread_src_0_s4_6);
      sensitive << src_0_s4_6;
    SC_METHOD(thread_src_0_s4_7);
      sensitive << src_0_s4_7;
    SC_METHOD(thread_src_0_s4_8);
      sensitive << src_0_s4_8;
    SC_METHOD(thread_src_0_s4_9);
      sensitive << src_0_s4_9;
    SC_METHOD(thread_src_0_s4_10);
      sensitive << src_0_s4_10;
    SC_METHOD(thread_src_0_s4_11);
      sensitive << src_0_s4_11;
    SC_METHOD(thread_src_0_s4_12);
      sensitive << src_0_s4_12;
    SC_METHOD(thread_src_0_s4_13);
      sensitive << src_0_s4_13;
    SC_METHOD(thread_src_0_s4_14);
      sensitive << src_0_s4_14;
    SC_METHOD(thread_src_0_s4_15);
      sensitive << src_0_s4_15;
    SC_METHOD(thread_src_0_s4_16);
      sensitive << src_0_s4_16;
    SC_METHOD(thread_src_0_s4_17);
      sensitive << src_0_s4_17;
    SC_METHOD(thread_src_0_s4_18);
      sensitive << src_0_s4_18;
    SC_METHOD(thread_src_0_s4_19);
      sensitive << src_0_s4_19;
    SC_METHOD(thread_src_0_s4_20);
      sensitive << src_0_s4_20;
    SC_METHOD(thread_src_0_s4_21);
      sensitive << src_0_s4_21;
    SC_METHOD(thread_src_0_s4_22);
      sensitive << src_0_s4_22;
    SC_METHOD(thread_src_0_s4_23);
      sensitive << src_0_s4_23;
    SC_METHOD(thread_src_0_s4_24);
      sensitive << src_0_s4_24;
    SC_METHOD(thread_src_0_s4_25);
      sensitive << src_0_s4_25;
    SC_METHOD(thread_src_0_s4_26);
      sensitive << src_0_s4_26;
    SC_METHOD(thread_src_0_s4_27);
      sensitive << src_0_s4_27;
    SC_METHOD(thread_src_0_s4_28);
      sensitive << src_0_s4_28;
    SC_METHOD(thread_src_0_s4_29);
      sensitive << src_0_s4_29;
    SC_METHOD(thread_src_0_s4_30);
      sensitive << src_0_s4_30;
    SC_METHOD(thread_src_0_s4_31);
      sensitive << src_0_s4_31;
    SC_METHOD(thread_src_0_s5_0);
      sensitive << src_0_s5_0;
    SC_METHOD(thread_src_0_s5_1);
      sensitive << src_0_s5_1;
    SC_METHOD(thread_src_0_s5_2);
      sensitive << src_0_s5_2;
    SC_METHOD(thread_src_0_s5_3);
      sensitive << src_0_s5_3;
    SC_METHOD(thread_src_0_s5_4);
      sensitive << src_0_s5_4;
    SC_METHOD(thread_src_0_s5_5);
      sensitive << src_0_s5_5;
    SC_METHOD(thread_src_0_s5_6);
      sensitive << src_0_s5_6;
    SC_METHOD(thread_src_0_s5_7);
      sensitive << src_0_s5_7;
    SC_METHOD(thread_src_0_s5_8);
      sensitive << src_0_s5_8;
    SC_METHOD(thread_src_0_s5_9);
      sensitive << src_0_s5_9;
    SC_METHOD(thread_src_0_s5_10);
      sensitive << src_0_s5_10;
    SC_METHOD(thread_src_0_s5_11);
      sensitive << src_0_s5_11;
    SC_METHOD(thread_src_0_s5_12);
      sensitive << src_0_s5_12;
    SC_METHOD(thread_src_0_s5_13);
      sensitive << src_0_s5_13;
    SC_METHOD(thread_src_0_s5_14);
      sensitive << src_0_s5_14;
    SC_METHOD(thread_src_0_s5_15);
      sensitive << src_0_s5_15;
    SC_METHOD(thread_src_0_s5_16);
      sensitive << src_0_s5_16;
    SC_METHOD(thread_src_0_s5_17);
      sensitive << src_0_s5_17;
    SC_METHOD(thread_src_0_s5_18);
      sensitive << src_0_s5_18;
    SC_METHOD(thread_src_0_s5_19);
      sensitive << src_0_s5_19;
    SC_METHOD(thread_src_0_s5_20);
      sensitive << src_0_s5_20;
    SC_METHOD(thread_src_0_s5_21);
      sensitive << src_0_s5_21;
    SC_METHOD(thread_src_0_s5_22);
      sensitive << src_0_s5_22;
    SC_METHOD(thread_src_0_s5_23);
      sensitive << src_0_s5_23;
    SC_METHOD(thread_src_0_s5_24);
      sensitive << src_0_s5_24;
    SC_METHOD(thread_src_0_s5_25);
      sensitive << src_0_s5_25;
    SC_METHOD(thread_src_0_s5_26);
      sensitive << src_0_s5_26;
    SC_METHOD(thread_src_0_s5_27);
      sensitive << src_0_s5_27;
    SC_METHOD(thread_src_0_s5_28);
      sensitive << src_0_s5_28;
    SC_METHOD(thread_src_0_s5_29);
      sensitive << src_0_s5_29;
    SC_METHOD(thread_src_0_s5_30);
      sensitive << src_0_s5_30;
    SC_METHOD(thread_src_0_s5_31);
      sensitive << src_0_s5_31;
    SC_METHOD(thread_src_0_s6_0);
      sensitive << src_0_s6_0;
    SC_METHOD(thread_src_0_s6_1);
      sensitive << src_0_s6_1;
    SC_METHOD(thread_src_0_s6_2);
      sensitive << src_0_s6_2;
    SC_METHOD(thread_src_0_s6_3);
      sensitive << src_0_s6_3;
    SC_METHOD(thread_src_0_s6_4);
      sensitive << src_0_s6_4;
    SC_METHOD(thread_src_0_s6_5);
      sensitive << src_0_s6_5;
    SC_METHOD(thread_src_0_s6_6);
      sensitive << src_0_s6_6;
    SC_METHOD(thread_src_0_s6_7);
      sensitive << src_0_s6_7;
    SC_METHOD(thread_src_0_s6_8);
      sensitive << src_0_s6_8;
    SC_METHOD(thread_src_0_s6_9);
      sensitive << src_0_s6_9;
    SC_METHOD(thread_src_0_s6_10);
      sensitive << src_0_s6_10;
    SC_METHOD(thread_src_0_s6_11);
      sensitive << src_0_s6_11;
    SC_METHOD(thread_src_0_s6_12);
      sensitive << src_0_s6_12;
    SC_METHOD(thread_src_0_s6_13);
      sensitive << src_0_s6_13;
    SC_METHOD(thread_src_0_s6_14);
      sensitive << src_0_s6_14;
    SC_METHOD(thread_src_0_s6_15);
      sensitive << src_0_s6_15;
    SC_METHOD(thread_src_0_s6_16);
      sensitive << src_0_s6_16;
    SC_METHOD(thread_src_0_s6_17);
      sensitive << src_0_s6_17;
    SC_METHOD(thread_src_0_s6_18);
      sensitive << src_0_s6_18;
    SC_METHOD(thread_src_0_s6_19);
      sensitive << src_0_s6_19;
    SC_METHOD(thread_src_0_s6_20);
      sensitive << src_0_s6_20;
    SC_METHOD(thread_src_0_s6_21);
      sensitive << src_0_s6_21;
    SC_METHOD(thread_src_0_s6_22);
      sensitive << src_0_s6_22;
    SC_METHOD(thread_src_0_s6_23);
      sensitive << src_0_s6_23;
    SC_METHOD(thread_src_0_s6_24);
      sensitive << src_0_s6_24;
    SC_METHOD(thread_src_0_s6_25);
      sensitive << src_0_s6_25;
    SC_METHOD(thread_src_0_s6_26);
      sensitive << src_0_s6_26;
    SC_METHOD(thread_src_0_s6_27);
      sensitive << src_0_s6_27;
    SC_METHOD(thread_src_0_s6_28);
      sensitive << src_0_s6_28;
    SC_METHOD(thread_src_0_s6_29);
      sensitive << src_0_s6_29;
    SC_METHOD(thread_src_0_s6_30);
      sensitive << src_0_s6_30;
    SC_METHOD(thread_src_0_s6_31);
      sensitive << src_0_s6_31;
    SC_METHOD(thread_src_1_0);
      sensitive << src_1_0;
    SC_METHOD(thread_src_1_1);
      sensitive << src_1_1;
    SC_METHOD(thread_src_1_2);
      sensitive << src_1_2;
    SC_METHOD(thread_src_1_3);
      sensitive << src_1_3;
    SC_METHOD(thread_src_1_4);
      sensitive << src_1_4;
    SC_METHOD(thread_src_1_5);
      sensitive << src_1_5;
    SC_METHOD(thread_src_1_6);
      sensitive << src_1_6;
    SC_METHOD(thread_src_1_7);
      sensitive << src_1_7;
    SC_METHOD(thread_src_1_8);
      sensitive << src_1_8;
    SC_METHOD(thread_src_1_9);
      sensitive << src_1_9;
    SC_METHOD(thread_src_1_10);
      sensitive << src_1_10;
    SC_METHOD(thread_src_1_11);
      sensitive << src_1_11;
    SC_METHOD(thread_src_1_12);
      sensitive << src_1_12;
    SC_METHOD(thread_src_1_13);
      sensitive << src_1_13;
    SC_METHOD(thread_src_1_14);
      sensitive << src_1_14;
    SC_METHOD(thread_src_1_15);
      sensitive << src_1_15;
    SC_METHOD(thread_src_1_16);
      sensitive << src_1_16;
    SC_METHOD(thread_src_1_17);
      sensitive << src_1_17;
    SC_METHOD(thread_src_1_18);
      sensitive << src_1_18;
    SC_METHOD(thread_src_1_19);
      sensitive << src_1_19;
    SC_METHOD(thread_src_1_20);
      sensitive << src_1_20;
    SC_METHOD(thread_src_1_21);
      sensitive << src_1_21;
    SC_METHOD(thread_src_1_22);
      sensitive << src_1_22;
    SC_METHOD(thread_src_1_23);
      sensitive << src_1_23;
    SC_METHOD(thread_src_1_24);
      sensitive << src_1_24;
    SC_METHOD(thread_src_1_25);
      sensitive << src_1_25;
    SC_METHOD(thread_src_1_26);
      sensitive << src_1_26;
    SC_METHOD(thread_src_1_27);
      sensitive << src_1_27;
    SC_METHOD(thread_src_1_28);
      sensitive << src_1_28;
    SC_METHOD(thread_src_1_29);
      sensitive << src_1_29;
    SC_METHOD(thread_src_1_30);
      sensitive << src_1_30;
    SC_METHOD(thread_src_1_31);
      sensitive << src_1_31;
    SC_METHOD(thread_pe_data_0);
      sensitive << pe_data[0];
    SC_METHOD(thread_pe_data_1);
      sensitive << pe_data[1];
    SC_METHOD(thread_pe_data_2);
      sensitive << pe_data[2];
    SC_METHOD(thread_pe_data_3);
      sensitive << pe_data[3];
    SC_METHOD(thread_pe_data_4);
      sensitive << pe_data[4];
    SC_METHOD(thread_pe_data_5);
      sensitive << pe_data[5];
    SC_METHOD(thread_pe_data_6);
      sensitive << pe_data[6];
    SC_METHOD(thread_pe_data_7);
      sensitive << pe_data[7];
    SC_METHOD(thread_pe_data_8);
      sensitive << pe_data[8];
    SC_METHOD(thread_pe_data_9);
      sensitive << pe_data[9];
    SC_METHOD(thread_pe_data_10);
      sensitive << pe_data[10];
    SC_METHOD(thread_pe_data_11);
      sensitive << pe_data[11];
    SC_METHOD(thread_pe_data_12);
      sensitive << pe_data[12];
    SC_METHOD(thread_pe_data_13);
      sensitive << pe_data[13];
    SC_METHOD(thread_pe_data_14);
      sensitive << pe_data[14];
    SC_METHOD(thread_pe_data_15);
      sensitive << pe_data[15];
    SC_METHOD(thread_pe_data_16);
      sensitive << pe_data[16];
    SC_METHOD(thread_pe_data_17);
      sensitive << pe_data[17];
    SC_METHOD(thread_pe_data_18);
      sensitive << pe_data[18];
    SC_METHOD(thread_pe_data_19);
      sensitive << pe_data[19];
    SC_METHOD(thread_pe_data_20);
      sensitive << pe_data[20];
    SC_METHOD(thread_pe_data_21);
      sensitive << pe_data[21];
    SC_METHOD(thread_pe_data_22);
      sensitive << pe_data[22];
    SC_METHOD(thread_pe_data_23);
      sensitive << pe_data[23];
    SC_METHOD(thread_pe_data_24);
      sensitive << pe_data[24];
    SC_METHOD(thread_pe_data_25);
      sensitive << pe_data[25];
    SC_METHOD(thread_pe_data_26);
      sensitive << pe_data[26];
    SC_METHOD(thread_pe_data_27);
      sensitive << pe_data[27];
    SC_METHOD(thread_pe_data_28);
      sensitive << pe_data[28];
    SC_METHOD(thread_pe_data_29);
      sensitive << pe_data[29];
    SC_METHOD(thread_pe_data_30);
      sensitive << pe_data[30];
    SC_METHOD(thread_pe_data_31);
      sensitive << pe_data[31];

}

void pe_array_type_wrapper::DeleteInstances()
{
        delete pe_array0;
        pe_array0 = 0;
}

