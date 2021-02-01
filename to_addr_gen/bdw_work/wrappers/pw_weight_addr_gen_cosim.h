/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _PW_WEIGHT_ADDR_GEN_COSIM_INCLUDED_
#define _PW_WEIGHT_ADDR_GEN_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct pw_weight_addr_gen_cosim : public ncsc_foreign_module
#else
SC_MODULE(pw_weight_addr_gen_cosim)
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
	sc_in< bool > stop;
	sc_in< sc_uint< 8 > > start;
	sc_in< sc_uint< 1 > > start_rising;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< sc_uint< 16 > > feature_width;
	sc_in< sc_uint< 16 > > feature_height;
	sc_in< sc_uint< 16 > > feature_channel;
	sc_in< sc_uint< 16 > > out_feature_width;
	sc_in< sc_uint< 16 > > out_feature_height;
	sc_in< sc_uint< 16 > > out_feature_channel;
	sc_in< sc_uint< 16 > > filter_width;
	sc_in< sc_uint< 16 > > filter_height;
	sc_in< sc_uint< 16 > > filter_channel;
	sc_in< sc_uint< 8 > > stride_x;
	sc_in< sc_uint< 8 > > stride_y;
	sc_in< sc_uint< 8 > > pad_top_size;
	sc_in< sc_uint< 8 > > pad_bottom_size;
	sc_in< sc_uint< 8 > > pad_left_size;
	sc_in< sc_uint< 8 > > pad_right_size;
	sc_in< sc_uint< 32 > > read_weight_base_addr;
	sc_out< sc_uint< 32 > > pw_weight_addr;
	sc_out< bool > pw_weight_addr_valid;
	sc_out< bool > pw_weight_data_valid;
	sc_out< bool > cache_en;

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
					"More than one instance of module pw_weight_addr_gen is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of pw_weight_addr_gen in SystemC\n", 
					scName );
				return;
			} else {
				s << "pw_weight_addr_gen0" << std::ends;
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
								  "More than %d instance(s) of module pw_weight_addr_gen are being simulated in Verilog,\n"
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
		int stop_is_clock = esc_link_clockgen( &stop, sc_time( 0, SC_NS ), module_path, sim_domain, "stop" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! stop_is_clock )
			esc_link_signals( &stop, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &start, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &start_rising, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &systolic_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &systolic_depth, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &feature_width, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &feature_height, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &feature_channel, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &out_feature_width, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &out_feature_height, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &out_feature_channel, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &filter_width, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &filter_height, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &filter_channel, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &stride_x, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &stride_y, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &pad_top_size, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &pad_bottom_size, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &pad_left_size, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &pad_right_size, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &read_weight_base_addr, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &pw_weight_addr, module_path, sim_domain, true );
		esc_link_signals( &pw_weight_addr_valid, module_path, sim_domain, true );
		esc_link_signals( &pw_weight_data_valid, module_path, sim_domain, true );
		esc_link_signals( &cache_en, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "pw_weight_addr_gen", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'pw_weight_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "pw_weight_addr_gen", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'pw_weight_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( stop_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = stop[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, stop.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "pw_weight_addr_gen", "stop", scName ) ) {
			esc_report_error( esc_error, "The port 'stop' on module 'pw_weight_addr_gen'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module pw_weight_addr_gen must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "pw_weight_addr_gen_nc_cosim"; } 
    pw_weight_addr_gen_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	pw_weight_addr_gen_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" pw_weight_addr_gen") ) )
		: sc_module(in_name)
#endif
		  ,clk("clk")
		  	,rstn("rstn")
		  	,stop("stop")
		  	,start("start")
		  	,start_rising("start_rising")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,feature_width("feature_width")
		  	,feature_height("feature_height")
		  	,feature_channel("feature_channel")
		  	,out_feature_width("out_feature_width")
		  	,out_feature_height("out_feature_height")
		  	,out_feature_channel("out_feature_channel")
		  	,filter_width("filter_width")
		  	,filter_height("filter_height")
		  	,filter_channel("filter_channel")
		  	,stride_x("stride_x")
		  	,stride_y("stride_y")
		  	,pad_top_size("pad_top_size")
		  	,pad_bottom_size("pad_bottom_size")
		  	,pad_left_size("pad_left_size")
		  	,pad_right_size("pad_right_size")
		  	,read_weight_base_addr("read_weight_base_addr")
		  	,pw_weight_addr("pw_weight_addr")
		  	,pw_weight_addr_valid("pw_weight_addr_valid")
		  	,pw_weight_data_valid("pw_weight_data_valid")
		  	,cache_en("cache_en")
		  	

    {
    };
};

int pw_weight_addr_gen_cosim::numLinked = 0;
pw_weight_addr_gen_cosim::StringPair pw_weight_addr_gen_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
