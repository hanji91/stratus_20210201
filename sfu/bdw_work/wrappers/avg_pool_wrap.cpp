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
* block called "avg_pool". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"avg_pool_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_avg_pool)

#define BDW_AUTO_KNOWN 1 


#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef avg_pool
#define avg_pool avg_pool_rtl
#	include	"avg_pool_rtl.cpp"
#undef avg_pool


#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"avg_pool_coware.h"
#else
#include	"avg_pool_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "avg_pool_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"avg_pool.cpp"


#define		avg_pool_INTERNAL


#include	"avg_pool_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
avg_pool_cycsim* (*avg_pool_cycsim_factory_p)() = 0;

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

const char * avg_pool_wrapper::simConfigName()
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

enum avg_pool_wrapper::Representation avg_pool_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "avg_pool", simConfig, instName, &iresult );
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
								 "avg_pool", simConfig, instName, leaf,  "avg_pool" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void avg_pool_wrapper::InitInstances(  )
{
    enum avg_pool_wrapper::Representation rep =
		avg_pool_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "avg_pool" );
	esc_log_representation( "avg_pool", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    avg_pool_cosim0 = new avg_pool_cosim( "avg_pool" );

		    avg_pool_cosim0->clk(clk);
		    avg_pool_cosim0->rstn(rstn);
		    avg_pool_cosim0->enable(enable);
		    avg_pool_cosim0->init(init);
		    avg_pool_cosim0->in_data_0(in_data[0]);
		    avg_pool_cosim0->in_data_1(in_data[1]);
		    avg_pool_cosim0->in_data_2(in_data[2]);
		    avg_pool_cosim0->in_data_3(in_data[3]);
		    avg_pool_cosim0->in_data_4(in_data[4]);
		    avg_pool_cosim0->in_data_5(in_data[5]);
		    avg_pool_cosim0->in_data_6(in_data[6]);
		    avg_pool_cosim0->in_data_7(in_data[7]);
		    avg_pool_cosim0->in_data_8(in_data[8]);
		    avg_pool_cosim0->in_data_9(in_data[9]);
		    avg_pool_cosim0->in_data_10(in_data[10]);
		    avg_pool_cosim0->in_data_11(in_data[11]);
		    avg_pool_cosim0->in_data_12(in_data[12]);
		    avg_pool_cosim0->in_data_13(in_data[13]);
		    avg_pool_cosim0->in_data_14(in_data[14]);
		    avg_pool_cosim0->in_data_15(in_data[15]);
		    avg_pool_cosim0->in_data_16(in_data[16]);
		    avg_pool_cosim0->in_data_17(in_data[17]);
		    avg_pool_cosim0->in_data_18(in_data[18]);
		    avg_pool_cosim0->in_data_19(in_data[19]);
		    avg_pool_cosim0->in_data_20(in_data[20]);
		    avg_pool_cosim0->in_data_21(in_data[21]);
		    avg_pool_cosim0->in_data_22(in_data[22]);
		    avg_pool_cosim0->in_data_23(in_data[23]);
		    avg_pool_cosim0->in_data_24(in_data[24]);
		    avg_pool_cosim0->in_data_25(in_data[25]);
		    avg_pool_cosim0->in_data_26(in_data[26]);
		    avg_pool_cosim0->in_data_27(in_data[27]);
		    avg_pool_cosim0->in_data_28(in_data[28]);
		    avg_pool_cosim0->in_data_29(in_data[29]);
		    avg_pool_cosim0->in_data_30(in_data[30]);
		    avg_pool_cosim0->in_data_31(in_data[31]);
		    avg_pool_cosim0->in_data_valid(in_data_valid);
		    avg_pool_cosim0->out_data_0(out_data[0]);
		    avg_pool_cosim0->out_data_1(out_data[1]);
		    avg_pool_cosim0->out_data_2(out_data[2]);
		    avg_pool_cosim0->out_data_3(out_data[3]);
		    avg_pool_cosim0->out_data_4(out_data[4]);
		    avg_pool_cosim0->out_data_5(out_data[5]);
		    avg_pool_cosim0->out_data_6(out_data[6]);
		    avg_pool_cosim0->out_data_7(out_data[7]);
		    avg_pool_cosim0->out_data_8(out_data[8]);
		    avg_pool_cosim0->out_data_9(out_data[9]);
		    avg_pool_cosim0->out_data_10(out_data[10]);
		    avg_pool_cosim0->out_data_11(out_data[11]);
		    avg_pool_cosim0->out_data_12(out_data[12]);
		    avg_pool_cosim0->out_data_13(out_data[13]);
		    avg_pool_cosim0->out_data_14(out_data[14]);
		    avg_pool_cosim0->out_data_15(out_data[15]);
		    avg_pool_cosim0->out_data_16(out_data[16]);
		    avg_pool_cosim0->out_data_17(out_data[17]);
		    avg_pool_cosim0->out_data_18(out_data[18]);
		    avg_pool_cosim0->out_data_19(out_data[19]);
		    avg_pool_cosim0->out_data_20(out_data[20]);
		    avg_pool_cosim0->out_data_21(out_data[21]);
		    avg_pool_cosim0->out_data_22(out_data[22]);
		    avg_pool_cosim0->out_data_23(out_data[23]);
		    avg_pool_cosim0->out_data_24(out_data[24]);
		    avg_pool_cosim0->out_data_25(out_data[25]);
		    avg_pool_cosim0->out_data_26(out_data[26]);
		    avg_pool_cosim0->out_data_27(out_data[27]);
		    avg_pool_cosim0->out_data_28(out_data[28]);
		    avg_pool_cosim0->out_data_29(out_data[29]);
		    avg_pool_cosim0->out_data_30(out_data[30]);
		    avg_pool_cosim0->out_data_31(out_data[31]);
		    avg_pool_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    avg_pool_cosim0 = new avg_pool_cosim( "avg_pool" );

		    avg_pool_cosim0->clk(clk);
		    avg_pool_cosim0->rstn(rstn);
		    avg_pool_cosim0->enable(enable);
		    avg_pool_cosim0->init(init);
		    avg_pool_cosim0->in_data_0(in_data[0]);
		    avg_pool_cosim0->in_data_1(in_data[1]);
		    avg_pool_cosim0->in_data_2(in_data[2]);
		    avg_pool_cosim0->in_data_3(in_data[3]);
		    avg_pool_cosim0->in_data_4(in_data[4]);
		    avg_pool_cosim0->in_data_5(in_data[5]);
		    avg_pool_cosim0->in_data_6(in_data[6]);
		    avg_pool_cosim0->in_data_7(in_data[7]);
		    avg_pool_cosim0->in_data_8(in_data[8]);
		    avg_pool_cosim0->in_data_9(in_data[9]);
		    avg_pool_cosim0->in_data_10(in_data[10]);
		    avg_pool_cosim0->in_data_11(in_data[11]);
		    avg_pool_cosim0->in_data_12(in_data[12]);
		    avg_pool_cosim0->in_data_13(in_data[13]);
		    avg_pool_cosim0->in_data_14(in_data[14]);
		    avg_pool_cosim0->in_data_15(in_data[15]);
		    avg_pool_cosim0->in_data_16(in_data[16]);
		    avg_pool_cosim0->in_data_17(in_data[17]);
		    avg_pool_cosim0->in_data_18(in_data[18]);
		    avg_pool_cosim0->in_data_19(in_data[19]);
		    avg_pool_cosim0->in_data_20(in_data[20]);
		    avg_pool_cosim0->in_data_21(in_data[21]);
		    avg_pool_cosim0->in_data_22(in_data[22]);
		    avg_pool_cosim0->in_data_23(in_data[23]);
		    avg_pool_cosim0->in_data_24(in_data[24]);
		    avg_pool_cosim0->in_data_25(in_data[25]);
		    avg_pool_cosim0->in_data_26(in_data[26]);
		    avg_pool_cosim0->in_data_27(in_data[27]);
		    avg_pool_cosim0->in_data_28(in_data[28]);
		    avg_pool_cosim0->in_data_29(in_data[29]);
		    avg_pool_cosim0->in_data_30(in_data[30]);
		    avg_pool_cosim0->in_data_31(in_data[31]);
		    avg_pool_cosim0->in_data_valid(in_data_valid);
		    avg_pool_cosim0->out_data_0(out_data[0]);
		    avg_pool_cosim0->out_data_1(out_data[1]);
		    avg_pool_cosim0->out_data_2(out_data[2]);
		    avg_pool_cosim0->out_data_3(out_data[3]);
		    avg_pool_cosim0->out_data_4(out_data[4]);
		    avg_pool_cosim0->out_data_5(out_data[5]);
		    avg_pool_cosim0->out_data_6(out_data[6]);
		    avg_pool_cosim0->out_data_7(out_data[7]);
		    avg_pool_cosim0->out_data_8(out_data[8]);
		    avg_pool_cosim0->out_data_9(out_data[9]);
		    avg_pool_cosim0->out_data_10(out_data[10]);
		    avg_pool_cosim0->out_data_11(out_data[11]);
		    avg_pool_cosim0->out_data_12(out_data[12]);
		    avg_pool_cosim0->out_data_13(out_data[13]);
		    avg_pool_cosim0->out_data_14(out_data[14]);
		    avg_pool_cosim0->out_data_15(out_data[15]);
		    avg_pool_cosim0->out_data_16(out_data[16]);
		    avg_pool_cosim0->out_data_17(out_data[17]);
		    avg_pool_cosim0->out_data_18(out_data[18]);
		    avg_pool_cosim0->out_data_19(out_data[19]);
		    avg_pool_cosim0->out_data_20(out_data[20]);
		    avg_pool_cosim0->out_data_21(out_data[21]);
		    avg_pool_cosim0->out_data_22(out_data[22]);
		    avg_pool_cosim0->out_data_23(out_data[23]);
		    avg_pool_cosim0->out_data_24(out_data[24]);
		    avg_pool_cosim0->out_data_25(out_data[25]);
		    avg_pool_cosim0->out_data_26(out_data[26]);
		    avg_pool_cosim0->out_data_27(out_data[27]);
		    avg_pool_cosim0->out_data_28(out_data[28]);
		    avg_pool_cosim0->out_data_29(out_data[29]);
		    avg_pool_cosim0->out_data_30(out_data[30]);
		    avg_pool_cosim0->out_data_31(out_data[31]);
		    avg_pool_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( avg_pool_cycsim_factory_p )
                avg_pool_cycsim0 = avg_pool_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module avg_pool");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"avg_pool\"");

		    avg_pool_cycsim0->clk(clk);
		    avg_pool_cycsim0->rstn(rstn);
		    avg_pool_cycsim0->enable(enable);
		    avg_pool_cycsim0->init(init);
		    avg_pool_cycsim0->in_data_0(in_data[0]);
		    avg_pool_cycsim0->in_data_1(in_data[1]);
		    avg_pool_cycsim0->in_data_2(in_data[2]);
		    avg_pool_cycsim0->in_data_3(in_data[3]);
		    avg_pool_cycsim0->in_data_4(in_data[4]);
		    avg_pool_cycsim0->in_data_5(in_data[5]);
		    avg_pool_cycsim0->in_data_6(in_data[6]);
		    avg_pool_cycsim0->in_data_7(in_data[7]);
		    avg_pool_cycsim0->in_data_8(in_data[8]);
		    avg_pool_cycsim0->in_data_9(in_data[9]);
		    avg_pool_cycsim0->in_data_10(in_data[10]);
		    avg_pool_cycsim0->in_data_11(in_data[11]);
		    avg_pool_cycsim0->in_data_12(in_data[12]);
		    avg_pool_cycsim0->in_data_13(in_data[13]);
		    avg_pool_cycsim0->in_data_14(in_data[14]);
		    avg_pool_cycsim0->in_data_15(in_data[15]);
		    avg_pool_cycsim0->in_data_16(in_data[16]);
		    avg_pool_cycsim0->in_data_17(in_data[17]);
		    avg_pool_cycsim0->in_data_18(in_data[18]);
		    avg_pool_cycsim0->in_data_19(in_data[19]);
		    avg_pool_cycsim0->in_data_20(in_data[20]);
		    avg_pool_cycsim0->in_data_21(in_data[21]);
		    avg_pool_cycsim0->in_data_22(in_data[22]);
		    avg_pool_cycsim0->in_data_23(in_data[23]);
		    avg_pool_cycsim0->in_data_24(in_data[24]);
		    avg_pool_cycsim0->in_data_25(in_data[25]);
		    avg_pool_cycsim0->in_data_26(in_data[26]);
		    avg_pool_cycsim0->in_data_27(in_data[27]);
		    avg_pool_cycsim0->in_data_28(in_data[28]);
		    avg_pool_cycsim0->in_data_29(in_data[29]);
		    avg_pool_cycsim0->in_data_30(in_data[30]);
		    avg_pool_cycsim0->in_data_31(in_data[31]);
		    avg_pool_cycsim0->in_data_valid(in_data_valid);
		    avg_pool_cycsim0->out_data_0(out_data[0]);
		    avg_pool_cycsim0->out_data_1(out_data[1]);
		    avg_pool_cycsim0->out_data_2(out_data[2]);
		    avg_pool_cycsim0->out_data_3(out_data[3]);
		    avg_pool_cycsim0->out_data_4(out_data[4]);
		    avg_pool_cycsim0->out_data_5(out_data[5]);
		    avg_pool_cycsim0->out_data_6(out_data[6]);
		    avg_pool_cycsim0->out_data_7(out_data[7]);
		    avg_pool_cycsim0->out_data_8(out_data[8]);
		    avg_pool_cycsim0->out_data_9(out_data[9]);
		    avg_pool_cycsim0->out_data_10(out_data[10]);
		    avg_pool_cycsim0->out_data_11(out_data[11]);
		    avg_pool_cycsim0->out_data_12(out_data[12]);
		    avg_pool_cycsim0->out_data_13(out_data[13]);
		    avg_pool_cycsim0->out_data_14(out_data[14]);
		    avg_pool_cycsim0->out_data_15(out_data[15]);
		    avg_pool_cycsim0->out_data_16(out_data[16]);
		    avg_pool_cycsim0->out_data_17(out_data[17]);
		    avg_pool_cycsim0->out_data_18(out_data[18]);
		    avg_pool_cycsim0->out_data_19(out_data[19]);
		    avg_pool_cycsim0->out_data_20(out_data[20]);
		    avg_pool_cycsim0->out_data_21(out_data[21]);
		    avg_pool_cycsim0->out_data_22(out_data[22]);
		    avg_pool_cycsim0->out_data_23(out_data[23]);
		    avg_pool_cycsim0->out_data_24(out_data[24]);
		    avg_pool_cycsim0->out_data_25(out_data[25]);
		    avg_pool_cycsim0->out_data_26(out_data[26]);
		    avg_pool_cycsim0->out_data_27(out_data[27]);
		    avg_pool_cycsim0->out_data_28(out_data[28]);
		    avg_pool_cycsim0->out_data_29(out_data[29]);
		    avg_pool_cycsim0->out_data_30(out_data[30]);
		    avg_pool_cycsim0->out_data_31(out_data[31]);
		    avg_pool_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_avg_pool)
		case BDWRep_RTL_C:
		    avg_pool_rtl0 = new avg_pool_rtl( "avg_pool" );

		    avg_pool_rtl0->clk(clk);
		    avg_pool_rtl0->rstn(rstn);
		    avg_pool_rtl0->enable(enable);
		    avg_pool_rtl0->init(init);
		    avg_pool_rtl0->in_data_0(in_data[0]);
		    avg_pool_rtl0->in_data_1(in_data[1]);
		    avg_pool_rtl0->in_data_2(in_data[2]);
		    avg_pool_rtl0->in_data_3(in_data[3]);
		    avg_pool_rtl0->in_data_4(in_data[4]);
		    avg_pool_rtl0->in_data_5(in_data[5]);
		    avg_pool_rtl0->in_data_6(in_data[6]);
		    avg_pool_rtl0->in_data_7(in_data[7]);
		    avg_pool_rtl0->in_data_8(in_data[8]);
		    avg_pool_rtl0->in_data_9(in_data[9]);
		    avg_pool_rtl0->in_data_10(in_data[10]);
		    avg_pool_rtl0->in_data_11(in_data[11]);
		    avg_pool_rtl0->in_data_12(in_data[12]);
		    avg_pool_rtl0->in_data_13(in_data[13]);
		    avg_pool_rtl0->in_data_14(in_data[14]);
		    avg_pool_rtl0->in_data_15(in_data[15]);
		    avg_pool_rtl0->in_data_16(in_data[16]);
		    avg_pool_rtl0->in_data_17(in_data[17]);
		    avg_pool_rtl0->in_data_18(in_data[18]);
		    avg_pool_rtl0->in_data_19(in_data[19]);
		    avg_pool_rtl0->in_data_20(in_data[20]);
		    avg_pool_rtl0->in_data_21(in_data[21]);
		    avg_pool_rtl0->in_data_22(in_data[22]);
		    avg_pool_rtl0->in_data_23(in_data[23]);
		    avg_pool_rtl0->in_data_24(in_data[24]);
		    avg_pool_rtl0->in_data_25(in_data[25]);
		    avg_pool_rtl0->in_data_26(in_data[26]);
		    avg_pool_rtl0->in_data_27(in_data[27]);
		    avg_pool_rtl0->in_data_28(in_data[28]);
		    avg_pool_rtl0->in_data_29(in_data[29]);
		    avg_pool_rtl0->in_data_30(in_data[30]);
		    avg_pool_rtl0->in_data_31(in_data[31]);
		    avg_pool_rtl0->in_data_valid(in_data_valid);
		    avg_pool_rtl0->out_data_0(out_data[0]);
		    avg_pool_rtl0->out_data_1(out_data[1]);
		    avg_pool_rtl0->out_data_2(out_data[2]);
		    avg_pool_rtl0->out_data_3(out_data[3]);
		    avg_pool_rtl0->out_data_4(out_data[4]);
		    avg_pool_rtl0->out_data_5(out_data[5]);
		    avg_pool_rtl0->out_data_6(out_data[6]);
		    avg_pool_rtl0->out_data_7(out_data[7]);
		    avg_pool_rtl0->out_data_8(out_data[8]);
		    avg_pool_rtl0->out_data_9(out_data[9]);
		    avg_pool_rtl0->out_data_10(out_data[10]);
		    avg_pool_rtl0->out_data_11(out_data[11]);
		    avg_pool_rtl0->out_data_12(out_data[12]);
		    avg_pool_rtl0->out_data_13(out_data[13]);
		    avg_pool_rtl0->out_data_14(out_data[14]);
		    avg_pool_rtl0->out_data_15(out_data[15]);
		    avg_pool_rtl0->out_data_16(out_data[16]);
		    avg_pool_rtl0->out_data_17(out_data[17]);
		    avg_pool_rtl0->out_data_18(out_data[18]);
		    avg_pool_rtl0->out_data_19(out_data[19]);
		    avg_pool_rtl0->out_data_20(out_data[20]);
		    avg_pool_rtl0->out_data_21(out_data[21]);
		    avg_pool_rtl0->out_data_22(out_data[22]);
		    avg_pool_rtl0->out_data_23(out_data[23]);
		    avg_pool_rtl0->out_data_24(out_data[24]);
		    avg_pool_rtl0->out_data_25(out_data[25]);
		    avg_pool_rtl0->out_data_26(out_data[26]);
		    avg_pool_rtl0->out_data_27(out_data[27]);
		    avg_pool_rtl0->out_data_28(out_data[28]);
		    avg_pool_rtl0->out_data_29(out_data[29]);
		    avg_pool_rtl0->out_data_30(out_data[30]);
		    avg_pool_rtl0->out_data_31(out_data[31]);
		    avg_pool_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = avg_pool_wrapper::simConfigName();
			
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
		    avg_pool0 = new avg_pool( "avg_pool" );

		    avg_pool0->clk(clk);
		    avg_pool0->rstn(rstn);
		    avg_pool0->enable(enable);
		    avg_pool0->init(init);
		    avg_pool0->in_data[0](in_data[0]);
		    avg_pool0->in_data[1](in_data[1]);
		    avg_pool0->in_data[2](in_data[2]);
		    avg_pool0->in_data[3](in_data[3]);
		    avg_pool0->in_data[4](in_data[4]);
		    avg_pool0->in_data[5](in_data[5]);
		    avg_pool0->in_data[6](in_data[6]);
		    avg_pool0->in_data[7](in_data[7]);
		    avg_pool0->in_data[8](in_data[8]);
		    avg_pool0->in_data[9](in_data[9]);
		    avg_pool0->in_data[10](in_data[10]);
		    avg_pool0->in_data[11](in_data[11]);
		    avg_pool0->in_data[12](in_data[12]);
		    avg_pool0->in_data[13](in_data[13]);
		    avg_pool0->in_data[14](in_data[14]);
		    avg_pool0->in_data[15](in_data[15]);
		    avg_pool0->in_data[16](in_data[16]);
		    avg_pool0->in_data[17](in_data[17]);
		    avg_pool0->in_data[18](in_data[18]);
		    avg_pool0->in_data[19](in_data[19]);
		    avg_pool0->in_data[20](in_data[20]);
		    avg_pool0->in_data[21](in_data[21]);
		    avg_pool0->in_data[22](in_data[22]);
		    avg_pool0->in_data[23](in_data[23]);
		    avg_pool0->in_data[24](in_data[24]);
		    avg_pool0->in_data[25](in_data[25]);
		    avg_pool0->in_data[26](in_data[26]);
		    avg_pool0->in_data[27](in_data[27]);
		    avg_pool0->in_data[28](in_data[28]);
		    avg_pool0->in_data[29](in_data[29]);
		    avg_pool0->in_data[30](in_data[30]);
		    avg_pool0->in_data[31](in_data[31]);
		    avg_pool0->in_data_valid(in_data_valid);
		    avg_pool0->out_data[0](out_data[0]);
		    avg_pool0->out_data[1](out_data[1]);
		    avg_pool0->out_data[2](out_data[2]);
		    avg_pool0->out_data[3](out_data[3]);
		    avg_pool0->out_data[4](out_data[4]);
		    avg_pool0->out_data[5](out_data[5]);
		    avg_pool0->out_data[6](out_data[6]);
		    avg_pool0->out_data[7](out_data[7]);
		    avg_pool0->out_data[8](out_data[8]);
		    avg_pool0->out_data[9](out_data[9]);
		    avg_pool0->out_data[10](out_data[10]);
		    avg_pool0->out_data[11](out_data[11]);
		    avg_pool0->out_data[12](out_data[12]);
		    avg_pool0->out_data[13](out_data[13]);
		    avg_pool0->out_data[14](out_data[14]);
		    avg_pool0->out_data[15](out_data[15]);
		    avg_pool0->out_data[16](out_data[16]);
		    avg_pool0->out_data[17](out_data[17]);
		    avg_pool0->out_data[18](out_data[18]);
		    avg_pool0->out_data[19](out_data[19]);
		    avg_pool0->out_data[20](out_data[20]);
		    avg_pool0->out_data[21](out_data[21]);
		    avg_pool0->out_data[22](out_data[22]);
		    avg_pool0->out_data[23](out_data[23]);
		    avg_pool0->out_data[24](out_data[24]);
		    avg_pool0->out_data[25](out_data[25]);
		    avg_pool0->out_data[26](out_data[26]);
		    avg_pool0->out_data[27](out_data[27]);
		    avg_pool0->out_data[28](out_data[28]);
		    avg_pool0->out_data[29](out_data[29]);
		    avg_pool0->out_data[30](out_data[30]);
		    avg_pool0->out_data[31](out_data[31]);
		    avg_pool0->out_data_valid(out_data_valid);


			{
			const char *simConfig = avg_pool_wrapper::simConfigName();
			
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

void avg_pool_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void avg_pool_wrapper::start_of_simulation()
{

#include <avg_pool_trace.h>

    esc_multiple_writers_warning();
}

void avg_pool_wrapper::CloseTrace()
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

void avg_pool_wrapper::end_of_simulation()
{
	CloseTrace();
}



void avg_pool_wrapper::DeleteInstances()
{
    if (avg_pool0)
    {
        delete avg_pool0;
        avg_pool0 = 0;
    }
    if (avg_pool_cosim0)
    {
        delete avg_pool_cosim0;
        avg_pool_cosim0 = 0;
    }
    if (avg_pool_cycsim0)
    {
        delete avg_pool_cycsim0;
        avg_pool_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_avg_pool)
    if (avg_pool_rtl0)
    {
        delete avg_pool_rtl0;
        avg_pool_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void avg_pool_wrapper_r::thread_in_data_0()
{
   in_data[0] = in_data_0.read();
}
void avg_pool_wrapper_r::thread_in_data_1()
{
   in_data[1] = in_data_1.read();
}
void avg_pool_wrapper_r::thread_in_data_2()
{
   in_data[2] = in_data_2.read();
}
void avg_pool_wrapper_r::thread_in_data_3()
{
   in_data[3] = in_data_3.read();
}
void avg_pool_wrapper_r::thread_in_data_4()
{
   in_data[4] = in_data_4.read();
}
void avg_pool_wrapper_r::thread_in_data_5()
{
   in_data[5] = in_data_5.read();
}
void avg_pool_wrapper_r::thread_in_data_6()
{
   in_data[6] = in_data_6.read();
}
void avg_pool_wrapper_r::thread_in_data_7()
{
   in_data[7] = in_data_7.read();
}
void avg_pool_wrapper_r::thread_in_data_8()
{
   in_data[8] = in_data_8.read();
}
void avg_pool_wrapper_r::thread_in_data_9()
{
   in_data[9] = in_data_9.read();
}
void avg_pool_wrapper_r::thread_in_data_10()
{
   in_data[10] = in_data_10.read();
}
void avg_pool_wrapper_r::thread_in_data_11()
{
   in_data[11] = in_data_11.read();
}
void avg_pool_wrapper_r::thread_in_data_12()
{
   in_data[12] = in_data_12.read();
}
void avg_pool_wrapper_r::thread_in_data_13()
{
   in_data[13] = in_data_13.read();
}
void avg_pool_wrapper_r::thread_in_data_14()
{
   in_data[14] = in_data_14.read();
}
void avg_pool_wrapper_r::thread_in_data_15()
{
   in_data[15] = in_data_15.read();
}
void avg_pool_wrapper_r::thread_in_data_16()
{
   in_data[16] = in_data_16.read();
}
void avg_pool_wrapper_r::thread_in_data_17()
{
   in_data[17] = in_data_17.read();
}
void avg_pool_wrapper_r::thread_in_data_18()
{
   in_data[18] = in_data_18.read();
}
void avg_pool_wrapper_r::thread_in_data_19()
{
   in_data[19] = in_data_19.read();
}
void avg_pool_wrapper_r::thread_in_data_20()
{
   in_data[20] = in_data_20.read();
}
void avg_pool_wrapper_r::thread_in_data_21()
{
   in_data[21] = in_data_21.read();
}
void avg_pool_wrapper_r::thread_in_data_22()
{
   in_data[22] = in_data_22.read();
}
void avg_pool_wrapper_r::thread_in_data_23()
{
   in_data[23] = in_data_23.read();
}
void avg_pool_wrapper_r::thread_in_data_24()
{
   in_data[24] = in_data_24.read();
}
void avg_pool_wrapper_r::thread_in_data_25()
{
   in_data[25] = in_data_25.read();
}
void avg_pool_wrapper_r::thread_in_data_26()
{
   in_data[26] = in_data_26.read();
}
void avg_pool_wrapper_r::thread_in_data_27()
{
   in_data[27] = in_data_27.read();
}
void avg_pool_wrapper_r::thread_in_data_28()
{
   in_data[28] = in_data_28.read();
}
void avg_pool_wrapper_r::thread_in_data_29()
{
   in_data[29] = in_data_29.read();
}
void avg_pool_wrapper_r::thread_in_data_30()
{
   in_data[30] = in_data_30.read();
}
void avg_pool_wrapper_r::thread_in_data_31()
{
   in_data[31] = in_data_31.read();
}
void avg_pool_wrapper_r::thread_out_data_0()
{
   sc_int< 32 > tmp;
   tmp = out_data[0].read();
   out_data_0.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_1()
{
   sc_int< 32 > tmp;
   tmp = out_data[1].read();
   out_data_1.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_2()
{
   sc_int< 32 > tmp;
   tmp = out_data[2].read();
   out_data_2.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_3()
{
   sc_int< 32 > tmp;
   tmp = out_data[3].read();
   out_data_3.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_4()
{
   sc_int< 32 > tmp;
   tmp = out_data[4].read();
   out_data_4.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_5()
{
   sc_int< 32 > tmp;
   tmp = out_data[5].read();
   out_data_5.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_6()
{
   sc_int< 32 > tmp;
   tmp = out_data[6].read();
   out_data_6.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_7()
{
   sc_int< 32 > tmp;
   tmp = out_data[7].read();
   out_data_7.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_8()
{
   sc_int< 32 > tmp;
   tmp = out_data[8].read();
   out_data_8.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_9()
{
   sc_int< 32 > tmp;
   tmp = out_data[9].read();
   out_data_9.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_10()
{
   sc_int< 32 > tmp;
   tmp = out_data[10].read();
   out_data_10.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_11()
{
   sc_int< 32 > tmp;
   tmp = out_data[11].read();
   out_data_11.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_12()
{
   sc_int< 32 > tmp;
   tmp = out_data[12].read();
   out_data_12.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_13()
{
   sc_int< 32 > tmp;
   tmp = out_data[13].read();
   out_data_13.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_14()
{
   sc_int< 32 > tmp;
   tmp = out_data[14].read();
   out_data_14.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_15()
{
   sc_int< 32 > tmp;
   tmp = out_data[15].read();
   out_data_15.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_16()
{
   sc_int< 32 > tmp;
   tmp = out_data[16].read();
   out_data_16.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_17()
{
   sc_int< 32 > tmp;
   tmp = out_data[17].read();
   out_data_17.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_18()
{
   sc_int< 32 > tmp;
   tmp = out_data[18].read();
   out_data_18.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_19()
{
   sc_int< 32 > tmp;
   tmp = out_data[19].read();
   out_data_19.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_20()
{
   sc_int< 32 > tmp;
   tmp = out_data[20].read();
   out_data_20.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_21()
{
   sc_int< 32 > tmp;
   tmp = out_data[21].read();
   out_data_21.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_22()
{
   sc_int< 32 > tmp;
   tmp = out_data[22].read();
   out_data_22.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_23()
{
   sc_int< 32 > tmp;
   tmp = out_data[23].read();
   out_data_23.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_24()
{
   sc_int< 32 > tmp;
   tmp = out_data[24].read();
   out_data_24.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_25()
{
   sc_int< 32 > tmp;
   tmp = out_data[25].read();
   out_data_25.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_26()
{
   sc_int< 32 > tmp;
   tmp = out_data[26].read();
   out_data_26.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_27()
{
   sc_int< 32 > tmp;
   tmp = out_data[27].read();
   out_data_27.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_28()
{
   sc_int< 32 > tmp;
   tmp = out_data[28].read();
   out_data_28.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_29()
{
   sc_int< 32 > tmp;
   tmp = out_data[29].read();
   out_data_29.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_30()
{
   sc_int< 32 > tmp;
   tmp = out_data[30].read();
   out_data_30.write(tmp);
}
void avg_pool_wrapper_r::thread_out_data_31()
{
   sc_int< 32 > tmp;
   tmp = out_data[31].read();
   out_data_31.write(tmp);
}


const char * avg_pool_wrapper_r::simConfigName()
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

enum avg_pool_wrapper_r::Representation avg_pool_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "avg_pool", simConfig, instName, &iresult );
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

void avg_pool_wrapper_r::InitInstances()
{
    enum avg_pool_wrapper_r::Representation rep =
		avg_pool_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "avg_pool" );
	esc_log_representation( "avg_pool", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    avg_pool_cosim0 = new avg_pool_cosim( "avg_pool" );

		    avg_pool_cosim0->clk(clk);
		    avg_pool_cosim0->rstn(rstn);
		    avg_pool_cosim0->enable(enable);
		    avg_pool_cosim0->init(init);
		    avg_pool_cosim0->in_data_0(in_data_0);
		    avg_pool_cosim0->in_data_1(in_data_1);
		    avg_pool_cosim0->in_data_2(in_data_2);
		    avg_pool_cosim0->in_data_3(in_data_3);
		    avg_pool_cosim0->in_data_4(in_data_4);
		    avg_pool_cosim0->in_data_5(in_data_5);
		    avg_pool_cosim0->in_data_6(in_data_6);
		    avg_pool_cosim0->in_data_7(in_data_7);
		    avg_pool_cosim0->in_data_8(in_data_8);
		    avg_pool_cosim0->in_data_9(in_data_9);
		    avg_pool_cosim0->in_data_10(in_data_10);
		    avg_pool_cosim0->in_data_11(in_data_11);
		    avg_pool_cosim0->in_data_12(in_data_12);
		    avg_pool_cosim0->in_data_13(in_data_13);
		    avg_pool_cosim0->in_data_14(in_data_14);
		    avg_pool_cosim0->in_data_15(in_data_15);
		    avg_pool_cosim0->in_data_16(in_data_16);
		    avg_pool_cosim0->in_data_17(in_data_17);
		    avg_pool_cosim0->in_data_18(in_data_18);
		    avg_pool_cosim0->in_data_19(in_data_19);
		    avg_pool_cosim0->in_data_20(in_data_20);
		    avg_pool_cosim0->in_data_21(in_data_21);
		    avg_pool_cosim0->in_data_22(in_data_22);
		    avg_pool_cosim0->in_data_23(in_data_23);
		    avg_pool_cosim0->in_data_24(in_data_24);
		    avg_pool_cosim0->in_data_25(in_data_25);
		    avg_pool_cosim0->in_data_26(in_data_26);
		    avg_pool_cosim0->in_data_27(in_data_27);
		    avg_pool_cosim0->in_data_28(in_data_28);
		    avg_pool_cosim0->in_data_29(in_data_29);
		    avg_pool_cosim0->in_data_30(in_data_30);
		    avg_pool_cosim0->in_data_31(in_data_31);
		    avg_pool_cosim0->in_data_valid(in_data_valid);
		    avg_pool_cosim0->out_data_0(out_data_0);
		    avg_pool_cosim0->out_data_1(out_data_1);
		    avg_pool_cosim0->out_data_2(out_data_2);
		    avg_pool_cosim0->out_data_3(out_data_3);
		    avg_pool_cosim0->out_data_4(out_data_4);
		    avg_pool_cosim0->out_data_5(out_data_5);
		    avg_pool_cosim0->out_data_6(out_data_6);
		    avg_pool_cosim0->out_data_7(out_data_7);
		    avg_pool_cosim0->out_data_8(out_data_8);
		    avg_pool_cosim0->out_data_9(out_data_9);
		    avg_pool_cosim0->out_data_10(out_data_10);
		    avg_pool_cosim0->out_data_11(out_data_11);
		    avg_pool_cosim0->out_data_12(out_data_12);
		    avg_pool_cosim0->out_data_13(out_data_13);
		    avg_pool_cosim0->out_data_14(out_data_14);
		    avg_pool_cosim0->out_data_15(out_data_15);
		    avg_pool_cosim0->out_data_16(out_data_16);
		    avg_pool_cosim0->out_data_17(out_data_17);
		    avg_pool_cosim0->out_data_18(out_data_18);
		    avg_pool_cosim0->out_data_19(out_data_19);
		    avg_pool_cosim0->out_data_20(out_data_20);
		    avg_pool_cosim0->out_data_21(out_data_21);
		    avg_pool_cosim0->out_data_22(out_data_22);
		    avg_pool_cosim0->out_data_23(out_data_23);
		    avg_pool_cosim0->out_data_24(out_data_24);
		    avg_pool_cosim0->out_data_25(out_data_25);
		    avg_pool_cosim0->out_data_26(out_data_26);
		    avg_pool_cosim0->out_data_27(out_data_27);
		    avg_pool_cosim0->out_data_28(out_data_28);
		    avg_pool_cosim0->out_data_29(out_data_29);
		    avg_pool_cosim0->out_data_30(out_data_30);
		    avg_pool_cosim0->out_data_31(out_data_31);
		    avg_pool_cosim0->out_data_valid(out_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    avg_pool_cosim0 = new avg_pool_cosim( "avg_pool" );

		    avg_pool_cosim0->clk(clk);
		    avg_pool_cosim0->rstn(rstn);
		    avg_pool_cosim0->enable(enable);
		    avg_pool_cosim0->init(init);
		    avg_pool_cosim0->in_data_0(in_data_0);
		    avg_pool_cosim0->in_data_1(in_data_1);
		    avg_pool_cosim0->in_data_2(in_data_2);
		    avg_pool_cosim0->in_data_3(in_data_3);
		    avg_pool_cosim0->in_data_4(in_data_4);
		    avg_pool_cosim0->in_data_5(in_data_5);
		    avg_pool_cosim0->in_data_6(in_data_6);
		    avg_pool_cosim0->in_data_7(in_data_7);
		    avg_pool_cosim0->in_data_8(in_data_8);
		    avg_pool_cosim0->in_data_9(in_data_9);
		    avg_pool_cosim0->in_data_10(in_data_10);
		    avg_pool_cosim0->in_data_11(in_data_11);
		    avg_pool_cosim0->in_data_12(in_data_12);
		    avg_pool_cosim0->in_data_13(in_data_13);
		    avg_pool_cosim0->in_data_14(in_data_14);
		    avg_pool_cosim0->in_data_15(in_data_15);
		    avg_pool_cosim0->in_data_16(in_data_16);
		    avg_pool_cosim0->in_data_17(in_data_17);
		    avg_pool_cosim0->in_data_18(in_data_18);
		    avg_pool_cosim0->in_data_19(in_data_19);
		    avg_pool_cosim0->in_data_20(in_data_20);
		    avg_pool_cosim0->in_data_21(in_data_21);
		    avg_pool_cosim0->in_data_22(in_data_22);
		    avg_pool_cosim0->in_data_23(in_data_23);
		    avg_pool_cosim0->in_data_24(in_data_24);
		    avg_pool_cosim0->in_data_25(in_data_25);
		    avg_pool_cosim0->in_data_26(in_data_26);
		    avg_pool_cosim0->in_data_27(in_data_27);
		    avg_pool_cosim0->in_data_28(in_data_28);
		    avg_pool_cosim0->in_data_29(in_data_29);
		    avg_pool_cosim0->in_data_30(in_data_30);
		    avg_pool_cosim0->in_data_31(in_data_31);
		    avg_pool_cosim0->in_data_valid(in_data_valid);
		    avg_pool_cosim0->out_data_0(out_data_0);
		    avg_pool_cosim0->out_data_1(out_data_1);
		    avg_pool_cosim0->out_data_2(out_data_2);
		    avg_pool_cosim0->out_data_3(out_data_3);
		    avg_pool_cosim0->out_data_4(out_data_4);
		    avg_pool_cosim0->out_data_5(out_data_5);
		    avg_pool_cosim0->out_data_6(out_data_6);
		    avg_pool_cosim0->out_data_7(out_data_7);
		    avg_pool_cosim0->out_data_8(out_data_8);
		    avg_pool_cosim0->out_data_9(out_data_9);
		    avg_pool_cosim0->out_data_10(out_data_10);
		    avg_pool_cosim0->out_data_11(out_data_11);
		    avg_pool_cosim0->out_data_12(out_data_12);
		    avg_pool_cosim0->out_data_13(out_data_13);
		    avg_pool_cosim0->out_data_14(out_data_14);
		    avg_pool_cosim0->out_data_15(out_data_15);
		    avg_pool_cosim0->out_data_16(out_data_16);
		    avg_pool_cosim0->out_data_17(out_data_17);
		    avg_pool_cosim0->out_data_18(out_data_18);
		    avg_pool_cosim0->out_data_19(out_data_19);
		    avg_pool_cosim0->out_data_20(out_data_20);
		    avg_pool_cosim0->out_data_21(out_data_21);
		    avg_pool_cosim0->out_data_22(out_data_22);
		    avg_pool_cosim0->out_data_23(out_data_23);
		    avg_pool_cosim0->out_data_24(out_data_24);
		    avg_pool_cosim0->out_data_25(out_data_25);
		    avg_pool_cosim0->out_data_26(out_data_26);
		    avg_pool_cosim0->out_data_27(out_data_27);
		    avg_pool_cosim0->out_data_28(out_data_28);
		    avg_pool_cosim0->out_data_29(out_data_29);
		    avg_pool_cosim0->out_data_30(out_data_30);
		    avg_pool_cosim0->out_data_31(out_data_31);
		    avg_pool_cosim0->out_data_valid(out_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( avg_pool_cycsim_factory_p )
                avg_pool_cycsim0 = avg_pool_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module avg_pool");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"avg_pool\"");

		    avg_pool_cycsim0->clk(clk);
		    avg_pool_cycsim0->rstn(rstn);
		    avg_pool_cycsim0->enable(enable);
		    avg_pool_cycsim0->init(init);
		    avg_pool_cycsim0->in_data_0(in_data_0);
		    avg_pool_cycsim0->in_data_1(in_data_1);
		    avg_pool_cycsim0->in_data_2(in_data_2);
		    avg_pool_cycsim0->in_data_3(in_data_3);
		    avg_pool_cycsim0->in_data_4(in_data_4);
		    avg_pool_cycsim0->in_data_5(in_data_5);
		    avg_pool_cycsim0->in_data_6(in_data_6);
		    avg_pool_cycsim0->in_data_7(in_data_7);
		    avg_pool_cycsim0->in_data_8(in_data_8);
		    avg_pool_cycsim0->in_data_9(in_data_9);
		    avg_pool_cycsim0->in_data_10(in_data_10);
		    avg_pool_cycsim0->in_data_11(in_data_11);
		    avg_pool_cycsim0->in_data_12(in_data_12);
		    avg_pool_cycsim0->in_data_13(in_data_13);
		    avg_pool_cycsim0->in_data_14(in_data_14);
		    avg_pool_cycsim0->in_data_15(in_data_15);
		    avg_pool_cycsim0->in_data_16(in_data_16);
		    avg_pool_cycsim0->in_data_17(in_data_17);
		    avg_pool_cycsim0->in_data_18(in_data_18);
		    avg_pool_cycsim0->in_data_19(in_data_19);
		    avg_pool_cycsim0->in_data_20(in_data_20);
		    avg_pool_cycsim0->in_data_21(in_data_21);
		    avg_pool_cycsim0->in_data_22(in_data_22);
		    avg_pool_cycsim0->in_data_23(in_data_23);
		    avg_pool_cycsim0->in_data_24(in_data_24);
		    avg_pool_cycsim0->in_data_25(in_data_25);
		    avg_pool_cycsim0->in_data_26(in_data_26);
		    avg_pool_cycsim0->in_data_27(in_data_27);
		    avg_pool_cycsim0->in_data_28(in_data_28);
		    avg_pool_cycsim0->in_data_29(in_data_29);
		    avg_pool_cycsim0->in_data_30(in_data_30);
		    avg_pool_cycsim0->in_data_31(in_data_31);
		    avg_pool_cycsim0->in_data_valid(in_data_valid);
		    avg_pool_cycsim0->out_data_0(out_data_0);
		    avg_pool_cycsim0->out_data_1(out_data_1);
		    avg_pool_cycsim0->out_data_2(out_data_2);
		    avg_pool_cycsim0->out_data_3(out_data_3);
		    avg_pool_cycsim0->out_data_4(out_data_4);
		    avg_pool_cycsim0->out_data_5(out_data_5);
		    avg_pool_cycsim0->out_data_6(out_data_6);
		    avg_pool_cycsim0->out_data_7(out_data_7);
		    avg_pool_cycsim0->out_data_8(out_data_8);
		    avg_pool_cycsim0->out_data_9(out_data_9);
		    avg_pool_cycsim0->out_data_10(out_data_10);
		    avg_pool_cycsim0->out_data_11(out_data_11);
		    avg_pool_cycsim0->out_data_12(out_data_12);
		    avg_pool_cycsim0->out_data_13(out_data_13);
		    avg_pool_cycsim0->out_data_14(out_data_14);
		    avg_pool_cycsim0->out_data_15(out_data_15);
		    avg_pool_cycsim0->out_data_16(out_data_16);
		    avg_pool_cycsim0->out_data_17(out_data_17);
		    avg_pool_cycsim0->out_data_18(out_data_18);
		    avg_pool_cycsim0->out_data_19(out_data_19);
		    avg_pool_cycsim0->out_data_20(out_data_20);
		    avg_pool_cycsim0->out_data_21(out_data_21);
		    avg_pool_cycsim0->out_data_22(out_data_22);
		    avg_pool_cycsim0->out_data_23(out_data_23);
		    avg_pool_cycsim0->out_data_24(out_data_24);
		    avg_pool_cycsim0->out_data_25(out_data_25);
		    avg_pool_cycsim0->out_data_26(out_data_26);
		    avg_pool_cycsim0->out_data_27(out_data_27);
		    avg_pool_cycsim0->out_data_28(out_data_28);
		    avg_pool_cycsim0->out_data_29(out_data_29);
		    avg_pool_cycsim0->out_data_30(out_data_30);
		    avg_pool_cycsim0->out_data_31(out_data_31);
		    avg_pool_cycsim0->out_data_valid(out_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_avg_pool)
		case BDWRep_RTL_C:
		    avg_pool_rtl0 = new avg_pool_rtl( "avg_pool" );

		    avg_pool_rtl0->clk(clk);
		    avg_pool_rtl0->rstn(rstn);
		    avg_pool_rtl0->enable(enable);
		    avg_pool_rtl0->init(init);
		    avg_pool_rtl0->in_data_0(in_data_0);
		    avg_pool_rtl0->in_data_1(in_data_1);
		    avg_pool_rtl0->in_data_2(in_data_2);
		    avg_pool_rtl0->in_data_3(in_data_3);
		    avg_pool_rtl0->in_data_4(in_data_4);
		    avg_pool_rtl0->in_data_5(in_data_5);
		    avg_pool_rtl0->in_data_6(in_data_6);
		    avg_pool_rtl0->in_data_7(in_data_7);
		    avg_pool_rtl0->in_data_8(in_data_8);
		    avg_pool_rtl0->in_data_9(in_data_9);
		    avg_pool_rtl0->in_data_10(in_data_10);
		    avg_pool_rtl0->in_data_11(in_data_11);
		    avg_pool_rtl0->in_data_12(in_data_12);
		    avg_pool_rtl0->in_data_13(in_data_13);
		    avg_pool_rtl0->in_data_14(in_data_14);
		    avg_pool_rtl0->in_data_15(in_data_15);
		    avg_pool_rtl0->in_data_16(in_data_16);
		    avg_pool_rtl0->in_data_17(in_data_17);
		    avg_pool_rtl0->in_data_18(in_data_18);
		    avg_pool_rtl0->in_data_19(in_data_19);
		    avg_pool_rtl0->in_data_20(in_data_20);
		    avg_pool_rtl0->in_data_21(in_data_21);
		    avg_pool_rtl0->in_data_22(in_data_22);
		    avg_pool_rtl0->in_data_23(in_data_23);
		    avg_pool_rtl0->in_data_24(in_data_24);
		    avg_pool_rtl0->in_data_25(in_data_25);
		    avg_pool_rtl0->in_data_26(in_data_26);
		    avg_pool_rtl0->in_data_27(in_data_27);
		    avg_pool_rtl0->in_data_28(in_data_28);
		    avg_pool_rtl0->in_data_29(in_data_29);
		    avg_pool_rtl0->in_data_30(in_data_30);
		    avg_pool_rtl0->in_data_31(in_data_31);
		    avg_pool_rtl0->in_data_valid(in_data_valid);
		    avg_pool_rtl0->out_data_0(out_data_0);
		    avg_pool_rtl0->out_data_1(out_data_1);
		    avg_pool_rtl0->out_data_2(out_data_2);
		    avg_pool_rtl0->out_data_3(out_data_3);
		    avg_pool_rtl0->out_data_4(out_data_4);
		    avg_pool_rtl0->out_data_5(out_data_5);
		    avg_pool_rtl0->out_data_6(out_data_6);
		    avg_pool_rtl0->out_data_7(out_data_7);
		    avg_pool_rtl0->out_data_8(out_data_8);
		    avg_pool_rtl0->out_data_9(out_data_9);
		    avg_pool_rtl0->out_data_10(out_data_10);
		    avg_pool_rtl0->out_data_11(out_data_11);
		    avg_pool_rtl0->out_data_12(out_data_12);
		    avg_pool_rtl0->out_data_13(out_data_13);
		    avg_pool_rtl0->out_data_14(out_data_14);
		    avg_pool_rtl0->out_data_15(out_data_15);
		    avg_pool_rtl0->out_data_16(out_data_16);
		    avg_pool_rtl0->out_data_17(out_data_17);
		    avg_pool_rtl0->out_data_18(out_data_18);
		    avg_pool_rtl0->out_data_19(out_data_19);
		    avg_pool_rtl0->out_data_20(out_data_20);
		    avg_pool_rtl0->out_data_21(out_data_21);
		    avg_pool_rtl0->out_data_22(out_data_22);
		    avg_pool_rtl0->out_data_23(out_data_23);
		    avg_pool_rtl0->out_data_24(out_data_24);
		    avg_pool_rtl0->out_data_25(out_data_25);
		    avg_pool_rtl0->out_data_26(out_data_26);
		    avg_pool_rtl0->out_data_27(out_data_27);
		    avg_pool_rtl0->out_data_28(out_data_28);
		    avg_pool_rtl0->out_data_29(out_data_29);
		    avg_pool_rtl0->out_data_30(out_data_30);
		    avg_pool_rtl0->out_data_31(out_data_31);
		    avg_pool_rtl0->out_data_valid(out_data_valid);


			{
			const char *simConfig = avg_pool_wrapper::simConfigName();
			
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
		    avg_pool0 = new avg_pool( "avg_pool" );

		    avg_pool0->clk(clk);
		    avg_pool0->rstn(rstn);
		    avg_pool0->enable(enable);
		    avg_pool0->init(init);
		    avg_pool0->in_data[0](in_data[0]);
		    avg_pool0->in_data[1](in_data[1]);
		    avg_pool0->in_data[2](in_data[2]);
		    avg_pool0->in_data[3](in_data[3]);
		    avg_pool0->in_data[4](in_data[4]);
		    avg_pool0->in_data[5](in_data[5]);
		    avg_pool0->in_data[6](in_data[6]);
		    avg_pool0->in_data[7](in_data[7]);
		    avg_pool0->in_data[8](in_data[8]);
		    avg_pool0->in_data[9](in_data[9]);
		    avg_pool0->in_data[10](in_data[10]);
		    avg_pool0->in_data[11](in_data[11]);
		    avg_pool0->in_data[12](in_data[12]);
		    avg_pool0->in_data[13](in_data[13]);
		    avg_pool0->in_data[14](in_data[14]);
		    avg_pool0->in_data[15](in_data[15]);
		    avg_pool0->in_data[16](in_data[16]);
		    avg_pool0->in_data[17](in_data[17]);
		    avg_pool0->in_data[18](in_data[18]);
		    avg_pool0->in_data[19](in_data[19]);
		    avg_pool0->in_data[20](in_data[20]);
		    avg_pool0->in_data[21](in_data[21]);
		    avg_pool0->in_data[22](in_data[22]);
		    avg_pool0->in_data[23](in_data[23]);
		    avg_pool0->in_data[24](in_data[24]);
		    avg_pool0->in_data[25](in_data[25]);
		    avg_pool0->in_data[26](in_data[26]);
		    avg_pool0->in_data[27](in_data[27]);
		    avg_pool0->in_data[28](in_data[28]);
		    avg_pool0->in_data[29](in_data[29]);
		    avg_pool0->in_data[30](in_data[30]);
		    avg_pool0->in_data[31](in_data[31]);
		    avg_pool0->in_data_valid(in_data_valid);
		    avg_pool0->out_data[0](out_data[0]);
		    avg_pool0->out_data[1](out_data[1]);
		    avg_pool0->out_data[2](out_data[2]);
		    avg_pool0->out_data[3](out_data[3]);
		    avg_pool0->out_data[4](out_data[4]);
		    avg_pool0->out_data[5](out_data[5]);
		    avg_pool0->out_data[6](out_data[6]);
		    avg_pool0->out_data[7](out_data[7]);
		    avg_pool0->out_data[8](out_data[8]);
		    avg_pool0->out_data[9](out_data[9]);
		    avg_pool0->out_data[10](out_data[10]);
		    avg_pool0->out_data[11](out_data[11]);
		    avg_pool0->out_data[12](out_data[12]);
		    avg_pool0->out_data[13](out_data[13]);
		    avg_pool0->out_data[14](out_data[14]);
		    avg_pool0->out_data[15](out_data[15]);
		    avg_pool0->out_data[16](out_data[16]);
		    avg_pool0->out_data[17](out_data[17]);
		    avg_pool0->out_data[18](out_data[18]);
		    avg_pool0->out_data[19](out_data[19]);
		    avg_pool0->out_data[20](out_data[20]);
		    avg_pool0->out_data[21](out_data[21]);
		    avg_pool0->out_data[22](out_data[22]);
		    avg_pool0->out_data[23](out_data[23]);
		    avg_pool0->out_data[24](out_data[24]);
		    avg_pool0->out_data[25](out_data[25]);
		    avg_pool0->out_data[26](out_data[26]);
		    avg_pool0->out_data[27](out_data[27]);
		    avg_pool0->out_data[28](out_data[28]);
		    avg_pool0->out_data[29](out_data[29]);
		    avg_pool0->out_data[30](out_data[30]);
		    avg_pool0->out_data[31](out_data[31]);
		    avg_pool0->out_data_valid(out_data_valid);


			{
			const char *simConfig = avg_pool_wrapper::simConfigName();
			
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

void avg_pool_wrapper_r::InitThreads()
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
		SC_METHOD(thread_out_data_8);
		  sensitive << out_data[8];
		SC_METHOD(thread_out_data_9);
		  sensitive << out_data[9];
		SC_METHOD(thread_out_data_10);
		  sensitive << out_data[10];
		SC_METHOD(thread_out_data_11);
		  sensitive << out_data[11];
		SC_METHOD(thread_out_data_12);
		  sensitive << out_data[12];
		SC_METHOD(thread_out_data_13);
		  sensitive << out_data[13];
		SC_METHOD(thread_out_data_14);
		  sensitive << out_data[14];
		SC_METHOD(thread_out_data_15);
		  sensitive << out_data[15];
		SC_METHOD(thread_out_data_16);
		  sensitive << out_data[16];
		SC_METHOD(thread_out_data_17);
		  sensitive << out_data[17];
		SC_METHOD(thread_out_data_18);
		  sensitive << out_data[18];
		SC_METHOD(thread_out_data_19);
		  sensitive << out_data[19];
		SC_METHOD(thread_out_data_20);
		  sensitive << out_data[20];
		SC_METHOD(thread_out_data_21);
		  sensitive << out_data[21];
		SC_METHOD(thread_out_data_22);
		  sensitive << out_data[22];
		SC_METHOD(thread_out_data_23);
		  sensitive << out_data[23];
		SC_METHOD(thread_out_data_24);
		  sensitive << out_data[24];
		SC_METHOD(thread_out_data_25);
		  sensitive << out_data[25];
		SC_METHOD(thread_out_data_26);
		  sensitive << out_data[26];
		SC_METHOD(thread_out_data_27);
		  sensitive << out_data[27];
		SC_METHOD(thread_out_data_28);
		  sensitive << out_data[28];
		SC_METHOD(thread_out_data_29);
		  sensitive << out_data[29];
		SC_METHOD(thread_out_data_30);
		  sensitive << out_data[30];
		SC_METHOD(thread_out_data_31);
		  sensitive << out_data[31];

	}
}

void avg_pool_wrapper_r::start_of_simulation()
{

#include <avg_pool_trace.h>

    esc_multiple_writers_warning();
}

void avg_pool_wrapper_r::CloseTrace()
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

void avg_pool_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void avg_pool_wrapper_r::DeleteInstances()
{
    if (avg_pool0)
    {
        delete avg_pool0;
        avg_pool0 = 0;
    }
    if (avg_pool_cosim0)
    {
        delete avg_pool_cosim0;
        avg_pool_cosim0 = 0;
    }
    if (avg_pool_cycsim0)
    {
        delete avg_pool_cycsim0;
        avg_pool_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_avg_pool)
    if (avg_pool_rtl0)
    {
        delete avg_pool_rtl0;
        avg_pool_rtl0 = 0;
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

class avg_pool_wrapper_fsdb_opener {
public:
	avg_pool_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static avg_pool_wrapper_fsdb_opener
  avg_pool_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"avg_pool.cpp"

#define		avg_pool_INTERNAL


#include	"avg_pool_wrap.h"

const char * avg_pool_wrapper::simConfigName()
{
  return "";
}

enum avg_pool_wrapper::Representation avg_pool_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void avg_pool_wrapper::InitInstances( sc_core::sc_module_name  )
{
	avg_pool0 = new avg_pool( "avg_pool" );

	avg_pool0->clk(clk);
	avg_pool0->rstn(rstn);
	avg_pool0->enable(enable);
	avg_pool0->init(init);
	avg_pool0->in_data[0](in_data[0]);
	avg_pool0->in_data[1](in_data[1]);
	avg_pool0->in_data[2](in_data[2]);
	avg_pool0->in_data[3](in_data[3]);
	avg_pool0->in_data[4](in_data[4]);
	avg_pool0->in_data[5](in_data[5]);
	avg_pool0->in_data[6](in_data[6]);
	avg_pool0->in_data[7](in_data[7]);
	avg_pool0->in_data[8](in_data[8]);
	avg_pool0->in_data[9](in_data[9]);
	avg_pool0->in_data[10](in_data[10]);
	avg_pool0->in_data[11](in_data[11]);
	avg_pool0->in_data[12](in_data[12]);
	avg_pool0->in_data[13](in_data[13]);
	avg_pool0->in_data[14](in_data[14]);
	avg_pool0->in_data[15](in_data[15]);
	avg_pool0->in_data[16](in_data[16]);
	avg_pool0->in_data[17](in_data[17]);
	avg_pool0->in_data[18](in_data[18]);
	avg_pool0->in_data[19](in_data[19]);
	avg_pool0->in_data[20](in_data[20]);
	avg_pool0->in_data[21](in_data[21]);
	avg_pool0->in_data[22](in_data[22]);
	avg_pool0->in_data[23](in_data[23]);
	avg_pool0->in_data[24](in_data[24]);
	avg_pool0->in_data[25](in_data[25]);
	avg_pool0->in_data[26](in_data[26]);
	avg_pool0->in_data[27](in_data[27]);
	avg_pool0->in_data[28](in_data[28]);
	avg_pool0->in_data[29](in_data[29]);
	avg_pool0->in_data[30](in_data[30]);
	avg_pool0->in_data[31](in_data[31]);
	avg_pool0->in_data_valid(in_data_valid);
	avg_pool0->out_data[0](out_data[0]);
	avg_pool0->out_data[1](out_data[1]);
	avg_pool0->out_data[2](out_data[2]);
	avg_pool0->out_data[3](out_data[3]);
	avg_pool0->out_data[4](out_data[4]);
	avg_pool0->out_data[5](out_data[5]);
	avg_pool0->out_data[6](out_data[6]);
	avg_pool0->out_data[7](out_data[7]);
	avg_pool0->out_data[8](out_data[8]);
	avg_pool0->out_data[9](out_data[9]);
	avg_pool0->out_data[10](out_data[10]);
	avg_pool0->out_data[11](out_data[11]);
	avg_pool0->out_data[12](out_data[12]);
	avg_pool0->out_data[13](out_data[13]);
	avg_pool0->out_data[14](out_data[14]);
	avg_pool0->out_data[15](out_data[15]);
	avg_pool0->out_data[16](out_data[16]);
	avg_pool0->out_data[17](out_data[17]);
	avg_pool0->out_data[18](out_data[18]);
	avg_pool0->out_data[19](out_data[19]);
	avg_pool0->out_data[20](out_data[20]);
	avg_pool0->out_data[21](out_data[21]);
	avg_pool0->out_data[22](out_data[22]);
	avg_pool0->out_data[23](out_data[23]);
	avg_pool0->out_data[24](out_data[24]);
	avg_pool0->out_data[25](out_data[25]);
	avg_pool0->out_data[26](out_data[26]);
	avg_pool0->out_data[27](out_data[27]);
	avg_pool0->out_data[28](out_data[28]);
	avg_pool0->out_data[29](out_data[29]);
	avg_pool0->out_data[30](out_data[30]);
	avg_pool0->out_data[31](out_data[31]);
	avg_pool0->out_data_valid(out_data_valid);

}

void avg_pool_wrapper::InitThreads()
{
}

void avg_pool_wrapper::CloseTrace()
{
}

void avg_pool_wrapper::DeleteInstances()
{
    if (avg_pool0)
    {
        delete avg_pool0;
        avg_pool0 = 0;
    }
}

void avg_pool_wrapper::start_of_simulation()
{
}

void avg_pool_wrapper::end_of_simulation()
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

class avg_pool_wrapper_fsdb_opener {
public:
	avg_pool_wrapper_fsdb_opener() {
	}
};

static avg_pool_wrapper_fsdb_opener
  avg_pool_wrapper_fsdb_opener_inst;

#endif

#endif
