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
* block called "bias_add". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"bias_add_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_bias_add)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef bias_add
#define bias_add bias_add_rtl
#	include	"bias_add_rtl.cpp"
#undef bias_add


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"bias_add_coware.h"
#else
#include	"bias_add_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "bias_add_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"bias_add.cpp"


#define		bias_add_INTERNAL


#include	"bias_add_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
bias_add_cycsim* (*bias_add_cycsim_factory_p)() = 0;

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

const char * bias_add_wrapper::simConfigName()
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

enum bias_add_wrapper::Representation bias_add_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "bias_add", simConfig, instName, &iresult );
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
								 "bias_add", simConfig, instName, leaf,  "bias_add" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void bias_add_wrapper::InitInstances(  )
{
    enum bias_add_wrapper::Representation rep =
		bias_add_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "bias_add" );
	esc_log_representation( "bias_add", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    bias_add_cosim0 = new bias_add_cosim( "bias_add" );

		    bias_add_cosim0->clk(clk);
		    bias_add_cosim0->rstn(rstn);
		    bias_add_cosim0->enable(enable);
		    bias_add_cosim0->src_valid(src_valid);
		    bias_add_cosim0->src_0(src[0]);
		    bias_add_cosim0->src_1(src[1]);
		    bias_add_cosim0->src_2(src[2]);
		    bias_add_cosim0->src_3(src[3]);
		    bias_add_cosim0->src_4(src[4]);
		    bias_add_cosim0->src_5(src[5]);
		    bias_add_cosim0->src_6(src[6]);
		    bias_add_cosim0->src_7(src[7]);
		    bias_add_cosim0->bias_data(bias_data);
		    bias_add_cosim0->dst_valid(dst_valid);
		    bias_add_cosim0->dst_0(dst[0]);
		    bias_add_cosim0->dst_1(dst[1]);
		    bias_add_cosim0->dst_2(dst[2]);
		    bias_add_cosim0->dst_3(dst[3]);
		    bias_add_cosim0->dst_4(dst[4]);
		    bias_add_cosim0->dst_5(dst[5]);
		    bias_add_cosim0->dst_6(dst[6]);
		    bias_add_cosim0->dst_7(dst[7]);

			break;
		case BDWRep_RTL_HDL:
		    bias_add_cosim0 = new bias_add_cosim( "bias_add" );

		    bias_add_cosim0->clk(clk);
		    bias_add_cosim0->rstn(rstn);
		    bias_add_cosim0->enable(enable);
		    bias_add_cosim0->src_valid(src_valid);
		    bias_add_cosim0->src_0(src[0]);
		    bias_add_cosim0->src_1(src[1]);
		    bias_add_cosim0->src_2(src[2]);
		    bias_add_cosim0->src_3(src[3]);
		    bias_add_cosim0->src_4(src[4]);
		    bias_add_cosim0->src_5(src[5]);
		    bias_add_cosim0->src_6(src[6]);
		    bias_add_cosim0->src_7(src[7]);
		    bias_add_cosim0->bias_data(bias_data);
		    bias_add_cosim0->dst_valid(dst_valid);
		    bias_add_cosim0->dst_0(dst[0]);
		    bias_add_cosim0->dst_1(dst[1]);
		    bias_add_cosim0->dst_2(dst[2]);
		    bias_add_cosim0->dst_3(dst[3]);
		    bias_add_cosim0->dst_4(dst[4]);
		    bias_add_cosim0->dst_5(dst[5]);
		    bias_add_cosim0->dst_6(dst[6]);
		    bias_add_cosim0->dst_7(dst[7]);

			break;
        case BDWRep_CYC_HDL:
            if ( bias_add_cycsim_factory_p )
                bias_add_cycsim0 = bias_add_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module bias_add");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"bias_add\"");

		    bias_add_cycsim0->clk(clk);
		    bias_add_cycsim0->rstn(rstn);
		    bias_add_cycsim0->enable(enable);
		    bias_add_cycsim0->src_valid(src_valid);
		    bias_add_cycsim0->src_0(src[0]);
		    bias_add_cycsim0->src_1(src[1]);
		    bias_add_cycsim0->src_2(src[2]);
		    bias_add_cycsim0->src_3(src[3]);
		    bias_add_cycsim0->src_4(src[4]);
		    bias_add_cycsim0->src_5(src[5]);
		    bias_add_cycsim0->src_6(src[6]);
		    bias_add_cycsim0->src_7(src[7]);
		    bias_add_cycsim0->bias_data(bias_data);
		    bias_add_cycsim0->dst_valid(dst_valid);
		    bias_add_cycsim0->dst_0(dst[0]);
		    bias_add_cycsim0->dst_1(dst[1]);
		    bias_add_cycsim0->dst_2(dst[2]);
		    bias_add_cycsim0->dst_3(dst[3]);
		    bias_add_cycsim0->dst_4(dst[4]);
		    bias_add_cycsim0->dst_5(dst[5]);
		    bias_add_cycsim0->dst_6(dst[6]);
		    bias_add_cycsim0->dst_7(dst[7]);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_bias_add)
		case BDWRep_RTL_C:
		    bias_add_rtl0 = new bias_add_rtl( "bias_add" );

		    bias_add_rtl0->clk(clk);
		    bias_add_rtl0->rstn(rstn);
		    bias_add_rtl0->enable(enable);
		    bias_add_rtl0->src_valid(src_valid);
		    bias_add_rtl0->src_0(src[0]);
		    bias_add_rtl0->src_1(src[1]);
		    bias_add_rtl0->src_2(src[2]);
		    bias_add_rtl0->src_3(src[3]);
		    bias_add_rtl0->src_4(src[4]);
		    bias_add_rtl0->src_5(src[5]);
		    bias_add_rtl0->src_6(src[6]);
		    bias_add_rtl0->src_7(src[7]);
		    bias_add_rtl0->bias_data(bias_data);
		    bias_add_rtl0->dst_valid(dst_valid);
		    bias_add_rtl0->dst_0(dst[0]);
		    bias_add_rtl0->dst_1(dst[1]);
		    bias_add_rtl0->dst_2(dst[2]);
		    bias_add_rtl0->dst_3(dst[3]);
		    bias_add_rtl0->dst_4(dst[4]);
		    bias_add_rtl0->dst_5(dst[5]);
		    bias_add_rtl0->dst_6(dst[6]);
		    bias_add_rtl0->dst_7(dst[7]);


			{
			const char *simConfig = bias_add_wrapper::simConfigName();
			
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
		    bias_add0 = new bias_add( "bias_add" );

		    bias_add0->clk(clk);
		    bias_add0->rstn(rstn);
		    bias_add0->enable(enable);
		    bias_add0->src_valid(src_valid);
		    bias_add0->src[0](src[0]);
		    bias_add0->src[1](src[1]);
		    bias_add0->src[2](src[2]);
		    bias_add0->src[3](src[3]);
		    bias_add0->src[4](src[4]);
		    bias_add0->src[5](src[5]);
		    bias_add0->src[6](src[6]);
		    bias_add0->src[7](src[7]);
		    bias_add0->bias_data(bias_data);
		    bias_add0->dst_valid(dst_valid);
		    bias_add0->dst[0](dst[0]);
		    bias_add0->dst[1](dst[1]);
		    bias_add0->dst[2](dst[2]);
		    bias_add0->dst[3](dst[3]);
		    bias_add0->dst[4](dst[4]);
		    bias_add0->dst[5](dst[5]);
		    bias_add0->dst[6](dst[6]);
		    bias_add0->dst[7](dst[7]);


			{
			const char *simConfig = bias_add_wrapper::simConfigName();
			
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

void bias_add_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void bias_add_wrapper::start_of_simulation()
{

#include <bias_add_trace.h>

    esc_multiple_writers_warning();
}

void bias_add_wrapper::CloseTrace()
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

void bias_add_wrapper::end_of_simulation()
{
	CloseTrace();
}



void bias_add_wrapper::DeleteInstances()
{
    if (bias_add0)
    {
        delete bias_add0;
        bias_add0 = 0;
    }
    if (bias_add_cosim0)
    {
        delete bias_add_cosim0;
        bias_add_cosim0 = 0;
    }
    if (bias_add_cycsim0)
    {
        delete bias_add_cycsim0;
        bias_add_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_bias_add)
    if (bias_add_rtl0)
    {
        delete bias_add_rtl0;
        bias_add_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void bias_add_wrapper_r::thread_src_0()
{
   src[0] = src_0.read();
}
void bias_add_wrapper_r::thread_src_1()
{
   src[1] = src_1.read();
}
void bias_add_wrapper_r::thread_src_2()
{
   src[2] = src_2.read();
}
void bias_add_wrapper_r::thread_src_3()
{
   src[3] = src_3.read();
}
void bias_add_wrapper_r::thread_src_4()
{
   src[4] = src_4.read();
}
void bias_add_wrapper_r::thread_src_5()
{
   src[5] = src_5.read();
}
void bias_add_wrapper_r::thread_src_6()
{
   src[6] = src_6.read();
}
void bias_add_wrapper_r::thread_src_7()
{
   src[7] = src_7.read();
}
void bias_add_wrapper_r::thread_dst_0()
{
   sc_uint< 32 > tmp;
   tmp = dst[0].read();
   dst_0.write(tmp);
}
void bias_add_wrapper_r::thread_dst_1()
{
   sc_uint< 32 > tmp;
   tmp = dst[1].read();
   dst_1.write(tmp);
}
void bias_add_wrapper_r::thread_dst_2()
{
   sc_uint< 32 > tmp;
   tmp = dst[2].read();
   dst_2.write(tmp);
}
void bias_add_wrapper_r::thread_dst_3()
{
   sc_uint< 32 > tmp;
   tmp = dst[3].read();
   dst_3.write(tmp);
}
void bias_add_wrapper_r::thread_dst_4()
{
   sc_uint< 32 > tmp;
   tmp = dst[4].read();
   dst_4.write(tmp);
}
void bias_add_wrapper_r::thread_dst_5()
{
   sc_uint< 32 > tmp;
   tmp = dst[5].read();
   dst_5.write(tmp);
}
void bias_add_wrapper_r::thread_dst_6()
{
   sc_uint< 32 > tmp;
   tmp = dst[6].read();
   dst_6.write(tmp);
}
void bias_add_wrapper_r::thread_dst_7()
{
   sc_uint< 32 > tmp;
   tmp = dst[7].read();
   dst_7.write(tmp);
}


const char * bias_add_wrapper_r::simConfigName()
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

enum bias_add_wrapper_r::Representation bias_add_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "bias_add", simConfig, instName, &iresult );
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

void bias_add_wrapper_r::InitInstances()
{
    enum bias_add_wrapper_r::Representation rep =
		bias_add_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "bias_add" );
	esc_log_representation( "bias_add", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    bias_add_cosim0 = new bias_add_cosim( "bias_add" );

		    bias_add_cosim0->clk(clk);
		    bias_add_cosim0->rstn(rstn);
		    bias_add_cosim0->enable(enable);
		    bias_add_cosim0->src_valid(src_valid);
		    bias_add_cosim0->src_0(src_0);
		    bias_add_cosim0->src_1(src_1);
		    bias_add_cosim0->src_2(src_2);
		    bias_add_cosim0->src_3(src_3);
		    bias_add_cosim0->src_4(src_4);
		    bias_add_cosim0->src_5(src_5);
		    bias_add_cosim0->src_6(src_6);
		    bias_add_cosim0->src_7(src_7);
		    bias_add_cosim0->bias_data(bias_data);
		    bias_add_cosim0->dst_valid(dst_valid);
		    bias_add_cosim0->dst_0(dst_0);
		    bias_add_cosim0->dst_1(dst_1);
		    bias_add_cosim0->dst_2(dst_2);
		    bias_add_cosim0->dst_3(dst_3);
		    bias_add_cosim0->dst_4(dst_4);
		    bias_add_cosim0->dst_5(dst_5);
		    bias_add_cosim0->dst_6(dst_6);
		    bias_add_cosim0->dst_7(dst_7);

			break;
		case BDWRep_RTL_HDL:
		    bias_add_cosim0 = new bias_add_cosim( "bias_add" );

		    bias_add_cosim0->clk(clk);
		    bias_add_cosim0->rstn(rstn);
		    bias_add_cosim0->enable(enable);
		    bias_add_cosim0->src_valid(src_valid);
		    bias_add_cosim0->src_0(src_0);
		    bias_add_cosim0->src_1(src_1);
		    bias_add_cosim0->src_2(src_2);
		    bias_add_cosim0->src_3(src_3);
		    bias_add_cosim0->src_4(src_4);
		    bias_add_cosim0->src_5(src_5);
		    bias_add_cosim0->src_6(src_6);
		    bias_add_cosim0->src_7(src_7);
		    bias_add_cosim0->bias_data(bias_data);
		    bias_add_cosim0->dst_valid(dst_valid);
		    bias_add_cosim0->dst_0(dst_0);
		    bias_add_cosim0->dst_1(dst_1);
		    bias_add_cosim0->dst_2(dst_2);
		    bias_add_cosim0->dst_3(dst_3);
		    bias_add_cosim0->dst_4(dst_4);
		    bias_add_cosim0->dst_5(dst_5);
		    bias_add_cosim0->dst_6(dst_6);
		    bias_add_cosim0->dst_7(dst_7);

			break;
        case BDWRep_CYC_HDL:
            if ( bias_add_cycsim_factory_p )
                bias_add_cycsim0 = bias_add_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module bias_add");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"bias_add\"");

		    bias_add_cycsim0->clk(clk);
		    bias_add_cycsim0->rstn(rstn);
		    bias_add_cycsim0->enable(enable);
		    bias_add_cycsim0->src_valid(src_valid);
		    bias_add_cycsim0->src_0(src_0);
		    bias_add_cycsim0->src_1(src_1);
		    bias_add_cycsim0->src_2(src_2);
		    bias_add_cycsim0->src_3(src_3);
		    bias_add_cycsim0->src_4(src_4);
		    bias_add_cycsim0->src_5(src_5);
		    bias_add_cycsim0->src_6(src_6);
		    bias_add_cycsim0->src_7(src_7);
		    bias_add_cycsim0->bias_data(bias_data);
		    bias_add_cycsim0->dst_valid(dst_valid);
		    bias_add_cycsim0->dst_0(dst_0);
		    bias_add_cycsim0->dst_1(dst_1);
		    bias_add_cycsim0->dst_2(dst_2);
		    bias_add_cycsim0->dst_3(dst_3);
		    bias_add_cycsim0->dst_4(dst_4);
		    bias_add_cycsim0->dst_5(dst_5);
		    bias_add_cycsim0->dst_6(dst_6);
		    bias_add_cycsim0->dst_7(dst_7);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_bias_add)
		case BDWRep_RTL_C:
		    bias_add_rtl0 = new bias_add_rtl( "bias_add" );

		    bias_add_rtl0->clk(clk);
		    bias_add_rtl0->rstn(rstn);
		    bias_add_rtl0->enable(enable);
		    bias_add_rtl0->src_valid(src_valid);
		    bias_add_rtl0->src_0(src_0);
		    bias_add_rtl0->src_1(src_1);
		    bias_add_rtl0->src_2(src_2);
		    bias_add_rtl0->src_3(src_3);
		    bias_add_rtl0->src_4(src_4);
		    bias_add_rtl0->src_5(src_5);
		    bias_add_rtl0->src_6(src_6);
		    bias_add_rtl0->src_7(src_7);
		    bias_add_rtl0->bias_data(bias_data);
		    bias_add_rtl0->dst_valid(dst_valid);
		    bias_add_rtl0->dst_0(dst_0);
		    bias_add_rtl0->dst_1(dst_1);
		    bias_add_rtl0->dst_2(dst_2);
		    bias_add_rtl0->dst_3(dst_3);
		    bias_add_rtl0->dst_4(dst_4);
		    bias_add_rtl0->dst_5(dst_5);
		    bias_add_rtl0->dst_6(dst_6);
		    bias_add_rtl0->dst_7(dst_7);


			{
			const char *simConfig = bias_add_wrapper::simConfigName();
			
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
		    bias_add0 = new bias_add( "bias_add" );

		    bias_add0->clk(clk);
		    bias_add0->rstn(rstn);
		    bias_add0->enable(enable);
		    bias_add0->src_valid(src_valid);
		    bias_add0->src[0](src[0]);
		    bias_add0->src[1](src[1]);
		    bias_add0->src[2](src[2]);
		    bias_add0->src[3](src[3]);
		    bias_add0->src[4](src[4]);
		    bias_add0->src[5](src[5]);
		    bias_add0->src[6](src[6]);
		    bias_add0->src[7](src[7]);
		    bias_add0->bias_data(bias_data);
		    bias_add0->dst_valid(dst_valid);
		    bias_add0->dst[0](dst[0]);
		    bias_add0->dst[1](dst[1]);
		    bias_add0->dst[2](dst[2]);
		    bias_add0->dst[3](dst[3]);
		    bias_add0->dst[4](dst[4]);
		    bias_add0->dst[5](dst[5]);
		    bias_add0->dst[6](dst[6]);
		    bias_add0->dst[7](dst[7]);


			{
			const char *simConfig = bias_add_wrapper::simConfigName();
			
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

void bias_add_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_src_0);
		  sensitive << src_0;
		SC_METHOD(thread_src_1);
		  sensitive << src_1;
		SC_METHOD(thread_src_2);
		  sensitive << src_2;
		SC_METHOD(thread_src_3);
		  sensitive << src_3;
		SC_METHOD(thread_src_4);
		  sensitive << src_4;
		SC_METHOD(thread_src_5);
		  sensitive << src_5;
		SC_METHOD(thread_src_6);
		  sensitive << src_6;
		SC_METHOD(thread_src_7);
		  sensitive << src_7;
		SC_METHOD(thread_dst_0);
		  sensitive << dst[0];
		SC_METHOD(thread_dst_1);
		  sensitive << dst[1];
		SC_METHOD(thread_dst_2);
		  sensitive << dst[2];
		SC_METHOD(thread_dst_3);
		  sensitive << dst[3];
		SC_METHOD(thread_dst_4);
		  sensitive << dst[4];
		SC_METHOD(thread_dst_5);
		  sensitive << dst[5];
		SC_METHOD(thread_dst_6);
		  sensitive << dst[6];
		SC_METHOD(thread_dst_7);
		  sensitive << dst[7];

	}
}

void bias_add_wrapper_r::start_of_simulation()
{

#include <bias_add_trace.h>

    esc_multiple_writers_warning();
}

void bias_add_wrapper_r::CloseTrace()
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

void bias_add_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void bias_add_wrapper_r::DeleteInstances()
{
    if (bias_add0)
    {
        delete bias_add0;
        bias_add0 = 0;
    }
    if (bias_add_cosim0)
    {
        delete bias_add_cosim0;
        bias_add_cosim0 = 0;
    }
    if (bias_add_cycsim0)
    {
        delete bias_add_cycsim0;
        bias_add_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_bias_add)
    if (bias_add_rtl0)
    {
        delete bias_add_rtl0;
        bias_add_rtl0 = 0;
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

class bias_add_wrapper_fsdb_opener {
public:
	bias_add_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static bias_add_wrapper_fsdb_opener
  bias_add_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"bias_add.cpp"

#define		bias_add_INTERNAL


#include	"bias_add_wrap.h"

const char * bias_add_wrapper::simConfigName()
{
  return "";
}

enum bias_add_wrapper::Representation bias_add_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void bias_add_wrapper::InitInstances( sc_core::sc_module_name  )
{
	bias_add0 = new bias_add( "bias_add" );

	bias_add0->clk(clk);
	bias_add0->rstn(rstn);
	bias_add0->enable(enable);
	bias_add0->src_valid(src_valid);
	bias_add0->src[0](src[0]);
	bias_add0->src[1](src[1]);
	bias_add0->src[2](src[2]);
	bias_add0->src[3](src[3]);
	bias_add0->src[4](src[4]);
	bias_add0->src[5](src[5]);
	bias_add0->src[6](src[6]);
	bias_add0->src[7](src[7]);
	bias_add0->bias_data(bias_data);
	bias_add0->dst_valid(dst_valid);
	bias_add0->dst[0](dst[0]);
	bias_add0->dst[1](dst[1]);
	bias_add0->dst[2](dst[2]);
	bias_add0->dst[3](dst[3]);
	bias_add0->dst[4](dst[4]);
	bias_add0->dst[5](dst[5]);
	bias_add0->dst[6](dst[6]);
	bias_add0->dst[7](dst[7]);

}

void bias_add_wrapper::InitThreads()
{
}

void bias_add_wrapper::CloseTrace()
{
}

void bias_add_wrapper::DeleteInstances()
{
    if (bias_add0)
    {
        delete bias_add0;
        bias_add0 = 0;
    }
}

void bias_add_wrapper::start_of_simulation()
{
}

void bias_add_wrapper::end_of_simulation()
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

class bias_add_wrapper_fsdb_opener {
public:
	bias_add_wrapper_fsdb_opener() {
	}
};

static bias_add_wrapper_fsdb_opener
  bias_add_wrapper_fsdb_opener_inst;

#endif

#endif
