	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( float_div0 != NULL ) {
			esc_trace_signal( &float_div0->clk, ( std::string(name()) + std::string( ".float_div.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float_div0->rstn, ( std::string(name()) + std::string( ".float_div.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float_div0->enable, ( std::string(name()) + std::string( ".float_div.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float_div0->a, ( std::string(name()) + std::string( ".float_div.a" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float_div0->b, ( std::string(name()) + std::string( ".float_div.b" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float_div0->r, ( std::string(name()) + std::string( ".float_div.r" ) ).c_str(), esc_trace_vcd );
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( float_div0 != NULL ) {
			esc_trace_signal( &float_div0->clk, ( std::string(name()) + std::string( ".float_div.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float_div0->rstn, ( std::string(name()) + std::string( ".float_div.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float_div0->enable, ( std::string(name()) + std::string( ".float_div.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float_div0->a, ( std::string(name()) + std::string( ".float_div.a" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float_div0->b, ( std::string(name()) + std::string( ".float_div.b" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float_div0->r, ( std::string(name()) + std::string( ".float_div.r" ) ).c_str(), esc_trace_fsdb );
		}
	}
