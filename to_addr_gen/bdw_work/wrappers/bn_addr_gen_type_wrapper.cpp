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
* This file contains the bn_addr_gen_type_wrapper module
* for use in the verilog verification wrapper bn_addr_gen_vlwrapper.v
* It creats an instance of the bn_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "bn_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(bn_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void bn_addr_gen_type_wrapper::InitInstances()
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

void bn_addr_gen_type_wrapper::InitThreads()
{
    
}

void bn_addr_gen_type_wrapper::DeleteInstances()
{
        delete bn_addr_gen0;
        bn_addr_gen0 = 0;
}

