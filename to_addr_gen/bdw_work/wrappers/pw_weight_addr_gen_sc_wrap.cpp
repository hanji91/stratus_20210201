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
* block called "pw_weight_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"pw_weight_addr_gen_sc_wrap.h"
#include	"pw_weight_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void pw_weight_addr_gen_wrapper::InitInstances(  )
{
	
            
    pw_weight_addr_gen0 = new pw_weight_addr_gen( "pw_weight_addr_gen" );

    pw_weight_addr_gen0->clk(clk);
    pw_weight_addr_gen0->rstn(rstn);
    pw_weight_addr_gen0->stop(stop);
    pw_weight_addr_gen0->start(start);
    pw_weight_addr_gen0->start_rising(start_rising);
    pw_weight_addr_gen0->systolic_en(systolic_en);
    pw_weight_addr_gen0->systolic_depth(systolic_depth);
    pw_weight_addr_gen0->feature_width(feature_width);
    pw_weight_addr_gen0->feature_height(feature_height);
    pw_weight_addr_gen0->feature_channel(feature_channel);
    pw_weight_addr_gen0->out_feature_width(out_feature_width);
    pw_weight_addr_gen0->out_feature_height(out_feature_height);
    pw_weight_addr_gen0->out_feature_channel(out_feature_channel);
    pw_weight_addr_gen0->filter_width(filter_width);
    pw_weight_addr_gen0->filter_height(filter_height);
    pw_weight_addr_gen0->filter_channel(filter_channel);
    pw_weight_addr_gen0->stride_x(stride_x);
    pw_weight_addr_gen0->stride_y(stride_y);
    pw_weight_addr_gen0->pad_top_size(pad_top_size);
    pw_weight_addr_gen0->pad_bottom_size(pad_bottom_size);
    pw_weight_addr_gen0->pad_left_size(pad_left_size);
    pw_weight_addr_gen0->pad_right_size(pad_right_size);
    pw_weight_addr_gen0->read_weight_base_addr(read_weight_base_addr);
    pw_weight_addr_gen0->pw_weight_addr(pw_weight_addr);
    pw_weight_addr_gen0->pw_weight_addr_valid(pw_weight_addr_valid);
    pw_weight_addr_gen0->pw_weight_data_valid(pw_weight_data_valid);
    pw_weight_addr_gen0->cache_en(cache_en);

}

void pw_weight_addr_gen_wrapper::InitThreads()
{
    
}

void pw_weight_addr_gen_wrapper::DeleteInstances()
{
    if (pw_weight_addr_gen0)
    {
        delete pw_weight_addr_gen0;
        pw_weight_addr_gen0 = 0;
    }
}

