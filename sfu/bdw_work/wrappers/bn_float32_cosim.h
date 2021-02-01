/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _BN_FLOAT32_COSIM_INCLUDED_
#define _BN_FLOAT32_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct bn_float32_cosim : public ncsc_foreign_module
#else
SC_MODULE(bn_float32_cosim)
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
					"More than one instance of module bn_float32 is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of bn_float32 in SystemC\n", 
					scName );
				return;
			} else {
				s << "bn_float320" << std::ends;
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
								  "More than %d instance(s) of module bn_float32 are being simulated in Verilog,\n"
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
		int src_valid_is_clock = esc_link_clockgen( &src_valid, sc_time( 0, SC_NS ), module_path, sim_domain, "src_valid" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! enable_is_clock )
			esc_link_signals( &enable, module_path, sim_domain, true, inputDelay );
		if ( ! src_valid_is_clock )
			esc_link_signals( &src_valid, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_man_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_exp_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &src_sign_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_man_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_exp_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mul_coeff_sign_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_0, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_1, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_2, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_3, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_4, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_5, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_6, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_man_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_exp_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &add_coeff_sign_7, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &dst_valid, module_path, sim_domain, true );
		esc_link_signals( &dst_man_0, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_0, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_0, module_path, sim_domain, true );
		esc_link_signals( &dst_man_1, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_1, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_1, module_path, sim_domain, true );
		esc_link_signals( &dst_man_2, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_2, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_2, module_path, sim_domain, true );
		esc_link_signals( &dst_man_3, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_3, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_3, module_path, sim_domain, true );
		esc_link_signals( &dst_man_4, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_4, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_4, module_path, sim_domain, true );
		esc_link_signals( &dst_man_5, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_5, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_5, module_path, sim_domain, true );
		esc_link_signals( &dst_man_6, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_6, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_6, module_path, sim_domain, true );
		esc_link_signals( &dst_man_7, module_path, sim_domain, true );
		esc_link_signals( &dst_exp_7, module_path, sim_domain, true );
		esc_link_signals( &dst_sign_7, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "bn_float32", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'bn_float32'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "bn_float32", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'bn_float32'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( enable_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = enable[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, enable.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "bn_float32", "enable", scName ) ) {
			esc_report_error( esc_error, "The port 'enable' on module 'bn_float32'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( src_valid_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = src_valid[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, src_valid.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "bn_float32", "src_valid", scName ) ) {
			esc_report_error( esc_error, "The port 'src_valid' on module 'bn_float32'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module bn_float32 must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "bn_float32_nc_cosim"; } 
    bn_float32_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	bn_float32_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" bn_float32") ) )
		: sc_module(in_name)
#endif
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
    };
};

int bn_float32_cosim::numLinked = 0;
bn_float32_cosim::StringPair bn_float32_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif