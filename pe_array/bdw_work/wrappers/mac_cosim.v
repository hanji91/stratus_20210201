//
// Verilog co-simulation wrapper module for the mac module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the mac_cosim.h 
// file.

`timescale 1 ps / 1 ps

module mac_cosim;

	reg clk;
	reg rstn;
	reg init;
	reg clear;
	reg src_vld;
	reg[9:0] src_0;
	reg[7:0] src_1;
	wire[31:0] acc;
	wire[7:0] src_1_1d;


	`include "hub.v"

	mac mac0( .clk(clk),
	 .rstn(rstn),
	 .init(init),
	 .clear(clear),
	 .src_vld(src_vld),
	 .src_0(src_0),
	 .src_1(src_1),
	 .acc(acc),
	 .src_1_1d(src_1_1d) );


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
	always @( mac0.clk ) begin
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
	always @( mac0.rstn ) begin
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
	always @( mac0.init ) begin
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
	reg clear_firstEdge;
	reg clear_initialized;
	reg clear_started;
	real clear_startTime;
	real clear_firstHalf;
	real clear_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    clear_firstEdge = 1'b1;
	    clear_startTime = 0.000;		// Offset from time 0 to first edge.
	    clear_firstHalf = 5.000;	// Delay for first half of cycle.
	    clear_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on clear_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( clear_initialized !== 1'b1 )
	        @( clear_initialized );
	
	    if ( clear_startTime > 0.0 ) begin
	        clear_started = #clear_startTime 1;
	    end
	    else begin
	        clear_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( mac0.clear ) begin
	    if ( clear_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( clear_started !== 1'b1 )
	        @( clear_started );
	
	    clear <= clear_firstEdge;
	    if ( clear_firstHalf > 0.0 ) begin
	        #clear_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        clear = ~clear_firstEdge;
	    end
	    else begin
	        clear = ~clear_firstEdge;
	    end
	    if ( clear_secondHalf > 0.0 ) begin
	        #clear_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg src_vld_firstEdge;
	reg src_vld_initialized;
	reg src_vld_started;
	real src_vld_startTime;
	real src_vld_firstHalf;
	real src_vld_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    src_vld_firstEdge = 1'b1;
	    src_vld_startTime = 0.000;		// Offset from time 0 to first edge.
	    src_vld_firstHalf = 5.000;	// Delay for first half of cycle.
	    src_vld_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on src_vld_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( src_vld_initialized !== 1'b1 )
	        @( src_vld_initialized );
	
	    if ( src_vld_startTime > 0.0 ) begin
	        src_vld_started = #src_vld_startTime 1;
	    end
	    else begin
	        src_vld_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( mac0.src_vld ) begin
	    if ( src_vld_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( src_vld_started !== 1'b1 )
	        @( src_vld_started );
	
	    src_vld <= src_vld_firstEdge;
	    if ( src_vld_firstHalf > 0.0 ) begin
	        #src_vld_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        src_vld = ~src_vld_firstEdge;
	    end
	    else begin
	        src_vld = ~src_vld_firstEdge;
	    end
	    if ( src_vld_secondHalf > 0.0 ) begin
	        #src_vld_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
