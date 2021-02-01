/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FP_DIV_SC_WRAP_INCLUDED_
#define _FP_DIV_SC_WRAP_INCLUDED_

#include <systemc.h>

struct fp_div;

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(fp_div_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;
	sc_out< bool > dst_valid;

    
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


	SC_HAS_PROCESS(fp_div_wrapper);

    	fp_div_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("fp_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,a("a")
		  	,b("b")
		  	,r("r")
		  	,dst_valid("dst_valid")
		  	

		  ,fp_div0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~fp_div_wrapper()
    {
        DeleteInstances();
    }

	fp_div* fp_div0;
};

#endif /* _FP_DIV_SC_WRAP_INCLUDED_ */
