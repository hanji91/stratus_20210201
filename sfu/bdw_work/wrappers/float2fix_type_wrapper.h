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
* This file contains the float2fix_type_wrapper module
* for use in the verilog verification wrapper float2fix_vlwrapper.v
* It creats an instance of the float2fix module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _FLOAT2FIX_TYPE_WRAP_INCLUDED_
#define _FLOAT2FIX_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "float2fix.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(float2fix_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(float2fix_type_wrapper);

	float2fix_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float2fix")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,float2fix0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~float2fix_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	float2fix* float2fix0;
};

#endif /*  */
