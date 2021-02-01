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
* block called "st_feature_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/


#include	"st_feature_addr_gen_sc_wrap.h"
#include	"st_feature_addr_gen_sc_foreign.h"

// The following threads are used to connect structured ports to the actual
// RTL ports

void st_feature_addr_gen_wrapper::InitInstances(  )
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

void st_feature_addr_gen_wrapper::InitThreads()
{
    
}

void st_feature_addr_gen_wrapper::DeleteInstances()
{
    if (st_feature_addr_gen0)
    {
        delete st_feature_addr_gen0;
        st_feature_addr_gen0 = 0;
    }
}

