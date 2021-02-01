/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _FLOAT_DIV_COSIM_INCLUDED_
#define _FLOAT_DIV_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct float_div_cosim : public ncsc_foreign_module
#else
SC_MODULE(float_div_cosim)
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
	sc_in< sc_uint< 23 > > a_man;
	sc_in< sc_uint< 8 > > a_exp;
	sc_in< sc_uint< 1 > > a_sign;
	sc_in< sc_uint< 23 > > b_man;
	sc_in< sc_uint< 8 > > b_exp;
	sc_in< sc_uint< 1 > > b_sign;
	sc_out< sc_uint< 23 > > r_man;
	sc_out< sc_uint< 8 > > r_exp;
	sc_out< sc_uint< 1 > > r_sign;

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
					"More than one instance of module float_div is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of float_div in SystemC\n", 
					scName );
				return;
			} else {
				s << "float_div0" << std::ends;
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
								  "More than %d instance(s) of module float_div are being simulated in Verilog,\n"
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

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! enable_is_clock )
			esc_link_signals( &enable, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &a_man, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &a_exp, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &a_sign, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &b_man, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &b_exp, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &b_sign, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &r_man, module_path, sim_domain, true );
		esc_link_signals( &r_exp, module_path, sim_domain, true );
		esc_link_signals( &r_sign, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "float_div", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'float_div'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "float_div", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'float_div'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( enable_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = enable[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, enable.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "float_div", "enable", scName ) ) {
			esc_report_error( esc_error, "The port 'enable' on module 'float_div'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module float_div must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "float_div_nc_cosim"; } 
    float_div_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	float_div_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" float_div") ) )
		: sc_module(in_name)
#endif
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
		  	

    {
    };
};

int float_div_cosim::numLinked = 0;
float_div_cosim::StringPair float_div_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
