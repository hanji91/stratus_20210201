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
* block called "feature_write_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"feature_write_addr_gen_sc_wrap.h"
#include	"feature_write_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void feature_write_addr_gen_wrapper::InitInstances(  )
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

void feature_write_addr_gen_wrapper::InitThreads()
{
    
}

void feature_write_addr_gen_wrapper::DeleteInstances()
{
    if (feature_write_addr_gen0)
    {
        delete feature_write_addr_gen0;
        feature_write_addr_gen0 = 0;
    }
}

