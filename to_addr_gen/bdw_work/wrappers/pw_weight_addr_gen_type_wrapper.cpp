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
* This file contains the pw_weight_addr_gen_type_wrapper module
* for use in the verilog verification wrapper pw_weight_addr_gen_vlwrapper.v
* It creats an instance of the pw_weight_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "pw_weight_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(pw_weight_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void pw_weight_addr_gen_type_wrapper::InitInstances()
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

void pw_weight_addr_gen_type_wrapper::InitThreads()
{
    
}

void pw_weight_addr_gen_type_wrapper::DeleteInstances()
{
        delete pw_weight_addr_gen0;
        pw_weight_addr_gen0 = 0;
}

