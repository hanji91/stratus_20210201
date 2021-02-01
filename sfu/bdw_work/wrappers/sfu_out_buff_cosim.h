/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _SFU_OUT_BUFF_COSIM_INCLUDED_
#define _SFU_OUT_BUFF_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct sfu_out_buff_cosim : public ncsc_foreign_module
#else
SC_MODULE(sfu_out_buff_cosim)
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
	sc_in< bool > enable;
	sc_in< bool > learned_clip_en;
	sc_in< sc_uint< 32 > > in0_data_0;
	sc_in< sc_uint< 32 > > in0_data_1;
	sc_in< sc_uint< 32 > > in0_data_2;
	sc_in< sc_uint< 32 > > in0_data_3;
	sc_in< sc_uint< 32 > > in0_data_4;
	sc_in< sc_uint< 32 > > in0_data_5;
	sc_in< sc_uint< 32 > > in0_data_6;
	sc_in< sc_uint< 32 > > in0_data_7;
	sc_in< bool > in0_data_valid;
	sc_in< sc_uint< 32 > > in1_data_0;
	sc_in< sc_uint< 32 > > in1_data_1;
	sc_in< sc_uint< 32 > > in1_data_2;
	sc_in< sc_uint< 32 > > in1_data_3;
	sc_in< sc_uint< 32 > > in1_data_4;
	sc_in< sc_uint< 32 > > in1_data_5;
	sc_in< sc_uint< 32 > > in1_data_6;
	sc_in< sc_uint< 32 > > in1_data_7;
	sc_in< bool > in1_data_valid;
	sc_out< sc_biguint< 320 > > out_data;
	sc_out< bool > out_data_valid;

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
					"More than one instance of module sfu_out_buff is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of sfu_out_buff in SystemC\n", 
					scName );
				return;
			} else {
				s << "sfu_out_buff0" << std::ends;
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
								  "More than %d instance(s) of module sfu_out_buff are being simulated in Verilog,\n"
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
		int enable_is_clock = esc_link_clockgen( &enable, sc_time( 0, SC_NS ), module_path, sim_domain, "enable" );
		int learned_clip_en_is_clock = esc_link_clockgen( &learned_clip_en, sc_time( 0, SC_NS ), module_path, sim_domain, "learned_clip_en" );
		int in0_data_valid_is_clock = esc_link_clockgen( &in0_data_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "in0_data_valid" );
		int in1_data_valid_is_clock = esc_link_clockgen( &in1_data_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "in1_data_valid" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! enable_is_clock )
			esc_link_signals( &enable, module_path, sim_domain, true, inputDelay );
		if ( ! learned_clip_en_is_clock )
			esc_link_signals( &learned_clip_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in0_data_7, module_path, sim_domain, true, inputDelay );
		if ( ! in0_data_valid_is_clock )
			esc_link_signals( &in0_data_valid, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in1_data_7, module_path, sim_domain, true, inputDelay );
		if ( ! in1_data_valid_is_clock )
			esc_link_signals( &in1_data_valid, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &out_data, module_path, sim_domain, true );
		esc_link_signals( &out_data_valid, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( enable_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = enable[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, enable.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "enable", scName ) ) {
			esc_report_error( esc_error, "The port 'enable' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( learned_clip_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = learned_clip_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, learned_clip_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "learned_clip_en", scName ) ) {
			esc_report_error( esc_error, "The port 'learned_clip_en' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( in0_data_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = in0_data_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, in0_data_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "in0_data_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'in0_data_valid' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( in1_data_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = in1_data_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, in1_data_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "sfu_out_buff", "in1_data_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'in1_data_valid' on module 'sfu_out_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module sfu_out_buff must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "sfu_out_buff_nc_cosim"; } 
    sfu_out_buff_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	sfu_out_buff_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" sfu_out_buff") ) )
		: sc_module(in_name)
#endif
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
		  	,learned_clip_en("learned_clip_en")
		  	,in0_data_0("in0_data_0"),
		  in0_data_1("in0_data_1"),
		  in0_data_2("in0_data_2"),
		  in0_data_3("in0_data_3"),
		  in0_data_4("in0_data_4"),
		  in0_data_5("in0_data_5"),
		  in0_data_6("in0_data_6"),
		  in0_data_7("in0_data_7")
		  	,in0_data_valid("in0_data_valid")
		  	,in1_data_0("in1_data_0"),
		  in1_data_1("in1_data_1"),
		  in1_data_2("in1_data_2"),
		  in1_data_3("in1_data_3"),
		  in1_data_4("in1_data_4"),
		  in1_data_5("in1_data_5"),
		  in1_data_6("in1_data_6"),
		  in1_data_7("in1_data_7")
		  	,in1_data_valid("in1_data_valid")
		  	,out_data("out_data")
		  	,out_data_valid("out_data_valid")
		  	

    {
    };
};

int sfu_out_buff_cosim::numLinked = 0;
sfu_out_buff_cosim::StringPair sfu_out_buff_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
