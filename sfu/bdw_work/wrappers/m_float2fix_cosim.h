/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _M_FLOAT2FIX_COSIM_INCLUDED_
#define _M_FLOAT2FIX_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct m_float2fix_cosim : public ncsc_foreign_module
#else
SC_MODULE(m_float2fix_cosim)
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
	sc_in< bool > src_valid;
	sc_in< sc_uint< 32 > > src_0;
	sc_in< sc_uint< 32 > > src_1;
	sc_in< sc_uint< 32 > > src_2;
	sc_in< sc_uint< 32 > > src_3;
	sc_in< sc_uint< 32 > > src_4;
	sc_in< sc_uint< 32 > > src_5;
	sc_in< sc_uint< 32 > > src_6;
	sc_in< sc_uint< 32 > > src_7;
	sc_out< bool > dst_valid;
	sc_out< sc_uint< 32 > > dst_0;
	sc_out< sc_uint< 32 > > dst_1;
	sc_out< sc_uint< 32 > > dst_2;
	sc_out< sc_uint< 32 > > dst_3;
	sc_out< sc_uint< 32 > > dst_4;
	sc_out< sc_uint< 32 > > dst_5;
	sc_out< sc_uint< 32 > > dst_6;
	sc_out< sc_uint< 32 > > dst_7;

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
					"More than one instance of module m_float2fix is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of m_float2fix in SystemC\n", 
					scName );
				return;
			} else {
				s << "m_float2fix0" << std::ends;
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
								  "More than %d instance(s) of module m_float2fix are being simulated in Verilog,\n"
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
		int src_valid_is_clock = esc_link_clockgen( &src_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "src_valid" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! src_valid_is_clock )
			esc_link_signals( &src_valid, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &dst_valid, module_path, sim_domain, true );
		esc_link_signals( &dst_0, module_path, sim_domain, true );
		esc_link_signals( &dst_1, module_path, sim_domain, true );
		esc_link_signals( &dst_2, module_path, sim_domain, true );
		esc_link_signals( &dst_3, module_path, sim_domain, true );
		esc_link_signals( &dst_4, module_path, sim_domain, true );
		esc_link_signals( &dst_5, module_path, sim_domain, true );
		esc_link_signals( &dst_6, module_path, sim_domain, true );
		esc_link_signals( &dst_7, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "m_float2fix", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'm_float2fix'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "m_float2fix", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'm_float2fix'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( src_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = src_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, src_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "m_float2fix", "src_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'src_valid' on module 'm_float2fix'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module m_float2fix must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "m_float2fix_nc_cosim"; } 
    m_float2fix_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	m_float2fix_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" m_float2fix") ) )
		: sc_module(in_name)
#endif
		  ,clk("clk")
		  	,rstn("rstn")
		  	,src_valid("src_valid")
		  	,src_0("src_0"),
		  src_1("src_1"),
		  src_2("src_2"),
		  src_3("src_3"),
		  src_4("src_4"),
		  src_5("src_5"),
		  src_6("src_6"),
		  src_7("src_7")
		  	,dst_valid("dst_valid")
		  	,dst_0("dst_0"),
		  dst_1("dst_1"),
		  dst_2("dst_2"),
		  dst_3("dst_3"),
		  dst_4("dst_4"),
		  dst_5("dst_5"),
		  dst_6("dst_6"),
		  dst_7("dst_7")
		  	

    {
    };
};

int m_float2fix_cosim::numLinked = 0;
m_float2fix_cosim::StringPair m_float2fix_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
