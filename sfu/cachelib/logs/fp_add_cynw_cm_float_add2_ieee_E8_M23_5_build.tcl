load_library {/usr/cadence/installs/Stratus/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing/slow_vdd1v2_basicCells.lib} -cg_compatible --dont_use ^$  -library_units
current_wireload_model --none
read_verilog /home/hanji/stratus/mv1/train_npu/sfu/bdw_work/modules/fp_add/DPA/bdw_work/libs/DPA/src/fp_add_cynw_cm_float_add2_ieee_E8_M23_5_pipe.v /home/hanji/stratus/mv1/train_npu/sfu/bdw_work/modules/fp_add/DPA/v_gates/fp_add_cynw_cm_float_add2_ieee_E8_M23_3.v --define "BDW_BUILD_MODULE=fp_add_cynw_cm_float_add2_ieee_E8_M23_5 OutExpWidth=8 OutMantWidth=23 InExpWidth=8 InMantWidth=23 RoundMode=5 NanMode=1 OutExWidth=0 HasRoundModeInput=1 IPVersion=2 interconnect_mode=wireload number_of_routing_layers=-1 scale_of_cap_per_unit_len=1.000000 scale_of_res_per_unit_len=1.000000 starc=S2.2.2.2,S2.2.3.1,S2.3.1.1 latency=2 {timing_gen=ultra_timing -num_intervals 2 -num_input_delays 1} arch=0 dpopt_ver=2019.1.01.8041scr217.11-s014_1scrE useDsp=0 verilog_dialect=systemverilog lef_library= cap_table_file= qrc_tech_file= flopEdges="
change_names
set_cycle_time [all_clocks] 2.59198
set_input_delay [all_inputs]  0.70487500000000003
set_max_delay [all_outputs] 2.59198
set_output_delay [all_outputs] 1.9343750000000006
synthesize -effort none
pipeline
optimize
report_timing
report_area

