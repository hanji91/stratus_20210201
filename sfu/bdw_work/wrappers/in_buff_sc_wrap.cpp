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
* block called "in_buff". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"in_buff_sc_wrap.h"
#include	"in_buff_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void in_buff_wrapper::InitInstances(  )
{
	
            
    in_buff0 = new in_buff( "in_buff" );

    in_buff0->clk(clk);
    in_buff0->rstn(rstn);
    in_buff0->enable(enable);
    in_buff0->in_data_0(in_data[0]);
    in_buff0->in_data_1(in_data[1]);
    in_buff0->in_data_2(in_data[2]);
    in_buff0->in_data_3(in_data[3]);
    in_buff0->in_data_4(in_data[4]);
    in_buff0->in_data_5(in_data[5]);
    in_buff0->in_data_6(in_data[6]);
    in_buff0->in_data_7(in_data[7]);
    in_buff0->in_data_8(in_data[8]);
    in_buff0->in_data_9(in_data[9]);
    in_buff0->in_data_10(in_data[10]);
    in_buff0->in_data_11(in_data[11]);
    in_buff0->in_data_12(in_data[12]);
    in_buff0->in_data_13(in_data[13]);
    in_buff0->in_data_14(in_data[14]);
    in_buff0->in_data_15(in_data[15]);
    in_buff0->in_data_16(in_data[16]);
    in_buff0->in_data_17(in_data[17]);
    in_buff0->in_data_18(in_data[18]);
    in_buff0->in_data_19(in_data[19]);
    in_buff0->in_data_20(in_data[20]);
    in_buff0->in_data_21(in_data[21]);
    in_buff0->in_data_22(in_data[22]);
    in_buff0->in_data_23(in_data[23]);
    in_buff0->in_data_24(in_data[24]);
    in_buff0->in_data_25(in_data[25]);
    in_buff0->in_data_26(in_data[26]);
    in_buff0->in_data_27(in_data[27]);
    in_buff0->in_data_28(in_data[28]);
    in_buff0->in_data_29(in_data[29]);
    in_buff0->in_data_30(in_data[30]);
    in_buff0->in_data_31(in_data[31]);
    in_buff0->in_data_valid(in_data_valid);
    in_buff0->out_data_0(out_data[0]);
    in_buff0->out_data_1(out_data[1]);
    in_buff0->out_data_2(out_data[2]);
    in_buff0->out_data_3(out_data[3]);
    in_buff0->out_data_4(out_data[4]);
    in_buff0->out_data_5(out_data[5]);
    in_buff0->out_data_6(out_data[6]);
    in_buff0->out_data_7(out_data[7]);
    in_buff0->out_data_valid(out_data_valid);

}

void in_buff_wrapper::InitThreads()
{
    
}

void in_buff_wrapper::DeleteInstances()
{
    if (in_buff0)
    {
        delete in_buff0;
        in_buff0 = 0;
    }
}

