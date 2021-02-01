/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _LINEAR_DEQUANT_SC_WRAP_INCLUDED_
#define _LINEAR_DEQUANT_SC_WRAP_INCLUDED_

#include <systemc.h>

struct linear_dequant;

#include "cynw_cm_float_int.h"


// Declaration of wrapper with BEH level ports

SC_MODULE(linear_dequant_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > src[8];
	sc_in< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > divisor;
	sc_out< bool > dst_valid;
	sc_out< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > dst[8];

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< sc_uint< 23 > > src_man_0;
    sc_signal< sc_uint< 8 > > src_exp_0;
    sc_signal< sc_uint< 1 > > src_sign_0;
    sc_signal< sc_uint< 23 > > src_man_1;
    sc_signal< sc_uint< 8 > > src_exp_1;
    sc_signal< sc_uint< 1 > > src_sign_1;
    sc_signal< sc_uint< 23 > > src_man_2;
    sc_signal< sc_uint< 8 > > src_exp_2;
    sc_signal< sc_uint< 1 > > src_sign_2;
    sc_signal< sc_uint< 23 > > src_man_3;
    sc_signal< sc_uint< 8 > > src_exp_3;
    sc_signal< sc_uint< 1 > > src_sign_3;
    sc_signal< sc_uint< 23 > > src_man_4;
    sc_signal< sc_uint< 8 > > src_exp_4;
    sc_signal< sc_uint< 1 > > src_sign_4;
    sc_signal< sc_uint< 23 > > src_man_5;
    sc_signal< sc_uint< 8 > > src_exp_5;
    sc_signal< sc_uint< 1 > > src_sign_5;
    sc_signal< sc_uint< 23 > > src_man_6;
    sc_signal< sc_uint< 8 > > src_exp_6;
    sc_signal< sc_uint< 1 > > src_sign_6;
    sc_signal< sc_uint< 23 > > src_man_7;
    sc_signal< sc_uint< 8 > > src_exp_7;
    sc_signal< sc_uint< 1 > > src_sign_7;
    sc_signal< sc_uint< 23 > > divisor_man;
    sc_signal< sc_uint< 8 > > divisor_exp;
    sc_signal< sc_uint< 1 > > divisor_sign;
    sc_signal< sc_uint< 23 > > dst_man_0;
    sc_signal< sc_uint< 8 > > dst_exp_0;
    sc_signal< sc_uint< 1 > > dst_sign_0;
    sc_signal< sc_uint< 23 > > dst_man_1;
    sc_signal< sc_uint< 8 > > dst_exp_1;
    sc_signal< sc_uint< 1 > > dst_sign_1;
    sc_signal< sc_uint< 23 > > dst_man_2;
    sc_signal< sc_uint< 8 > > dst_exp_2;
    sc_signal< sc_uint< 1 > > dst_sign_2;
    sc_signal< sc_uint< 23 > > dst_man_3;
    sc_signal< sc_uint< 8 > > dst_exp_3;
    sc_signal< sc_uint< 1 > > dst_sign_3;
    sc_signal< sc_uint< 23 > > dst_man_4;
    sc_signal< sc_uint< 8 > > dst_exp_4;
    sc_signal< sc_uint< 1 > > dst_sign_4;
    sc_signal< sc_uint< 23 > > dst_man_5;
    sc_signal< sc_uint< 8 > > dst_exp_5;
    sc_signal< sc_uint< 1 > > dst_sign_5;
    sc_signal< sc_uint< 23 > > dst_man_6;
    sc_signal< sc_uint< 8 > > dst_exp_6;
    sc_signal< sc_uint< 1 > > dst_sign_6;
    sc_signal< sc_uint< 23 > > dst_man_7;
    sc_signal< sc_uint< 8 > > dst_exp_7;
    sc_signal< sc_uint< 1 > > dst_sign_7;

    
	// create the netlist
    void InitInstances( );
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_src_man_0();
    void thread_src_exp_0();
    void thread_src_sign_0();
    void thread_src_man_1();
    void thread_src_exp_1();
    void thread_src_sign_1();
    void thread_src_man_2();
    void thread_src_exp_2();
    void thread_src_sign_2();
    void thread_src_man_3();
    void thread_src_exp_3();
    void thread_src_sign_3();
    void thread_src_man_4();
    void thread_src_exp_4();
    void thread_src_sign_4();
    void thread_src_man_5();
    void thread_src_exp_5();
    void thread_src_sign_5();
    void thread_src_man_6();
    void thread_src_exp_6();
    void thread_src_sign_6();
    void thread_src_man_7();
    void thread_src_exp_7();
    void thread_src_sign_7();
    void thread_divisor_man();
    void thread_divisor_exp();
    void thread_divisor_sign();
    void thread_dst_0();
    void thread_dst_1();
    void thread_dst_2();
    void thread_dst_3();
    void thread_dst_4();
    void thread_dst_5();
    void thread_dst_6();
    void thread_dst_7();


	SC_HAS_PROCESS(linear_dequant_wrapper);

    	linear_dequant_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("linear_dequant")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src()
		  	,divisor("divisor")
		  	,dst_valid("dst_valid")
		  	,dst()
		  	

		  ,linear_dequant0(0)

    {
        InitInstances( );
		InitThreads();
    }

    // destructor
    ~linear_dequant_wrapper()
    {
        DeleteInstances();
    }

	linear_dequant* linear_dequant0;
};

#endif /* _LINEAR_DEQUANT_SC_WRAP_INCLUDED_ */
