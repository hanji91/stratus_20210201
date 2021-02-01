/****************************************************************************
*
*  Copyright (c) 2017, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/


#ifndef _FEATURE_WRITE_ADDR_GEN_SC_FOREIGN_INCLUDED_
#define _FEATURE_WRITE_ADDR_GEN_SC_FOREIGN_INCLUDED_

#include <systemc.h>


// Declaration of wrapper with RTL level ports

struct feature_write_addr_gen : public ncsc_foreign_module
{
public:

	sc_in< bool > clk;
	sc_in< bool > rstn;
	sc_in< bool > init;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 8 > > conv_type;
	sc_out< bool > stop;
	sc_in< sc_uint< 32 > > base_addr;
	sc_in< sc_biguint< 320 > > src;
	sc_in< bool > src_vld;
	sc_in< sc_uint< 32 > > read_address;
	sc_in< bool > read_address_valid;
	sc_in< bool > data_in_en;
	sc_out< sc_biguint< 320 > > read_data;
	sc_out< sc_uint< 32 > > address_0;
	sc_out< bool > cs_0;
	sc_out< bool > we_0;
	sc_out< bool > oe_0;
	sc_in< sc_biguint< 320 > > data_in;
	sc_out< sc_biguint< 320 > > data_out;


    const char* hdl_name() const { return "feature_write_addr_gen"; }
    
	feature_write_addr_gen( sc_module_name name )
		: ncsc_foreign_module(name)
		  ,clk("clk")
		  	,rstn("rstn")
		  	,init("init")
		  	,start("start")
		  	,conv_type("conv_type")
		  	,stop("stop")
		  	,base_addr("base_addr")
		  	,src("src")
		  	,src_vld("src_vld")
		  	,read_address("read_address")
		  	,read_address_valid("read_address_valid")
		  	,data_in_en("data_in_en")
		  	,read_data("read_data")
		  	,address_0("address_0")
		  	,cs_0("cs_0")
		  	,we_0("we_0")
		  	,oe_0("oe_0")
		  	,data_in("data_in")
		  	,data_out("data_out")
		  	

		
    {
    }

};

#endif /* _FEATURE_WRITE_ADDR_GEN_SC_FOREIGN_INCLUDED_ */
