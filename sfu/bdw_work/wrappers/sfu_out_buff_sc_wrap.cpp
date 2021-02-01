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
* block called "sfu_out_buff". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"sfu_out_buff_sc_wrap.h"
#include	"sfu_out_buff_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void sfu_out_buff_wrapper::InitInstances(  )
{
	
            
    sfu_out_buff0 = new sfu_out_buff( "sfu_out_buff" );

    sfu_out_buff0->clk(clk);
    sfu_out_buff0->rstn(rstn);
    sfu_out_buff0->enable(enable);
    sfu_out_buff0->learned_clip_en(learned_clip_en);
    sfu_out_buff0->in0_data_0(in0_data[0]);
    sfu_out_buff0->in0_data_1(in0_data[1]);
    sfu_out_buff0->in0_data_2(in0_data[2]);
    sfu_out_buff0->in0_data_3(in0_data[3]);
    sfu_out_buff0->in0_data_4(in0_data[4]);
    sfu_out_buff0->in0_data_5(in0_data[5]);
    sfu_out_buff0->in0_data_6(in0_data[6]);
    sfu_out_buff0->in0_data_7(in0_data[7]);
    sfu_out_buff0->in0_data_valid(in0_data_valid);
    sfu_out_buff0->in1_data_0(in1_data[0]);
    sfu_out_buff0->in1_data_1(in1_data[1]);
    sfu_out_buff0->in1_data_2(in1_data[2]);
    sfu_out_buff0->in1_data_3(in1_data[3]);
    sfu_out_buff0->in1_data_4(in1_data[4]);
    sfu_out_buff0->in1_data_5(in1_data[5]);
    sfu_out_buff0->in1_data_6(in1_data[6]);
    sfu_out_buff0->in1_data_7(in1_data[7]);
    sfu_out_buff0->in1_data_valid(in1_data_valid);
    sfu_out_buff0->out_data(out_data);
    sfu_out_buff0->out_data_valid(out_data_valid);

}

void sfu_out_buff_wrapper::InitThreads()
{
    
}

void sfu_out_buff_wrapper::DeleteInstances()
{
    if (sfu_out_buff0)
    {
        delete sfu_out_buff0;
        sfu_out_buff0 = 0;
    }
}

