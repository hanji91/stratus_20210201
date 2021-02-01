//
// Verilog co-simulation wrapper module for the pw_weight_addr_gen module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the pw_weight_addr_gen_cosim.h 
// file.

`timescale 1 ps / 1 ps

module pw_weight_addr_gen_cosim;

	reg clk;
	reg rstn;
	reg stop;
	reg[7:0] start;
	reg start_rising;
	reg[7:0] systolic_en;
	reg[7:0] systolic_depth;
	reg[15:0] feature_width;
	reg[15:0] feature_height;
	reg[15:0] feature_channel;
	reg[15:0] out_feature_width;
	reg[15:0] out_feature_height;
	reg[15:0] out_feature_channel;
	reg[15:0] filter_width;
	reg[15:0] filter_height;
	reg[15:0] filter_channel;
	reg[7:0] stride_x;
	reg[7:0] stride_y;
	reg[7:0] pad_top_size;
	reg[7:0] pad_bottom_size;
	reg[7:0] pad_left_size;
	reg[7:0] pad_right_size;
	reg[31:0] read_weight_base_addr;
	wire[31:0] pw_weight_addr;
	wire pw_weight_addr_valid;
	wire pw_weight_data_valid;
	wire cache_en;


	`include "hub.v"

	pw_weight_addr_gen pw_weight_addr_gen0( .clk(clk),
	 .rstn(rstn),
	 .stop(stop),
	 .start(start),
	 .start_rising(start_rising),
	 .systolic_en(systolic_en),
	 .systolic_depth(systolic_depth),
	 .feature_width(feature_width),
	 .feature_height(feature_height),
	 .feature_channel(feature_channel),
	 .out_feature_width(out_feature_width),
	 .out_feature_height(out_feature_height),
	 .out_feature_channel(out_feature_channel),
	 .filter_width(filter_width),
	 .filter_height(filter_height),
	 .filter_channel(filter_channel),
	 .stride_x(stride_x),
	 .stride_y(stride_y),
	 .pad_top_size(pad_top_size),
	 .pad_bottom_size(pad_bottom_size),
	 .pad_left_size(pad_left_size),
	 .pad_right_size(pad_right_size),
	 .read_weight_base_addr(read_weight_base_addr),
	 .pw_weight_addr(pw_weight_addr),
	 .pw_weight_addr_valid(pw_weight_addr_valid),
	 .pw_weight_data_valid(pw_weight_data_valid),
	 .cache_en(cache_en) );


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
	always @( pw_weight_addr_gen0.clk ) begin
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
	always @( pw_weight_addr_gen0.rstn ) begin
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
	reg stop_firstEdge;
	reg stop_initialized;
	reg stop_started;
	real stop_startTime;
	real stop_firstHalf;
	real stop_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    stop_firstEdge = 1'b1;
	    stop_startTime = 0.000;		// Offset from time 0 to first edge.
	    stop_firstHalf = 5.000;	// Delay for first half of cycle.
	    stop_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on stop_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( stop_initialized !== 1'b1 )
	        @( stop_initialized );
	
	    if ( stop_startTime > 0.0 ) begin
	        stop_started = #stop_startTime 1;
	    end
	    else begin
	        stop_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( pw_weight_addr_gen0.stop ) begin
	    if ( stop_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( stop_started !== 1'b1 )
	        @( stop_started );
	
	    stop <= stop_firstEdge;
	    if ( stop_firstHalf > 0.0 ) begin
	        #stop_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        stop = ~stop_firstEdge;
	    end
	    else begin
	        stop = ~stop_firstEdge;
	    end
	    if ( stop_secondHalf > 0.0 ) begin
	        #stop_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
