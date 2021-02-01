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


#ifndef _PW_FEATURE_ADDR_GEN_TYPE_WRAP_INCLUDED_
#define _PW_FEATURE_ADDR_GEN_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "pw_feature_addr_gen.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(pw_feature_addr_gen_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 16 > > filter_number;
	sc_in< sc_uint< 32 > > read_feature_base_addr;
	sc_out< sc_uint< 32 > > pw_feature_addr;
	sc_out< bool > pw_feature_addr_valid;
	sc_out< bool > pw_feature_data_valid;
	sc_out< bool > pw_cache_en;
	sc_out< sc_uint< 16 > > pw_feature_data_sel;
	sc_out< bool > pw_addr_if_start;
	sc_out< sc_uint< 8 > > systolic_sel_12d;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(pw_feature_addr_gen_type_wrapper);

	pw_feature_addr_gen_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("pw_feature_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,stop("stop")
		  	,start("start")
		  	,start_rising("start_rising")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,feature_width("feature_width")
		  	,feature_height("feature_height")
		  	,feature_channel("feature_channel")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,filter_number("filter_number")
		  	,read_feature_base_addr("read_feature_base_addr")
		  	,pw_feature_addr("pw_feature_addr")
		  	,pw_feature_addr_valid("pw_feature_addr_valid")
		  	,pw_feature_data_valid("pw_feature_data_valid")
		  	,pw_cache_en("pw_cache_en")
		  	,pw_feature_data_sel("pw_feature_data_sel")
		  	,pw_addr_if_start("pw_addr_if_start")
		  	,systolic_sel_12d("systolic_sel_12d")
		  	

		  ,pw_feature_addr_gen0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~pw_feature_addr_gen_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	pw_feature_addr_gen* pw_feature_addr_gen0;
};

#endif /*  */
