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
* This file contains the bias_addr_gen_type_wrapper module
* for use in the verilog verification wrapper bias_addr_gen_vlwrapper.v
* It creats an instance of the bias_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _BIAS_ADDR_GEN_TYPE_WRAP_INCLUDED_
#define _BIAS_ADDR_GEN_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "bias_addr_gen.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(bias_addr_gen_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(bias_addr_gen_type_wrapper);

	bias_addr_gen_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bias_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bias_read_base_addr("bias_read_base_addr")
		  	,bias_en("bias_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bias_addr("bias_addr")
		  	,bias_addr_valid("bias_addr_valid")
		  	

		  ,bias_addr_gen0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~bias_addr_gen_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	bias_addr_gen* bias_addr_gen0;
};

#endif /*  */
