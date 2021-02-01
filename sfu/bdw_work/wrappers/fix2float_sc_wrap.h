/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FIX2FLOAT_SC_WRAP_INCLUDED_
#define _FIX2FLOAT_SC_WRAP_INCLUDED_

#include <systemc.h>

struct fix2float;


// Declaration of wrapper with BEH level ports

SC_MODULE(fix2float_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 32 > > fraction_len;
	sc_in< bool > src_valid;
	sc_in< sc_int< 32 > > src;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(fix2float_wrapper);

    	fix2float_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fix2float")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,fraction_len("fraction_len")
		  	,src_valid("src_valid")
		  	,src("src")
		  	,dst_valid("dst_valid")
		  	,dst("dst")
		  	

		  ,fix2float0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~fix2float_wrapper()
    {
        DeleteInstances();
    }

	fix2float* fix2float0;
};

#endif /* _FIX2FLOAT_SC_WRAP_INCLUDED_ */
