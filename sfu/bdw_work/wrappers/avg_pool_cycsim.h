/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _AVG_POOL_CYCSIM_INCLUDED_
#define _AVG_POOL_CYCSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"

SC_MODULE(avg_pool_cycsim)
{

	// Port declarations.
	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > enable;
	sc_in< bool > init;
	sc_in< sc_int< 32 > > in_data_0;
	sc_in< sc_int< 32 > > in_data_1;
	sc_in< sc_int< 32 > > in_data_2;
	sc_in< sc_int< 32 > > in_data_3;
	sc_in< sc_int< 32 > > in_data_4;
	sc_in< sc_int< 32 > > in_data_5;
	sc_in< sc_int< 32 > > in_data_6;
	sc_in< sc_int< 32 > > in_data_7;
	sc_in< sc_int< 32 > > in_data_8;
	sc_in< sc_int< 32 > > in_data_9;
	sc_in< sc_int< 32 > > in_data_10;
	sc_in< sc_int< 32 > > in_data_11;
	sc_in< sc_int< 32 > > in_data_12;
	sc_in< sc_int< 32 > > in_data_13;
	sc_in< sc_int< 32 > > in_data_14;
	sc_in< sc_int< 32 > > in_data_15;
	sc_in< sc_int< 32 > > in_data_16;
	sc_in< sc_int< 32 > > in_data_17;
	sc_in< sc_int< 32 > > in_data_18;
	sc_in< sc_int< 32 > > in_data_19;
	sc_in< sc_int< 32 > > in_data_20;
	sc_in< sc_int< 32 > > in_data_21;
	sc_in< sc_int< 32 > > in_data_22;
	sc_in< sc_int< 32 > > in_data_23;
	sc_in< sc_int< 32 > > in_data_24;
	sc_in< sc_int< 32 > > in_data_25;
	sc_in< sc_int< 32 > > in_data_26;
	sc_in< sc_int< 32 > > in_data_27;
	sc_in< sc_int< 32 > > in_data_28;
	sc_in< sc_int< 32 > > in_data_29;
	sc_in< sc_int< 32 > > in_data_30;
	sc_in< sc_int< 32 > > in_data_31;
	sc_in< bool > in_data_valid;
	sc_out< sc_int< 32 > > out_data_0;
	sc_out< sc_int< 32 > > out_data_1;
	sc_out< sc_int< 32 > > out_data_2;
	sc_out< sc_int< 32 > > out_data_3;
	sc_out< sc_int< 32 > > out_data_4;
	sc_out< sc_int< 32 > > out_data_5;
	sc_out< sc_int< 32 > > out_data_6;
	sc_out< sc_int< 32 > > out_data_7;
	sc_out< sc_int< 32 > > out_data_8;
	sc_out< sc_int< 32 > > out_data_9;
	sc_out< sc_int< 32 > > out_data_10;
	sc_out< sc_int< 32 > > out_data_11;
	sc_out< sc_int< 32 > > out_data_12;
	sc_out< sc_int< 32 > > out_data_13;
	sc_out< sc_int< 32 > > out_data_14;
	sc_out< sc_int< 32 > > out_data_15;
	sc_out< sc_int< 32 > > out_data_16;
	sc_out< sc_int< 32 > > out_data_17;
	sc_out< sc_int< 32 > > out_data_18;
	sc_out< sc_int< 32 > > out_data_19;
	sc_out< sc_int< 32 > > out_data_20;
	sc_out< sc_int< 32 > > out_data_21;
	sc_out< sc_int< 32 > > out_data_22;
	sc_out< sc_int< 32 > > out_data_23;
	sc_out< sc_int< 32 > > out_data_24;
	sc_out< sc_int< 32 > > out_data_25;
	sc_out< sc_int< 32 > > out_data_26;
	sc_out< sc_int< 32 > > out_data_27;
	sc_out< sc_int< 32 > > out_data_28;
	sc_out< sc_int< 32 > > out_data_29;
	sc_out< sc_int< 32 > > out_data_30;
	sc_out< sc_int< 32 > > out_data_31;
	sc_out< bool > out_data_valid;


	avg_pool_cycsim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" avg_pool") ) )
		: sc_module(in_name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,init("init")
		  	,in_data_0("in_data_0"),
		  in_data_1("in_data_1"),
		  in_data_2("in_data_2"),
		  in_data_3("in_data_3"),
		  in_data_4("in_data_4"),
		  in_data_5("in_data_5"),
		  in_data_6("in_data_6"),
		  in_data_7("in_data_7"),
		  in_data_8("in_data_8"),
		  in_data_9("in_data_9"),
		  in_data_10("in_data_10"),
		  in_data_11("in_data_11"),
		  in_data_12("in_data_12"),
		  in_data_13("in_data_13"),
		  in_data_14("in_data_14"),
		  in_data_15("in_data_15"),
		  in_data_16("in_data_16"),
		  in_data_17("in_data_17"),
		  in_data_18("in_data_18"),
		  in_data_19("in_data_19"),
		  in_data_20("in_data_20"),
		  in_data_21("in_data_21"),
		  in_data_22("in_data_22"),
		  in_data_23("in_data_23"),
		  in_data_24("in_data_24"),
		  in_data_25("in_data_25"),
		  in_data_26("in_data_26"),
		  in_data_27("in_data_27"),
		  in_data_28("in_data_28"),
		  in_data_29("in_data_29"),
		  in_data_30("in_data_30"),
		  in_data_31("in_data_31")
		  	,in_data_valid("in_data_valid")
		  	,out_data_0("out_data_0"),
		  out_data_1("out_data_1"),
		  out_data_2("out_data_2"),
		  out_data_3("out_data_3"),
		  out_data_4("out_data_4"),
		  out_data_5("out_data_5"),
		  out_data_6("out_data_6"),
		  out_data_7("out_data_7"),
		  out_data_8("out_data_8"),
		  out_data_9("out_data_9"),
		  out_data_10("out_data_10"),
		  out_data_11("out_data_11"),
		  out_data_12("out_data_12"),
		  out_data_13("out_data_13"),
		  out_data_14("out_data_14"),
		  out_data_15("out_data_15"),
		  out_data_16("out_data_16"),
		  out_data_17("out_data_17"),
		  out_data_18("out_data_18"),
		  out_data_19("out_data_19"),
		  out_data_20("out_data_20"),
		  out_data_21("out_data_21"),
		  out_data_22("out_data_22"),
		  out_data_23("out_data_23"),
		  out_data_24("out_data_24"),
		  out_data_25("out_data_25"),
		  out_data_26("out_data_26"),
		  out_data_27("out_data_27"),
		  out_data_28("out_data_28"),
		  out_data_29("out_data_29"),
		  out_data_30("out_data_30"),
		  out_data_31("out_data_31")
		  	,out_data_valid("out_data_valid")
		  	

    {
    };
};

#endif
