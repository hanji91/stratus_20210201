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
* This file contains the bias_addr_gen_type_wrapper module
* for use in the verilog verification wrapper bias_addr_gen_vlwrapper.v
* It creats an instance of the bias_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "bias_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(bias_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void bias_addr_gen_type_wrapper::InitInstances()
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

void bias_addr_gen_type_wrapper::InitThreads()
{
    
}

void bias_addr_gen_type_wrapper::DeleteInstances()
{
        delete bias_addr_gen0;
        bias_addr_gen0 = 0;
}

