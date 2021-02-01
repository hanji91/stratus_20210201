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
* This file contains the pw_feature_addr_gen_type_wrapper module
* for use in the verilog verification wrapper pw_feature_addr_gen_vlwrapper.v
* It creats an instance of the pw_feature_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/

#include "pw_feature_addr_gen_type_wrapper.h"


SC_MODULE_EXPORT(pw_feature_addr_gen_type_wrapper)

// The following threads are used to connect RTL ports to the actual
// structured ports

void pw_feature_addr_gen_type_wrapper::InitInstances()
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

void pw_feature_addr_gen_type_wrapper::InitThreads()
{
    
}

void pw_feature_addr_gen_type_wrapper::DeleteInstances()
{
        delete pw_feature_addr_gen0;
        pw_feature_addr_gen0 = 0;
}

