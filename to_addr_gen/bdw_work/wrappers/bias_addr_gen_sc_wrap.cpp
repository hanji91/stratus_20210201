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
* block called "bias_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"bias_addr_gen_sc_wrap.h"
#include	"bias_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void bias_addr_gen_wrapper::InitInstances(  )
{
	
            
    bias_addr_gen0 = new bias_addr_gen( "bias_addr_gen" );

    bias_addr_gen0->clk(clk);
    bias_addr_gen0->rstn(rstn);
    bias_addr_gen0->init(init);
    bias_addr_gen0->out_feature_width(out_feature_width);
    bias_addr_gen0->out_feature_height(out_feature_height);
    bias_addr_gen0->out_feature_channel(out_feature_channel);
    bias_addr_gen0->bias_read_base_addr(bias_read_base_addr);
    bias_addr_gen0->bias_en(bias_en);
    bias_addr_gen0->start_rising(start_rising);
    bias_addr_gen0->data_en(data_en);
    bias_addr_gen0->bias_addr(bias_addr);
    bias_addr_gen0->bias_addr_valid(bias_addr_valid);

}

void bias_addr_gen_wrapper::InitThreads()
{
    
}

void bias_addr_gen_wrapper::DeleteInstances()
{
    if (bias_addr_gen0)
    {
        delete bias_addr_gen0;
        bias_addr_gen0 = 0;
    }
}

