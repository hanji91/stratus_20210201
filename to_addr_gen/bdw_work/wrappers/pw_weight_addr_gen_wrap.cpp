/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/
/****************************************************************************
*
* This file is used to wrap the three different versions of the DUT
* block called "pw_weight_addr_gen". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"pw_weight_addr_gen_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_pw_weight_addr_gen)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef pw_weight_addr_gen
#define pw_weight_addr_gen pw_weight_addr_gen_rtl
#	include	"pw_weight_addr_gen_rtl.cpp"
#undef pw_weight_addr_gen


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"pw_weight_addr_gen_coware.h"
#else
#include	"pw_weight_addr_gen_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "pw_weight_addr_gen_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"pw_weight_addr_gen.cpp"


#define		pw_weight_addr_gen_INTERNAL


#include	"pw_weight_addr_gen_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
pw_weight_addr_gen_cycsim* (*pw_weight_addr_gen_cycsim_factory_p)() = 0;

#define MAX_SIMCONFIG_LENGTH 128

#if BDW_WRITEFSDB == 1

#if defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102
#include "fsdb_nc_mix.h"
#else
#if SYSTEMC_VERSION >= 20120701
#include "fsdb_osci.h"
#else
#include "fsdb_trace_file.h"
#endif
#endif 
#if BDW_USE_SCV
#include "scv.h"
#include "scv_tr_fsdb.h"
#endif

#endif /* BDW_WRITEFSDB */

inline void esc_open_fsdb_trace( const char *file_name = "systemc" );
inline void esc_close_fsdb_trace();
inline void esc_close_fsdb_scv_trace();

// The following threads are used to connect structured ports to the actual
// RTL ports

const char * pw_weight_addr_gen_wrapper::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum pw_weight_addr_gen_wrapper::Representation pw_weight_addr_gen_wrapper::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "pw_weight_addr_gen", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound ) {
		return BDWRep_Behavioral;
	} else if ( err == qbhErrorBadInstName ) {
		if (instName && *instName) {
			const char* leaf = strrchr( instName, '.' ) + 1;
			esc_report_error( esc_warning, "Instance names were specified for module '%s' in simConfig '%s', but they did not "
			                    "match the actal instance names in the RTL.  Try '%s' or '%s'. Simulating '%s' as BEH.\n",
								 "pw_weight_addr_gen", simConfig, instName, leaf,  "pw_weight_addr_gen" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void pw_weight_addr_gen_wrapper::InitInstances(  )
{
    enum pw_weight_addr_gen_wrapper::Representation rep =
		pw_weight_addr_gen_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "pw_weight_addr_gen" );
	esc_log_representation( "pw_weight_addr_gen", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    pw_weight_addr_gen_cosim0 = new pw_weight_addr_gen_cosim( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_cosim0->clk(clk);
		    pw_weight_addr_gen_cosim0->rstn(rstn);
		    pw_weight_addr_gen_cosim0->stop(stop);
		    pw_weight_addr_gen_cosim0->start(start);
		    pw_weight_addr_gen_cosim0->start_rising(start_rising);
		    pw_weight_addr_gen_cosim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cosim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cosim0->feature_width(feature_width);
		    pw_weight_addr_gen_cosim0->feature_height(feature_height);
		    pw_weight_addr_gen_cosim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cosim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cosim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cosim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cosim0->filter_width(filter_width);
		    pw_weight_addr_gen_cosim0->filter_height(filter_height);
		    pw_weight_addr_gen_cosim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cosim0->stride_x(stride_x);
		    pw_weight_addr_gen_cosim0->stride_y(stride_y);
		    pw_weight_addr_gen_cosim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cosim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cosim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cosim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cosim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cosim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cosim0->cache_en(cache_en);

			break;
		case BDWRep_RTL_HDL:
		    pw_weight_addr_gen_cosim0 = new pw_weight_addr_gen_cosim( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_cosim0->clk(clk);
		    pw_weight_addr_gen_cosim0->rstn(rstn);
		    pw_weight_addr_gen_cosim0->stop(stop);
		    pw_weight_addr_gen_cosim0->start(start);
		    pw_weight_addr_gen_cosim0->start_rising(start_rising);
		    pw_weight_addr_gen_cosim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cosim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cosim0->feature_width(feature_width);
		    pw_weight_addr_gen_cosim0->feature_height(feature_height);
		    pw_weight_addr_gen_cosim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cosim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cosim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cosim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cosim0->filter_width(filter_width);
		    pw_weight_addr_gen_cosim0->filter_height(filter_height);
		    pw_weight_addr_gen_cosim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cosim0->stride_x(stride_x);
		    pw_weight_addr_gen_cosim0->stride_y(stride_y);
		    pw_weight_addr_gen_cosim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cosim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cosim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cosim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cosim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cosim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cosim0->cache_en(cache_en);

			break;
        case BDWRep_CYC_HDL:
            if ( pw_weight_addr_gen_cycsim_factory_p )
                pw_weight_addr_gen_cycsim0 = pw_weight_addr_gen_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module pw_weight_addr_gen");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"pw_weight_addr_gen\"");

		    pw_weight_addr_gen_cycsim0->clk(clk);
		    pw_weight_addr_gen_cycsim0->rstn(rstn);
		    pw_weight_addr_gen_cycsim0->stop(stop);
		    pw_weight_addr_gen_cycsim0->start(start);
		    pw_weight_addr_gen_cycsim0->start_rising(start_rising);
		    pw_weight_addr_gen_cycsim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cycsim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cycsim0->feature_width(feature_width);
		    pw_weight_addr_gen_cycsim0->feature_height(feature_height);
		    pw_weight_addr_gen_cycsim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cycsim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cycsim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cycsim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cycsim0->filter_width(filter_width);
		    pw_weight_addr_gen_cycsim0->filter_height(filter_height);
		    pw_weight_addr_gen_cycsim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cycsim0->stride_x(stride_x);
		    pw_weight_addr_gen_cycsim0->stride_y(stride_y);
		    pw_weight_addr_gen_cycsim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cycsim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cycsim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cycsim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cycsim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cycsim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cycsim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cycsim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cycsim0->cache_en(cache_en);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_pw_weight_addr_gen)
		case BDWRep_RTL_C:
		    pw_weight_addr_gen_rtl0 = new pw_weight_addr_gen_rtl( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_rtl0->clk(clk);
		    pw_weight_addr_gen_rtl0->rstn(rstn);
		    pw_weight_addr_gen_rtl0->stop(stop);
		    pw_weight_addr_gen_rtl0->start(start);
		    pw_weight_addr_gen_rtl0->start_rising(start_rising);
		    pw_weight_addr_gen_rtl0->systolic_en(systolic_en);
		    pw_weight_addr_gen_rtl0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_rtl0->feature_width(feature_width);
		    pw_weight_addr_gen_rtl0->feature_height(feature_height);
		    pw_weight_addr_gen_rtl0->feature_channel(feature_channel);
		    pw_weight_addr_gen_rtl0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_rtl0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_rtl0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_rtl0->filter_width(filter_width);
		    pw_weight_addr_gen_rtl0->filter_height(filter_height);
		    pw_weight_addr_gen_rtl0->filter_channel(filter_channel);
		    pw_weight_addr_gen_rtl0->stride_x(stride_x);
		    pw_weight_addr_gen_rtl0->stride_y(stride_y);
		    pw_weight_addr_gen_rtl0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_rtl0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_rtl0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_rtl0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_rtl0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_rtl0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_rtl0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_rtl0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_rtl0->cache_en(cache_en);


			{
			const char *simConfig = pw_weight_addr_gen_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    pw_weight_addr_gen0 = new pw_weight_addr_gen( "pw_weight_addr_gen" );

		    pw_weight_addr_gen0->clk(clk);
		    pw_weight_addr_gen0->rstn(rstn);
		    pw_weight_addr_gen0->stop(stop);
		    pw_weight_addr_gen0->start(start);
		    pw_weight_addr_gen0->start_rising(start_rising);
		    pw_weight_addr_gen0->systolic_en(systolic_en);
		    pw_weight_addr_gen0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen0->feature_width(feature_width);
		    pw_weight_addr_gen0->feature_height(feature_height);
		    pw_weight_addr_gen0->feature_channel(feature_channel);
		    pw_weight_addr_gen0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen0->filter_width(filter_width);
		    pw_weight_addr_gen0->filter_height(filter_height);
		    pw_weight_addr_gen0->filter_channel(filter_channel);
		    pw_weight_addr_gen0->stride_x(stride_x);
		    pw_weight_addr_gen0->stride_y(stride_y);
		    pw_weight_addr_gen0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen0->cache_en(cache_en);


			{
			const char *simConfig = pw_weight_addr_gen_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void pw_weight_addr_gen_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void pw_weight_addr_gen_wrapper::start_of_simulation()
{

#include <pw_weight_addr_gen_trace.h>

    esc_multiple_writers_warning();
}

void pw_weight_addr_gen_wrapper::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void pw_weight_addr_gen_wrapper::end_of_simulation()
{
	CloseTrace();
}



void pw_weight_addr_gen_wrapper::DeleteInstances()
{
    if (pw_weight_addr_gen0)
    {
        delete pw_weight_addr_gen0;
        pw_weight_addr_gen0 = 0;
    }
    if (pw_weight_addr_gen_cosim0)
    {
        delete pw_weight_addr_gen_cosim0;
        pw_weight_addr_gen_cosim0 = 0;
    }
    if (pw_weight_addr_gen_cycsim0)
    {
        delete pw_weight_addr_gen_cycsim0;
        pw_weight_addr_gen_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_pw_weight_addr_gen)
    if (pw_weight_addr_gen_rtl0)
    {
        delete pw_weight_addr_gen_rtl0;
        pw_weight_addr_gen_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports

const char * pw_weight_addr_gen_wrapper_r::simConfigName()
{
	static char defineBuf[MAX_SIMCONFIG_LENGTH];
	const char *simConfig = NULL;
	if ( qbhGetDefine( "BDW_SIM_CONFIG", defineBuf, MAX_SIMCONFIG_LENGTH ) == qbhOK )
	{
		simConfig = defineBuf;
	}
	else
	{
		simConfig = getenv( "BDW_SIM_CONFIG" );
	}

	if ( simConfig == NULL )
	{
		esc_report_error( esc_fatal, "BDW_SIM_CONFIG needs to be set" );
	}

	return simConfig;
}

enum pw_weight_addr_gen_wrapper_r::Representation pw_weight_addr_gen_wrapper_r::lookupRepresentation( const char* instName )
{
	const char *simConfig = simConfigName();

	if ( simConfig == NULL )
		return BDWRep_None;

	Representation result;

	qbhProjectHandle hProj;
	qbhError err = qbhGetCurrentProject( &hProj );
	if ( err == qbhErrorNoProject )
	{
		err = qbhOpenProject( "project.tcl", &hProj );

		if ( err != qbhOK )
		{
			esc_report_error( esc_fatal, "could not open project file %s",
							  "project.tcl" );
			return BDWRep_None;
		}
	}

	int iresult = 0;
	err = qbhGetRepresentation(hProj, "pw_weight_addr_gen", simConfig, instName, &iresult );
	result = (Representation)iresult;

	if ( err == qbhOK )
		return result;

	// If this module isn't mentioned in the simConfig, assume it's behavioral.
	if ( err == qbhErrorNotFound )
		return BDWRep_Behavioral;

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void pw_weight_addr_gen_wrapper_r::InitInstances()
{
    enum pw_weight_addr_gen_wrapper_r::Representation rep =
		pw_weight_addr_gen_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "pw_weight_addr_gen" );
	esc_log_representation( "pw_weight_addr_gen", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    pw_weight_addr_gen_cosim0 = new pw_weight_addr_gen_cosim( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_cosim0->clk(clk);
		    pw_weight_addr_gen_cosim0->rstn(rstn);
		    pw_weight_addr_gen_cosim0->stop(stop);
		    pw_weight_addr_gen_cosim0->start(start);
		    pw_weight_addr_gen_cosim0->start_rising(start_rising);
		    pw_weight_addr_gen_cosim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cosim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cosim0->feature_width(feature_width);
		    pw_weight_addr_gen_cosim0->feature_height(feature_height);
		    pw_weight_addr_gen_cosim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cosim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cosim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cosim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cosim0->filter_width(filter_width);
		    pw_weight_addr_gen_cosim0->filter_height(filter_height);
		    pw_weight_addr_gen_cosim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cosim0->stride_x(stride_x);
		    pw_weight_addr_gen_cosim0->stride_y(stride_y);
		    pw_weight_addr_gen_cosim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cosim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cosim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cosim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cosim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cosim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cosim0->cache_en(cache_en);

			break;
		case BDWRep_RTL_HDL:
		    pw_weight_addr_gen_cosim0 = new pw_weight_addr_gen_cosim( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_cosim0->clk(clk);
		    pw_weight_addr_gen_cosim0->rstn(rstn);
		    pw_weight_addr_gen_cosim0->stop(stop);
		    pw_weight_addr_gen_cosim0->start(start);
		    pw_weight_addr_gen_cosim0->start_rising(start_rising);
		    pw_weight_addr_gen_cosim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cosim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cosim0->feature_width(feature_width);
		    pw_weight_addr_gen_cosim0->feature_height(feature_height);
		    pw_weight_addr_gen_cosim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cosim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cosim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cosim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cosim0->filter_width(filter_width);
		    pw_weight_addr_gen_cosim0->filter_height(filter_height);
		    pw_weight_addr_gen_cosim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cosim0->stride_x(stride_x);
		    pw_weight_addr_gen_cosim0->stride_y(stride_y);
		    pw_weight_addr_gen_cosim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cosim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cosim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cosim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cosim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cosim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cosim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cosim0->cache_en(cache_en);

			break;
        case BDWRep_CYC_HDL:
            if ( pw_weight_addr_gen_cycsim_factory_p )
                pw_weight_addr_gen_cycsim0 = pw_weight_addr_gen_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module pw_weight_addr_gen");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"pw_weight_addr_gen\"");

		    pw_weight_addr_gen_cycsim0->clk(clk);
		    pw_weight_addr_gen_cycsim0->rstn(rstn);
		    pw_weight_addr_gen_cycsim0->stop(stop);
		    pw_weight_addr_gen_cycsim0->start(start);
		    pw_weight_addr_gen_cycsim0->start_rising(start_rising);
		    pw_weight_addr_gen_cycsim0->systolic_en(systolic_en);
		    pw_weight_addr_gen_cycsim0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_cycsim0->feature_width(feature_width);
		    pw_weight_addr_gen_cycsim0->feature_height(feature_height);
		    pw_weight_addr_gen_cycsim0->feature_channel(feature_channel);
		    pw_weight_addr_gen_cycsim0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_cycsim0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_cycsim0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_cycsim0->filter_width(filter_width);
		    pw_weight_addr_gen_cycsim0->filter_height(filter_height);
		    pw_weight_addr_gen_cycsim0->filter_channel(filter_channel);
		    pw_weight_addr_gen_cycsim0->stride_x(stride_x);
		    pw_weight_addr_gen_cycsim0->stride_y(stride_y);
		    pw_weight_addr_gen_cycsim0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_cycsim0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_cycsim0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_cycsim0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_cycsim0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_cycsim0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_cycsim0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_cycsim0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_cycsim0->cache_en(cache_en);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_pw_weight_addr_gen)
		case BDWRep_RTL_C:
		    pw_weight_addr_gen_rtl0 = new pw_weight_addr_gen_rtl( "pw_weight_addr_gen" );

		    pw_weight_addr_gen_rtl0->clk(clk);
		    pw_weight_addr_gen_rtl0->rstn(rstn);
		    pw_weight_addr_gen_rtl0->stop(stop);
		    pw_weight_addr_gen_rtl0->start(start);
		    pw_weight_addr_gen_rtl0->start_rising(start_rising);
		    pw_weight_addr_gen_rtl0->systolic_en(systolic_en);
		    pw_weight_addr_gen_rtl0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen_rtl0->feature_width(feature_width);
		    pw_weight_addr_gen_rtl0->feature_height(feature_height);
		    pw_weight_addr_gen_rtl0->feature_channel(feature_channel);
		    pw_weight_addr_gen_rtl0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen_rtl0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen_rtl0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen_rtl0->filter_width(filter_width);
		    pw_weight_addr_gen_rtl0->filter_height(filter_height);
		    pw_weight_addr_gen_rtl0->filter_channel(filter_channel);
		    pw_weight_addr_gen_rtl0->stride_x(stride_x);
		    pw_weight_addr_gen_rtl0->stride_y(stride_y);
		    pw_weight_addr_gen_rtl0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen_rtl0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen_rtl0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen_rtl0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen_rtl0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen_rtl0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen_rtl0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen_rtl0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen_rtl0->cache_en(cache_en);


			{
			const char *simConfig = pw_weight_addr_gen_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
#endif
		case BDWRep_Behavioral:
		    pw_weight_addr_gen0 = new pw_weight_addr_gen( "pw_weight_addr_gen" );

		    pw_weight_addr_gen0->clk(clk);
		    pw_weight_addr_gen0->rstn(rstn);
		    pw_weight_addr_gen0->stop(stop);
		    pw_weight_addr_gen0->start(start);
		    pw_weight_addr_gen0->start_rising(start_rising);
		    pw_weight_addr_gen0->systolic_en(systolic_en);
		    pw_weight_addr_gen0->systolic_depth(systolic_depth);
		    pw_weight_addr_gen0->feature_width(feature_width);
		    pw_weight_addr_gen0->feature_height(feature_height);
		    pw_weight_addr_gen0->feature_channel(feature_channel);
		    pw_weight_addr_gen0->out_feature_width(out_feature_width);
		    pw_weight_addr_gen0->out_feature_height(out_feature_height);
		    pw_weight_addr_gen0->out_feature_channel(out_feature_channel);
		    pw_weight_addr_gen0->filter_width(filter_width);
		    pw_weight_addr_gen0->filter_height(filter_height);
		    pw_weight_addr_gen0->filter_channel(filter_channel);
		    pw_weight_addr_gen0->stride_x(stride_x);
		    pw_weight_addr_gen0->stride_y(stride_y);
		    pw_weight_addr_gen0->pad_top_size(pad_top_size);
		    pw_weight_addr_gen0->pad_bottom_size(pad_bottom_size);
		    pw_weight_addr_gen0->pad_left_size(pad_left_size);
		    pw_weight_addr_gen0->pad_right_size(pad_right_size);
		    pw_weight_addr_gen0->read_weight_base_addr(read_weight_base_addr);
		    pw_weight_addr_gen0->pw_weight_addr(pw_weight_addr);
		    pw_weight_addr_gen0->pw_weight_addr_valid(pw_weight_addr_valid);
		    pw_weight_addr_gen0->pw_weight_data_valid(pw_weight_data_valid);
		    pw_weight_addr_gen0->cache_en(cache_en);


			{
			const char *simConfig = pw_weight_addr_gen_wrapper::simConfigName();
			
			if ( simConfig != NULL )
				{
				qbhProjectHandle hProj;
				qbhError err = qbhGetCurrentProject( &hProj );
				if ( err == qbhErrorNoProject )
				{
					err = qbhOpenProject( "project.tcl", &hProj );
			
					if ( err != qbhOK )
					{
						esc_report_error( esc_fatal, "could not open project file %s",
											  "project.tcl" );
							return;
					}
				}
			
				if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
					esc_get_vcd_trace_file();
				}
				if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
					esc_get_fsdb_trace_file();
				}
				}
			}

			break;
		case BDWRep_None:
		default:
			esc_report_error( esc_error, "No representation could be determined for simulating instance %s. Please make sure that you used the right name string in the module constructor",
							  name() );
			break;
	}
}

void pw_weight_addr_gen_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		
	}
}

void pw_weight_addr_gen_wrapper_r::start_of_simulation()
{

#include <pw_weight_addr_gen_trace.h>

    esc_multiple_writers_warning();
}

void pw_weight_addr_gen_wrapper_r::CloseTrace()
{
	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
	esc_close_vcd_trace();
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		esc_close_fsdb_trace();
		if ( esc_trace_is_enabled( esc_trace_scv ) ) {
			esc_close_fsdb_scv_trace();
		}
	}
}

void pw_weight_addr_gen_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void pw_weight_addr_gen_wrapper_r::DeleteInstances()
{
    if (pw_weight_addr_gen0)
    {
        delete pw_weight_addr_gen0;
        pw_weight_addr_gen0 = 0;
    }
    if (pw_weight_addr_gen_cosim0)
    {
        delete pw_weight_addr_gen_cosim0;
        pw_weight_addr_gen_cosim0 = 0;
    }
    if (pw_weight_addr_gen_cycsim0)
    {
        delete pw_weight_addr_gen_cycsim0;
        pw_weight_addr_gen_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_pw_weight_addr_gen)
    if (pw_weight_addr_gen_rtl0)
    {
        delete pw_weight_addr_gen_rtl0;
        pw_weight_addr_gen_rtl0 = 0;
    }
#endif
}

#if BDW_WRITEFSDB == 1

inline void esc_open_fsdb_trace( const char *file_name  )
{
	sc_trace_file *fsdb_file;
#if ( defined(NC_SYSTEMC) && defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102 ) || SYSTEMC_VERSION >= 20120701
    fsdbDumpfile(file_name);
    esc_set_trace_file( fsdb_file, esc_trace_fsdb );
# else

	// SystemC suffixes .fsdb to filenames automatically. Make sure
	// that doesn't get tacked onto a filename that already has the suffix.
	if ( strrchr( file_name, '.' ) != NULL )
	{
		char *trunc_file_name = new char[strlen(file_name)+1];
		strcpy( trunc_file_name, file_name );

		fsdb_file = new fsdb_trace_file( trunc_file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );

		delete trunc_file_name;
	}
	else
	{
		fsdb_file = new fsdb_trace_file( file_name );
		esc_set_trace_file( fsdb_file, esc_trace_fsdb );
	}
#endif

//
// Novas's SystemC wrapper doesn't have a way to set the time unit as of SystemC 2.1v1.
//
//		((fsdb_trace_file*)fsdb_file)->sc_set_fsdb_time_unit( -12 );
}

inline void esc_close_fsdb_trace()
{
#if ! ((defined(NC_SYSTEMC) &&  defined(BDW_NCSC_VER) && BDW_NCSC_VER > 102) || SYSTEMC_VERSION >= 20120701)
	fsdb_trace_file * fsdb_file =
		(fsdb_trace_file *)esc_trace_file( esc_trace_fsdb );

	if ( fsdb_file != NULL )
	{
		fsdb_file->CloseFile();
		delete fsdb_file;
		esc_set_trace_file( NULL, esc_trace_fsdb );
	}
#endif
}

#else

inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}

#endif

#if BDW_USE_SCV && BDW_WRITEFSDB == 1
static scv_tr_db* local_fsdb_scv_db = 0;

inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
	// Start SCV logging to FSDB if there is not already a database setup.
    if (!esc_get_scv_tr_db() && esc_trace_is_enabled(esc_trace_scv) )
	{
		scv_startup();
		scv_tr_fsdb_init();

		char* scv_file_name = new char[strlen(file_name) + 1];
		strcpy( scv_file_name, file_name );
		char* fsdb_suffix = strstr( scv_file_name, ".fsdb" );
		if (fsdb_suffix)
			*fsdb_suffix = 0;
		local_fsdb_scv_db = new scv_tr_db(scv_file_name);

		delete [] scv_file_name;
		esc_set_scv_tr_db(local_fsdb_scv_db);
		scv_tr_db::set_default_db(local_fsdb_scv_db);
		local_fsdb_scv_db->set_recording(true);
	}
}

inline void esc_close_fsdb_scv_trace()
{
    if ( local_fsdb_scv_db && (local_fsdb_scv_db == esc_get_scv_tr_db() ) ) 
	{
		delete local_fsdb_scv_db;
		local_fsdb_scv_db = 0;
		esc_set_scv_tr_db(0);
	}
}
#else 
inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

#endif

class pw_weight_addr_gen_wrapper_fsdb_opener {
public:
	pw_weight_addr_gen_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static pw_weight_addr_gen_wrapper_fsdb_opener
  pw_weight_addr_gen_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"pw_weight_addr_gen.cpp"

#define		pw_weight_addr_gen_INTERNAL


#include	"pw_weight_addr_gen_wrap.h"

const char * pw_weight_addr_gen_wrapper::simConfigName()
{
  return "";
}

enum pw_weight_addr_gen_wrapper::Representation pw_weight_addr_gen_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void pw_weight_addr_gen_wrapper::InitInstances( sc_core::sc_module_name  )
{
	pw_weight_addr_gen0 = new pw_weight_addr_gen( "pw_weight_addr_gen" );

	pw_weight_addr_gen0->clk(clk);
	pw_weight_addr_gen0->rstn(rstn);
	pw_weight_addr_gen0->stop(stop);
	pw_weight_addr_gen0->start(start);
	pw_weight_addr_gen0->start_rising(start_rising);
	pw_weight_addr_gen0->systolic_en(systolic_en);
	pw_weight_addr_gen0->systolic_depth(systolic_depth);
	pw_weight_addr_gen0->feature_width(feature_width);
	pw_weight_addr_gen0->feature_height(feature_height);
	pw_weight_addr_gen0->feature_channel(feature_channel);
	pw_weight_addr_gen0->out_feature_width(out_feature_width);
	pw_weight_addr_gen0->out_feature_height(out_feature_height);
	pw_weight_addr_gen0->out_feature_channel(out_feature_channel);
	pw_weight_addr_gen0->filter_width(filter_width);
	pw_weight_addr_gen0->filter_height(filter_height);
	pw_weight_addr_gen0->filter_channel(filter_channel);
	pw_weight_addr_gen0->stride_x(stride_x);
	pw_weight_addr_gen0->stride_y(stride_y);
	pw_weight_addr_gen0->pad_top_size(pad_top_size);
	pw_weight_addr_gen0->pad_bottom_size(pad_bottom_size);
	pw_weight_addr_gen0->pad_left_size(pad_left_size);
	pw_weight_addr_gen0->pad_right_size(pad_right_size);
	pw_weight_addr_gen0->read_weight_base_addr(read_weight_base_addr);
	pw_weight_addr_gen0->pw_weight_addr(pw_weight_addr);
	pw_weight_addr_gen0->pw_weight_addr_valid(pw_weight_addr_valid);
	pw_weight_addr_gen0->pw_weight_data_valid(pw_weight_data_valid);
	pw_weight_addr_gen0->cache_en(cache_en);

}

void pw_weight_addr_gen_wrapper::InitThreads()
{
}

void pw_weight_addr_gen_wrapper::CloseTrace()
{
}

void pw_weight_addr_gen_wrapper::DeleteInstances()
{
    if (pw_weight_addr_gen0)
    {
        delete pw_weight_addr_gen0;
        pw_weight_addr_gen0 = 0;
    }
}

void pw_weight_addr_gen_wrapper::start_of_simulation()
{
}

void pw_weight_addr_gen_wrapper::end_of_simulation()
{
}



inline void esc_open_fsdb_trace( const char *file_name )
{
}

inline void esc_close_fsdb_trace()
{
}


inline void esc_open_fsdb_scv_trace( const char *file_name  )
{
}

inline void esc_close_fsdb_scv_trace()
{
}

class pw_weight_addr_gen_wrapper_fsdb_opener {
public:
	pw_weight_addr_gen_wrapper_fsdb_opener() {
	}
};

static pw_weight_addr_gen_wrapper_fsdb_opener
  pw_weight_addr_gen_wrapper_fsdb_opener_inst;

#endif

#endif
