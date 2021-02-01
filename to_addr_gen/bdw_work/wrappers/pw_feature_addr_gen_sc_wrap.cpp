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
* block called "pw_feature_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"pw_feature_addr_gen_sc_wrap.h"
#include	"pw_feature_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void pw_feature_addr_gen_wrapper::InitInstances(  )
{
	
            
    pw_feature_addr_gen0 = new pw_feature_addr_gen( "pw_feature_addr_gen" );

    pw_feature_addr_gen0->clk(clk);
    pw_feature_addr_gen0->rstn(rstn);
    pw_feature_addr_gen0->stop(stop);
    pw_feature_addr_gen0->start(start);
    pw_feature_addr_gen0->start_rising(start_rising);
    pw_feature_addr_gen0->systolic_en(systolic_en);
    pw_feature_addr_gen0->systolic_depth(systolic_depth);
    pw_feature_addr_gen0->feature_width(feature_width);
    pw_feature_addr_gen0->feature_height(feature_height);
    pw_feature_addr_gen0->feature_channel(feature_channel);
    pw_feature_addr_gen0->out_feature_width(out_feature_width);
    pw_feature_addr_gen0->out_feature_height(out_feature_height);
    pw_feature_addr_gen0->out_feature_channel(out_feature_channel);
    pw_feature_addr_gen0->filter_width(filter_width);
    pw_feature_addr_gen0->filter_height(filter_height);
    pw_feature_addr_gen0->filter_channel(filter_channel);
    pw_feature_addr_gen0->filter_number(filter_number);
    pw_feature_addr_gen0->read_feature_base_addr(read_feature_base_addr);
    pw_feature_addr_gen0->pw_feature_addr(pw_feature_addr);
    pw_feature_addr_gen0->pw_feature_addr_valid(pw_feature_addr_valid);
    pw_feature_addr_gen0->pw_feature_data_valid(pw_feature_data_valid);
    pw_feature_addr_gen0->pw_cache_en(pw_cache_en);
    pw_feature_addr_gen0->pw_feature_data_sel(pw_feature_data_sel);
    pw_feature_addr_gen0->pw_addr_if_start(pw_addr_if_start);
    pw_feature_addr_gen0->systolic_sel_12d(systolic_sel_12d);

}

void pw_feature_addr_gen_wrapper::InitThreads()
{
    
}

void pw_feature_addr_gen_wrapper::DeleteInstances()
{
    if (pw_feature_addr_gen0)
    {
        delete pw_feature_addr_gen0;
        pw_feature_addr_gen0 = 0;
    }
}

