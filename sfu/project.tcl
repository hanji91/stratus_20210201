###############################################################################
#
# Copyright (c) 2019 Cadence Design Systems, Inc. All rights reserved worldwide.
#
# The code contained herein is the proprietary and confidential information
# of Cadence or its licensors, and is supplied subject to a previously
# executed license and maintenance agreement between Cadence and customer.
# This code is intended for use with Cadence high-level synthesis tools and
# may not be used with other high-level synthesis tools. Permission is only
# granted to distribute the code as indicated. Cadence grants permission for
# customer to distribute a copy of this code to any partner to aid in designing
# or verifying the customer's intellectual property, as long as such
# distribution includes a restriction of no additional distributions from the
# partner, unless the partner receives permission directly from Cadence.
#
# ALL CODE FURNISHED BY CADENCE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
# KIND, AND CADENCE SPECIFICALLY DISCLAIMS ANY WARRANTY OF NONINFRINGEMENT,
# FITNESS FOR A PARTICULAR PURPOSE OR MERCHANTABILITY. CADENCE SHALL NOT BE
#set CLOCK_PERIOD "2.3" # fix2float 
# LIABLE FOR ANY COSTS OF PROCUREMENT OF SUBSTITUTES, LOSS OF PROFITS,
# INTERRUPTION OF BUSINESS, OR FOR ANY OTHER SPECIAL, CONSEQUENTIAL OR
# INCIDENTAL DAMAGES, HOWEVER CAUSED, WHETHER FOR BREACH OF WARRANTY,
# CONTRACT, TORT, NEGLIGENCE, STRICT LIABILITY OR OTHERWISE.
#
################################################################################

############################################################
# Project Parameters
############################################################
#
# Technology Libraries
#
set LIB_PATH "[get_install_path]/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing"
set LIB_LEAF "slow_vdd1v2_basicCells.lib"

use_tech_lib	"$LIB_PATH/$LIB_LEAF"

use_hls_lib     "cynw_cm_float"

#set CLOCK_PERIOD "0.97" # in_buff, linear_dequant, bn_float32, relu_offset_float, m_float2fix, sfu_out_buff
#set CLOCK_PERIOD "1.2" # fp_cmp 
#set CLOCK_PERIOD "1.4" # avg_pool (org = 3.2)
#set CLOCK_PERIOD "1.7" # bias_add 
#set CLOCK_PERIOD "1.8" # float2fix, finish_gen
#set CLOCK_PERIOD "2.3" # fix2float 
#set CLOCK_PERIOD "2.6" # fp_div, fp_mul 
#set CLOCK_PERIOD "2.8" # fp_add
set CLOCK_PERIOD "1.4"

#
# Global synthesis attributes.
#
set_attr clock_period           $CLOCK_PERIOD 
#set_attr cycle_slack            0.4 
#set_attr cycle_slack            0.10 
#set_attr default_input_delay    0.1 
set_attr default_input_delay    0.1 
set_attr message_detail         3 
set_attr path_delay_limit	100
set_attr rtl_annotation		op,stack
set_attr flatten_arrays 	none

#
# Simulation Options
#
use_verilog_simulator incisive
set_attr cc_options             " -DCLOCK_PERIOD=2.0 -g"
enable_waveform_logging -vcd
set_attr end_of_sim_command "make saySimPassed"

#
# Testbench or System Level Modules
#
#define_system_module main.cc
#define_system_module system.cc
#define_system_module tb.cc

#
# SC_MODULEs to be synthesized
#
#define_hls_module pe_array pe_array.cpp 

define_hls_module avg_pool avg_pool.cpp 

define_hls_module in_buff in_buff.cpp 

define_hls_module fix2float fix2float.cpp 

define_hls_module fp_div fp_div.cpp 

define_hls_module linear_dequant linear_dequant.cpp 

define_hls_module fp_mul fp_mul.cpp 

define_hls_module fp_add fp_add.cpp 

define_hls_module bn_float32 bn_float32.cpp 

define_hls_module fp_cmp fp_cmp.cpp 

define_hls_module relu_offset_float relu_offset_float.cpp 

define_hls_module learn_clip learn_clip.cpp 

define_hls_module float2fix float2fix.cpp 

define_hls_module m_float2fix m_float2fix.cpp 

define_hls_module bias_add bias_add.cpp 

define_hls_module sfu_out_buff sfu_out_buff.cpp 

define_hls_module finish_gen finish_gen.cpp 

#define_hls_config pe_array BASIC     
#define_hls_config pe_array DPA       --flatten_arrays=none --dpopt_auto=op,expr

define_hls_config avg_pool BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config avg_pool DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config in_buff BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config in_buff DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config fix2float BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config fix2float DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config fp_div BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config fp_div DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config linear_dequant BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config linear_dequant DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config fp_mul BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config fp_mul DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config fp_add BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config fp_add DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config bn_float32 BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config bn_float32 DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config fp_cmp BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config fp_cmp DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config relu_offset_float BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config relu_offset_float DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config learn_clip BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config learn_clip DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config float2fix BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config float2fix DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config m_float2fix BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config m_float2fix DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config bias_add BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config bias_add DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config sfu_out_buff BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config sfu_out_buff DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_hls_config finish_gen BASIC     --clock_period=$CLOCK_PERIOD
define_hls_config finish_gen DPA       --clock_period=$CLOCK_PERIOD --dpopt_auto=op,expr

define_sim_config B 
#define_sim_config B {pe_array} {avg_pool}
#define_sim_config V_BASIC -io_config PIN -argv $sim_args \
#    {DMA1 BEH BASIC } \
#    {DMA2 BEH BASIC } \
#    {IMG_accelerator BEH BASIC} \
#    {unpack BEH BASIC} \
#    {pack BEH BASIC} \
#    {filter RTL_V BASIC} \
#    {zoom_out BEH BASIC} \
#    {error_diffusion_bin BEH BASIC} \
#    {error_diffusion_filt BEH BASIC}
#
######################################################################
# Simulation and Power Configurations
######################################################################
# The following rules are TCL code to create a simulation configuration
# for RTL_V for each hls_config defined.
# For each simulation configuration, create a JOULES power analysis
# configuration as well. NOTE: You must have waveform logging enabled
# for the power configurations to work.
#
#foreach config [find -hls_config *] {
#	set cname [get_attr name $config]
	
#	define_sim_config ${cname}_V "pe_array RTL_V $cname"

#	define_power_config P_${cname} ${cname}_V \
#  		-module pe_array
#}

######################################################################
# Genus Logic Synthesis Configurations
######################################################################
#define_logic_synthesis_config G_PE_ARRAY {pe_array -all} \
#    -options \
#        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_MAC {avg_pool -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_CACHE {in_buff -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_FIX2FLOAT {fix2float -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_FP_DIV {fp_div -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_linear_dequant {linear_dequant -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_fp_mul {fp_mul -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_fp_add {fp_add -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_bn_float32 {bn_float32 -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_fp_cmp {fp_cmp -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_relu_offset_float {relu_offset_float -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_learn_clip {learn_clip -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_float2fix {float2fix -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_m_float2fix {m_float2fix -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_bias_add {bias_add -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_sfu_out_buff {sfu_out_buff -all} \
    -options \
        {BDW_LS_NOGATES 1}
define_logic_synthesis_config G_finish_gen {finish_gen -all} \
    -options \
        {BDW_LS_NOGATES 1}
