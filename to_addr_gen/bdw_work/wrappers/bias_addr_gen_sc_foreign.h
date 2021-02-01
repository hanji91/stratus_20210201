/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _BIAS_ADDR_GEN_SC_FOREIGN_INCLUDED_
#define _BIAS_ADDR_GEN_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct bias_addr_gen : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 32 > > bias_read_base_addr;
	sc_in< bool > bias_en;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< bool > data_en;
	sc_out< sc_uint< 32 > > bias_addr;
	sc_out< bool > bias_addr_valid;


    const char* hdl_name() const { return "bias_addr_gen"; }
    
	bias_addr_gen( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,bias_read_base_addr("bias_read_base_addr")
		  	,bias_en("bias_en")
		  	,start_rising("start_rising")
		  	,data_en("data_en")
		  	,bias_addr("bias_addr")
		  	,bias_addr_valid("bias_addr_valid")
		  	

		
    {
    }

};

#endif /* _BIAS_ADDR_GEN_SC_FOREIGN_INCLUDED_ */
