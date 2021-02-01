//
// Verilog co-simulation wrapper module for the bn_float32 module.

// This module contains the followng items:
//	- An instance of the verilog RTL module created by cynthVLG.
//	- Wires and reg's connected to the ports of the RTL module.
//	- A clock generator using the project's clock frequency and connected to
//    the RTL module's clock port.
//
// The wires and reg's will be connected to sc_signals in the SystemC simulaton
// by esc_link_signals calls in the proxy module found in the bn_float32_cosim.h 
// file.

`timescale 1 ps / 1 ps

module bn_float32_cosim;

	reg clk;
	reg rstn;
	reg enable;
	reg src_valid;
	reg[22:0] src_man_0;
	reg[7:0] src_exp_0;
	reg src_sign_0;
	reg[22:0] src_man_1;
	reg[7:0] src_exp_1;
	reg src_sign_1;
	reg[22:0] src_man_2;
	reg[7:0] src_exp_2;
	reg src_sign_2;
	reg[22:0] src_man_3;
	reg[7:0] src_exp_3;
	reg src_sign_3;
	reg[22:0] src_man_4;
	reg[7:0] src_exp_4;
	reg src_sign_4;
	reg[22:0] src_man_5;
	reg[7:0] src_exp_5;
	reg src_sign_5;
	reg[22:0] src_man_6;
	reg[7:0] src_exp_6;
	reg src_sign_6;
	reg[22:0] src_man_7;
	reg[7:0] src_exp_7;
	reg src_sign_7;
	reg[22:0] mul_coeff_man_0;
	reg[7:0] mul_coeff_exp_0;
	reg mul_coeff_sign_0;
	reg[22:0] mul_coeff_man_1;
	reg[7:0] mul_coeff_exp_1;
	reg mul_coeff_sign_1;
	reg[22:0] mul_coeff_man_2;
	reg[7:0] mul_coeff_exp_2;
	reg mul_coeff_sign_2;
	reg[22:0] mul_coeff_man_3;
	reg[7:0] mul_coeff_exp_3;
	reg mul_coeff_sign_3;
	reg[22:0] mul_coeff_man_4;
	reg[7:0] mul_coeff_exp_4;
	reg mul_coeff_sign_4;
	reg[22:0] mul_coeff_man_5;
	reg[7:0] mul_coeff_exp_5;
	reg mul_coeff_sign_5;
	reg[22:0] mul_coeff_man_6;
	reg[7:0] mul_coeff_exp_6;
	reg mul_coeff_sign_6;
	reg[22:0] mul_coeff_man_7;
	reg[7:0] mul_coeff_exp_7;
	reg mul_coeff_sign_7;
	reg[22:0] add_coeff_man_0;
	reg[7:0] add_coeff_exp_0;
	reg add_coeff_sign_0;
	reg[22:0] add_coeff_man_1;
	reg[7:0] add_coeff_exp_1;
	reg add_coeff_sign_1;
	reg[22:0] add_coeff_man_2;
	reg[7:0] add_coeff_exp_2;
	reg add_coeff_sign_2;
	reg[22:0] add_coeff_man_3;
	reg[7:0] add_coeff_exp_3;
	reg add_coeff_sign_3;
	reg[22:0] add_coeff_man_4;
	reg[7:0] add_coeff_exp_4;
	reg add_coeff_sign_4;
	reg[22:0] add_coeff_man_5;
	reg[7:0] add_coeff_exp_5;
	reg add_coeff_sign_5;
	reg[22:0] add_coeff_man_6;
	reg[7:0] add_coeff_exp_6;
	reg add_coeff_sign_6;
	reg[22:0] add_coeff_man_7;
	reg[7:0] add_coeff_exp_7;
	reg add_coeff_sign_7;
	wire dst_valid;
	wire[22:0] dst_man_0;
	wire[7:0] dst_exp_0;
	wire dst_sign_0;
	wire[22:0] dst_man_1;
	wire[7:0] dst_exp_1;
	wire dst_sign_1;
	wire[22:0] dst_man_2;
	wire[7:0] dst_exp_2;
	wire dst_sign_2;
	wire[22:0] dst_man_3;
	wire[7:0] dst_exp_3;
	wire dst_sign_3;
	wire[22:0] dst_man_4;
	wire[7:0] dst_exp_4;
	wire dst_sign_4;
	wire[22:0] dst_man_5;
	wire[7:0] dst_exp_5;
	wire dst_sign_5;
	wire[22:0] dst_man_6;
	wire[7:0] dst_exp_6;
	wire dst_sign_6;
	wire[22:0] dst_man_7;
	wire[7:0] dst_exp_7;
	wire dst_sign_7;


	`include "hub.v"

	bn_float32 bn_float320( .clk(clk),
	 .rstn(rstn),
	 .enable(enable),
	 .src_valid(src_valid),
	 .src_man_0(src_man_0),
	 .src_exp_0(src_exp_0),
	 .src_sign_0(src_sign_0),
	.src_man_1(src_man_1),
	 .src_exp_1(src_exp_1),
	 .src_sign_1(src_sign_1),
	.src_man_2(src_man_2),
	 .src_exp_2(src_exp_2),
	 .src_sign_2(src_sign_2),
	.src_man_3(src_man_3),
	 .src_exp_3(src_exp_3),
	 .src_sign_3(src_sign_3),
	.src_man_4(src_man_4),
	 .src_exp_4(src_exp_4),
	 .src_sign_4(src_sign_4),
	.src_man_5(src_man_5),
	 .src_exp_5(src_exp_5),
	 .src_sign_5(src_sign_5),
	.src_man_6(src_man_6),
	 .src_exp_6(src_exp_6),
	 .src_sign_6(src_sign_6),
	.src_man_7(src_man_7),
	 .src_exp_7(src_exp_7),
	 .src_sign_7(src_sign_7),
	 .mul_coeff_man_0(mul_coeff_man_0),
	 .mul_coeff_exp_0(mul_coeff_exp_0),
	 .mul_coeff_sign_0(mul_coeff_sign_0),
	.mul_coeff_man_1(mul_coeff_man_1),
	 .mul_coeff_exp_1(mul_coeff_exp_1),
	 .mul_coeff_sign_1(mul_coeff_sign_1),
	.mul_coeff_man_2(mul_coeff_man_2),
	 .mul_coeff_exp_2(mul_coeff_exp_2),
	 .mul_coeff_sign_2(mul_coeff_sign_2),
	.mul_coeff_man_3(mul_coeff_man_3),
	 .mul_coeff_exp_3(mul_coeff_exp_3),
	 .mul_coeff_sign_3(mul_coeff_sign_3),
	.mul_coeff_man_4(mul_coeff_man_4),
	 .mul_coeff_exp_4(mul_coeff_exp_4),
	 .mul_coeff_sign_4(mul_coeff_sign_4),
	.mul_coeff_man_5(mul_coeff_man_5),
	 .mul_coeff_exp_5(mul_coeff_exp_5),
	 .mul_coeff_sign_5(mul_coeff_sign_5),
	.mul_coeff_man_6(mul_coeff_man_6),
	 .mul_coeff_exp_6(mul_coeff_exp_6),
	 .mul_coeff_sign_6(mul_coeff_sign_6),
	.mul_coeff_man_7(mul_coeff_man_7),
	 .mul_coeff_exp_7(mul_coeff_exp_7),
	 .mul_coeff_sign_7(mul_coeff_sign_7),
	 .add_coeff_man_0(add_coeff_man_0),
	 .add_coeff_exp_0(add_coeff_exp_0),
	 .add_coeff_sign_0(add_coeff_sign_0),
	.add_coeff_man_1(add_coeff_man_1),
	 .add_coeff_exp_1(add_coeff_exp_1),
	 .add_coeff_sign_1(add_coeff_sign_1),
	.add_coeff_man_2(add_coeff_man_2),
	 .add_coeff_exp_2(add_coeff_exp_2),
	 .add_coeff_sign_2(add_coeff_sign_2),
	.add_coeff_man_3(add_coeff_man_3),
	 .add_coeff_exp_3(add_coeff_exp_3),
	 .add_coeff_sign_3(add_coeff_sign_3),
	.add_coeff_man_4(add_coeff_man_4),
	 .add_coeff_exp_4(add_coeff_exp_4),
	 .add_coeff_sign_4(add_coeff_sign_4),
	.add_coeff_man_5(add_coeff_man_5),
	 .add_coeff_exp_5(add_coeff_exp_5),
	 .add_coeff_sign_5(add_coeff_sign_5),
	.add_coeff_man_6(add_coeff_man_6),
	 .add_coeff_exp_6(add_coeff_exp_6),
	 .add_coeff_sign_6(add_coeff_sign_6),
	.add_coeff_man_7(add_coeff_man_7),
	 .add_coeff_exp_7(add_coeff_exp_7),
	 .add_coeff_sign_7(add_coeff_sign_7),
	 .dst_valid(dst_valid),
	 .dst_man_0(dst_man_0),
	 .dst_exp_0(dst_exp_0),
	 .dst_sign_0(dst_sign_0),
	.dst_man_1(dst_man_1),
	 .dst_exp_1(dst_exp_1),
	 .dst_sign_1(dst_sign_1),
	.dst_man_2(dst_man_2),
	 .dst_exp_2(dst_exp_2),
	 .dst_sign_2(dst_sign_2),
	.dst_man_3(dst_man_3),
	 .dst_exp_3(dst_exp_3),
	 .dst_sign_3(dst_sign_3),
	.dst_man_4(dst_man_4),
	 .dst_exp_4(dst_exp_4),
	 .dst_sign_4(dst_sign_4),
	.dst_man_5(dst_man_5),
	 .dst_exp_5(dst_exp_5),
	 .dst_sign_5(dst_sign_5),
	.dst_man_6(dst_man_6),
	 .dst_exp_6(dst_exp_6),
	 .dst_sign_6(dst_sign_6),
	.dst_man_7(dst_man_7),
	 .dst_exp_7(dst_exp_7),
	 .dst_sign_7(dst_sign_7) );


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
	always @( bn_float320.clk ) begin
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
	always @( bn_float320.rstn ) begin
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
	always @( bn_float320.enable ) begin
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
	reg src_valid_firstEdge;
	reg src_valid_initialized;
	reg src_valid_started;
	real src_valid_startTime;
	real src_valid_firstHalf;
	real src_valid_secondHalf;
	
	initial begin
	
	    // Only send values from SystemC to the simulator at clock edges.
	    hubSetOption("cycleOnly=1");
	
	    // Default values for config variables.  Values come from static clock.
	    src_valid_firstEdge = 1'b1;
	    src_valid_startTime = 0.000;		// Offset from time 0 to first edge.
	    src_valid_firstHalf = 5.000;	// Delay for first half of cycle.
	    src_valid_secondHalf = 5.000;	// Second half of cycle less offset value.
	
	    // Make sure that we detect the transition on src_valid_initalized.
	    hubScheduleDelayedAssignments;
	
	    while ( src_valid_initialized !== 1'b1 )
	        @( src_valid_initialized );
	
	    if ( src_valid_startTime > 0.0 ) begin
	        src_valid_started = #src_valid_startTime 1;
	    end
	    else begin
	        src_valid_started = 1;
	    end
	end
	
	// Make sure that we process delayed assignments after the clock edge.
	always @( bn_float320.src_valid ) begin
	    if ( src_valid_started === 1'b1 ) begin
	        if ($time == top.cur_time) top.n_cur_time=top.n_cur_time-1;
	        else top.n_cur_time=0;
	        if (top.n_cur_time==0) begin
	            hubScheduleDelayedAssignments;
	        end
	    end
	end
	
	always begin
	    // Make sure our delays are non-zero before starting simulation.
	    while ( src_valid_started !== 1'b1 )
	        @( src_valid_started );
	
	    src_valid <= src_valid_firstEdge;
	    if ( src_valid_firstHalf > 0.0 ) begin
	        #src_valid_firstHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	        src_valid = ~src_valid_firstEdge;
	    end
	    else begin
	        src_valid = ~src_valid_firstEdge;
	    end
	    if ( src_valid_secondHalf > 0.0 ) begin
	        #src_valid_secondHalf;
	        if ($time==top.cur_time) begin
	            top.n_cur_time=top.n_cur_time+1;
	        end else begin
	            top.n_cur_time=1; top.cur_time=$time;
	        end
	    end
	end


endmodule
