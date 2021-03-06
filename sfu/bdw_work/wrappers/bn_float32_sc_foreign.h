/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BN_FLOAT32_SC_FOREIGN_INCLUDED_
#define _BN_FLOAT32_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct bn_float32 : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > src_valid;
	sc_in< sc_uint< 23 > > src_man_0;
	sc_in< sc_uint< 8 > > src_exp_0;
	sc_in< sc_uint< 1 > > src_sign_0;
	sc_in< sc_uint< 23 > > src_man_1;
	sc_in< sc_uint< 8 > > src_exp_1;
	sc_in< sc_uint< 1 > > src_sign_1;
	sc_in< sc_uint< 23 > > src_man_2;
	sc_in< sc_uint< 8 > > src_exp_2;
	sc_in< sc_uint< 1 > > src_sign_2;
	sc_in< sc_uint< 23 > > src_man_3;
	sc_in< sc_uint< 8 > > src_exp_3;
	sc_in< sc_uint< 1 > > src_sign_3;
	sc_in< sc_uint< 23 > > src_man_4;
	sc_in< sc_uint< 8 > > src_exp_4;
	sc_in< sc_uint< 1 > > src_sign_4;
	sc_in< sc_uint< 23 > > src_man_5;
	sc_in< sc_uint< 8 > > src_exp_5;
	sc_in< sc_uint< 1 > > src_sign_5;
	sc_in< sc_uint< 23 > > src_man_6;
	sc_in< sc_uint< 8 > > src_exp_6;
	sc_in< sc_uint< 1 > > src_sign_6;
	sc_in< sc_uint< 23 > > src_man_7;
	sc_in< sc_uint< 8 > > src_exp_7;
	sc_in< sc_uint< 1 > > src_sign_7;
	sc_in< sc_uint< 23 > > mul_coeff_man_0;
	sc_in< sc_uint< 8 > > mul_coeff_exp_0;
	sc_in< sc_uint< 1 > > mul_coeff_sign_0;
	sc_in< sc_uint< 23 > > mul_coeff_man_1;
	sc_in< sc_uint< 8 > > mul_coeff_exp_1;
	sc_in< sc_uint< 1 > > mul_coeff_sign_1;
	sc_in< sc_uint< 23 > > mul_coeff_man_2;
	sc_in< sc_uint< 8 > > mul_coeff_exp_2;
	sc_in< sc_uint< 1 > > mul_coeff_sign_2;
	sc_in< sc_uint< 23 > > mul_coeff_man_3;
	sc_in< sc_uint< 8 > > mul_coeff_exp_3;
	sc_in< sc_uint< 1 > > mul_coeff_sign_3;
	sc_in< sc_uint< 23 > > mul_coeff_man_4;
	sc_in< sc_uint< 8 > > mul_coeff_exp_4;
	sc_in< sc_uint< 1 > > mul_coeff_sign_4;
	sc_in< sc_uint< 23 > > mul_coeff_man_5;
	sc_in< sc_uint< 8 > > mul_coeff_exp_5;
	sc_in< sc_uint< 1 > > mul_coeff_sign_5;
	sc_in< sc_uint< 23 > > mul_coeff_man_6;
	sc_in< sc_uint< 8 > > mul_coeff_exp_6;
	sc_in< sc_uint< 1 > > mul_coeff_sign_6;
	sc_in< sc_uint< 23 > > mul_coeff_man_7;
	sc_in< sc_uint< 8 > > mul_coeff_exp_7;
	sc_in< sc_uint< 1 > > mul_coeff_sign_7;
	sc_in< sc_uint< 23 > > add_coeff_man_0;
	sc_in< sc_uint< 8 > > add_coeff_exp_0;
	sc_in< sc_uint< 1 > > add_coeff_sign_0;
	sc_in< sc_uint< 23 > > add_coeff_man_1;
	sc_in< sc_uint< 8 > > add_coeff_exp_1;
	sc_in< sc_uint< 1 > > add_coeff_sign_1;
	sc_in< sc_uint< 23 > > add_coeff_man_2;
	sc_in< sc_uint< 8 > > add_coeff_exp_2;
	sc_in< sc_uint< 1 > > add_coeff_sign_2;
	sc_in< sc_uint< 23 > > add_coeff_man_3;
	sc_in< sc_uint< 8 > > add_coeff_exp_3;
	sc_in< sc_uint< 1 > > add_coeff_sign_3;
	sc_in< sc_uint< 23 > > add_coeff_man_4;
	sc_in< sc_uint< 8 > > add_coeff_exp_4;
	sc_in< sc_uint< 1 > > add_coeff_sign_4;
	sc_in< sc_uint< 23 > > add_coeff_man_5;
	sc_in< sc_uint< 8 > > add_coeff_exp_5;
	sc_in< sc_uint< 1 > > add_coeff_sign_5;
	sc_in< sc_uint< 23 > > add_coeff_man_6;
	sc_in< sc_uint< 8 > > add_coeff_exp_6;
	sc_in< sc_uint< 1 > > add_coeff_sign_6;
	sc_in< sc_uint< 23 > > add_coeff_man_7;
	sc_in< sc_uint< 8 > > add_coeff_exp_7;
	sc_in< sc_uint< 1 > > add_coeff_sign_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 23 > > dst_man_0;
	sc_out< sc_uint< 8 > > dst_exp_0;
	sc_out< sc_uint< 1 > > dst_sign_0;
	sc_out< sc_uint< 23 > > dst_man_1;
	sc_out< sc_uint< 8 > > dst_exp_1;
	sc_out< sc_uint< 1 > > dst_sign_1;
	sc_out< sc_uint< 23 > > dst_man_2;
	sc_out< sc_uint< 8 > > dst_exp_2;
	sc_out< sc_uint< 1 > > dst_sign_2;
	sc_out< sc_uint< 23 > > dst_man_3;
	sc_out< sc_uint< 8 > > dst_exp_3;
	sc_out< sc_uint< 1 > > dst_sign_3;
	sc_out< sc_uint< 23 > > dst_man_4;
	sc_out< sc_uint< 8 > > dst_exp_4;
	sc_out< sc_uint< 1 > > dst_sign_4;
	sc_out< sc_uint< 23 > > dst_man_5;
	sc_out< sc_uint< 8 > > dst_exp_5;
	sc_out< sc_uint< 1 > > dst_sign_5;
	sc_out< sc_uint< 23 > > dst_man_6;
	sc_out< sc_uint< 8 > > dst_exp_6;
	sc_out< sc_uint< 1 > > dst_sign_6;
	sc_out< sc_uint< 23 > > dst_man_7;
	sc_out< sc_uint< 8 > > dst_exp_7;
	sc_out< sc_uint< 1 > > dst_sign_7;


    const char* hdl_name() const { return "bn_float32"; }
    
	bn_float32( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,src_valid("src_valid")
		  	,src_man_0("src_man_0"),
		  src_exp_0("src_exp_0"),
		  src_sign_0("src_sign_0"),
		  src_man_1("src_man_1"),
		  src_exp_1("src_exp_1"),
		  src_sign_1("src_sign_1"),
		  src_man_2("src_man_2"),
		  src_exp_2("src_exp_2"),
		  src_sign_2("src_sign_2"),
		  src_man_3("src_man_3"),
		  src_exp_3("src_exp_3"),
		  src_sign_3("src_sign_3"),
		  src_man_4("src_man_4"),
		  src_exp_4("src_exp_4"),
		  src_sign_4("src_sign_4"),
		  src_man_5("src_man_5"),
		  src_exp_5("src_exp_5"),
		  src_sign_5("src_sign_5"),
		  src_man_6("src_man_6"),
		  src_exp_6("src_exp_6"),
		  src_sign_6("src_sign_6"),
		  src_man_7("src_man_7"),
		  src_exp_7("src_exp_7"),
		  src_sign_7("src_sign_7")
		  	,mul_coeff_man_0("mul_coeff_man_0"),
		  mul_coeff_exp_0("mul_coeff_exp_0"),
		  mul_coeff_sign_0("mul_coeff_sign_0"),
		  mul_coeff_man_1("mul_coeff_man_1"),
		  mul_coeff_exp_1("mul_coeff_exp_1"),
		  mul_coeff_sign_1("mul_coeff_sign_1"),
		  mul_coeff_man_2("mul_coeff_man_2"),
		  mul_coeff_exp_2("mul_coeff_exp_2"),
		  mul_coeff_sign_2("mul_coeff_sign_2"),
		  mul_coeff_man_3("mul_coeff_man_3"),
		  mul_coeff_exp_3("mul_coeff_exp_3"),
		  mul_coeff_sign_3("mul_coeff_sign_3"),
		  mul_coeff_man_4("mul_coeff_man_4"),
		  mul_coeff_exp_4("mul_coeff_exp_4"),
		  mul_coeff_sign_4("mul_coeff_sign_4"),
		  mul_coeff_man_5("mul_coeff_man_5"),
		  mul_coeff_exp_5("mul_coeff_exp_5"),
		  mul_coeff_sign_5("mul_coeff_sign_5"),
		  mul_coeff_man_6("mul_coeff_man_6"),
		  mul_coeff_exp_6("mul_coeff_exp_6"),
		  mul_coeff_sign_6("mul_coeff_sign_6"),
		  mul_coeff_man_7("mul_coeff_man_7"),
		  mul_coeff_exp_7("mul_coeff_exp_7"),
		  mul_coeff_sign_7("mul_coeff_sign_7")
		  	,add_coeff_man_0("add_coeff_man_0"),
		  add_coeff_exp_0("add_coeff_exp_0"),
		  add_coeff_sign_0("add_coeff_sign_0"),
		  add_coeff_man_1("add_coeff_man_1"),
		  add_coeff_exp_1("add_coeff_exp_1"),
		  add_coeff_sign_1("add_coeff_sign_1"),
		  add_coeff_man_2("add_coeff_man_2"),
		  add_coeff_exp_2("add_coeff_exp_2"),
		  add_coeff_sign_2("add_coeff_sign_2"),
		  add_coeff_man_3("add_coeff_man_3"),
		  add_coeff_exp_3("add_coeff_exp_3"),
		  add_coeff_sign_3("add_coeff_sign_3"),
		  add_coeff_man_4("add_coeff_man_4"),
		  add_coeff_exp_4("add_coeff_exp_4"),
		  add_coeff_sign_4("add_coeff_sign_4"),
		  add_coeff_man_5("add_coeff_man_5"),
		  add_coeff_exp_5("add_coeff_exp_5"),
		  add_coeff_sign_5("add_coeff_sign_5"),
		  add_coeff_man_6("add_coeff_man_6"),
		  add_coeff_exp_6("add_coeff_exp_6"),
		  add_coeff_sign_6("add_coeff_sign_6"),
		  add_coeff_man_7("add_coeff_man_7"),
		  add_coeff_exp_7("add_coeff_exp_7"),
		  add_coeff_sign_7("add_coeff_sign_7")
		  	,dst_valid("dst_valid")
		  	,dst_man_0("dst_man_0"),
		  dst_exp_0("dst_exp_0"),
		  dst_sign_0("dst_sign_0"),
		  dst_man_1("dst_man_1"),
		  dst_exp_1("dst_exp_1"),
		  dst_sign_1("dst_sign_1"),
		  dst_man_2("dst_man_2"),
		  dst_exp_2("dst_exp_2"),
		  dst_sign_2("dst_sign_2"),
		  dst_man_3("dst_man_3"),
		  dst_exp_3("dst_exp_3"),
		  dst_sign_3("dst_sign_3"),
		  dst_man_4("dst_man_4"),
		  dst_exp_4("dst_exp_4"),
		  dst_sign_4("dst_sign_4"),
		  dst_man_5("dst_man_5"),
		  dst_exp_5("dst_exp_5"),
		  dst_sign_5("dst_sign_5"),
		  dst_man_6("dst_man_6"),
		  dst_exp_6("dst_exp_6"),
		  dst_sign_6("dst_sign_6"),
		  dst_man_7("dst_man_7"),
		  dst_exp_7("dst_exp_7"),
		  dst_sign_7("dst_sign_7")
		  	

		
    {
    }

};

#endif /* _BN_FLOAT32_SC_FOREIGN_INCLUDED_ */
