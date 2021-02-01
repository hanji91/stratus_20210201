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


#ifndef _ST_FEATURE_ADDR_GEN_TYPE_WRAP_INCLUDED_
#define _ST_FEATURE_ADDR_GEN_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "st_feature_addr_gen.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(st_feature_addr_gen_type_wrapper)
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
	sc_in< sc_uint< 8 > > dilation_x;
	sc_in< sc_uint< 8 > > dilation_y;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 8 > > stride_x;
	sc_in< sc_uint< 8 > > stride_y;
	sc_in< sc_uint< 8 > > pad_top_size;
	sc_in< sc_uint< 8 > > pad_bottom_size;
	sc_in< sc_uint< 8 > > pad_left_size;
	sc_in< sc_uint< 8 > > pad_right_size;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > st_feature_addr;
	sc_out< bool > st_feature_addr_valid;
	sc_out< bool > st_feature_data_valid;
	sc_out< bool > cache_en;
	sc_out< sc_uint< 16 > > st_feature_data_sel;
	sc_out< bool > st_addr_if_start;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(st_feature_addr_gen_type_wrapper);

	st_feature_addr_gen_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("st_feature_addr_gen")) )
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
		  	,dilation_x("dilation_x")
		  	,dilation_y("dilation_y")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,stride_x("stride_x")
		  	,stride_y("stride_y")
		  	,pad_top_size("pad_top_size")
		  	,pad_bottom_size("pad_bottom_size")
		  	,pad_left_size("pad_left_size")
		  	,pad_right_size("pad_right_size")
		  	,read_feature_base_addr("read_feature_base_addr")
		  	,st_feature_addr("st_feature_addr")
		  	,st_feature_addr_valid("st_feature_addr_valid")
		  	,st_feature_data_valid("st_feature_data_valid")
		  	,cache_en("cache_en")
		  	,st_feature_data_sel("st_feature_data_sel")
		  	,st_addr_if_start("st_addr_if_start")
		  	

		  ,st_feature_addr_gen0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~st_feature_addr_gen_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	st_feature_addr_gen* st_feature_addr_gen0;
};

#endif /*  */
