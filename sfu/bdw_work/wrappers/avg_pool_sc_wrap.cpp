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
* This file is used to wrap the three different versions of the DUT
* block called "avg_pool". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"avg_pool_sc_wrap.h"
#include	"avg_pool_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void avg_pool_wrapper::InitInstances(  )
{
	
            
    avg_pool0 = new avg_pool( "avg_pool" );

    avg_pool0->clk(clk);
    avg_pool0->rstn(rstn);
    avg_pool0->enable(enable);
    avg_pool0->init(init);
    avg_pool0->in_data_0(in_data[0]);
    avg_pool0->in_data_1(in_data[1]);
    avg_pool0->in_data_2(in_data[2]);
    avg_pool0->in_data_3(in_data[3]);
    avg_pool0->in_data_4(in_data[4]);
    avg_pool0->in_data_5(in_data[5]);
    avg_pool0->in_data_6(in_data[6]);
    avg_pool0->in_data_7(in_data[7]);
    avg_pool0->in_data_8(in_data[8]);
    avg_pool0->in_data_9(in_data[9]);
    avg_pool0->in_data_10(in_data[10]);
    avg_pool0->in_data_11(in_data[11]);
    avg_pool0->in_data_12(in_data[12]);
    avg_pool0->in_data_13(in_data[13]);
    avg_pool0->in_data_14(in_data[14]);
    avg_pool0->in_data_15(in_data[15]);
    avg_pool0->in_data_16(in_data[16]);
    avg_pool0->in_data_17(in_data[17]);
    avg_pool0->in_data_18(in_data[18]);
    avg_pool0->in_data_19(in_data[19]);
    avg_pool0->in_data_20(in_data[20]);
    avg_pool0->in_data_21(in_data[21]);
    avg_pool0->in_data_22(in_data[22]);
    avg_pool0->in_data_23(in_data[23]);
    avg_pool0->in_data_24(in_data[24]);
    avg_pool0->in_data_25(in_data[25]);
    avg_pool0->in_data_26(in_data[26]);
    avg_pool0->in_data_27(in_data[27]);
    avg_pool0->in_data_28(in_data[28]);
    avg_pool0->in_data_29(in_data[29]);
    avg_pool0->in_data_30(in_data[30]);
    avg_pool0->in_data_31(in_data[31]);
    avg_pool0->in_data_valid(in_data_valid);
    avg_pool0->out_data_0(out_data[0]);
    avg_pool0->out_data_1(out_data[1]);
    avg_pool0->out_data_2(out_data[2]);
    avg_pool0->out_data_3(out_data[3]);
    avg_pool0->out_data_4(out_data[4]);
    avg_pool0->out_data_5(out_data[5]);
    avg_pool0->out_data_6(out_data[6]);
    avg_pool0->out_data_7(out_data[7]);
    avg_pool0->out_data_8(out_data[8]);
    avg_pool0->out_data_9(out_data[9]);
    avg_pool0->out_data_10(out_data[10]);
    avg_pool0->out_data_11(out_data[11]);
    avg_pool0->out_data_12(out_data[12]);
    avg_pool0->out_data_13(out_data[13]);
    avg_pool0->out_data_14(out_data[14]);
    avg_pool0->out_data_15(out_data[15]);
    avg_pool0->out_data_16(out_data[16]);
    avg_pool0->out_data_17(out_data[17]);
    avg_pool0->out_data_18(out_data[18]);
    avg_pool0->out_data_19(out_data[19]);
    avg_pool0->out_data_20(out_data[20]);
    avg_pool0->out_data_21(out_data[21]);
    avg_pool0->out_data_22(out_data[22]);
    avg_pool0->out_data_23(out_data[23]);
    avg_pool0->out_data_24(out_data[24]);
    avg_pool0->out_data_25(out_data[25]);
    avg_pool0->out_data_26(out_data[26]);
    avg_pool0->out_data_27(out_data[27]);
    avg_pool0->out_data_28(out_data[28]);
    avg_pool0->out_data_29(out_data[29]);
    avg_pool0->out_data_30(out_data[30]);
    avg_pool0->out_data_31(out_data[31]);
    avg_pool0->out_data_valid(out_data_valid);

}

void avg_pool_wrapper::InitThreads()
{
    
}

void avg_pool_wrapper::DeleteInstances()
{
    if (avg_pool0)
    {
        delete avg_pool0;
        avg_pool0 = 0;
    }
}

