	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( bn_float320 != NULL ) {
			esc_trace_signal( &bn_float320->clk, ( std::string(name()) + std::string( ".bn_float32.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->rstn, ( std::string(name()) + std::string( ".bn_float32.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->enable, ( std::string(name()) + std::string( ".bn_float32.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->src_valid, ( std::string(name()) + std::string( ".bn_float32.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->src, ( std::string(name()) + std::string( ".bn_float32.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->mul_coeff, ( std::string(name()) + std::string( ".bn_float32.mul_coeff" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->add_coeff, ( std::string(name()) + std::string( ".bn_float32.add_coeff" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->dst_valid, ( std::string(name()) + std::string( ".bn_float32.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->dst, ( std::string(name()) + std::string( ".bn_float32.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bn_float320->r1_add_coeff, ( std::string(name()) + std::string( ".bn_float32.r1_add_coeff" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->r_src, ( std::string(name()) + std::string( ".bn_float32.r_src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->r_src_valid, ( std::string(name()) + std::string( ".bn_float32.r_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->mul_result, ( std::string(name()) + std::string( ".bn_float32.mul_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->add_result, ( std::string(name()) + std::string( ".bn_float32.add_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->mul_valid, ( std::string(name()) + std::string( ".bn_float32.mul_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &bn_float320->add_valid, ( std::string(name()) + std::string( ".bn_float32.add_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( bn_float320 != NULL ) {
			esc_trace_signal( &bn_float320->clk, ( std::string(name()) + std::string( ".bn_float32.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->rstn, ( std::string(name()) + std::string( ".bn_float32.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->enable, ( std::string(name()) + std::string( ".bn_float32.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->src_valid, ( std::string(name()) + std::string( ".bn_float32.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->src, ( std::string(name()) + std::string( ".bn_float32.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->mul_coeff, ( std::string(name()) + std::string( ".bn_float32.mul_coeff" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->add_coeff, ( std::string(name()) + std::string( ".bn_float32.add_coeff" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->dst_valid, ( std::string(name()) + std::string( ".bn_float32.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->dst, ( std::string(name()) + std::string( ".bn_float32.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &bn_float320->r1_add_coeff, ( std::string(name()) + std::string( ".bn_float32.r1_add_coeff" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->r_src, ( std::string(name()) + std::string( ".bn_float32.r_src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->r_src_valid, ( std::string(name()) + std::string( ".bn_float32.r_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->mul_result, ( std::string(name()) + std::string( ".bn_float32.mul_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->add_result, ( std::string(name()) + std::string( ".bn_float32.add_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->mul_valid, ( std::string(name()) + std::string( ".bn_float32.mul_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &bn_float320->add_valid, ( std::string(name()) + std::string( ".bn_float32.add_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
