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
* block called "org_bn_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"org_bn_addr_gen_sc_wrap.h"
#include	"org_bn_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void org_bn_addr_gen_wrapper::InitInstances(  )
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

void org_bn_addr_gen_wrapper::InitThreads()
{
    
}

void org_bn_addr_gen_wrapper::DeleteInstances()
{
    if (org_bn_addr_gen0)
    {
        delete org_bn_addr_gen0;
        org_bn_addr_gen0 = 0;
    }
}

