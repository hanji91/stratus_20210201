/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _M_FLOAT2FIX_SC_WRAP_INCLUDED_
#define _M_FLOAT2FIX_SC_WRAP_INCLUDED_

#include <systemc.h>

struct m_float2fix;


// Declaration of wrapper with BEH level ports

SC_MODULE(m_float2fix_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src[8];
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst[8];

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > src_0;
    sc_signal< sc_uint< 32 > > src_1;
    sc_signal< sc_uint< 32 > > src_2;
    sc_signal< sc_uint< 32 > > src_3;
    sc_signal< sc_uint< 32 > > src_4;
    sc_signal< sc_uint< 32 > > src_5;
    sc_signal< sc_uint< 32 > > src_6;
    sc_signal< sc_uint< 32 > > src_7;
    sc_signal< sc_uint< 32 > > dst_0;
    sc_signal< sc_uint< 32 > > dst_1;
    sc_signal< sc_uint< 32 > > dst_2;
    sc_signal< sc_uint< 32 > > dst_3;
    sc_signal< sc_uint< 32 > > dst_4;
    sc_signal< sc_uint< 32 > > dst_5;
    sc_signal< sc_uint< 32 > > dst_6;
    sc_signal< sc_uint< 32 > > dst_7;

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    

	SC_HAS_PROCESS(m_float2fix_wrapper);

    	m_float2fix_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("m_float2fix")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src()
		  	,dst_valid("dst_valid")
		  	,dst()
		  	

		  ,m_float2fix0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~m_float2fix_wrapper()
    {
        DeleteInstances();
    }

	m_float2fix* m_float2fix0;
};

#endif /* _M_FLOAT2FIX_SC_WRAP_INCLUDED_ */
