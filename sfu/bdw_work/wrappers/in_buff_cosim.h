/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _IN_BUFF_COSIM_INCLUDED_
#define _IN_BUFF_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct in_buff_cosim : public ncsc_foreign_module
#else
SC_MODULE(in_buff_cosim)
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
					"More than one instance of module in_buff is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of in_buff in SystemC\n", 
					scName );
				return;
			} else {
				s << "in_buff0" << std::ends;
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
								  "More than %d instance(s) of module in_buff are being simulated in Verilog,\n"
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
		int in_data_valid_is_clock = esc_link_clockgen( &in_data_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "in_data_valid" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! enable_is_clock )
			esc_link_signals( &enable, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_8, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_9, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_10, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_11, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_12, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_13, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_14, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_15, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_16, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_17, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_18, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_19, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_20, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_21, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_22, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_23, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_24, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_25, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_26, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_27, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_28, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_29, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_30, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &in_data_31, module_path, sim_domain, true, inputDelay );
		if ( ! in_data_valid_is_clock )
			esc_link_signals( &in_data_valid, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &out_data_0, module_path, sim_domain, true );
		esc_link_signals( &out_data_1, module_path, sim_domain, true );
		esc_link_signals( &out_data_2, module_path, sim_domain, true );
		esc_link_signals( &out_data_3, module_path, sim_domain, true );
		esc_link_signals( &out_data_4, module_path, sim_domain, true );
		esc_link_signals( &out_data_5, module_path, sim_domain, true );
		esc_link_signals( &out_data_6, module_path, sim_domain, true );
		esc_link_signals( &out_data_7, module_path, sim_domain, true );
		esc_link_signals( &out_data_valid, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "in_buff", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'in_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "in_buff", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'in_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( enable_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = enable[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, enable.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "in_buff", "enable", scName ) ) {
			esc_report_error( esc_error, "The port 'enable' on module 'in_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( in_data_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = in_data_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, in_data_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "in_buff", "in_data_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'in_data_valid' on module 'in_buff'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module in_buff must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "in_buff_nc_cosim"; } 
    in_buff_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	in_buff_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" in_buff") ) )
		: sc_module(in_name)
#endif
		  ,clk("clk")
		  	,rstn("rstn")
		  	,enable("enable")
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
		  out_data_7("out_data_7")
		  	,out_data_valid("out_data_valid")
		  	

    {
    };
};

int in_buff_cosim::numLinked = 0;
in_buff_cosim::StringPair in_buff_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
