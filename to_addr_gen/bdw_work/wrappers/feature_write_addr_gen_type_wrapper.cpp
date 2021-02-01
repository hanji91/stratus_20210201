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
* This file contains the feature_write_addr_gen_type_wrapper module
* for use in the verilog verification wrapper feature_write_addr_gen_vlwrapper.v
* It creats an instance of the feature_write_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "feature_write_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(feature_write_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void feature_write_addr_gen_type_wrapper::InitInstances()
{
    feature_write_addr_gen0 = new feature_write_addr_gen( "feature_write_addr_gen" );

    feature_write_addr_gen0->clk(clk);
    feature_write_addr_gen0->rstn(rstn);
    feature_write_addr_gen0->init(init);
    feature_write_addr_gen0->start(start);
    feature_write_addr_gen0->conv_type(conv_type);
    feature_write_addr_gen0->stop(stop);
    feature_write_addr_gen0->base_addr(base_addr);
    feature_write_addr_gen0->src(src);
    feature_write_addr_gen0->src_vld(src_vld);
    feature_write_addr_gen0->read_address(read_address);
    feature_write_addr_gen0->read_address_valid(read_address_valid);
    feature_write_addr_gen0->data_in_en(data_in_en);
    feature_write_addr_gen0->read_data(read_data);
    feature_write_addr_gen0->address_0(address_0);
    feature_write_addr_gen0->cs_0(cs_0);
    feature_write_addr_gen0->we_0(we_0);
    feature_write_addr_gen0->oe_0(oe_0);
    feature_write_addr_gen0->data_in(data_in);
    feature_write_addr_gen0->data_out(data_out);

}

void feature_write_addr_gen_type_wrapper::InitThreads()
{
    
}

void feature_write_addr_gen_type_wrapper::DeleteInstances()
{
        delete feature_write_addr_gen0;
        feature_write_addr_gen0 = 0;
}

