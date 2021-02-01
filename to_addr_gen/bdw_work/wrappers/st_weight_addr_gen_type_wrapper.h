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
* This file contains the st_weight_addr_gen_type_wrapper module
* for use in the verilog verification wrapper st_weight_addr_gen_vlwrapper.v
* It creats an instance of the st_weight_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _ST_WEIGHT_ADDR_GEN_TYPE_WRAP_INCLUDED_
#define _ST_WEIGHT_ADDR_GEN_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "st_weight_addr_gen.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(st_weight_addr_gen_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 8 > > stride_x;
	sc_in< sc_uint< 8 > > stride_y;
	sc_in< sc_uint< 8 > > pad_top_size;
	sc_in< sc_uint< 8 > > pad_bottom_size;
	sc_in< sc_uint< 8 > > pad_left_size;
	sc_in< sc_uint< 8 > > pad_right_size;
	sc_in< sc_uint< 32 > > read_weight_base_addr;
	sc_out< sc_uint< 32 > > st_weight_addr;
	sc_out< bool > st_weight_addr_valid;
	sc_out< bool > st_weight_data_valid;
	sc_out< bool > cache_en;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(st_weight_addr_gen_type_wrapper);

	st_weight_addr_gen_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("st_weight_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,stop("stop")
		  	,start("start")
		  	,start_rising("start_rising")
		  	,feature_width("feature_width")
		  	,feature_height("feature_height")
		  	,feature_channel("feature_channel")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,stride_x("stride_x")
		  	,stride_y("stride_y")
		  	,pad_top_size("pad_top_size")
		  	,pad_bottom_size("pad_bottom_size")
		  	,pad_left_size("pad_left_size")
		  	,pad_right_size("pad_right_size")
		  	,read_weight_base_addr("read_weight_base_addr")
		  	,st_weight_addr("st_weight_addr")
		  	,st_weight_addr_valid("st_weight_addr_valid")
		  	,st_weight_data_valid("st_weight_data_valid")
		  	,cache_en("cache_en")
		  	

		  ,st_weight_addr_gen0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~st_weight_addr_gen_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	st_weight_addr_gen* st_weight_addr_gen0;
};

#endif /*  */
