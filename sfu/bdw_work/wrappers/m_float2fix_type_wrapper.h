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
* This file contains the m_float2fix_type_wrapper module
* for use in the verilog verification wrapper m_float2fix_vlwrapper.v
* It creats an instance of the m_float2fix module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _M_FLOAT2FIX_TYPE_WRAP_INCLUDED_
#define _M_FLOAT2FIX_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "m_float2fix.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(m_float2fix_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src_0;
	sc_in< sc_uint< 32 > > src_1;
	sc_in< sc_uint< 32 > > src_2;
	sc_in< sc_uint< 32 > > src_3;
	sc_in< sc_uint< 32 > > src_4;
	sc_in< sc_uint< 32 > > src_5;
	sc_in< sc_uint< 32 > > src_6;
	sc_in< sc_uint< 32 > > src_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst_0;
	sc_out< sc_uint< 32 > > dst_1;
	sc_out< sc_uint< 32 > > dst_2;
	sc_out< sc_uint< 32 > > dst_3;
	sc_out< sc_uint< 32 > > dst_4;
	sc_out< sc_uint< 32 > > dst_5;
	sc_out< sc_uint< 32 > > dst_6;
	sc_out< sc_uint< 32 > > dst_7;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 32 > > src[8];
    sc_signal< sc_uint< 32 > > dst[8];

    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_src_0();
    void thread_src_1();
    void thread_src_2();
    void thread_src_3();
    void thread_src_4();
    void thread_src_5();
    void thread_src_6();
    void thread_src_7();
    void thread_dst_0();
    void thread_dst_1();
    void thread_dst_2();
    void thread_dst_3();
    void thread_dst_4();
    void thread_dst_5();
    void thread_dst_6();
    void thread_dst_7();


	SC_HAS_PROCESS(m_float2fix_type_wrapper);

	m_float2fix_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("m_float2fix")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src_0("src_0"),
		  src_1("src_1"),
		  src_2("src_2"),
		  src_3("src_3"),
		  src_4("src_4"),
		  src_5("src_5"),
		  src_6("src_6"),
		  src_7("src_7")
		  	,dst_valid("dst_valid")
		  	,dst_0("dst_0"),
		  dst_1("dst_1"),
		  dst_2("dst_2"),
		  dst_3("dst_3"),
		  dst_4("dst_4"),
		  dst_5("dst_5"),
		  dst_6("dst_6"),
		  dst_7("dst_7")
		  	

		  ,m_float2fix0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~m_float2fix_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	m_float2fix* m_float2fix0;
};

#endif /*  */
