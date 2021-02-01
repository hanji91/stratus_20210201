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
* This file contains the feature_write_addr_gen_type_wrapper module
* for use in the verilog verification wrapper feature_write_addr_gen_vlwrapper.v
* It creats an instance of the feature_write_addr_gen module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _FEATURE_WRITE_ADDR_GEN_TYPE_WRAP_INCLUDED_
#define _FEATURE_WRITE_ADDR_GEN_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "feature_write_addr_gen.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(feature_write_addr_gen_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(feature_write_addr_gen_type_wrapper);

	feature_write_addr_gen_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("feature_write_addr_gen")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,start("start")
		  	,conv_type("conv_type")
		  	,stop("stop")
		  	,base_addr("base_addr")
		  	,src("src")
		  	,src_vld("src_vld")
		  	,read_address("read_address")
		  	,read_address_valid("read_address_valid")
		  	,data_in_en("data_in_en")
		  	,read_data("read_data")
		  	,address_0("address_0")
		  	,cs_0("cs_0")
		  	,we_0("we_0")
		  	,oe_0("oe_0")
		  	,data_in("data_in")
		  	,data_out("data_out")
		  	

		  ,feature_write_addr_gen0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~feature_write_addr_gen_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	feature_write_addr_gen* feature_write_addr_gen0;
};

#endif /*  */
