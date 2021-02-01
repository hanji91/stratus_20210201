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
* This file contains the st_feature_addr_gen_type_wrapper module
* for use in the verilog verification wrapper st_feature_addr_gen_vlwrapper.v
* It creats an instance of the st_feature_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "st_feature_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(st_feature_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void st_feature_addr_gen_type_wrapper::InitInstances()
{
    st_feature_addr_gen0 = new st_feature_addr_gen( "st_feature_addr_gen" );

    st_feature_addr_gen0->clk(clk);
    st_feature_addr_gen0->rstn(rstn);
    st_feature_addr_gen0->stop(stop);
    st_feature_addr_gen0->start(start);
    st_feature_addr_gen0->start_rising(start_rising);
    st_feature_addr_gen0->feature_width(feature_width);
    st_feature_addr_gen0->feature_height(feature_height);
    st_feature_addr_gen0->feature_channel(feature_channel);
    st_feature_addr_gen0->out_feature_width(out_feature_width);
    st_feature_addr_gen0->out_feature_height(out_feature_height);
    st_feature_addr_gen0->out_feature_channel(out_feature_channel);
    st_feature_addr_gen0->dilation_x(dilation_x);
    st_feature_addr_gen0->dilation_y(dilation_y);
    st_feature_addr_gen0->filter_width(filter_width);
    st_feature_addr_gen0->filter_height(filter_height);
    st_feature_addr_gen0->filter_channel(filter_channel);
    st_feature_addr_gen0->stride_x(stride_x);
    st_feature_addr_gen0->stride_y(stride_y);
    st_feature_addr_gen0->pad_top_size(pad_top_size);
    st_feature_addr_gen0->pad_bottom_size(pad_bottom_size);
    st_feature_addr_gen0->pad_left_size(pad_left_size);
    st_feature_addr_gen0->pad_right_size(pad_right_size);
    st_feature_addr_gen0->read_feature_base_addr(read_feature_base_addr);
    st_feature_addr_gen0->st_feature_addr(st_feature_addr);
    st_feature_addr_gen0->st_feature_addr_valid(st_feature_addr_valid);
    st_feature_addr_gen0->st_feature_data_valid(st_feature_data_valid);
    st_feature_addr_gen0->cache_en(cache_en);
    st_feature_addr_gen0->st_feature_data_sel(st_feature_data_sel);
    st_feature_addr_gen0->st_addr_if_start(st_addr_if_start);

}

void st_feature_addr_gen_type_wrapper::InitThreads()
{
    
}

void st_feature_addr_gen_type_wrapper::DeleteInstances()
{
        delete st_feature_addr_gen0;
        st_feature_addr_gen0 = 0;
}

