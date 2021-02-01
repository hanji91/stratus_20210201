/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _MAC_SC_WRAP_INCLUDED_
#define _MAC_SC_WRAP_INCLUDED_

#include <systemc.h>

struct mac;


// Declaration of wrapper with BEH level ports

SC_MODULE(mac_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< bool > clear;
	sc_in< bool > src_vld;
	sc_in< sc_int< 10 > > src_0;
	sc_in< sc_int< 8 > > src_1;
	sc_out< sc_int< 32 > > acc;
	sc_out< sc_int< 8 > > src_1_1d;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    
    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(mac_wrapper);

    	mac_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("mac")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,clear("clear")
		  	,src_vld("src_vld")
		  	,src_0("src_0")
		  	,src_1("src_1")
		  	,acc("acc")
		  	,src_1_1d("src_1_1d")
		  	

		  ,mac0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~mac_wrapper()
    {
        DeleteInstances();
    }

	mac* mac0;
};

#endif /* _MAC_SC_WRAP_INCLUDED_ */
