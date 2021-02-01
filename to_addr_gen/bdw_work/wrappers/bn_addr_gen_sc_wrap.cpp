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
* block called "bn_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"bn_addr_gen_sc_wrap.h"
#include	"bn_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void bn_addr_gen_wrapper::InitInstances(  )
{
	
            
    bn_addr_gen0 = new bn_addr_gen( "bn_addr_gen" );

    bn_addr_gen0->clk(clk);
    bn_addr_gen0->rstn(rstn);
    bn_addr_gen0->out_feature_width(out_feature_width);
    bn_addr_gen0->out_feature_height(out_feature_height);
    bn_addr_gen0->out_feature_channel(out_feature_channel);
    bn_addr_gen0->bn_read_base_addr(bn_read_base_addr);
    bn_addr_gen0->conv_type(conv_type);
    bn_addr_gen0->bn_en(bn_en);
    bn_addr_gen0->start_rising(start_rising);
    bn_addr_gen0->data_en(data_en);
    bn_addr_gen0->bn_addr(bn_addr);
    bn_addr_gen0->bn_addr_valid(bn_addr_valid);

}

void bn_addr_gen_wrapper::InitThreads()
{
    
}

void bn_addr_gen_wrapper::DeleteInstances()
{
    if (bn_addr_gen0)
    {
        delete bn_addr_gen0;
        bn_addr_gen0 = 0;
    }
}

