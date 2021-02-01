//
// Verilog co-simulation wrapper module for the sfu_out_buff module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the sfu_out_buff_cosim.h 
// file.

`timescale 1 ps / 1 ps

module sfu_out_buff_cosim;

	reg clk;
	reg rstn;
	reg enable;
	reg learned_clip_en;
	reg[31:0] in0_data_0;
	reg[31:0] in0_data_1;
	reg[31:0] in0_data_2;
	reg[31:0] in0_data_3;
	reg[31:0] in0_data_4;
	reg[31:0] in0_data_5;
	reg[31:0] in0_data_6;
	reg[31:0] in0_data_7;
	reg in0_data_valid;
	reg[31:0] in1_data_0;
	reg[31:0] in1_data_1;
	reg[31:0] in1_data_2;
	reg[31:0] in1_data_3;
	reg[31:0] in1_data_4;
	reg[31:0] in1_data_5;
	reg[31:0] in1_data_6;
	reg[31:0] in1_data_7;
	reg in1_data_valid;
	wire[319:0] out_data;
	wire out_data_valid;


	`include "hub.v"

	sfu_out_buff sfu_out_buff0( .clk(clk),
	 .rstn(rstn),
	 .enable(enable),
	 .learned_clip_en(learned_clip_en),
	 .in0_data_0(in0_data_0),
	.in0_data_1(in0_data_1),
	.in0_data_2(in0_data_2),
	.in0_data_3(in0_data_3),
	.in0_data_4(in0_data_4),
	.in0_data_5(in0_data_5),
	.in0_data_6(in0_data_6),
	.in0_data_7(in0_data_7),
	 .in0_data_valid(in0_data_valid),
	 .in1_data_0(in1_data_0),
	.in1_data_1(in1_data_1),
	.in1_data_2(in1_data_2),
	.in1_data_3(in1_data_3),
	.in1_data_4(in1_data_4),
	.in1_data_5(in1_data_5),
	.in1_data_6(in1_data_6),
	.in1_data_7(in1_data_7),
	 .in1_data_valid(in1_data_valid),
	 .out_data(out_data),
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
	always @( sfu_out_buff0.clk ) begin
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
	always @( sfu_out_buff0.rstn ) begin
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
	always @( sfu_out_buff0.enable ) begin
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
	reg learned_clip_en_firstEdge;
	reg learned_clip_en_initialized;
	reg learned_clip_en_started;
	real learned_clip_en_startTime;
	real learned_clip_en_firstHalf;
	real learned_clip_en_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    learned_clip_en_firstEdge = 1'b1;
	    learned_clip_en_startTime = 0.000;		// Offset from time 0 to first edge.
	    learned_clip_en_firstHalf = 5.000;	// Delay for first half of cycle.
	    learned_clip_en_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on learned_clip_en_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( learned_clip_en_initialized !== 1'b1 )
	        @( learned_clip_en_initialized );
	
	    if ( learned_clip_en_startTime > 0.0 ) begin
	        learned_clip_en_started = #learned_clip_en_startTime 1;
	    end
	    else begin
	        learned_clip_en_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( sfu_out_buff0.learned_clip_en ) begin
	    if ( learned_clip_en_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( learned_clip_en_started !== 1'b1 )
	        @( learned_clip_en_started );
	
	    learned_clip_en <= learned_clip_en_firstEdge;
	    if ( learned_clip_en_firstHalf > 0.0 ) begin
	        #learned_clip_en_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        learned_clip_en = ~learned_clip_en_firstEdge;
	    end
	    else begin
	        learned_clip_en = ~learned_clip_en_firstEdge;
	    end
	    if ( learned_clip_en_secondHalf > 0.0 ) begin
	        #learned_clip_en_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg in0_data_valid_firstEdge;
	reg in0_data_valid_initialized;
	reg in0_data_valid_started;
	real in0_data_valid_startTime;
	real in0_data_valid_firstHalf;
	real in0_data_valid_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    in0_data_valid_firstEdge = 1'b1;
	    in0_data_valid_startTime = 0.000;		// Offset from time 0 to first edge.
	    in0_data_valid_firstHalf = 5.000;	// Delay for first half of cycle.
	    in0_data_valid_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on in0_data_valid_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( in0_data_valid_initialized !== 1'b1 )
	        @( in0_data_valid_initialized );
	
	    if ( in0_data_valid_startTime > 0.0 ) begin
	        in0_data_valid_started = #in0_data_valid_startTime 1;
	    end
	    else begin
	        in0_data_valid_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( sfu_out_buff0.in0_data_valid ) begin
	    if ( in0_data_valid_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( in0_data_valid_started !== 1'b1 )
	        @( in0_data_valid_started );
	
	    in0_data_valid <= in0_data_valid_firstEdge;
	    if ( in0_data_valid_firstHalf > 0.0 ) begin
	        #in0_data_valid_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        in0_data_valid = ~in0_data_valid_firstEdge;
	    end
	    else begin
	        in0_data_valid = ~in0_data_valid_firstEdge;
	    end
	    if ( in0_data_valid_secondHalf > 0.0 ) begin
	        #in0_data_valid_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end
	// Variables that can be set externally
	reg in1_data_valid_firstEdge;
	reg in1_data_valid_initialized;
	reg in1_data_valid_started;
	real in1_data_valid_startTime;
	real in1_data_valid_firstHalf;
	real in1_data_valid_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    in1_data_valid_firstEdge = 1'b1;
	    in1_data_valid_startTime = 0.000;		// Offset from time 0 to first edge.
	    in1_data_valid_firstHalf = 5.000;	// Delay for first half of cycle.
	    in1_data_valid_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on in1_data_valid_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( in1_data_valid_initialized !== 1'b1 )
	        @( in1_data_valid_initialized );
	
	    if ( in1_data_valid_startTime > 0.0 ) begin
	        in1_data_valid_started = #in1_data_valid_startTime 1;
	    end
	    else begin
	        in1_data_valid_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( sfu_out_buff0.in1_data_valid ) begin
	    if ( in1_data_valid_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( in1_data_valid_started !== 1'b1 )
	        @( in1_data_valid_started );
	
	    in1_data_valid <= in1_data_valid_firstEdge;
	    if ( in1_data_valid_firstHalf > 0.0 ) begin
	        #in1_data_valid_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        in1_data_valid = ~in1_data_valid_firstEdge;
	    end
	    else begin
	        in1_data_valid = ~in1_data_valid_firstEdge;
	    end
	    if ( in1_data_valid_secondHalf > 0.0 ) begin
	        #in1_data_valid_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
