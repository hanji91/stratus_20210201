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
* block called "in_buff". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"in_buff_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_in_buff)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef in_buff
#define in_buff in_buff_rtl
#	include	"in_buff_rtl.cpp"
#undef in_buff


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"in_buff_coware.h"
#else
#include	"in_buff_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "in_buff_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"in_buff.cpp"


#define		in_buff_INTERNAL


#include	"in_buff_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
in_buff_cycsim* (*in_buff_cycsim_factory_p)() = 0;

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

const char * in_buff_wrapper::simConfigName()
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

enum in_buff_wrapper::Representation in_buff_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "in_buff", simConfig, instName, &iresult );
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
								 "in_buff", simConfig, instName, leaf,  "in_buff" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void in_buff_wrapper::InitInstances(  )
{
    enum in_buff_wrapper::Representation rep =
		in_buff_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "in_buff" );
	esc_log_representation( "in_buff", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    in_buff_cosim0 = new in_buff_cosim( "in_buff" );

		    in_buff_cosim0->clk(clk);
		    in_buff_cosim0->rstn(rstn);
		    in_buff_cosim0->enable(enable);
		    in_buff_cosim0->in_data_0(in_data[0]);
		    in_buff_cosim0->in_data_1(in_data[1]);
		    in_buff_cosim0->in_data_2(in_data[2]);
		    in_buff_cosim0->in_data_3(in_data[3]);
		    in_buff_cosim0->in_data_4(in_data[4]);
		    in_buff_cosim0->in_data_5(in_data[5]);
		    in_buff_cosim0->in_data_6(in_data[6]);
		    in_buff_cosim0->in_data_7(in_data[7]);
		    in_buff_cosim0->in_data_8(in_data[8]);
		    in_buff_cosim0->in_data_9(in_data[9]);
		    in_buff_cosim0->in_data_10(in_data[10]);
		    in_buff_cosim0->in_data_11(in_data[11]);
		    in_buff_cosim0->in_data_12(in_data[12]);
		    in_buff_cosim0->in_data_13(in_data[13]);
		    in_buff_cosim0->in_data_14(in_data[14]);
		    in_buff_cosim0->in_data_15(in_data[15]);
		    in_buff_cosim0->in_data_16(in_data[16]);
		    in_buff_cosim0->in_data_17(in_data[17]);
		    in_buff_cosim0->in_data_18(in_data[18]);
		    in_buff_cosim0->in_data_19(in_data[19]);
		    in_buff_cosim0->in_data_20(in_data[20]);
		    in_buff_cosim0->in_data_21(in_data[21]);
		    in_buff_cosim0->in_data_22(in_data[22]);
		    in_buff_cosim0->in_data_23(in_data[23]);
		    in_buff_cosim0->in_data_24(in_data[24]);
		    in_buff_cosim0->in_data_25(in_data[25]);
		    in_buff_cosim0->in_data_26(in_data[26]);
		    in_buff_cosim0->in_data_27(in_data[27]);
		    in_buff_cosim0->in_data_28(in_data[28]);
		    in_buff_cosim0->in_data_29(in_data[29]);
		    in_buff_cosim0->in_data_30(in_data[30]);
		    in_buff_cosim0->in_data_31(in_data[31]);
		    in_buff_cosim0->in_data_valid(in_data_valid);
		    in_buff_cosim0->out_data_0(out_data[0]);
		    in_buff_cosim0->out_data_1(out_data[1]);
		    in_buff_cosim0->out_data_2(out_data[2]);
		    in_buff_cosim0->out_data_3(out_data[3]);
		    in_buff_cosim0->out_data_4(out_data[4]);
		    in_buff_cosim0->out_data_5(out_data[5]);
		    in_buff_cosim0->out_data_6(out_data[6]);
		    in_buff_cosim0->out_data_7(out_data[7]);
		    in_buff_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    in_buff_cosim0 = new in_buff_cosim( "in_buff" );

		    in_buff_cosim0->clk(clk);
		    in_buff_cosim0->rstn(rstn);
		    in_buff_cosim0->enable(enable);
		    in_buff_cosim0->in_data_0(in_data[0]);
		    in_buff_cosim0->in_data_1(in_data[1]);
		    in_buff_cosim0->in_data_2(in_data[2]);
		    in_buff_cosim0->in_data_3(in_data[3]);
		    in_buff_cosim0->in_data_4(in_data[4]);
		    in_buff_cosim0->in_data_5(in_data[5]);
		    in_buff_cosim0->in_data_6(in_data[6]);
		    in_buff_cosim0->in_data_7(in_data[7]);
		    in_buff_cosim0->in_data_8(in_data[8]);
		    in_buff_cosim0->in_data_9(in_data[9]);
		    in_buff_cosim0->in_data_10(in_data[10]);
		    in_buff_cosim0->in_data_11(in_data[11]);
		    in_buff_cosim0->in_data_12(in_data[12]);
		    in_buff_cosim0->in_data_13(in_data[13]);
		    in_buff_cosim0->in_data_14(in_data[14]);
		    in_buff_cosim0->in_data_15(in_data[15]);
		    in_buff_cosim0->in_data_16(in_data[16]);
		    in_buff_cosim0->in_data_17(in_data[17]);
		    in_buff_cosim0->in_data_18(in_data[18]);
		    in_buff_cosim0->in_data_19(in_data[19]);
		    in_buff_cosim0->in_data_20(in_data[20]);
		    in_buff_cosim0->in_data_21(in_data[21]);
		    in_buff_cosim0->in_data_22(in_data[22]);
		    in_buff_cosim0->in_data_23(in_data[23]);
		    in_buff_cosim0->in_data_24(in_data[24]);
		    in_buff_cosim0->in_data_25(in_data[25]);
		    in_buff_cosim0->in_data_26(in_data[26]);
		    in_buff_cosim0->in_data_27(in_data[27]);
		    in_buff_cosim0->in_data_28(in_data[28]);
		    in_buff_cosim0->in_data_29(in_data[29]);
		    in_buff_cosim0->in_data_30(in_data[30]);
		    in_buff_cosim0->in_data_31(in_data[31]);
		    in_buff_cosim0->in_data_valid(in_data_valid);
		    in_buff_cosim0->out_data_0(out_data[0]);
		    in_buff_cosim0->out_data_1(out_data[1]);
		    in_buff_cosim0->out_data_2(out_data[2]);
		    in_buff_cosim0->out_data_3(out_data[3]);
		    in_buff_cosim0->out_data_4(out_data[4]);
		    in_buff_cosim0->out_data_5(out_data[5]);
		    in_buff_cosim0->out_data_6(out_data[6]);
		    in_buff_cosim0->out_data_7(out_data[7]);
		    in_buff_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( in_buff_cycsim_factory_p )
                in_buff_cycsim0 = in_buff_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module in_buff");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"in_buff\"");

		    in_buff_cycsim0->clk(clk);
		    in_buff_cycsim0->rstn(rstn);
		    in_buff_cycsim0->enable(enable);
		    in_buff_cycsim0->in_data_0(in_data[0]);
		    in_buff_cycsim0->in_data_1(in_data[1]);
		    in_buff_cycsim0->in_data_2(in_data[2]);
		    in_buff_cycsim0->in_data_3(in_data[3]);
		    in_buff_cycsim0->in_data_4(in_data[4]);
		    in_buff_cycsim0->in_data_5(in_data[5]);
		    in_buff_cycsim0->in_data_6(in_data[6]);
		    in_buff_cycsim0->in_data_7(in_data[7]);
		    in_buff_cycsim0->in_data_8(in_data[8]);
		    in_buff_cycsim0->in_data_9(in_data[9]);
		    in_buff_cycsim0->in_data_10(in_data[10]);
		    in_buff_cycsim0->in_data_11(in_data[11]);
		    in_buff_cycsim0->in_data_12(in_data[12]);
		    in_buff_cycsim0->in_data_13(in_data[13]);
		    in_buff_cycsim0->in_data_14(in_data[14]);
		    in_buff_cycsim0->in_data_15(in_data[15]);
		    in_buff_cycsim0->in_data_16(in_data[16]);
		    in_buff_cycsim0->in_data_17(in_data[17]);
		    in_buff_cycsim0->in_data_18(in_data[18]);
		    in_buff_cycsim0->in_data_19(in_data[19]);
		    in_buff_cycsim0->in_data_20(in_data[20]);
		    in_buff_cycsim0->in_data_21(in_data[21]);
		    in_buff_cycsim0->in_data_22(in_data[22]);
		    in_buff_cycsim0->in_data_23(in_data[23]);
		    in_buff_cycsim0->in_data_24(in_data[24]);
		    in_buff_cycsim0->in_data_25(in_data[25]);
		    in_buff_cycsim0->in_data_26(in_data[26]);
		    in_buff_cycsim0->in_data_27(in_data[27]);
		    in_buff_cycsim0->in_data_28(in_data[28]);
		    in_buff_cycsim0->in_data_29(in_data[29]);
		    in_buff_cycsim0->in_data_30(in_data[30]);
		    in_buff_cycsim0->in_data_31(in_data[31]);
		    in_buff_cycsim0->in_data_valid(in_data_valid);
		    in_buff_cycsim0->out_data_0(out_data[0]);
		    in_buff_cycsim0->out_data_1(out_data[1]);
		    in_buff_cycsim0->out_data_2(out_data[2]);
		    in_buff_cycsim0->out_data_3(out_data[3]);
		    in_buff_cycsim0->out_data_4(out_data[4]);
		    in_buff_cycsim0->out_data_5(out_data[5]);
		    in_buff_cycsim0->out_data_6(out_data[6]);
		    in_buff_cycsim0->out_data_7(out_data[7]);
		    in_buff_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_in_buff)
		case BDWRep_RTL_C:
		    in_buff_rtl0 = new in_buff_rtl( "in_buff" );

		    in_buff_rtl0->clk(clk);
		    in_buff_rtl0->rstn(rstn);
		    in_buff_rtl0->enable(enable);
		    in_buff_rtl0->in_data_0(in_data[0]);
		    in_buff_rtl0->in_data_1(in_data[1]);
		    in_buff_rtl0->in_data_2(in_data[2]);
		    in_buff_rtl0->in_data_3(in_data[3]);
		    in_buff_rtl0->in_data_4(in_data[4]);
		    in_buff_rtl0->in_data_5(in_data[5]);
		    in_buff_rtl0->in_data_6(in_data[6]);
		    in_buff_rtl0->in_data_7(in_data[7]);
		    in_buff_rtl0->in_data_8(in_data[8]);
		    in_buff_rtl0->in_data_9(in_data[9]);
		    in_buff_rtl0->in_data_10(in_data[10]);
		    in_buff_rtl0->in_data_11(in_data[11]);
		    in_buff_rtl0->in_data_12(in_data[12]);
		    in_buff_rtl0->in_data_13(in_data[13]);
		    in_buff_rtl0->in_data_14(in_data[14]);
		    in_buff_rtl0->in_data_15(in_data[15]);
		    in_buff_rtl0->in_data_16(in_data[16]);
		    in_buff_rtl0->in_data_17(in_data[17]);
		    in_buff_rtl0->in_data_18(in_data[18]);
		    in_buff_rtl0->in_data_19(in_data[19]);
		    in_buff_rtl0->in_data_20(in_data[20]);
		    in_buff_rtl0->in_data_21(in_data[21]);
		    in_buff_rtl0->in_data_22(in_data[22]);
		    in_buff_rtl0->in_data_23(in_data[23]);
		    in_buff_rtl0->in_data_24(in_data[24]);
		    in_buff_rtl0->in_data_25(in_data[25]);
		    in_buff_rtl0->in_data_26(in_data[26]);
		    in_buff_rtl0->in_data_27(in_data[27]);
		    in_buff_rtl0->in_data_28(in_data[28]);
		    in_buff_rtl0->in_data_29(in_data[29]);
		    in_buff_rtl0->in_data_30(in_data[30]);
		    in_buff_rtl0->in_data_31(in_data[31]);
		    in_buff_rtl0->in_data_valid(in_data_valid);
		    in_buff_rtl0->out_data_0(out_data[0]);
		    in_buff_rtl0->out_data_1(out_data[1]);
		    in_buff_rtl0->out_data_2(out_data[2]);
		    in_buff_rtl0->out_data_3(out_data[3]);
		    in_buff_rtl0->out_data_4(out_data[4]);
		    in_buff_rtl0->out_data_5(out_data[5]);
		    in_buff_rtl0->out_data_6(out_data[6]);
		    in_buff_rtl0->out_data_7(out_data[7]);
		    in_buff_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = in_buff_wrapper::simConfigName();
			
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
		    in_buff0 = new in_buff( "in_buff" );

		    in_buff0->clk(clk);
		    in_buff0->rstn(rstn);
		    in_buff0->enable(enable);
		    in_buff0->in_data[0](in_data[0]);
		    in_buff0->in_data[1](in_data[1]);
		    in_buff0->in_data[2](in_data[2]);
		    in_buff0->in_data[3](in_data[3]);
		    in_buff0->in_data[4](in_data[4]);
		    in_buff0->in_data[5](in_data[5]);
		    in_buff0->in_data[6](in_data[6]);
		    in_buff0->in_data[7](in_data[7]);
		    in_buff0->in_data[8](in_data[8]);
		    in_buff0->in_data[9](in_data[9]);
		    in_buff0->in_data[10](in_data[10]);
		    in_buff0->in_data[11](in_data[11]);
		    in_buff0->in_data[12](in_data[12]);
		    in_buff0->in_data[13](in_data[13]);
		    in_buff0->in_data[14](in_data[14]);
		    in_buff0->in_data[15](in_data[15]);
		    in_buff0->in_data[16](in_data[16]);
		    in_buff0->in_data[17](in_data[17]);
		    in_buff0->in_data[18](in_data[18]);
		    in_buff0->in_data[19](in_data[19]);
		    in_buff0->in_data[20](in_data[20]);
		    in_buff0->in_data[21](in_data[21]);
		    in_buff0->in_data[22](in_data[22]);
		    in_buff0->in_data[23](in_data[23]);
		    in_buff0->in_data[24](in_data[24]);
		    in_buff0->in_data[25](in_data[25]);
		    in_buff0->in_data[26](in_data[26]);
		    in_buff0->in_data[27](in_data[27]);
		    in_buff0->in_data[28](in_data[28]);
		    in_buff0->in_data[29](in_data[29]);
		    in_buff0->in_data[30](in_data[30]);
		    in_buff0->in_data[31](in_data[31]);
		    in_buff0->in_data_valid(in_data_valid);
		    in_buff0->out_data[0](out_data[0]);
		    in_buff0->out_data[1](out_data[1]);
		    in_buff0->out_data[2](out_data[2]);
		    in_buff0->out_data[3](out_data[3]);
		    in_buff0->out_data[4](out_data[4]);
		    in_buff0->out_data[5](out_data[5]);
		    in_buff0->out_data[6](out_data[6]);
		    in_buff0->out_data[7](out_data[7]);
		    in_buff0->out_data_valid(out_data_valid);


			{
			const char *simConfig = in_buff_wrapper::simConfigName();
			
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

void in_buff_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void in_buff_wrapper::start_of_simulation()
{

#include <in_buff_trace.h>

    esc_multiple_writers_warning();
}

void in_buff_wrapper::CloseTrace()
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

void in_buff_wrapper::end_of_simulation()
{
	CloseTrace();
}



void in_buff_wrapper::DeleteInstances()
{
    if (in_buff0)
    {
        delete in_buff0;
        in_buff0 = 0;
    }
    if (in_buff_cosim0)
    {
        delete in_buff_cosim0;
        in_buff_cosim0 = 0;
    }
    if (in_buff_cycsim0)
    {
        delete in_buff_cycsim0;
        in_buff_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_in_buff)
    if (in_buff_rtl0)
    {
        delete in_buff_rtl0;
        in_buff_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void in_buff_wrapper_r::thread_in_data_0()
{
   in_data[0] = in_data_0.read();
}
void in_buff_wrapper_r::thread_in_data_1()
{
   in_data[1] = in_data_1.read();
}
void in_buff_wrapper_r::thread_in_data_2()
{
   in_data[2] = in_data_2.read();
}
void in_buff_wrapper_r::thread_in_data_3()
{
   in_data[3] = in_data_3.read();
}
void in_buff_wrapper_r::thread_in_data_4()
{
   in_data[4] = in_data_4.read();
}
void in_buff_wrapper_r::thread_in_data_5()
{
   in_data[5] = in_data_5.read();
}
void in_buff_wrapper_r::thread_in_data_6()
{
   in_data[6] = in_data_6.read();
}
void in_buff_wrapper_r::thread_in_data_7()
{
   in_data[7] = in_data_7.read();
}
void in_buff_wrapper_r::thread_in_data_8()
{
   in_data[8] = in_data_8.read();
}
void in_buff_wrapper_r::thread_in_data_9()
{
   in_data[9] = in_data_9.read();
}
void in_buff_wrapper_r::thread_in_data_10()
{
   in_data[10] = in_data_10.read();
}
void in_buff_wrapper_r::thread_in_data_11()
{
   in_data[11] = in_data_11.read();
}
void in_buff_wrapper_r::thread_in_data_12()
{
   in_data[12] = in_data_12.read();
}
void in_buff_wrapper_r::thread_in_data_13()
{
   in_data[13] = in_data_13.read();
}
void in_buff_wrapper_r::thread_in_data_14()
{
   in_data[14] = in_data_14.read();
}
void in_buff_wrapper_r::thread_in_data_15()
{
   in_data[15] = in_data_15.read();
}
void in_buff_wrapper_r::thread_in_data_16()
{
   in_data[16] = in_data_16.read();
}
void in_buff_wrapper_r::thread_in_data_17()
{
   in_data[17] = in_data_17.read();
}
void in_buff_wrapper_r::thread_in_data_18()
{
   in_data[18] = in_data_18.read();
}
void in_buff_wrapper_r::thread_in_data_19()
{
   in_data[19] = in_data_19.read();
}
void in_buff_wrapper_r::thread_in_data_20()
{
   in_data[20] = in_data_20.read();
}
void in_buff_wrapper_r::thread_in_data_21()
{
   in_data[21] = in_data_21.read();
}
void in_buff_wrapper_r::thread_in_data_22()
{
   in_data[22] = in_data_22.read();
}
void in_buff_wrapper_r::thread_in_data_23()
{
   in_data[23] = in_data_23.read();
}
void in_buff_wrapper_r::thread_in_data_24()
{
   in_data[24] = in_data_24.read();
}
void in_buff_wrapper_r::thread_in_data_25()
{
   in_data[25] = in_data_25.read();
}
void in_buff_wrapper_r::thread_in_data_26()
{
   in_data[26] = in_data_26.read();
}
void in_buff_wrapper_r::thread_in_data_27()
{
   in_data[27] = in_data_27.read();
}
void in_buff_wrapper_r::thread_in_data_28()
{
   in_data[28] = in_data_28.read();
}
void in_buff_wrapper_r::thread_in_data_29()
{
   in_data[29] = in_data_29.read();
}
void in_buff_wrapper_r::thread_in_data_30()
{
   in_data[30] = in_data_30.read();
}
void in_buff_wrapper_r::thread_in_data_31()
{
   in_data[31] = in_data_31.read();
}
void in_buff_wrapper_r::thread_out_data_0()
{
   sc_int< 32 > tmp;
   tmp = out_data[0].read();
   out_data_0.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_1()
{
   sc_int< 32 > tmp;
   tmp = out_data[1].read();
   out_data_1.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_2()
{
   sc_int< 32 > tmp;
   tmp = out_data[2].read();
   out_data_2.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_3()
{
   sc_int< 32 > tmp;
   tmp = out_data[3].read();
   out_data_3.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_4()
{
   sc_int< 32 > tmp;
   tmp = out_data[4].read();
   out_data_4.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_5()
{
   sc_int< 32 > tmp;
   tmp = out_data[5].read();
   out_data_5.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_6()
{
   sc_int< 32 > tmp;
   tmp = out_data[6].read();
   out_data_6.write(tmp);
}
void in_buff_wrapper_r::thread_out_data_7()
{
   sc_int< 32 > tmp;
   tmp = out_data[7].read();
   out_data_7.write(tmp);
}


const char * in_buff_wrapper_r::simConfigName()
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

enum in_buff_wrapper_r::Representation in_buff_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "in_buff", simConfig, instName, &iresult );
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

void in_buff_wrapper_r::InitInstances()
{
    enum in_buff_wrapper_r::Representation rep =
		in_buff_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "in_buff" );
	esc_log_representation( "in_buff", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    in_buff_cosim0 = new in_buff_cosim( "in_buff" );

		    in_buff_cosim0->clk(clk);
		    in_buff_cosim0->rstn(rstn);
		    in_buff_cosim0->enable(enable);
		    in_buff_cosim0->in_data_0(in_data_0);
		    in_buff_cosim0->in_data_1(in_data_1);
		    in_buff_cosim0->in_data_2(in_data_2);
		    in_buff_cosim0->in_data_3(in_data_3);
		    in_buff_cosim0->in_data_4(in_data_4);
		    in_buff_cosim0->in_data_5(in_data_5);
		    in_buff_cosim0->in_data_6(in_data_6);
		    in_buff_cosim0->in_data_7(in_data_7);
		    in_buff_cosim0->in_data_8(in_data_8);
		    in_buff_cosim0->in_data_9(in_data_9);
		    in_buff_cosim0->in_data_10(in_data_10);
		    in_buff_cosim0->in_data_11(in_data_11);
		    in_buff_cosim0->in_data_12(in_data_12);
		    in_buff_cosim0->in_data_13(in_data_13);
		    in_buff_cosim0->in_data_14(in_data_14);
		    in_buff_cosim0->in_data_15(in_data_15);
		    in_buff_cosim0->in_data_16(in_data_16);
		    in_buff_cosim0->in_data_17(in_data_17);
		    in_buff_cosim0->in_data_18(in_data_18);
		    in_buff_cosim0->in_data_19(in_data_19);
		    in_buff_cosim0->in_data_20(in_data_20);
		    in_buff_cosim0->in_data_21(in_data_21);
		    in_buff_cosim0->in_data_22(in_data_22);
		    in_buff_cosim0->in_data_23(in_data_23);
		    in_buff_cosim0->in_data_24(in_data_24);
		    in_buff_cosim0->in_data_25(in_data_25);
		    in_buff_cosim0->in_data_26(in_data_26);
		    in_buff_cosim0->in_data_27(in_data_27);
		    in_buff_cosim0->in_data_28(in_data_28);
		    in_buff_cosim0->in_data_29(in_data_29);
		    in_buff_cosim0->in_data_30(in_data_30);
		    in_buff_cosim0->in_data_31(in_data_31);
		    in_buff_cosim0->in_data_valid(in_data_valid);
		    in_buff_cosim0->out_data_0(out_data_0);
		    in_buff_cosim0->out_data_1(out_data_1);
		    in_buff_cosim0->out_data_2(out_data_2);
		    in_buff_cosim0->out_data_3(out_data_3);
		    in_buff_cosim0->out_data_4(out_data_4);
		    in_buff_cosim0->out_data_5(out_data_5);
		    in_buff_cosim0->out_data_6(out_data_6);
		    in_buff_cosim0->out_data_7(out_data_7);
		    in_buff_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    in_buff_cosim0 = new in_buff_cosim( "in_buff" );

		    in_buff_cosim0->clk(clk);
		    in_buff_cosim0->rstn(rstn);
		    in_buff_cosim0->enable(enable);
		    in_buff_cosim0->in_data_0(in_data_0);
		    in_buff_cosim0->in_data_1(in_data_1);
		    in_buff_cosim0->in_data_2(in_data_2);
		    in_buff_cosim0->in_data_3(in_data_3);
		    in_buff_cosim0->in_data_4(in_data_4);
		    in_buff_cosim0->in_data_5(in_data_5);
		    in_buff_cosim0->in_data_6(in_data_6);
		    in_buff_cosim0->in_data_7(in_data_7);
		    in_buff_cosim0->in_data_8(in_data_8);
		    in_buff_cosim0->in_data_9(in_data_9);
		    in_buff_cosim0->in_data_10(in_data_10);
		    in_buff_cosim0->in_data_11(in_data_11);
		    in_buff_cosim0->in_data_12(in_data_12);
		    in_buff_cosim0->in_data_13(in_data_13);
		    in_buff_cosim0->in_data_14(in_data_14);
		    in_buff_cosim0->in_data_15(in_data_15);
		    in_buff_cosim0->in_data_16(in_data_16);
		    in_buff_cosim0->in_data_17(in_data_17);
		    in_buff_cosim0->in_data_18(in_data_18);
		    in_buff_cosim0->in_data_19(in_data_19);
		    in_buff_cosim0->in_data_20(in_data_20);
		    in_buff_cosim0->in_data_21(in_data_21);
		    in_buff_cosim0->in_data_22(in_data_22);
		    in_buff_cosim0->in_data_23(in_data_23);
		    in_buff_cosim0->in_data_24(in_data_24);
		    in_buff_cosim0->in_data_25(in_data_25);
		    in_buff_cosim0->in_data_26(in_data_26);
		    in_buff_cosim0->in_data_27(in_data_27);
		    in_buff_cosim0->in_data_28(in_data_28);
		    in_buff_cosim0->in_data_29(in_data_29);
		    in_buff_cosim0->in_data_30(in_data_30);
		    in_buff_cosim0->in_data_31(in_data_31);
		    in_buff_cosim0->in_data_valid(in_data_valid);
		    in_buff_cosim0->out_data_0(out_data_0);
		    in_buff_cosim0->out_data_1(out_data_1);
		    in_buff_cosim0->out_data_2(out_data_2);
		    in_buff_cosim0->out_data_3(out_data_3);
		    in_buff_cosim0->out_data_4(out_data_4);
		    in_buff_cosim0->out_data_5(out_data_5);
		    in_buff_cosim0->out_data_6(out_data_6);
		    in_buff_cosim0->out_data_7(out_data_7);
		    in_buff_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( in_buff_cycsim_factory_p )
                in_buff_cycsim0 = in_buff_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module in_buff");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"in_buff\"");

		    in_buff_cycsim0->clk(clk);
		    in_buff_cycsim0->rstn(rstn);
		    in_buff_cycsim0->enable(enable);
		    in_buff_cycsim0->in_data_0(in_data_0);
		    in_buff_cycsim0->in_data_1(in_data_1);
		    in_buff_cycsim0->in_data_2(in_data_2);
		    in_buff_cycsim0->in_data_3(in_data_3);
		    in_buff_cycsim0->in_data_4(in_data_4);
		    in_buff_cycsim0->in_data_5(in_data_5);
		    in_buff_cycsim0->in_data_6(in_data_6);
		    in_buff_cycsim0->in_data_7(in_data_7);
		    in_buff_cycsim0->in_data_8(in_data_8);
		    in_buff_cycsim0->in_data_9(in_data_9);
		    in_buff_cycsim0->in_data_10(in_data_10);
		    in_buff_cycsim0->in_data_11(in_data_11);
		    in_buff_cycsim0->in_data_12(in_data_12);
		    in_buff_cycsim0->in_data_13(in_data_13);
		    in_buff_cycsim0->in_data_14(in_data_14);
		    in_buff_cycsim0->in_data_15(in_data_15);
		    in_buff_cycsim0->in_data_16(in_data_16);
		    in_buff_cycsim0->in_data_17(in_data_17);
		    in_buff_cycsim0->in_data_18(in_data_18);
		    in_buff_cycsim0->in_data_19(in_data_19);
		    in_buff_cycsim0->in_data_20(in_data_20);
		    in_buff_cycsim0->in_data_21(in_data_21);
		    in_buff_cycsim0->in_data_22(in_data_22);
		    in_buff_cycsim0->in_data_23(in_data_23);
		    in_buff_cycsim0->in_data_24(in_data_24);
		    in_buff_cycsim0->in_data_25(in_data_25);
		    in_buff_cycsim0->in_data_26(in_data_26);
		    in_buff_cycsim0->in_data_27(in_data_27);
		    in_buff_cycsim0->in_data_28(in_data_28);
		    in_buff_cycsim0->in_data_29(in_data_29);
		    in_buff_cycsim0->in_data_30(in_data_30);
		    in_buff_cycsim0->in_data_31(in_data_31);
		    in_buff_cycsim0->in_data_valid(in_data_valid);
		    in_buff_cycsim0->out_data_0(out_data_0);
		    in_buff_cycsim0->out_data_1(out_data_1);
		    in_buff_cycsim0->out_data_2(out_data_2);
		    in_buff_cycsim0->out_data_3(out_data_3);
		    in_buff_cycsim0->out_data_4(out_data_4);
		    in_buff_cycsim0->out_data_5(out_data_5);
		    in_buff_cycsim0->out_data_6(out_data_6);
		    in_buff_cycsim0->out_data_7(out_data_7);
		    in_buff_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_in_buff)
		case BDWRep_RTL_C:
		    in_buff_rtl0 = new in_buff_rtl( "in_buff" );

		    in_buff_rtl0->clk(clk);
		    in_buff_rtl0->rstn(rstn);
		    in_buff_rtl0->enable(enable);
		    in_buff_rtl0->in_data_0(in_data_0);
		    in_buff_rtl0->in_data_1(in_data_1);
		    in_buff_rtl0->in_data_2(in_data_2);
		    in_buff_rtl0->in_data_3(in_data_3);
		    in_buff_rtl0->in_data_4(in_data_4);
		    in_buff_rtl0->in_data_5(in_data_5);
		    in_buff_rtl0->in_data_6(in_data_6);
		    in_buff_rtl0->in_data_7(in_data_7);
		    in_buff_rtl0->in_data_8(in_data_8);
		    in_buff_rtl0->in_data_9(in_data_9);
		    in_buff_rtl0->in_data_10(in_data_10);
		    in_buff_rtl0->in_data_11(in_data_11);
		    in_buff_rtl0->in_data_12(in_data_12);
		    in_buff_rtl0->in_data_13(in_data_13);
		    in_buff_rtl0->in_data_14(in_data_14);
		    in_buff_rtl0->in_data_15(in_data_15);
		    in_buff_rtl0->in_data_16(in_data_16);
		    in_buff_rtl0->in_data_17(in_data_17);
		    in_buff_rtl0->in_data_18(in_data_18);
		    in_buff_rtl0->in_data_19(in_data_19);
		    in_buff_rtl0->in_data_20(in_data_20);
		    in_buff_rtl0->in_data_21(in_data_21);
		    in_buff_rtl0->in_data_22(in_data_22);
		    in_buff_rtl0->in_data_23(in_data_23);
		    in_buff_rtl0->in_data_24(in_data_24);
		    in_buff_rtl0->in_data_25(in_data_25);
		    in_buff_rtl0->in_data_26(in_data_26);
		    in_buff_rtl0->in_data_27(in_data_27);
		    in_buff_rtl0->in_data_28(in_data_28);
		    in_buff_rtl0->in_data_29(in_data_29);
		    in_buff_rtl0->in_data_30(in_data_30);
		    in_buff_rtl0->in_data_31(in_data_31);
		    in_buff_rtl0->in_data_valid(in_data_valid);
		    in_buff_rtl0->out_data_0(out_data_0);
		    in_buff_rtl0->out_data_1(out_data_1);
		    in_buff_rtl0->out_data_2(out_data_2);
		    in_buff_rtl0->out_data_3(out_data_3);
		    in_buff_rtl0->out_data_4(out_data_4);
		    in_buff_rtl0->out_data_5(out_data_5);
		    in_buff_rtl0->out_data_6(out_data_6);
		    in_buff_rtl0->out_data_7(out_data_7);
		    in_buff_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = in_buff_wrapper::simConfigName();
			
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
		    in_buff0 = new in_buff( "in_buff" );

		    in_buff0->clk(clk);
		    in_buff0->rstn(rstn);
		    in_buff0->enable(enable);
		    in_buff0->in_data[0](in_data[0]);
		    in_buff0->in_data[1](in_data[1]);
		    in_buff0->in_data[2](in_data[2]);
		    in_buff0->in_data[3](in_data[3]);
		    in_buff0->in_data[4](in_data[4]);
		    in_buff0->in_data[5](in_data[5]);
		    in_buff0->in_data[6](in_data[6]);
		    in_buff0->in_data[7](in_data[7]);
		    in_buff0->in_data[8](in_data[8]);
		    in_buff0->in_data[9](in_data[9]);
		    in_buff0->in_data[10](in_data[10]);
		    in_buff0->in_data[11](in_data[11]);
		    in_buff0->in_data[12](in_data[12]);
		    in_buff0->in_data[13](in_data[13]);
		    in_buff0->in_data[14](in_data[14]);
		    in_buff0->in_data[15](in_data[15]);
		    in_buff0->in_data[16](in_data[16]);
		    in_buff0->in_data[17](in_data[17]);
		    in_buff0->in_data[18](in_data[18]);
		    in_buff0->in_data[19](in_data[19]);
		    in_buff0->in_data[20](in_data[20]);
		    in_buff0->in_data[21](in_data[21]);
		    in_buff0->in_data[22](in_data[22]);
		    in_buff0->in_data[23](in_data[23]);
		    in_buff0->in_data[24](in_data[24]);
		    in_buff0->in_data[25](in_data[25]);
		    in_buff0->in_data[26](in_data[26]);
		    in_buff0->in_data[27](in_data[27]);
		    in_buff0->in_data[28](in_data[28]);
		    in_buff0->in_data[29](in_data[29]);
		    in_buff0->in_data[30](in_data[30]);
		    in_buff0->in_data[31](in_data[31]);
		    in_buff0->in_data_valid(in_data_valid);
		    in_buff0->out_data[0](out_data[0]);
		    in_buff0->out_data[1](out_data[1]);
		    in_buff0->out_data[2](out_data[2]);
		    in_buff0->out_data[3](out_data[3]);
		    in_buff0->out_data[4](out_data[4]);
		    in_buff0->out_data[5](out_data[5]);
		    in_buff0->out_data[6](out_data[6]);
		    in_buff0->out_data[7](out_data[7]);
		    in_buff0->out_data_valid(out_data_valid);


			{
			const char *simConfig = in_buff_wrapper::simConfigName();
			
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

void in_buff_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_in_data_0);
		  sensitive << in_data_0;
		SC_METHOD(thread_in_data_1);
		  sensitive << in_data_1;
		SC_METHOD(thread_in_data_2);
		  sensitive << in_data_2;
		SC_METHOD(thread_in_data_3);
		  sensitive << in_data_3;
		SC_METHOD(thread_in_data_4);
		  sensitive << in_data_4;
		SC_METHOD(thread_in_data_5);
		  sensitive << in_data_5;
		SC_METHOD(thread_in_data_6);
		  sensitive << in_data_6;
		SC_METHOD(thread_in_data_7);
		  sensitive << in_data_7;
		SC_METHOD(thread_in_data_8);
		  sensitive << in_data_8;
		SC_METHOD(thread_in_data_9);
		  sensitive << in_data_9;
		SC_METHOD(thread_in_data_10);
		  sensitive << in_data_10;
		SC_METHOD(thread_in_data_11);
		  sensitive << in_data_11;
		SC_METHOD(thread_in_data_12);
		  sensitive << in_data_12;
		SC_METHOD(thread_in_data_13);
		  sensitive << in_data_13;
		SC_METHOD(thread_in_data_14);
		  sensitive << in_data_14;
		SC_METHOD(thread_in_data_15);
		  sensitive << in_data_15;
		SC_METHOD(thread_in_data_16);
		  sensitive << in_data_16;
		SC_METHOD(thread_in_data_17);
		  sensitive << in_data_17;
		SC_METHOD(thread_in_data_18);
		  sensitive << in_data_18;
		SC_METHOD(thread_in_data_19);
		  sensitive << in_data_19;
		SC_METHOD(thread_in_data_20);
		  sensitive << in_data_20;
		SC_METHOD(thread_in_data_21);
		  sensitive << in_data_21;
		SC_METHOD(thread_in_data_22);
		  sensitive << in_data_22;
		SC_METHOD(thread_in_data_23);
		  sensitive << in_data_23;
		SC_METHOD(thread_in_data_24);
		  sensitive << in_data_24;
		SC_METHOD(thread_in_data_25);
		  sensitive << in_data_25;
		SC_METHOD(thread_in_data_26);
		  sensitive << in_data_26;
		SC_METHOD(thread_in_data_27);
		  sensitive << in_data_27;
		SC_METHOD(thread_in_data_28);
		  sensitive << in_data_28;
		SC_METHOD(thread_in_data_29);
		  sensitive << in_data_29;
		SC_METHOD(thread_in_data_30);
		  sensitive << in_data_30;
		SC_METHOD(thread_in_data_31);
		  sensitive << in_data_31;
		SC_METHOD(thread_out_data_0);
		  sensitive << out_data[0];
		SC_METHOD(thread_out_data_1);
		  sensitive << out_data[1];
		SC_METHOD(thread_out_data_2);
		  sensitive << out_data[2];
		SC_METHOD(thread_out_data_3);
		  sensitive << out_data[3];
		SC_METHOD(thread_out_data_4);
		  sensitive << out_data[4];
		SC_METHOD(thread_out_data_5);
		  sensitive << out_data[5];
		SC_METHOD(thread_out_data_6);
		  sensitive << out_data[6];
		SC_METHOD(thread_out_data_7);
		  sensitive << out_data[7];

	}
}

void in_buff_wrapper_r::start_of_simulation()
{

#include <in_buff_trace.h>

    esc_multiple_writers_warning();
}

void in_buff_wrapper_r::CloseTrace()
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

void in_buff_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void in_buff_wrapper_r::DeleteInstances()
{
    if (in_buff0)
    {
        delete in_buff0;
        in_buff0 = 0;
    }
    if (in_buff_cosim0)
    {
        delete in_buff_cosim0;
        in_buff_cosim0 = 0;
    }
    if (in_buff_cycsim0)
    {
        delete in_buff_cycsim0;
        in_buff_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_in_buff)
    if (in_buff_rtl0)
    {
        delete in_buff_rtl0;
        in_buff_rtl0 = 0;
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

class in_buff_wrapper_fsdb_opener {
public:
	in_buff_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static in_buff_wrapper_fsdb_opener
  in_buff_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"in_buff.cpp"

#define		in_buff_INTERNAL


#include	"in_buff_wrap.h"

const char * in_buff_wrapper::simConfigName()
{
  return "";
}

enum in_buff_wrapper::Representation in_buff_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void in_buff_wrapper::InitInstances( sc_core::sc_module_name  )
{
	in_buff0 = new in_buff( "in_buff" );

	in_buff0->clk(clk);
	in_buff0->rstn(rstn);
	in_buff0->enable(enable);
	in_buff0->in_data[0](in_data[0]);
	in_buff0->in_data[1](in_data[1]);
	in_buff0->in_data[2](in_data[2]);
	in_buff0->in_data[3](in_data[3]);
	in_buff0->in_data[4](in_data[4]);
	in_buff0->in_data[5](in_data[5]);
	in_buff0->in_data[6](in_data[6]);
	in_buff0->in_data[7](in_data[7]);
	in_buff0->in_data[8](in_data[8]);
	in_buff0->in_data[9](in_data[9]);
	in_buff0->in_data[10](in_data[10]);
	in_buff0->in_data[11](in_data[11]);
	in_buff0->in_data[12](in_data[12]);
	in_buff0->in_data[13](in_data[13]);
	in_buff0->in_data[14](in_data[14]);
	in_buff0->in_data[15](in_data[15]);
	in_buff0->in_data[16](in_data[16]);
	in_buff0->in_data[17](in_data[17]);
	in_buff0->in_data[18](in_data[18]);
	in_buff0->in_data[19](in_data[19]);
	in_buff0->in_data[20](in_data[20]);
	in_buff0->in_data[21](in_data[21]);
	in_buff0->in_data[22](in_data[22]);
	in_buff0->in_data[23](in_data[23]);
	in_buff0->in_data[24](in_data[24]);
	in_buff0->in_data[25](in_data[25]);
	in_buff0->in_data[26](in_data[26]);
	in_buff0->in_data[27](in_data[27]);
	in_buff0->in_data[28](in_data[28]);
	in_buff0->in_data[29](in_data[29]);
	in_buff0->in_data[30](in_data[30]);
	in_buff0->in_data[31](in_data[31]);
	in_buff0->in_data_valid(in_data_valid);
	in_buff0->out_data[0](out_data[0]);
	in_buff0->out_data[1](out_data[1]);
	in_buff0->out_data[2](out_data[2]);
	in_buff0->out_data[3](out_data[3]);
	in_buff0->out_data[4](out_data[4]);
	in_buff0->out_data[5](out_data[5]);
	in_buff0->out_data[6](out_data[6]);
	in_buff0->out_data[7](out_data[7]);
	in_buff0->out_data_valid(out_data_valid);

}

void in_buff_wrapper::InitThreads()
{
}

void in_buff_wrapper::CloseTrace()
{
}

void in_buff_wrapper::DeleteInstances()
{
    if (in_buff0)
    {
        delete in_buff0;
        in_buff0 = 0;
    }
}

void in_buff_wrapper::start_of_simulation()
{
}

void in_buff_wrapper::end_of_simulation()
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

class in_buff_wrapper_fsdb_opener {
public:
	in_buff_wrapper_fsdb_opener() {
	}
};

static in_buff_wrapper_fsdb_opener
  in_buff_wrapper_fsdb_opener_inst;

#endif

#endif
