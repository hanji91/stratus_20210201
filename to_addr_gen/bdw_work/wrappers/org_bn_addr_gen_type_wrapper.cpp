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
* This file contains the org_bn_addr_gen_type_wrapper module
* for use in the verilog verification wrapper org_bn_addr_gen_vlwrapper.v
* It creats an instance of the org_bn_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "org_bn_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(org_bn_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void org_bn_addr_gen_type_wrapper::InitInstances()
{
    org_bn_addr_gen0 = new org_bn_addr_gen( "org_bn_addr_gen" );

    org_bn_addr_gen0->clk(clk);
    org_bn_addr_gen0->rstn(rstn);
    org_bn_addr_gen0->out_feature_width(out_feature_width);
    org_bn_addr_gen0->out_feature_height(out_feature_height);
    org_bn_addr_gen0->out_feature_channel(out_feature_channel);
    org_bn_addr_gen0->bn_read_base_addr(bn_read_base_addr);
    org_bn_addr_gen0->bn_en(bn_en);
    org_bn_addr_gen0->start_rising(start_rising);
    org_bn_addr_gen0->data_en(data_en);
    org_bn_addr_gen0->bn_addr(bn_addr);
    org_bn_addr_gen0->bn_addr_valid(bn_addr_valid);

}

void org_bn_addr_gen_type_wrapper::InitThreads()
{
    
}

void org_bn_addr_gen_type_wrapper::DeleteInstances()
{
        delete org_bn_addr_gen0;
        org_bn_addr_gen0 = 0;
}

