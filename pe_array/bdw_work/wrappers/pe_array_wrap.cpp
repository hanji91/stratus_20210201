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
* block called "pe_array". By default, it will include the behavioral
* model. Otherwise, it will include the RTL C++ or the RTL Verilog
* depending on the definition of either of "RTL" or "COSIM".
*
****************************************************************************/

#if defined(CYNTHVLG)


































































































































































































































#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#include	"pe_array_rtl.cpp"

#else 

#if defined(BDW_HUB)

#include "esc.h"

#if defined(BDW_RTL) || defined(COWARE_RTL_pe_array)

#define BDW_AUTO_KNOWN 1 


#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#undef mac
#define mac mac_wrapper_r

#ifndef BDW_PORTS_ONLY
#define BDW_PORTS_ONLY 1
#endif


#undef pe_array
#define pe_array pe_array_rtl
#	include	"pe_array_rtl.cpp"
#undef pe_array


#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#undef mac

#ifdef BDW_PORTS_ONLY
#undef BDW_PORTS_ONLY
#endif



#elif defined(BDW_HOIST) 
#else

#endif
#ifdef BDW_COWARE
#include	"pe_array_coware.h"
#else
#include	"pe_array_cosim.h"
#endif

// include for cycle-accurate verilator simulation
#include    "pe_array_cycsim.h"



// Include the source for the behavioral model so it will be compiled.
#include	"pe_array.cpp"


#define		pe_array_INTERNAL


#include	"pe_array_wrap.h"

// this global pointer indicates whether or not the Verilator cycsim wrapper is present
pe_array_cycsim* (*pe_array_cycsim_factory_p)() = 0;

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

const char * pe_array_wrapper::simConfigName()
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

enum pe_array_wrapper::Representation pe_array_wrapper::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "pe_array", simConfig, instName, &iresult );
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
								 "pe_array", simConfig, instName, leaf,  "pe_array" );
		}
		return BDWRep_Behavioral;
	}

    // If we couldn't get a license, then just exit.
    if ( err == qbhErrorNoLicense )
        exit(1);

	return BDWRep_None;
}

void pe_array_wrapper::InitInstances(  )
{
    enum pe_array_wrapper::Representation rep =
		pe_array_wrapper::lookupRepresentation( name() );

	esc_log_wrapper_inst( "pe_array" );
	esc_log_representation( "pe_array", name(), rep );

	

	switch ( rep )
	{
		case BDWRep_Gates:
		    pe_array_cosim0 = new pe_array_cosim( "pe_array" );

		    pe_array_cosim0->clk(clk);
		    pe_array_cosim0->rstn(rstn);
		    pe_array_cosim0->enable(enable);
		    pe_array_cosim0->src_vld(src_vld);
		    pe_array_cosim0->clear(clear);
		    pe_array_cosim0->init(init);
		    pe_array_cosim0->systolic_en(systolic_en);
		    pe_array_cosim0->systolic_depth(systolic_depth);
		    pe_array_cosim0->mac_shift_len(mac_shift_len);
		    pe_array_cosim0->src_0_s0_0(src_0_s0[0]);
		    pe_array_cosim0->src_0_s0_1(src_0_s0[1]);
		    pe_array_cosim0->src_0_s0_2(src_0_s0[2]);
		    pe_array_cosim0->src_0_s0_3(src_0_s0[3]);
		    pe_array_cosim0->src_0_s0_4(src_0_s0[4]);
		    pe_array_cosim0->src_0_s0_5(src_0_s0[5]);
		    pe_array_cosim0->src_0_s0_6(src_0_s0[6]);
		    pe_array_cosim0->src_0_s0_7(src_0_s0[7]);
		    pe_array_cosim0->src_0_s0_8(src_0_s0[8]);
		    pe_array_cosim0->src_0_s0_9(src_0_s0[9]);
		    pe_array_cosim0->src_0_s0_10(src_0_s0[10]);
		    pe_array_cosim0->src_0_s0_11(src_0_s0[11]);
		    pe_array_cosim0->src_0_s0_12(src_0_s0[12]);
		    pe_array_cosim0->src_0_s0_13(src_0_s0[13]);
		    pe_array_cosim0->src_0_s0_14(src_0_s0[14]);
		    pe_array_cosim0->src_0_s0_15(src_0_s0[15]);
		    pe_array_cosim0->src_0_s0_16(src_0_s0[16]);
		    pe_array_cosim0->src_0_s0_17(src_0_s0[17]);
		    pe_array_cosim0->src_0_s0_18(src_0_s0[18]);
		    pe_array_cosim0->src_0_s0_19(src_0_s0[19]);
		    pe_array_cosim0->src_0_s0_20(src_0_s0[20]);
		    pe_array_cosim0->src_0_s0_21(src_0_s0[21]);
		    pe_array_cosim0->src_0_s0_22(src_0_s0[22]);
		    pe_array_cosim0->src_0_s0_23(src_0_s0[23]);
		    pe_array_cosim0->src_0_s0_24(src_0_s0[24]);
		    pe_array_cosim0->src_0_s0_25(src_0_s0[25]);
		    pe_array_cosim0->src_0_s0_26(src_0_s0[26]);
		    pe_array_cosim0->src_0_s0_27(src_0_s0[27]);
		    pe_array_cosim0->src_0_s0_28(src_0_s0[28]);
		    pe_array_cosim0->src_0_s0_29(src_0_s0[29]);
		    pe_array_cosim0->src_0_s0_30(src_0_s0[30]);
		    pe_array_cosim0->src_0_s0_31(src_0_s0[31]);
		    pe_array_cosim0->src_0_s1_0(src_0_s1[0]);
		    pe_array_cosim0->src_0_s1_1(src_0_s1[1]);
		    pe_array_cosim0->src_0_s1_2(src_0_s1[2]);
		    pe_array_cosim0->src_0_s1_3(src_0_s1[3]);
		    pe_array_cosim0->src_0_s1_4(src_0_s1[4]);
		    pe_array_cosim0->src_0_s1_5(src_0_s1[5]);
		    pe_array_cosim0->src_0_s1_6(src_0_s1[6]);
		    pe_array_cosim0->src_0_s1_7(src_0_s1[7]);
		    pe_array_cosim0->src_0_s1_8(src_0_s1[8]);
		    pe_array_cosim0->src_0_s1_9(src_0_s1[9]);
		    pe_array_cosim0->src_0_s1_10(src_0_s1[10]);
		    pe_array_cosim0->src_0_s1_11(src_0_s1[11]);
		    pe_array_cosim0->src_0_s1_12(src_0_s1[12]);
		    pe_array_cosim0->src_0_s1_13(src_0_s1[13]);
		    pe_array_cosim0->src_0_s1_14(src_0_s1[14]);
		    pe_array_cosim0->src_0_s1_15(src_0_s1[15]);
		    pe_array_cosim0->src_0_s1_16(src_0_s1[16]);
		    pe_array_cosim0->src_0_s1_17(src_0_s1[17]);
		    pe_array_cosim0->src_0_s1_18(src_0_s1[18]);
		    pe_array_cosim0->src_0_s1_19(src_0_s1[19]);
		    pe_array_cosim0->src_0_s1_20(src_0_s1[20]);
		    pe_array_cosim0->src_0_s1_21(src_0_s1[21]);
		    pe_array_cosim0->src_0_s1_22(src_0_s1[22]);
		    pe_array_cosim0->src_0_s1_23(src_0_s1[23]);
		    pe_array_cosim0->src_0_s1_24(src_0_s1[24]);
		    pe_array_cosim0->src_0_s1_25(src_0_s1[25]);
		    pe_array_cosim0->src_0_s1_26(src_0_s1[26]);
		    pe_array_cosim0->src_0_s1_27(src_0_s1[27]);
		    pe_array_cosim0->src_0_s1_28(src_0_s1[28]);
		    pe_array_cosim0->src_0_s1_29(src_0_s1[29]);
		    pe_array_cosim0->src_0_s1_30(src_0_s1[30]);
		    pe_array_cosim0->src_0_s1_31(src_0_s1[31]);
		    pe_array_cosim0->src_0_s2_0(src_0_s2[0]);
		    pe_array_cosim0->src_0_s2_1(src_0_s2[1]);
		    pe_array_cosim0->src_0_s2_2(src_0_s2[2]);
		    pe_array_cosim0->src_0_s2_3(src_0_s2[3]);
		    pe_array_cosim0->src_0_s2_4(src_0_s2[4]);
		    pe_array_cosim0->src_0_s2_5(src_0_s2[5]);
		    pe_array_cosim0->src_0_s2_6(src_0_s2[6]);
		    pe_array_cosim0->src_0_s2_7(src_0_s2[7]);
		    pe_array_cosim0->src_0_s2_8(src_0_s2[8]);
		    pe_array_cosim0->src_0_s2_9(src_0_s2[9]);
		    pe_array_cosim0->src_0_s2_10(src_0_s2[10]);
		    pe_array_cosim0->src_0_s2_11(src_0_s2[11]);
		    pe_array_cosim0->src_0_s2_12(src_0_s2[12]);
		    pe_array_cosim0->src_0_s2_13(src_0_s2[13]);
		    pe_array_cosim0->src_0_s2_14(src_0_s2[14]);
		    pe_array_cosim0->src_0_s2_15(src_0_s2[15]);
		    pe_array_cosim0->src_0_s2_16(src_0_s2[16]);
		    pe_array_cosim0->src_0_s2_17(src_0_s2[17]);
		    pe_array_cosim0->src_0_s2_18(src_0_s2[18]);
		    pe_array_cosim0->src_0_s2_19(src_0_s2[19]);
		    pe_array_cosim0->src_0_s2_20(src_0_s2[20]);
		    pe_array_cosim0->src_0_s2_21(src_0_s2[21]);
		    pe_array_cosim0->src_0_s2_22(src_0_s2[22]);
		    pe_array_cosim0->src_0_s2_23(src_0_s2[23]);
		    pe_array_cosim0->src_0_s2_24(src_0_s2[24]);
		    pe_array_cosim0->src_0_s2_25(src_0_s2[25]);
		    pe_array_cosim0->src_0_s2_26(src_0_s2[26]);
		    pe_array_cosim0->src_0_s2_27(src_0_s2[27]);
		    pe_array_cosim0->src_0_s2_28(src_0_s2[28]);
		    pe_array_cosim0->src_0_s2_29(src_0_s2[29]);
		    pe_array_cosim0->src_0_s2_30(src_0_s2[30]);
		    pe_array_cosim0->src_0_s2_31(src_0_s2[31]);
		    pe_array_cosim0->src_0_s3_0(src_0_s3[0]);
		    pe_array_cosim0->src_0_s3_1(src_0_s3[1]);
		    pe_array_cosim0->src_0_s3_2(src_0_s3[2]);
		    pe_array_cosim0->src_0_s3_3(src_0_s3[3]);
		    pe_array_cosim0->src_0_s3_4(src_0_s3[4]);
		    pe_array_cosim0->src_0_s3_5(src_0_s3[5]);
		    pe_array_cosim0->src_0_s3_6(src_0_s3[6]);
		    pe_array_cosim0->src_0_s3_7(src_0_s3[7]);
		    pe_array_cosim0->src_0_s3_8(src_0_s3[8]);
		    pe_array_cosim0->src_0_s3_9(src_0_s3[9]);
		    pe_array_cosim0->src_0_s3_10(src_0_s3[10]);
		    pe_array_cosim0->src_0_s3_11(src_0_s3[11]);
		    pe_array_cosim0->src_0_s3_12(src_0_s3[12]);
		    pe_array_cosim0->src_0_s3_13(src_0_s3[13]);
		    pe_array_cosim0->src_0_s3_14(src_0_s3[14]);
		    pe_array_cosim0->src_0_s3_15(src_0_s3[15]);
		    pe_array_cosim0->src_0_s3_16(src_0_s3[16]);
		    pe_array_cosim0->src_0_s3_17(src_0_s3[17]);
		    pe_array_cosim0->src_0_s3_18(src_0_s3[18]);
		    pe_array_cosim0->src_0_s3_19(src_0_s3[19]);
		    pe_array_cosim0->src_0_s3_20(src_0_s3[20]);
		    pe_array_cosim0->src_0_s3_21(src_0_s3[21]);
		    pe_array_cosim0->src_0_s3_22(src_0_s3[22]);
		    pe_array_cosim0->src_0_s3_23(src_0_s3[23]);
		    pe_array_cosim0->src_0_s3_24(src_0_s3[24]);
		    pe_array_cosim0->src_0_s3_25(src_0_s3[25]);
		    pe_array_cosim0->src_0_s3_26(src_0_s3[26]);
		    pe_array_cosim0->src_0_s3_27(src_0_s3[27]);
		    pe_array_cosim0->src_0_s3_28(src_0_s3[28]);
		    pe_array_cosim0->src_0_s3_29(src_0_s3[29]);
		    pe_array_cosim0->src_0_s3_30(src_0_s3[30]);
		    pe_array_cosim0->src_0_s3_31(src_0_s3[31]);
		    pe_array_cosim0->src_0_s4_0(src_0_s4[0]);
		    pe_array_cosim0->src_0_s4_1(src_0_s4[1]);
		    pe_array_cosim0->src_0_s4_2(src_0_s4[2]);
		    pe_array_cosim0->src_0_s4_3(src_0_s4[3]);
		    pe_array_cosim0->src_0_s4_4(src_0_s4[4]);
		    pe_array_cosim0->src_0_s4_5(src_0_s4[5]);
		    pe_array_cosim0->src_0_s4_6(src_0_s4[6]);
		    pe_array_cosim0->src_0_s4_7(src_0_s4[7]);
		    pe_array_cosim0->src_0_s4_8(src_0_s4[8]);
		    pe_array_cosim0->src_0_s4_9(src_0_s4[9]);
		    pe_array_cosim0->src_0_s4_10(src_0_s4[10]);
		    pe_array_cosim0->src_0_s4_11(src_0_s4[11]);
		    pe_array_cosim0->src_0_s4_12(src_0_s4[12]);
		    pe_array_cosim0->src_0_s4_13(src_0_s4[13]);
		    pe_array_cosim0->src_0_s4_14(src_0_s4[14]);
		    pe_array_cosim0->src_0_s4_15(src_0_s4[15]);
		    pe_array_cosim0->src_0_s4_16(src_0_s4[16]);
		    pe_array_cosim0->src_0_s4_17(src_0_s4[17]);
		    pe_array_cosim0->src_0_s4_18(src_0_s4[18]);
		    pe_array_cosim0->src_0_s4_19(src_0_s4[19]);
		    pe_array_cosim0->src_0_s4_20(src_0_s4[20]);
		    pe_array_cosim0->src_0_s4_21(src_0_s4[21]);
		    pe_array_cosim0->src_0_s4_22(src_0_s4[22]);
		    pe_array_cosim0->src_0_s4_23(src_0_s4[23]);
		    pe_array_cosim0->src_0_s4_24(src_0_s4[24]);
		    pe_array_cosim0->src_0_s4_25(src_0_s4[25]);
		    pe_array_cosim0->src_0_s4_26(src_0_s4[26]);
		    pe_array_cosim0->src_0_s4_27(src_0_s4[27]);
		    pe_array_cosim0->src_0_s4_28(src_0_s4[28]);
		    pe_array_cosim0->src_0_s4_29(src_0_s4[29]);
		    pe_array_cosim0->src_0_s4_30(src_0_s4[30]);
		    pe_array_cosim0->src_0_s4_31(src_0_s4[31]);
		    pe_array_cosim0->src_0_s5_0(src_0_s5[0]);
		    pe_array_cosim0->src_0_s5_1(src_0_s5[1]);
		    pe_array_cosim0->src_0_s5_2(src_0_s5[2]);
		    pe_array_cosim0->src_0_s5_3(src_0_s5[3]);
		    pe_array_cosim0->src_0_s5_4(src_0_s5[4]);
		    pe_array_cosim0->src_0_s5_5(src_0_s5[5]);
		    pe_array_cosim0->src_0_s5_6(src_0_s5[6]);
		    pe_array_cosim0->src_0_s5_7(src_0_s5[7]);
		    pe_array_cosim0->src_0_s5_8(src_0_s5[8]);
		    pe_array_cosim0->src_0_s5_9(src_0_s5[9]);
		    pe_array_cosim0->src_0_s5_10(src_0_s5[10]);
		    pe_array_cosim0->src_0_s5_11(src_0_s5[11]);
		    pe_array_cosim0->src_0_s5_12(src_0_s5[12]);
		    pe_array_cosim0->src_0_s5_13(src_0_s5[13]);
		    pe_array_cosim0->src_0_s5_14(src_0_s5[14]);
		    pe_array_cosim0->src_0_s5_15(src_0_s5[15]);
		    pe_array_cosim0->src_0_s5_16(src_0_s5[16]);
		    pe_array_cosim0->src_0_s5_17(src_0_s5[17]);
		    pe_array_cosim0->src_0_s5_18(src_0_s5[18]);
		    pe_array_cosim0->src_0_s5_19(src_0_s5[19]);
		    pe_array_cosim0->src_0_s5_20(src_0_s5[20]);
		    pe_array_cosim0->src_0_s5_21(src_0_s5[21]);
		    pe_array_cosim0->src_0_s5_22(src_0_s5[22]);
		    pe_array_cosim0->src_0_s5_23(src_0_s5[23]);
		    pe_array_cosim0->src_0_s5_24(src_0_s5[24]);
		    pe_array_cosim0->src_0_s5_25(src_0_s5[25]);
		    pe_array_cosim0->src_0_s5_26(src_0_s5[26]);
		    pe_array_cosim0->src_0_s5_27(src_0_s5[27]);
		    pe_array_cosim0->src_0_s5_28(src_0_s5[28]);
		    pe_array_cosim0->src_0_s5_29(src_0_s5[29]);
		    pe_array_cosim0->src_0_s5_30(src_0_s5[30]);
		    pe_array_cosim0->src_0_s5_31(src_0_s5[31]);
		    pe_array_cosim0->src_0_s6_0(src_0_s6[0]);
		    pe_array_cosim0->src_0_s6_1(src_0_s6[1]);
		    pe_array_cosim0->src_0_s6_2(src_0_s6[2]);
		    pe_array_cosim0->src_0_s6_3(src_0_s6[3]);
		    pe_array_cosim0->src_0_s6_4(src_0_s6[4]);
		    pe_array_cosim0->src_0_s6_5(src_0_s6[5]);
		    pe_array_cosim0->src_0_s6_6(src_0_s6[6]);
		    pe_array_cosim0->src_0_s6_7(src_0_s6[7]);
		    pe_array_cosim0->src_0_s6_8(src_0_s6[8]);
		    pe_array_cosim0->src_0_s6_9(src_0_s6[9]);
		    pe_array_cosim0->src_0_s6_10(src_0_s6[10]);
		    pe_array_cosim0->src_0_s6_11(src_0_s6[11]);
		    pe_array_cosim0->src_0_s6_12(src_0_s6[12]);
		    pe_array_cosim0->src_0_s6_13(src_0_s6[13]);
		    pe_array_cosim0->src_0_s6_14(src_0_s6[14]);
		    pe_array_cosim0->src_0_s6_15(src_0_s6[15]);
		    pe_array_cosim0->src_0_s6_16(src_0_s6[16]);
		    pe_array_cosim0->src_0_s6_17(src_0_s6[17]);
		    pe_array_cosim0->src_0_s6_18(src_0_s6[18]);
		    pe_array_cosim0->src_0_s6_19(src_0_s6[19]);
		    pe_array_cosim0->src_0_s6_20(src_0_s6[20]);
		    pe_array_cosim0->src_0_s6_21(src_0_s6[21]);
		    pe_array_cosim0->src_0_s6_22(src_0_s6[22]);
		    pe_array_cosim0->src_0_s6_23(src_0_s6[23]);
		    pe_array_cosim0->src_0_s6_24(src_0_s6[24]);
		    pe_array_cosim0->src_0_s6_25(src_0_s6[25]);
		    pe_array_cosim0->src_0_s6_26(src_0_s6[26]);
		    pe_array_cosim0->src_0_s6_27(src_0_s6[27]);
		    pe_array_cosim0->src_0_s6_28(src_0_s6[28]);
		    pe_array_cosim0->src_0_s6_29(src_0_s6[29]);
		    pe_array_cosim0->src_0_s6_30(src_0_s6[30]);
		    pe_array_cosim0->src_0_s6_31(src_0_s6[31]);
		    pe_array_cosim0->src_1_0(src_1[0]);
		    pe_array_cosim0->src_1_1(src_1[1]);
		    pe_array_cosim0->src_1_2(src_1[2]);
		    pe_array_cosim0->src_1_3(src_1[3]);
		    pe_array_cosim0->src_1_4(src_1[4]);
		    pe_array_cosim0->src_1_5(src_1[5]);
		    pe_array_cosim0->src_1_6(src_1[6]);
		    pe_array_cosim0->src_1_7(src_1[7]);
		    pe_array_cosim0->src_1_8(src_1[8]);
		    pe_array_cosim0->src_1_9(src_1[9]);
		    pe_array_cosim0->src_1_10(src_1[10]);
		    pe_array_cosim0->src_1_11(src_1[11]);
		    pe_array_cosim0->src_1_12(src_1[12]);
		    pe_array_cosim0->src_1_13(src_1[13]);
		    pe_array_cosim0->src_1_14(src_1[14]);
		    pe_array_cosim0->src_1_15(src_1[15]);
		    pe_array_cosim0->src_1_16(src_1[16]);
		    pe_array_cosim0->src_1_17(src_1[17]);
		    pe_array_cosim0->src_1_18(src_1[18]);
		    pe_array_cosim0->src_1_19(src_1[19]);
		    pe_array_cosim0->src_1_20(src_1[20]);
		    pe_array_cosim0->src_1_21(src_1[21]);
		    pe_array_cosim0->src_1_22(src_1[22]);
		    pe_array_cosim0->src_1_23(src_1[23]);
		    pe_array_cosim0->src_1_24(src_1[24]);
		    pe_array_cosim0->src_1_25(src_1[25]);
		    pe_array_cosim0->src_1_26(src_1[26]);
		    pe_array_cosim0->src_1_27(src_1[27]);
		    pe_array_cosim0->src_1_28(src_1[28]);
		    pe_array_cosim0->src_1_29(src_1[29]);
		    pe_array_cosim0->src_1_30(src_1[30]);
		    pe_array_cosim0->src_1_31(src_1[31]);
		    pe_array_cosim0->pe_data_0(pe_data[0]);
		    pe_array_cosim0->pe_data_1(pe_data[1]);
		    pe_array_cosim0->pe_data_2(pe_data[2]);
		    pe_array_cosim0->pe_data_3(pe_data[3]);
		    pe_array_cosim0->pe_data_4(pe_data[4]);
		    pe_array_cosim0->pe_data_5(pe_data[5]);
		    pe_array_cosim0->pe_data_6(pe_data[6]);
		    pe_array_cosim0->pe_data_7(pe_data[7]);
		    pe_array_cosim0->pe_data_8(pe_data[8]);
		    pe_array_cosim0->pe_data_9(pe_data[9]);
		    pe_array_cosim0->pe_data_10(pe_data[10]);
		    pe_array_cosim0->pe_data_11(pe_data[11]);
		    pe_array_cosim0->pe_data_12(pe_data[12]);
		    pe_array_cosim0->pe_data_13(pe_data[13]);
		    pe_array_cosim0->pe_data_14(pe_data[14]);
		    pe_array_cosim0->pe_data_15(pe_data[15]);
		    pe_array_cosim0->pe_data_16(pe_data[16]);
		    pe_array_cosim0->pe_data_17(pe_data[17]);
		    pe_array_cosim0->pe_data_18(pe_data[18]);
		    pe_array_cosim0->pe_data_19(pe_data[19]);
		    pe_array_cosim0->pe_data_20(pe_data[20]);
		    pe_array_cosim0->pe_data_21(pe_data[21]);
		    pe_array_cosim0->pe_data_22(pe_data[22]);
		    pe_array_cosim0->pe_data_23(pe_data[23]);
		    pe_array_cosim0->pe_data_24(pe_data[24]);
		    pe_array_cosim0->pe_data_25(pe_data[25]);
		    pe_array_cosim0->pe_data_26(pe_data[26]);
		    pe_array_cosim0->pe_data_27(pe_data[27]);
		    pe_array_cosim0->pe_data_28(pe_data[28]);
		    pe_array_cosim0->pe_data_29(pe_data[29]);
		    pe_array_cosim0->pe_data_30(pe_data[30]);
		    pe_array_cosim0->pe_data_31(pe_data[31]);
		    pe_array_cosim0->pe_data_valid(pe_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    pe_array_cosim0 = new pe_array_cosim( "pe_array" );

		    pe_array_cosim0->clk(clk);
		    pe_array_cosim0->rstn(rstn);
		    pe_array_cosim0->enable(enable);
		    pe_array_cosim0->src_vld(src_vld);
		    pe_array_cosim0->clear(clear);
		    pe_array_cosim0->init(init);
		    pe_array_cosim0->systolic_en(systolic_en);
		    pe_array_cosim0->systolic_depth(systolic_depth);
		    pe_array_cosim0->mac_shift_len(mac_shift_len);
		    pe_array_cosim0->src_0_s0_0(src_0_s0[0]);
		    pe_array_cosim0->src_0_s0_1(src_0_s0[1]);
		    pe_array_cosim0->src_0_s0_2(src_0_s0[2]);
		    pe_array_cosim0->src_0_s0_3(src_0_s0[3]);
		    pe_array_cosim0->src_0_s0_4(src_0_s0[4]);
		    pe_array_cosim0->src_0_s0_5(src_0_s0[5]);
		    pe_array_cosim0->src_0_s0_6(src_0_s0[6]);
		    pe_array_cosim0->src_0_s0_7(src_0_s0[7]);
		    pe_array_cosim0->src_0_s0_8(src_0_s0[8]);
		    pe_array_cosim0->src_0_s0_9(src_0_s0[9]);
		    pe_array_cosim0->src_0_s0_10(src_0_s0[10]);
		    pe_array_cosim0->src_0_s0_11(src_0_s0[11]);
		    pe_array_cosim0->src_0_s0_12(src_0_s0[12]);
		    pe_array_cosim0->src_0_s0_13(src_0_s0[13]);
		    pe_array_cosim0->src_0_s0_14(src_0_s0[14]);
		    pe_array_cosim0->src_0_s0_15(src_0_s0[15]);
		    pe_array_cosim0->src_0_s0_16(src_0_s0[16]);
		    pe_array_cosim0->src_0_s0_17(src_0_s0[17]);
		    pe_array_cosim0->src_0_s0_18(src_0_s0[18]);
		    pe_array_cosim0->src_0_s0_19(src_0_s0[19]);
		    pe_array_cosim0->src_0_s0_20(src_0_s0[20]);
		    pe_array_cosim0->src_0_s0_21(src_0_s0[21]);
		    pe_array_cosim0->src_0_s0_22(src_0_s0[22]);
		    pe_array_cosim0->src_0_s0_23(src_0_s0[23]);
		    pe_array_cosim0->src_0_s0_24(src_0_s0[24]);
		    pe_array_cosim0->src_0_s0_25(src_0_s0[25]);
		    pe_array_cosim0->src_0_s0_26(src_0_s0[26]);
		    pe_array_cosim0->src_0_s0_27(src_0_s0[27]);
		    pe_array_cosim0->src_0_s0_28(src_0_s0[28]);
		    pe_array_cosim0->src_0_s0_29(src_0_s0[29]);
		    pe_array_cosim0->src_0_s0_30(src_0_s0[30]);
		    pe_array_cosim0->src_0_s0_31(src_0_s0[31]);
		    pe_array_cosim0->src_0_s1_0(src_0_s1[0]);
		    pe_array_cosim0->src_0_s1_1(src_0_s1[1]);
		    pe_array_cosim0->src_0_s1_2(src_0_s1[2]);
		    pe_array_cosim0->src_0_s1_3(src_0_s1[3]);
		    pe_array_cosim0->src_0_s1_4(src_0_s1[4]);
		    pe_array_cosim0->src_0_s1_5(src_0_s1[5]);
		    pe_array_cosim0->src_0_s1_6(src_0_s1[6]);
		    pe_array_cosim0->src_0_s1_7(src_0_s1[7]);
		    pe_array_cosim0->src_0_s1_8(src_0_s1[8]);
		    pe_array_cosim0->src_0_s1_9(src_0_s1[9]);
		    pe_array_cosim0->src_0_s1_10(src_0_s1[10]);
		    pe_array_cosim0->src_0_s1_11(src_0_s1[11]);
		    pe_array_cosim0->src_0_s1_12(src_0_s1[12]);
		    pe_array_cosim0->src_0_s1_13(src_0_s1[13]);
		    pe_array_cosim0->src_0_s1_14(src_0_s1[14]);
		    pe_array_cosim0->src_0_s1_15(src_0_s1[15]);
		    pe_array_cosim0->src_0_s1_16(src_0_s1[16]);
		    pe_array_cosim0->src_0_s1_17(src_0_s1[17]);
		    pe_array_cosim0->src_0_s1_18(src_0_s1[18]);
		    pe_array_cosim0->src_0_s1_19(src_0_s1[19]);
		    pe_array_cosim0->src_0_s1_20(src_0_s1[20]);
		    pe_array_cosim0->src_0_s1_21(src_0_s1[21]);
		    pe_array_cosim0->src_0_s1_22(src_0_s1[22]);
		    pe_array_cosim0->src_0_s1_23(src_0_s1[23]);
		    pe_array_cosim0->src_0_s1_24(src_0_s1[24]);
		    pe_array_cosim0->src_0_s1_25(src_0_s1[25]);
		    pe_array_cosim0->src_0_s1_26(src_0_s1[26]);
		    pe_array_cosim0->src_0_s1_27(src_0_s1[27]);
		    pe_array_cosim0->src_0_s1_28(src_0_s1[28]);
		    pe_array_cosim0->src_0_s1_29(src_0_s1[29]);
		    pe_array_cosim0->src_0_s1_30(src_0_s1[30]);
		    pe_array_cosim0->src_0_s1_31(src_0_s1[31]);
		    pe_array_cosim0->src_0_s2_0(src_0_s2[0]);
		    pe_array_cosim0->src_0_s2_1(src_0_s2[1]);
		    pe_array_cosim0->src_0_s2_2(src_0_s2[2]);
		    pe_array_cosim0->src_0_s2_3(src_0_s2[3]);
		    pe_array_cosim0->src_0_s2_4(src_0_s2[4]);
		    pe_array_cosim0->src_0_s2_5(src_0_s2[5]);
		    pe_array_cosim0->src_0_s2_6(src_0_s2[6]);
		    pe_array_cosim0->src_0_s2_7(src_0_s2[7]);
		    pe_array_cosim0->src_0_s2_8(src_0_s2[8]);
		    pe_array_cosim0->src_0_s2_9(src_0_s2[9]);
		    pe_array_cosim0->src_0_s2_10(src_0_s2[10]);
		    pe_array_cosim0->src_0_s2_11(src_0_s2[11]);
		    pe_array_cosim0->src_0_s2_12(src_0_s2[12]);
		    pe_array_cosim0->src_0_s2_13(src_0_s2[13]);
		    pe_array_cosim0->src_0_s2_14(src_0_s2[14]);
		    pe_array_cosim0->src_0_s2_15(src_0_s2[15]);
		    pe_array_cosim0->src_0_s2_16(src_0_s2[16]);
		    pe_array_cosim0->src_0_s2_17(src_0_s2[17]);
		    pe_array_cosim0->src_0_s2_18(src_0_s2[18]);
		    pe_array_cosim0->src_0_s2_19(src_0_s2[19]);
		    pe_array_cosim0->src_0_s2_20(src_0_s2[20]);
		    pe_array_cosim0->src_0_s2_21(src_0_s2[21]);
		    pe_array_cosim0->src_0_s2_22(src_0_s2[22]);
		    pe_array_cosim0->src_0_s2_23(src_0_s2[23]);
		    pe_array_cosim0->src_0_s2_24(src_0_s2[24]);
		    pe_array_cosim0->src_0_s2_25(src_0_s2[25]);
		    pe_array_cosim0->src_0_s2_26(src_0_s2[26]);
		    pe_array_cosim0->src_0_s2_27(src_0_s2[27]);
		    pe_array_cosim0->src_0_s2_28(src_0_s2[28]);
		    pe_array_cosim0->src_0_s2_29(src_0_s2[29]);
		    pe_array_cosim0->src_0_s2_30(src_0_s2[30]);
		    pe_array_cosim0->src_0_s2_31(src_0_s2[31]);
		    pe_array_cosim0->src_0_s3_0(src_0_s3[0]);
		    pe_array_cosim0->src_0_s3_1(src_0_s3[1]);
		    pe_array_cosim0->src_0_s3_2(src_0_s3[2]);
		    pe_array_cosim0->src_0_s3_3(src_0_s3[3]);
		    pe_array_cosim0->src_0_s3_4(src_0_s3[4]);
		    pe_array_cosim0->src_0_s3_5(src_0_s3[5]);
		    pe_array_cosim0->src_0_s3_6(src_0_s3[6]);
		    pe_array_cosim0->src_0_s3_7(src_0_s3[7]);
		    pe_array_cosim0->src_0_s3_8(src_0_s3[8]);
		    pe_array_cosim0->src_0_s3_9(src_0_s3[9]);
		    pe_array_cosim0->src_0_s3_10(src_0_s3[10]);
		    pe_array_cosim0->src_0_s3_11(src_0_s3[11]);
		    pe_array_cosim0->src_0_s3_12(src_0_s3[12]);
		    pe_array_cosim0->src_0_s3_13(src_0_s3[13]);
		    pe_array_cosim0->src_0_s3_14(src_0_s3[14]);
		    pe_array_cosim0->src_0_s3_15(src_0_s3[15]);
		    pe_array_cosim0->src_0_s3_16(src_0_s3[16]);
		    pe_array_cosim0->src_0_s3_17(src_0_s3[17]);
		    pe_array_cosim0->src_0_s3_18(src_0_s3[18]);
		    pe_array_cosim0->src_0_s3_19(src_0_s3[19]);
		    pe_array_cosim0->src_0_s3_20(src_0_s3[20]);
		    pe_array_cosim0->src_0_s3_21(src_0_s3[21]);
		    pe_array_cosim0->src_0_s3_22(src_0_s3[22]);
		    pe_array_cosim0->src_0_s3_23(src_0_s3[23]);
		    pe_array_cosim0->src_0_s3_24(src_0_s3[24]);
		    pe_array_cosim0->src_0_s3_25(src_0_s3[25]);
		    pe_array_cosim0->src_0_s3_26(src_0_s3[26]);
		    pe_array_cosim0->src_0_s3_27(src_0_s3[27]);
		    pe_array_cosim0->src_0_s3_28(src_0_s3[28]);
		    pe_array_cosim0->src_0_s3_29(src_0_s3[29]);
		    pe_array_cosim0->src_0_s3_30(src_0_s3[30]);
		    pe_array_cosim0->src_0_s3_31(src_0_s3[31]);
		    pe_array_cosim0->src_0_s4_0(src_0_s4[0]);
		    pe_array_cosim0->src_0_s4_1(src_0_s4[1]);
		    pe_array_cosim0->src_0_s4_2(src_0_s4[2]);
		    pe_array_cosim0->src_0_s4_3(src_0_s4[3]);
		    pe_array_cosim0->src_0_s4_4(src_0_s4[4]);
		    pe_array_cosim0->src_0_s4_5(src_0_s4[5]);
		    pe_array_cosim0->src_0_s4_6(src_0_s4[6]);
		    pe_array_cosim0->src_0_s4_7(src_0_s4[7]);
		    pe_array_cosim0->src_0_s4_8(src_0_s4[8]);
		    pe_array_cosim0->src_0_s4_9(src_0_s4[9]);
		    pe_array_cosim0->src_0_s4_10(src_0_s4[10]);
		    pe_array_cosim0->src_0_s4_11(src_0_s4[11]);
		    pe_array_cosim0->src_0_s4_12(src_0_s4[12]);
		    pe_array_cosim0->src_0_s4_13(src_0_s4[13]);
		    pe_array_cosim0->src_0_s4_14(src_0_s4[14]);
		    pe_array_cosim0->src_0_s4_15(src_0_s4[15]);
		    pe_array_cosim0->src_0_s4_16(src_0_s4[16]);
		    pe_array_cosim0->src_0_s4_17(src_0_s4[17]);
		    pe_array_cosim0->src_0_s4_18(src_0_s4[18]);
		    pe_array_cosim0->src_0_s4_19(src_0_s4[19]);
		    pe_array_cosim0->src_0_s4_20(src_0_s4[20]);
		    pe_array_cosim0->src_0_s4_21(src_0_s4[21]);
		    pe_array_cosim0->src_0_s4_22(src_0_s4[22]);
		    pe_array_cosim0->src_0_s4_23(src_0_s4[23]);
		    pe_array_cosim0->src_0_s4_24(src_0_s4[24]);
		    pe_array_cosim0->src_0_s4_25(src_0_s4[25]);
		    pe_array_cosim0->src_0_s4_26(src_0_s4[26]);
		    pe_array_cosim0->src_0_s4_27(src_0_s4[27]);
		    pe_array_cosim0->src_0_s4_28(src_0_s4[28]);
		    pe_array_cosim0->src_0_s4_29(src_0_s4[29]);
		    pe_array_cosim0->src_0_s4_30(src_0_s4[30]);
		    pe_array_cosim0->src_0_s4_31(src_0_s4[31]);
		    pe_array_cosim0->src_0_s5_0(src_0_s5[0]);
		    pe_array_cosim0->src_0_s5_1(src_0_s5[1]);
		    pe_array_cosim0->src_0_s5_2(src_0_s5[2]);
		    pe_array_cosim0->src_0_s5_3(src_0_s5[3]);
		    pe_array_cosim0->src_0_s5_4(src_0_s5[4]);
		    pe_array_cosim0->src_0_s5_5(src_0_s5[5]);
		    pe_array_cosim0->src_0_s5_6(src_0_s5[6]);
		    pe_array_cosim0->src_0_s5_7(src_0_s5[7]);
		    pe_array_cosim0->src_0_s5_8(src_0_s5[8]);
		    pe_array_cosim0->src_0_s5_9(src_0_s5[9]);
		    pe_array_cosim0->src_0_s5_10(src_0_s5[10]);
		    pe_array_cosim0->src_0_s5_11(src_0_s5[11]);
		    pe_array_cosim0->src_0_s5_12(src_0_s5[12]);
		    pe_array_cosim0->src_0_s5_13(src_0_s5[13]);
		    pe_array_cosim0->src_0_s5_14(src_0_s5[14]);
		    pe_array_cosim0->src_0_s5_15(src_0_s5[15]);
		    pe_array_cosim0->src_0_s5_16(src_0_s5[16]);
		    pe_array_cosim0->src_0_s5_17(src_0_s5[17]);
		    pe_array_cosim0->src_0_s5_18(src_0_s5[18]);
		    pe_array_cosim0->src_0_s5_19(src_0_s5[19]);
		    pe_array_cosim0->src_0_s5_20(src_0_s5[20]);
		    pe_array_cosim0->src_0_s5_21(src_0_s5[21]);
		    pe_array_cosim0->src_0_s5_22(src_0_s5[22]);
		    pe_array_cosim0->src_0_s5_23(src_0_s5[23]);
		    pe_array_cosim0->src_0_s5_24(src_0_s5[24]);
		    pe_array_cosim0->src_0_s5_25(src_0_s5[25]);
		    pe_array_cosim0->src_0_s5_26(src_0_s5[26]);
		    pe_array_cosim0->src_0_s5_27(src_0_s5[27]);
		    pe_array_cosim0->src_0_s5_28(src_0_s5[28]);
		    pe_array_cosim0->src_0_s5_29(src_0_s5[29]);
		    pe_array_cosim0->src_0_s5_30(src_0_s5[30]);
		    pe_array_cosim0->src_0_s5_31(src_0_s5[31]);
		    pe_array_cosim0->src_0_s6_0(src_0_s6[0]);
		    pe_array_cosim0->src_0_s6_1(src_0_s6[1]);
		    pe_array_cosim0->src_0_s6_2(src_0_s6[2]);
		    pe_array_cosim0->src_0_s6_3(src_0_s6[3]);
		    pe_array_cosim0->src_0_s6_4(src_0_s6[4]);
		    pe_array_cosim0->src_0_s6_5(src_0_s6[5]);
		    pe_array_cosim0->src_0_s6_6(src_0_s6[6]);
		    pe_array_cosim0->src_0_s6_7(src_0_s6[7]);
		    pe_array_cosim0->src_0_s6_8(src_0_s6[8]);
		    pe_array_cosim0->src_0_s6_9(src_0_s6[9]);
		    pe_array_cosim0->src_0_s6_10(src_0_s6[10]);
		    pe_array_cosim0->src_0_s6_11(src_0_s6[11]);
		    pe_array_cosim0->src_0_s6_12(src_0_s6[12]);
		    pe_array_cosim0->src_0_s6_13(src_0_s6[13]);
		    pe_array_cosim0->src_0_s6_14(src_0_s6[14]);
		    pe_array_cosim0->src_0_s6_15(src_0_s6[15]);
		    pe_array_cosim0->src_0_s6_16(src_0_s6[16]);
		    pe_array_cosim0->src_0_s6_17(src_0_s6[17]);
		    pe_array_cosim0->src_0_s6_18(src_0_s6[18]);
		    pe_array_cosim0->src_0_s6_19(src_0_s6[19]);
		    pe_array_cosim0->src_0_s6_20(src_0_s6[20]);
		    pe_array_cosim0->src_0_s6_21(src_0_s6[21]);
		    pe_array_cosim0->src_0_s6_22(src_0_s6[22]);
		    pe_array_cosim0->src_0_s6_23(src_0_s6[23]);
		    pe_array_cosim0->src_0_s6_24(src_0_s6[24]);
		    pe_array_cosim0->src_0_s6_25(src_0_s6[25]);
		    pe_array_cosim0->src_0_s6_26(src_0_s6[26]);
		    pe_array_cosim0->src_0_s6_27(src_0_s6[27]);
		    pe_array_cosim0->src_0_s6_28(src_0_s6[28]);
		    pe_array_cosim0->src_0_s6_29(src_0_s6[29]);
		    pe_array_cosim0->src_0_s6_30(src_0_s6[30]);
		    pe_array_cosim0->src_0_s6_31(src_0_s6[31]);
		    pe_array_cosim0->src_1_0(src_1[0]);
		    pe_array_cosim0->src_1_1(src_1[1]);
		    pe_array_cosim0->src_1_2(src_1[2]);
		    pe_array_cosim0->src_1_3(src_1[3]);
		    pe_array_cosim0->src_1_4(src_1[4]);
		    pe_array_cosim0->src_1_5(src_1[5]);
		    pe_array_cosim0->src_1_6(src_1[6]);
		    pe_array_cosim0->src_1_7(src_1[7]);
		    pe_array_cosim0->src_1_8(src_1[8]);
		    pe_array_cosim0->src_1_9(src_1[9]);
		    pe_array_cosim0->src_1_10(src_1[10]);
		    pe_array_cosim0->src_1_11(src_1[11]);
		    pe_array_cosim0->src_1_12(src_1[12]);
		    pe_array_cosim0->src_1_13(src_1[13]);
		    pe_array_cosim0->src_1_14(src_1[14]);
		    pe_array_cosim0->src_1_15(src_1[15]);
		    pe_array_cosim0->src_1_16(src_1[16]);
		    pe_array_cosim0->src_1_17(src_1[17]);
		    pe_array_cosim0->src_1_18(src_1[18]);
		    pe_array_cosim0->src_1_19(src_1[19]);
		    pe_array_cosim0->src_1_20(src_1[20]);
		    pe_array_cosim0->src_1_21(src_1[21]);
		    pe_array_cosim0->src_1_22(src_1[22]);
		    pe_array_cosim0->src_1_23(src_1[23]);
		    pe_array_cosim0->src_1_24(src_1[24]);
		    pe_array_cosim0->src_1_25(src_1[25]);
		    pe_array_cosim0->src_1_26(src_1[26]);
		    pe_array_cosim0->src_1_27(src_1[27]);
		    pe_array_cosim0->src_1_28(src_1[28]);
		    pe_array_cosim0->src_1_29(src_1[29]);
		    pe_array_cosim0->src_1_30(src_1[30]);
		    pe_array_cosim0->src_1_31(src_1[31]);
		    pe_array_cosim0->pe_data_0(pe_data[0]);
		    pe_array_cosim0->pe_data_1(pe_data[1]);
		    pe_array_cosim0->pe_data_2(pe_data[2]);
		    pe_array_cosim0->pe_data_3(pe_data[3]);
		    pe_array_cosim0->pe_data_4(pe_data[4]);
		    pe_array_cosim0->pe_data_5(pe_data[5]);
		    pe_array_cosim0->pe_data_6(pe_data[6]);
		    pe_array_cosim0->pe_data_7(pe_data[7]);
		    pe_array_cosim0->pe_data_8(pe_data[8]);
		    pe_array_cosim0->pe_data_9(pe_data[9]);
		    pe_array_cosim0->pe_data_10(pe_data[10]);
		    pe_array_cosim0->pe_data_11(pe_data[11]);
		    pe_array_cosim0->pe_data_12(pe_data[12]);
		    pe_array_cosim0->pe_data_13(pe_data[13]);
		    pe_array_cosim0->pe_data_14(pe_data[14]);
		    pe_array_cosim0->pe_data_15(pe_data[15]);
		    pe_array_cosim0->pe_data_16(pe_data[16]);
		    pe_array_cosim0->pe_data_17(pe_data[17]);
		    pe_array_cosim0->pe_data_18(pe_data[18]);
		    pe_array_cosim0->pe_data_19(pe_data[19]);
		    pe_array_cosim0->pe_data_20(pe_data[20]);
		    pe_array_cosim0->pe_data_21(pe_data[21]);
		    pe_array_cosim0->pe_data_22(pe_data[22]);
		    pe_array_cosim0->pe_data_23(pe_data[23]);
		    pe_array_cosim0->pe_data_24(pe_data[24]);
		    pe_array_cosim0->pe_data_25(pe_data[25]);
		    pe_array_cosim0->pe_data_26(pe_data[26]);
		    pe_array_cosim0->pe_data_27(pe_data[27]);
		    pe_array_cosim0->pe_data_28(pe_data[28]);
		    pe_array_cosim0->pe_data_29(pe_data[29]);
		    pe_array_cosim0->pe_data_30(pe_data[30]);
		    pe_array_cosim0->pe_data_31(pe_data[31]);
		    pe_array_cosim0->pe_data_valid(pe_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( pe_array_cycsim_factory_p )
                pe_array_cycsim0 = pe_array_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module pe_array");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"pe_array\"");

		    pe_array_cycsim0->clk(clk);
		    pe_array_cycsim0->rstn(rstn);
		    pe_array_cycsim0->enable(enable);
		    pe_array_cycsim0->src_vld(src_vld);
		    pe_array_cycsim0->clear(clear);
		    pe_array_cycsim0->init(init);
		    pe_array_cycsim0->systolic_en(systolic_en);
		    pe_array_cycsim0->systolic_depth(systolic_depth);
		    pe_array_cycsim0->mac_shift_len(mac_shift_len);
		    pe_array_cycsim0->src_0_s0_0(src_0_s0[0]);
		    pe_array_cycsim0->src_0_s0_1(src_0_s0[1]);
		    pe_array_cycsim0->src_0_s0_2(src_0_s0[2]);
		    pe_array_cycsim0->src_0_s0_3(src_0_s0[3]);
		    pe_array_cycsim0->src_0_s0_4(src_0_s0[4]);
		    pe_array_cycsim0->src_0_s0_5(src_0_s0[5]);
		    pe_array_cycsim0->src_0_s0_6(src_0_s0[6]);
		    pe_array_cycsim0->src_0_s0_7(src_0_s0[7]);
		    pe_array_cycsim0->src_0_s0_8(src_0_s0[8]);
		    pe_array_cycsim0->src_0_s0_9(src_0_s0[9]);
		    pe_array_cycsim0->src_0_s0_10(src_0_s0[10]);
		    pe_array_cycsim0->src_0_s0_11(src_0_s0[11]);
		    pe_array_cycsim0->src_0_s0_12(src_0_s0[12]);
		    pe_array_cycsim0->src_0_s0_13(src_0_s0[13]);
		    pe_array_cycsim0->src_0_s0_14(src_0_s0[14]);
		    pe_array_cycsim0->src_0_s0_15(src_0_s0[15]);
		    pe_array_cycsim0->src_0_s0_16(src_0_s0[16]);
		    pe_array_cycsim0->src_0_s0_17(src_0_s0[17]);
		    pe_array_cycsim0->src_0_s0_18(src_0_s0[18]);
		    pe_array_cycsim0->src_0_s0_19(src_0_s0[19]);
		    pe_array_cycsim0->src_0_s0_20(src_0_s0[20]);
		    pe_array_cycsim0->src_0_s0_21(src_0_s0[21]);
		    pe_array_cycsim0->src_0_s0_22(src_0_s0[22]);
		    pe_array_cycsim0->src_0_s0_23(src_0_s0[23]);
		    pe_array_cycsim0->src_0_s0_24(src_0_s0[24]);
		    pe_array_cycsim0->src_0_s0_25(src_0_s0[25]);
		    pe_array_cycsim0->src_0_s0_26(src_0_s0[26]);
		    pe_array_cycsim0->src_0_s0_27(src_0_s0[27]);
		    pe_array_cycsim0->src_0_s0_28(src_0_s0[28]);
		    pe_array_cycsim0->src_0_s0_29(src_0_s0[29]);
		    pe_array_cycsim0->src_0_s0_30(src_0_s0[30]);
		    pe_array_cycsim0->src_0_s0_31(src_0_s0[31]);
		    pe_array_cycsim0->src_0_s1_0(src_0_s1[0]);
		    pe_array_cycsim0->src_0_s1_1(src_0_s1[1]);
		    pe_array_cycsim0->src_0_s1_2(src_0_s1[2]);
		    pe_array_cycsim0->src_0_s1_3(src_0_s1[3]);
		    pe_array_cycsim0->src_0_s1_4(src_0_s1[4]);
		    pe_array_cycsim0->src_0_s1_5(src_0_s1[5]);
		    pe_array_cycsim0->src_0_s1_6(src_0_s1[6]);
		    pe_array_cycsim0->src_0_s1_7(src_0_s1[7]);
		    pe_array_cycsim0->src_0_s1_8(src_0_s1[8]);
		    pe_array_cycsim0->src_0_s1_9(src_0_s1[9]);
		    pe_array_cycsim0->src_0_s1_10(src_0_s1[10]);
		    pe_array_cycsim0->src_0_s1_11(src_0_s1[11]);
		    pe_array_cycsim0->src_0_s1_12(src_0_s1[12]);
		    pe_array_cycsim0->src_0_s1_13(src_0_s1[13]);
		    pe_array_cycsim0->src_0_s1_14(src_0_s1[14]);
		    pe_array_cycsim0->src_0_s1_15(src_0_s1[15]);
		    pe_array_cycsim0->src_0_s1_16(src_0_s1[16]);
		    pe_array_cycsim0->src_0_s1_17(src_0_s1[17]);
		    pe_array_cycsim0->src_0_s1_18(src_0_s1[18]);
		    pe_array_cycsim0->src_0_s1_19(src_0_s1[19]);
		    pe_array_cycsim0->src_0_s1_20(src_0_s1[20]);
		    pe_array_cycsim0->src_0_s1_21(src_0_s1[21]);
		    pe_array_cycsim0->src_0_s1_22(src_0_s1[22]);
		    pe_array_cycsim0->src_0_s1_23(src_0_s1[23]);
		    pe_array_cycsim0->src_0_s1_24(src_0_s1[24]);
		    pe_array_cycsim0->src_0_s1_25(src_0_s1[25]);
		    pe_array_cycsim0->src_0_s1_26(src_0_s1[26]);
		    pe_array_cycsim0->src_0_s1_27(src_0_s1[27]);
		    pe_array_cycsim0->src_0_s1_28(src_0_s1[28]);
		    pe_array_cycsim0->src_0_s1_29(src_0_s1[29]);
		    pe_array_cycsim0->src_0_s1_30(src_0_s1[30]);
		    pe_array_cycsim0->src_0_s1_31(src_0_s1[31]);
		    pe_array_cycsim0->src_0_s2_0(src_0_s2[0]);
		    pe_array_cycsim0->src_0_s2_1(src_0_s2[1]);
		    pe_array_cycsim0->src_0_s2_2(src_0_s2[2]);
		    pe_array_cycsim0->src_0_s2_3(src_0_s2[3]);
		    pe_array_cycsim0->src_0_s2_4(src_0_s2[4]);
		    pe_array_cycsim0->src_0_s2_5(src_0_s2[5]);
		    pe_array_cycsim0->src_0_s2_6(src_0_s2[6]);
		    pe_array_cycsim0->src_0_s2_7(src_0_s2[7]);
		    pe_array_cycsim0->src_0_s2_8(src_0_s2[8]);
		    pe_array_cycsim0->src_0_s2_9(src_0_s2[9]);
		    pe_array_cycsim0->src_0_s2_10(src_0_s2[10]);
		    pe_array_cycsim0->src_0_s2_11(src_0_s2[11]);
		    pe_array_cycsim0->src_0_s2_12(src_0_s2[12]);
		    pe_array_cycsim0->src_0_s2_13(src_0_s2[13]);
		    pe_array_cycsim0->src_0_s2_14(src_0_s2[14]);
		    pe_array_cycsim0->src_0_s2_15(src_0_s2[15]);
		    pe_array_cycsim0->src_0_s2_16(src_0_s2[16]);
		    pe_array_cycsim0->src_0_s2_17(src_0_s2[17]);
		    pe_array_cycsim0->src_0_s2_18(src_0_s2[18]);
		    pe_array_cycsim0->src_0_s2_19(src_0_s2[19]);
		    pe_array_cycsim0->src_0_s2_20(src_0_s2[20]);
		    pe_array_cycsim0->src_0_s2_21(src_0_s2[21]);
		    pe_array_cycsim0->src_0_s2_22(src_0_s2[22]);
		    pe_array_cycsim0->src_0_s2_23(src_0_s2[23]);
		    pe_array_cycsim0->src_0_s2_24(src_0_s2[24]);
		    pe_array_cycsim0->src_0_s2_25(src_0_s2[25]);
		    pe_array_cycsim0->src_0_s2_26(src_0_s2[26]);
		    pe_array_cycsim0->src_0_s2_27(src_0_s2[27]);
		    pe_array_cycsim0->src_0_s2_28(src_0_s2[28]);
		    pe_array_cycsim0->src_0_s2_29(src_0_s2[29]);
		    pe_array_cycsim0->src_0_s2_30(src_0_s2[30]);
		    pe_array_cycsim0->src_0_s2_31(src_0_s2[31]);
		    pe_array_cycsim0->src_0_s3_0(src_0_s3[0]);
		    pe_array_cycsim0->src_0_s3_1(src_0_s3[1]);
		    pe_array_cycsim0->src_0_s3_2(src_0_s3[2]);
		    pe_array_cycsim0->src_0_s3_3(src_0_s3[3]);
		    pe_array_cycsim0->src_0_s3_4(src_0_s3[4]);
		    pe_array_cycsim0->src_0_s3_5(src_0_s3[5]);
		    pe_array_cycsim0->src_0_s3_6(src_0_s3[6]);
		    pe_array_cycsim0->src_0_s3_7(src_0_s3[7]);
		    pe_array_cycsim0->src_0_s3_8(src_0_s3[8]);
		    pe_array_cycsim0->src_0_s3_9(src_0_s3[9]);
		    pe_array_cycsim0->src_0_s3_10(src_0_s3[10]);
		    pe_array_cycsim0->src_0_s3_11(src_0_s3[11]);
		    pe_array_cycsim0->src_0_s3_12(src_0_s3[12]);
		    pe_array_cycsim0->src_0_s3_13(src_0_s3[13]);
		    pe_array_cycsim0->src_0_s3_14(src_0_s3[14]);
		    pe_array_cycsim0->src_0_s3_15(src_0_s3[15]);
		    pe_array_cycsim0->src_0_s3_16(src_0_s3[16]);
		    pe_array_cycsim0->src_0_s3_17(src_0_s3[17]);
		    pe_array_cycsim0->src_0_s3_18(src_0_s3[18]);
		    pe_array_cycsim0->src_0_s3_19(src_0_s3[19]);
		    pe_array_cycsim0->src_0_s3_20(src_0_s3[20]);
		    pe_array_cycsim0->src_0_s3_21(src_0_s3[21]);
		    pe_array_cycsim0->src_0_s3_22(src_0_s3[22]);
		    pe_array_cycsim0->src_0_s3_23(src_0_s3[23]);
		    pe_array_cycsim0->src_0_s3_24(src_0_s3[24]);
		    pe_array_cycsim0->src_0_s3_25(src_0_s3[25]);
		    pe_array_cycsim0->src_0_s3_26(src_0_s3[26]);
		    pe_array_cycsim0->src_0_s3_27(src_0_s3[27]);
		    pe_array_cycsim0->src_0_s3_28(src_0_s3[28]);
		    pe_array_cycsim0->src_0_s3_29(src_0_s3[29]);
		    pe_array_cycsim0->src_0_s3_30(src_0_s3[30]);
		    pe_array_cycsim0->src_0_s3_31(src_0_s3[31]);
		    pe_array_cycsim0->src_0_s4_0(src_0_s4[0]);
		    pe_array_cycsim0->src_0_s4_1(src_0_s4[1]);
		    pe_array_cycsim0->src_0_s4_2(src_0_s4[2]);
		    pe_array_cycsim0->src_0_s4_3(src_0_s4[3]);
		    pe_array_cycsim0->src_0_s4_4(src_0_s4[4]);
		    pe_array_cycsim0->src_0_s4_5(src_0_s4[5]);
		    pe_array_cycsim0->src_0_s4_6(src_0_s4[6]);
		    pe_array_cycsim0->src_0_s4_7(src_0_s4[7]);
		    pe_array_cycsim0->src_0_s4_8(src_0_s4[8]);
		    pe_array_cycsim0->src_0_s4_9(src_0_s4[9]);
		    pe_array_cycsim0->src_0_s4_10(src_0_s4[10]);
		    pe_array_cycsim0->src_0_s4_11(src_0_s4[11]);
		    pe_array_cycsim0->src_0_s4_12(src_0_s4[12]);
		    pe_array_cycsim0->src_0_s4_13(src_0_s4[13]);
		    pe_array_cycsim0->src_0_s4_14(src_0_s4[14]);
		    pe_array_cycsim0->src_0_s4_15(src_0_s4[15]);
		    pe_array_cycsim0->src_0_s4_16(src_0_s4[16]);
		    pe_array_cycsim0->src_0_s4_17(src_0_s4[17]);
		    pe_array_cycsim0->src_0_s4_18(src_0_s4[18]);
		    pe_array_cycsim0->src_0_s4_19(src_0_s4[19]);
		    pe_array_cycsim0->src_0_s4_20(src_0_s4[20]);
		    pe_array_cycsim0->src_0_s4_21(src_0_s4[21]);
		    pe_array_cycsim0->src_0_s4_22(src_0_s4[22]);
		    pe_array_cycsim0->src_0_s4_23(src_0_s4[23]);
		    pe_array_cycsim0->src_0_s4_24(src_0_s4[24]);
		    pe_array_cycsim0->src_0_s4_25(src_0_s4[25]);
		    pe_array_cycsim0->src_0_s4_26(src_0_s4[26]);
		    pe_array_cycsim0->src_0_s4_27(src_0_s4[27]);
		    pe_array_cycsim0->src_0_s4_28(src_0_s4[28]);
		    pe_array_cycsim0->src_0_s4_29(src_0_s4[29]);
		    pe_array_cycsim0->src_0_s4_30(src_0_s4[30]);
		    pe_array_cycsim0->src_0_s4_31(src_0_s4[31]);
		    pe_array_cycsim0->src_0_s5_0(src_0_s5[0]);
		    pe_array_cycsim0->src_0_s5_1(src_0_s5[1]);
		    pe_array_cycsim0->src_0_s5_2(src_0_s5[2]);
		    pe_array_cycsim0->src_0_s5_3(src_0_s5[3]);
		    pe_array_cycsim0->src_0_s5_4(src_0_s5[4]);
		    pe_array_cycsim0->src_0_s5_5(src_0_s5[5]);
		    pe_array_cycsim0->src_0_s5_6(src_0_s5[6]);
		    pe_array_cycsim0->src_0_s5_7(src_0_s5[7]);
		    pe_array_cycsim0->src_0_s5_8(src_0_s5[8]);
		    pe_array_cycsim0->src_0_s5_9(src_0_s5[9]);
		    pe_array_cycsim0->src_0_s5_10(src_0_s5[10]);
		    pe_array_cycsim0->src_0_s5_11(src_0_s5[11]);
		    pe_array_cycsim0->src_0_s5_12(src_0_s5[12]);
		    pe_array_cycsim0->src_0_s5_13(src_0_s5[13]);
		    pe_array_cycsim0->src_0_s5_14(src_0_s5[14]);
		    pe_array_cycsim0->src_0_s5_15(src_0_s5[15]);
		    pe_array_cycsim0->src_0_s5_16(src_0_s5[16]);
		    pe_array_cycsim0->src_0_s5_17(src_0_s5[17]);
		    pe_array_cycsim0->src_0_s5_18(src_0_s5[18]);
		    pe_array_cycsim0->src_0_s5_19(src_0_s5[19]);
		    pe_array_cycsim0->src_0_s5_20(src_0_s5[20]);
		    pe_array_cycsim0->src_0_s5_21(src_0_s5[21]);
		    pe_array_cycsim0->src_0_s5_22(src_0_s5[22]);
		    pe_array_cycsim0->src_0_s5_23(src_0_s5[23]);
		    pe_array_cycsim0->src_0_s5_24(src_0_s5[24]);
		    pe_array_cycsim0->src_0_s5_25(src_0_s5[25]);
		    pe_array_cycsim0->src_0_s5_26(src_0_s5[26]);
		    pe_array_cycsim0->src_0_s5_27(src_0_s5[27]);
		    pe_array_cycsim0->src_0_s5_28(src_0_s5[28]);
		    pe_array_cycsim0->src_0_s5_29(src_0_s5[29]);
		    pe_array_cycsim0->src_0_s5_30(src_0_s5[30]);
		    pe_array_cycsim0->src_0_s5_31(src_0_s5[31]);
		    pe_array_cycsim0->src_0_s6_0(src_0_s6[0]);
		    pe_array_cycsim0->src_0_s6_1(src_0_s6[1]);
		    pe_array_cycsim0->src_0_s6_2(src_0_s6[2]);
		    pe_array_cycsim0->src_0_s6_3(src_0_s6[3]);
		    pe_array_cycsim0->src_0_s6_4(src_0_s6[4]);
		    pe_array_cycsim0->src_0_s6_5(src_0_s6[5]);
		    pe_array_cycsim0->src_0_s6_6(src_0_s6[6]);
		    pe_array_cycsim0->src_0_s6_7(src_0_s6[7]);
		    pe_array_cycsim0->src_0_s6_8(src_0_s6[8]);
		    pe_array_cycsim0->src_0_s6_9(src_0_s6[9]);
		    pe_array_cycsim0->src_0_s6_10(src_0_s6[10]);
		    pe_array_cycsim0->src_0_s6_11(src_0_s6[11]);
		    pe_array_cycsim0->src_0_s6_12(src_0_s6[12]);
		    pe_array_cycsim0->src_0_s6_13(src_0_s6[13]);
		    pe_array_cycsim0->src_0_s6_14(src_0_s6[14]);
		    pe_array_cycsim0->src_0_s6_15(src_0_s6[15]);
		    pe_array_cycsim0->src_0_s6_16(src_0_s6[16]);
		    pe_array_cycsim0->src_0_s6_17(src_0_s6[17]);
		    pe_array_cycsim0->src_0_s6_18(src_0_s6[18]);
		    pe_array_cycsim0->src_0_s6_19(src_0_s6[19]);
		    pe_array_cycsim0->src_0_s6_20(src_0_s6[20]);
		    pe_array_cycsim0->src_0_s6_21(src_0_s6[21]);
		    pe_array_cycsim0->src_0_s6_22(src_0_s6[22]);
		    pe_array_cycsim0->src_0_s6_23(src_0_s6[23]);
		    pe_array_cycsim0->src_0_s6_24(src_0_s6[24]);
		    pe_array_cycsim0->src_0_s6_25(src_0_s6[25]);
		    pe_array_cycsim0->src_0_s6_26(src_0_s6[26]);
		    pe_array_cycsim0->src_0_s6_27(src_0_s6[27]);
		    pe_array_cycsim0->src_0_s6_28(src_0_s6[28]);
		    pe_array_cycsim0->src_0_s6_29(src_0_s6[29]);
		    pe_array_cycsim0->src_0_s6_30(src_0_s6[30]);
		    pe_array_cycsim0->src_0_s6_31(src_0_s6[31]);
		    pe_array_cycsim0->src_1_0(src_1[0]);
		    pe_array_cycsim0->src_1_1(src_1[1]);
		    pe_array_cycsim0->src_1_2(src_1[2]);
		    pe_array_cycsim0->src_1_3(src_1[3]);
		    pe_array_cycsim0->src_1_4(src_1[4]);
		    pe_array_cycsim0->src_1_5(src_1[5]);
		    pe_array_cycsim0->src_1_6(src_1[6]);
		    pe_array_cycsim0->src_1_7(src_1[7]);
		    pe_array_cycsim0->src_1_8(src_1[8]);
		    pe_array_cycsim0->src_1_9(src_1[9]);
		    pe_array_cycsim0->src_1_10(src_1[10]);
		    pe_array_cycsim0->src_1_11(src_1[11]);
		    pe_array_cycsim0->src_1_12(src_1[12]);
		    pe_array_cycsim0->src_1_13(src_1[13]);
		    pe_array_cycsim0->src_1_14(src_1[14]);
		    pe_array_cycsim0->src_1_15(src_1[15]);
		    pe_array_cycsim0->src_1_16(src_1[16]);
		    pe_array_cycsim0->src_1_17(src_1[17]);
		    pe_array_cycsim0->src_1_18(src_1[18]);
		    pe_array_cycsim0->src_1_19(src_1[19]);
		    pe_array_cycsim0->src_1_20(src_1[20]);
		    pe_array_cycsim0->src_1_21(src_1[21]);
		    pe_array_cycsim0->src_1_22(src_1[22]);
		    pe_array_cycsim0->src_1_23(src_1[23]);
		    pe_array_cycsim0->src_1_24(src_1[24]);
		    pe_array_cycsim0->src_1_25(src_1[25]);
		    pe_array_cycsim0->src_1_26(src_1[26]);
		    pe_array_cycsim0->src_1_27(src_1[27]);
		    pe_array_cycsim0->src_1_28(src_1[28]);
		    pe_array_cycsim0->src_1_29(src_1[29]);
		    pe_array_cycsim0->src_1_30(src_1[30]);
		    pe_array_cycsim0->src_1_31(src_1[31]);
		    pe_array_cycsim0->pe_data_0(pe_data[0]);
		    pe_array_cycsim0->pe_data_1(pe_data[1]);
		    pe_array_cycsim0->pe_data_2(pe_data[2]);
		    pe_array_cycsim0->pe_data_3(pe_data[3]);
		    pe_array_cycsim0->pe_data_4(pe_data[4]);
		    pe_array_cycsim0->pe_data_5(pe_data[5]);
		    pe_array_cycsim0->pe_data_6(pe_data[6]);
		    pe_array_cycsim0->pe_data_7(pe_data[7]);
		    pe_array_cycsim0->pe_data_8(pe_data[8]);
		    pe_array_cycsim0->pe_data_9(pe_data[9]);
		    pe_array_cycsim0->pe_data_10(pe_data[10]);
		    pe_array_cycsim0->pe_data_11(pe_data[11]);
		    pe_array_cycsim0->pe_data_12(pe_data[12]);
		    pe_array_cycsim0->pe_data_13(pe_data[13]);
		    pe_array_cycsim0->pe_data_14(pe_data[14]);
		    pe_array_cycsim0->pe_data_15(pe_data[15]);
		    pe_array_cycsim0->pe_data_16(pe_data[16]);
		    pe_array_cycsim0->pe_data_17(pe_data[17]);
		    pe_array_cycsim0->pe_data_18(pe_data[18]);
		    pe_array_cycsim0->pe_data_19(pe_data[19]);
		    pe_array_cycsim0->pe_data_20(pe_data[20]);
		    pe_array_cycsim0->pe_data_21(pe_data[21]);
		    pe_array_cycsim0->pe_data_22(pe_data[22]);
		    pe_array_cycsim0->pe_data_23(pe_data[23]);
		    pe_array_cycsim0->pe_data_24(pe_data[24]);
		    pe_array_cycsim0->pe_data_25(pe_data[25]);
		    pe_array_cycsim0->pe_data_26(pe_data[26]);
		    pe_array_cycsim0->pe_data_27(pe_data[27]);
		    pe_array_cycsim0->pe_data_28(pe_data[28]);
		    pe_array_cycsim0->pe_data_29(pe_data[29]);
		    pe_array_cycsim0->pe_data_30(pe_data[30]);
		    pe_array_cycsim0->pe_data_31(pe_data[31]);
		    pe_array_cycsim0->pe_data_valid(pe_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_pe_array)
		case BDWRep_RTL_C:
		    pe_array_rtl0 = new pe_array_rtl( "pe_array" );

		    pe_array_rtl0->clk(clk);
		    pe_array_rtl0->rstn(rstn);
		    pe_array_rtl0->enable(enable);
		    pe_array_rtl0->src_vld(src_vld);
		    pe_array_rtl0->clear(clear);
		    pe_array_rtl0->init(init);
		    pe_array_rtl0->systolic_en(systolic_en);
		    pe_array_rtl0->systolic_depth(systolic_depth);
		    pe_array_rtl0->mac_shift_len(mac_shift_len);
		    pe_array_rtl0->src_0_s0_0(src_0_s0[0]);
		    pe_array_rtl0->src_0_s0_1(src_0_s0[1]);
		    pe_array_rtl0->src_0_s0_2(src_0_s0[2]);
		    pe_array_rtl0->src_0_s0_3(src_0_s0[3]);
		    pe_array_rtl0->src_0_s0_4(src_0_s0[4]);
		    pe_array_rtl0->src_0_s0_5(src_0_s0[5]);
		    pe_array_rtl0->src_0_s0_6(src_0_s0[6]);
		    pe_array_rtl0->src_0_s0_7(src_0_s0[7]);
		    pe_array_rtl0->src_0_s0_8(src_0_s0[8]);
		    pe_array_rtl0->src_0_s0_9(src_0_s0[9]);
		    pe_array_rtl0->src_0_s0_10(src_0_s0[10]);
		    pe_array_rtl0->src_0_s0_11(src_0_s0[11]);
		    pe_array_rtl0->src_0_s0_12(src_0_s0[12]);
		    pe_array_rtl0->src_0_s0_13(src_0_s0[13]);
		    pe_array_rtl0->src_0_s0_14(src_0_s0[14]);
		    pe_array_rtl0->src_0_s0_15(src_0_s0[15]);
		    pe_array_rtl0->src_0_s0_16(src_0_s0[16]);
		    pe_array_rtl0->src_0_s0_17(src_0_s0[17]);
		    pe_array_rtl0->src_0_s0_18(src_0_s0[18]);
		    pe_array_rtl0->src_0_s0_19(src_0_s0[19]);
		    pe_array_rtl0->src_0_s0_20(src_0_s0[20]);
		    pe_array_rtl0->src_0_s0_21(src_0_s0[21]);
		    pe_array_rtl0->src_0_s0_22(src_0_s0[22]);
		    pe_array_rtl0->src_0_s0_23(src_0_s0[23]);
		    pe_array_rtl0->src_0_s0_24(src_0_s0[24]);
		    pe_array_rtl0->src_0_s0_25(src_0_s0[25]);
		    pe_array_rtl0->src_0_s0_26(src_0_s0[26]);
		    pe_array_rtl0->src_0_s0_27(src_0_s0[27]);
		    pe_array_rtl0->src_0_s0_28(src_0_s0[28]);
		    pe_array_rtl0->src_0_s0_29(src_0_s0[29]);
		    pe_array_rtl0->src_0_s0_30(src_0_s0[30]);
		    pe_array_rtl0->src_0_s0_31(src_0_s0[31]);
		    pe_array_rtl0->src_0_s1_0(src_0_s1[0]);
		    pe_array_rtl0->src_0_s1_1(src_0_s1[1]);
		    pe_array_rtl0->src_0_s1_2(src_0_s1[2]);
		    pe_array_rtl0->src_0_s1_3(src_0_s1[3]);
		    pe_array_rtl0->src_0_s1_4(src_0_s1[4]);
		    pe_array_rtl0->src_0_s1_5(src_0_s1[5]);
		    pe_array_rtl0->src_0_s1_6(src_0_s1[6]);
		    pe_array_rtl0->src_0_s1_7(src_0_s1[7]);
		    pe_array_rtl0->src_0_s1_8(src_0_s1[8]);
		    pe_array_rtl0->src_0_s1_9(src_0_s1[9]);
		    pe_array_rtl0->src_0_s1_10(src_0_s1[10]);
		    pe_array_rtl0->src_0_s1_11(src_0_s1[11]);
		    pe_array_rtl0->src_0_s1_12(src_0_s1[12]);
		    pe_array_rtl0->src_0_s1_13(src_0_s1[13]);
		    pe_array_rtl0->src_0_s1_14(src_0_s1[14]);
		    pe_array_rtl0->src_0_s1_15(src_0_s1[15]);
		    pe_array_rtl0->src_0_s1_16(src_0_s1[16]);
		    pe_array_rtl0->src_0_s1_17(src_0_s1[17]);
		    pe_array_rtl0->src_0_s1_18(src_0_s1[18]);
		    pe_array_rtl0->src_0_s1_19(src_0_s1[19]);
		    pe_array_rtl0->src_0_s1_20(src_0_s1[20]);
		    pe_array_rtl0->src_0_s1_21(src_0_s1[21]);
		    pe_array_rtl0->src_0_s1_22(src_0_s1[22]);
		    pe_array_rtl0->src_0_s1_23(src_0_s1[23]);
		    pe_array_rtl0->src_0_s1_24(src_0_s1[24]);
		    pe_array_rtl0->src_0_s1_25(src_0_s1[25]);
		    pe_array_rtl0->src_0_s1_26(src_0_s1[26]);
		    pe_array_rtl0->src_0_s1_27(src_0_s1[27]);
		    pe_array_rtl0->src_0_s1_28(src_0_s1[28]);
		    pe_array_rtl0->src_0_s1_29(src_0_s1[29]);
		    pe_array_rtl0->src_0_s1_30(src_0_s1[30]);
		    pe_array_rtl0->src_0_s1_31(src_0_s1[31]);
		    pe_array_rtl0->src_0_s2_0(src_0_s2[0]);
		    pe_array_rtl0->src_0_s2_1(src_0_s2[1]);
		    pe_array_rtl0->src_0_s2_2(src_0_s2[2]);
		    pe_array_rtl0->src_0_s2_3(src_0_s2[3]);
		    pe_array_rtl0->src_0_s2_4(src_0_s2[4]);
		    pe_array_rtl0->src_0_s2_5(src_0_s2[5]);
		    pe_array_rtl0->src_0_s2_6(src_0_s2[6]);
		    pe_array_rtl0->src_0_s2_7(src_0_s2[7]);
		    pe_array_rtl0->src_0_s2_8(src_0_s2[8]);
		    pe_array_rtl0->src_0_s2_9(src_0_s2[9]);
		    pe_array_rtl0->src_0_s2_10(src_0_s2[10]);
		    pe_array_rtl0->src_0_s2_11(src_0_s2[11]);
		    pe_array_rtl0->src_0_s2_12(src_0_s2[12]);
		    pe_array_rtl0->src_0_s2_13(src_0_s2[13]);
		    pe_array_rtl0->src_0_s2_14(src_0_s2[14]);
		    pe_array_rtl0->src_0_s2_15(src_0_s2[15]);
		    pe_array_rtl0->src_0_s2_16(src_0_s2[16]);
		    pe_array_rtl0->src_0_s2_17(src_0_s2[17]);
		    pe_array_rtl0->src_0_s2_18(src_0_s2[18]);
		    pe_array_rtl0->src_0_s2_19(src_0_s2[19]);
		    pe_array_rtl0->src_0_s2_20(src_0_s2[20]);
		    pe_array_rtl0->src_0_s2_21(src_0_s2[21]);
		    pe_array_rtl0->src_0_s2_22(src_0_s2[22]);
		    pe_array_rtl0->src_0_s2_23(src_0_s2[23]);
		    pe_array_rtl0->src_0_s2_24(src_0_s2[24]);
		    pe_array_rtl0->src_0_s2_25(src_0_s2[25]);
		    pe_array_rtl0->src_0_s2_26(src_0_s2[26]);
		    pe_array_rtl0->src_0_s2_27(src_0_s2[27]);
		    pe_array_rtl0->src_0_s2_28(src_0_s2[28]);
		    pe_array_rtl0->src_0_s2_29(src_0_s2[29]);
		    pe_array_rtl0->src_0_s2_30(src_0_s2[30]);
		    pe_array_rtl0->src_0_s2_31(src_0_s2[31]);
		    pe_array_rtl0->src_0_s3_0(src_0_s3[0]);
		    pe_array_rtl0->src_0_s3_1(src_0_s3[1]);
		    pe_array_rtl0->src_0_s3_2(src_0_s3[2]);
		    pe_array_rtl0->src_0_s3_3(src_0_s3[3]);
		    pe_array_rtl0->src_0_s3_4(src_0_s3[4]);
		    pe_array_rtl0->src_0_s3_5(src_0_s3[5]);
		    pe_array_rtl0->src_0_s3_6(src_0_s3[6]);
		    pe_array_rtl0->src_0_s3_7(src_0_s3[7]);
		    pe_array_rtl0->src_0_s3_8(src_0_s3[8]);
		    pe_array_rtl0->src_0_s3_9(src_0_s3[9]);
		    pe_array_rtl0->src_0_s3_10(src_0_s3[10]);
		    pe_array_rtl0->src_0_s3_11(src_0_s3[11]);
		    pe_array_rtl0->src_0_s3_12(src_0_s3[12]);
		    pe_array_rtl0->src_0_s3_13(src_0_s3[13]);
		    pe_array_rtl0->src_0_s3_14(src_0_s3[14]);
		    pe_array_rtl0->src_0_s3_15(src_0_s3[15]);
		    pe_array_rtl0->src_0_s3_16(src_0_s3[16]);
		    pe_array_rtl0->src_0_s3_17(src_0_s3[17]);
		    pe_array_rtl0->src_0_s3_18(src_0_s3[18]);
		    pe_array_rtl0->src_0_s3_19(src_0_s3[19]);
		    pe_array_rtl0->src_0_s3_20(src_0_s3[20]);
		    pe_array_rtl0->src_0_s3_21(src_0_s3[21]);
		    pe_array_rtl0->src_0_s3_22(src_0_s3[22]);
		    pe_array_rtl0->src_0_s3_23(src_0_s3[23]);
		    pe_array_rtl0->src_0_s3_24(src_0_s3[24]);
		    pe_array_rtl0->src_0_s3_25(src_0_s3[25]);
		    pe_array_rtl0->src_0_s3_26(src_0_s3[26]);
		    pe_array_rtl0->src_0_s3_27(src_0_s3[27]);
		    pe_array_rtl0->src_0_s3_28(src_0_s3[28]);
		    pe_array_rtl0->src_0_s3_29(src_0_s3[29]);
		    pe_array_rtl0->src_0_s3_30(src_0_s3[30]);
		    pe_array_rtl0->src_0_s3_31(src_0_s3[31]);
		    pe_array_rtl0->src_0_s4_0(src_0_s4[0]);
		    pe_array_rtl0->src_0_s4_1(src_0_s4[1]);
		    pe_array_rtl0->src_0_s4_2(src_0_s4[2]);
		    pe_array_rtl0->src_0_s4_3(src_0_s4[3]);
		    pe_array_rtl0->src_0_s4_4(src_0_s4[4]);
		    pe_array_rtl0->src_0_s4_5(src_0_s4[5]);
		    pe_array_rtl0->src_0_s4_6(src_0_s4[6]);
		    pe_array_rtl0->src_0_s4_7(src_0_s4[7]);
		    pe_array_rtl0->src_0_s4_8(src_0_s4[8]);
		    pe_array_rtl0->src_0_s4_9(src_0_s4[9]);
		    pe_array_rtl0->src_0_s4_10(src_0_s4[10]);
		    pe_array_rtl0->src_0_s4_11(src_0_s4[11]);
		    pe_array_rtl0->src_0_s4_12(src_0_s4[12]);
		    pe_array_rtl0->src_0_s4_13(src_0_s4[13]);
		    pe_array_rtl0->src_0_s4_14(src_0_s4[14]);
		    pe_array_rtl0->src_0_s4_15(src_0_s4[15]);
		    pe_array_rtl0->src_0_s4_16(src_0_s4[16]);
		    pe_array_rtl0->src_0_s4_17(src_0_s4[17]);
		    pe_array_rtl0->src_0_s4_18(src_0_s4[18]);
		    pe_array_rtl0->src_0_s4_19(src_0_s4[19]);
		    pe_array_rtl0->src_0_s4_20(src_0_s4[20]);
		    pe_array_rtl0->src_0_s4_21(src_0_s4[21]);
		    pe_array_rtl0->src_0_s4_22(src_0_s4[22]);
		    pe_array_rtl0->src_0_s4_23(src_0_s4[23]);
		    pe_array_rtl0->src_0_s4_24(src_0_s4[24]);
		    pe_array_rtl0->src_0_s4_25(src_0_s4[25]);
		    pe_array_rtl0->src_0_s4_26(src_0_s4[26]);
		    pe_array_rtl0->src_0_s4_27(src_0_s4[27]);
		    pe_array_rtl0->src_0_s4_28(src_0_s4[28]);
		    pe_array_rtl0->src_0_s4_29(src_0_s4[29]);
		    pe_array_rtl0->src_0_s4_30(src_0_s4[30]);
		    pe_array_rtl0->src_0_s4_31(src_0_s4[31]);
		    pe_array_rtl0->src_0_s5_0(src_0_s5[0]);
		    pe_array_rtl0->src_0_s5_1(src_0_s5[1]);
		    pe_array_rtl0->src_0_s5_2(src_0_s5[2]);
		    pe_array_rtl0->src_0_s5_3(src_0_s5[3]);
		    pe_array_rtl0->src_0_s5_4(src_0_s5[4]);
		    pe_array_rtl0->src_0_s5_5(src_0_s5[5]);
		    pe_array_rtl0->src_0_s5_6(src_0_s5[6]);
		    pe_array_rtl0->src_0_s5_7(src_0_s5[7]);
		    pe_array_rtl0->src_0_s5_8(src_0_s5[8]);
		    pe_array_rtl0->src_0_s5_9(src_0_s5[9]);
		    pe_array_rtl0->src_0_s5_10(src_0_s5[10]);
		    pe_array_rtl0->src_0_s5_11(src_0_s5[11]);
		    pe_array_rtl0->src_0_s5_12(src_0_s5[12]);
		    pe_array_rtl0->src_0_s5_13(src_0_s5[13]);
		    pe_array_rtl0->src_0_s5_14(src_0_s5[14]);
		    pe_array_rtl0->src_0_s5_15(src_0_s5[15]);
		    pe_array_rtl0->src_0_s5_16(src_0_s5[16]);
		    pe_array_rtl0->src_0_s5_17(src_0_s5[17]);
		    pe_array_rtl0->src_0_s5_18(src_0_s5[18]);
		    pe_array_rtl0->src_0_s5_19(src_0_s5[19]);
		    pe_array_rtl0->src_0_s5_20(src_0_s5[20]);
		    pe_array_rtl0->src_0_s5_21(src_0_s5[21]);
		    pe_array_rtl0->src_0_s5_22(src_0_s5[22]);
		    pe_array_rtl0->src_0_s5_23(src_0_s5[23]);
		    pe_array_rtl0->src_0_s5_24(src_0_s5[24]);
		    pe_array_rtl0->src_0_s5_25(src_0_s5[25]);
		    pe_array_rtl0->src_0_s5_26(src_0_s5[26]);
		    pe_array_rtl0->src_0_s5_27(src_0_s5[27]);
		    pe_array_rtl0->src_0_s5_28(src_0_s5[28]);
		    pe_array_rtl0->src_0_s5_29(src_0_s5[29]);
		    pe_array_rtl0->src_0_s5_30(src_0_s5[30]);
		    pe_array_rtl0->src_0_s5_31(src_0_s5[31]);
		    pe_array_rtl0->src_0_s6_0(src_0_s6[0]);
		    pe_array_rtl0->src_0_s6_1(src_0_s6[1]);
		    pe_array_rtl0->src_0_s6_2(src_0_s6[2]);
		    pe_array_rtl0->src_0_s6_3(src_0_s6[3]);
		    pe_array_rtl0->src_0_s6_4(src_0_s6[4]);
		    pe_array_rtl0->src_0_s6_5(src_0_s6[5]);
		    pe_array_rtl0->src_0_s6_6(src_0_s6[6]);
		    pe_array_rtl0->src_0_s6_7(src_0_s6[7]);
		    pe_array_rtl0->src_0_s6_8(src_0_s6[8]);
		    pe_array_rtl0->src_0_s6_9(src_0_s6[9]);
		    pe_array_rtl0->src_0_s6_10(src_0_s6[10]);
		    pe_array_rtl0->src_0_s6_11(src_0_s6[11]);
		    pe_array_rtl0->src_0_s6_12(src_0_s6[12]);
		    pe_array_rtl0->src_0_s6_13(src_0_s6[13]);
		    pe_array_rtl0->src_0_s6_14(src_0_s6[14]);
		    pe_array_rtl0->src_0_s6_15(src_0_s6[15]);
		    pe_array_rtl0->src_0_s6_16(src_0_s6[16]);
		    pe_array_rtl0->src_0_s6_17(src_0_s6[17]);
		    pe_array_rtl0->src_0_s6_18(src_0_s6[18]);
		    pe_array_rtl0->src_0_s6_19(src_0_s6[19]);
		    pe_array_rtl0->src_0_s6_20(src_0_s6[20]);
		    pe_array_rtl0->src_0_s6_21(src_0_s6[21]);
		    pe_array_rtl0->src_0_s6_22(src_0_s6[22]);
		    pe_array_rtl0->src_0_s6_23(src_0_s6[23]);
		    pe_array_rtl0->src_0_s6_24(src_0_s6[24]);
		    pe_array_rtl0->src_0_s6_25(src_0_s6[25]);
		    pe_array_rtl0->src_0_s6_26(src_0_s6[26]);
		    pe_array_rtl0->src_0_s6_27(src_0_s6[27]);
		    pe_array_rtl0->src_0_s6_28(src_0_s6[28]);
		    pe_array_rtl0->src_0_s6_29(src_0_s6[29]);
		    pe_array_rtl0->src_0_s6_30(src_0_s6[30]);
		    pe_array_rtl0->src_0_s6_31(src_0_s6[31]);
		    pe_array_rtl0->src_1_0(src_1[0]);
		    pe_array_rtl0->src_1_1(src_1[1]);
		    pe_array_rtl0->src_1_2(src_1[2]);
		    pe_array_rtl0->src_1_3(src_1[3]);
		    pe_array_rtl0->src_1_4(src_1[4]);
		    pe_array_rtl0->src_1_5(src_1[5]);
		    pe_array_rtl0->src_1_6(src_1[6]);
		    pe_array_rtl0->src_1_7(src_1[7]);
		    pe_array_rtl0->src_1_8(src_1[8]);
		    pe_array_rtl0->src_1_9(src_1[9]);
		    pe_array_rtl0->src_1_10(src_1[10]);
		    pe_array_rtl0->src_1_11(src_1[11]);
		    pe_array_rtl0->src_1_12(src_1[12]);
		    pe_array_rtl0->src_1_13(src_1[13]);
		    pe_array_rtl0->src_1_14(src_1[14]);
		    pe_array_rtl0->src_1_15(src_1[15]);
		    pe_array_rtl0->src_1_16(src_1[16]);
		    pe_array_rtl0->src_1_17(src_1[17]);
		    pe_array_rtl0->src_1_18(src_1[18]);
		    pe_array_rtl0->src_1_19(src_1[19]);
		    pe_array_rtl0->src_1_20(src_1[20]);
		    pe_array_rtl0->src_1_21(src_1[21]);
		    pe_array_rtl0->src_1_22(src_1[22]);
		    pe_array_rtl0->src_1_23(src_1[23]);
		    pe_array_rtl0->src_1_24(src_1[24]);
		    pe_array_rtl0->src_1_25(src_1[25]);
		    pe_array_rtl0->src_1_26(src_1[26]);
		    pe_array_rtl0->src_1_27(src_1[27]);
		    pe_array_rtl0->src_1_28(src_1[28]);
		    pe_array_rtl0->src_1_29(src_1[29]);
		    pe_array_rtl0->src_1_30(src_1[30]);
		    pe_array_rtl0->src_1_31(src_1[31]);
		    pe_array_rtl0->pe_data_0(pe_data[0]);
		    pe_array_rtl0->pe_data_1(pe_data[1]);
		    pe_array_rtl0->pe_data_2(pe_data[2]);
		    pe_array_rtl0->pe_data_3(pe_data[3]);
		    pe_array_rtl0->pe_data_4(pe_data[4]);
		    pe_array_rtl0->pe_data_5(pe_data[5]);
		    pe_array_rtl0->pe_data_6(pe_data[6]);
		    pe_array_rtl0->pe_data_7(pe_data[7]);
		    pe_array_rtl0->pe_data_8(pe_data[8]);
		    pe_array_rtl0->pe_data_9(pe_data[9]);
		    pe_array_rtl0->pe_data_10(pe_data[10]);
		    pe_array_rtl0->pe_data_11(pe_data[11]);
		    pe_array_rtl0->pe_data_12(pe_data[12]);
		    pe_array_rtl0->pe_data_13(pe_data[13]);
		    pe_array_rtl0->pe_data_14(pe_data[14]);
		    pe_array_rtl0->pe_data_15(pe_data[15]);
		    pe_array_rtl0->pe_data_16(pe_data[16]);
		    pe_array_rtl0->pe_data_17(pe_data[17]);
		    pe_array_rtl0->pe_data_18(pe_data[18]);
		    pe_array_rtl0->pe_data_19(pe_data[19]);
		    pe_array_rtl0->pe_data_20(pe_data[20]);
		    pe_array_rtl0->pe_data_21(pe_data[21]);
		    pe_array_rtl0->pe_data_22(pe_data[22]);
		    pe_array_rtl0->pe_data_23(pe_data[23]);
		    pe_array_rtl0->pe_data_24(pe_data[24]);
		    pe_array_rtl0->pe_data_25(pe_data[25]);
		    pe_array_rtl0->pe_data_26(pe_data[26]);
		    pe_array_rtl0->pe_data_27(pe_data[27]);
		    pe_array_rtl0->pe_data_28(pe_data[28]);
		    pe_array_rtl0->pe_data_29(pe_data[29]);
		    pe_array_rtl0->pe_data_30(pe_data[30]);
		    pe_array_rtl0->pe_data_31(pe_data[31]);
		    pe_array_rtl0->pe_data_valid(pe_data_valid);


			{
			const char *simConfig = pe_array_wrapper::simConfigName();
			
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
		    pe_array0 = new pe_array( "pe_array" );

		    pe_array0->clk(clk);
		    pe_array0->rstn(rstn);
		    pe_array0->enable(enable);
		    pe_array0->src_vld(src_vld);
		    pe_array0->clear(clear);
		    pe_array0->init(init);
		    pe_array0->systolic_en(systolic_en);
		    pe_array0->systolic_depth(systolic_depth);
		    pe_array0->mac_shift_len(mac_shift_len);
		    pe_array0->src_0_s0[0](src_0_s0[0]);
		    pe_array0->src_0_s0[1](src_0_s0[1]);
		    pe_array0->src_0_s0[2](src_0_s0[2]);
		    pe_array0->src_0_s0[3](src_0_s0[3]);
		    pe_array0->src_0_s0[4](src_0_s0[4]);
		    pe_array0->src_0_s0[5](src_0_s0[5]);
		    pe_array0->src_0_s0[6](src_0_s0[6]);
		    pe_array0->src_0_s0[7](src_0_s0[7]);
		    pe_array0->src_0_s0[8](src_0_s0[8]);
		    pe_array0->src_0_s0[9](src_0_s0[9]);
		    pe_array0->src_0_s0[10](src_0_s0[10]);
		    pe_array0->src_0_s0[11](src_0_s0[11]);
		    pe_array0->src_0_s0[12](src_0_s0[12]);
		    pe_array0->src_0_s0[13](src_0_s0[13]);
		    pe_array0->src_0_s0[14](src_0_s0[14]);
		    pe_array0->src_0_s0[15](src_0_s0[15]);
		    pe_array0->src_0_s0[16](src_0_s0[16]);
		    pe_array0->src_0_s0[17](src_0_s0[17]);
		    pe_array0->src_0_s0[18](src_0_s0[18]);
		    pe_array0->src_0_s0[19](src_0_s0[19]);
		    pe_array0->src_0_s0[20](src_0_s0[20]);
		    pe_array0->src_0_s0[21](src_0_s0[21]);
		    pe_array0->src_0_s0[22](src_0_s0[22]);
		    pe_array0->src_0_s0[23](src_0_s0[23]);
		    pe_array0->src_0_s0[24](src_0_s0[24]);
		    pe_array0->src_0_s0[25](src_0_s0[25]);
		    pe_array0->src_0_s0[26](src_0_s0[26]);
		    pe_array0->src_0_s0[27](src_0_s0[27]);
		    pe_array0->src_0_s0[28](src_0_s0[28]);
		    pe_array0->src_0_s0[29](src_0_s0[29]);
		    pe_array0->src_0_s0[30](src_0_s0[30]);
		    pe_array0->src_0_s0[31](src_0_s0[31]);
		    pe_array0->src_0_s1[0](src_0_s1[0]);
		    pe_array0->src_0_s1[1](src_0_s1[1]);
		    pe_array0->src_0_s1[2](src_0_s1[2]);
		    pe_array0->src_0_s1[3](src_0_s1[3]);
		    pe_array0->src_0_s1[4](src_0_s1[4]);
		    pe_array0->src_0_s1[5](src_0_s1[5]);
		    pe_array0->src_0_s1[6](src_0_s1[6]);
		    pe_array0->src_0_s1[7](src_0_s1[7]);
		    pe_array0->src_0_s1[8](src_0_s1[8]);
		    pe_array0->src_0_s1[9](src_0_s1[9]);
		    pe_array0->src_0_s1[10](src_0_s1[10]);
		    pe_array0->src_0_s1[11](src_0_s1[11]);
		    pe_array0->src_0_s1[12](src_0_s1[12]);
		    pe_array0->src_0_s1[13](src_0_s1[13]);
		    pe_array0->src_0_s1[14](src_0_s1[14]);
		    pe_array0->src_0_s1[15](src_0_s1[15]);
		    pe_array0->src_0_s1[16](src_0_s1[16]);
		    pe_array0->src_0_s1[17](src_0_s1[17]);
		    pe_array0->src_0_s1[18](src_0_s1[18]);
		    pe_array0->src_0_s1[19](src_0_s1[19]);
		    pe_array0->src_0_s1[20](src_0_s1[20]);
		    pe_array0->src_0_s1[21](src_0_s1[21]);
		    pe_array0->src_0_s1[22](src_0_s1[22]);
		    pe_array0->src_0_s1[23](src_0_s1[23]);
		    pe_array0->src_0_s1[24](src_0_s1[24]);
		    pe_array0->src_0_s1[25](src_0_s1[25]);
		    pe_array0->src_0_s1[26](src_0_s1[26]);
		    pe_array0->src_0_s1[27](src_0_s1[27]);
		    pe_array0->src_0_s1[28](src_0_s1[28]);
		    pe_array0->src_0_s1[29](src_0_s1[29]);
		    pe_array0->src_0_s1[30](src_0_s1[30]);
		    pe_array0->src_0_s1[31](src_0_s1[31]);
		    pe_array0->src_0_s2[0](src_0_s2[0]);
		    pe_array0->src_0_s2[1](src_0_s2[1]);
		    pe_array0->src_0_s2[2](src_0_s2[2]);
		    pe_array0->src_0_s2[3](src_0_s2[3]);
		    pe_array0->src_0_s2[4](src_0_s2[4]);
		    pe_array0->src_0_s2[5](src_0_s2[5]);
		    pe_array0->src_0_s2[6](src_0_s2[6]);
		    pe_array0->src_0_s2[7](src_0_s2[7]);
		    pe_array0->src_0_s2[8](src_0_s2[8]);
		    pe_array0->src_0_s2[9](src_0_s2[9]);
		    pe_array0->src_0_s2[10](src_0_s2[10]);
		    pe_array0->src_0_s2[11](src_0_s2[11]);
		    pe_array0->src_0_s2[12](src_0_s2[12]);
		    pe_array0->src_0_s2[13](src_0_s2[13]);
		    pe_array0->src_0_s2[14](src_0_s2[14]);
		    pe_array0->src_0_s2[15](src_0_s2[15]);
		    pe_array0->src_0_s2[16](src_0_s2[16]);
		    pe_array0->src_0_s2[17](src_0_s2[17]);
		    pe_array0->src_0_s2[18](src_0_s2[18]);
		    pe_array0->src_0_s2[19](src_0_s2[19]);
		    pe_array0->src_0_s2[20](src_0_s2[20]);
		    pe_array0->src_0_s2[21](src_0_s2[21]);
		    pe_array0->src_0_s2[22](src_0_s2[22]);
		    pe_array0->src_0_s2[23](src_0_s2[23]);
		    pe_array0->src_0_s2[24](src_0_s2[24]);
		    pe_array0->src_0_s2[25](src_0_s2[25]);
		    pe_array0->src_0_s2[26](src_0_s2[26]);
		    pe_array0->src_0_s2[27](src_0_s2[27]);
		    pe_array0->src_0_s2[28](src_0_s2[28]);
		    pe_array0->src_0_s2[29](src_0_s2[29]);
		    pe_array0->src_0_s2[30](src_0_s2[30]);
		    pe_array0->src_0_s2[31](src_0_s2[31]);
		    pe_array0->src_0_s3[0](src_0_s3[0]);
		    pe_array0->src_0_s3[1](src_0_s3[1]);
		    pe_array0->src_0_s3[2](src_0_s3[2]);
		    pe_array0->src_0_s3[3](src_0_s3[3]);
		    pe_array0->src_0_s3[4](src_0_s3[4]);
		    pe_array0->src_0_s3[5](src_0_s3[5]);
		    pe_array0->src_0_s3[6](src_0_s3[6]);
		    pe_array0->src_0_s3[7](src_0_s3[7]);
		    pe_array0->src_0_s3[8](src_0_s3[8]);
		    pe_array0->src_0_s3[9](src_0_s3[9]);
		    pe_array0->src_0_s3[10](src_0_s3[10]);
		    pe_array0->src_0_s3[11](src_0_s3[11]);
		    pe_array0->src_0_s3[12](src_0_s3[12]);
		    pe_array0->src_0_s3[13](src_0_s3[13]);
		    pe_array0->src_0_s3[14](src_0_s3[14]);
		    pe_array0->src_0_s3[15](src_0_s3[15]);
		    pe_array0->src_0_s3[16](src_0_s3[16]);
		    pe_array0->src_0_s3[17](src_0_s3[17]);
		    pe_array0->src_0_s3[18](src_0_s3[18]);
		    pe_array0->src_0_s3[19](src_0_s3[19]);
		    pe_array0->src_0_s3[20](src_0_s3[20]);
		    pe_array0->src_0_s3[21](src_0_s3[21]);
		    pe_array0->src_0_s3[22](src_0_s3[22]);
		    pe_array0->src_0_s3[23](src_0_s3[23]);
		    pe_array0->src_0_s3[24](src_0_s3[24]);
		    pe_array0->src_0_s3[25](src_0_s3[25]);
		    pe_array0->src_0_s3[26](src_0_s3[26]);
		    pe_array0->src_0_s3[27](src_0_s3[27]);
		    pe_array0->src_0_s3[28](src_0_s3[28]);
		    pe_array0->src_0_s3[29](src_0_s3[29]);
		    pe_array0->src_0_s3[30](src_0_s3[30]);
		    pe_array0->src_0_s3[31](src_0_s3[31]);
		    pe_array0->src_0_s4[0](src_0_s4[0]);
		    pe_array0->src_0_s4[1](src_0_s4[1]);
		    pe_array0->src_0_s4[2](src_0_s4[2]);
		    pe_array0->src_0_s4[3](src_0_s4[3]);
		    pe_array0->src_0_s4[4](src_0_s4[4]);
		    pe_array0->src_0_s4[5](src_0_s4[5]);
		    pe_array0->src_0_s4[6](src_0_s4[6]);
		    pe_array0->src_0_s4[7](src_0_s4[7]);
		    pe_array0->src_0_s4[8](src_0_s4[8]);
		    pe_array0->src_0_s4[9](src_0_s4[9]);
		    pe_array0->src_0_s4[10](src_0_s4[10]);
		    pe_array0->src_0_s4[11](src_0_s4[11]);
		    pe_array0->src_0_s4[12](src_0_s4[12]);
		    pe_array0->src_0_s4[13](src_0_s4[13]);
		    pe_array0->src_0_s4[14](src_0_s4[14]);
		    pe_array0->src_0_s4[15](src_0_s4[15]);
		    pe_array0->src_0_s4[16](src_0_s4[16]);
		    pe_array0->src_0_s4[17](src_0_s4[17]);
		    pe_array0->src_0_s4[18](src_0_s4[18]);
		    pe_array0->src_0_s4[19](src_0_s4[19]);
		    pe_array0->src_0_s4[20](src_0_s4[20]);
		    pe_array0->src_0_s4[21](src_0_s4[21]);
		    pe_array0->src_0_s4[22](src_0_s4[22]);
		    pe_array0->src_0_s4[23](src_0_s4[23]);
		    pe_array0->src_0_s4[24](src_0_s4[24]);
		    pe_array0->src_0_s4[25](src_0_s4[25]);
		    pe_array0->src_0_s4[26](src_0_s4[26]);
		    pe_array0->src_0_s4[27](src_0_s4[27]);
		    pe_array0->src_0_s4[28](src_0_s4[28]);
		    pe_array0->src_0_s4[29](src_0_s4[29]);
		    pe_array0->src_0_s4[30](src_0_s4[30]);
		    pe_array0->src_0_s4[31](src_0_s4[31]);
		    pe_array0->src_0_s5[0](src_0_s5[0]);
		    pe_array0->src_0_s5[1](src_0_s5[1]);
		    pe_array0->src_0_s5[2](src_0_s5[2]);
		    pe_array0->src_0_s5[3](src_0_s5[3]);
		    pe_array0->src_0_s5[4](src_0_s5[4]);
		    pe_array0->src_0_s5[5](src_0_s5[5]);
		    pe_array0->src_0_s5[6](src_0_s5[6]);
		    pe_array0->src_0_s5[7](src_0_s5[7]);
		    pe_array0->src_0_s5[8](src_0_s5[8]);
		    pe_array0->src_0_s5[9](src_0_s5[9]);
		    pe_array0->src_0_s5[10](src_0_s5[10]);
		    pe_array0->src_0_s5[11](src_0_s5[11]);
		    pe_array0->src_0_s5[12](src_0_s5[12]);
		    pe_array0->src_0_s5[13](src_0_s5[13]);
		    pe_array0->src_0_s5[14](src_0_s5[14]);
		    pe_array0->src_0_s5[15](src_0_s5[15]);
		    pe_array0->src_0_s5[16](src_0_s5[16]);
		    pe_array0->src_0_s5[17](src_0_s5[17]);
		    pe_array0->src_0_s5[18](src_0_s5[18]);
		    pe_array0->src_0_s5[19](src_0_s5[19]);
		    pe_array0->src_0_s5[20](src_0_s5[20]);
		    pe_array0->src_0_s5[21](src_0_s5[21]);
		    pe_array0->src_0_s5[22](src_0_s5[22]);
		    pe_array0->src_0_s5[23](src_0_s5[23]);
		    pe_array0->src_0_s5[24](src_0_s5[24]);
		    pe_array0->src_0_s5[25](src_0_s5[25]);
		    pe_array0->src_0_s5[26](src_0_s5[26]);
		    pe_array0->src_0_s5[27](src_0_s5[27]);
		    pe_array0->src_0_s5[28](src_0_s5[28]);
		    pe_array0->src_0_s5[29](src_0_s5[29]);
		    pe_array0->src_0_s5[30](src_0_s5[30]);
		    pe_array0->src_0_s5[31](src_0_s5[31]);
		    pe_array0->src_0_s6[0](src_0_s6[0]);
		    pe_array0->src_0_s6[1](src_0_s6[1]);
		    pe_array0->src_0_s6[2](src_0_s6[2]);
		    pe_array0->src_0_s6[3](src_0_s6[3]);
		    pe_array0->src_0_s6[4](src_0_s6[4]);
		    pe_array0->src_0_s6[5](src_0_s6[5]);
		    pe_array0->src_0_s6[6](src_0_s6[6]);
		    pe_array0->src_0_s6[7](src_0_s6[7]);
		    pe_array0->src_0_s6[8](src_0_s6[8]);
		    pe_array0->src_0_s6[9](src_0_s6[9]);
		    pe_array0->src_0_s6[10](src_0_s6[10]);
		    pe_array0->src_0_s6[11](src_0_s6[11]);
		    pe_array0->src_0_s6[12](src_0_s6[12]);
		    pe_array0->src_0_s6[13](src_0_s6[13]);
		    pe_array0->src_0_s6[14](src_0_s6[14]);
		    pe_array0->src_0_s6[15](src_0_s6[15]);
		    pe_array0->src_0_s6[16](src_0_s6[16]);
		    pe_array0->src_0_s6[17](src_0_s6[17]);
		    pe_array0->src_0_s6[18](src_0_s6[18]);
		    pe_array0->src_0_s6[19](src_0_s6[19]);
		    pe_array0->src_0_s6[20](src_0_s6[20]);
		    pe_array0->src_0_s6[21](src_0_s6[21]);
		    pe_array0->src_0_s6[22](src_0_s6[22]);
		    pe_array0->src_0_s6[23](src_0_s6[23]);
		    pe_array0->src_0_s6[24](src_0_s6[24]);
		    pe_array0->src_0_s6[25](src_0_s6[25]);
		    pe_array0->src_0_s6[26](src_0_s6[26]);
		    pe_array0->src_0_s6[27](src_0_s6[27]);
		    pe_array0->src_0_s6[28](src_0_s6[28]);
		    pe_array0->src_0_s6[29](src_0_s6[29]);
		    pe_array0->src_0_s6[30](src_0_s6[30]);
		    pe_array0->src_0_s6[31](src_0_s6[31]);
		    pe_array0->src_1[0](src_1[0]);
		    pe_array0->src_1[1](src_1[1]);
		    pe_array0->src_1[2](src_1[2]);
		    pe_array0->src_1[3](src_1[3]);
		    pe_array0->src_1[4](src_1[4]);
		    pe_array0->src_1[5](src_1[5]);
		    pe_array0->src_1[6](src_1[6]);
		    pe_array0->src_1[7](src_1[7]);
		    pe_array0->src_1[8](src_1[8]);
		    pe_array0->src_1[9](src_1[9]);
		    pe_array0->src_1[10](src_1[10]);
		    pe_array0->src_1[11](src_1[11]);
		    pe_array0->src_1[12](src_1[12]);
		    pe_array0->src_1[13](src_1[13]);
		    pe_array0->src_1[14](src_1[14]);
		    pe_array0->src_1[15](src_1[15]);
		    pe_array0->src_1[16](src_1[16]);
		    pe_array0->src_1[17](src_1[17]);
		    pe_array0->src_1[18](src_1[18]);
		    pe_array0->src_1[19](src_1[19]);
		    pe_array0->src_1[20](src_1[20]);
		    pe_array0->src_1[21](src_1[21]);
		    pe_array0->src_1[22](src_1[22]);
		    pe_array0->src_1[23](src_1[23]);
		    pe_array0->src_1[24](src_1[24]);
		    pe_array0->src_1[25](src_1[25]);
		    pe_array0->src_1[26](src_1[26]);
		    pe_array0->src_1[27](src_1[27]);
		    pe_array0->src_1[28](src_1[28]);
		    pe_array0->src_1[29](src_1[29]);
		    pe_array0->src_1[30](src_1[30]);
		    pe_array0->src_1[31](src_1[31]);
		    pe_array0->pe_data[0](pe_data[0]);
		    pe_array0->pe_data[1](pe_data[1]);
		    pe_array0->pe_data[2](pe_data[2]);
		    pe_array0->pe_data[3](pe_data[3]);
		    pe_array0->pe_data[4](pe_data[4]);
		    pe_array0->pe_data[5](pe_data[5]);
		    pe_array0->pe_data[6](pe_data[6]);
		    pe_array0->pe_data[7](pe_data[7]);
		    pe_array0->pe_data[8](pe_data[8]);
		    pe_array0->pe_data[9](pe_data[9]);
		    pe_array0->pe_data[10](pe_data[10]);
		    pe_array0->pe_data[11](pe_data[11]);
		    pe_array0->pe_data[12](pe_data[12]);
		    pe_array0->pe_data[13](pe_data[13]);
		    pe_array0->pe_data[14](pe_data[14]);
		    pe_array0->pe_data[15](pe_data[15]);
		    pe_array0->pe_data[16](pe_data[16]);
		    pe_array0->pe_data[17](pe_data[17]);
		    pe_array0->pe_data[18](pe_data[18]);
		    pe_array0->pe_data[19](pe_data[19]);
		    pe_array0->pe_data[20](pe_data[20]);
		    pe_array0->pe_data[21](pe_data[21]);
		    pe_array0->pe_data[22](pe_data[22]);
		    pe_array0->pe_data[23](pe_data[23]);
		    pe_array0->pe_data[24](pe_data[24]);
		    pe_array0->pe_data[25](pe_data[25]);
		    pe_array0->pe_data[26](pe_data[26]);
		    pe_array0->pe_data[27](pe_data[27]);
		    pe_array0->pe_data[28](pe_data[28]);
		    pe_array0->pe_data[29](pe_data[29]);
		    pe_array0->pe_data[30](pe_data[30]);
		    pe_array0->pe_data[31](pe_data[31]);
		    pe_array0->pe_data_valid(pe_data_valid);


			{
			const char *simConfig = pe_array_wrapper::simConfigName();
			
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

void pe_array_wrapper::InitThreads()
{
	if ( !isBEH() )
	{
		
	}
}

void pe_array_wrapper::start_of_simulation()
{

#include <pe_array_trace.h>

    esc_multiple_writers_warning();
}

void pe_array_wrapper::CloseTrace()
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

void pe_array_wrapper::end_of_simulation()
{
	CloseTrace();
}



void pe_array_wrapper::DeleteInstances()
{
    if (pe_array0)
    {
        delete pe_array0;
        pe_array0 = 0;
    }
    if (pe_array_cosim0)
    {
        delete pe_array_cosim0;
        pe_array_cosim0 = 0;
    }
    if (pe_array_cycsim0)
    {
        delete pe_array_cycsim0;
        pe_array_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_pe_array)
    if (pe_array_rtl0)
    {
        delete pe_array_rtl0;
        pe_array_rtl0 = 0;
    }
#endif
}

// The following threads are used to connect RTL ports to the actual
// structured ports
void pe_array_wrapper_r::thread_src_0_s0_0()
{
   src_0_s0[0] = src_0_s0_0.read();
}
void pe_array_wrapper_r::thread_src_0_s0_1()
{
   src_0_s0[1] = src_0_s0_1.read();
}
void pe_array_wrapper_r::thread_src_0_s0_2()
{
   src_0_s0[2] = src_0_s0_2.read();
}
void pe_array_wrapper_r::thread_src_0_s0_3()
{
   src_0_s0[3] = src_0_s0_3.read();
}
void pe_array_wrapper_r::thread_src_0_s0_4()
{
   src_0_s0[4] = src_0_s0_4.read();
}
void pe_array_wrapper_r::thread_src_0_s0_5()
{
   src_0_s0[5] = src_0_s0_5.read();
}
void pe_array_wrapper_r::thread_src_0_s0_6()
{
   src_0_s0[6] = src_0_s0_6.read();
}
void pe_array_wrapper_r::thread_src_0_s0_7()
{
   src_0_s0[7] = src_0_s0_7.read();
}
void pe_array_wrapper_r::thread_src_0_s0_8()
{
   src_0_s0[8] = src_0_s0_8.read();
}
void pe_array_wrapper_r::thread_src_0_s0_9()
{
   src_0_s0[9] = src_0_s0_9.read();
}
void pe_array_wrapper_r::thread_src_0_s0_10()
{
   src_0_s0[10] = src_0_s0_10.read();
}
void pe_array_wrapper_r::thread_src_0_s0_11()
{
   src_0_s0[11] = src_0_s0_11.read();
}
void pe_array_wrapper_r::thread_src_0_s0_12()
{
   src_0_s0[12] = src_0_s0_12.read();
}
void pe_array_wrapper_r::thread_src_0_s0_13()
{
   src_0_s0[13] = src_0_s0_13.read();
}
void pe_array_wrapper_r::thread_src_0_s0_14()
{
   src_0_s0[14] = src_0_s0_14.read();
}
void pe_array_wrapper_r::thread_src_0_s0_15()
{
   src_0_s0[15] = src_0_s0_15.read();
}
void pe_array_wrapper_r::thread_src_0_s0_16()
{
   src_0_s0[16] = src_0_s0_16.read();
}
void pe_array_wrapper_r::thread_src_0_s0_17()
{
   src_0_s0[17] = src_0_s0_17.read();
}
void pe_array_wrapper_r::thread_src_0_s0_18()
{
   src_0_s0[18] = src_0_s0_18.read();
}
void pe_array_wrapper_r::thread_src_0_s0_19()
{
   src_0_s0[19] = src_0_s0_19.read();
}
void pe_array_wrapper_r::thread_src_0_s0_20()
{
   src_0_s0[20] = src_0_s0_20.read();
}
void pe_array_wrapper_r::thread_src_0_s0_21()
{
   src_0_s0[21] = src_0_s0_21.read();
}
void pe_array_wrapper_r::thread_src_0_s0_22()
{
   src_0_s0[22] = src_0_s0_22.read();
}
void pe_array_wrapper_r::thread_src_0_s0_23()
{
   src_0_s0[23] = src_0_s0_23.read();
}
void pe_array_wrapper_r::thread_src_0_s0_24()
{
   src_0_s0[24] = src_0_s0_24.read();
}
void pe_array_wrapper_r::thread_src_0_s0_25()
{
   src_0_s0[25] = src_0_s0_25.read();
}
void pe_array_wrapper_r::thread_src_0_s0_26()
{
   src_0_s0[26] = src_0_s0_26.read();
}
void pe_array_wrapper_r::thread_src_0_s0_27()
{
   src_0_s0[27] = src_0_s0_27.read();
}
void pe_array_wrapper_r::thread_src_0_s0_28()
{
   src_0_s0[28] = src_0_s0_28.read();
}
void pe_array_wrapper_r::thread_src_0_s0_29()
{
   src_0_s0[29] = src_0_s0_29.read();
}
void pe_array_wrapper_r::thread_src_0_s0_30()
{
   src_0_s0[30] = src_0_s0_30.read();
}
void pe_array_wrapper_r::thread_src_0_s0_31()
{
   src_0_s0[31] = src_0_s0_31.read();
}
void pe_array_wrapper_r::thread_src_0_s1_0()
{
   src_0_s1[0] = src_0_s1_0.read();
}
void pe_array_wrapper_r::thread_src_0_s1_1()
{
   src_0_s1[1] = src_0_s1_1.read();
}
void pe_array_wrapper_r::thread_src_0_s1_2()
{
   src_0_s1[2] = src_0_s1_2.read();
}
void pe_array_wrapper_r::thread_src_0_s1_3()
{
   src_0_s1[3] = src_0_s1_3.read();
}
void pe_array_wrapper_r::thread_src_0_s1_4()
{
   src_0_s1[4] = src_0_s1_4.read();
}
void pe_array_wrapper_r::thread_src_0_s1_5()
{
   src_0_s1[5] = src_0_s1_5.read();
}
void pe_array_wrapper_r::thread_src_0_s1_6()
{
   src_0_s1[6] = src_0_s1_6.read();
}
void pe_array_wrapper_r::thread_src_0_s1_7()
{
   src_0_s1[7] = src_0_s1_7.read();
}
void pe_array_wrapper_r::thread_src_0_s1_8()
{
   src_0_s1[8] = src_0_s1_8.read();
}
void pe_array_wrapper_r::thread_src_0_s1_9()
{
   src_0_s1[9] = src_0_s1_9.read();
}
void pe_array_wrapper_r::thread_src_0_s1_10()
{
   src_0_s1[10] = src_0_s1_10.read();
}
void pe_array_wrapper_r::thread_src_0_s1_11()
{
   src_0_s1[11] = src_0_s1_11.read();
}
void pe_array_wrapper_r::thread_src_0_s1_12()
{
   src_0_s1[12] = src_0_s1_12.read();
}
void pe_array_wrapper_r::thread_src_0_s1_13()
{
   src_0_s1[13] = src_0_s1_13.read();
}
void pe_array_wrapper_r::thread_src_0_s1_14()
{
   src_0_s1[14] = src_0_s1_14.read();
}
void pe_array_wrapper_r::thread_src_0_s1_15()
{
   src_0_s1[15] = src_0_s1_15.read();
}
void pe_array_wrapper_r::thread_src_0_s1_16()
{
   src_0_s1[16] = src_0_s1_16.read();
}
void pe_array_wrapper_r::thread_src_0_s1_17()
{
   src_0_s1[17] = src_0_s1_17.read();
}
void pe_array_wrapper_r::thread_src_0_s1_18()
{
   src_0_s1[18] = src_0_s1_18.read();
}
void pe_array_wrapper_r::thread_src_0_s1_19()
{
   src_0_s1[19] = src_0_s1_19.read();
}
void pe_array_wrapper_r::thread_src_0_s1_20()
{
   src_0_s1[20] = src_0_s1_20.read();
}
void pe_array_wrapper_r::thread_src_0_s1_21()
{
   src_0_s1[21] = src_0_s1_21.read();
}
void pe_array_wrapper_r::thread_src_0_s1_22()
{
   src_0_s1[22] = src_0_s1_22.read();
}
void pe_array_wrapper_r::thread_src_0_s1_23()
{
   src_0_s1[23] = src_0_s1_23.read();
}
void pe_array_wrapper_r::thread_src_0_s1_24()
{
   src_0_s1[24] = src_0_s1_24.read();
}
void pe_array_wrapper_r::thread_src_0_s1_25()
{
   src_0_s1[25] = src_0_s1_25.read();
}
void pe_array_wrapper_r::thread_src_0_s1_26()
{
   src_0_s1[26] = src_0_s1_26.read();
}
void pe_array_wrapper_r::thread_src_0_s1_27()
{
   src_0_s1[27] = src_0_s1_27.read();
}
void pe_array_wrapper_r::thread_src_0_s1_28()
{
   src_0_s1[28] = src_0_s1_28.read();
}
void pe_array_wrapper_r::thread_src_0_s1_29()
{
   src_0_s1[29] = src_0_s1_29.read();
}
void pe_array_wrapper_r::thread_src_0_s1_30()
{
   src_0_s1[30] = src_0_s1_30.read();
}
void pe_array_wrapper_r::thread_src_0_s1_31()
{
   src_0_s1[31] = src_0_s1_31.read();
}
void pe_array_wrapper_r::thread_src_0_s2_0()
{
   src_0_s2[0] = src_0_s2_0.read();
}
void pe_array_wrapper_r::thread_src_0_s2_1()
{
   src_0_s2[1] = src_0_s2_1.read();
}
void pe_array_wrapper_r::thread_src_0_s2_2()
{
   src_0_s2[2] = src_0_s2_2.read();
}
void pe_array_wrapper_r::thread_src_0_s2_3()
{
   src_0_s2[3] = src_0_s2_3.read();
}
void pe_array_wrapper_r::thread_src_0_s2_4()
{
   src_0_s2[4] = src_0_s2_4.read();
}
void pe_array_wrapper_r::thread_src_0_s2_5()
{
   src_0_s2[5] = src_0_s2_5.read();
}
void pe_array_wrapper_r::thread_src_0_s2_6()
{
   src_0_s2[6] = src_0_s2_6.read();
}
void pe_array_wrapper_r::thread_src_0_s2_7()
{
   src_0_s2[7] = src_0_s2_7.read();
}
void pe_array_wrapper_r::thread_src_0_s2_8()
{
   src_0_s2[8] = src_0_s2_8.read();
}
void pe_array_wrapper_r::thread_src_0_s2_9()
{
   src_0_s2[9] = src_0_s2_9.read();
}
void pe_array_wrapper_r::thread_src_0_s2_10()
{
   src_0_s2[10] = src_0_s2_10.read();
}
void pe_array_wrapper_r::thread_src_0_s2_11()
{
   src_0_s2[11] = src_0_s2_11.read();
}
void pe_array_wrapper_r::thread_src_0_s2_12()
{
   src_0_s2[12] = src_0_s2_12.read();
}
void pe_array_wrapper_r::thread_src_0_s2_13()
{
   src_0_s2[13] = src_0_s2_13.read();
}
void pe_array_wrapper_r::thread_src_0_s2_14()
{
   src_0_s2[14] = src_0_s2_14.read();
}
void pe_array_wrapper_r::thread_src_0_s2_15()
{
   src_0_s2[15] = src_0_s2_15.read();
}
void pe_array_wrapper_r::thread_src_0_s2_16()
{
   src_0_s2[16] = src_0_s2_16.read();
}
void pe_array_wrapper_r::thread_src_0_s2_17()
{
   src_0_s2[17] = src_0_s2_17.read();
}
void pe_array_wrapper_r::thread_src_0_s2_18()
{
   src_0_s2[18] = src_0_s2_18.read();
}
void pe_array_wrapper_r::thread_src_0_s2_19()
{
   src_0_s2[19] = src_0_s2_19.read();
}
void pe_array_wrapper_r::thread_src_0_s2_20()
{
   src_0_s2[20] = src_0_s2_20.read();
}
void pe_array_wrapper_r::thread_src_0_s2_21()
{
   src_0_s2[21] = src_0_s2_21.read();
}
void pe_array_wrapper_r::thread_src_0_s2_22()
{
   src_0_s2[22] = src_0_s2_22.read();
}
void pe_array_wrapper_r::thread_src_0_s2_23()
{
   src_0_s2[23] = src_0_s2_23.read();
}
void pe_array_wrapper_r::thread_src_0_s2_24()
{
   src_0_s2[24] = src_0_s2_24.read();
}
void pe_array_wrapper_r::thread_src_0_s2_25()
{
   src_0_s2[25] = src_0_s2_25.read();
}
void pe_array_wrapper_r::thread_src_0_s2_26()
{
   src_0_s2[26] = src_0_s2_26.read();
}
void pe_array_wrapper_r::thread_src_0_s2_27()
{
   src_0_s2[27] = src_0_s2_27.read();
}
void pe_array_wrapper_r::thread_src_0_s2_28()
{
   src_0_s2[28] = src_0_s2_28.read();
}
void pe_array_wrapper_r::thread_src_0_s2_29()
{
   src_0_s2[29] = src_0_s2_29.read();
}
void pe_array_wrapper_r::thread_src_0_s2_30()
{
   src_0_s2[30] = src_0_s2_30.read();
}
void pe_array_wrapper_r::thread_src_0_s2_31()
{
   src_0_s2[31] = src_0_s2_31.read();
}
void pe_array_wrapper_r::thread_src_0_s3_0()
{
   src_0_s3[0] = src_0_s3_0.read();
}
void pe_array_wrapper_r::thread_src_0_s3_1()
{
   src_0_s3[1] = src_0_s3_1.read();
}
void pe_array_wrapper_r::thread_src_0_s3_2()
{
   src_0_s3[2] = src_0_s3_2.read();
}
void pe_array_wrapper_r::thread_src_0_s3_3()
{
   src_0_s3[3] = src_0_s3_3.read();
}
void pe_array_wrapper_r::thread_src_0_s3_4()
{
   src_0_s3[4] = src_0_s3_4.read();
}
void pe_array_wrapper_r::thread_src_0_s3_5()
{
   src_0_s3[5] = src_0_s3_5.read();
}
void pe_array_wrapper_r::thread_src_0_s3_6()
{
   src_0_s3[6] = src_0_s3_6.read();
}
void pe_array_wrapper_r::thread_src_0_s3_7()
{
   src_0_s3[7] = src_0_s3_7.read();
}
void pe_array_wrapper_r::thread_src_0_s3_8()
{
   src_0_s3[8] = src_0_s3_8.read();
}
void pe_array_wrapper_r::thread_src_0_s3_9()
{
   src_0_s3[9] = src_0_s3_9.read();
}
void pe_array_wrapper_r::thread_src_0_s3_10()
{
   src_0_s3[10] = src_0_s3_10.read();
}
void pe_array_wrapper_r::thread_src_0_s3_11()
{
   src_0_s3[11] = src_0_s3_11.read();
}
void pe_array_wrapper_r::thread_src_0_s3_12()
{
   src_0_s3[12] = src_0_s3_12.read();
}
void pe_array_wrapper_r::thread_src_0_s3_13()
{
   src_0_s3[13] = src_0_s3_13.read();
}
void pe_array_wrapper_r::thread_src_0_s3_14()
{
   src_0_s3[14] = src_0_s3_14.read();
}
void pe_array_wrapper_r::thread_src_0_s3_15()
{
   src_0_s3[15] = src_0_s3_15.read();
}
void pe_array_wrapper_r::thread_src_0_s3_16()
{
   src_0_s3[16] = src_0_s3_16.read();
}
void pe_array_wrapper_r::thread_src_0_s3_17()
{
   src_0_s3[17] = src_0_s3_17.read();
}
void pe_array_wrapper_r::thread_src_0_s3_18()
{
   src_0_s3[18] = src_0_s3_18.read();
}
void pe_array_wrapper_r::thread_src_0_s3_19()
{
   src_0_s3[19] = src_0_s3_19.read();
}
void pe_array_wrapper_r::thread_src_0_s3_20()
{
   src_0_s3[20] = src_0_s3_20.read();
}
void pe_array_wrapper_r::thread_src_0_s3_21()
{
   src_0_s3[21] = src_0_s3_21.read();
}
void pe_array_wrapper_r::thread_src_0_s3_22()
{
   src_0_s3[22] = src_0_s3_22.read();
}
void pe_array_wrapper_r::thread_src_0_s3_23()
{
   src_0_s3[23] = src_0_s3_23.read();
}
void pe_array_wrapper_r::thread_src_0_s3_24()
{
   src_0_s3[24] = src_0_s3_24.read();
}
void pe_array_wrapper_r::thread_src_0_s3_25()
{
   src_0_s3[25] = src_0_s3_25.read();
}
void pe_array_wrapper_r::thread_src_0_s3_26()
{
   src_0_s3[26] = src_0_s3_26.read();
}
void pe_array_wrapper_r::thread_src_0_s3_27()
{
   src_0_s3[27] = src_0_s3_27.read();
}
void pe_array_wrapper_r::thread_src_0_s3_28()
{
   src_0_s3[28] = src_0_s3_28.read();
}
void pe_array_wrapper_r::thread_src_0_s3_29()
{
   src_0_s3[29] = src_0_s3_29.read();
}
void pe_array_wrapper_r::thread_src_0_s3_30()
{
   src_0_s3[30] = src_0_s3_30.read();
}
void pe_array_wrapper_r::thread_src_0_s3_31()
{
   src_0_s3[31] = src_0_s3_31.read();
}
void pe_array_wrapper_r::thread_src_0_s4_0()
{
   src_0_s4[0] = src_0_s4_0.read();
}
void pe_array_wrapper_r::thread_src_0_s4_1()
{
   src_0_s4[1] = src_0_s4_1.read();
}
void pe_array_wrapper_r::thread_src_0_s4_2()
{
   src_0_s4[2] = src_0_s4_2.read();
}
void pe_array_wrapper_r::thread_src_0_s4_3()
{
   src_0_s4[3] = src_0_s4_3.read();
}
void pe_array_wrapper_r::thread_src_0_s4_4()
{
   src_0_s4[4] = src_0_s4_4.read();
}
void pe_array_wrapper_r::thread_src_0_s4_5()
{
   src_0_s4[5] = src_0_s4_5.read();
}
void pe_array_wrapper_r::thread_src_0_s4_6()
{
   src_0_s4[6] = src_0_s4_6.read();
}
void pe_array_wrapper_r::thread_src_0_s4_7()
{
   src_0_s4[7] = src_0_s4_7.read();
}
void pe_array_wrapper_r::thread_src_0_s4_8()
{
   src_0_s4[8] = src_0_s4_8.read();
}
void pe_array_wrapper_r::thread_src_0_s4_9()
{
   src_0_s4[9] = src_0_s4_9.read();
}
void pe_array_wrapper_r::thread_src_0_s4_10()
{
   src_0_s4[10] = src_0_s4_10.read();
}
void pe_array_wrapper_r::thread_src_0_s4_11()
{
   src_0_s4[11] = src_0_s4_11.read();
}
void pe_array_wrapper_r::thread_src_0_s4_12()
{
   src_0_s4[12] = src_0_s4_12.read();
}
void pe_array_wrapper_r::thread_src_0_s4_13()
{
   src_0_s4[13] = src_0_s4_13.read();
}
void pe_array_wrapper_r::thread_src_0_s4_14()
{
   src_0_s4[14] = src_0_s4_14.read();
}
void pe_array_wrapper_r::thread_src_0_s4_15()
{
   src_0_s4[15] = src_0_s4_15.read();
}
void pe_array_wrapper_r::thread_src_0_s4_16()
{
   src_0_s4[16] = src_0_s4_16.read();
}
void pe_array_wrapper_r::thread_src_0_s4_17()
{
   src_0_s4[17] = src_0_s4_17.read();
}
void pe_array_wrapper_r::thread_src_0_s4_18()
{
   src_0_s4[18] = src_0_s4_18.read();
}
void pe_array_wrapper_r::thread_src_0_s4_19()
{
   src_0_s4[19] = src_0_s4_19.read();
}
void pe_array_wrapper_r::thread_src_0_s4_20()
{
   src_0_s4[20] = src_0_s4_20.read();
}
void pe_array_wrapper_r::thread_src_0_s4_21()
{
   src_0_s4[21] = src_0_s4_21.read();
}
void pe_array_wrapper_r::thread_src_0_s4_22()
{
   src_0_s4[22] = src_0_s4_22.read();
}
void pe_array_wrapper_r::thread_src_0_s4_23()
{
   src_0_s4[23] = src_0_s4_23.read();
}
void pe_array_wrapper_r::thread_src_0_s4_24()
{
   src_0_s4[24] = src_0_s4_24.read();
}
void pe_array_wrapper_r::thread_src_0_s4_25()
{
   src_0_s4[25] = src_0_s4_25.read();
}
void pe_array_wrapper_r::thread_src_0_s4_26()
{
   src_0_s4[26] = src_0_s4_26.read();
}
void pe_array_wrapper_r::thread_src_0_s4_27()
{
   src_0_s4[27] = src_0_s4_27.read();
}
void pe_array_wrapper_r::thread_src_0_s4_28()
{
   src_0_s4[28] = src_0_s4_28.read();
}
void pe_array_wrapper_r::thread_src_0_s4_29()
{
   src_0_s4[29] = src_0_s4_29.read();
}
void pe_array_wrapper_r::thread_src_0_s4_30()
{
   src_0_s4[30] = src_0_s4_30.read();
}
void pe_array_wrapper_r::thread_src_0_s4_31()
{
   src_0_s4[31] = src_0_s4_31.read();
}
void pe_array_wrapper_r::thread_src_0_s5_0()
{
   src_0_s5[0] = src_0_s5_0.read();
}
void pe_array_wrapper_r::thread_src_0_s5_1()
{
   src_0_s5[1] = src_0_s5_1.read();
}
void pe_array_wrapper_r::thread_src_0_s5_2()
{
   src_0_s5[2] = src_0_s5_2.read();
}
void pe_array_wrapper_r::thread_src_0_s5_3()
{
   src_0_s5[3] = src_0_s5_3.read();
}
void pe_array_wrapper_r::thread_src_0_s5_4()
{
   src_0_s5[4] = src_0_s5_4.read();
}
void pe_array_wrapper_r::thread_src_0_s5_5()
{
   src_0_s5[5] = src_0_s5_5.read();
}
void pe_array_wrapper_r::thread_src_0_s5_6()
{
   src_0_s5[6] = src_0_s5_6.read();
}
void pe_array_wrapper_r::thread_src_0_s5_7()
{
   src_0_s5[7] = src_0_s5_7.read();
}
void pe_array_wrapper_r::thread_src_0_s5_8()
{
   src_0_s5[8] = src_0_s5_8.read();
}
void pe_array_wrapper_r::thread_src_0_s5_9()
{
   src_0_s5[9] = src_0_s5_9.read();
}
void pe_array_wrapper_r::thread_src_0_s5_10()
{
   src_0_s5[10] = src_0_s5_10.read();
}
void pe_array_wrapper_r::thread_src_0_s5_11()
{
   src_0_s5[11] = src_0_s5_11.read();
}
void pe_array_wrapper_r::thread_src_0_s5_12()
{
   src_0_s5[12] = src_0_s5_12.read();
}
void pe_array_wrapper_r::thread_src_0_s5_13()
{
   src_0_s5[13] = src_0_s5_13.read();
}
void pe_array_wrapper_r::thread_src_0_s5_14()
{
   src_0_s5[14] = src_0_s5_14.read();
}
void pe_array_wrapper_r::thread_src_0_s5_15()
{
   src_0_s5[15] = src_0_s5_15.read();
}
void pe_array_wrapper_r::thread_src_0_s5_16()
{
   src_0_s5[16] = src_0_s5_16.read();
}
void pe_array_wrapper_r::thread_src_0_s5_17()
{
   src_0_s5[17] = src_0_s5_17.read();
}
void pe_array_wrapper_r::thread_src_0_s5_18()
{
   src_0_s5[18] = src_0_s5_18.read();
}
void pe_array_wrapper_r::thread_src_0_s5_19()
{
   src_0_s5[19] = src_0_s5_19.read();
}
void pe_array_wrapper_r::thread_src_0_s5_20()
{
   src_0_s5[20] = src_0_s5_20.read();
}
void pe_array_wrapper_r::thread_src_0_s5_21()
{
   src_0_s5[21] = src_0_s5_21.read();
}
void pe_array_wrapper_r::thread_src_0_s5_22()
{
   src_0_s5[22] = src_0_s5_22.read();
}
void pe_array_wrapper_r::thread_src_0_s5_23()
{
   src_0_s5[23] = src_0_s5_23.read();
}
void pe_array_wrapper_r::thread_src_0_s5_24()
{
   src_0_s5[24] = src_0_s5_24.read();
}
void pe_array_wrapper_r::thread_src_0_s5_25()
{
   src_0_s5[25] = src_0_s5_25.read();
}
void pe_array_wrapper_r::thread_src_0_s5_26()
{
   src_0_s5[26] = src_0_s5_26.read();
}
void pe_array_wrapper_r::thread_src_0_s5_27()
{
   src_0_s5[27] = src_0_s5_27.read();
}
void pe_array_wrapper_r::thread_src_0_s5_28()
{
   src_0_s5[28] = src_0_s5_28.read();
}
void pe_array_wrapper_r::thread_src_0_s5_29()
{
   src_0_s5[29] = src_0_s5_29.read();
}
void pe_array_wrapper_r::thread_src_0_s5_30()
{
   src_0_s5[30] = src_0_s5_30.read();
}
void pe_array_wrapper_r::thread_src_0_s5_31()
{
   src_0_s5[31] = src_0_s5_31.read();
}
void pe_array_wrapper_r::thread_src_0_s6_0()
{
   src_0_s6[0] = src_0_s6_0.read();
}
void pe_array_wrapper_r::thread_src_0_s6_1()
{
   src_0_s6[1] = src_0_s6_1.read();
}
void pe_array_wrapper_r::thread_src_0_s6_2()
{
   src_0_s6[2] = src_0_s6_2.read();
}
void pe_array_wrapper_r::thread_src_0_s6_3()
{
   src_0_s6[3] = src_0_s6_3.read();
}
void pe_array_wrapper_r::thread_src_0_s6_4()
{
   src_0_s6[4] = src_0_s6_4.read();
}
void pe_array_wrapper_r::thread_src_0_s6_5()
{
   src_0_s6[5] = src_0_s6_5.read();
}
void pe_array_wrapper_r::thread_src_0_s6_6()
{
   src_0_s6[6] = src_0_s6_6.read();
}
void pe_array_wrapper_r::thread_src_0_s6_7()
{
   src_0_s6[7] = src_0_s6_7.read();
}
void pe_array_wrapper_r::thread_src_0_s6_8()
{
   src_0_s6[8] = src_0_s6_8.read();
}
void pe_array_wrapper_r::thread_src_0_s6_9()
{
   src_0_s6[9] = src_0_s6_9.read();
}
void pe_array_wrapper_r::thread_src_0_s6_10()
{
   src_0_s6[10] = src_0_s6_10.read();
}
void pe_array_wrapper_r::thread_src_0_s6_11()
{
   src_0_s6[11] = src_0_s6_11.read();
}
void pe_array_wrapper_r::thread_src_0_s6_12()
{
   src_0_s6[12] = src_0_s6_12.read();
}
void pe_array_wrapper_r::thread_src_0_s6_13()
{
   src_0_s6[13] = src_0_s6_13.read();
}
void pe_array_wrapper_r::thread_src_0_s6_14()
{
   src_0_s6[14] = src_0_s6_14.read();
}
void pe_array_wrapper_r::thread_src_0_s6_15()
{
   src_0_s6[15] = src_0_s6_15.read();
}
void pe_array_wrapper_r::thread_src_0_s6_16()
{
   src_0_s6[16] = src_0_s6_16.read();
}
void pe_array_wrapper_r::thread_src_0_s6_17()
{
   src_0_s6[17] = src_0_s6_17.read();
}
void pe_array_wrapper_r::thread_src_0_s6_18()
{
   src_0_s6[18] = src_0_s6_18.read();
}
void pe_array_wrapper_r::thread_src_0_s6_19()
{
   src_0_s6[19] = src_0_s6_19.read();
}
void pe_array_wrapper_r::thread_src_0_s6_20()
{
   src_0_s6[20] = src_0_s6_20.read();
}
void pe_array_wrapper_r::thread_src_0_s6_21()
{
   src_0_s6[21] = src_0_s6_21.read();
}
void pe_array_wrapper_r::thread_src_0_s6_22()
{
   src_0_s6[22] = src_0_s6_22.read();
}
void pe_array_wrapper_r::thread_src_0_s6_23()
{
   src_0_s6[23] = src_0_s6_23.read();
}
void pe_array_wrapper_r::thread_src_0_s6_24()
{
   src_0_s6[24] = src_0_s6_24.read();
}
void pe_array_wrapper_r::thread_src_0_s6_25()
{
   src_0_s6[25] = src_0_s6_25.read();
}
void pe_array_wrapper_r::thread_src_0_s6_26()
{
   src_0_s6[26] = src_0_s6_26.read();
}
void pe_array_wrapper_r::thread_src_0_s6_27()
{
   src_0_s6[27] = src_0_s6_27.read();
}
void pe_array_wrapper_r::thread_src_0_s6_28()
{
   src_0_s6[28] = src_0_s6_28.read();
}
void pe_array_wrapper_r::thread_src_0_s6_29()
{
   src_0_s6[29] = src_0_s6_29.read();
}
void pe_array_wrapper_r::thread_src_0_s6_30()
{
   src_0_s6[30] = src_0_s6_30.read();
}
void pe_array_wrapper_r::thread_src_0_s6_31()
{
   src_0_s6[31] = src_0_s6_31.read();
}
void pe_array_wrapper_r::thread_src_1_0()
{
   src_1[0] = src_1_0.read();
}
void pe_array_wrapper_r::thread_src_1_1()
{
   src_1[1] = src_1_1.read();
}
void pe_array_wrapper_r::thread_src_1_2()
{
   src_1[2] = src_1_2.read();
}
void pe_array_wrapper_r::thread_src_1_3()
{
   src_1[3] = src_1_3.read();
}
void pe_array_wrapper_r::thread_src_1_4()
{
   src_1[4] = src_1_4.read();
}
void pe_array_wrapper_r::thread_src_1_5()
{
   src_1[5] = src_1_5.read();
}
void pe_array_wrapper_r::thread_src_1_6()
{
   src_1[6] = src_1_6.read();
}
void pe_array_wrapper_r::thread_src_1_7()
{
   src_1[7] = src_1_7.read();
}
void pe_array_wrapper_r::thread_src_1_8()
{
   src_1[8] = src_1_8.read();
}
void pe_array_wrapper_r::thread_src_1_9()
{
   src_1[9] = src_1_9.read();
}
void pe_array_wrapper_r::thread_src_1_10()
{
   src_1[10] = src_1_10.read();
}
void pe_array_wrapper_r::thread_src_1_11()
{
   src_1[11] = src_1_11.read();
}
void pe_array_wrapper_r::thread_src_1_12()
{
   src_1[12] = src_1_12.read();
}
void pe_array_wrapper_r::thread_src_1_13()
{
   src_1[13] = src_1_13.read();
}
void pe_array_wrapper_r::thread_src_1_14()
{
   src_1[14] = src_1_14.read();
}
void pe_array_wrapper_r::thread_src_1_15()
{
   src_1[15] = src_1_15.read();
}
void pe_array_wrapper_r::thread_src_1_16()
{
   src_1[16] = src_1_16.read();
}
void pe_array_wrapper_r::thread_src_1_17()
{
   src_1[17] = src_1_17.read();
}
void pe_array_wrapper_r::thread_src_1_18()
{
   src_1[18] = src_1_18.read();
}
void pe_array_wrapper_r::thread_src_1_19()
{
   src_1[19] = src_1_19.read();
}
void pe_array_wrapper_r::thread_src_1_20()
{
   src_1[20] = src_1_20.read();
}
void pe_array_wrapper_r::thread_src_1_21()
{
   src_1[21] = src_1_21.read();
}
void pe_array_wrapper_r::thread_src_1_22()
{
   src_1[22] = src_1_22.read();
}
void pe_array_wrapper_r::thread_src_1_23()
{
   src_1[23] = src_1_23.read();
}
void pe_array_wrapper_r::thread_src_1_24()
{
   src_1[24] = src_1_24.read();
}
void pe_array_wrapper_r::thread_src_1_25()
{
   src_1[25] = src_1_25.read();
}
void pe_array_wrapper_r::thread_src_1_26()
{
   src_1[26] = src_1_26.read();
}
void pe_array_wrapper_r::thread_src_1_27()
{
   src_1[27] = src_1_27.read();
}
void pe_array_wrapper_r::thread_src_1_28()
{
   src_1[28] = src_1_28.read();
}
void pe_array_wrapper_r::thread_src_1_29()
{
   src_1[29] = src_1_29.read();
}
void pe_array_wrapper_r::thread_src_1_30()
{
   src_1[30] = src_1_30.read();
}
void pe_array_wrapper_r::thread_src_1_31()
{
   src_1[31] = src_1_31.read();
}
void pe_array_wrapper_r::thread_pe_data_0()
{
   sc_int< 32 > tmp;
   tmp = pe_data[0].read();
   pe_data_0.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_1()
{
   sc_int< 32 > tmp;
   tmp = pe_data[1].read();
   pe_data_1.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_2()
{
   sc_int< 32 > tmp;
   tmp = pe_data[2].read();
   pe_data_2.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_3()
{
   sc_int< 32 > tmp;
   tmp = pe_data[3].read();
   pe_data_3.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_4()
{
   sc_int< 32 > tmp;
   tmp = pe_data[4].read();
   pe_data_4.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_5()
{
   sc_int< 32 > tmp;
   tmp = pe_data[5].read();
   pe_data_5.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_6()
{
   sc_int< 32 > tmp;
   tmp = pe_data[6].read();
   pe_data_6.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_7()
{
   sc_int< 32 > tmp;
   tmp = pe_data[7].read();
   pe_data_7.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_8()
{
   sc_int< 32 > tmp;
   tmp = pe_data[8].read();
   pe_data_8.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_9()
{
   sc_int< 32 > tmp;
   tmp = pe_data[9].read();
   pe_data_9.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_10()
{
   sc_int< 32 > tmp;
   tmp = pe_data[10].read();
   pe_data_10.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_11()
{
   sc_int< 32 > tmp;
   tmp = pe_data[11].read();
   pe_data_11.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_12()
{
   sc_int< 32 > tmp;
   tmp = pe_data[12].read();
   pe_data_12.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_13()
{
   sc_int< 32 > tmp;
   tmp = pe_data[13].read();
   pe_data_13.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_14()
{
   sc_int< 32 > tmp;
   tmp = pe_data[14].read();
   pe_data_14.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_15()
{
   sc_int< 32 > tmp;
   tmp = pe_data[15].read();
   pe_data_15.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_16()
{
   sc_int< 32 > tmp;
   tmp = pe_data[16].read();
   pe_data_16.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_17()
{
   sc_int< 32 > tmp;
   tmp = pe_data[17].read();
   pe_data_17.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_18()
{
   sc_int< 32 > tmp;
   tmp = pe_data[18].read();
   pe_data_18.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_19()
{
   sc_int< 32 > tmp;
   tmp = pe_data[19].read();
   pe_data_19.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_20()
{
   sc_int< 32 > tmp;
   tmp = pe_data[20].read();
   pe_data_20.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_21()
{
   sc_int< 32 > tmp;
   tmp = pe_data[21].read();
   pe_data_21.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_22()
{
   sc_int< 32 > tmp;
   tmp = pe_data[22].read();
   pe_data_22.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_23()
{
   sc_int< 32 > tmp;
   tmp = pe_data[23].read();
   pe_data_23.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_24()
{
   sc_int< 32 > tmp;
   tmp = pe_data[24].read();
   pe_data_24.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_25()
{
   sc_int< 32 > tmp;
   tmp = pe_data[25].read();
   pe_data_25.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_26()
{
   sc_int< 32 > tmp;
   tmp = pe_data[26].read();
   pe_data_26.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_27()
{
   sc_int< 32 > tmp;
   tmp = pe_data[27].read();
   pe_data_27.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_28()
{
   sc_int< 32 > tmp;
   tmp = pe_data[28].read();
   pe_data_28.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_29()
{
   sc_int< 32 > tmp;
   tmp = pe_data[29].read();
   pe_data_29.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_30()
{
   sc_int< 32 > tmp;
   tmp = pe_data[30].read();
   pe_data_30.write(tmp);
}
void pe_array_wrapper_r::thread_pe_data_31()
{
   sc_int< 32 > tmp;
   tmp = pe_data[31].read();
   pe_data_31.write(tmp);
}


const char * pe_array_wrapper_r::simConfigName()
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

enum pe_array_wrapper_r::Representation pe_array_wrapper_r::lookupRepresentation( const char* instName )
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
	err = qbhGetRepresentation(hProj, "pe_array", simConfig, instName, &iresult );
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

void pe_array_wrapper_r::InitInstances()
{
    enum pe_array_wrapper_r::Representation rep =
		pe_array_wrapper_r::lookupRepresentation( name() );

	esc_log_wrapper_inst( "pe_array" );
	esc_log_representation( "pe_array", name(), rep );

	switch ( rep )
	{
		case BDWRep_Gates:
		    pe_array_cosim0 = new pe_array_cosim( "pe_array" );

		    pe_array_cosim0->clk(clk);
		    pe_array_cosim0->rstn(rstn);
		    pe_array_cosim0->enable(enable);
		    pe_array_cosim0->src_vld(src_vld);
		    pe_array_cosim0->clear(clear);
		    pe_array_cosim0->init(init);
		    pe_array_cosim0->systolic_en(systolic_en);
		    pe_array_cosim0->systolic_depth(systolic_depth);
		    pe_array_cosim0->mac_shift_len(mac_shift_len);
		    pe_array_cosim0->src_0_s0_0(src_0_s0_0);
		    pe_array_cosim0->src_0_s0_1(src_0_s0_1);
		    pe_array_cosim0->src_0_s0_2(src_0_s0_2);
		    pe_array_cosim0->src_0_s0_3(src_0_s0_3);
		    pe_array_cosim0->src_0_s0_4(src_0_s0_4);
		    pe_array_cosim0->src_0_s0_5(src_0_s0_5);
		    pe_array_cosim0->src_0_s0_6(src_0_s0_6);
		    pe_array_cosim0->src_0_s0_7(src_0_s0_7);
		    pe_array_cosim0->src_0_s0_8(src_0_s0_8);
		    pe_array_cosim0->src_0_s0_9(src_0_s0_9);
		    pe_array_cosim0->src_0_s0_10(src_0_s0_10);
		    pe_array_cosim0->src_0_s0_11(src_0_s0_11);
		    pe_array_cosim0->src_0_s0_12(src_0_s0_12);
		    pe_array_cosim0->src_0_s0_13(src_0_s0_13);
		    pe_array_cosim0->src_0_s0_14(src_0_s0_14);
		    pe_array_cosim0->src_0_s0_15(src_0_s0_15);
		    pe_array_cosim0->src_0_s0_16(src_0_s0_16);
		    pe_array_cosim0->src_0_s0_17(src_0_s0_17);
		    pe_array_cosim0->src_0_s0_18(src_0_s0_18);
		    pe_array_cosim0->src_0_s0_19(src_0_s0_19);
		    pe_array_cosim0->src_0_s0_20(src_0_s0_20);
		    pe_array_cosim0->src_0_s0_21(src_0_s0_21);
		    pe_array_cosim0->src_0_s0_22(src_0_s0_22);
		    pe_array_cosim0->src_0_s0_23(src_0_s0_23);
		    pe_array_cosim0->src_0_s0_24(src_0_s0_24);
		    pe_array_cosim0->src_0_s0_25(src_0_s0_25);
		    pe_array_cosim0->src_0_s0_26(src_0_s0_26);
		    pe_array_cosim0->src_0_s0_27(src_0_s0_27);
		    pe_array_cosim0->src_0_s0_28(src_0_s0_28);
		    pe_array_cosim0->src_0_s0_29(src_0_s0_29);
		    pe_array_cosim0->src_0_s0_30(src_0_s0_30);
		    pe_array_cosim0->src_0_s0_31(src_0_s0_31);
		    pe_array_cosim0->src_0_s1_0(src_0_s1_0);
		    pe_array_cosim0->src_0_s1_1(src_0_s1_1);
		    pe_array_cosim0->src_0_s1_2(src_0_s1_2);
		    pe_array_cosim0->src_0_s1_3(src_0_s1_3);
		    pe_array_cosim0->src_0_s1_4(src_0_s1_4);
		    pe_array_cosim0->src_0_s1_5(src_0_s1_5);
		    pe_array_cosim0->src_0_s1_6(src_0_s1_6);
		    pe_array_cosim0->src_0_s1_7(src_0_s1_7);
		    pe_array_cosim0->src_0_s1_8(src_0_s1_8);
		    pe_array_cosim0->src_0_s1_9(src_0_s1_9);
		    pe_array_cosim0->src_0_s1_10(src_0_s1_10);
		    pe_array_cosim0->src_0_s1_11(src_0_s1_11);
		    pe_array_cosim0->src_0_s1_12(src_0_s1_12);
		    pe_array_cosim0->src_0_s1_13(src_0_s1_13);
		    pe_array_cosim0->src_0_s1_14(src_0_s1_14);
		    pe_array_cosim0->src_0_s1_15(src_0_s1_15);
		    pe_array_cosim0->src_0_s1_16(src_0_s1_16);
		    pe_array_cosim0->src_0_s1_17(src_0_s1_17);
		    pe_array_cosim0->src_0_s1_18(src_0_s1_18);
		    pe_array_cosim0->src_0_s1_19(src_0_s1_19);
		    pe_array_cosim0->src_0_s1_20(src_0_s1_20);
		    pe_array_cosim0->src_0_s1_21(src_0_s1_21);
		    pe_array_cosim0->src_0_s1_22(src_0_s1_22);
		    pe_array_cosim0->src_0_s1_23(src_0_s1_23);
		    pe_array_cosim0->src_0_s1_24(src_0_s1_24);
		    pe_array_cosim0->src_0_s1_25(src_0_s1_25);
		    pe_array_cosim0->src_0_s1_26(src_0_s1_26);
		    pe_array_cosim0->src_0_s1_27(src_0_s1_27);
		    pe_array_cosim0->src_0_s1_28(src_0_s1_28);
		    pe_array_cosim0->src_0_s1_29(src_0_s1_29);
		    pe_array_cosim0->src_0_s1_30(src_0_s1_30);
		    pe_array_cosim0->src_0_s1_31(src_0_s1_31);
		    pe_array_cosim0->src_0_s2_0(src_0_s2_0);
		    pe_array_cosim0->src_0_s2_1(src_0_s2_1);
		    pe_array_cosim0->src_0_s2_2(src_0_s2_2);
		    pe_array_cosim0->src_0_s2_3(src_0_s2_3);
		    pe_array_cosim0->src_0_s2_4(src_0_s2_4);
		    pe_array_cosim0->src_0_s2_5(src_0_s2_5);
		    pe_array_cosim0->src_0_s2_6(src_0_s2_6);
		    pe_array_cosim0->src_0_s2_7(src_0_s2_7);
		    pe_array_cosim0->src_0_s2_8(src_0_s2_8);
		    pe_array_cosim0->src_0_s2_9(src_0_s2_9);
		    pe_array_cosim0->src_0_s2_10(src_0_s2_10);
		    pe_array_cosim0->src_0_s2_11(src_0_s2_11);
		    pe_array_cosim0->src_0_s2_12(src_0_s2_12);
		    pe_array_cosim0->src_0_s2_13(src_0_s2_13);
		    pe_array_cosim0->src_0_s2_14(src_0_s2_14);
		    pe_array_cosim0->src_0_s2_15(src_0_s2_15);
		    pe_array_cosim0->src_0_s2_16(src_0_s2_16);
		    pe_array_cosim0->src_0_s2_17(src_0_s2_17);
		    pe_array_cosim0->src_0_s2_18(src_0_s2_18);
		    pe_array_cosim0->src_0_s2_19(src_0_s2_19);
		    pe_array_cosim0->src_0_s2_20(src_0_s2_20);
		    pe_array_cosim0->src_0_s2_21(src_0_s2_21);
		    pe_array_cosim0->src_0_s2_22(src_0_s2_22);
		    pe_array_cosim0->src_0_s2_23(src_0_s2_23);
		    pe_array_cosim0->src_0_s2_24(src_0_s2_24);
		    pe_array_cosim0->src_0_s2_25(src_0_s2_25);
		    pe_array_cosim0->src_0_s2_26(src_0_s2_26);
		    pe_array_cosim0->src_0_s2_27(src_0_s2_27);
		    pe_array_cosim0->src_0_s2_28(src_0_s2_28);
		    pe_array_cosim0->src_0_s2_29(src_0_s2_29);
		    pe_array_cosim0->src_0_s2_30(src_0_s2_30);
		    pe_array_cosim0->src_0_s2_31(src_0_s2_31);
		    pe_array_cosim0->src_0_s3_0(src_0_s3_0);
		    pe_array_cosim0->src_0_s3_1(src_0_s3_1);
		    pe_array_cosim0->src_0_s3_2(src_0_s3_2);
		    pe_array_cosim0->src_0_s3_3(src_0_s3_3);
		    pe_array_cosim0->src_0_s3_4(src_0_s3_4);
		    pe_array_cosim0->src_0_s3_5(src_0_s3_5);
		    pe_array_cosim0->src_0_s3_6(src_0_s3_6);
		    pe_array_cosim0->src_0_s3_7(src_0_s3_7);
		    pe_array_cosim0->src_0_s3_8(src_0_s3_8);
		    pe_array_cosim0->src_0_s3_9(src_0_s3_9);
		    pe_array_cosim0->src_0_s3_10(src_0_s3_10);
		    pe_array_cosim0->src_0_s3_11(src_0_s3_11);
		    pe_array_cosim0->src_0_s3_12(src_0_s3_12);
		    pe_array_cosim0->src_0_s3_13(src_0_s3_13);
		    pe_array_cosim0->src_0_s3_14(src_0_s3_14);
		    pe_array_cosim0->src_0_s3_15(src_0_s3_15);
		    pe_array_cosim0->src_0_s3_16(src_0_s3_16);
		    pe_array_cosim0->src_0_s3_17(src_0_s3_17);
		    pe_array_cosim0->src_0_s3_18(src_0_s3_18);
		    pe_array_cosim0->src_0_s3_19(src_0_s3_19);
		    pe_array_cosim0->src_0_s3_20(src_0_s3_20);
		    pe_array_cosim0->src_0_s3_21(src_0_s3_21);
		    pe_array_cosim0->src_0_s3_22(src_0_s3_22);
		    pe_array_cosim0->src_0_s3_23(src_0_s3_23);
		    pe_array_cosim0->src_0_s3_24(src_0_s3_24);
		    pe_array_cosim0->src_0_s3_25(src_0_s3_25);
		    pe_array_cosim0->src_0_s3_26(src_0_s3_26);
		    pe_array_cosim0->src_0_s3_27(src_0_s3_27);
		    pe_array_cosim0->src_0_s3_28(src_0_s3_28);
		    pe_array_cosim0->src_0_s3_29(src_0_s3_29);
		    pe_array_cosim0->src_0_s3_30(src_0_s3_30);
		    pe_array_cosim0->src_0_s3_31(src_0_s3_31);
		    pe_array_cosim0->src_0_s4_0(src_0_s4_0);
		    pe_array_cosim0->src_0_s4_1(src_0_s4_1);
		    pe_array_cosim0->src_0_s4_2(src_0_s4_2);
		    pe_array_cosim0->src_0_s4_3(src_0_s4_3);
		    pe_array_cosim0->src_0_s4_4(src_0_s4_4);
		    pe_array_cosim0->src_0_s4_5(src_0_s4_5);
		    pe_array_cosim0->src_0_s4_6(src_0_s4_6);
		    pe_array_cosim0->src_0_s4_7(src_0_s4_7);
		    pe_array_cosim0->src_0_s4_8(src_0_s4_8);
		    pe_array_cosim0->src_0_s4_9(src_0_s4_9);
		    pe_array_cosim0->src_0_s4_10(src_0_s4_10);
		    pe_array_cosim0->src_0_s4_11(src_0_s4_11);
		    pe_array_cosim0->src_0_s4_12(src_0_s4_12);
		    pe_array_cosim0->src_0_s4_13(src_0_s4_13);
		    pe_array_cosim0->src_0_s4_14(src_0_s4_14);
		    pe_array_cosim0->src_0_s4_15(src_0_s4_15);
		    pe_array_cosim0->src_0_s4_16(src_0_s4_16);
		    pe_array_cosim0->src_0_s4_17(src_0_s4_17);
		    pe_array_cosim0->src_0_s4_18(src_0_s4_18);
		    pe_array_cosim0->src_0_s4_19(src_0_s4_19);
		    pe_array_cosim0->src_0_s4_20(src_0_s4_20);
		    pe_array_cosim0->src_0_s4_21(src_0_s4_21);
		    pe_array_cosim0->src_0_s4_22(src_0_s4_22);
		    pe_array_cosim0->src_0_s4_23(src_0_s4_23);
		    pe_array_cosim0->src_0_s4_24(src_0_s4_24);
		    pe_array_cosim0->src_0_s4_25(src_0_s4_25);
		    pe_array_cosim0->src_0_s4_26(src_0_s4_26);
		    pe_array_cosim0->src_0_s4_27(src_0_s4_27);
		    pe_array_cosim0->src_0_s4_28(src_0_s4_28);
		    pe_array_cosim0->src_0_s4_29(src_0_s4_29);
		    pe_array_cosim0->src_0_s4_30(src_0_s4_30);
		    pe_array_cosim0->src_0_s4_31(src_0_s4_31);
		    pe_array_cosim0->src_0_s5_0(src_0_s5_0);
		    pe_array_cosim0->src_0_s5_1(src_0_s5_1);
		    pe_array_cosim0->src_0_s5_2(src_0_s5_2);
		    pe_array_cosim0->src_0_s5_3(src_0_s5_3);
		    pe_array_cosim0->src_0_s5_4(src_0_s5_4);
		    pe_array_cosim0->src_0_s5_5(src_0_s5_5);
		    pe_array_cosim0->src_0_s5_6(src_0_s5_6);
		    pe_array_cosim0->src_0_s5_7(src_0_s5_7);
		    pe_array_cosim0->src_0_s5_8(src_0_s5_8);
		    pe_array_cosim0->src_0_s5_9(src_0_s5_9);
		    pe_array_cosim0->src_0_s5_10(src_0_s5_10);
		    pe_array_cosim0->src_0_s5_11(src_0_s5_11);
		    pe_array_cosim0->src_0_s5_12(src_0_s5_12);
		    pe_array_cosim0->src_0_s5_13(src_0_s5_13);
		    pe_array_cosim0->src_0_s5_14(src_0_s5_14);
		    pe_array_cosim0->src_0_s5_15(src_0_s5_15);
		    pe_array_cosim0->src_0_s5_16(src_0_s5_16);
		    pe_array_cosim0->src_0_s5_17(src_0_s5_17);
		    pe_array_cosim0->src_0_s5_18(src_0_s5_18);
		    pe_array_cosim0->src_0_s5_19(src_0_s5_19);
		    pe_array_cosim0->src_0_s5_20(src_0_s5_20);
		    pe_array_cosim0->src_0_s5_21(src_0_s5_21);
		    pe_array_cosim0->src_0_s5_22(src_0_s5_22);
		    pe_array_cosim0->src_0_s5_23(src_0_s5_23);
		    pe_array_cosim0->src_0_s5_24(src_0_s5_24);
		    pe_array_cosim0->src_0_s5_25(src_0_s5_25);
		    pe_array_cosim0->src_0_s5_26(src_0_s5_26);
		    pe_array_cosim0->src_0_s5_27(src_0_s5_27);
		    pe_array_cosim0->src_0_s5_28(src_0_s5_28);
		    pe_array_cosim0->src_0_s5_29(src_0_s5_29);
		    pe_array_cosim0->src_0_s5_30(src_0_s5_30);
		    pe_array_cosim0->src_0_s5_31(src_0_s5_31);
		    pe_array_cosim0->src_0_s6_0(src_0_s6_0);
		    pe_array_cosim0->src_0_s6_1(src_0_s6_1);
		    pe_array_cosim0->src_0_s6_2(src_0_s6_2);
		    pe_array_cosim0->src_0_s6_3(src_0_s6_3);
		    pe_array_cosim0->src_0_s6_4(src_0_s6_4);
		    pe_array_cosim0->src_0_s6_5(src_0_s6_5);
		    pe_array_cosim0->src_0_s6_6(src_0_s6_6);
		    pe_array_cosim0->src_0_s6_7(src_0_s6_7);
		    pe_array_cosim0->src_0_s6_8(src_0_s6_8);
		    pe_array_cosim0->src_0_s6_9(src_0_s6_9);
		    pe_array_cosim0->src_0_s6_10(src_0_s6_10);
		    pe_array_cosim0->src_0_s6_11(src_0_s6_11);
		    pe_array_cosim0->src_0_s6_12(src_0_s6_12);
		    pe_array_cosim0->src_0_s6_13(src_0_s6_13);
		    pe_array_cosim0->src_0_s6_14(src_0_s6_14);
		    pe_array_cosim0->src_0_s6_15(src_0_s6_15);
		    pe_array_cosim0->src_0_s6_16(src_0_s6_16);
		    pe_array_cosim0->src_0_s6_17(src_0_s6_17);
		    pe_array_cosim0->src_0_s6_18(src_0_s6_18);
		    pe_array_cosim0->src_0_s6_19(src_0_s6_19);
		    pe_array_cosim0->src_0_s6_20(src_0_s6_20);
		    pe_array_cosim0->src_0_s6_21(src_0_s6_21);
		    pe_array_cosim0->src_0_s6_22(src_0_s6_22);
		    pe_array_cosim0->src_0_s6_23(src_0_s6_23);
		    pe_array_cosim0->src_0_s6_24(src_0_s6_24);
		    pe_array_cosim0->src_0_s6_25(src_0_s6_25);
		    pe_array_cosim0->src_0_s6_26(src_0_s6_26);
		    pe_array_cosim0->src_0_s6_27(src_0_s6_27);
		    pe_array_cosim0->src_0_s6_28(src_0_s6_28);
		    pe_array_cosim0->src_0_s6_29(src_0_s6_29);
		    pe_array_cosim0->src_0_s6_30(src_0_s6_30);
		    pe_array_cosim0->src_0_s6_31(src_0_s6_31);
		    pe_array_cosim0->src_1_0(src_1_0);
		    pe_array_cosim0->src_1_1(src_1_1);
		    pe_array_cosim0->src_1_2(src_1_2);
		    pe_array_cosim0->src_1_3(src_1_3);
		    pe_array_cosim0->src_1_4(src_1_4);
		    pe_array_cosim0->src_1_5(src_1_5);
		    pe_array_cosim0->src_1_6(src_1_6);
		    pe_array_cosim0->src_1_7(src_1_7);
		    pe_array_cosim0->src_1_8(src_1_8);
		    pe_array_cosim0->src_1_9(src_1_9);
		    pe_array_cosim0->src_1_10(src_1_10);
		    pe_array_cosim0->src_1_11(src_1_11);
		    pe_array_cosim0->src_1_12(src_1_12);
		    pe_array_cosim0->src_1_13(src_1_13);
		    pe_array_cosim0->src_1_14(src_1_14);
		    pe_array_cosim0->src_1_15(src_1_15);
		    pe_array_cosim0->src_1_16(src_1_16);
		    pe_array_cosim0->src_1_17(src_1_17);
		    pe_array_cosim0->src_1_18(src_1_18);
		    pe_array_cosim0->src_1_19(src_1_19);
		    pe_array_cosim0->src_1_20(src_1_20);
		    pe_array_cosim0->src_1_21(src_1_21);
		    pe_array_cosim0->src_1_22(src_1_22);
		    pe_array_cosim0->src_1_23(src_1_23);
		    pe_array_cosim0->src_1_24(src_1_24);
		    pe_array_cosim0->src_1_25(src_1_25);
		    pe_array_cosim0->src_1_26(src_1_26);
		    pe_array_cosim0->src_1_27(src_1_27);
		    pe_array_cosim0->src_1_28(src_1_28);
		    pe_array_cosim0->src_1_29(src_1_29);
		    pe_array_cosim0->src_1_30(src_1_30);
		    pe_array_cosim0->src_1_31(src_1_31);
		    pe_array_cosim0->pe_data_0(pe_data_0);
		    pe_array_cosim0->pe_data_1(pe_data_1);
		    pe_array_cosim0->pe_data_2(pe_data_2);
		    pe_array_cosim0->pe_data_3(pe_data_3);
		    pe_array_cosim0->pe_data_4(pe_data_4);
		    pe_array_cosim0->pe_data_5(pe_data_5);
		    pe_array_cosim0->pe_data_6(pe_data_6);
		    pe_array_cosim0->pe_data_7(pe_data_7);
		    pe_array_cosim0->pe_data_8(pe_data_8);
		    pe_array_cosim0->pe_data_9(pe_data_9);
		    pe_array_cosim0->pe_data_10(pe_data_10);
		    pe_array_cosim0->pe_data_11(pe_data_11);
		    pe_array_cosim0->pe_data_12(pe_data_12);
		    pe_array_cosim0->pe_data_13(pe_data_13);
		    pe_array_cosim0->pe_data_14(pe_data_14);
		    pe_array_cosim0->pe_data_15(pe_data_15);
		    pe_array_cosim0->pe_data_16(pe_data_16);
		    pe_array_cosim0->pe_data_17(pe_data_17);
		    pe_array_cosim0->pe_data_18(pe_data_18);
		    pe_array_cosim0->pe_data_19(pe_data_19);
		    pe_array_cosim0->pe_data_20(pe_data_20);
		    pe_array_cosim0->pe_data_21(pe_data_21);
		    pe_array_cosim0->pe_data_22(pe_data_22);
		    pe_array_cosim0->pe_data_23(pe_data_23);
		    pe_array_cosim0->pe_data_24(pe_data_24);
		    pe_array_cosim0->pe_data_25(pe_data_25);
		    pe_array_cosim0->pe_data_26(pe_data_26);
		    pe_array_cosim0->pe_data_27(pe_data_27);
		    pe_array_cosim0->pe_data_28(pe_data_28);
		    pe_array_cosim0->pe_data_29(pe_data_29);
		    pe_array_cosim0->pe_data_30(pe_data_30);
		    pe_array_cosim0->pe_data_31(pe_data_31);
		    pe_array_cosim0->pe_data_valid(pe_data_valid);

			break;
		case BDWRep_RTL_HDL:
		    pe_array_cosim0 = new pe_array_cosim( "pe_array" );

		    pe_array_cosim0->clk(clk);
		    pe_array_cosim0->rstn(rstn);
		    pe_array_cosim0->enable(enable);
		    pe_array_cosim0->src_vld(src_vld);
		    pe_array_cosim0->clear(clear);
		    pe_array_cosim0->init(init);
		    pe_array_cosim0->systolic_en(systolic_en);
		    pe_array_cosim0->systolic_depth(systolic_depth);
		    pe_array_cosim0->mac_shift_len(mac_shift_len);
		    pe_array_cosim0->src_0_s0_0(src_0_s0_0);
		    pe_array_cosim0->src_0_s0_1(src_0_s0_1);
		    pe_array_cosim0->src_0_s0_2(src_0_s0_2);
		    pe_array_cosim0->src_0_s0_3(src_0_s0_3);
		    pe_array_cosim0->src_0_s0_4(src_0_s0_4);
		    pe_array_cosim0->src_0_s0_5(src_0_s0_5);
		    pe_array_cosim0->src_0_s0_6(src_0_s0_6);
		    pe_array_cosim0->src_0_s0_7(src_0_s0_7);
		    pe_array_cosim0->src_0_s0_8(src_0_s0_8);
		    pe_array_cosim0->src_0_s0_9(src_0_s0_9);
		    pe_array_cosim0->src_0_s0_10(src_0_s0_10);
		    pe_array_cosim0->src_0_s0_11(src_0_s0_11);
		    pe_array_cosim0->src_0_s0_12(src_0_s0_12);
		    pe_array_cosim0->src_0_s0_13(src_0_s0_13);
		    pe_array_cosim0->src_0_s0_14(src_0_s0_14);
		    pe_array_cosim0->src_0_s0_15(src_0_s0_15);
		    pe_array_cosim0->src_0_s0_16(src_0_s0_16);
		    pe_array_cosim0->src_0_s0_17(src_0_s0_17);
		    pe_array_cosim0->src_0_s0_18(src_0_s0_18);
		    pe_array_cosim0->src_0_s0_19(src_0_s0_19);
		    pe_array_cosim0->src_0_s0_20(src_0_s0_20);
		    pe_array_cosim0->src_0_s0_21(src_0_s0_21);
		    pe_array_cosim0->src_0_s0_22(src_0_s0_22);
		    pe_array_cosim0->src_0_s0_23(src_0_s0_23);
		    pe_array_cosim0->src_0_s0_24(src_0_s0_24);
		    pe_array_cosim0->src_0_s0_25(src_0_s0_25);
		    pe_array_cosim0->src_0_s0_26(src_0_s0_26);
		    pe_array_cosim0->src_0_s0_27(src_0_s0_27);
		    pe_array_cosim0->src_0_s0_28(src_0_s0_28);
		    pe_array_cosim0->src_0_s0_29(src_0_s0_29);
		    pe_array_cosim0->src_0_s0_30(src_0_s0_30);
		    pe_array_cosim0->src_0_s0_31(src_0_s0_31);
		    pe_array_cosim0->src_0_s1_0(src_0_s1_0);
		    pe_array_cosim0->src_0_s1_1(src_0_s1_1);
		    pe_array_cosim0->src_0_s1_2(src_0_s1_2);
		    pe_array_cosim0->src_0_s1_3(src_0_s1_3);
		    pe_array_cosim0->src_0_s1_4(src_0_s1_4);
		    pe_array_cosim0->src_0_s1_5(src_0_s1_5);
		    pe_array_cosim0->src_0_s1_6(src_0_s1_6);
		    pe_array_cosim0->src_0_s1_7(src_0_s1_7);
		    pe_array_cosim0->src_0_s1_8(src_0_s1_8);
		    pe_array_cosim0->src_0_s1_9(src_0_s1_9);
		    pe_array_cosim0->src_0_s1_10(src_0_s1_10);
		    pe_array_cosim0->src_0_s1_11(src_0_s1_11);
		    pe_array_cosim0->src_0_s1_12(src_0_s1_12);
		    pe_array_cosim0->src_0_s1_13(src_0_s1_13);
		    pe_array_cosim0->src_0_s1_14(src_0_s1_14);
		    pe_array_cosim0->src_0_s1_15(src_0_s1_15);
		    pe_array_cosim0->src_0_s1_16(src_0_s1_16);
		    pe_array_cosim0->src_0_s1_17(src_0_s1_17);
		    pe_array_cosim0->src_0_s1_18(src_0_s1_18);
		    pe_array_cosim0->src_0_s1_19(src_0_s1_19);
		    pe_array_cosim0->src_0_s1_20(src_0_s1_20);
		    pe_array_cosim0->src_0_s1_21(src_0_s1_21);
		    pe_array_cosim0->src_0_s1_22(src_0_s1_22);
		    pe_array_cosim0->src_0_s1_23(src_0_s1_23);
		    pe_array_cosim0->src_0_s1_24(src_0_s1_24);
		    pe_array_cosim0->src_0_s1_25(src_0_s1_25);
		    pe_array_cosim0->src_0_s1_26(src_0_s1_26);
		    pe_array_cosim0->src_0_s1_27(src_0_s1_27);
		    pe_array_cosim0->src_0_s1_28(src_0_s1_28);
		    pe_array_cosim0->src_0_s1_29(src_0_s1_29);
		    pe_array_cosim0->src_0_s1_30(src_0_s1_30);
		    pe_array_cosim0->src_0_s1_31(src_0_s1_31);
		    pe_array_cosim0->src_0_s2_0(src_0_s2_0);
		    pe_array_cosim0->src_0_s2_1(src_0_s2_1);
		    pe_array_cosim0->src_0_s2_2(src_0_s2_2);
		    pe_array_cosim0->src_0_s2_3(src_0_s2_3);
		    pe_array_cosim0->src_0_s2_4(src_0_s2_4);
		    pe_array_cosim0->src_0_s2_5(src_0_s2_5);
		    pe_array_cosim0->src_0_s2_6(src_0_s2_6);
		    pe_array_cosim0->src_0_s2_7(src_0_s2_7);
		    pe_array_cosim0->src_0_s2_8(src_0_s2_8);
		    pe_array_cosim0->src_0_s2_9(src_0_s2_9);
		    pe_array_cosim0->src_0_s2_10(src_0_s2_10);
		    pe_array_cosim0->src_0_s2_11(src_0_s2_11);
		    pe_array_cosim0->src_0_s2_12(src_0_s2_12);
		    pe_array_cosim0->src_0_s2_13(src_0_s2_13);
		    pe_array_cosim0->src_0_s2_14(src_0_s2_14);
		    pe_array_cosim0->src_0_s2_15(src_0_s2_15);
		    pe_array_cosim0->src_0_s2_16(src_0_s2_16);
		    pe_array_cosim0->src_0_s2_17(src_0_s2_17);
		    pe_array_cosim0->src_0_s2_18(src_0_s2_18);
		    pe_array_cosim0->src_0_s2_19(src_0_s2_19);
		    pe_array_cosim0->src_0_s2_20(src_0_s2_20);
		    pe_array_cosim0->src_0_s2_21(src_0_s2_21);
		    pe_array_cosim0->src_0_s2_22(src_0_s2_22);
		    pe_array_cosim0->src_0_s2_23(src_0_s2_23);
		    pe_array_cosim0->src_0_s2_24(src_0_s2_24);
		    pe_array_cosim0->src_0_s2_25(src_0_s2_25);
		    pe_array_cosim0->src_0_s2_26(src_0_s2_26);
		    pe_array_cosim0->src_0_s2_27(src_0_s2_27);
		    pe_array_cosim0->src_0_s2_28(src_0_s2_28);
		    pe_array_cosim0->src_0_s2_29(src_0_s2_29);
		    pe_array_cosim0->src_0_s2_30(src_0_s2_30);
		    pe_array_cosim0->src_0_s2_31(src_0_s2_31);
		    pe_array_cosim0->src_0_s3_0(src_0_s3_0);
		    pe_array_cosim0->src_0_s3_1(src_0_s3_1);
		    pe_array_cosim0->src_0_s3_2(src_0_s3_2);
		    pe_array_cosim0->src_0_s3_3(src_0_s3_3);
		    pe_array_cosim0->src_0_s3_4(src_0_s3_4);
		    pe_array_cosim0->src_0_s3_5(src_0_s3_5);
		    pe_array_cosim0->src_0_s3_6(src_0_s3_6);
		    pe_array_cosim0->src_0_s3_7(src_0_s3_7);
		    pe_array_cosim0->src_0_s3_8(src_0_s3_8);
		    pe_array_cosim0->src_0_s3_9(src_0_s3_9);
		    pe_array_cosim0->src_0_s3_10(src_0_s3_10);
		    pe_array_cosim0->src_0_s3_11(src_0_s3_11);
		    pe_array_cosim0->src_0_s3_12(src_0_s3_12);
		    pe_array_cosim0->src_0_s3_13(src_0_s3_13);
		    pe_array_cosim0->src_0_s3_14(src_0_s3_14);
		    pe_array_cosim0->src_0_s3_15(src_0_s3_15);
		    pe_array_cosim0->src_0_s3_16(src_0_s3_16);
		    pe_array_cosim0->src_0_s3_17(src_0_s3_17);
		    pe_array_cosim0->src_0_s3_18(src_0_s3_18);
		    pe_array_cosim0->src_0_s3_19(src_0_s3_19);
		    pe_array_cosim0->src_0_s3_20(src_0_s3_20);
		    pe_array_cosim0->src_0_s3_21(src_0_s3_21);
		    pe_array_cosim0->src_0_s3_22(src_0_s3_22);
		    pe_array_cosim0->src_0_s3_23(src_0_s3_23);
		    pe_array_cosim0->src_0_s3_24(src_0_s3_24);
		    pe_array_cosim0->src_0_s3_25(src_0_s3_25);
		    pe_array_cosim0->src_0_s3_26(src_0_s3_26);
		    pe_array_cosim0->src_0_s3_27(src_0_s3_27);
		    pe_array_cosim0->src_0_s3_28(src_0_s3_28);
		    pe_array_cosim0->src_0_s3_29(src_0_s3_29);
		    pe_array_cosim0->src_0_s3_30(src_0_s3_30);
		    pe_array_cosim0->src_0_s3_31(src_0_s3_31);
		    pe_array_cosim0->src_0_s4_0(src_0_s4_0);
		    pe_array_cosim0->src_0_s4_1(src_0_s4_1);
		    pe_array_cosim0->src_0_s4_2(src_0_s4_2);
		    pe_array_cosim0->src_0_s4_3(src_0_s4_3);
		    pe_array_cosim0->src_0_s4_4(src_0_s4_4);
		    pe_array_cosim0->src_0_s4_5(src_0_s4_5);
		    pe_array_cosim0->src_0_s4_6(src_0_s4_6);
		    pe_array_cosim0->src_0_s4_7(src_0_s4_7);
		    pe_array_cosim0->src_0_s4_8(src_0_s4_8);
		    pe_array_cosim0->src_0_s4_9(src_0_s4_9);
		    pe_array_cosim0->src_0_s4_10(src_0_s4_10);
		    pe_array_cosim0->src_0_s4_11(src_0_s4_11);
		    pe_array_cosim0->src_0_s4_12(src_0_s4_12);
		    pe_array_cosim0->src_0_s4_13(src_0_s4_13);
		    pe_array_cosim0->src_0_s4_14(src_0_s4_14);
		    pe_array_cosim0->src_0_s4_15(src_0_s4_15);
		    pe_array_cosim0->src_0_s4_16(src_0_s4_16);
		    pe_array_cosim0->src_0_s4_17(src_0_s4_17);
		    pe_array_cosim0->src_0_s4_18(src_0_s4_18);
		    pe_array_cosim0->src_0_s4_19(src_0_s4_19);
		    pe_array_cosim0->src_0_s4_20(src_0_s4_20);
		    pe_array_cosim0->src_0_s4_21(src_0_s4_21);
		    pe_array_cosim0->src_0_s4_22(src_0_s4_22);
		    pe_array_cosim0->src_0_s4_23(src_0_s4_23);
		    pe_array_cosim0->src_0_s4_24(src_0_s4_24);
		    pe_array_cosim0->src_0_s4_25(src_0_s4_25);
		    pe_array_cosim0->src_0_s4_26(src_0_s4_26);
		    pe_array_cosim0->src_0_s4_27(src_0_s4_27);
		    pe_array_cosim0->src_0_s4_28(src_0_s4_28);
		    pe_array_cosim0->src_0_s4_29(src_0_s4_29);
		    pe_array_cosim0->src_0_s4_30(src_0_s4_30);
		    pe_array_cosim0->src_0_s4_31(src_0_s4_31);
		    pe_array_cosim0->src_0_s5_0(src_0_s5_0);
		    pe_array_cosim0->src_0_s5_1(src_0_s5_1);
		    pe_array_cosim0->src_0_s5_2(src_0_s5_2);
		    pe_array_cosim0->src_0_s5_3(src_0_s5_3);
		    pe_array_cosim0->src_0_s5_4(src_0_s5_4);
		    pe_array_cosim0->src_0_s5_5(src_0_s5_5);
		    pe_array_cosim0->src_0_s5_6(src_0_s5_6);
		    pe_array_cosim0->src_0_s5_7(src_0_s5_7);
		    pe_array_cosim0->src_0_s5_8(src_0_s5_8);
		    pe_array_cosim0->src_0_s5_9(src_0_s5_9);
		    pe_array_cosim0->src_0_s5_10(src_0_s5_10);
		    pe_array_cosim0->src_0_s5_11(src_0_s5_11);
		    pe_array_cosim0->src_0_s5_12(src_0_s5_12);
		    pe_array_cosim0->src_0_s5_13(src_0_s5_13);
		    pe_array_cosim0->src_0_s5_14(src_0_s5_14);
		    pe_array_cosim0->src_0_s5_15(src_0_s5_15);
		    pe_array_cosim0->src_0_s5_16(src_0_s5_16);
		    pe_array_cosim0->src_0_s5_17(src_0_s5_17);
		    pe_array_cosim0->src_0_s5_18(src_0_s5_18);
		    pe_array_cosim0->src_0_s5_19(src_0_s5_19);
		    pe_array_cosim0->src_0_s5_20(src_0_s5_20);
		    pe_array_cosim0->src_0_s5_21(src_0_s5_21);
		    pe_array_cosim0->src_0_s5_22(src_0_s5_22);
		    pe_array_cosim0->src_0_s5_23(src_0_s5_23);
		    pe_array_cosim0->src_0_s5_24(src_0_s5_24);
		    pe_array_cosim0->src_0_s5_25(src_0_s5_25);
		    pe_array_cosim0->src_0_s5_26(src_0_s5_26);
		    pe_array_cosim0->src_0_s5_27(src_0_s5_27);
		    pe_array_cosim0->src_0_s5_28(src_0_s5_28);
		    pe_array_cosim0->src_0_s5_29(src_0_s5_29);
		    pe_array_cosim0->src_0_s5_30(src_0_s5_30);
		    pe_array_cosim0->src_0_s5_31(src_0_s5_31);
		    pe_array_cosim0->src_0_s6_0(src_0_s6_0);
		    pe_array_cosim0->src_0_s6_1(src_0_s6_1);
		    pe_array_cosim0->src_0_s6_2(src_0_s6_2);
		    pe_array_cosim0->src_0_s6_3(src_0_s6_3);
		    pe_array_cosim0->src_0_s6_4(src_0_s6_4);
		    pe_array_cosim0->src_0_s6_5(src_0_s6_5);
		    pe_array_cosim0->src_0_s6_6(src_0_s6_6);
		    pe_array_cosim0->src_0_s6_7(src_0_s6_7);
		    pe_array_cosim0->src_0_s6_8(src_0_s6_8);
		    pe_array_cosim0->src_0_s6_9(src_0_s6_9);
		    pe_array_cosim0->src_0_s6_10(src_0_s6_10);
		    pe_array_cosim0->src_0_s6_11(src_0_s6_11);
		    pe_array_cosim0->src_0_s6_12(src_0_s6_12);
		    pe_array_cosim0->src_0_s6_13(src_0_s6_13);
		    pe_array_cosim0->src_0_s6_14(src_0_s6_14);
		    pe_array_cosim0->src_0_s6_15(src_0_s6_15);
		    pe_array_cosim0->src_0_s6_16(src_0_s6_16);
		    pe_array_cosim0->src_0_s6_17(src_0_s6_17);
		    pe_array_cosim0->src_0_s6_18(src_0_s6_18);
		    pe_array_cosim0->src_0_s6_19(src_0_s6_19);
		    pe_array_cosim0->src_0_s6_20(src_0_s6_20);
		    pe_array_cosim0->src_0_s6_21(src_0_s6_21);
		    pe_array_cosim0->src_0_s6_22(src_0_s6_22);
		    pe_array_cosim0->src_0_s6_23(src_0_s6_23);
		    pe_array_cosim0->src_0_s6_24(src_0_s6_24);
		    pe_array_cosim0->src_0_s6_25(src_0_s6_25);
		    pe_array_cosim0->src_0_s6_26(src_0_s6_26);
		    pe_array_cosim0->src_0_s6_27(src_0_s6_27);
		    pe_array_cosim0->src_0_s6_28(src_0_s6_28);
		    pe_array_cosim0->src_0_s6_29(src_0_s6_29);
		    pe_array_cosim0->src_0_s6_30(src_0_s6_30);
		    pe_array_cosim0->src_0_s6_31(src_0_s6_31);
		    pe_array_cosim0->src_1_0(src_1_0);
		    pe_array_cosim0->src_1_1(src_1_1);
		    pe_array_cosim0->src_1_2(src_1_2);
		    pe_array_cosim0->src_1_3(src_1_3);
		    pe_array_cosim0->src_1_4(src_1_4);
		    pe_array_cosim0->src_1_5(src_1_5);
		    pe_array_cosim0->src_1_6(src_1_6);
		    pe_array_cosim0->src_1_7(src_1_7);
		    pe_array_cosim0->src_1_8(src_1_8);
		    pe_array_cosim0->src_1_9(src_1_9);
		    pe_array_cosim0->src_1_10(src_1_10);
		    pe_array_cosim0->src_1_11(src_1_11);
		    pe_array_cosim0->src_1_12(src_1_12);
		    pe_array_cosim0->src_1_13(src_1_13);
		    pe_array_cosim0->src_1_14(src_1_14);
		    pe_array_cosim0->src_1_15(src_1_15);
		    pe_array_cosim0->src_1_16(src_1_16);
		    pe_array_cosim0->src_1_17(src_1_17);
		    pe_array_cosim0->src_1_18(src_1_18);
		    pe_array_cosim0->src_1_19(src_1_19);
		    pe_array_cosim0->src_1_20(src_1_20);
		    pe_array_cosim0->src_1_21(src_1_21);
		    pe_array_cosim0->src_1_22(src_1_22);
		    pe_array_cosim0->src_1_23(src_1_23);
		    pe_array_cosim0->src_1_24(src_1_24);
		    pe_array_cosim0->src_1_25(src_1_25);
		    pe_array_cosim0->src_1_26(src_1_26);
		    pe_array_cosim0->src_1_27(src_1_27);
		    pe_array_cosim0->src_1_28(src_1_28);
		    pe_array_cosim0->src_1_29(src_1_29);
		    pe_array_cosim0->src_1_30(src_1_30);
		    pe_array_cosim0->src_1_31(src_1_31);
		    pe_array_cosim0->pe_data_0(pe_data_0);
		    pe_array_cosim0->pe_data_1(pe_data_1);
		    pe_array_cosim0->pe_data_2(pe_data_2);
		    pe_array_cosim0->pe_data_3(pe_data_3);
		    pe_array_cosim0->pe_data_4(pe_data_4);
		    pe_array_cosim0->pe_data_5(pe_data_5);
		    pe_array_cosim0->pe_data_6(pe_data_6);
		    pe_array_cosim0->pe_data_7(pe_data_7);
		    pe_array_cosim0->pe_data_8(pe_data_8);
		    pe_array_cosim0->pe_data_9(pe_data_9);
		    pe_array_cosim0->pe_data_10(pe_data_10);
		    pe_array_cosim0->pe_data_11(pe_data_11);
		    pe_array_cosim0->pe_data_12(pe_data_12);
		    pe_array_cosim0->pe_data_13(pe_data_13);
		    pe_array_cosim0->pe_data_14(pe_data_14);
		    pe_array_cosim0->pe_data_15(pe_data_15);
		    pe_array_cosim0->pe_data_16(pe_data_16);
		    pe_array_cosim0->pe_data_17(pe_data_17);
		    pe_array_cosim0->pe_data_18(pe_data_18);
		    pe_array_cosim0->pe_data_19(pe_data_19);
		    pe_array_cosim0->pe_data_20(pe_data_20);
		    pe_array_cosim0->pe_data_21(pe_data_21);
		    pe_array_cosim0->pe_data_22(pe_data_22);
		    pe_array_cosim0->pe_data_23(pe_data_23);
		    pe_array_cosim0->pe_data_24(pe_data_24);
		    pe_array_cosim0->pe_data_25(pe_data_25);
		    pe_array_cosim0->pe_data_26(pe_data_26);
		    pe_array_cosim0->pe_data_27(pe_data_27);
		    pe_array_cosim0->pe_data_28(pe_data_28);
		    pe_array_cosim0->pe_data_29(pe_data_29);
		    pe_array_cosim0->pe_data_30(pe_data_30);
		    pe_array_cosim0->pe_data_31(pe_data_31);
		    pe_array_cosim0->pe_data_valid(pe_data_valid);

			break;
        case BDWRep_CYC_HDL:
            if ( pe_array_cycsim_factory_p )
                pe_array_cycsim0 = pe_array_cycsim_factory_p();
            else
            {
                esc_report_error( esc_fatal, "verilator_produced files not available for module pe_array");
                return;
            }

            esc_report_error( esc_note, " using verilator model for module \"pe_array\"");

		    pe_array_cycsim0->clk(clk);
		    pe_array_cycsim0->rstn(rstn);
		    pe_array_cycsim0->enable(enable);
		    pe_array_cycsim0->src_vld(src_vld);
		    pe_array_cycsim0->clear(clear);
		    pe_array_cycsim0->init(init);
		    pe_array_cycsim0->systolic_en(systolic_en);
		    pe_array_cycsim0->systolic_depth(systolic_depth);
		    pe_array_cycsim0->mac_shift_len(mac_shift_len);
		    pe_array_cycsim0->src_0_s0_0(src_0_s0_0);
		    pe_array_cycsim0->src_0_s0_1(src_0_s0_1);
		    pe_array_cycsim0->src_0_s0_2(src_0_s0_2);
		    pe_array_cycsim0->src_0_s0_3(src_0_s0_3);
		    pe_array_cycsim0->src_0_s0_4(src_0_s0_4);
		    pe_array_cycsim0->src_0_s0_5(src_0_s0_5);
		    pe_array_cycsim0->src_0_s0_6(src_0_s0_6);
		    pe_array_cycsim0->src_0_s0_7(src_0_s0_7);
		    pe_array_cycsim0->src_0_s0_8(src_0_s0_8);
		    pe_array_cycsim0->src_0_s0_9(src_0_s0_9);
		    pe_array_cycsim0->src_0_s0_10(src_0_s0_10);
		    pe_array_cycsim0->src_0_s0_11(src_0_s0_11);
		    pe_array_cycsim0->src_0_s0_12(src_0_s0_12);
		    pe_array_cycsim0->src_0_s0_13(src_0_s0_13);
		    pe_array_cycsim0->src_0_s0_14(src_0_s0_14);
		    pe_array_cycsim0->src_0_s0_15(src_0_s0_15);
		    pe_array_cycsim0->src_0_s0_16(src_0_s0_16);
		    pe_array_cycsim0->src_0_s0_17(src_0_s0_17);
		    pe_array_cycsim0->src_0_s0_18(src_0_s0_18);
		    pe_array_cycsim0->src_0_s0_19(src_0_s0_19);
		    pe_array_cycsim0->src_0_s0_20(src_0_s0_20);
		    pe_array_cycsim0->src_0_s0_21(src_0_s0_21);
		    pe_array_cycsim0->src_0_s0_22(src_0_s0_22);
		    pe_array_cycsim0->src_0_s0_23(src_0_s0_23);
		    pe_array_cycsim0->src_0_s0_24(src_0_s0_24);
		    pe_array_cycsim0->src_0_s0_25(src_0_s0_25);
		    pe_array_cycsim0->src_0_s0_26(src_0_s0_26);
		    pe_array_cycsim0->src_0_s0_27(src_0_s0_27);
		    pe_array_cycsim0->src_0_s0_28(src_0_s0_28);
		    pe_array_cycsim0->src_0_s0_29(src_0_s0_29);
		    pe_array_cycsim0->src_0_s0_30(src_0_s0_30);
		    pe_array_cycsim0->src_0_s0_31(src_0_s0_31);
		    pe_array_cycsim0->src_0_s1_0(src_0_s1_0);
		    pe_array_cycsim0->src_0_s1_1(src_0_s1_1);
		    pe_array_cycsim0->src_0_s1_2(src_0_s1_2);
		    pe_array_cycsim0->src_0_s1_3(src_0_s1_3);
		    pe_array_cycsim0->src_0_s1_4(src_0_s1_4);
		    pe_array_cycsim0->src_0_s1_5(src_0_s1_5);
		    pe_array_cycsim0->src_0_s1_6(src_0_s1_6);
		    pe_array_cycsim0->src_0_s1_7(src_0_s1_7);
		    pe_array_cycsim0->src_0_s1_8(src_0_s1_8);
		    pe_array_cycsim0->src_0_s1_9(src_0_s1_9);
		    pe_array_cycsim0->src_0_s1_10(src_0_s1_10);
		    pe_array_cycsim0->src_0_s1_11(src_0_s1_11);
		    pe_array_cycsim0->src_0_s1_12(src_0_s1_12);
		    pe_array_cycsim0->src_0_s1_13(src_0_s1_13);
		    pe_array_cycsim0->src_0_s1_14(src_0_s1_14);
		    pe_array_cycsim0->src_0_s1_15(src_0_s1_15);
		    pe_array_cycsim0->src_0_s1_16(src_0_s1_16);
		    pe_array_cycsim0->src_0_s1_17(src_0_s1_17);
		    pe_array_cycsim0->src_0_s1_18(src_0_s1_18);
		    pe_array_cycsim0->src_0_s1_19(src_0_s1_19);
		    pe_array_cycsim0->src_0_s1_20(src_0_s1_20);
		    pe_array_cycsim0->src_0_s1_21(src_0_s1_21);
		    pe_array_cycsim0->src_0_s1_22(src_0_s1_22);
		    pe_array_cycsim0->src_0_s1_23(src_0_s1_23);
		    pe_array_cycsim0->src_0_s1_24(src_0_s1_24);
		    pe_array_cycsim0->src_0_s1_25(src_0_s1_25);
		    pe_array_cycsim0->src_0_s1_26(src_0_s1_26);
		    pe_array_cycsim0->src_0_s1_27(src_0_s1_27);
		    pe_array_cycsim0->src_0_s1_28(src_0_s1_28);
		    pe_array_cycsim0->src_0_s1_29(src_0_s1_29);
		    pe_array_cycsim0->src_0_s1_30(src_0_s1_30);
		    pe_array_cycsim0->src_0_s1_31(src_0_s1_31);
		    pe_array_cycsim0->src_0_s2_0(src_0_s2_0);
		    pe_array_cycsim0->src_0_s2_1(src_0_s2_1);
		    pe_array_cycsim0->src_0_s2_2(src_0_s2_2);
		    pe_array_cycsim0->src_0_s2_3(src_0_s2_3);
		    pe_array_cycsim0->src_0_s2_4(src_0_s2_4);
		    pe_array_cycsim0->src_0_s2_5(src_0_s2_5);
		    pe_array_cycsim0->src_0_s2_6(src_0_s2_6);
		    pe_array_cycsim0->src_0_s2_7(src_0_s2_7);
		    pe_array_cycsim0->src_0_s2_8(src_0_s2_8);
		    pe_array_cycsim0->src_0_s2_9(src_0_s2_9);
		    pe_array_cycsim0->src_0_s2_10(src_0_s2_10);
		    pe_array_cycsim0->src_0_s2_11(src_0_s2_11);
		    pe_array_cycsim0->src_0_s2_12(src_0_s2_12);
		    pe_array_cycsim0->src_0_s2_13(src_0_s2_13);
		    pe_array_cycsim0->src_0_s2_14(src_0_s2_14);
		    pe_array_cycsim0->src_0_s2_15(src_0_s2_15);
		    pe_array_cycsim0->src_0_s2_16(src_0_s2_16);
		    pe_array_cycsim0->src_0_s2_17(src_0_s2_17);
		    pe_array_cycsim0->src_0_s2_18(src_0_s2_18);
		    pe_array_cycsim0->src_0_s2_19(src_0_s2_19);
		    pe_array_cycsim0->src_0_s2_20(src_0_s2_20);
		    pe_array_cycsim0->src_0_s2_21(src_0_s2_21);
		    pe_array_cycsim0->src_0_s2_22(src_0_s2_22);
		    pe_array_cycsim0->src_0_s2_23(src_0_s2_23);
		    pe_array_cycsim0->src_0_s2_24(src_0_s2_24);
		    pe_array_cycsim0->src_0_s2_25(src_0_s2_25);
		    pe_array_cycsim0->src_0_s2_26(src_0_s2_26);
		    pe_array_cycsim0->src_0_s2_27(src_0_s2_27);
		    pe_array_cycsim0->src_0_s2_28(src_0_s2_28);
		    pe_array_cycsim0->src_0_s2_29(src_0_s2_29);
		    pe_array_cycsim0->src_0_s2_30(src_0_s2_30);
		    pe_array_cycsim0->src_0_s2_31(src_0_s2_31);
		    pe_array_cycsim0->src_0_s3_0(src_0_s3_0);
		    pe_array_cycsim0->src_0_s3_1(src_0_s3_1);
		    pe_array_cycsim0->src_0_s3_2(src_0_s3_2);
		    pe_array_cycsim0->src_0_s3_3(src_0_s3_3);
		    pe_array_cycsim0->src_0_s3_4(src_0_s3_4);
		    pe_array_cycsim0->src_0_s3_5(src_0_s3_5);
		    pe_array_cycsim0->src_0_s3_6(src_0_s3_6);
		    pe_array_cycsim0->src_0_s3_7(src_0_s3_7);
		    pe_array_cycsim0->src_0_s3_8(src_0_s3_8);
		    pe_array_cycsim0->src_0_s3_9(src_0_s3_9);
		    pe_array_cycsim0->src_0_s3_10(src_0_s3_10);
		    pe_array_cycsim0->src_0_s3_11(src_0_s3_11);
		    pe_array_cycsim0->src_0_s3_12(src_0_s3_12);
		    pe_array_cycsim0->src_0_s3_13(src_0_s3_13);
		    pe_array_cycsim0->src_0_s3_14(src_0_s3_14);
		    pe_array_cycsim0->src_0_s3_15(src_0_s3_15);
		    pe_array_cycsim0->src_0_s3_16(src_0_s3_16);
		    pe_array_cycsim0->src_0_s3_17(src_0_s3_17);
		    pe_array_cycsim0->src_0_s3_18(src_0_s3_18);
		    pe_array_cycsim0->src_0_s3_19(src_0_s3_19);
		    pe_array_cycsim0->src_0_s3_20(src_0_s3_20);
		    pe_array_cycsim0->src_0_s3_21(src_0_s3_21);
		    pe_array_cycsim0->src_0_s3_22(src_0_s3_22);
		    pe_array_cycsim0->src_0_s3_23(src_0_s3_23);
		    pe_array_cycsim0->src_0_s3_24(src_0_s3_24);
		    pe_array_cycsim0->src_0_s3_25(src_0_s3_25);
		    pe_array_cycsim0->src_0_s3_26(src_0_s3_26);
		    pe_array_cycsim0->src_0_s3_27(src_0_s3_27);
		    pe_array_cycsim0->src_0_s3_28(src_0_s3_28);
		    pe_array_cycsim0->src_0_s3_29(src_0_s3_29);
		    pe_array_cycsim0->src_0_s3_30(src_0_s3_30);
		    pe_array_cycsim0->src_0_s3_31(src_0_s3_31);
		    pe_array_cycsim0->src_0_s4_0(src_0_s4_0);
		    pe_array_cycsim0->src_0_s4_1(src_0_s4_1);
		    pe_array_cycsim0->src_0_s4_2(src_0_s4_2);
		    pe_array_cycsim0->src_0_s4_3(src_0_s4_3);
		    pe_array_cycsim0->src_0_s4_4(src_0_s4_4);
		    pe_array_cycsim0->src_0_s4_5(src_0_s4_5);
		    pe_array_cycsim0->src_0_s4_6(src_0_s4_6);
		    pe_array_cycsim0->src_0_s4_7(src_0_s4_7);
		    pe_array_cycsim0->src_0_s4_8(src_0_s4_8);
		    pe_array_cycsim0->src_0_s4_9(src_0_s4_9);
		    pe_array_cycsim0->src_0_s4_10(src_0_s4_10);
		    pe_array_cycsim0->src_0_s4_11(src_0_s4_11);
		    pe_array_cycsim0->src_0_s4_12(src_0_s4_12);
		    pe_array_cycsim0->src_0_s4_13(src_0_s4_13);
		    pe_array_cycsim0->src_0_s4_14(src_0_s4_14);
		    pe_array_cycsim0->src_0_s4_15(src_0_s4_15);
		    pe_array_cycsim0->src_0_s4_16(src_0_s4_16);
		    pe_array_cycsim0->src_0_s4_17(src_0_s4_17);
		    pe_array_cycsim0->src_0_s4_18(src_0_s4_18);
		    pe_array_cycsim0->src_0_s4_19(src_0_s4_19);
		    pe_array_cycsim0->src_0_s4_20(src_0_s4_20);
		    pe_array_cycsim0->src_0_s4_21(src_0_s4_21);
		    pe_array_cycsim0->src_0_s4_22(src_0_s4_22);
		    pe_array_cycsim0->src_0_s4_23(src_0_s4_23);
		    pe_array_cycsim0->src_0_s4_24(src_0_s4_24);
		    pe_array_cycsim0->src_0_s4_25(src_0_s4_25);
		    pe_array_cycsim0->src_0_s4_26(src_0_s4_26);
		    pe_array_cycsim0->src_0_s4_27(src_0_s4_27);
		    pe_array_cycsim0->src_0_s4_28(src_0_s4_28);
		    pe_array_cycsim0->src_0_s4_29(src_0_s4_29);
		    pe_array_cycsim0->src_0_s4_30(src_0_s4_30);
		    pe_array_cycsim0->src_0_s4_31(src_0_s4_31);
		    pe_array_cycsim0->src_0_s5_0(src_0_s5_0);
		    pe_array_cycsim0->src_0_s5_1(src_0_s5_1);
		    pe_array_cycsim0->src_0_s5_2(src_0_s5_2);
		    pe_array_cycsim0->src_0_s5_3(src_0_s5_3);
		    pe_array_cycsim0->src_0_s5_4(src_0_s5_4);
		    pe_array_cycsim0->src_0_s5_5(src_0_s5_5);
		    pe_array_cycsim0->src_0_s5_6(src_0_s5_6);
		    pe_array_cycsim0->src_0_s5_7(src_0_s5_7);
		    pe_array_cycsim0->src_0_s5_8(src_0_s5_8);
		    pe_array_cycsim0->src_0_s5_9(src_0_s5_9);
		    pe_array_cycsim0->src_0_s5_10(src_0_s5_10);
		    pe_array_cycsim0->src_0_s5_11(src_0_s5_11);
		    pe_array_cycsim0->src_0_s5_12(src_0_s5_12);
		    pe_array_cycsim0->src_0_s5_13(src_0_s5_13);
		    pe_array_cycsim0->src_0_s5_14(src_0_s5_14);
		    pe_array_cycsim0->src_0_s5_15(src_0_s5_15);
		    pe_array_cycsim0->src_0_s5_16(src_0_s5_16);
		    pe_array_cycsim0->src_0_s5_17(src_0_s5_17);
		    pe_array_cycsim0->src_0_s5_18(src_0_s5_18);
		    pe_array_cycsim0->src_0_s5_19(src_0_s5_19);
		    pe_array_cycsim0->src_0_s5_20(src_0_s5_20);
		    pe_array_cycsim0->src_0_s5_21(src_0_s5_21);
		    pe_array_cycsim0->src_0_s5_22(src_0_s5_22);
		    pe_array_cycsim0->src_0_s5_23(src_0_s5_23);
		    pe_array_cycsim0->src_0_s5_24(src_0_s5_24);
		    pe_array_cycsim0->src_0_s5_25(src_0_s5_25);
		    pe_array_cycsim0->src_0_s5_26(src_0_s5_26);
		    pe_array_cycsim0->src_0_s5_27(src_0_s5_27);
		    pe_array_cycsim0->src_0_s5_28(src_0_s5_28);
		    pe_array_cycsim0->src_0_s5_29(src_0_s5_29);
		    pe_array_cycsim0->src_0_s5_30(src_0_s5_30);
		    pe_array_cycsim0->src_0_s5_31(src_0_s5_31);
		    pe_array_cycsim0->src_0_s6_0(src_0_s6_0);
		    pe_array_cycsim0->src_0_s6_1(src_0_s6_1);
		    pe_array_cycsim0->src_0_s6_2(src_0_s6_2);
		    pe_array_cycsim0->src_0_s6_3(src_0_s6_3);
		    pe_array_cycsim0->src_0_s6_4(src_0_s6_4);
		    pe_array_cycsim0->src_0_s6_5(src_0_s6_5);
		    pe_array_cycsim0->src_0_s6_6(src_0_s6_6);
		    pe_array_cycsim0->src_0_s6_7(src_0_s6_7);
		    pe_array_cycsim0->src_0_s6_8(src_0_s6_8);
		    pe_array_cycsim0->src_0_s6_9(src_0_s6_9);
		    pe_array_cycsim0->src_0_s6_10(src_0_s6_10);
		    pe_array_cycsim0->src_0_s6_11(src_0_s6_11);
		    pe_array_cycsim0->src_0_s6_12(src_0_s6_12);
		    pe_array_cycsim0->src_0_s6_13(src_0_s6_13);
		    pe_array_cycsim0->src_0_s6_14(src_0_s6_14);
		    pe_array_cycsim0->src_0_s6_15(src_0_s6_15);
		    pe_array_cycsim0->src_0_s6_16(src_0_s6_16);
		    pe_array_cycsim0->src_0_s6_17(src_0_s6_17);
		    pe_array_cycsim0->src_0_s6_18(src_0_s6_18);
		    pe_array_cycsim0->src_0_s6_19(src_0_s6_19);
		    pe_array_cycsim0->src_0_s6_20(src_0_s6_20);
		    pe_array_cycsim0->src_0_s6_21(src_0_s6_21);
		    pe_array_cycsim0->src_0_s6_22(src_0_s6_22);
		    pe_array_cycsim0->src_0_s6_23(src_0_s6_23);
		    pe_array_cycsim0->src_0_s6_24(src_0_s6_24);
		    pe_array_cycsim0->src_0_s6_25(src_0_s6_25);
		    pe_array_cycsim0->src_0_s6_26(src_0_s6_26);
		    pe_array_cycsim0->src_0_s6_27(src_0_s6_27);
		    pe_array_cycsim0->src_0_s6_28(src_0_s6_28);
		    pe_array_cycsim0->src_0_s6_29(src_0_s6_29);
		    pe_array_cycsim0->src_0_s6_30(src_0_s6_30);
		    pe_array_cycsim0->src_0_s6_31(src_0_s6_31);
		    pe_array_cycsim0->src_1_0(src_1_0);
		    pe_array_cycsim0->src_1_1(src_1_1);
		    pe_array_cycsim0->src_1_2(src_1_2);
		    pe_array_cycsim0->src_1_3(src_1_3);
		    pe_array_cycsim0->src_1_4(src_1_4);
		    pe_array_cycsim0->src_1_5(src_1_5);
		    pe_array_cycsim0->src_1_6(src_1_6);
		    pe_array_cycsim0->src_1_7(src_1_7);
		    pe_array_cycsim0->src_1_8(src_1_8);
		    pe_array_cycsim0->src_1_9(src_1_9);
		    pe_array_cycsim0->src_1_10(src_1_10);
		    pe_array_cycsim0->src_1_11(src_1_11);
		    pe_array_cycsim0->src_1_12(src_1_12);
		    pe_array_cycsim0->src_1_13(src_1_13);
		    pe_array_cycsim0->src_1_14(src_1_14);
		    pe_array_cycsim0->src_1_15(src_1_15);
		    pe_array_cycsim0->src_1_16(src_1_16);
		    pe_array_cycsim0->src_1_17(src_1_17);
		    pe_array_cycsim0->src_1_18(src_1_18);
		    pe_array_cycsim0->src_1_19(src_1_19);
		    pe_array_cycsim0->src_1_20(src_1_20);
		    pe_array_cycsim0->src_1_21(src_1_21);
		    pe_array_cycsim0->src_1_22(src_1_22);
		    pe_array_cycsim0->src_1_23(src_1_23);
		    pe_array_cycsim0->src_1_24(src_1_24);
		    pe_array_cycsim0->src_1_25(src_1_25);
		    pe_array_cycsim0->src_1_26(src_1_26);
		    pe_array_cycsim0->src_1_27(src_1_27);
		    pe_array_cycsim0->src_1_28(src_1_28);
		    pe_array_cycsim0->src_1_29(src_1_29);
		    pe_array_cycsim0->src_1_30(src_1_30);
		    pe_array_cycsim0->src_1_31(src_1_31);
		    pe_array_cycsim0->pe_data_0(pe_data_0);
		    pe_array_cycsim0->pe_data_1(pe_data_1);
		    pe_array_cycsim0->pe_data_2(pe_data_2);
		    pe_array_cycsim0->pe_data_3(pe_data_3);
		    pe_array_cycsim0->pe_data_4(pe_data_4);
		    pe_array_cycsim0->pe_data_5(pe_data_5);
		    pe_array_cycsim0->pe_data_6(pe_data_6);
		    pe_array_cycsim0->pe_data_7(pe_data_7);
		    pe_array_cycsim0->pe_data_8(pe_data_8);
		    pe_array_cycsim0->pe_data_9(pe_data_9);
		    pe_array_cycsim0->pe_data_10(pe_data_10);
		    pe_array_cycsim0->pe_data_11(pe_data_11);
		    pe_array_cycsim0->pe_data_12(pe_data_12);
		    pe_array_cycsim0->pe_data_13(pe_data_13);
		    pe_array_cycsim0->pe_data_14(pe_data_14);
		    pe_array_cycsim0->pe_data_15(pe_data_15);
		    pe_array_cycsim0->pe_data_16(pe_data_16);
		    pe_array_cycsim0->pe_data_17(pe_data_17);
		    pe_array_cycsim0->pe_data_18(pe_data_18);
		    pe_array_cycsim0->pe_data_19(pe_data_19);
		    pe_array_cycsim0->pe_data_20(pe_data_20);
		    pe_array_cycsim0->pe_data_21(pe_data_21);
		    pe_array_cycsim0->pe_data_22(pe_data_22);
		    pe_array_cycsim0->pe_data_23(pe_data_23);
		    pe_array_cycsim0->pe_data_24(pe_data_24);
		    pe_array_cycsim0->pe_data_25(pe_data_25);
		    pe_array_cycsim0->pe_data_26(pe_data_26);
		    pe_array_cycsim0->pe_data_27(pe_data_27);
		    pe_array_cycsim0->pe_data_28(pe_data_28);
		    pe_array_cycsim0->pe_data_29(pe_data_29);
		    pe_array_cycsim0->pe_data_30(pe_data_30);
		    pe_array_cycsim0->pe_data_31(pe_data_31);
		    pe_array_cycsim0->pe_data_valid(pe_data_valid);

			break;
#if defined(BDW_RTL) || defined(COWARE_RTL_pe_array)
		case BDWRep_RTL_C:
		    pe_array_rtl0 = new pe_array_rtl( "pe_array" );

		    pe_array_rtl0->clk(clk);
		    pe_array_rtl0->rstn(rstn);
		    pe_array_rtl0->enable(enable);
		    pe_array_rtl0->src_vld(src_vld);
		    pe_array_rtl0->clear(clear);
		    pe_array_rtl0->init(init);
		    pe_array_rtl0->systolic_en(systolic_en);
		    pe_array_rtl0->systolic_depth(systolic_depth);
		    pe_array_rtl0->mac_shift_len(mac_shift_len);
		    pe_array_rtl0->src_0_s0_0(src_0_s0_0);
		    pe_array_rtl0->src_0_s0_1(src_0_s0_1);
		    pe_array_rtl0->src_0_s0_2(src_0_s0_2);
		    pe_array_rtl0->src_0_s0_3(src_0_s0_3);
		    pe_array_rtl0->src_0_s0_4(src_0_s0_4);
		    pe_array_rtl0->src_0_s0_5(src_0_s0_5);
		    pe_array_rtl0->src_0_s0_6(src_0_s0_6);
		    pe_array_rtl0->src_0_s0_7(src_0_s0_7);
		    pe_array_rtl0->src_0_s0_8(src_0_s0_8);
		    pe_array_rtl0->src_0_s0_9(src_0_s0_9);
		    pe_array_rtl0->src_0_s0_10(src_0_s0_10);
		    pe_array_rtl0->src_0_s0_11(src_0_s0_11);
		    pe_array_rtl0->src_0_s0_12(src_0_s0_12);
		    pe_array_rtl0->src_0_s0_13(src_0_s0_13);
		    pe_array_rtl0->src_0_s0_14(src_0_s0_14);
		    pe_array_rtl0->src_0_s0_15(src_0_s0_15);
		    pe_array_rtl0->src_0_s0_16(src_0_s0_16);
		    pe_array_rtl0->src_0_s0_17(src_0_s0_17);
		    pe_array_rtl0->src_0_s0_18(src_0_s0_18);
		    pe_array_rtl0->src_0_s0_19(src_0_s0_19);
		    pe_array_rtl0->src_0_s0_20(src_0_s0_20);
		    pe_array_rtl0->src_0_s0_21(src_0_s0_21);
		    pe_array_rtl0->src_0_s0_22(src_0_s0_22);
		    pe_array_rtl0->src_0_s0_23(src_0_s0_23);
		    pe_array_rtl0->src_0_s0_24(src_0_s0_24);
		    pe_array_rtl0->src_0_s0_25(src_0_s0_25);
		    pe_array_rtl0->src_0_s0_26(src_0_s0_26);
		    pe_array_rtl0->src_0_s0_27(src_0_s0_27);
		    pe_array_rtl0->src_0_s0_28(src_0_s0_28);
		    pe_array_rtl0->src_0_s0_29(src_0_s0_29);
		    pe_array_rtl0->src_0_s0_30(src_0_s0_30);
		    pe_array_rtl0->src_0_s0_31(src_0_s0_31);
		    pe_array_rtl0->src_0_s1_0(src_0_s1_0);
		    pe_array_rtl0->src_0_s1_1(src_0_s1_1);
		    pe_array_rtl0->src_0_s1_2(src_0_s1_2);
		    pe_array_rtl0->src_0_s1_3(src_0_s1_3);
		    pe_array_rtl0->src_0_s1_4(src_0_s1_4);
		    pe_array_rtl0->src_0_s1_5(src_0_s1_5);
		    pe_array_rtl0->src_0_s1_6(src_0_s1_6);
		    pe_array_rtl0->src_0_s1_7(src_0_s1_7);
		    pe_array_rtl0->src_0_s1_8(src_0_s1_8);
		    pe_array_rtl0->src_0_s1_9(src_0_s1_9);
		    pe_array_rtl0->src_0_s1_10(src_0_s1_10);
		    pe_array_rtl0->src_0_s1_11(src_0_s1_11);
		    pe_array_rtl0->src_0_s1_12(src_0_s1_12);
		    pe_array_rtl0->src_0_s1_13(src_0_s1_13);
		    pe_array_rtl0->src_0_s1_14(src_0_s1_14);
		    pe_array_rtl0->src_0_s1_15(src_0_s1_15);
		    pe_array_rtl0->src_0_s1_16(src_0_s1_16);
		    pe_array_rtl0->src_0_s1_17(src_0_s1_17);
		    pe_array_rtl0->src_0_s1_18(src_0_s1_18);
		    pe_array_rtl0->src_0_s1_19(src_0_s1_19);
		    pe_array_rtl0->src_0_s1_20(src_0_s1_20);
		    pe_array_rtl0->src_0_s1_21(src_0_s1_21);
		    pe_array_rtl0->src_0_s1_22(src_0_s1_22);
		    pe_array_rtl0->src_0_s1_23(src_0_s1_23);
		    pe_array_rtl0->src_0_s1_24(src_0_s1_24);
		    pe_array_rtl0->src_0_s1_25(src_0_s1_25);
		    pe_array_rtl0->src_0_s1_26(src_0_s1_26);
		    pe_array_rtl0->src_0_s1_27(src_0_s1_27);
		    pe_array_rtl0->src_0_s1_28(src_0_s1_28);
		    pe_array_rtl0->src_0_s1_29(src_0_s1_29);
		    pe_array_rtl0->src_0_s1_30(src_0_s1_30);
		    pe_array_rtl0->src_0_s1_31(src_0_s1_31);
		    pe_array_rtl0->src_0_s2_0(src_0_s2_0);
		    pe_array_rtl0->src_0_s2_1(src_0_s2_1);
		    pe_array_rtl0->src_0_s2_2(src_0_s2_2);
		    pe_array_rtl0->src_0_s2_3(src_0_s2_3);
		    pe_array_rtl0->src_0_s2_4(src_0_s2_4);
		    pe_array_rtl0->src_0_s2_5(src_0_s2_5);
		    pe_array_rtl0->src_0_s2_6(src_0_s2_6);
		    pe_array_rtl0->src_0_s2_7(src_0_s2_7);
		    pe_array_rtl0->src_0_s2_8(src_0_s2_8);
		    pe_array_rtl0->src_0_s2_9(src_0_s2_9);
		    pe_array_rtl0->src_0_s2_10(src_0_s2_10);
		    pe_array_rtl0->src_0_s2_11(src_0_s2_11);
		    pe_array_rtl0->src_0_s2_12(src_0_s2_12);
		    pe_array_rtl0->src_0_s2_13(src_0_s2_13);
		    pe_array_rtl0->src_0_s2_14(src_0_s2_14);
		    pe_array_rtl0->src_0_s2_15(src_0_s2_15);
		    pe_array_rtl0->src_0_s2_16(src_0_s2_16);
		    pe_array_rtl0->src_0_s2_17(src_0_s2_17);
		    pe_array_rtl0->src_0_s2_18(src_0_s2_18);
		    pe_array_rtl0->src_0_s2_19(src_0_s2_19);
		    pe_array_rtl0->src_0_s2_20(src_0_s2_20);
		    pe_array_rtl0->src_0_s2_21(src_0_s2_21);
		    pe_array_rtl0->src_0_s2_22(src_0_s2_22);
		    pe_array_rtl0->src_0_s2_23(src_0_s2_23);
		    pe_array_rtl0->src_0_s2_24(src_0_s2_24);
		    pe_array_rtl0->src_0_s2_25(src_0_s2_25);
		    pe_array_rtl0->src_0_s2_26(src_0_s2_26);
		    pe_array_rtl0->src_0_s2_27(src_0_s2_27);
		    pe_array_rtl0->src_0_s2_28(src_0_s2_28);
		    pe_array_rtl0->src_0_s2_29(src_0_s2_29);
		    pe_array_rtl0->src_0_s2_30(src_0_s2_30);
		    pe_array_rtl0->src_0_s2_31(src_0_s2_31);
		    pe_array_rtl0->src_0_s3_0(src_0_s3_0);
		    pe_array_rtl0->src_0_s3_1(src_0_s3_1);
		    pe_array_rtl0->src_0_s3_2(src_0_s3_2);
		    pe_array_rtl0->src_0_s3_3(src_0_s3_3);
		    pe_array_rtl0->src_0_s3_4(src_0_s3_4);
		    pe_array_rtl0->src_0_s3_5(src_0_s3_5);
		    pe_array_rtl0->src_0_s3_6(src_0_s3_6);
		    pe_array_rtl0->src_0_s3_7(src_0_s3_7);
		    pe_array_rtl0->src_0_s3_8(src_0_s3_8);
		    pe_array_rtl0->src_0_s3_9(src_0_s3_9);
		    pe_array_rtl0->src_0_s3_10(src_0_s3_10);
		    pe_array_rtl0->src_0_s3_11(src_0_s3_11);
		    pe_array_rtl0->src_0_s3_12(src_0_s3_12);
		    pe_array_rtl0->src_0_s3_13(src_0_s3_13);
		    pe_array_rtl0->src_0_s3_14(src_0_s3_14);
		    pe_array_rtl0->src_0_s3_15(src_0_s3_15);
		    pe_array_rtl0->src_0_s3_16(src_0_s3_16);
		    pe_array_rtl0->src_0_s3_17(src_0_s3_17);
		    pe_array_rtl0->src_0_s3_18(src_0_s3_18);
		    pe_array_rtl0->src_0_s3_19(src_0_s3_19);
		    pe_array_rtl0->src_0_s3_20(src_0_s3_20);
		    pe_array_rtl0->src_0_s3_21(src_0_s3_21);
		    pe_array_rtl0->src_0_s3_22(src_0_s3_22);
		    pe_array_rtl0->src_0_s3_23(src_0_s3_23);
		    pe_array_rtl0->src_0_s3_24(src_0_s3_24);
		    pe_array_rtl0->src_0_s3_25(src_0_s3_25);
		    pe_array_rtl0->src_0_s3_26(src_0_s3_26);
		    pe_array_rtl0->src_0_s3_27(src_0_s3_27);
		    pe_array_rtl0->src_0_s3_28(src_0_s3_28);
		    pe_array_rtl0->src_0_s3_29(src_0_s3_29);
		    pe_array_rtl0->src_0_s3_30(src_0_s3_30);
		    pe_array_rtl0->src_0_s3_31(src_0_s3_31);
		    pe_array_rtl0->src_0_s4_0(src_0_s4_0);
		    pe_array_rtl0->src_0_s4_1(src_0_s4_1);
		    pe_array_rtl0->src_0_s4_2(src_0_s4_2);
		    pe_array_rtl0->src_0_s4_3(src_0_s4_3);
		    pe_array_rtl0->src_0_s4_4(src_0_s4_4);
		    pe_array_rtl0->src_0_s4_5(src_0_s4_5);
		    pe_array_rtl0->src_0_s4_6(src_0_s4_6);
		    pe_array_rtl0->src_0_s4_7(src_0_s4_7);
		    pe_array_rtl0->src_0_s4_8(src_0_s4_8);
		    pe_array_rtl0->src_0_s4_9(src_0_s4_9);
		    pe_array_rtl0->src_0_s4_10(src_0_s4_10);
		    pe_array_rtl0->src_0_s4_11(src_0_s4_11);
		    pe_array_rtl0->src_0_s4_12(src_0_s4_12);
		    pe_array_rtl0->src_0_s4_13(src_0_s4_13);
		    pe_array_rtl0->src_0_s4_14(src_0_s4_14);
		    pe_array_rtl0->src_0_s4_15(src_0_s4_15);
		    pe_array_rtl0->src_0_s4_16(src_0_s4_16);
		    pe_array_rtl0->src_0_s4_17(src_0_s4_17);
		    pe_array_rtl0->src_0_s4_18(src_0_s4_18);
		    pe_array_rtl0->src_0_s4_19(src_0_s4_19);
		    pe_array_rtl0->src_0_s4_20(src_0_s4_20);
		    pe_array_rtl0->src_0_s4_21(src_0_s4_21);
		    pe_array_rtl0->src_0_s4_22(src_0_s4_22);
		    pe_array_rtl0->src_0_s4_23(src_0_s4_23);
		    pe_array_rtl0->src_0_s4_24(src_0_s4_24);
		    pe_array_rtl0->src_0_s4_25(src_0_s4_25);
		    pe_array_rtl0->src_0_s4_26(src_0_s4_26);
		    pe_array_rtl0->src_0_s4_27(src_0_s4_27);
		    pe_array_rtl0->src_0_s4_28(src_0_s4_28);
		    pe_array_rtl0->src_0_s4_29(src_0_s4_29);
		    pe_array_rtl0->src_0_s4_30(src_0_s4_30);
		    pe_array_rtl0->src_0_s4_31(src_0_s4_31);
		    pe_array_rtl0->src_0_s5_0(src_0_s5_0);
		    pe_array_rtl0->src_0_s5_1(src_0_s5_1);
		    pe_array_rtl0->src_0_s5_2(src_0_s5_2);
		    pe_array_rtl0->src_0_s5_3(src_0_s5_3);
		    pe_array_rtl0->src_0_s5_4(src_0_s5_4);
		    pe_array_rtl0->src_0_s5_5(src_0_s5_5);
		    pe_array_rtl0->src_0_s5_6(src_0_s5_6);
		    pe_array_rtl0->src_0_s5_7(src_0_s5_7);
		    pe_array_rtl0->src_0_s5_8(src_0_s5_8);
		    pe_array_rtl0->src_0_s5_9(src_0_s5_9);
		    pe_array_rtl0->src_0_s5_10(src_0_s5_10);
		    pe_array_rtl0->src_0_s5_11(src_0_s5_11);
		    pe_array_rtl0->src_0_s5_12(src_0_s5_12);
		    pe_array_rtl0->src_0_s5_13(src_0_s5_13);
		    pe_array_rtl0->src_0_s5_14(src_0_s5_14);
		    pe_array_rtl0->src_0_s5_15(src_0_s5_15);
		    pe_array_rtl0->src_0_s5_16(src_0_s5_16);
		    pe_array_rtl0->src_0_s5_17(src_0_s5_17);
		    pe_array_rtl0->src_0_s5_18(src_0_s5_18);
		    pe_array_rtl0->src_0_s5_19(src_0_s5_19);
		    pe_array_rtl0->src_0_s5_20(src_0_s5_20);
		    pe_array_rtl0->src_0_s5_21(src_0_s5_21);
		    pe_array_rtl0->src_0_s5_22(src_0_s5_22);
		    pe_array_rtl0->src_0_s5_23(src_0_s5_23);
		    pe_array_rtl0->src_0_s5_24(src_0_s5_24);
		    pe_array_rtl0->src_0_s5_25(src_0_s5_25);
		    pe_array_rtl0->src_0_s5_26(src_0_s5_26);
		    pe_array_rtl0->src_0_s5_27(src_0_s5_27);
		    pe_array_rtl0->src_0_s5_28(src_0_s5_28);
		    pe_array_rtl0->src_0_s5_29(src_0_s5_29);
		    pe_array_rtl0->src_0_s5_30(src_0_s5_30);
		    pe_array_rtl0->src_0_s5_31(src_0_s5_31);
		    pe_array_rtl0->src_0_s6_0(src_0_s6_0);
		    pe_array_rtl0->src_0_s6_1(src_0_s6_1);
		    pe_array_rtl0->src_0_s6_2(src_0_s6_2);
		    pe_array_rtl0->src_0_s6_3(src_0_s6_3);
		    pe_array_rtl0->src_0_s6_4(src_0_s6_4);
		    pe_array_rtl0->src_0_s6_5(src_0_s6_5);
		    pe_array_rtl0->src_0_s6_6(src_0_s6_6);
		    pe_array_rtl0->src_0_s6_7(src_0_s6_7);
		    pe_array_rtl0->src_0_s6_8(src_0_s6_8);
		    pe_array_rtl0->src_0_s6_9(src_0_s6_9);
		    pe_array_rtl0->src_0_s6_10(src_0_s6_10);
		    pe_array_rtl0->src_0_s6_11(src_0_s6_11);
		    pe_array_rtl0->src_0_s6_12(src_0_s6_12);
		    pe_array_rtl0->src_0_s6_13(src_0_s6_13);
		    pe_array_rtl0->src_0_s6_14(src_0_s6_14);
		    pe_array_rtl0->src_0_s6_15(src_0_s6_15);
		    pe_array_rtl0->src_0_s6_16(src_0_s6_16);
		    pe_array_rtl0->src_0_s6_17(src_0_s6_17);
		    pe_array_rtl0->src_0_s6_18(src_0_s6_18);
		    pe_array_rtl0->src_0_s6_19(src_0_s6_19);
		    pe_array_rtl0->src_0_s6_20(src_0_s6_20);
		    pe_array_rtl0->src_0_s6_21(src_0_s6_21);
		    pe_array_rtl0->src_0_s6_22(src_0_s6_22);
		    pe_array_rtl0->src_0_s6_23(src_0_s6_23);
		    pe_array_rtl0->src_0_s6_24(src_0_s6_24);
		    pe_array_rtl0->src_0_s6_25(src_0_s6_25);
		    pe_array_rtl0->src_0_s6_26(src_0_s6_26);
		    pe_array_rtl0->src_0_s6_27(src_0_s6_27);
		    pe_array_rtl0->src_0_s6_28(src_0_s6_28);
		    pe_array_rtl0->src_0_s6_29(src_0_s6_29);
		    pe_array_rtl0->src_0_s6_30(src_0_s6_30);
		    pe_array_rtl0->src_0_s6_31(src_0_s6_31);
		    pe_array_rtl0->src_1_0(src_1_0);
		    pe_array_rtl0->src_1_1(src_1_1);
		    pe_array_rtl0->src_1_2(src_1_2);
		    pe_array_rtl0->src_1_3(src_1_3);
		    pe_array_rtl0->src_1_4(src_1_4);
		    pe_array_rtl0->src_1_5(src_1_5);
		    pe_array_rtl0->src_1_6(src_1_6);
		    pe_array_rtl0->src_1_7(src_1_7);
		    pe_array_rtl0->src_1_8(src_1_8);
		    pe_array_rtl0->src_1_9(src_1_9);
		    pe_array_rtl0->src_1_10(src_1_10);
		    pe_array_rtl0->src_1_11(src_1_11);
		    pe_array_rtl0->src_1_12(src_1_12);
		    pe_array_rtl0->src_1_13(src_1_13);
		    pe_array_rtl0->src_1_14(src_1_14);
		    pe_array_rtl0->src_1_15(src_1_15);
		    pe_array_rtl0->src_1_16(src_1_16);
		    pe_array_rtl0->src_1_17(src_1_17);
		    pe_array_rtl0->src_1_18(src_1_18);
		    pe_array_rtl0->src_1_19(src_1_19);
		    pe_array_rtl0->src_1_20(src_1_20);
		    pe_array_rtl0->src_1_21(src_1_21);
		    pe_array_rtl0->src_1_22(src_1_22);
		    pe_array_rtl0->src_1_23(src_1_23);
		    pe_array_rtl0->src_1_24(src_1_24);
		    pe_array_rtl0->src_1_25(src_1_25);
		    pe_array_rtl0->src_1_26(src_1_26);
		    pe_array_rtl0->src_1_27(src_1_27);
		    pe_array_rtl0->src_1_28(src_1_28);
		    pe_array_rtl0->src_1_29(src_1_29);
		    pe_array_rtl0->src_1_30(src_1_30);
		    pe_array_rtl0->src_1_31(src_1_31);
		    pe_array_rtl0->pe_data_0(pe_data_0);
		    pe_array_rtl0->pe_data_1(pe_data_1);
		    pe_array_rtl0->pe_data_2(pe_data_2);
		    pe_array_rtl0->pe_data_3(pe_data_3);
		    pe_array_rtl0->pe_data_4(pe_data_4);
		    pe_array_rtl0->pe_data_5(pe_data_5);
		    pe_array_rtl0->pe_data_6(pe_data_6);
		    pe_array_rtl0->pe_data_7(pe_data_7);
		    pe_array_rtl0->pe_data_8(pe_data_8);
		    pe_array_rtl0->pe_data_9(pe_data_9);
		    pe_array_rtl0->pe_data_10(pe_data_10);
		    pe_array_rtl0->pe_data_11(pe_data_11);
		    pe_array_rtl0->pe_data_12(pe_data_12);
		    pe_array_rtl0->pe_data_13(pe_data_13);
		    pe_array_rtl0->pe_data_14(pe_data_14);
		    pe_array_rtl0->pe_data_15(pe_data_15);
		    pe_array_rtl0->pe_data_16(pe_data_16);
		    pe_array_rtl0->pe_data_17(pe_data_17);
		    pe_array_rtl0->pe_data_18(pe_data_18);
		    pe_array_rtl0->pe_data_19(pe_data_19);
		    pe_array_rtl0->pe_data_20(pe_data_20);
		    pe_array_rtl0->pe_data_21(pe_data_21);
		    pe_array_rtl0->pe_data_22(pe_data_22);
		    pe_array_rtl0->pe_data_23(pe_data_23);
		    pe_array_rtl0->pe_data_24(pe_data_24);
		    pe_array_rtl0->pe_data_25(pe_data_25);
		    pe_array_rtl0->pe_data_26(pe_data_26);
		    pe_array_rtl0->pe_data_27(pe_data_27);
		    pe_array_rtl0->pe_data_28(pe_data_28);
		    pe_array_rtl0->pe_data_29(pe_data_29);
		    pe_array_rtl0->pe_data_30(pe_data_30);
		    pe_array_rtl0->pe_data_31(pe_data_31);
		    pe_array_rtl0->pe_data_valid(pe_data_valid);


			{
			const char *simConfig = pe_array_wrapper::simConfigName();
			
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
		    pe_array0 = new pe_array( "pe_array" );

		    pe_array0->clk(clk);
		    pe_array0->rstn(rstn);
		    pe_array0->enable(enable);
		    pe_array0->src_vld(src_vld);
		    pe_array0->clear(clear);
		    pe_array0->init(init);
		    pe_array0->systolic_en(systolic_en);
		    pe_array0->systolic_depth(systolic_depth);
		    pe_array0->mac_shift_len(mac_shift_len);
		    pe_array0->src_0_s0[0](src_0_s0[0]);
		    pe_array0->src_0_s0[1](src_0_s0[1]);
		    pe_array0->src_0_s0[2](src_0_s0[2]);
		    pe_array0->src_0_s0[3](src_0_s0[3]);
		    pe_array0->src_0_s0[4](src_0_s0[4]);
		    pe_array0->src_0_s0[5](src_0_s0[5]);
		    pe_array0->src_0_s0[6](src_0_s0[6]);
		    pe_array0->src_0_s0[7](src_0_s0[7]);
		    pe_array0->src_0_s0[8](src_0_s0[8]);
		    pe_array0->src_0_s0[9](src_0_s0[9]);
		    pe_array0->src_0_s0[10](src_0_s0[10]);
		    pe_array0->src_0_s0[11](src_0_s0[11]);
		    pe_array0->src_0_s0[12](src_0_s0[12]);
		    pe_array0->src_0_s0[13](src_0_s0[13]);
		    pe_array0->src_0_s0[14](src_0_s0[14]);
		    pe_array0->src_0_s0[15](src_0_s0[15]);
		    pe_array0->src_0_s0[16](src_0_s0[16]);
		    pe_array0->src_0_s0[17](src_0_s0[17]);
		    pe_array0->src_0_s0[18](src_0_s0[18]);
		    pe_array0->src_0_s0[19](src_0_s0[19]);
		    pe_array0->src_0_s0[20](src_0_s0[20]);
		    pe_array0->src_0_s0[21](src_0_s0[21]);
		    pe_array0->src_0_s0[22](src_0_s0[22]);
		    pe_array0->src_0_s0[23](src_0_s0[23]);
		    pe_array0->src_0_s0[24](src_0_s0[24]);
		    pe_array0->src_0_s0[25](src_0_s0[25]);
		    pe_array0->src_0_s0[26](src_0_s0[26]);
		    pe_array0->src_0_s0[27](src_0_s0[27]);
		    pe_array0->src_0_s0[28](src_0_s0[28]);
		    pe_array0->src_0_s0[29](src_0_s0[29]);
		    pe_array0->src_0_s0[30](src_0_s0[30]);
		    pe_array0->src_0_s0[31](src_0_s0[31]);
		    pe_array0->src_0_s1[0](src_0_s1[0]);
		    pe_array0->src_0_s1[1](src_0_s1[1]);
		    pe_array0->src_0_s1[2](src_0_s1[2]);
		    pe_array0->src_0_s1[3](src_0_s1[3]);
		    pe_array0->src_0_s1[4](src_0_s1[4]);
		    pe_array0->src_0_s1[5](src_0_s1[5]);
		    pe_array0->src_0_s1[6](src_0_s1[6]);
		    pe_array0->src_0_s1[7](src_0_s1[7]);
		    pe_array0->src_0_s1[8](src_0_s1[8]);
		    pe_array0->src_0_s1[9](src_0_s1[9]);
		    pe_array0->src_0_s1[10](src_0_s1[10]);
		    pe_array0->src_0_s1[11](src_0_s1[11]);
		    pe_array0->src_0_s1[12](src_0_s1[12]);
		    pe_array0->src_0_s1[13](src_0_s1[13]);
		    pe_array0->src_0_s1[14](src_0_s1[14]);
		    pe_array0->src_0_s1[15](src_0_s1[15]);
		    pe_array0->src_0_s1[16](src_0_s1[16]);
		    pe_array0->src_0_s1[17](src_0_s1[17]);
		    pe_array0->src_0_s1[18](src_0_s1[18]);
		    pe_array0->src_0_s1[19](src_0_s1[19]);
		    pe_array0->src_0_s1[20](src_0_s1[20]);
		    pe_array0->src_0_s1[21](src_0_s1[21]);
		    pe_array0->src_0_s1[22](src_0_s1[22]);
		    pe_array0->src_0_s1[23](src_0_s1[23]);
		    pe_array0->src_0_s1[24](src_0_s1[24]);
		    pe_array0->src_0_s1[25](src_0_s1[25]);
		    pe_array0->src_0_s1[26](src_0_s1[26]);
		    pe_array0->src_0_s1[27](src_0_s1[27]);
		    pe_array0->src_0_s1[28](src_0_s1[28]);
		    pe_array0->src_0_s1[29](src_0_s1[29]);
		    pe_array0->src_0_s1[30](src_0_s1[30]);
		    pe_array0->src_0_s1[31](src_0_s1[31]);
		    pe_array0->src_0_s2[0](src_0_s2[0]);
		    pe_array0->src_0_s2[1](src_0_s2[1]);
		    pe_array0->src_0_s2[2](src_0_s2[2]);
		    pe_array0->src_0_s2[3](src_0_s2[3]);
		    pe_array0->src_0_s2[4](src_0_s2[4]);
		    pe_array0->src_0_s2[5](src_0_s2[5]);
		    pe_array0->src_0_s2[6](src_0_s2[6]);
		    pe_array0->src_0_s2[7](src_0_s2[7]);
		    pe_array0->src_0_s2[8](src_0_s2[8]);
		    pe_array0->src_0_s2[9](src_0_s2[9]);
		    pe_array0->src_0_s2[10](src_0_s2[10]);
		    pe_array0->src_0_s2[11](src_0_s2[11]);
		    pe_array0->src_0_s2[12](src_0_s2[12]);
		    pe_array0->src_0_s2[13](src_0_s2[13]);
		    pe_array0->src_0_s2[14](src_0_s2[14]);
		    pe_array0->src_0_s2[15](src_0_s2[15]);
		    pe_array0->src_0_s2[16](src_0_s2[16]);
		    pe_array0->src_0_s2[17](src_0_s2[17]);
		    pe_array0->src_0_s2[18](src_0_s2[18]);
		    pe_array0->src_0_s2[19](src_0_s2[19]);
		    pe_array0->src_0_s2[20](src_0_s2[20]);
		    pe_array0->src_0_s2[21](src_0_s2[21]);
		    pe_array0->src_0_s2[22](src_0_s2[22]);
		    pe_array0->src_0_s2[23](src_0_s2[23]);
		    pe_array0->src_0_s2[24](src_0_s2[24]);
		    pe_array0->src_0_s2[25](src_0_s2[25]);
		    pe_array0->src_0_s2[26](src_0_s2[26]);
		    pe_array0->src_0_s2[27](src_0_s2[27]);
		    pe_array0->src_0_s2[28](src_0_s2[28]);
		    pe_array0->src_0_s2[29](src_0_s2[29]);
		    pe_array0->src_0_s2[30](src_0_s2[30]);
		    pe_array0->src_0_s2[31](src_0_s2[31]);
		    pe_array0->src_0_s3[0](src_0_s3[0]);
		    pe_array0->src_0_s3[1](src_0_s3[1]);
		    pe_array0->src_0_s3[2](src_0_s3[2]);
		    pe_array0->src_0_s3[3](src_0_s3[3]);
		    pe_array0->src_0_s3[4](src_0_s3[4]);
		    pe_array0->src_0_s3[5](src_0_s3[5]);
		    pe_array0->src_0_s3[6](src_0_s3[6]);
		    pe_array0->src_0_s3[7](src_0_s3[7]);
		    pe_array0->src_0_s3[8](src_0_s3[8]);
		    pe_array0->src_0_s3[9](src_0_s3[9]);
		    pe_array0->src_0_s3[10](src_0_s3[10]);
		    pe_array0->src_0_s3[11](src_0_s3[11]);
		    pe_array0->src_0_s3[12](src_0_s3[12]);
		    pe_array0->src_0_s3[13](src_0_s3[13]);
		    pe_array0->src_0_s3[14](src_0_s3[14]);
		    pe_array0->src_0_s3[15](src_0_s3[15]);
		    pe_array0->src_0_s3[16](src_0_s3[16]);
		    pe_array0->src_0_s3[17](src_0_s3[17]);
		    pe_array0->src_0_s3[18](src_0_s3[18]);
		    pe_array0->src_0_s3[19](src_0_s3[19]);
		    pe_array0->src_0_s3[20](src_0_s3[20]);
		    pe_array0->src_0_s3[21](src_0_s3[21]);
		    pe_array0->src_0_s3[22](src_0_s3[22]);
		    pe_array0->src_0_s3[23](src_0_s3[23]);
		    pe_array0->src_0_s3[24](src_0_s3[24]);
		    pe_array0->src_0_s3[25](src_0_s3[25]);
		    pe_array0->src_0_s3[26](src_0_s3[26]);
		    pe_array0->src_0_s3[27](src_0_s3[27]);
		    pe_array0->src_0_s3[28](src_0_s3[28]);
		    pe_array0->src_0_s3[29](src_0_s3[29]);
		    pe_array0->src_0_s3[30](src_0_s3[30]);
		    pe_array0->src_0_s3[31](src_0_s3[31]);
		    pe_array0->src_0_s4[0](src_0_s4[0]);
		    pe_array0->src_0_s4[1](src_0_s4[1]);
		    pe_array0->src_0_s4[2](src_0_s4[2]);
		    pe_array0->src_0_s4[3](src_0_s4[3]);
		    pe_array0->src_0_s4[4](src_0_s4[4]);
		    pe_array0->src_0_s4[5](src_0_s4[5]);
		    pe_array0->src_0_s4[6](src_0_s4[6]);
		    pe_array0->src_0_s4[7](src_0_s4[7]);
		    pe_array0->src_0_s4[8](src_0_s4[8]);
		    pe_array0->src_0_s4[9](src_0_s4[9]);
		    pe_array0->src_0_s4[10](src_0_s4[10]);
		    pe_array0->src_0_s4[11](src_0_s4[11]);
		    pe_array0->src_0_s4[12](src_0_s4[12]);
		    pe_array0->src_0_s4[13](src_0_s4[13]);
		    pe_array0->src_0_s4[14](src_0_s4[14]);
		    pe_array0->src_0_s4[15](src_0_s4[15]);
		    pe_array0->src_0_s4[16](src_0_s4[16]);
		    pe_array0->src_0_s4[17](src_0_s4[17]);
		    pe_array0->src_0_s4[18](src_0_s4[18]);
		    pe_array0->src_0_s4[19](src_0_s4[19]);
		    pe_array0->src_0_s4[20](src_0_s4[20]);
		    pe_array0->src_0_s4[21](src_0_s4[21]);
		    pe_array0->src_0_s4[22](src_0_s4[22]);
		    pe_array0->src_0_s4[23](src_0_s4[23]);
		    pe_array0->src_0_s4[24](src_0_s4[24]);
		    pe_array0->src_0_s4[25](src_0_s4[25]);
		    pe_array0->src_0_s4[26](src_0_s4[26]);
		    pe_array0->src_0_s4[27](src_0_s4[27]);
		    pe_array0->src_0_s4[28](src_0_s4[28]);
		    pe_array0->src_0_s4[29](src_0_s4[29]);
		    pe_array0->src_0_s4[30](src_0_s4[30]);
		    pe_array0->src_0_s4[31](src_0_s4[31]);
		    pe_array0->src_0_s5[0](src_0_s5[0]);
		    pe_array0->src_0_s5[1](src_0_s5[1]);
		    pe_array0->src_0_s5[2](src_0_s5[2]);
		    pe_array0->src_0_s5[3](src_0_s5[3]);
		    pe_array0->src_0_s5[4](src_0_s5[4]);
		    pe_array0->src_0_s5[5](src_0_s5[5]);
		    pe_array0->src_0_s5[6](src_0_s5[6]);
		    pe_array0->src_0_s5[7](src_0_s5[7]);
		    pe_array0->src_0_s5[8](src_0_s5[8]);
		    pe_array0->src_0_s5[9](src_0_s5[9]);
		    pe_array0->src_0_s5[10](src_0_s5[10]);
		    pe_array0->src_0_s5[11](src_0_s5[11]);
		    pe_array0->src_0_s5[12](src_0_s5[12]);
		    pe_array0->src_0_s5[13](src_0_s5[13]);
		    pe_array0->src_0_s5[14](src_0_s5[14]);
		    pe_array0->src_0_s5[15](src_0_s5[15]);
		    pe_array0->src_0_s5[16](src_0_s5[16]);
		    pe_array0->src_0_s5[17](src_0_s5[17]);
		    pe_array0->src_0_s5[18](src_0_s5[18]);
		    pe_array0->src_0_s5[19](src_0_s5[19]);
		    pe_array0->src_0_s5[20](src_0_s5[20]);
		    pe_array0->src_0_s5[21](src_0_s5[21]);
		    pe_array0->src_0_s5[22](src_0_s5[22]);
		    pe_array0->src_0_s5[23](src_0_s5[23]);
		    pe_array0->src_0_s5[24](src_0_s5[24]);
		    pe_array0->src_0_s5[25](src_0_s5[25]);
		    pe_array0->src_0_s5[26](src_0_s5[26]);
		    pe_array0->src_0_s5[27](src_0_s5[27]);
		    pe_array0->src_0_s5[28](src_0_s5[28]);
		    pe_array0->src_0_s5[29](src_0_s5[29]);
		    pe_array0->src_0_s5[30](src_0_s5[30]);
		    pe_array0->src_0_s5[31](src_0_s5[31]);
		    pe_array0->src_0_s6[0](src_0_s6[0]);
		    pe_array0->src_0_s6[1](src_0_s6[1]);
		    pe_array0->src_0_s6[2](src_0_s6[2]);
		    pe_array0->src_0_s6[3](src_0_s6[3]);
		    pe_array0->src_0_s6[4](src_0_s6[4]);
		    pe_array0->src_0_s6[5](src_0_s6[5]);
		    pe_array0->src_0_s6[6](src_0_s6[6]);
		    pe_array0->src_0_s6[7](src_0_s6[7]);
		    pe_array0->src_0_s6[8](src_0_s6[8]);
		    pe_array0->src_0_s6[9](src_0_s6[9]);
		    pe_array0->src_0_s6[10](src_0_s6[10]);
		    pe_array0->src_0_s6[11](src_0_s6[11]);
		    pe_array0->src_0_s6[12](src_0_s6[12]);
		    pe_array0->src_0_s6[13](src_0_s6[13]);
		    pe_array0->src_0_s6[14](src_0_s6[14]);
		    pe_array0->src_0_s6[15](src_0_s6[15]);
		    pe_array0->src_0_s6[16](src_0_s6[16]);
		    pe_array0->src_0_s6[17](src_0_s6[17]);
		    pe_array0->src_0_s6[18](src_0_s6[18]);
		    pe_array0->src_0_s6[19](src_0_s6[19]);
		    pe_array0->src_0_s6[20](src_0_s6[20]);
		    pe_array0->src_0_s6[21](src_0_s6[21]);
		    pe_array0->src_0_s6[22](src_0_s6[22]);
		    pe_array0->src_0_s6[23](src_0_s6[23]);
		    pe_array0->src_0_s6[24](src_0_s6[24]);
		    pe_array0->src_0_s6[25](src_0_s6[25]);
		    pe_array0->src_0_s6[26](src_0_s6[26]);
		    pe_array0->src_0_s6[27](src_0_s6[27]);
		    pe_array0->src_0_s6[28](src_0_s6[28]);
		    pe_array0->src_0_s6[29](src_0_s6[29]);
		    pe_array0->src_0_s6[30](src_0_s6[30]);
		    pe_array0->src_0_s6[31](src_0_s6[31]);
		    pe_array0->src_1[0](src_1[0]);
		    pe_array0->src_1[1](src_1[1]);
		    pe_array0->src_1[2](src_1[2]);
		    pe_array0->src_1[3](src_1[3]);
		    pe_array0->src_1[4](src_1[4]);
		    pe_array0->src_1[5](src_1[5]);
		    pe_array0->src_1[6](src_1[6]);
		    pe_array0->src_1[7](src_1[7]);
		    pe_array0->src_1[8](src_1[8]);
		    pe_array0->src_1[9](src_1[9]);
		    pe_array0->src_1[10](src_1[10]);
		    pe_array0->src_1[11](src_1[11]);
		    pe_array0->src_1[12](src_1[12]);
		    pe_array0->src_1[13](src_1[13]);
		    pe_array0->src_1[14](src_1[14]);
		    pe_array0->src_1[15](src_1[15]);
		    pe_array0->src_1[16](src_1[16]);
		    pe_array0->src_1[17](src_1[17]);
		    pe_array0->src_1[18](src_1[18]);
		    pe_array0->src_1[19](src_1[19]);
		    pe_array0->src_1[20](src_1[20]);
		    pe_array0->src_1[21](src_1[21]);
		    pe_array0->src_1[22](src_1[22]);
		    pe_array0->src_1[23](src_1[23]);
		    pe_array0->src_1[24](src_1[24]);
		    pe_array0->src_1[25](src_1[25]);
		    pe_array0->src_1[26](src_1[26]);
		    pe_array0->src_1[27](src_1[27]);
		    pe_array0->src_1[28](src_1[28]);
		    pe_array0->src_1[29](src_1[29]);
		    pe_array0->src_1[30](src_1[30]);
		    pe_array0->src_1[31](src_1[31]);
		    pe_array0->pe_data[0](pe_data[0]);
		    pe_array0->pe_data[1](pe_data[1]);
		    pe_array0->pe_data[2](pe_data[2]);
		    pe_array0->pe_data[3](pe_data[3]);
		    pe_array0->pe_data[4](pe_data[4]);
		    pe_array0->pe_data[5](pe_data[5]);
		    pe_array0->pe_data[6](pe_data[6]);
		    pe_array0->pe_data[7](pe_data[7]);
		    pe_array0->pe_data[8](pe_data[8]);
		    pe_array0->pe_data[9](pe_data[9]);
		    pe_array0->pe_data[10](pe_data[10]);
		    pe_array0->pe_data[11](pe_data[11]);
		    pe_array0->pe_data[12](pe_data[12]);
		    pe_array0->pe_data[13](pe_data[13]);
		    pe_array0->pe_data[14](pe_data[14]);
		    pe_array0->pe_data[15](pe_data[15]);
		    pe_array0->pe_data[16](pe_data[16]);
		    pe_array0->pe_data[17](pe_data[17]);
		    pe_array0->pe_data[18](pe_data[18]);
		    pe_array0->pe_data[19](pe_data[19]);
		    pe_array0->pe_data[20](pe_data[20]);
		    pe_array0->pe_data[21](pe_data[21]);
		    pe_array0->pe_data[22](pe_data[22]);
		    pe_array0->pe_data[23](pe_data[23]);
		    pe_array0->pe_data[24](pe_data[24]);
		    pe_array0->pe_data[25](pe_data[25]);
		    pe_array0->pe_data[26](pe_data[26]);
		    pe_array0->pe_data[27](pe_data[27]);
		    pe_array0->pe_data[28](pe_data[28]);
		    pe_array0->pe_data[29](pe_data[29]);
		    pe_array0->pe_data[30](pe_data[30]);
		    pe_array0->pe_data[31](pe_data[31]);
		    pe_array0->pe_data_valid(pe_data_valid);


			{
			const char *simConfig = pe_array_wrapper::simConfigName();
			
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

void pe_array_wrapper_r::InitThreads()
{
	if ( isBEH() ) 
	{
		SC_METHOD(thread_src_0_s0_0);
		  sensitive << src_0_s0_0;
		SC_METHOD(thread_src_0_s0_1);
		  sensitive << src_0_s0_1;
		SC_METHOD(thread_src_0_s0_2);
		  sensitive << src_0_s0_2;
		SC_METHOD(thread_src_0_s0_3);
		  sensitive << src_0_s0_3;
		SC_METHOD(thread_src_0_s0_4);
		  sensitive << src_0_s0_4;
		SC_METHOD(thread_src_0_s0_5);
		  sensitive << src_0_s0_5;
		SC_METHOD(thread_src_0_s0_6);
		  sensitive << src_0_s0_6;
		SC_METHOD(thread_src_0_s0_7);
		  sensitive << src_0_s0_7;
		SC_METHOD(thread_src_0_s0_8);
		  sensitive << src_0_s0_8;
		SC_METHOD(thread_src_0_s0_9);
		  sensitive << src_0_s0_9;
		SC_METHOD(thread_src_0_s0_10);
		  sensitive << src_0_s0_10;
		SC_METHOD(thread_src_0_s0_11);
		  sensitive << src_0_s0_11;
		SC_METHOD(thread_src_0_s0_12);
		  sensitive << src_0_s0_12;
		SC_METHOD(thread_src_0_s0_13);
		  sensitive << src_0_s0_13;
		SC_METHOD(thread_src_0_s0_14);
		  sensitive << src_0_s0_14;
		SC_METHOD(thread_src_0_s0_15);
		  sensitive << src_0_s0_15;
		SC_METHOD(thread_src_0_s0_16);
		  sensitive << src_0_s0_16;
		SC_METHOD(thread_src_0_s0_17);
		  sensitive << src_0_s0_17;
		SC_METHOD(thread_src_0_s0_18);
		  sensitive << src_0_s0_18;
		SC_METHOD(thread_src_0_s0_19);
		  sensitive << src_0_s0_19;
		SC_METHOD(thread_src_0_s0_20);
		  sensitive << src_0_s0_20;
		SC_METHOD(thread_src_0_s0_21);
		  sensitive << src_0_s0_21;
		SC_METHOD(thread_src_0_s0_22);
		  sensitive << src_0_s0_22;
		SC_METHOD(thread_src_0_s0_23);
		  sensitive << src_0_s0_23;
		SC_METHOD(thread_src_0_s0_24);
		  sensitive << src_0_s0_24;
		SC_METHOD(thread_src_0_s0_25);
		  sensitive << src_0_s0_25;
		SC_METHOD(thread_src_0_s0_26);
		  sensitive << src_0_s0_26;
		SC_METHOD(thread_src_0_s0_27);
		  sensitive << src_0_s0_27;
		SC_METHOD(thread_src_0_s0_28);
		  sensitive << src_0_s0_28;
		SC_METHOD(thread_src_0_s0_29);
		  sensitive << src_0_s0_29;
		SC_METHOD(thread_src_0_s0_30);
		  sensitive << src_0_s0_30;
		SC_METHOD(thread_src_0_s0_31);
		  sensitive << src_0_s0_31;
		SC_METHOD(thread_src_0_s1_0);
		  sensitive << src_0_s1_0;
		SC_METHOD(thread_src_0_s1_1);
		  sensitive << src_0_s1_1;
		SC_METHOD(thread_src_0_s1_2);
		  sensitive << src_0_s1_2;
		SC_METHOD(thread_src_0_s1_3);
		  sensitive << src_0_s1_3;
		SC_METHOD(thread_src_0_s1_4);
		  sensitive << src_0_s1_4;
		SC_METHOD(thread_src_0_s1_5);
		  sensitive << src_0_s1_5;
		SC_METHOD(thread_src_0_s1_6);
		  sensitive << src_0_s1_6;
		SC_METHOD(thread_src_0_s1_7);
		  sensitive << src_0_s1_7;
		SC_METHOD(thread_src_0_s1_8);
		  sensitive << src_0_s1_8;
		SC_METHOD(thread_src_0_s1_9);
		  sensitive << src_0_s1_9;
		SC_METHOD(thread_src_0_s1_10);
		  sensitive << src_0_s1_10;
		SC_METHOD(thread_src_0_s1_11);
		  sensitive << src_0_s1_11;
		SC_METHOD(thread_src_0_s1_12);
		  sensitive << src_0_s1_12;
		SC_METHOD(thread_src_0_s1_13);
		  sensitive << src_0_s1_13;
		SC_METHOD(thread_src_0_s1_14);
		  sensitive << src_0_s1_14;
		SC_METHOD(thread_src_0_s1_15);
		  sensitive << src_0_s1_15;
		SC_METHOD(thread_src_0_s1_16);
		  sensitive << src_0_s1_16;
		SC_METHOD(thread_src_0_s1_17);
		  sensitive << src_0_s1_17;
		SC_METHOD(thread_src_0_s1_18);
		  sensitive << src_0_s1_18;
		SC_METHOD(thread_src_0_s1_19);
		  sensitive << src_0_s1_19;
		SC_METHOD(thread_src_0_s1_20);
		  sensitive << src_0_s1_20;
		SC_METHOD(thread_src_0_s1_21);
		  sensitive << src_0_s1_21;
		SC_METHOD(thread_src_0_s1_22);
		  sensitive << src_0_s1_22;
		SC_METHOD(thread_src_0_s1_23);
		  sensitive << src_0_s1_23;
		SC_METHOD(thread_src_0_s1_24);
		  sensitive << src_0_s1_24;
		SC_METHOD(thread_src_0_s1_25);
		  sensitive << src_0_s1_25;
		SC_METHOD(thread_src_0_s1_26);
		  sensitive << src_0_s1_26;
		SC_METHOD(thread_src_0_s1_27);
		  sensitive << src_0_s1_27;
		SC_METHOD(thread_src_0_s1_28);
		  sensitive << src_0_s1_28;
		SC_METHOD(thread_src_0_s1_29);
		  sensitive << src_0_s1_29;
		SC_METHOD(thread_src_0_s1_30);
		  sensitive << src_0_s1_30;
		SC_METHOD(thread_src_0_s1_31);
		  sensitive << src_0_s1_31;
		SC_METHOD(thread_src_0_s2_0);
		  sensitive << src_0_s2_0;
		SC_METHOD(thread_src_0_s2_1);
		  sensitive << src_0_s2_1;
		SC_METHOD(thread_src_0_s2_2);
		  sensitive << src_0_s2_2;
		SC_METHOD(thread_src_0_s2_3);
		  sensitive << src_0_s2_3;
		SC_METHOD(thread_src_0_s2_4);
		  sensitive << src_0_s2_4;
		SC_METHOD(thread_src_0_s2_5);
		  sensitive << src_0_s2_5;
		SC_METHOD(thread_src_0_s2_6);
		  sensitive << src_0_s2_6;
		SC_METHOD(thread_src_0_s2_7);
		  sensitive << src_0_s2_7;
		SC_METHOD(thread_src_0_s2_8);
		  sensitive << src_0_s2_8;
		SC_METHOD(thread_src_0_s2_9);
		  sensitive << src_0_s2_9;
		SC_METHOD(thread_src_0_s2_10);
		  sensitive << src_0_s2_10;
		SC_METHOD(thread_src_0_s2_11);
		  sensitive << src_0_s2_11;
		SC_METHOD(thread_src_0_s2_12);
		  sensitive << src_0_s2_12;
		SC_METHOD(thread_src_0_s2_13);
		  sensitive << src_0_s2_13;
		SC_METHOD(thread_src_0_s2_14);
		  sensitive << src_0_s2_14;
		SC_METHOD(thread_src_0_s2_15);
		  sensitive << src_0_s2_15;
		SC_METHOD(thread_src_0_s2_16);
		  sensitive << src_0_s2_16;
		SC_METHOD(thread_src_0_s2_17);
		  sensitive << src_0_s2_17;
		SC_METHOD(thread_src_0_s2_18);
		  sensitive << src_0_s2_18;
		SC_METHOD(thread_src_0_s2_19);
		  sensitive << src_0_s2_19;
		SC_METHOD(thread_src_0_s2_20);
		  sensitive << src_0_s2_20;
		SC_METHOD(thread_src_0_s2_21);
		  sensitive << src_0_s2_21;
		SC_METHOD(thread_src_0_s2_22);
		  sensitive << src_0_s2_22;
		SC_METHOD(thread_src_0_s2_23);
		  sensitive << src_0_s2_23;
		SC_METHOD(thread_src_0_s2_24);
		  sensitive << src_0_s2_24;
		SC_METHOD(thread_src_0_s2_25);
		  sensitive << src_0_s2_25;
		SC_METHOD(thread_src_0_s2_26);
		  sensitive << src_0_s2_26;
		SC_METHOD(thread_src_0_s2_27);
		  sensitive << src_0_s2_27;
		SC_METHOD(thread_src_0_s2_28);
		  sensitive << src_0_s2_28;
		SC_METHOD(thread_src_0_s2_29);
		  sensitive << src_0_s2_29;
		SC_METHOD(thread_src_0_s2_30);
		  sensitive << src_0_s2_30;
		SC_METHOD(thread_src_0_s2_31);
		  sensitive << src_0_s2_31;
		SC_METHOD(thread_src_0_s3_0);
		  sensitive << src_0_s3_0;
		SC_METHOD(thread_src_0_s3_1);
		  sensitive << src_0_s3_1;
		SC_METHOD(thread_src_0_s3_2);
		  sensitive << src_0_s3_2;
		SC_METHOD(thread_src_0_s3_3);
		  sensitive << src_0_s3_3;
		SC_METHOD(thread_src_0_s3_4);
		  sensitive << src_0_s3_4;
		SC_METHOD(thread_src_0_s3_5);
		  sensitive << src_0_s3_5;
		SC_METHOD(thread_src_0_s3_6);
		  sensitive << src_0_s3_6;
		SC_METHOD(thread_src_0_s3_7);
		  sensitive << src_0_s3_7;
		SC_METHOD(thread_src_0_s3_8);
		  sensitive << src_0_s3_8;
		SC_METHOD(thread_src_0_s3_9);
		  sensitive << src_0_s3_9;
		SC_METHOD(thread_src_0_s3_10);
		  sensitive << src_0_s3_10;
		SC_METHOD(thread_src_0_s3_11);
		  sensitive << src_0_s3_11;
		SC_METHOD(thread_src_0_s3_12);
		  sensitive << src_0_s3_12;
		SC_METHOD(thread_src_0_s3_13);
		  sensitive << src_0_s3_13;
		SC_METHOD(thread_src_0_s3_14);
		  sensitive << src_0_s3_14;
		SC_METHOD(thread_src_0_s3_15);
		  sensitive << src_0_s3_15;
		SC_METHOD(thread_src_0_s3_16);
		  sensitive << src_0_s3_16;
		SC_METHOD(thread_src_0_s3_17);
		  sensitive << src_0_s3_17;
		SC_METHOD(thread_src_0_s3_18);
		  sensitive << src_0_s3_18;
		SC_METHOD(thread_src_0_s3_19);
		  sensitive << src_0_s3_19;
		SC_METHOD(thread_src_0_s3_20);
		  sensitive << src_0_s3_20;
		SC_METHOD(thread_src_0_s3_21);
		  sensitive << src_0_s3_21;
		SC_METHOD(thread_src_0_s3_22);
		  sensitive << src_0_s3_22;
		SC_METHOD(thread_src_0_s3_23);
		  sensitive << src_0_s3_23;
		SC_METHOD(thread_src_0_s3_24);
		  sensitive << src_0_s3_24;
		SC_METHOD(thread_src_0_s3_25);
		  sensitive << src_0_s3_25;
		SC_METHOD(thread_src_0_s3_26);
		  sensitive << src_0_s3_26;
		SC_METHOD(thread_src_0_s3_27);
		  sensitive << src_0_s3_27;
		SC_METHOD(thread_src_0_s3_28);
		  sensitive << src_0_s3_28;
		SC_METHOD(thread_src_0_s3_29);
		  sensitive << src_0_s3_29;
		SC_METHOD(thread_src_0_s3_30);
		  sensitive << src_0_s3_30;
		SC_METHOD(thread_src_0_s3_31);
		  sensitive << src_0_s3_31;
		SC_METHOD(thread_src_0_s4_0);
		  sensitive << src_0_s4_0;
		SC_METHOD(thread_src_0_s4_1);
		  sensitive << src_0_s4_1;
		SC_METHOD(thread_src_0_s4_2);
		  sensitive << src_0_s4_2;
		SC_METHOD(thread_src_0_s4_3);
		  sensitive << src_0_s4_3;
		SC_METHOD(thread_src_0_s4_4);
		  sensitive << src_0_s4_4;
		SC_METHOD(thread_src_0_s4_5);
		  sensitive << src_0_s4_5;
		SC_METHOD(thread_src_0_s4_6);
		  sensitive << src_0_s4_6;
		SC_METHOD(thread_src_0_s4_7);
		  sensitive << src_0_s4_7;
		SC_METHOD(thread_src_0_s4_8);
		  sensitive << src_0_s4_8;
		SC_METHOD(thread_src_0_s4_9);
		  sensitive << src_0_s4_9;
		SC_METHOD(thread_src_0_s4_10);
		  sensitive << src_0_s4_10;
		SC_METHOD(thread_src_0_s4_11);
		  sensitive << src_0_s4_11;
		SC_METHOD(thread_src_0_s4_12);
		  sensitive << src_0_s4_12;
		SC_METHOD(thread_src_0_s4_13);
		  sensitive << src_0_s4_13;
		SC_METHOD(thread_src_0_s4_14);
		  sensitive << src_0_s4_14;
		SC_METHOD(thread_src_0_s4_15);
		  sensitive << src_0_s4_15;
		SC_METHOD(thread_src_0_s4_16);
		  sensitive << src_0_s4_16;
		SC_METHOD(thread_src_0_s4_17);
		  sensitive << src_0_s4_17;
		SC_METHOD(thread_src_0_s4_18);
		  sensitive << src_0_s4_18;
		SC_METHOD(thread_src_0_s4_19);
		  sensitive << src_0_s4_19;
		SC_METHOD(thread_src_0_s4_20);
		  sensitive << src_0_s4_20;
		SC_METHOD(thread_src_0_s4_21);
		  sensitive << src_0_s4_21;
		SC_METHOD(thread_src_0_s4_22);
		  sensitive << src_0_s4_22;
		SC_METHOD(thread_src_0_s4_23);
		  sensitive << src_0_s4_23;
		SC_METHOD(thread_src_0_s4_24);
		  sensitive << src_0_s4_24;
		SC_METHOD(thread_src_0_s4_25);
		  sensitive << src_0_s4_25;
		SC_METHOD(thread_src_0_s4_26);
		  sensitive << src_0_s4_26;
		SC_METHOD(thread_src_0_s4_27);
		  sensitive << src_0_s4_27;
		SC_METHOD(thread_src_0_s4_28);
		  sensitive << src_0_s4_28;
		SC_METHOD(thread_src_0_s4_29);
		  sensitive << src_0_s4_29;
		SC_METHOD(thread_src_0_s4_30);
		  sensitive << src_0_s4_30;
		SC_METHOD(thread_src_0_s4_31);
		  sensitive << src_0_s4_31;
		SC_METHOD(thread_src_0_s5_0);
		  sensitive << src_0_s5_0;
		SC_METHOD(thread_src_0_s5_1);
		  sensitive << src_0_s5_1;
		SC_METHOD(thread_src_0_s5_2);
		  sensitive << src_0_s5_2;
		SC_METHOD(thread_src_0_s5_3);
		  sensitive << src_0_s5_3;
		SC_METHOD(thread_src_0_s5_4);
		  sensitive << src_0_s5_4;
		SC_METHOD(thread_src_0_s5_5);
		  sensitive << src_0_s5_5;
		SC_METHOD(thread_src_0_s5_6);
		  sensitive << src_0_s5_6;
		SC_METHOD(thread_src_0_s5_7);
		  sensitive << src_0_s5_7;
		SC_METHOD(thread_src_0_s5_8);
		  sensitive << src_0_s5_8;
		SC_METHOD(thread_src_0_s5_9);
		  sensitive << src_0_s5_9;
		SC_METHOD(thread_src_0_s5_10);
		  sensitive << src_0_s5_10;
		SC_METHOD(thread_src_0_s5_11);
		  sensitive << src_0_s5_11;
		SC_METHOD(thread_src_0_s5_12);
		  sensitive << src_0_s5_12;
		SC_METHOD(thread_src_0_s5_13);
		  sensitive << src_0_s5_13;
		SC_METHOD(thread_src_0_s5_14);
		  sensitive << src_0_s5_14;
		SC_METHOD(thread_src_0_s5_15);
		  sensitive << src_0_s5_15;
		SC_METHOD(thread_src_0_s5_16);
		  sensitive << src_0_s5_16;
		SC_METHOD(thread_src_0_s5_17);
		  sensitive << src_0_s5_17;
		SC_METHOD(thread_src_0_s5_18);
		  sensitive << src_0_s5_18;
		SC_METHOD(thread_src_0_s5_19);
		  sensitive << src_0_s5_19;
		SC_METHOD(thread_src_0_s5_20);
		  sensitive << src_0_s5_20;
		SC_METHOD(thread_src_0_s5_21);
		  sensitive << src_0_s5_21;
		SC_METHOD(thread_src_0_s5_22);
		  sensitive << src_0_s5_22;
		SC_METHOD(thread_src_0_s5_23);
		  sensitive << src_0_s5_23;
		SC_METHOD(thread_src_0_s5_24);
		  sensitive << src_0_s5_24;
		SC_METHOD(thread_src_0_s5_25);
		  sensitive << src_0_s5_25;
		SC_METHOD(thread_src_0_s5_26);
		  sensitive << src_0_s5_26;
		SC_METHOD(thread_src_0_s5_27);
		  sensitive << src_0_s5_27;
		SC_METHOD(thread_src_0_s5_28);
		  sensitive << src_0_s5_28;
		SC_METHOD(thread_src_0_s5_29);
		  sensitive << src_0_s5_29;
		SC_METHOD(thread_src_0_s5_30);
		  sensitive << src_0_s5_30;
		SC_METHOD(thread_src_0_s5_31);
		  sensitive << src_0_s5_31;
		SC_METHOD(thread_src_0_s6_0);
		  sensitive << src_0_s6_0;
		SC_METHOD(thread_src_0_s6_1);
		  sensitive << src_0_s6_1;
		SC_METHOD(thread_src_0_s6_2);
		  sensitive << src_0_s6_2;
		SC_METHOD(thread_src_0_s6_3);
		  sensitive << src_0_s6_3;
		SC_METHOD(thread_src_0_s6_4);
		  sensitive << src_0_s6_4;
		SC_METHOD(thread_src_0_s6_5);
		  sensitive << src_0_s6_5;
		SC_METHOD(thread_src_0_s6_6);
		  sensitive << src_0_s6_6;
		SC_METHOD(thread_src_0_s6_7);
		  sensitive << src_0_s6_7;
		SC_METHOD(thread_src_0_s6_8);
		  sensitive << src_0_s6_8;
		SC_METHOD(thread_src_0_s6_9);
		  sensitive << src_0_s6_9;
		SC_METHOD(thread_src_0_s6_10);
		  sensitive << src_0_s6_10;
		SC_METHOD(thread_src_0_s6_11);
		  sensitive << src_0_s6_11;
		SC_METHOD(thread_src_0_s6_12);
		  sensitive << src_0_s6_12;
		SC_METHOD(thread_src_0_s6_13);
		  sensitive << src_0_s6_13;
		SC_METHOD(thread_src_0_s6_14);
		  sensitive << src_0_s6_14;
		SC_METHOD(thread_src_0_s6_15);
		  sensitive << src_0_s6_15;
		SC_METHOD(thread_src_0_s6_16);
		  sensitive << src_0_s6_16;
		SC_METHOD(thread_src_0_s6_17);
		  sensitive << src_0_s6_17;
		SC_METHOD(thread_src_0_s6_18);
		  sensitive << src_0_s6_18;
		SC_METHOD(thread_src_0_s6_19);
		  sensitive << src_0_s6_19;
		SC_METHOD(thread_src_0_s6_20);
		  sensitive << src_0_s6_20;
		SC_METHOD(thread_src_0_s6_21);
		  sensitive << src_0_s6_21;
		SC_METHOD(thread_src_0_s6_22);
		  sensitive << src_0_s6_22;
		SC_METHOD(thread_src_0_s6_23);
		  sensitive << src_0_s6_23;
		SC_METHOD(thread_src_0_s6_24);
		  sensitive << src_0_s6_24;
		SC_METHOD(thread_src_0_s6_25);
		  sensitive << src_0_s6_25;
		SC_METHOD(thread_src_0_s6_26);
		  sensitive << src_0_s6_26;
		SC_METHOD(thread_src_0_s6_27);
		  sensitive << src_0_s6_27;
		SC_METHOD(thread_src_0_s6_28);
		  sensitive << src_0_s6_28;
		SC_METHOD(thread_src_0_s6_29);
		  sensitive << src_0_s6_29;
		SC_METHOD(thread_src_0_s6_30);
		  sensitive << src_0_s6_30;
		SC_METHOD(thread_src_0_s6_31);
		  sensitive << src_0_s6_31;
		SC_METHOD(thread_src_1_0);
		  sensitive << src_1_0;
		SC_METHOD(thread_src_1_1);
		  sensitive << src_1_1;
		SC_METHOD(thread_src_1_2);
		  sensitive << src_1_2;
		SC_METHOD(thread_src_1_3);
		  sensitive << src_1_3;
		SC_METHOD(thread_src_1_4);
		  sensitive << src_1_4;
		SC_METHOD(thread_src_1_5);
		  sensitive << src_1_5;
		SC_METHOD(thread_src_1_6);
		  sensitive << src_1_6;
		SC_METHOD(thread_src_1_7);
		  sensitive << src_1_7;
		SC_METHOD(thread_src_1_8);
		  sensitive << src_1_8;
		SC_METHOD(thread_src_1_9);
		  sensitive << src_1_9;
		SC_METHOD(thread_src_1_10);
		  sensitive << src_1_10;
		SC_METHOD(thread_src_1_11);
		  sensitive << src_1_11;
		SC_METHOD(thread_src_1_12);
		  sensitive << src_1_12;
		SC_METHOD(thread_src_1_13);
		  sensitive << src_1_13;
		SC_METHOD(thread_src_1_14);
		  sensitive << src_1_14;
		SC_METHOD(thread_src_1_15);
		  sensitive << src_1_15;
		SC_METHOD(thread_src_1_16);
		  sensitive << src_1_16;
		SC_METHOD(thread_src_1_17);
		  sensitive << src_1_17;
		SC_METHOD(thread_src_1_18);
		  sensitive << src_1_18;
		SC_METHOD(thread_src_1_19);
		  sensitive << src_1_19;
		SC_METHOD(thread_src_1_20);
		  sensitive << src_1_20;
		SC_METHOD(thread_src_1_21);
		  sensitive << src_1_21;
		SC_METHOD(thread_src_1_22);
		  sensitive << src_1_22;
		SC_METHOD(thread_src_1_23);
		  sensitive << src_1_23;
		SC_METHOD(thread_src_1_24);
		  sensitive << src_1_24;
		SC_METHOD(thread_src_1_25);
		  sensitive << src_1_25;
		SC_METHOD(thread_src_1_26);
		  sensitive << src_1_26;
		SC_METHOD(thread_src_1_27);
		  sensitive << src_1_27;
		SC_METHOD(thread_src_1_28);
		  sensitive << src_1_28;
		SC_METHOD(thread_src_1_29);
		  sensitive << src_1_29;
		SC_METHOD(thread_src_1_30);
		  sensitive << src_1_30;
		SC_METHOD(thread_src_1_31);
		  sensitive << src_1_31;
		SC_METHOD(thread_pe_data_0);
		  sensitive << pe_data[0];
		SC_METHOD(thread_pe_data_1);
		  sensitive << pe_data[1];
		SC_METHOD(thread_pe_data_2);
		  sensitive << pe_data[2];
		SC_METHOD(thread_pe_data_3);
		  sensitive << pe_data[3];
		SC_METHOD(thread_pe_data_4);
		  sensitive << pe_data[4];
		SC_METHOD(thread_pe_data_5);
		  sensitive << pe_data[5];
		SC_METHOD(thread_pe_data_6);
		  sensitive << pe_data[6];
		SC_METHOD(thread_pe_data_7);
		  sensitive << pe_data[7];
		SC_METHOD(thread_pe_data_8);
		  sensitive << pe_data[8];
		SC_METHOD(thread_pe_data_9);
		  sensitive << pe_data[9];
		SC_METHOD(thread_pe_data_10);
		  sensitive << pe_data[10];
		SC_METHOD(thread_pe_data_11);
		  sensitive << pe_data[11];
		SC_METHOD(thread_pe_data_12);
		  sensitive << pe_data[12];
		SC_METHOD(thread_pe_data_13);
		  sensitive << pe_data[13];
		SC_METHOD(thread_pe_data_14);
		  sensitive << pe_data[14];
		SC_METHOD(thread_pe_data_15);
		  sensitive << pe_data[15];
		SC_METHOD(thread_pe_data_16);
		  sensitive << pe_data[16];
		SC_METHOD(thread_pe_data_17);
		  sensitive << pe_data[17];
		SC_METHOD(thread_pe_data_18);
		  sensitive << pe_data[18];
		SC_METHOD(thread_pe_data_19);
		  sensitive << pe_data[19];
		SC_METHOD(thread_pe_data_20);
		  sensitive << pe_data[20];
		SC_METHOD(thread_pe_data_21);
		  sensitive << pe_data[21];
		SC_METHOD(thread_pe_data_22);
		  sensitive << pe_data[22];
		SC_METHOD(thread_pe_data_23);
		  sensitive << pe_data[23];
		SC_METHOD(thread_pe_data_24);
		  sensitive << pe_data[24];
		SC_METHOD(thread_pe_data_25);
		  sensitive << pe_data[25];
		SC_METHOD(thread_pe_data_26);
		  sensitive << pe_data[26];
		SC_METHOD(thread_pe_data_27);
		  sensitive << pe_data[27];
		SC_METHOD(thread_pe_data_28);
		  sensitive << pe_data[28];
		SC_METHOD(thread_pe_data_29);
		  sensitive << pe_data[29];
		SC_METHOD(thread_pe_data_30);
		  sensitive << pe_data[30];
		SC_METHOD(thread_pe_data_31);
		  sensitive << pe_data[31];

	}
}

void pe_array_wrapper_r::start_of_simulation()
{

#include <pe_array_trace.h>

    esc_multiple_writers_warning();
}

void pe_array_wrapper_r::CloseTrace()
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

void pe_array_wrapper_r::end_of_simulation()
{
	CloseTrace();
}



void pe_array_wrapper_r::DeleteInstances()
{
    if (pe_array0)
    {
        delete pe_array0;
        pe_array0 = 0;
    }
    if (pe_array_cosim0)
    {
        delete pe_array_cosim0;
        pe_array_cosim0 = 0;
    }
    if (pe_array_cycsim0)
    {
        delete pe_array_cycsim0;
        pe_array_cycsim0 = 0;
    }
#if defined(BDW_RTL) || defined(COWARE_RTL_pe_array)
    if (pe_array_rtl0)
    {
        delete pe_array_rtl0;
        pe_array_rtl0 = 0;
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

class pe_array_wrapper_fsdb_opener {
public:
	pe_array_wrapper_fsdb_opener() {
		esc_set_open_fsdb_trace( esc_open_fsdb_trace );
		esc_set_open_fsdb_scv_trace( esc_open_fsdb_scv_trace );
	}
};

static pe_array_wrapper_fsdb_opener
  pe_array_wrapper_fsdb_opener_inst;

#else

// Visible to uses of the wrapper outside of the BDW environment.
// Only behavioral SystemC simulation is supported.


// Include the source for the behavioral model so it will be compiled.
#include	"pe_array.cpp"

#define		pe_array_INTERNAL


#include	"pe_array_wrap.h"

const char * pe_array_wrapper::simConfigName()
{
  return "";
}

enum pe_array_wrapper::Representation pe_array_wrapper::lookupRepresentation( const char* instName )
{
  return BDWRep_Behavioral;
}

void pe_array_wrapper::InitInstances( sc_core::sc_module_name  )
{
	pe_array0 = new pe_array( "pe_array" );

	pe_array0->clk(clk);
	pe_array0->rstn(rstn);
	pe_array0->enable(enable);
	pe_array0->src_vld(src_vld);
	pe_array0->clear(clear);
	pe_array0->init(init);
	pe_array0->systolic_en(systolic_en);
	pe_array0->systolic_depth(systolic_depth);
	pe_array0->mac_shift_len(mac_shift_len);
	pe_array0->src_0_s0[0](src_0_s0[0]);
	pe_array0->src_0_s0[1](src_0_s0[1]);
	pe_array0->src_0_s0[2](src_0_s0[2]);
	pe_array0->src_0_s0[3](src_0_s0[3]);
	pe_array0->src_0_s0[4](src_0_s0[4]);
	pe_array0->src_0_s0[5](src_0_s0[5]);
	pe_array0->src_0_s0[6](src_0_s0[6]);
	pe_array0->src_0_s0[7](src_0_s0[7]);
	pe_array0->src_0_s0[8](src_0_s0[8]);
	pe_array0->src_0_s0[9](src_0_s0[9]);
	pe_array0->src_0_s0[10](src_0_s0[10]);
	pe_array0->src_0_s0[11](src_0_s0[11]);
	pe_array0->src_0_s0[12](src_0_s0[12]);
	pe_array0->src_0_s0[13](src_0_s0[13]);
	pe_array0->src_0_s0[14](src_0_s0[14]);
	pe_array0->src_0_s0[15](src_0_s0[15]);
	pe_array0->src_0_s0[16](src_0_s0[16]);
	pe_array0->src_0_s0[17](src_0_s0[17]);
	pe_array0->src_0_s0[18](src_0_s0[18]);
	pe_array0->src_0_s0[19](src_0_s0[19]);
	pe_array0->src_0_s0[20](src_0_s0[20]);
	pe_array0->src_0_s0[21](src_0_s0[21]);
	pe_array0->src_0_s0[22](src_0_s0[22]);
	pe_array0->src_0_s0[23](src_0_s0[23]);
	pe_array0->src_0_s0[24](src_0_s0[24]);
	pe_array0->src_0_s0[25](src_0_s0[25]);
	pe_array0->src_0_s0[26](src_0_s0[26]);
	pe_array0->src_0_s0[27](src_0_s0[27]);
	pe_array0->src_0_s0[28](src_0_s0[28]);
	pe_array0->src_0_s0[29](src_0_s0[29]);
	pe_array0->src_0_s0[30](src_0_s0[30]);
	pe_array0->src_0_s0[31](src_0_s0[31]);
	pe_array0->src_0_s1[0](src_0_s1[0]);
	pe_array0->src_0_s1[1](src_0_s1[1]);
	pe_array0->src_0_s1[2](src_0_s1[2]);
	pe_array0->src_0_s1[3](src_0_s1[3]);
	pe_array0->src_0_s1[4](src_0_s1[4]);
	pe_array0->src_0_s1[5](src_0_s1[5]);
	pe_array0->src_0_s1[6](src_0_s1[6]);
	pe_array0->src_0_s1[7](src_0_s1[7]);
	pe_array0->src_0_s1[8](src_0_s1[8]);
	pe_array0->src_0_s1[9](src_0_s1[9]);
	pe_array0->src_0_s1[10](src_0_s1[10]);
	pe_array0->src_0_s1[11](src_0_s1[11]);
	pe_array0->src_0_s1[12](src_0_s1[12]);
	pe_array0->src_0_s1[13](src_0_s1[13]);
	pe_array0->src_0_s1[14](src_0_s1[14]);
	pe_array0->src_0_s1[15](src_0_s1[15]);
	pe_array0->src_0_s1[16](src_0_s1[16]);
	pe_array0->src_0_s1[17](src_0_s1[17]);
	pe_array0->src_0_s1[18](src_0_s1[18]);
	pe_array0->src_0_s1[19](src_0_s1[19]);
	pe_array0->src_0_s1[20](src_0_s1[20]);
	pe_array0->src_0_s1[21](src_0_s1[21]);
	pe_array0->src_0_s1[22](src_0_s1[22]);
	pe_array0->src_0_s1[23](src_0_s1[23]);
	pe_array0->src_0_s1[24](src_0_s1[24]);
	pe_array0->src_0_s1[25](src_0_s1[25]);
	pe_array0->src_0_s1[26](src_0_s1[26]);
	pe_array0->src_0_s1[27](src_0_s1[27]);
	pe_array0->src_0_s1[28](src_0_s1[28]);
	pe_array0->src_0_s1[29](src_0_s1[29]);
	pe_array0->src_0_s1[30](src_0_s1[30]);
	pe_array0->src_0_s1[31](src_0_s1[31]);
	pe_array0->src_0_s2[0](src_0_s2[0]);
	pe_array0->src_0_s2[1](src_0_s2[1]);
	pe_array0->src_0_s2[2](src_0_s2[2]);
	pe_array0->src_0_s2[3](src_0_s2[3]);
	pe_array0->src_0_s2[4](src_0_s2[4]);
	pe_array0->src_0_s2[5](src_0_s2[5]);
	pe_array0->src_0_s2[6](src_0_s2[6]);
	pe_array0->src_0_s2[7](src_0_s2[7]);
	pe_array0->src_0_s2[8](src_0_s2[8]);
	pe_array0->src_0_s2[9](src_0_s2[9]);
	pe_array0->src_0_s2[10](src_0_s2[10]);
	pe_array0->src_0_s2[11](src_0_s2[11]);
	pe_array0->src_0_s2[12](src_0_s2[12]);
	pe_array0->src_0_s2[13](src_0_s2[13]);
	pe_array0->src_0_s2[14](src_0_s2[14]);
	pe_array0->src_0_s2[15](src_0_s2[15]);
	pe_array0->src_0_s2[16](src_0_s2[16]);
	pe_array0->src_0_s2[17](src_0_s2[17]);
	pe_array0->src_0_s2[18](src_0_s2[18]);
	pe_array0->src_0_s2[19](src_0_s2[19]);
	pe_array0->src_0_s2[20](src_0_s2[20]);
	pe_array0->src_0_s2[21](src_0_s2[21]);
	pe_array0->src_0_s2[22](src_0_s2[22]);
	pe_array0->src_0_s2[23](src_0_s2[23]);
	pe_array0->src_0_s2[24](src_0_s2[24]);
	pe_array0->src_0_s2[25](src_0_s2[25]);
	pe_array0->src_0_s2[26](src_0_s2[26]);
	pe_array0->src_0_s2[27](src_0_s2[27]);
	pe_array0->src_0_s2[28](src_0_s2[28]);
	pe_array0->src_0_s2[29](src_0_s2[29]);
	pe_array0->src_0_s2[30](src_0_s2[30]);
	pe_array0->src_0_s2[31](src_0_s2[31]);
	pe_array0->src_0_s3[0](src_0_s3[0]);
	pe_array0->src_0_s3[1](src_0_s3[1]);
	pe_array0->src_0_s3[2](src_0_s3[2]);
	pe_array0->src_0_s3[3](src_0_s3[3]);
	pe_array0->src_0_s3[4](src_0_s3[4]);
	pe_array0->src_0_s3[5](src_0_s3[5]);
	pe_array0->src_0_s3[6](src_0_s3[6]);
	pe_array0->src_0_s3[7](src_0_s3[7]);
	pe_array0->src_0_s3[8](src_0_s3[8]);
	pe_array0->src_0_s3[9](src_0_s3[9]);
	pe_array0->src_0_s3[10](src_0_s3[10]);
	pe_array0->src_0_s3[11](src_0_s3[11]);
	pe_array0->src_0_s3[12](src_0_s3[12]);
	pe_array0->src_0_s3[13](src_0_s3[13]);
	pe_array0->src_0_s3[14](src_0_s3[14]);
	pe_array0->src_0_s3[15](src_0_s3[15]);
	pe_array0->src_0_s3[16](src_0_s3[16]);
	pe_array0->src_0_s3[17](src_0_s3[17]);
	pe_array0->src_0_s3[18](src_0_s3[18]);
	pe_array0->src_0_s3[19](src_0_s3[19]);
	pe_array0->src_0_s3[20](src_0_s3[20]);
	pe_array0->src_0_s3[21](src_0_s3[21]);
	pe_array0->src_0_s3[22](src_0_s3[22]);
	pe_array0->src_0_s3[23](src_0_s3[23]);
	pe_array0->src_0_s3[24](src_0_s3[24]);
	pe_array0->src_0_s3[25](src_0_s3[25]);
	pe_array0->src_0_s3[26](src_0_s3[26]);
	pe_array0->src_0_s3[27](src_0_s3[27]);
	pe_array0->src_0_s3[28](src_0_s3[28]);
	pe_array0->src_0_s3[29](src_0_s3[29]);
	pe_array0->src_0_s3[30](src_0_s3[30]);
	pe_array0->src_0_s3[31](src_0_s3[31]);
	pe_array0->src_0_s4[0](src_0_s4[0]);
	pe_array0->src_0_s4[1](src_0_s4[1]);
	pe_array0->src_0_s4[2](src_0_s4[2]);
	pe_array0->src_0_s4[3](src_0_s4[3]);
	pe_array0->src_0_s4[4](src_0_s4[4]);
	pe_array0->src_0_s4[5](src_0_s4[5]);
	pe_array0->src_0_s4[6](src_0_s4[6]);
	pe_array0->src_0_s4[7](src_0_s4[7]);
	pe_array0->src_0_s4[8](src_0_s4[8]);
	pe_array0->src_0_s4[9](src_0_s4[9]);
	pe_array0->src_0_s4[10](src_0_s4[10]);
	pe_array0->src_0_s4[11](src_0_s4[11]);
	pe_array0->src_0_s4[12](src_0_s4[12]);
	pe_array0->src_0_s4[13](src_0_s4[13]);
	pe_array0->src_0_s4[14](src_0_s4[14]);
	pe_array0->src_0_s4[15](src_0_s4[15]);
	pe_array0->src_0_s4[16](src_0_s4[16]);
	pe_array0->src_0_s4[17](src_0_s4[17]);
	pe_array0->src_0_s4[18](src_0_s4[18]);
	pe_array0->src_0_s4[19](src_0_s4[19]);
	pe_array0->src_0_s4[20](src_0_s4[20]);
	pe_array0->src_0_s4[21](src_0_s4[21]);
	pe_array0->src_0_s4[22](src_0_s4[22]);
	pe_array0->src_0_s4[23](src_0_s4[23]);
	pe_array0->src_0_s4[24](src_0_s4[24]);
	pe_array0->src_0_s4[25](src_0_s4[25]);
	pe_array0->src_0_s4[26](src_0_s4[26]);
	pe_array0->src_0_s4[27](src_0_s4[27]);
	pe_array0->src_0_s4[28](src_0_s4[28]);
	pe_array0->src_0_s4[29](src_0_s4[29]);
	pe_array0->src_0_s4[30](src_0_s4[30]);
	pe_array0->src_0_s4[31](src_0_s4[31]);
	pe_array0->src_0_s5[0](src_0_s5[0]);
	pe_array0->src_0_s5[1](src_0_s5[1]);
	pe_array0->src_0_s5[2](src_0_s5[2]);
	pe_array0->src_0_s5[3](src_0_s5[3]);
	pe_array0->src_0_s5[4](src_0_s5[4]);
	pe_array0->src_0_s5[5](src_0_s5[5]);
	pe_array0->src_0_s5[6](src_0_s5[6]);
	pe_array0->src_0_s5[7](src_0_s5[7]);
	pe_array0->src_0_s5[8](src_0_s5[8]);
	pe_array0->src_0_s5[9](src_0_s5[9]);
	pe_array0->src_0_s5[10](src_0_s5[10]);
	pe_array0->src_0_s5[11](src_0_s5[11]);
	pe_array0->src_0_s5[12](src_0_s5[12]);
	pe_array0->src_0_s5[13](src_0_s5[13]);
	pe_array0->src_0_s5[14](src_0_s5[14]);
	pe_array0->src_0_s5[15](src_0_s5[15]);
	pe_array0->src_0_s5[16](src_0_s5[16]);
	pe_array0->src_0_s5[17](src_0_s5[17]);
	pe_array0->src_0_s5[18](src_0_s5[18]);
	pe_array0->src_0_s5[19](src_0_s5[19]);
	pe_array0->src_0_s5[20](src_0_s5[20]);
	pe_array0->src_0_s5[21](src_0_s5[21]);
	pe_array0->src_0_s5[22](src_0_s5[22]);
	pe_array0->src_0_s5[23](src_0_s5[23]);
	pe_array0->src_0_s5[24](src_0_s5[24]);
	pe_array0->src_0_s5[25](src_0_s5[25]);
	pe_array0->src_0_s5[26](src_0_s5[26]);
	pe_array0->src_0_s5[27](src_0_s5[27]);
	pe_array0->src_0_s5[28](src_0_s5[28]);
	pe_array0->src_0_s5[29](src_0_s5[29]);
	pe_array0->src_0_s5[30](src_0_s5[30]);
	pe_array0->src_0_s5[31](src_0_s5[31]);
	pe_array0->src_0_s6[0](src_0_s6[0]);
	pe_array0->src_0_s6[1](src_0_s6[1]);
	pe_array0->src_0_s6[2](src_0_s6[2]);
	pe_array0->src_0_s6[3](src_0_s6[3]);
	pe_array0->src_0_s6[4](src_0_s6[4]);
	pe_array0->src_0_s6[5](src_0_s6[5]);
	pe_array0->src_0_s6[6](src_0_s6[6]);
	pe_array0->src_0_s6[7](src_0_s6[7]);
	pe_array0->src_0_s6[8](src_0_s6[8]);
	pe_array0->src_0_s6[9](src_0_s6[9]);
	pe_array0->src_0_s6[10](src_0_s6[10]);
	pe_array0->src_0_s6[11](src_0_s6[11]);
	pe_array0->src_0_s6[12](src_0_s6[12]);
	pe_array0->src_0_s6[13](src_0_s6[13]);
	pe_array0->src_0_s6[14](src_0_s6[14]);
	pe_array0->src_0_s6[15](src_0_s6[15]);
	pe_array0->src_0_s6[16](src_0_s6[16]);
	pe_array0->src_0_s6[17](src_0_s6[17]);
	pe_array0->src_0_s6[18](src_0_s6[18]);
	pe_array0->src_0_s6[19](src_0_s6[19]);
	pe_array0->src_0_s6[20](src_0_s6[20]);
	pe_array0->src_0_s6[21](src_0_s6[21]);
	pe_array0->src_0_s6[22](src_0_s6[22]);
	pe_array0->src_0_s6[23](src_0_s6[23]);
	pe_array0->src_0_s6[24](src_0_s6[24]);
	pe_array0->src_0_s6[25](src_0_s6[25]);
	pe_array0->src_0_s6[26](src_0_s6[26]);
	pe_array0->src_0_s6[27](src_0_s6[27]);
	pe_array0->src_0_s6[28](src_0_s6[28]);
	pe_array0->src_0_s6[29](src_0_s6[29]);
	pe_array0->src_0_s6[30](src_0_s6[30]);
	pe_array0->src_0_s6[31](src_0_s6[31]);
	pe_array0->src_1[0](src_1[0]);
	pe_array0->src_1[1](src_1[1]);
	pe_array0->src_1[2](src_1[2]);
	pe_array0->src_1[3](src_1[3]);
	pe_array0->src_1[4](src_1[4]);
	pe_array0->src_1[5](src_1[5]);
	pe_array0->src_1[6](src_1[6]);
	pe_array0->src_1[7](src_1[7]);
	pe_array0->src_1[8](src_1[8]);
	pe_array0->src_1[9](src_1[9]);
	pe_array0->src_1[10](src_1[10]);
	pe_array0->src_1[11](src_1[11]);
	pe_array0->src_1[12](src_1[12]);
	pe_array0->src_1[13](src_1[13]);
	pe_array0->src_1[14](src_1[14]);
	pe_array0->src_1[15](src_1[15]);
	pe_array0->src_1[16](src_1[16]);
	pe_array0->src_1[17](src_1[17]);
	pe_array0->src_1[18](src_1[18]);
	pe_array0->src_1[19](src_1[19]);
	pe_array0->src_1[20](src_1[20]);
	pe_array0->src_1[21](src_1[21]);
	pe_array0->src_1[22](src_1[22]);
	pe_array0->src_1[23](src_1[23]);
	pe_array0->src_1[24](src_1[24]);
	pe_array0->src_1[25](src_1[25]);
	pe_array0->src_1[26](src_1[26]);
	pe_array0->src_1[27](src_1[27]);
	pe_array0->src_1[28](src_1[28]);
	pe_array0->src_1[29](src_1[29]);
	pe_array0->src_1[30](src_1[30]);
	pe_array0->src_1[31](src_1[31]);
	pe_array0->pe_data[0](pe_data[0]);
	pe_array0->pe_data[1](pe_data[1]);
	pe_array0->pe_data[2](pe_data[2]);
	pe_array0->pe_data[3](pe_data[3]);
	pe_array0->pe_data[4](pe_data[4]);
	pe_array0->pe_data[5](pe_data[5]);
	pe_array0->pe_data[6](pe_data[6]);
	pe_array0->pe_data[7](pe_data[7]);
	pe_array0->pe_data[8](pe_data[8]);
	pe_array0->pe_data[9](pe_data[9]);
	pe_array0->pe_data[10](pe_data[10]);
	pe_array0->pe_data[11](pe_data[11]);
	pe_array0->pe_data[12](pe_data[12]);
	pe_array0->pe_data[13](pe_data[13]);
	pe_array0->pe_data[14](pe_data[14]);
	pe_array0->pe_data[15](pe_data[15]);
	pe_array0->pe_data[16](pe_data[16]);
	pe_array0->pe_data[17](pe_data[17]);
	pe_array0->pe_data[18](pe_data[18]);
	pe_array0->pe_data[19](pe_data[19]);
	pe_array0->pe_data[20](pe_data[20]);
	pe_array0->pe_data[21](pe_data[21]);
	pe_array0->pe_data[22](pe_data[22]);
	pe_array0->pe_data[23](pe_data[23]);
	pe_array0->pe_data[24](pe_data[24]);
	pe_array0->pe_data[25](pe_data[25]);
	pe_array0->pe_data[26](pe_data[26]);
	pe_array0->pe_data[27](pe_data[27]);
	pe_array0->pe_data[28](pe_data[28]);
	pe_array0->pe_data[29](pe_data[29]);
	pe_array0->pe_data[30](pe_data[30]);
	pe_array0->pe_data[31](pe_data[31]);
	pe_array0->pe_data_valid(pe_data_valid);

}

void pe_array_wrapper::InitThreads()
{
}

void pe_array_wrapper::CloseTrace()
{
}

void pe_array_wrapper::DeleteInstances()
{
    if (pe_array0)
    {
        delete pe_array0;
        pe_array0 = 0;
    }
}

void pe_array_wrapper::start_of_simulation()
{
}

void pe_array_wrapper::end_of_simulation()
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

class pe_array_wrapper_fsdb_opener {
public:
	pe_array_wrapper_fsdb_opener() {
	}
};

static pe_array_wrapper_fsdb_opener
  pe_array_wrapper_fsdb_opener_inst;

#endif

#endif
