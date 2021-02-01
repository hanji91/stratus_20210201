//
// Verilog co-simulation wrapper module for the avg_pool module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the avg_pool_cosim.h 
// file.

`timescale 1 ps / 1 ps

module avg_pool_cosim;

	reg clk;
	reg rstn;
	reg enable;
	reg init;
	reg[31:0] in_data_0;
	reg[31:0] in_data_1;
	reg[31:0] in_data_2;
	reg[31:0] in_data_3;
	reg[31:0] in_data_4;
	reg[31:0] in_data_5;
	reg[31:0] in_data_6;
	reg[31:0] in_data_7;
	reg[31:0] in_data_8;
	reg[31:0] in_data_9;
	reg[31:0] in_data_10;
	reg[31:0] in_data_11;
	reg[31:0] in_data_12;
	reg[31:0] in_data_13;
	reg[31:0] in_data_14;
	reg[31:0] in_data_15;
	reg[31:0] in_data_16;
	reg[31:0] in_data_17;
	reg[31:0] in_data_18;
	reg[31:0] in_data_19;
	reg[31:0] in_data_20;
	reg[31:0] in_data_21;
	reg[31:0] in_data_22;
	reg[31:0] in_data_23;
	reg[31:0] in_data_24;
	reg[31:0] in_data_25;
	reg[31:0] in_data_26;
	reg[31:0] in_data_27;
	reg[31:0] in_data_28;
	reg[31:0] in_data_29;
	reg[31:0] in_data_30;
	reg[31:0] in_data_31;
	reg in_data_valid;
	wire[31:0] out_data_0;
	wire[31:0] out_data_1;
	wire[31:0] out_data_2;
	wire[31:0] out_data_3;
	wire[31:0] out_data_4;
	wire[31:0] out_data_5;
	wire[31:0] out_data_6;
	wire[31:0] out_data_7;
	wire[31:0] out_data_8;
	wire[31:0] out_data_9;
	wire[31:0] out_data_10;
	wire[31:0] out_data_11;
	wire[31:0] out_data_12;
	wire[31:0] out_data_13;
	wire[31:0] out_data_14;
	wire[31:0] out_data_15;
	wire[31:0] out_data_16;
	wire[31:0] out_data_17;
	wire[31:0] out_data_18;
	wire[31:0] out_data_19;
	wire[31:0] out_data_20;
	wire[31:0] out_data_21;
	wire[31:0] out_data_22;
	wire[31:0] out_data_23;
	wire[31:0] out_data_24;
	wire[31:0] out_data_25;
	wire[31:0] out_data_26;
	wire[31:0] out_data_27;
	wire[31:0] out_data_28;
	wire[31:0] out_data_29;
	wire[31:0] out_data_30;
	wire[31:0] out_data_31;
	wire out_data_valid;


	`include "hub.v"

	avg_pool avg_pool0( .clk(clk),
	 .rstn(rstn),
	 .enable(enable),
	 .init(init),
	 .in_data_0(in_data_0),
	.in_data_1(in_data_1),
	.in_data_2(in_data_2),
	.in_data_3(in_data_3),
	.in_data_4(in_data_4),
	.in_data_5(in_data_5),
	.in_data_6(in_data_6),
	.in_data_7(in_data_7),
	.in_data_8(in_data_8),
	.in_data_9(in_data_9),
	.in_data_10(in_data_10),
	.in_data_11(in_data_11),
	.in_data_12(in_data_12),
	.in_data_13(in_data_13),
	.in_data_14(in_data_14),
	.in_data_15(in_data_15),
	.in_data_16(in_data_16),
	.in_data_17(in_data_17),
	.in_data_18(in_data_18),
	.in_data_19(in_data_19),
	.in_data_20(in_data_20),
	.in_data_21(in_data_21),
	.in_data_22(in_data_22),
	.in_data_23(in_data_23),
	.in_data_24(in_data_24),
	.in_data_25(in_data_25),
	.in_data_26(in_data_26),
	.in_data_27(in_data_27),
	.in_data_28(in_data_28),
	.in_data_29(in_data_29),
	.in_data_30(in_data_30),
	.in_data_31(in_data_31),
	 .in_data_valid(in_data_valid),
	 .out_data_0(out_data_0),
	.out_data_1(out_data_1),
	.out_data_2(out_data_2),
	.out_data_3(out_data_3),
	.out_data_4(out_data_4),
	.out_data_5(out_data_5),
	.out_data_6(out_data_6),
	.out_data_7(out_data_7),
	.out_data_8(out_data_8),
	.out_data_9(out_data_9),
	.out_data_10(out_data_10),
	.out_data_11(out_data_11),
	.out_data_12(out_data_12),
	.out_data_13(out_data_13),
	.out_data_14(out_data_14),
	.out_data_15(out_data_15),
	.out_data_16(out_data_16),
	.out_data_17(out_data_17),
	.out_data_18(out_data_18),
	.out_data_19(out_data_19),
	.out_data_20(out_data_20),
	.out_data_21(out_data_21),
	.out_data_22(out_data_22),
	.out_data_23(out_data_23),
	.out_data_24(out_data_24),
	.out_data_25(out_data_25),
	.out_data_26(out_data_26),
	.out_data_27(out_data_27),
	.out_data_28(out_data_28),
	.out_data_29(out_data_29),
	.out_data_30(out_data_30),
	.out_data_31(out_data_31),
	 .out_data_valid(out_data_valid) );


	// Variables that can be set externally
	reg clk_firstEdge;
	reg clk_initialized;
	reg clk_started;
	real clk_startTime;
	real clk_firstHalf;
	real clk_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    clk_firstEdge = 1'b1;
	    clk_startTime = 0.000;		// Offset from time 0 to first edge.
	    clk_firstHalf = 5.000;	// Delay for first half of cycle.
	    clk_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on clk_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( clk_initialized !== 1'b1 )
	        @( clk_initialized );
	
	    if ( clk_startTime > 0.0 ) begin
	        clk_started = #clk_startTime 1;
	    end
	    else begin
	        clk_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( avg_pool0.clk ) begin
	    if ( clk_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( clk_started !== 1'b1 )
	        @( clk_started );
	
	    clk <= clk_firstEdge;
	    if ( clk_firstHalf > 0.0 ) begin
	        #clk_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        clk = ~clk_firstEdge;
	    end
	    else begin
	        clk = ~clk_firstEdge;
	    end
	    if ( clk_secondHalf > 0.0 ) begin
	        #clk_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg rstn_firstEdge;
	reg rstn_initialized;
	reg rstn_started;
	real rstn_startTime;
	real rstn_firstHalf;
	real rstn_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    rstn_firstEdge = 1'b1;
	    rstn_startTime = 0.000;		// Offset from time 0 to first edge.
	    rstn_firstHalf = 5.000;	// Delay for first half of cycle.
	    rstn_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on rstn_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( rstn_initialized !== 1'b1 )
	        @( rstn_initialized );
	
	    if ( rstn_startTime > 0.0 ) begin
	        rstn_started = #rstn_startTime 1;
	    end
	    else begin
	        rstn_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( avg_pool0.rstn ) begin
	    if ( rstn_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( rstn_started !== 1'b1 )
	        @( rstn_started );
	
	    rstn <= rstn_firstEdge;
	    if ( rstn_firstHalf > 0.0 ) begin
	        #rstn_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        rstn = ~rstn_firstEdge;
	    end
	    else begin
	        rstn = ~rstn_firstEdge;
	    end
	    if ( rstn_secondHalf > 0.0 ) begin
	        #rstn_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg enable_firstEdge;
	reg enable_initialized;
	reg enable_started;
	real enable_startTime;
	real enable_firstHalf;
	real enable_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    enable_firstEdge = 1'b1;
	    enable_startTime = 0.000;		// Offset from time 0 to first edge.
	    enable_firstHalf = 5.000;	// Delay for first half of cycle.
	    enable_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on enable_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( enable_initialized !== 1'b1 )
	        @( enable_initialized );
	
	    if ( enable_startTime > 0.0 ) begin
	        enable_started = #enable_startTime 1;
	    end
	    else begin
	        enable_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( avg_pool0.enable ) begin
	    if ( enable_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( enable_started !== 1'b1 )
	        @( enable_started );
	
	    enable <= enable_firstEdge;
	    if ( enable_firstHalf > 0.0 ) begin
	        #enable_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        enable = ~enable_firstEdge;
	    end
	    else begin
	        enable = ~enable_firstEdge;
	    end
	    if ( enable_secondHalf > 0.0 ) begin
	        #enable_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg init_firstEdge;
	reg init_initialized;
	reg init_started;
	real init_startTime;
	real init_firstHalf;
	real init_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    init_firstEdge = 1'b1;
	    init_startTime = 0.000;		// Offset from time 0 to first edge.
	    init_firstHalf = 5.000;	// Delay for first half of cycle.
	    init_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on init_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( init_initialized !== 1'b1 )
	        @( init_initialized );
	
	    if ( init_startTime > 0.0 ) begin
	        init_started = #init_startTime 1;
	    end
	    else begin
	        init_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( avg_pool0.init ) begin
	    if ( init_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( init_started !== 1'b1 )
	        @( init_started );
	
	    init <= init_firstEdge;
	    if ( init_firstHalf > 0.0 ) begin
	        #init_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        init = ~init_firstEdge;
	    end
	    else begin
	        init = ~init_firstEdge;
	    end
	    if ( init_secondHalf > 0.0 ) begin
	        #init_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg in_data_valid_firstEdge;
	reg in_data_valid_initialized;
	reg in_data_valid_started;
	real in_data_valid_startTime;
	real in_data_valid_firstHalf;
	real in_data_valid_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    in_data_valid_firstEdge = 1'b1;
	    in_data_valid_startTime = 0.000;		// Offset from time 0 to first edge.
	    in_data_valid_firstHalf = 5.000;	// Delay for first half of cycle.
	    in_data_valid_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on in_data_valid_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( in_data_valid_initialized !== 1'b1 )
	        @( in_data_valid_initialized );
	
	    if ( in_data_valid_startTime > 0.0 ) begin
	        in_data_valid_started = #in_data_valid_startTime 1;
	    end
	    else begin
	        in_data_valid_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( avg_pool0.in_data_valid ) begin
	    if ( in_data_valid_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( in_data_valid_started !== 1'b1 )
	        @( in_data_valid_started );
	
	    in_data_valid <= in_data_valid_firstEdge;
	    if ( in_data_valid_firstHalf > 0.0 ) begin
	        #in_data_valid_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        in_data_valid = ~in_data_valid_firstEdge;
	    end
	    else begin
	        in_data_valid = ~in_data_valid_firstEdge;
	    end
	    if ( in_data_valid_secondHalf > 0.0 ) begin
	        #in_data_valid_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
