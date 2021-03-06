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
* block called "sfu_out_buff". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"sfu_out_buff_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_sfu_out_buff)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef sfu_out_buff
#define sfu_out_buff sfu_out_buff_rtl
#	include	"sfu_out_buff_rtl.cpp"
#undef sfu_out_buff


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"sfu_out_buff_coware.h"
#else
#include	"sfu_out_buff_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "sfu_out_buff_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"sfu_out_buff.cpp"


#define		sfu_out_buff_INTERNAL


#include	"sfu_out_buff_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
sfu_out_buff_cycsim* (*sfu_out_buff_cycsim_factory_p)() = 0;

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

const char * sfu_out_buff_wrapper::simConfigName()
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

enum sfu_out_buff_wrapper::Representation sfu_out_buff_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "sfu_out_buff", simConfig, instName, &iresult );
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
								 "sfu_out_buff", simConfig, instName, leaf,  "sfu_out_buff" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void sfu_out_buff_wrapper::InitInstances(  )
{
    enum sfu_out_buff_wrapper::Representation rep =
		sfu_out_buff_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "sfu_out_buff" );
	esc_log_representation( "sfu_out_buff", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    sfu_out_buff_cosim0 = new sfu_out_buff_cosim( "sfu_out_buff" );

		    sfu_out_buff_cosim0->clk(clk);
		    sfu_out_buff_cosim0->rstn(rstn);
		    sfu_out_buff_cosim0->enable(enable);
		    sfu_out_buff_cosim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cosim0->in0_data_0(in0_data[0]);
		    sfu_out_buff_cosim0->in0_data_1(in0_data[1]);
		    sfu_out_buff_cosim0->in0_data_2(in0_data[2]);
		    sfu_out_buff_cosim0->in0_data_3(in0_data[3]);
		    sfu_out_buff_cosim0->in0_data_4(in0_data[4]);
		    sfu_out_buff_cosim0->in0_data_5(in0_data[5]);
		    sfu_out_buff_cosim0->in0_data_6(in0_data[6]);
		    sfu_out_buff_cosim0->in0_data_7(in0_data[7]);
		    sfu_out_buff_cosim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cosim0->in1_data_0(in1_data[0]);
		    sfu_out_buff_cosim0->in1_data_1(in1_data[1]);
		    sfu_out_buff_cosim0->in1_data_2(in1_data[2]);
		    sfu_out_buff_cosim0->in1_data_3(in1_data[3]);
		    sfu_out_buff_cosim0->in1_data_4(in1_data[4]);
		    sfu_out_buff_cosim0->in1_data_5(in1_data[5]);
		    sfu_out_buff_cosim0->in1_data_6(in1_data[6]);
		    sfu_out_buff_cosim0->in1_data_7(in1_data[7]);
		    sfu_out_buff_cosim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cosim0->out_data(out_data);
		    sfu_out_buff_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    sfu_out_buff_cosim0 = new sfu_out_buff_cosim( "sfu_out_buff" );

		    sfu_out_buff_cosim0->clk(clk);
		    sfu_out_buff_cosim0->rstn(rstn);
		    sfu_out_buff_cosim0->enable(enable);
		    sfu_out_buff_cosim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cosim0->in0_data_0(in0_data[0]);
		    sfu_out_buff_cosim0->in0_data_1(in0_data[1]);
		    sfu_out_buff_cosim0->in0_data_2(in0_data[2]);
		    sfu_out_buff_cosim0->in0_data_3(in0_data[3]);
		    sfu_out_buff_cosim0->in0_data_4(in0_data[4]);
		    sfu_out_buff_cosim0->in0_data_5(in0_data[5]);
		    sfu_out_buff_cosim0->in0_data_6(in0_data[6]);
		    sfu_out_buff_cosim0->in0_data_7(in0_data[7]);
		    sfu_out_buff_cosim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cosim0->in1_data_0(in1_data[0]);
		    sfu_out_buff_cosim0->in1_data_1(in1_data[1]);
		    sfu_out_buff_cosim0->in1_data_2(in1_data[2]);
		    sfu_out_buff_cosim0->in1_data_3(in1_data[3]);
		    sfu_out_buff_cosim0->in1_data_4(in1_data[4]);
		    sfu_out_buff_cosim0->in1_data_5(in1_data[5]);
		    sfu_out_buff_cosim0->in1_data_6(in1_data[6]);
		    sfu_out_buff_cosim0->in1_data_7(in1_data[7]);
		    sfu_out_buff_cosim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cosim0->out_data(out_data);
		    sfu_out_buff_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( sfu_out_buff_cycsim_factory_p )
                sfu_out_buff_cycsim0 = sfu_out_buff_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module sfu_out_buff");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"sfu_out_buff\"");

		    sfu_out_buff_cycsim0->clk(clk);
		    sfu_out_buff_cycsim0->rstn(rstn);
		    sfu_out_buff_cycsim0->enable(enable);
		    sfu_out_buff_cycsim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cycsim0->in0_data_0(in0_data[0]);
		    sfu_out_buff_cycsim0->in0_data_1(in0_data[1]);
		    sfu_out_buff_cycsim0->in0_data_2(in0_data[2]);
		    sfu_out_buff_cycsim0->in0_data_3(in0_data[3]);
		    sfu_out_buff_cycsim0->in0_data_4(in0_data[4]);
		    sfu_out_buff_cycsim0->in0_data_5(in0_data[5]);
		    sfu_out_buff_cycsim0->in0_data_6(in0_data[6]);
		    sfu_out_buff_cycsim0->in0_data_7(in0_data[7]);
		    sfu_out_buff_cycsim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cycsim0->in1_data_0(in1_data[0]);
		    sfu_out_buff_cycsim0->in1_data_1(in1_data[1]);
		    sfu_out_buff_cycsim0->in1_data_2(in1_data[2]);
		    sfu_out_buff_cycsim0->in1_data_3(in1_data[3]);
		    sfu_out_buff_cycsim0->in1_data_4(in1_data[4]);
		    sfu_out_buff_cycsim0->in1_data_5(in1_data[5]);
		    sfu_out_buff_cycsim0->in1_data_6(in1_data[6]);
		    sfu_out_buff_cycsim0->in1_data_7(in1_data[7]);
		    sfu_out_buff_cycsim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cycsim0->out_data(out_data);
		    sfu_out_buff_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_sfu_out_buff)
		case BDWRep_RTL_C:
		    sfu_out_buff_rtl0 = new sfu_out_buff_rtl( "sfu_out_buff" );

		    sfu_out_buff_rtl0->clk(clk);
		    sfu_out_buff_rtl0->rstn(rstn);
		    sfu_out_buff_rtl0->enable(enable);
		    sfu_out_buff_rtl0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_rtl0->in0_data_0(in0_data[0]);
		    sfu_out_buff_rtl0->in0_data_1(in0_data[1]);
		    sfu_out_buff_rtl0->in0_data_2(in0_data[2]);
		    sfu_out_buff_rtl0->in0_data_3(in0_data[3]);
		    sfu_out_buff_rtl0->in0_data_4(in0_data[4]);
		    sfu_out_buff_rtl0->in0_data_5(in0_data[5]);
		    sfu_out_buff_rtl0->in0_data_6(in0_data[6]);
		    sfu_out_buff_rtl0->in0_data_7(in0_data[7]);
		    sfu_out_buff_rtl0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_rtl0->in1_data_0(in1_data[0]);
		    sfu_out_buff_rtl0->in1_data_1(in1_data[1]);
		    sfu_out_buff_rtl0->in1_data_2(in1_data[2]);
		    sfu_out_buff_rtl0->in1_data_3(in1_data[3]);
		    sfu_out_buff_rtl0->in1_data_4(in1_data[4]);
		    sfu_out_buff_rtl0->in1_data_5(in1_data[5]);
		    sfu_out_buff_rtl0->in1_data_6(in1_data[6]);
		    sfu_out_buff_rtl0->in1_data_7(in1_data[7]);
		    sfu_out_buff_rtl0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_rtl0->out_data(out_data);
		    sfu_out_buff_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = sfu_out_buff_wrapper::simConfigName();
			
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
		    sfu_out_buff0 = new sfu_out_buff( "sfu_out_buff" );

		    sfu_out_buff0->clk(clk);
		    sfu_out_buff0->rstn(rstn);
		    sfu_out_buff0->enable(enable);
		    sfu_out_buff0->learned_clip_en(learned_clip_en);
		    sfu_out_buff0->in0_data[0](in0_data[0]);
		    sfu_out_buff0->in0_data[1](in0_data[1]);
		    sfu_out_buff0->in0_data[2](in0_data[2]);
		    sfu_out_buff0->in0_data[3](in0_data[3]);
		    sfu_out_buff0->in0_data[4](in0_data[4]);
		    sfu_out_buff0->in0_data[5](in0_data[5]);
		    sfu_out_buff0->in0_data[6](in0_data[6]);
		    sfu_out_buff0->in0_data[7](in0_data[7]);
		    sfu_out_buff0->in0_data_valid(in0_data_valid);
		    sfu_out_buff0->in1_data[0](in1_data[0]);
		    sfu_out_buff0->in1_data[1](in1_data[1]);
		    sfu_out_buff0->in1_data[2](in1_data[2]);
		    sfu_out_buff0->in1_data[3](in1_data[3]);
		    sfu_out_buff0->in1_data[4](in1_data[4]);
		    sfu_out_buff0->in1_data[5](in1_data[5]);
		    sfu_out_buff0->in1_data[6](in1_data[6]);
		    sfu_out_buff0->in1_data[7](in1_data[7]);
		    sfu_out_buff0->in1_data_valid(in1_data_valid);
		    sfu_out_buff0->out_data(out_data);
		    sfu_out_buff0->out_data_valid(out_data_valid);


			{
			const char *simConfig = sfu_out_buff_wrapper::simConfigName();
			
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

void sfu_out_buff_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void sfu_out_buff_wrapper::start_of_simulation()
{

#include <sfu_out_buff_trace.h>

    esc_multiple_writers_warning();
}

void sfu_out_buff_wrapper::CloseTrace()
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

void sfu_out_buff_wrapper::end_of_simulation()
{
	CloseTrace();
}



void sfu_out_buff_wrapper::DeleteInstances()
{
    if (sfu_out_buff0)
    {
        delete sfu_out_buff0;
        sfu_out_buff0 = 0;
    }
    if (sfu_out_buff_cosim0)
    {
        delete sfu_out_buff_cosim0;
        sfu_out_buff_cosim0 = 0;
    }
    if (sfu_out_buff_cycsim0)
    {
        delete sfu_out_buff_cycsim0;
        sfu_out_buff_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_sfu_out_buff)
    if (sfu_out_buff_rtl0)
    {
        delete sfu_out_buff_rtl0;
        sfu_out_buff_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void sfu_out_buff_wrapper_r::thread_in0_data_0()
{
   in0_data[0] = in0_data_0.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_1()
{
   in0_data[1] = in0_data_1.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_2()
{
   in0_data[2] = in0_data_2.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_3()
{
   in0_data[3] = in0_data_3.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_4()
{
   in0_data[4] = in0_data_4.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_5()
{
   in0_data[5] = in0_data_5.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_6()
{
   in0_data[6] = in0_data_6.read();
}
void sfu_out_buff_wrapper_r::thread_in0_data_7()
{
   in0_data[7] = in0_data_7.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_0()
{
   in1_data[0] = in1_data_0.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_1()
{
   in1_data[1] = in1_data_1.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_2()
{
   in1_data[2] = in1_data_2.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_3()
{
   in1_data[3] = in1_data_3.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_4()
{
   in1_data[4] = in1_data_4.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_5()
{
   in1_data[5] = in1_data_5.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_6()
{
   in1_data[6] = in1_data_6.read();
}
void sfu_out_buff_wrapper_r::thread_in1_data_7()
{
   in1_data[7] = in1_data_7.read();
}


const char * sfu_out_buff_wrapper_r::simConfigName()
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

enum sfu_out_buff_wrapper_r::Representation sfu_out_buff_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "sfu_out_buff", simConfig, instName, &iresult );
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

void sfu_out_buff_wrapper_r::InitInstances()
{
    enum sfu_out_buff_wrapper_r::Representation rep =
		sfu_out_buff_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "sfu_out_buff" );
	esc_log_representation( "sfu_out_buff", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    sfu_out_buff_cosim0 = new sfu_out_buff_cosim( "sfu_out_buff" );

		    sfu_out_buff_cosim0->clk(clk);
		    sfu_out_buff_cosim0->rstn(rstn);
		    sfu_out_buff_cosim0->enable(enable);
		    sfu_out_buff_cosim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cosim0->in0_data_0(in0_data_0);
		    sfu_out_buff_cosim0->in0_data_1(in0_data_1);
		    sfu_out_buff_cosim0->in0_data_2(in0_data_2);
		    sfu_out_buff_cosim0->in0_data_3(in0_data_3);
		    sfu_out_buff_cosim0->in0_data_4(in0_data_4);
		    sfu_out_buff_cosim0->in0_data_5(in0_data_5);
		    sfu_out_buff_cosim0->in0_data_6(in0_data_6);
		    sfu_out_buff_cosim0->in0_data_7(in0_data_7);
		    sfu_out_buff_cosim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cosim0->in1_data_0(in1_data_0);
		    sfu_out_buff_cosim0->in1_data_1(in1_data_1);
		    sfu_out_buff_cosim0->in1_data_2(in1_data_2);
		    sfu_out_buff_cosim0->in1_data_3(in1_data_3);
		    sfu_out_buff_cosim0->in1_data_4(in1_data_4);
		    sfu_out_buff_cosim0->in1_data_5(in1_data_5);
		    sfu_out_buff_cosim0->in1_data_6(in1_data_6);
		    sfu_out_buff_cosim0->in1_data_7(in1_data_7);
		    sfu_out_buff_cosim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cosim0->out_data(out_data);
		    sfu_out_buff_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    sfu_out_buff_cosim0 = new sfu_out_buff_cosim( "sfu_out_buff" );

		    sfu_out_buff_cosim0->clk(clk);
		    sfu_out_buff_cosim0->rstn(rstn);
		    sfu_out_buff_cosim0->enable(enable);
		    sfu_out_buff_cosim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cosim0->in0_data_0(in0_data_0);
		    sfu_out_buff_cosim0->in0_data_1(in0_data_1);
		    sfu_out_buff_cosim0->in0_data_2(in0_data_2);
		    sfu_out_buff_cosim0->in0_data_3(in0_data_3);
		    sfu_out_buff_cosim0->in0_data_4(in0_data_4);
		    sfu_out_buff_cosim0->in0_data_5(in0_data_5);
		    sfu_out_buff_cosim0->in0_data_6(in0_data_6);
		    sfu_out_buff_cosim0->in0_data_7(in0_data_7);
		    sfu_out_buff_cosim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cosim0->in1_data_0(in1_data_0);
		    sfu_out_buff_cosim0->in1_data_1(in1_data_1);
		    sfu_out_buff_cosim0->in1_data_2(in1_data_2);
		    sfu_out_buff_cosim0->in1_data_3(in1_data_3);
		    sfu_out_buff_cosim0->in1_data_4(in1_data_4);
		    sfu_out_buff_cosim0->in1_data_5(in1_data_5);
		    sfu_out_buff_cosim0->in1_data_6(in1_data_6);
		    sfu_out_buff_cosim0->in1_data_7(in1_data_7);
		    sfu_out_buff_cosim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cosim0->out_data(out_data);
		    sfu_out_buff_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( sfu_out_buff_cycsim_factory_p )
                sfu_out_buff_cycsim0 = sfu_out_buff_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module sfu_out_buff");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"sfu_out_buff\"");

		    sfu_out_buff_cycsim0->clk(clk);
		    sfu_out_buff_cycsim0->rstn(rstn);
		    sfu_out_buff_cycsim0->enable(enable);
		    sfu_out_buff_cycsim0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_cycsim0->in0_data_0(in0_data_0);
		    sfu_out_buff_cycsim0->in0_data_1(in0_data_1);
		    sfu_out_buff_cycsim0->in0_data_2(in0_data_2);
		    sfu_out_buff_cycsim0->in0_data_3(in0_data_3);
		    sfu_out_buff_cycsim0->in0_data_4(in0_data_4);
		    sfu_out_buff_cycsim0->in0_data_5(in0_data_5);
		    sfu_out_buff_cycsim0->in0_data_6(in0_data_6);
		    sfu_out_buff_cycsim0->in0_data_7(in0_data_7);
		    sfu_out_buff_cycsim0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_cycsim0->in1_data_0(in1_data_0);
		    sfu_out_buff_cycsim0->in1_data_1(in1_data_1);
		    sfu_out_buff_cycsim0->in1_data_2(in1_data_2);
		    sfu_out_buff_cycsim0->in1_data_3(in1_data_3);
		    sfu_out_buff_cycsim0->in1_data_4(in1_data_4);
		    sfu_out_buff_cycsim0->in1_data_5(in1_data_5);
		    sfu_out_buff_cycsim0->in1_data_6(in1_data_6);
		    sfu_out_buff_cycsim0->in1_data_7(in1_data_7);
		    sfu_out_buff_cycsim0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_cycsim0->out_data(out_data);
		    sfu_out_buff_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_sfu_out_buff)
		case BDWRep_RTL_C:
		    sfu_out_buff_rtl0 = new sfu_out_buff_rtl( "sfu_out_buff" );

		    sfu_out_buff_rtl0->clk(clk);
		    sfu_out_buff_rtl0->rstn(rstn);
		    sfu_out_buff_rtl0->enable(enable);
		    sfu_out_buff_rtl0->learned_clip_en(learned_clip_en);
		    sfu_out_buff_rtl0->in0_data_0(in0_data_0);
		    sfu_out_buff_rtl0->in0_data_1(in0_data_1);
		    sfu_out_buff_rtl0->in0_data_2(in0_data_2);
		    sfu_out_buff_rtl0->in0_data_3(in0_data_3);
		    sfu_out_buff_rtl0->in0_data_4(in0_data_4);
		    sfu_out_buff_rtl0->in0_data_5(in0_data_5);
		    sfu_out_buff_rtl0->in0_data_6(in0_data_6);
		    sfu_out_buff_rtl0->in0_data_7(in0_data_7);
		    sfu_out_buff_rtl0->in0_data_valid(in0_data_valid);
		    sfu_out_buff_rtl0->in1_data_0(in1_data_0);
		    sfu_out_buff_rtl0->in1_data_1(in1_data_1);
		    sfu_out_buff_rtl0->in1_data_2(in1_data_2);
		    sfu_out_buff_rtl0->in1_data_3(in1_data_3);
		    sfu_out_buff_rtl0->in1_data_4(in1_data_4);
		    sfu_out_buff_rtl0->in1_data_5(in1_data_5);
		    sfu_out_buff_rtl0->in1_data_6(in1_data_6);
		    sfu_out_buff_rtl0->in1_data_7(in1_data_7);
		    sfu_out_buff_rtl0->in1_data_valid(in1_data_valid);
		    sfu_out_buff_rtl0->out_data(out_data);
		    sfu_out_buff_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = sfu_out_buff_wrapper::simConfigName();
			
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
		    sfu_out_buff0 = new sfu_out_buff( "sfu_out_buff" );

		    sfu_out_buff0->clk(clk);
		    sfu_out_buff0->rstn(rstn);
		    sfu_out_buff0->enable(enable);
		    sfu_out_buff0->learned_clip_en(learned_clip_en);
		    sfu_out_buff0->in0_data[0](in0_data[0]);
		    sfu_out_buff0->in0_data[1](in0_data[1]);
		    sfu_out_buff0->in0_data[2](in0_data[2]);
		    sfu_out_buff0->in0_data[3](in0_data[3]);
		    sfu_out_buff0->in0_data[4](in0_data[4]);
		    sfu_out_buff0->in0_data[5](in0_data[5]);
		    sfu_out_buff0->in0_data[6](in0_data[6]);
		    sfu_out_buff0->in0_data[7](in0_data[7]);
		    sfu_out_buff0->in0_data_valid(in0_data_valid);
		    sfu_out_buff0->in1_data[0](in1_data[0]);
		    sfu_out_buff0->in1_data[1](in1_data[1]);
		    sfu_out_buff0->in1_data[2](in1_data[2]);
		    sfu_out_buff0->in1_data[3](in1_data[3]);
		    sfu_out_buff0->in1_data[4](in1_data[4]);
		    sfu_out_buff0->in1_data[5](in1_data[5]);
		    sfu_out_buff0->in1_data[6](in1_data[6]);
		    sfu_out_buff0->in1_data[7](in1_data[7]);
		    sfu_out_buff0->in1_data_valid(in1_data_valid);
		    sfu_out_buff0->out_data(out_data);
		    sfu_out_buff0->out_data_valid(out_data_valid);


			{
			const char *simConfig = sfu_out_buff_wrapper::simConfigName();
			
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

void sfu_out_buff_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_in0_data_0);
		  sensitive << in0_data_0;
		SC_METHOD(thread_in0_data_1);
		  sensitive << in0_data_1;
		SC_METHOD(thread_in0_data_2);
		  sensitive << in0_data_2;
		SC_METHOD(thread_in0_data_3);
		  sensitive << in0_data_3;
		SC_METHOD(thread_in0_data_4);
		  sensitive << in0_data_4;
		SC_METHOD(thread_in0_data_5);
		  sensitive << in0_data_5;
		SC_METHOD(thread_in0_data_6);
		  sensitive << in0_data_6;
		SC_METHOD(thread_in0_data_7);
		  sensitive << in0_data_7;
		SC_METHOD(thread_in1_data_0);
		  sensitive << in1_data_0;
		SC_METHOD(thread_in1_data_1);
		  sensitive << in1_data_1;
		SC_METHOD(thread_in1_data_2);
		  sensitive << in1_data_2;
		SC_METHOD(thread_in1_data_3);
		  sensitive << in1_data_3;
		SC_METHOD(thread_in1_data_4);
		  sensitive << in1_data_4;
		SC_METHOD(thread_in1_data_5);
		  sensitive << in1_data_5;
		SC_METHOD(thread_in1_data_6);
		  sensitive << in1_data_6;
		SC_METHOD(thread_in1_data_7);
		  sensitive << in1_data_7;

	}
}

void sfu_out_buff_wrapper_r::start_of_simulation()
{

#include <sfu_out_buff_trace.h>

    esc_multiple_writers_warning();
}

void sfu_out_buff_wrapper_r::CloseTrace()
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

void sfu_out_buff_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void sfu_out_buff_wrapper_r::DeleteInstances()
{
    if (sfu_out_buff0)
    {
        delete sfu_out_buff0;
        sfu_out_buff0 = 0;
    }
    if (sfu_out_buff_cosim0)
    {
        delete sfu_out_buff_cosim0;
        sfu_out_buff_cosim0 = 0;
    }
    if (sfu_out_buff_cycsim0)
    {
        delete sfu_out_buff_cycsim0;
        sfu_out_buff_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_sfu_out_buff)
    if (sfu_out_buff_rtl0)
    {
        delete sfu_out_buff_rtl0;
        sfu_out_buff_rtl0 = 0;
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

class sfu_out_buff_wrapper_fsdb_opener {
public:
	sfu_out_buff_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static sfu_out_buff_wrapper_fsdb_opener
  sfu_out_buff_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"sfu_out_buff.cpp"

#define		sfu_out_buff_INTERNAL


#include	"sfu_out_buff_wrap.h"

const char * sfu_out_buff_wrapper::simConfigName()
{
  return "";
}

enum sfu_out_buff_wrapper::Representation sfu_out_buff_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void sfu_out_buff_wrapper::InitInstances( sc_core::sc_module_name  )
{
	sfu_out_buff0 = new sfu_out_buff( "sfu_out_buff" );

	sfu_out_buff0->clk(clk);
	sfu_out_buff0->rstn(rstn);
	sfu_out_buff0->enable(enable);
	sfu_out_buff0->learned_clip_en(learned_clip_en);
	sfu_out_buff0->in0_data[0](in0_data[0]);
	sfu_out_buff0->in0_data[1](in0_data[1]);
	sfu_out_buff0->in0_data[2](in0_data[2]);
	sfu_out_buff0->in0_data[3](in0_data[3]);
	sfu_out_buff0->in0_data[4](in0_data[4]);
	sfu_out_buff0->in0_data[5](in0_data[5]);
	sfu_out_buff0->in0_data[6](in0_data[6]);
	sfu_out_buff0->in0_data[7](in0_data[7]);
	sfu_out_buff0->in0_data_valid(in0_data_valid);
	sfu_out_buff0->in1_data[0](in1_data[0]);
	sfu_out_buff0->in1_data[1](in1_data[1]);
	sfu_out_buff0->in1_data[2](in1_data[2]);
	sfu_out_buff0->in1_data[3](in1_data[3]);
	sfu_out_buff0->in1_data[4](in1_data[4]);
	sfu_out_buff0->in1_data[5](in1_data[5]);
	sfu_out_buff0->in1_data[6](in1_data[6]);
	sfu_out_buff0->in1_data[7](in1_data[7]);
	sfu_out_buff0->in1_data_valid(in1_data_valid);
	sfu_out_buff0->out_data(out_data);
	sfu_out_buff0->out_data_valid(out_data_valid);

}

void sfu_out_buff_wrapper::InitThreads()
{
}

void sfu_out_buff_wrapper::CloseTrace()
{
}

void sfu_out_buff_wrapper::DeleteInstances()
{
    if (sfu_out_buff0)
    {
        delete sfu_out_buff0;
        sfu_out_buff0 = 0;
    }
}

void sfu_out_buff_wrapper::start_of_simulation()
{
}

void sfu_out_buff_wrapper::end_of_simulation()
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

class sfu_out_buff_wrapper_fsdb_opener {
public:
	sfu_out_buff_wrapper_fsdb_opener() {
	}
};

static sfu_out_buff_wrapper_fsdb_opener
  sfu_out_buff_wrapper_fsdb_opener_inst;

#endif

#endif
