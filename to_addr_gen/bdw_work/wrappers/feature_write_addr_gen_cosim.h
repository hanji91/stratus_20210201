/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _FEATURE_WRITE_ADDR_GEN_COSIM_INCLUDED_
#define _FEATURE_WRITE_ADDR_GEN_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct feature_write_addr_gen_cosim : public ncsc_foreign_module
#else
SC_MODULE(feature_write_addr_gen_cosim)
#endif
{
	struct StringPair {
		const char* simConfigName;
		const char* instanceName;
		bool linked;
	};

	// Instance number used during elaboration-time SystemC-to-HDL signal linkage.
	static int numLinked;
	static StringPair instanceNames[];

	static int numInstanceNames( const char* simConfigName ) {
		int nin = 0;
		for ( int i = 0; instanceNames[i].simConfigName != NULL; ++i )
			if ( strcmp( instanceNames[i].simConfigName, simConfigName ) == 0 )
				++nin;
		return nin;
	}

	// Port declarations.
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

    void end_of_elaboration()
    {
#if __GNUC__ < 3
		strstream s;
#else
		std::ostringstream s;
#endif


		s << "top/";

		const char* scName = getenv("BDW_SIM_CONFIG");
		if (!scName) 
			scName = "?";

		int nin = numInstanceNames(scName);
		if ( nin == 0 )
		{
			if ( numLinked > 0 ) 
			{
				esc_report_error( esc_fatal, 
					"More than one instance of module feature_write_addr_gen is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of feature_write_addr_gen in SystemC\n", 
					scName );
				return;
			} else {
				s << "feature_write_addr_gen0" << std::ends;
			}
		}
		else
		{
			StringPair *instPair = &instanceNames[ numLinked ];
			while ( instPair->instanceName != NULL )
			{
				if ( ( ! instPair->linked )
					 && ( ! strcmp( instPair->simConfigName, scName ) ) )
				{
					const char *instName = instPair->instanceName;

					// Hierarchical SystemC instance names must be escaped for Verilog.
					if ( strchr( instName, '.' ) != NULL )
						s << '\\' << instName << ' ' << std::ends;
					else
						s << instName << std::ends;

					instPair->linked = true;
					break;
				}

				++instPair;
			}

			if ( instPair->instanceName == NULL )
			{
				esc_report_error( esc_fatal, 
								  "More than %d instance(s) of module feature_write_addr_gen are being simulated in Verilog,\n"
								  "but only %d instance name(s) have been specified in simConfig %s.\n",
								  nin, nin, scName );
				return;
			}
		}
		numLinked++;


#if __GNUC__ < 3
		char *c = s.str();
#else
		char *c = (char *)strdup( s.str().c_str() );
#endif

        link_signals(c, "verilog");
#if __GNUC__ < 3
		delete c;
#else
		free( c );
#endif
    }

    void link_signals(const char *module_path, const char *sim_domain)
    {
#ifndef NC_SYSTEMC
        int registeredClocks = 0;

		double inputDelay = 0.0;
		const char* scName = getenv("BDW_SIM_CONFIG");
		if (!scName) scName = "?";
		if ( qbhVerilogInputDelay( qbhEmptyHandle, scName, &inputDelay ) != qbhOK )
			inputDelay = 0.0;

		// Try to register the boolean input ports as clocks.
		int clk_is_clock = esc_link_clockgen( &clk, sc_time( 0, SC_NS ), module_path, sim_domain, "clk" );
		int rstn_is_clock = esc_link_clockgen( &rstn, sc_time( 0, SC_NS ), module_path, sim_domain, "rstn" );
		int init_is_clock = esc_link_clockgen( &init, sc_time( 0, SC_NS ), module_path, sim_domain, "init" );
		int src_vld_is_clock = esc_link_clockgen( &src_vld, sc_time( 0, SC_NS ), module_path, sim_domain, "src_vld" );
		int read_address_valid_is_clock = esc_link_clockgen( &read_address_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "read_address_valid" );
		int data_in_en_is_clock = esc_link_clockgen( &data_in_en, sc_time( 0, SC_NS ), module_path, sim_domain, "data_in_en" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! init_is_clock )
			esc_link_signals( &init, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &start, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &conv_type, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &stop, module_path, sim_domain, true );
		esc_link_signals( &base_addr, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src, module_path, sim_domain, true, inputDelay );
		if ( ! src_vld_is_clock )
			esc_link_signals( &src_vld, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &read_address, module_path, sim_domain, true, inputDelay );
		if ( ! read_address_valid_is_clock )
			esc_link_signals( &read_address_valid, module_path, sim_domain, true, inputDelay );
		if ( ! data_in_en_is_clock )
			esc_link_signals( &data_in_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &read_data, module_path, sim_domain, true );
		esc_link_signals( &address_0, module_path, sim_domain, true );
		esc_link_signals( &cs_0, module_path, sim_domain, true );
		esc_link_signals( &we_0, module_path, sim_domain, true );
		esc_link_signals( &oe_0, module_path, sim_domain, true );
		esc_link_signals( &data_in, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &data_out, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( init_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = init[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, init.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "init", scName ) ) {
			esc_report_error( esc_error, "The port 'init' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( src_vld_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = src_vld[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, src_vld.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "src_vld", scName ) ) {
			esc_report_error( esc_error, "The port 'src_vld' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( read_address_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = read_address_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, read_address_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "read_address_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'read_address_valid' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( data_in_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = data_in_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, data_in_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "feature_write_addr_gen", "data_in_en", scName ) ) {
			esc_report_error( esc_error, "The port 'data_in_en' on module 'feature_write_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module feature_write_addr_gen must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "feature_write_addr_gen_nc_cosim"; } 
    feature_write_addr_gen_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	feature_write_addr_gen_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" feature_write_addr_gen") ) )
		: sc_module(in_name)
#endif
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
    };
};

int feature_write_addr_gen_cosim::numLinked = 0;
feature_write_addr_gen_cosim::StringPair feature_write_addr_gen_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
