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
* This file contains the mac_type_wrapper module
* for use in the verilog verification wrapper mac_vlwrapper.v
* It creats an instance of the mac module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _MAC_TYPE_WRAP_INCLUDED_
#define _MAC_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "mac.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(mac_type_wrapper)
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
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(mac_type_wrapper);

	mac_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("mac")) )
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
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~mac_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	mac* mac0;
};

#endif /*  */
