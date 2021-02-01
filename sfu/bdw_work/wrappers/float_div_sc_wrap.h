/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FLOAT_DIV_SC_WRAP_INCLUDED_
#define _FLOAT_DIV_SC_WRAP_INCLUDED_

#include <systemc.h>

struct float_div;

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(float_div_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > a_man;
    sc_signal< sc_uint< 8 > > a_exp;
    sc_signal< sc_uint< 1 > > a_sign;
    sc_signal< sc_uint< 23 > > b_man;
    sc_signal< sc_uint< 8 > > b_exp;
    sc_signal< sc_uint< 1 > > b_sign;
    sc_signal< sc_uint< 23 > > r_man;
    sc_signal< sc_uint< 8 > > r_exp;
    sc_signal< sc_uint< 1 > > r_sign;

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_a_man();
    void thread_a_exp();
    void thread_a_sign();
    void thread_b_man();
    void thread_b_exp();
    void thread_b_sign();
    void thread_r();


	SC_HAS_PROCESS(float_div_wrapper);

    	float_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,a("a")
		  	,b("b")
		  	,r("r")
		  	

		  ,float_div0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~float_div_wrapper()
    {
        DeleteInstances();
    }

	float_div* float_div0;
};

#endif /* _FLOAT_DIV_SC_WRAP_INCLUDED_ */
