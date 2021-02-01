//
// Verilog co-simulation wrapper module for the bias_addr_gen module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the bias_addr_gen_cosim.h 
// file.

`timescale 1 ps / 1 ps

module bias_addr_gen_cosim;

	reg clk;
	reg rstn;
	reg init;
	reg[15:0] out_feature_width;
	reg[15:0] out_feature_height;
	reg[15:0] out_feature_channel;
	reg[31:0] bias_read_base_addr;
	reg bias_en;
	reg start_rising;
	reg data_en;
	wire[31:0] bias_addr;
	wire bias_addr_valid;


	`include "hub.v"

	bias_addr_gen bias_addr_gen0( .clk(clk),
	 .rstn(rstn),
	 .init(init),
	 .out_feature_width(out_feature_width),
	 .out_feature_height(out_feature_height),
	 .out_feature_channel(out_feature_channel),
	 .bias_read_base_addr(bias_read_base_addr),
	 .bias_en(bias_en),
	 .start_rising(start_rising),
	 .data_en(data_en),
	 .bias_addr(bias_addr),
	 .bias_addr_valid(bias_addr_valid) );


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
	always @( bias_addr_gen0.clk ) begin
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
	always @( bias_addr_gen0.rstn ) begin
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
	always @( bias_addr_gen0.init ) begin
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
	reg bias_en_firstEdge;
	reg bias_en_initialized;
	reg bias_en_started;
	real bias_en_startTime;
	real bias_en_firstHalf;
	real bias_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    bias_en_firstEdge = 1'b1;
	    bias_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    bias_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    bias_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on bias_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( bias_en_initialized !== 1'b1 )
	        @( bias_en_initialized );
	
	    if ( bias_en_startTime > 0.0 ) begin
	        bias_en_started = #bias_en_startTime 1;
	    end
	    else begin
	        bias_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( bias_addr_gen0.bias_en ) begin
	    if ( bias_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( bias_en_started !== 1'b1 )
	        @( bias_en_started );
	
	    bias_en <= bias_en_firstEdge;
	    if ( bias_en_firstHalf > 0.0 ) begin
	        #bias_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        bias_en = ~bias_en_firstEdge;
	    end
	    else begin
	        bias_en = ~bias_en_firstEdge;
	    end
	    if ( bias_en_secondHalf > 0.0 ) begin
	        #bias_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg data_en_firstEdge;
	reg data_en_initialized;
	reg data_en_started;
	real data_en_startTime;
	real data_en_firstHalf;
	real data_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    data_en_firstEdge = 1'b1;
	    data_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    data_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    data_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on data_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( data_en_initialized !== 1'b1 )
	        @( data_en_initialized );
	
	    if ( data_en_startTime > 0.0 ) begin
	        data_en_started = #data_en_startTime 1;
	    end
	    else begin
	        data_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( bias_addr_gen0.data_en ) begin
	    if ( data_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( data_en_started !== 1'b1 )
	        @( data_en_started );
	
	    data_en <= data_en_firstEdge;
	    if ( data_en_firstHalf > 0.0 ) begin
	        #data_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        data_en = ~data_en_firstEdge;
	    end
	    else begin
	        data_en = ~data_en_firstEdge;
	    end
	    if ( data_en_secondHalf > 0.0 ) begin
	        #data_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
