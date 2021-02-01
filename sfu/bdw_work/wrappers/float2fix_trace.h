	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( float2fix0 != NULL ) {
			esc_trace_signal( &float2fix0->clk, ( std::string(name()) + std::string( ".float2fix.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->rstn, ( std::string(name()) + std::string( ".float2fix.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->src_valid, ( std::string(name()) + std::string( ".float2fix.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->src, ( std::string(name()) + std::string( ".float2fix.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->dst_valid, ( std::string(name()) + std::string( ".float2fix.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->dst, ( std::string(name()) + std::string( ".float2fix.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &float2fix0->r_in_data, ( std::string(name()) + std::string( ".float2fix.r_in_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->shift_num, ( std::string(name()) + std::string( ".float2fix.shift_num" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->src_valid_1d, ( std::string(name()) + std::string( ".float2fix.src_valid_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->src_valid_2d, ( std::string(name()) + std::string( ".float2fix.src_valid_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->src_valid_3d, ( std::string(name()) + std::string( ".float2fix.src_valid_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->zero_sig, ( std::string(name()) + std::string( ".float2fix.zero_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->max_sig, ( std::string(name()) + std::string( ".float2fix.max_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->zm_sig, ( std::string(name()) + std::string( ".float2fix.zm_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->r_zero_sig, ( std::string(name()) + std::string( ".float2fix.r_zero_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->r_max_sig, ( std::string(name()) + std::string( ".float2fix.r_max_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->a_m, ( std::string(name()) + std::string( ".float2fix.a_m" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->r_a_m, ( std::string(name()) + std::string( ".float2fix.r_a_m" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->a_e, ( std::string(name()) + std::string( ".float2fix.a_e" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->r_a_e, ( std::string(name()) + std::string( ".float2fix.r_a_e" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->a_s, ( std::string(name()) + std::string( ".float2fix.a_s" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &float2fix0->r_a_s, ( std::string(name()) + std::string( ".float2fix.r_a_s" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( float2fix0 != NULL ) {
			esc_trace_signal( &float2fix0->clk, ( std::string(name()) + std::string( ".float2fix.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->rstn, ( std::string(name()) + std::string( ".float2fix.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->src_valid, ( std::string(name()) + std::string( ".float2fix.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->src, ( std::string(name()) + std::string( ".float2fix.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->dst_valid, ( std::string(name()) + std::string( ".float2fix.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->dst, ( std::string(name()) + std::string( ".float2fix.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &float2fix0->r_in_data, ( std::string(name()) + std::string( ".float2fix.r_in_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->shift_num, ( std::string(name()) + std::string( ".float2fix.shift_num" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->src_valid_1d, ( std::string(name()) + std::string( ".float2fix.src_valid_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->src_valid_2d, ( std::string(name()) + std::string( ".float2fix.src_valid_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->src_valid_3d, ( std::string(name()) + std::string( ".float2fix.src_valid_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->zero_sig, ( std::string(name()) + std::string( ".float2fix.zero_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->max_sig, ( std::string(name()) + std::string( ".float2fix.max_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->zm_sig, ( std::string(name()) + std::string( ".float2fix.zm_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->r_zero_sig, ( std::string(name()) + std::string( ".float2fix.r_zero_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->r_max_sig, ( std::string(name()) + std::string( ".float2fix.r_max_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->a_m, ( std::string(name()) + std::string( ".float2fix.a_m" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->r_a_m, ( std::string(name()) + std::string( ".float2fix.r_a_m" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->a_e, ( std::string(name()) + std::string( ".float2fix.a_e" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->r_a_e, ( std::string(name()) + std::string( ".float2fix.r_a_e" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->a_s, ( std::string(name()) + std::string( ".float2fix.a_s" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &float2fix0->r_a_s, ( std::string(name()) + std::string( ".float2fix.r_a_s" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
