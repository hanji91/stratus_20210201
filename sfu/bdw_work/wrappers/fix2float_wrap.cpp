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
* block called "fix2float". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"fix2float_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_fix2float)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef fix2float
#define fix2float fix2float_rtl
#	include	"fix2float_rtl.cpp"
#undef fix2float


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"fix2float_coware.h"
#else
#include	"fix2float_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "fix2float_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"fix2float.cpp"


#define		fix2float_INTERNAL


#include	"fix2float_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
fix2float_cycsim* (*fix2float_cycsim_factory_p)() = 0;

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

const char * fix2float_wrapper::simConfigName()
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

enum fix2float_wrapper::Representation fix2float_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "fix2float", simConfig, instName, &iresult );
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
								 "fix2float", simConfig, instName, leaf,  "fix2float" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void fix2float_wrapper::InitInstances(  )
{
    enum fix2float_wrapper::Representation rep =
		fix2float_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "fix2float" );
	esc_log_representation( "fix2float", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    fix2float_cosim0 = new fix2float_cosim( "fix2float" );

		    fix2float_cosim0->clk(clk);
		    fix2float_cosim0->rstn(rstn);
		    fix2float_cosim0->enable(enable);
		    fix2float_cosim0->fraction_len(fraction_len);
		    fix2float_cosim0->src_valid(src_valid);
		    fix2float_cosim0->src(src);
		    fix2float_cosim0->dst_valid(dst_valid);
		    fix2float_cosim0->dst(dst);

			break;
		case BDWRep_RTL_HDL:
		    fix2float_cosim0 = new fix2float_cosim( "fix2float" );

		    fix2float_cosim0->clk(clk);
		    fix2float_cosim0->rstn(rstn);
		    fix2float_cosim0->enable(enable);
		    fix2float_cosim0->fraction_len(fraction_len);
		    fix2float_cosim0->src_valid(src_valid);
		    fix2float_cosim0->src(src);
		    fix2float_cosim0->dst_valid(dst_valid);
		    fix2float_cosim0->dst(dst);

			break;
        case BDWRep_CYC_HDL:
            if ( fix2float_cycsim_factory_p )
                fix2float_cycsim0 = fix2float_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module fix2float");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"fix2float\"");

		    fix2float_cycsim0->clk(clk);
		    fix2float_cycsim0->rstn(rstn);
		    fix2float_cycsim0->enable(enable);
		    fix2float_cycsim0->fraction_len(fraction_len);
		    fix2float_cycsim0->src_valid(src_valid);
		    fix2float_cycsim0->src(src);
		    fix2float_cycsim0->dst_valid(dst_valid);
		    fix2float_cycsim0->dst(dst);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_fix2float)
		case BDWRep_RTL_C:
		    fix2float_rtl0 = new fix2float_rtl( "fix2float" );

		    fix2float_rtl0->clk(clk);
		    fix2float_rtl0->rstn(rstn);
		    fix2float_rtl0->enable(enable);
		    fix2float_rtl0->fraction_len(fraction_len);
		    fix2float_rtl0->src_valid(src_valid);
		    fix2float_rtl0->src(src);
		    fix2float_rtl0->dst_valid(dst_valid);
		    fix2float_rtl0->dst(dst);


			{
			const char *simConfig = fix2float_wrapper::simConfigName();
			
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
		    fix2float0 = new fix2float( "fix2float" );

		    fix2float0->clk(clk);
		    fix2float0->rstn(rstn);
		    fix2float0->enable(enable);
		    fix2float0->fraction_len(fraction_len);
		    fix2float0->src_valid(src_valid);
		    fix2float0->src(src);
		    fix2float0->dst_valid(dst_valid);
		    fix2float0->dst(dst);


			{
			const char *simConfig = fix2float_wrapper::simConfigName();
			
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

void fix2float_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void fix2float_wrapper::start_of_simulation()
{

#include <fix2float_trace.h>

    esc_multiple_writers_warning();
}

void fix2float_wrapper::CloseTrace()
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

void fix2float_wrapper::end_of_simulation()
{
	CloseTrace();
}



void fix2float_wrapper::DeleteInstances()
{
    if (fix2float0)
    {
        delete fix2float0;
        fix2float0 = 0;
    }
    if (fix2float_cosim0)
    {
        delete fix2float_cosim0;
        fix2float_cosim0 = 0;
    }
    if (fix2float_cycsim0)
    {
        delete fix2float_cycsim0;
        fix2float_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_fix2float)
    if (fix2float_rtl0)
    {
        delete fix2float_rtl0;
        fix2float_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports

const char * fix2float_wrapper_r::simConfigName()
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

enum fix2float_wrapper_r::Representation fix2float_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "fix2float", simConfig, instName, &iresult );
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

void fix2float_wrapper_r::InitInstances()
{
    enum fix2float_wrapper_r::Representation rep =
		fix2float_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "fix2float" );
	esc_log_representation( "fix2float", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    fix2float_cosim0 = new fix2float_cosim( "fix2float" );

		    fix2float_cosim0->clk(clk);
		    fix2float_cosim0->rstn(rstn);
		    fix2float_cosim0->enable(enable);
		    fix2float_cosim0->fraction_len(fraction_len);
		    fix2float_cosim0->src_valid(src_valid);
		    fix2float_cosim0->src(src);
		    fix2float_cosim0->dst_valid(dst_valid);
		    fix2float_cosim0->dst(dst);

			break;
		case BDWRep_RTL_HDL:
		    fix2float_cosim0 = new fix2float_cosim( "fix2float" );

		    fix2float_cosim0->clk(clk);
		    fix2float_cosim0->rstn(rstn);
		    fix2float_cosim0->enable(enable);
		    fix2float_cosim0->fraction_len(fraction_len);
		    fix2float_cosim0->src_valid(src_valid);
		    fix2float_cosim0->src(src);
		    fix2float_cosim0->dst_valid(dst_valid);
		    fix2float_cosim0->dst(dst);

			break;
        case BDWRep_CYC_HDL:
            if ( fix2float_cycsim_factory_p )
                fix2float_cycsim0 = fix2float_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module fix2float");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"fix2float\"");

		    fix2float_cycsim0->clk(clk);
		    fix2float_cycsim0->rstn(rstn);
		    fix2float_cycsim0->enable(enable);
		    fix2float_cycsim0->fraction_len(fraction_len);
		    fix2float_cycsim0->src_valid(src_valid);
		    fix2float_cycsim0->src(src);
		    fix2float_cycsim0->dst_valid(dst_valid);
		    fix2float_cycsim0->dst(dst);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_fix2float)
		case BDWRep_RTL_C:
		    fix2float_rtl0 = new fix2float_rtl( "fix2float" );

		    fix2float_rtl0->clk(clk);
		    fix2float_rtl0->rstn(rstn);
		    fix2float_rtl0->enable(enable);
		    fix2float_rtl0->fraction_len(fraction_len);
		    fix2float_rtl0->src_valid(src_valid);
		    fix2float_rtl0->src(src);
		    fix2float_rtl0->dst_valid(dst_valid);
		    fix2float_rtl0->dst(dst);


			{
			const char *simConfig = fix2float_wrapper::simConfigName();
			
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
		    fix2float0 = new fix2float( "fix2float" );

		    fix2float0->clk(clk);
		    fix2float0->rstn(rstn);
		    fix2float0->enable(enable);
		    fix2float0->fraction_len(fraction_len);
		    fix2float0->src_valid(src_valid);
		    fix2float0->src(src);
		    fix2float0->dst_valid(dst_valid);
		    fix2float0->dst(dst);


			{
			const char *simConfig = fix2float_wrapper::simConfigName();
			
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

void fix2float_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		
	}
}

void fix2float_wrapper_r::start_of_simulation()
{

#include <fix2float_trace.h>

    esc_multiple_writers_warning();
}

void fix2float_wrapper_r::CloseTrace()
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

void fix2float_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void fix2float_wrapper_r::DeleteInstances()
{
    if (fix2float0)
    {
        delete fix2float0;
        fix2float0 = 0;
    }
    if (fix2float_cosim0)
    {
        delete fix2float_cosim0;
        fix2float_cosim0 = 0;
    }
    if (fix2float_cycsim0)
    {
        delete fix2float_cycsim0;
        fix2float_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_fix2float)
    if (fix2float_rtl0)
    {
        delete fix2float_rtl0;
        fix2float_rtl0 = 0;
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

class fix2float_wrapper_fsdb_opener {
public:
	fix2float_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static fix2float_wrapper_fsdb_opener
  fix2float_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"fix2float.cpp"

#define		fix2float_INTERNAL


#include	"fix2float_wrap.h"

const char * fix2float_wrapper::simConfigName()
{
  return "";
}

enum fix2float_wrapper::Representation fix2float_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void fix2float_wrapper::InitInstances( sc_core::sc_module_name  )
{
	fix2float0 = new fix2float( "fix2float" );

	fix2float0->clk(clk);
	fix2float0->rstn(rstn);
	fix2float0->enable(enable);
	fix2float0->fraction_len(fraction_len);
	fix2float0->src_valid(src_valid);
	fix2float0->src(src);
	fix2float0->dst_valid(dst_valid);
	fix2float0->dst(dst);

}

void fix2float_wrapper::InitThreads()
{
}

void fix2float_wrapper::CloseTrace()
{
}

void fix2float_wrapper::DeleteInstances()
{
    if (fix2float0)
    {
        delete fix2float0;
        fix2float0 = 0;
    }
}

void fix2float_wrapper::start_of_simulation()
{
}

void fix2float_wrapper::end_of_simulation()
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

class fix2float_wrapper_fsdb_opener {
public:
	fix2float_wrapper_fsdb_opener() {
	}
};

static fix2float_wrapper_fsdb_opener
  fix2float_wrapper_fsdb_opener_inst;

#endif

#endif
