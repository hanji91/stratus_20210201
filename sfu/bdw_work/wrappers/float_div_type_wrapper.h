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
* This file contains the float_div_type_wrapper module
* for use in the verilog verification wrapper float_div_vlwrapper.v
* It creats an instance of the float_div module and has threads
* for converting the BEH ports to RTL level ports on the wrapper.
*
****************************************************************************/


#ifndef _FLOAT_DIV_TYPE_WRAP_INCLUDED_
#define _FLOAT_DIV_TYPE_WRAP_INCLUDED_


#include <systemc.h>
#include "float_div.h"


// Declaration of wrapper with RTL level ports

SC_MODULE(float_div_type_wrapper)
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;

    
    // These signals are used to connect structured ports or ports that need
    // type conversion to the RTL ports.
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > a;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > b;
    sc_signal< cynw_cm_float <(int)8, (int)23, (int)1, (int)5, (int)1 > > r;

    

	// create the netlist
    void InitInstances();
    void InitThreads();

    // delete the netlist
    void DeleteInstances();

    // The following threads are used to connect structured ports to the actual
    // RTL ports.
    void thread_a();
    void thread_b();
    void thread_r_man();
    void thread_r_exp();
    void thread_r_sign();


	SC_HAS_PROCESS(float_div_type_wrapper);

	float_div_type_wrapper( sc_module_name name = sc_module_name( sc_gen_unique_name("float_div")) )
		: sc_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,a_man("a_man"),
		  a_exp("a_exp"),
		  a_sign("a_sign")
		  	,b_man("b_man"),
		  b_exp("b_exp"),
		  b_sign("b_sign")
		  	,r_man("r_man"),
		  r_exp("r_exp"),
		  r_sign("r_sign")
		  	

		  ,float_div0(0)
		

    {
        InitInstances();
        InitThreads();
		end_module();
    }


    // destructor
    ~float_div_type_wrapper()
    {
        DeleteInstances();
    }


protected:
	float_div* float_div0;
};

#endif /*  */
