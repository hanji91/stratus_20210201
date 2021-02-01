/****************************************************************************
 *
 *  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
 *
 *  This file contains confidential information that may not be
 *  distributed under any circumstances without the written permision
 *  of Cadence Design Systems.
 *
 ***************************************************************************/

#ifndef _CACHE_COSIM_INCLUDED_
#define _CACHE_COSIM_INCLUDED_

#include "systemc.h"
#include "cynthhl.h"
#include "esc.h"
#if __GNUC__ < 3
#include <ostream.h>
#else
#include <ostream>

#endif

#ifdef NC_SYSTEMC
struct cache_cosim : public ncsc_foreign_module
#else
SC_MODULE(cache_cosim)
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
	sc_in< bool > cache_en;
	sc_in< sc_uint< 8 > > systolic_en;
	sc_in< sc_uint< 8 > > systolic_depth;
	sc_in< bool > addr_if_start;
	sc_in< sc_uint< 8 > > systolic_sel;
	sc_in< sc_biguint< 320 > > feature_data;
	sc_in< bool > feature_share_en;
	sc_in< bool > feature_data_en;
	sc_in< sc_uint< 16 > > feature_data_sel;
	sc_in< sc_biguint< 256 > > weight_data;
	sc_in< bool > weight_data_en;
	sc_out< sc_int< 10 > > mac_src_0_s0_0;
	sc_out< sc_int< 10 > > mac_src_0_s0_1;
	sc_out< sc_int< 10 > > mac_src_0_s0_2;
	sc_out< sc_int< 10 > > mac_src_0_s0_3;
	sc_out< sc_int< 10 > > mac_src_0_s0_4;
	sc_out< sc_int< 10 > > mac_src_0_s0_5;
	sc_out< sc_int< 10 > > mac_src_0_s0_6;
	sc_out< sc_int< 10 > > mac_src_0_s0_7;
	sc_out< sc_int< 10 > > mac_src_0_s0_8;
	sc_out< sc_int< 10 > > mac_src_0_s0_9;
	sc_out< sc_int< 10 > > mac_src_0_s0_10;
	sc_out< sc_int< 10 > > mac_src_0_s0_11;
	sc_out< sc_int< 10 > > mac_src_0_s0_12;
	sc_out< sc_int< 10 > > mac_src_0_s0_13;
	sc_out< sc_int< 10 > > mac_src_0_s0_14;
	sc_out< sc_int< 10 > > mac_src_0_s0_15;
	sc_out< sc_int< 10 > > mac_src_0_s0_16;
	sc_out< sc_int< 10 > > mac_src_0_s0_17;
	sc_out< sc_int< 10 > > mac_src_0_s0_18;
	sc_out< sc_int< 10 > > mac_src_0_s0_19;
	sc_out< sc_int< 10 > > mac_src_0_s0_20;
	sc_out< sc_int< 10 > > mac_src_0_s0_21;
	sc_out< sc_int< 10 > > mac_src_0_s0_22;
	sc_out< sc_int< 10 > > mac_src_0_s0_23;
	sc_out< sc_int< 10 > > mac_src_0_s0_24;
	sc_out< sc_int< 10 > > mac_src_0_s0_25;
	sc_out< sc_int< 10 > > mac_src_0_s0_26;
	sc_out< sc_int< 10 > > mac_src_0_s0_27;
	sc_out< sc_int< 10 > > mac_src_0_s0_28;
	sc_out< sc_int< 10 > > mac_src_0_s0_29;
	sc_out< sc_int< 10 > > mac_src_0_s0_30;
	sc_out< sc_int< 10 > > mac_src_0_s0_31;
	sc_out< sc_int< 10 > > mac_src_0_s1_0;
	sc_out< sc_int< 10 > > mac_src_0_s1_1;
	sc_out< sc_int< 10 > > mac_src_0_s1_2;
	sc_out< sc_int< 10 > > mac_src_0_s1_3;
	sc_out< sc_int< 10 > > mac_src_0_s1_4;
	sc_out< sc_int< 10 > > mac_src_0_s1_5;
	sc_out< sc_int< 10 > > mac_src_0_s1_6;
	sc_out< sc_int< 10 > > mac_src_0_s1_7;
	sc_out< sc_int< 10 > > mac_src_0_s1_8;
	sc_out< sc_int< 10 > > mac_src_0_s1_9;
	sc_out< sc_int< 10 > > mac_src_0_s1_10;
	sc_out< sc_int< 10 > > mac_src_0_s1_11;
	sc_out< sc_int< 10 > > mac_src_0_s1_12;
	sc_out< sc_int< 10 > > mac_src_0_s1_13;
	sc_out< sc_int< 10 > > mac_src_0_s1_14;
	sc_out< sc_int< 10 > > mac_src_0_s1_15;
	sc_out< sc_int< 10 > > mac_src_0_s1_16;
	sc_out< sc_int< 10 > > mac_src_0_s1_17;
	sc_out< sc_int< 10 > > mac_src_0_s1_18;
	sc_out< sc_int< 10 > > mac_src_0_s1_19;
	sc_out< sc_int< 10 > > mac_src_0_s1_20;
	sc_out< sc_int< 10 > > mac_src_0_s1_21;
	sc_out< sc_int< 10 > > mac_src_0_s1_22;
	sc_out< sc_int< 10 > > mac_src_0_s1_23;
	sc_out< sc_int< 10 > > mac_src_0_s1_24;
	sc_out< sc_int< 10 > > mac_src_0_s1_25;
	sc_out< sc_int< 10 > > mac_src_0_s1_26;
	sc_out< sc_int< 10 > > mac_src_0_s1_27;
	sc_out< sc_int< 10 > > mac_src_0_s1_28;
	sc_out< sc_int< 10 > > mac_src_0_s1_29;
	sc_out< sc_int< 10 > > mac_src_0_s1_30;
	sc_out< sc_int< 10 > > mac_src_0_s1_31;
	sc_out< sc_int< 10 > > mac_src_0_s2_0;
	sc_out< sc_int< 10 > > mac_src_0_s2_1;
	sc_out< sc_int< 10 > > mac_src_0_s2_2;
	sc_out< sc_int< 10 > > mac_src_0_s2_3;
	sc_out< sc_int< 10 > > mac_src_0_s2_4;
	sc_out< sc_int< 10 > > mac_src_0_s2_5;
	sc_out< sc_int< 10 > > mac_src_0_s2_6;
	sc_out< sc_int< 10 > > mac_src_0_s2_7;
	sc_out< sc_int< 10 > > mac_src_0_s2_8;
	sc_out< sc_int< 10 > > mac_src_0_s2_9;
	sc_out< sc_int< 10 > > mac_src_0_s2_10;
	sc_out< sc_int< 10 > > mac_src_0_s2_11;
	sc_out< sc_int< 10 > > mac_src_0_s2_12;
	sc_out< sc_int< 10 > > mac_src_0_s2_13;
	sc_out< sc_int< 10 > > mac_src_0_s2_14;
	sc_out< sc_int< 10 > > mac_src_0_s2_15;
	sc_out< sc_int< 10 > > mac_src_0_s2_16;
	sc_out< sc_int< 10 > > mac_src_0_s2_17;
	sc_out< sc_int< 10 > > mac_src_0_s2_18;
	sc_out< sc_int< 10 > > mac_src_0_s2_19;
	sc_out< sc_int< 10 > > mac_src_0_s2_20;
	sc_out< sc_int< 10 > > mac_src_0_s2_21;
	sc_out< sc_int< 10 > > mac_src_0_s2_22;
	sc_out< sc_int< 10 > > mac_src_0_s2_23;
	sc_out< sc_int< 10 > > mac_src_0_s2_24;
	sc_out< sc_int< 10 > > mac_src_0_s2_25;
	sc_out< sc_int< 10 > > mac_src_0_s2_26;
	sc_out< sc_int< 10 > > mac_src_0_s2_27;
	sc_out< sc_int< 10 > > mac_src_0_s2_28;
	sc_out< sc_int< 10 > > mac_src_0_s2_29;
	sc_out< sc_int< 10 > > mac_src_0_s2_30;
	sc_out< sc_int< 10 > > mac_src_0_s2_31;
	sc_out< sc_int< 10 > > mac_src_0_s3_0;
	sc_out< sc_int< 10 > > mac_src_0_s3_1;
	sc_out< sc_int< 10 > > mac_src_0_s3_2;
	sc_out< sc_int< 10 > > mac_src_0_s3_3;
	sc_out< sc_int< 10 > > mac_src_0_s3_4;
	sc_out< sc_int< 10 > > mac_src_0_s3_5;
	sc_out< sc_int< 10 > > mac_src_0_s3_6;
	sc_out< sc_int< 10 > > mac_src_0_s3_7;
	sc_out< sc_int< 10 > > mac_src_0_s3_8;
	sc_out< sc_int< 10 > > mac_src_0_s3_9;
	sc_out< sc_int< 10 > > mac_src_0_s3_10;
	sc_out< sc_int< 10 > > mac_src_0_s3_11;
	sc_out< sc_int< 10 > > mac_src_0_s3_12;
	sc_out< sc_int< 10 > > mac_src_0_s3_13;
	sc_out< sc_int< 10 > > mac_src_0_s3_14;
	sc_out< sc_int< 10 > > mac_src_0_s3_15;
	sc_out< sc_int< 10 > > mac_src_0_s3_16;
	sc_out< sc_int< 10 > > mac_src_0_s3_17;
	sc_out< sc_int< 10 > > mac_src_0_s3_18;
	sc_out< sc_int< 10 > > mac_src_0_s3_19;
	sc_out< sc_int< 10 > > mac_src_0_s3_20;
	sc_out< sc_int< 10 > > mac_src_0_s3_21;
	sc_out< sc_int< 10 > > mac_src_0_s3_22;
	sc_out< sc_int< 10 > > mac_src_0_s3_23;
	sc_out< sc_int< 10 > > mac_src_0_s3_24;
	sc_out< sc_int< 10 > > mac_src_0_s3_25;
	sc_out< sc_int< 10 > > mac_src_0_s3_26;
	sc_out< sc_int< 10 > > mac_src_0_s3_27;
	sc_out< sc_int< 10 > > mac_src_0_s3_28;
	sc_out< sc_int< 10 > > mac_src_0_s3_29;
	sc_out< sc_int< 10 > > mac_src_0_s3_30;
	sc_out< sc_int< 10 > > mac_src_0_s3_31;
	sc_out< sc_int< 10 > > mac_src_0_s4_0;
	sc_out< sc_int< 10 > > mac_src_0_s4_1;
	sc_out< sc_int< 10 > > mac_src_0_s4_2;
	sc_out< sc_int< 10 > > mac_src_0_s4_3;
	sc_out< sc_int< 10 > > mac_src_0_s4_4;
	sc_out< sc_int< 10 > > mac_src_0_s4_5;
	sc_out< sc_int< 10 > > mac_src_0_s4_6;
	sc_out< sc_int< 10 > > mac_src_0_s4_7;
	sc_out< sc_int< 10 > > mac_src_0_s4_8;
	sc_out< sc_int< 10 > > mac_src_0_s4_9;
	sc_out< sc_int< 10 > > mac_src_0_s4_10;
	sc_out< sc_int< 10 > > mac_src_0_s4_11;
	sc_out< sc_int< 10 > > mac_src_0_s4_12;
	sc_out< sc_int< 10 > > mac_src_0_s4_13;
	sc_out< sc_int< 10 > > mac_src_0_s4_14;
	sc_out< sc_int< 10 > > mac_src_0_s4_15;
	sc_out< sc_int< 10 > > mac_src_0_s4_16;
	sc_out< sc_int< 10 > > mac_src_0_s4_17;
	sc_out< sc_int< 10 > > mac_src_0_s4_18;
	sc_out< sc_int< 10 > > mac_src_0_s4_19;
	sc_out< sc_int< 10 > > mac_src_0_s4_20;
	sc_out< sc_int< 10 > > mac_src_0_s4_21;
	sc_out< sc_int< 10 > > mac_src_0_s4_22;
	sc_out< sc_int< 10 > > mac_src_0_s4_23;
	sc_out< sc_int< 10 > > mac_src_0_s4_24;
	sc_out< sc_int< 10 > > mac_src_0_s4_25;
	sc_out< sc_int< 10 > > mac_src_0_s4_26;
	sc_out< sc_int< 10 > > mac_src_0_s4_27;
	sc_out< sc_int< 10 > > mac_src_0_s4_28;
	sc_out< sc_int< 10 > > mac_src_0_s4_29;
	sc_out< sc_int< 10 > > mac_src_0_s4_30;
	sc_out< sc_int< 10 > > mac_src_0_s4_31;
	sc_out< sc_int< 10 > > mac_src_0_s5_0;
	sc_out< sc_int< 10 > > mac_src_0_s5_1;
	sc_out< sc_int< 10 > > mac_src_0_s5_2;
	sc_out< sc_int< 10 > > mac_src_0_s5_3;
	sc_out< sc_int< 10 > > mac_src_0_s5_4;
	sc_out< sc_int< 10 > > mac_src_0_s5_5;
	sc_out< sc_int< 10 > > mac_src_0_s5_6;
	sc_out< sc_int< 10 > > mac_src_0_s5_7;
	sc_out< sc_int< 10 > > mac_src_0_s5_8;
	sc_out< sc_int< 10 > > mac_src_0_s5_9;
	sc_out< sc_int< 10 > > mac_src_0_s5_10;
	sc_out< sc_int< 10 > > mac_src_0_s5_11;
	sc_out< sc_int< 10 > > mac_src_0_s5_12;
	sc_out< sc_int< 10 > > mac_src_0_s5_13;
	sc_out< sc_int< 10 > > mac_src_0_s5_14;
	sc_out< sc_int< 10 > > mac_src_0_s5_15;
	sc_out< sc_int< 10 > > mac_src_0_s5_16;
	sc_out< sc_int< 10 > > mac_src_0_s5_17;
	sc_out< sc_int< 10 > > mac_src_0_s5_18;
	sc_out< sc_int< 10 > > mac_src_0_s5_19;
	sc_out< sc_int< 10 > > mac_src_0_s5_20;
	sc_out< sc_int< 10 > > mac_src_0_s5_21;
	sc_out< sc_int< 10 > > mac_src_0_s5_22;
	sc_out< sc_int< 10 > > mac_src_0_s5_23;
	sc_out< sc_int< 10 > > mac_src_0_s5_24;
	sc_out< sc_int< 10 > > mac_src_0_s5_25;
	sc_out< sc_int< 10 > > mac_src_0_s5_26;
	sc_out< sc_int< 10 > > mac_src_0_s5_27;
	sc_out< sc_int< 10 > > mac_src_0_s5_28;
	sc_out< sc_int< 10 > > mac_src_0_s5_29;
	sc_out< sc_int< 10 > > mac_src_0_s5_30;
	sc_out< sc_int< 10 > > mac_src_0_s5_31;
	sc_out< sc_int< 10 > > mac_src_0_s6_0;
	sc_out< sc_int< 10 > > mac_src_0_s6_1;
	sc_out< sc_int< 10 > > mac_src_0_s6_2;
	sc_out< sc_int< 10 > > mac_src_0_s6_3;
	sc_out< sc_int< 10 > > mac_src_0_s6_4;
	sc_out< sc_int< 10 > > mac_src_0_s6_5;
	sc_out< sc_int< 10 > > mac_src_0_s6_6;
	sc_out< sc_int< 10 > > mac_src_0_s6_7;
	sc_out< sc_int< 10 > > mac_src_0_s6_8;
	sc_out< sc_int< 10 > > mac_src_0_s6_9;
	sc_out< sc_int< 10 > > mac_src_0_s6_10;
	sc_out< sc_int< 10 > > mac_src_0_s6_11;
	sc_out< sc_int< 10 > > mac_src_0_s6_12;
	sc_out< sc_int< 10 > > mac_src_0_s6_13;
	sc_out< sc_int< 10 > > mac_src_0_s6_14;
	sc_out< sc_int< 10 > > mac_src_0_s6_15;
	sc_out< sc_int< 10 > > mac_src_0_s6_16;
	sc_out< sc_int< 10 > > mac_src_0_s6_17;
	sc_out< sc_int< 10 > > mac_src_0_s6_18;
	sc_out< sc_int< 10 > > mac_src_0_s6_19;
	sc_out< sc_int< 10 > > mac_src_0_s6_20;
	sc_out< sc_int< 10 > > mac_src_0_s6_21;
	sc_out< sc_int< 10 > > mac_src_0_s6_22;
	sc_out< sc_int< 10 > > mac_src_0_s6_23;
	sc_out< sc_int< 10 > > mac_src_0_s6_24;
	sc_out< sc_int< 10 > > mac_src_0_s6_25;
	sc_out< sc_int< 10 > > mac_src_0_s6_26;
	sc_out< sc_int< 10 > > mac_src_0_s6_27;
	sc_out< sc_int< 10 > > mac_src_0_s6_28;
	sc_out< sc_int< 10 > > mac_src_0_s6_29;
	sc_out< sc_int< 10 > > mac_src_0_s6_30;
	sc_out< sc_int< 10 > > mac_src_0_s6_31;
	sc_out< sc_int< 8 > > mac_src_1_0;
	sc_out< sc_int< 8 > > mac_src_1_1;
	sc_out< sc_int< 8 > > mac_src_1_2;
	sc_out< sc_int< 8 > > mac_src_1_3;
	sc_out< sc_int< 8 > > mac_src_1_4;
	sc_out< sc_int< 8 > > mac_src_1_5;
	sc_out< sc_int< 8 > > mac_src_1_6;
	sc_out< sc_int< 8 > > mac_src_1_7;
	sc_out< sc_int< 8 > > mac_src_1_8;
	sc_out< sc_int< 8 > > mac_src_1_9;
	sc_out< sc_int< 8 > > mac_src_1_10;
	sc_out< sc_int< 8 > > mac_src_1_11;
	sc_out< sc_int< 8 > > mac_src_1_12;
	sc_out< sc_int< 8 > > mac_src_1_13;
	sc_out< sc_int< 8 > > mac_src_1_14;
	sc_out< sc_int< 8 > > mac_src_1_15;
	sc_out< sc_int< 8 > > mac_src_1_16;
	sc_out< sc_int< 8 > > mac_src_1_17;
	sc_out< sc_int< 8 > > mac_src_1_18;
	sc_out< sc_int< 8 > > mac_src_1_19;
	sc_out< sc_int< 8 > > mac_src_1_20;
	sc_out< sc_int< 8 > > mac_src_1_21;
	sc_out< sc_int< 8 > > mac_src_1_22;
	sc_out< sc_int< 8 > > mac_src_1_23;
	sc_out< sc_int< 8 > > mac_src_1_24;
	sc_out< sc_int< 8 > > mac_src_1_25;
	sc_out< sc_int< 8 > > mac_src_1_26;
	sc_out< sc_int< 8 > > mac_src_1_27;
	sc_out< sc_int< 8 > > mac_src_1_28;
	sc_out< sc_int< 8 > > mac_src_1_29;
	sc_out< sc_int< 8 > > mac_src_1_30;
	sc_out< sc_int< 8 > > mac_src_1_31;
	sc_out< bool > mac_src_valid;
	sc_out< bool > mac_clear;

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
					"More than one instance of module cache is being simulated in Verilog,\n"
					"but no instance names have been specified in simConfig %s.\n"
					"Additional instances can be specified using the following syntax:\n\n"
					"    simConfig <config_name> { <module> RTL_V <config> <inst1> <inst2> ...}\n\n"
					"where <inst1> and <inst2> are the leaf names of instances of cache in SystemC\n", 
					scName );
				return;
			} else {
				s << "cache0" << std::ends;
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
								  "More than %d instance(s) of module cache are being simulated in Verilog,\n"
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
		int cache_en_is_clock = esc_link_clockgen( &cache_en, sc_time( 0, SC_NS ), module_path, sim_domain, "cache_en" );
		int addr_if_start_is_clock = esc_link_clockgen( &addr_if_start, sc_time( 0, SC_NS ), module_path, sim_domain, "addr_if_start" );
		int feature_share_en_is_clock = esc_link_clockgen( &feature_share_en, sc_time( 0, SC_NS ), module_path, sim_domain, "feature_share_en" );
		int feature_data_en_is_clock = esc_link_clockgen( &feature_data_en, sc_time( 0, SC_NS ), module_path, sim_domain, "feature_data_en" );
		int weight_data_en_is_clock = esc_link_clockgen( &weight_data_en, sc_time( 0, SC_NS ), module_path, sim_domain, "weight_data_en" );

		if ( ! clk_is_clock )
			esc_link_signals( &clk, module_path, sim_domain, true, inputDelay );
		if ( ! rstn_is_clock )
			esc_link_signals( &rstn, module_path, sim_domain, true, inputDelay );
		if ( ! cache_en_is_clock )
			esc_link_signals( &cache_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &systolic_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &systolic_depth, module_path, sim_domain, true, inputDelay );
		if ( ! addr_if_start_is_clock )
			esc_link_signals( &addr_if_start, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &systolic_sel, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &feature_data, module_path, sim_domain, true, inputDelay );
		if ( ! feature_share_en_is_clock )
			esc_link_signals( &feature_share_en, module_path, sim_domain, true, inputDelay );
		if ( ! feature_data_en_is_clock )
			esc_link_signals( &feature_data_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &feature_data_sel, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &weight_data, module_path, sim_domain, true, inputDelay );
		if ( ! weight_data_en_is_clock )
			esc_link_signals( &weight_data_en, module_path, sim_domain, true, inputDelay );
		esc_link_signals( &mac_src_0_s0_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s0_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s1_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s2_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s3_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s4_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s5_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_0_s6_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_0, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_1, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_2, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_3, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_4, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_5, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_6, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_7, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_8, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_9, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_10, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_11, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_12, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_13, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_14, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_15, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_16, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_17, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_18, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_19, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_20, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_21, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_22, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_23, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_24, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_25, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_26, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_27, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_28, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_29, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_30, module_path, sim_domain, true );
		esc_link_signals( &mac_src_1_31, module_path, sim_domain, true );
		esc_link_signals( &mac_src_valid, module_path, sim_domain, true );
		esc_link_signals( &mac_clear, module_path, sim_domain, true );
		

		if ( clk_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = clk[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, clk.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "clk", scName ) ) {
			esc_report_error( esc_error, "The port 'clk' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( rstn_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = rstn[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, rstn.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "rstn", scName ) ) {
			esc_report_error( esc_error, "The port 'rstn' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( cache_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = cache_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, cache_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "cache_en", scName ) ) {
			esc_report_error( esc_error, "The port 'cache_en' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( addr_if_start_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = addr_if_start[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, addr_if_start.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "addr_if_start", scName ) ) {
			esc_report_error( esc_error, "The port 'addr_if_start' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( feature_share_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = feature_share_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, feature_share_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "feature_share_en", scName ) ) {
			esc_report_error( esc_error, "The port 'feature_share_en' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( feature_data_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = feature_data_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, feature_data_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "feature_data_en", scName ) ) {
			esc_report_error( esc_error, "The port 'feature_data_en' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}
		if ( weight_data_en_is_clock )
		{
			sc_signal_in_if< bool > *clock_inif = weight_data_en[0];
			sc_clock *clock_module = dynamic_cast<sc_clock*>(clock_inif);
			esc_hub_register_clock( clock_module, esc_alledge, 0, module_path, sim_domain, weight_data_en.basename() );
			++registeredClocks;
		} else if ( qbhGetPortUsedAsClock( qbhEmptyHandle, "cache", "weight_data_en", scName ) ) {
			esc_report_error( esc_error, "The port 'weight_data_en' on module 'cache'\n\tis used as a clock in the design,\n\tbut is not connected to an sc_clock");
		}


        if ( registeredClocks == 0 )
		{
			esc_report_error( esc_fatal, 
				"The clock port in module cache must have\n"
				"an sc_clock bound to it to make cosimulation work" );
		}
#endif
    }

#ifdef NC_SYSTEMC
    const char* hdl_name() const { return "cache_nc_cosim"; } 
    cache_cosim( sc_module_name name )
        : ncsc_foreign_module(name)
#else
	cache_cosim( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" cache") ) )
		: sc_module(in_name)
#endif
		  ,clk("clk")
		  	,rstn("rstn")
		  	,cache_en("cache_en")
		  	,systolic_en("systolic_en")
		  	,systolic_depth("systolic_depth")
		  	,addr_if_start("addr_if_start")
		  	,systolic_sel("systolic_sel")
		  	,feature_data("feature_data")
		  	,feature_share_en("feature_share_en")
		  	,feature_data_en("feature_data_en")
		  	,feature_data_sel("feature_data_sel")
		  	,weight_data("weight_data")
		  	,weight_data_en("weight_data_en")
		  	,mac_src_0_s0_0("mac_src_0_s0_0"),
		  mac_src_0_s0_1("mac_src_0_s0_1"),
		  mac_src_0_s0_2("mac_src_0_s0_2"),
		  mac_src_0_s0_3("mac_src_0_s0_3"),
		  mac_src_0_s0_4("mac_src_0_s0_4"),
		  mac_src_0_s0_5("mac_src_0_s0_5"),
		  mac_src_0_s0_6("mac_src_0_s0_6"),
		  mac_src_0_s0_7("mac_src_0_s0_7"),
		  mac_src_0_s0_8("mac_src_0_s0_8"),
		  mac_src_0_s0_9("mac_src_0_s0_9"),
		  mac_src_0_s0_10("mac_src_0_s0_10"),
		  mac_src_0_s0_11("mac_src_0_s0_11"),
		  mac_src_0_s0_12("mac_src_0_s0_12"),
		  mac_src_0_s0_13("mac_src_0_s0_13"),
		  mac_src_0_s0_14("mac_src_0_s0_14"),
		  mac_src_0_s0_15("mac_src_0_s0_15"),
		  mac_src_0_s0_16("mac_src_0_s0_16"),
		  mac_src_0_s0_17("mac_src_0_s0_17"),
		  mac_src_0_s0_18("mac_src_0_s0_18"),
		  mac_src_0_s0_19("mac_src_0_s0_19"),
		  mac_src_0_s0_20("mac_src_0_s0_20"),
		  mac_src_0_s0_21("mac_src_0_s0_21"),
		  mac_src_0_s0_22("mac_src_0_s0_22"),
		  mac_src_0_s0_23("mac_src_0_s0_23"),
		  mac_src_0_s0_24("mac_src_0_s0_24"),
		  mac_src_0_s0_25("mac_src_0_s0_25"),
		  mac_src_0_s0_26("mac_src_0_s0_26"),
		  mac_src_0_s0_27("mac_src_0_s0_27"),
		  mac_src_0_s0_28("mac_src_0_s0_28"),
		  mac_src_0_s0_29("mac_src_0_s0_29"),
		  mac_src_0_s0_30("mac_src_0_s0_30"),
		  mac_src_0_s0_31("mac_src_0_s0_31")
		  	,mac_src_0_s1_0("mac_src_0_s1_0"),
		  mac_src_0_s1_1("mac_src_0_s1_1"),
		  mac_src_0_s1_2("mac_src_0_s1_2"),
		  mac_src_0_s1_3("mac_src_0_s1_3"),
		  mac_src_0_s1_4("mac_src_0_s1_4"),
		  mac_src_0_s1_5("mac_src_0_s1_5"),
		  mac_src_0_s1_6("mac_src_0_s1_6"),
		  mac_src_0_s1_7("mac_src_0_s1_7"),
		  mac_src_0_s1_8("mac_src_0_s1_8"),
		  mac_src_0_s1_9("mac_src_0_s1_9"),
		  mac_src_0_s1_10("mac_src_0_s1_10"),
		  mac_src_0_s1_11("mac_src_0_s1_11"),
		  mac_src_0_s1_12("mac_src_0_s1_12"),
		  mac_src_0_s1_13("mac_src_0_s1_13"),
		  mac_src_0_s1_14("mac_src_0_s1_14"),
		  mac_src_0_s1_15("mac_src_0_s1_15"),
		  mac_src_0_s1_16("mac_src_0_s1_16"),
		  mac_src_0_s1_17("mac_src_0_s1_17"),
		  mac_src_0_s1_18("mac_src_0_s1_18"),
		  mac_src_0_s1_19("mac_src_0_s1_19"),
		  mac_src_0_s1_20("mac_src_0_s1_20"),
		  mac_src_0_s1_21("mac_src_0_s1_21"),
		  mac_src_0_s1_22("mac_src_0_s1_22"),
		  mac_src_0_s1_23("mac_src_0_s1_23"),
		  mac_src_0_s1_24("mac_src_0_s1_24"),
		  mac_src_0_s1_25("mac_src_0_s1_25"),
		  mac_src_0_s1_26("mac_src_0_s1_26"),
		  mac_src_0_s1_27("mac_src_0_s1_27"),
		  mac_src_0_s1_28("mac_src_0_s1_28"),
		  mac_src_0_s1_29("mac_src_0_s1_29"),
		  mac_src_0_s1_30("mac_src_0_s1_30"),
		  mac_src_0_s1_31("mac_src_0_s1_31")
		  	,mac_src_0_s2_0("mac_src_0_s2_0"),
		  mac_src_0_s2_1("mac_src_0_s2_1"),
		  mac_src_0_s2_2("mac_src_0_s2_2"),
		  mac_src_0_s2_3("mac_src_0_s2_3"),
		  mac_src_0_s2_4("mac_src_0_s2_4"),
		  mac_src_0_s2_5("mac_src_0_s2_5"),
		  mac_src_0_s2_6("mac_src_0_s2_6"),
		  mac_src_0_s2_7("mac_src_0_s2_7"),
		  mac_src_0_s2_8("mac_src_0_s2_8"),
		  mac_src_0_s2_9("mac_src_0_s2_9"),
		  mac_src_0_s2_10("mac_src_0_s2_10"),
		  mac_src_0_s2_11("mac_src_0_s2_11"),
		  mac_src_0_s2_12("mac_src_0_s2_12"),
		  mac_src_0_s2_13("mac_src_0_s2_13"),
		  mac_src_0_s2_14("mac_src_0_s2_14"),
		  mac_src_0_s2_15("mac_src_0_s2_15"),
		  mac_src_0_s2_16("mac_src_0_s2_16"),
		  mac_src_0_s2_17("mac_src_0_s2_17"),
		  mac_src_0_s2_18("mac_src_0_s2_18"),
		  mac_src_0_s2_19("mac_src_0_s2_19"),
		  mac_src_0_s2_20("mac_src_0_s2_20"),
		  mac_src_0_s2_21("mac_src_0_s2_21"),
		  mac_src_0_s2_22("mac_src_0_s2_22"),
		  mac_src_0_s2_23("mac_src_0_s2_23"),
		  mac_src_0_s2_24("mac_src_0_s2_24"),
		  mac_src_0_s2_25("mac_src_0_s2_25"),
		  mac_src_0_s2_26("mac_src_0_s2_26"),
		  mac_src_0_s2_27("mac_src_0_s2_27"),
		  mac_src_0_s2_28("mac_src_0_s2_28"),
		  mac_src_0_s2_29("mac_src_0_s2_29"),
		  mac_src_0_s2_30("mac_src_0_s2_30"),
		  mac_src_0_s2_31("mac_src_0_s2_31")
		  	,mac_src_0_s3_0("mac_src_0_s3_0"),
		  mac_src_0_s3_1("mac_src_0_s3_1"),
		  mac_src_0_s3_2("mac_src_0_s3_2"),
		  mac_src_0_s3_3("mac_src_0_s3_3"),
		  mac_src_0_s3_4("mac_src_0_s3_4"),
		  mac_src_0_s3_5("mac_src_0_s3_5"),
		  mac_src_0_s3_6("mac_src_0_s3_6"),
		  mac_src_0_s3_7("mac_src_0_s3_7"),
		  mac_src_0_s3_8("mac_src_0_s3_8"),
		  mac_src_0_s3_9("mac_src_0_s3_9"),
		  mac_src_0_s3_10("mac_src_0_s3_10"),
		  mac_src_0_s3_11("mac_src_0_s3_11"),
		  mac_src_0_s3_12("mac_src_0_s3_12"),
		  mac_src_0_s3_13("mac_src_0_s3_13"),
		  mac_src_0_s3_14("mac_src_0_s3_14"),
		  mac_src_0_s3_15("mac_src_0_s3_15"),
		  mac_src_0_s3_16("mac_src_0_s3_16"),
		  mac_src_0_s3_17("mac_src_0_s3_17"),
		  mac_src_0_s3_18("mac_src_0_s3_18"),
		  mac_src_0_s3_19("mac_src_0_s3_19"),
		  mac_src_0_s3_20("mac_src_0_s3_20"),
		  mac_src_0_s3_21("mac_src_0_s3_21"),
		  mac_src_0_s3_22("mac_src_0_s3_22"),
		  mac_src_0_s3_23("mac_src_0_s3_23"),
		  mac_src_0_s3_24("mac_src_0_s3_24"),
		  mac_src_0_s3_25("mac_src_0_s3_25"),
		  mac_src_0_s3_26("mac_src_0_s3_26"),
		  mac_src_0_s3_27("mac_src_0_s3_27"),
		  mac_src_0_s3_28("mac_src_0_s3_28"),
		  mac_src_0_s3_29("mac_src_0_s3_29"),
		  mac_src_0_s3_30("mac_src_0_s3_30"),
		  mac_src_0_s3_31("mac_src_0_s3_31")
		  	,mac_src_0_s4_0("mac_src_0_s4_0"),
		  mac_src_0_s4_1("mac_src_0_s4_1"),
		  mac_src_0_s4_2("mac_src_0_s4_2"),
		  mac_src_0_s4_3("mac_src_0_s4_3"),
		  mac_src_0_s4_4("mac_src_0_s4_4"),
		  mac_src_0_s4_5("mac_src_0_s4_5"),
		  mac_src_0_s4_6("mac_src_0_s4_6"),
		  mac_src_0_s4_7("mac_src_0_s4_7"),
		  mac_src_0_s4_8("mac_src_0_s4_8"),
		  mac_src_0_s4_9("mac_src_0_s4_9"),
		  mac_src_0_s4_10("mac_src_0_s4_10"),
		  mac_src_0_s4_11("mac_src_0_s4_11"),
		  mac_src_0_s4_12("mac_src_0_s4_12"),
		  mac_src_0_s4_13("mac_src_0_s4_13"),
		  mac_src_0_s4_14("mac_src_0_s4_14"),
		  mac_src_0_s4_15("mac_src_0_s4_15"),
		  mac_src_0_s4_16("mac_src_0_s4_16"),
		  mac_src_0_s4_17("mac_src_0_s4_17"),
		  mac_src_0_s4_18("mac_src_0_s4_18"),
		  mac_src_0_s4_19("mac_src_0_s4_19"),
		  mac_src_0_s4_20("mac_src_0_s4_20"),
		  mac_src_0_s4_21("mac_src_0_s4_21"),
		  mac_src_0_s4_22("mac_src_0_s4_22"),
		  mac_src_0_s4_23("mac_src_0_s4_23"),
		  mac_src_0_s4_24("mac_src_0_s4_24"),
		  mac_src_0_s4_25("mac_src_0_s4_25"),
		  mac_src_0_s4_26("mac_src_0_s4_26"),
		  mac_src_0_s4_27("mac_src_0_s4_27"),
		  mac_src_0_s4_28("mac_src_0_s4_28"),
		  mac_src_0_s4_29("mac_src_0_s4_29"),
		  mac_src_0_s4_30("mac_src_0_s4_30"),
		  mac_src_0_s4_31("mac_src_0_s4_31")
		  	,mac_src_0_s5_0("mac_src_0_s5_0"),
		  mac_src_0_s5_1("mac_src_0_s5_1"),
		  mac_src_0_s5_2("mac_src_0_s5_2"),
		  mac_src_0_s5_3("mac_src_0_s5_3"),
		  mac_src_0_s5_4("mac_src_0_s5_4"),
		  mac_src_0_s5_5("mac_src_0_s5_5"),
		  mac_src_0_s5_6("mac_src_0_s5_6"),
		  mac_src_0_s5_7("mac_src_0_s5_7"),
		  mac_src_0_s5_8("mac_src_0_s5_8"),
		  mac_src_0_s5_9("mac_src_0_s5_9"),
		  mac_src_0_s5_10("mac_src_0_s5_10"),
		  mac_src_0_s5_11("mac_src_0_s5_11"),
		  mac_src_0_s5_12("mac_src_0_s5_12"),
		  mac_src_0_s5_13("mac_src_0_s5_13"),
		  mac_src_0_s5_14("mac_src_0_s5_14"),
		  mac_src_0_s5_15("mac_src_0_s5_15"),
		  mac_src_0_s5_16("mac_src_0_s5_16"),
		  mac_src_0_s5_17("mac_src_0_s5_17"),
		  mac_src_0_s5_18("mac_src_0_s5_18"),
		  mac_src_0_s5_19("mac_src_0_s5_19"),
		  mac_src_0_s5_20("mac_src_0_s5_20"),
		  mac_src_0_s5_21("mac_src_0_s5_21"),
		  mac_src_0_s5_22("mac_src_0_s5_22"),
		  mac_src_0_s5_23("mac_src_0_s5_23"),
		  mac_src_0_s5_24("mac_src_0_s5_24"),
		  mac_src_0_s5_25("mac_src_0_s5_25"),
		  mac_src_0_s5_26("mac_src_0_s5_26"),
		  mac_src_0_s5_27("mac_src_0_s5_27"),
		  mac_src_0_s5_28("mac_src_0_s5_28"),
		  mac_src_0_s5_29("mac_src_0_s5_29"),
		  mac_src_0_s5_30("mac_src_0_s5_30"),
		  mac_src_0_s5_31("mac_src_0_s5_31")
		  	,mac_src_0_s6_0("mac_src_0_s6_0"),
		  mac_src_0_s6_1("mac_src_0_s6_1"),
		  mac_src_0_s6_2("mac_src_0_s6_2"),
		  mac_src_0_s6_3("mac_src_0_s6_3"),
		  mac_src_0_s6_4("mac_src_0_s6_4"),
		  mac_src_0_s6_5("mac_src_0_s6_5"),
		  mac_src_0_s6_6("mac_src_0_s6_6"),
		  mac_src_0_s6_7("mac_src_0_s6_7"),
		  mac_src_0_s6_8("mac_src_0_s6_8"),
		  mac_src_0_s6_9("mac_src_0_s6_9"),
		  mac_src_0_s6_10("mac_src_0_s6_10"),
		  mac_src_0_s6_11("mac_src_0_s6_11"),
		  mac_src_0_s6_12("mac_src_0_s6_12"),
		  mac_src_0_s6_13("mac_src_0_s6_13"),
		  mac_src_0_s6_14("mac_src_0_s6_14"),
		  mac_src_0_s6_15("mac_src_0_s6_15"),
		  mac_src_0_s6_16("mac_src_0_s6_16"),
		  mac_src_0_s6_17("mac_src_0_s6_17"),
		  mac_src_0_s6_18("mac_src_0_s6_18"),
		  mac_src_0_s6_19("mac_src_0_s6_19"),
		  mac_src_0_s6_20("mac_src_0_s6_20"),
		  mac_src_0_s6_21("mac_src_0_s6_21"),
		  mac_src_0_s6_22("mac_src_0_s6_22"),
		  mac_src_0_s6_23("mac_src_0_s6_23"),
		  mac_src_0_s6_24("mac_src_0_s6_24"),
		  mac_src_0_s6_25("mac_src_0_s6_25"),
		  mac_src_0_s6_26("mac_src_0_s6_26"),
		  mac_src_0_s6_27("mac_src_0_s6_27"),
		  mac_src_0_s6_28("mac_src_0_s6_28"),
		  mac_src_0_s6_29("mac_src_0_s6_29"),
		  mac_src_0_s6_30("mac_src_0_s6_30"),
		  mac_src_0_s6_31("mac_src_0_s6_31")
		  	,mac_src_1_0("mac_src_1_0"),
		  mac_src_1_1("mac_src_1_1"),
		  mac_src_1_2("mac_src_1_2"),
		  mac_src_1_3("mac_src_1_3"),
		  mac_src_1_4("mac_src_1_4"),
		  mac_src_1_5("mac_src_1_5"),
		  mac_src_1_6("mac_src_1_6"),
		  mac_src_1_7("mac_src_1_7"),
		  mac_src_1_8("mac_src_1_8"),
		  mac_src_1_9("mac_src_1_9"),
		  mac_src_1_10("mac_src_1_10"),
		  mac_src_1_11("mac_src_1_11"),
		  mac_src_1_12("mac_src_1_12"),
		  mac_src_1_13("mac_src_1_13"),
		  mac_src_1_14("mac_src_1_14"),
		  mac_src_1_15("mac_src_1_15"),
		  mac_src_1_16("mac_src_1_16"),
		  mac_src_1_17("mac_src_1_17"),
		  mac_src_1_18("mac_src_1_18"),
		  mac_src_1_19("mac_src_1_19"),
		  mac_src_1_20("mac_src_1_20"),
		  mac_src_1_21("mac_src_1_21"),
		  mac_src_1_22("mac_src_1_22"),
		  mac_src_1_23("mac_src_1_23"),
		  mac_src_1_24("mac_src_1_24"),
		  mac_src_1_25("mac_src_1_25"),
		  mac_src_1_26("mac_src_1_26"),
		  mac_src_1_27("mac_src_1_27"),
		  mac_src_1_28("mac_src_1_28"),
		  mac_src_1_29("mac_src_1_29"),
		  mac_src_1_30("mac_src_1_30"),
		  mac_src_1_31("mac_src_1_31")
		  	,mac_src_valid("mac_src_valid")
		  	,mac_clear("mac_clear")
		  	

    {
    };
};

int cache_cosim::numLinked = 0;
cache_cosim::StringPair cache_cosim::instanceNames[] = {
	{ NULL, NULL, false } };

#endif
