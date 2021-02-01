/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BN_ADDR_GEN_SC_WRAP_INCLUDED_
#define _BN_ADDR_GEN_SC_WRAP_INCLUDED_

#include <systemc.h>

struct bn_addr_gen;


// Declaration of wrapper with BEH level ports

SC_MODULE(bn_addr_gen_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bn_read_base_addr;
	sc_in< sc_uint< 8 > > conv_type;
	sc_in< sc_uint< 8 > > bn_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bn_addr;
	sc_out< bool > bn_addr_valid;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(bn_addr_gen_wrapper);

    	bn_addr_gen_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("bn_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bn_read_base_addr("bn_read_base_addr")
		  	,conv_type("conv_type")
		  	,bn_en("bn_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bn_addr("bn_addr")
		  	,bn_addr_valid("bn_addr_valid")
		  	

		  ,bn_addr_gen0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~bn_addr_gen_wrapper()
    {
        DeleteInstances();
    }

	bn_addr_gen* bn_addr_gen0;
};

#endif /* _BN_ADDR_GEN_SC_WRAP_INCLUDED_ */
