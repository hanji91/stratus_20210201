	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( learn_clip0 != NULL ) {
			esc_trace_signal( &learn_clip0->clk, ( std::string(name()) + std::string( ".learn_clip.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->rstn, ( std::string(name()) + std::string( ".learn_clip.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->enable, ( std::string(name()) + std::string( ".learn_clip.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->src_valid, ( std::string(name()) + std::string( ".learn_clip.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->src, ( std::string(name()) + std::string( ".learn_clip.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->scale, ( std::string(name()) + std::string( ".learn_clip.scale" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->zero_point, ( std::string(name()) + std::string( ".learn_clip.zero_point" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->dst_valid, ( std::string(name()) + std::string( ".learn_clip.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->dst, ( std::string(name()) + std::string( ".learn_clip.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &learn_clip0->r1_zero_point, ( std::string(name()) + std::string( ".learn_clip.r1_zero_point" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->r_src, ( std::string(name()) + std::string( ".learn_clip.r_src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->r_src_valid, ( std::string(name()) + std::string( ".learn_clip.r_src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->mul_result, ( std::string(name()) + std::string( ".learn_clip.mul_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->add_result, ( std::string(name()) + std::string( ".learn_clip.add_result" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->mul_valid, ( std::string(name()) + std::string( ".learn_clip.mul_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &learn_clip0->add_valid, ( std::string(name()) + std::string( ".learn_clip.add_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( learn_clip0 != NULL ) {
			esc_trace_signal( &learn_clip0->clk, ( std::string(name()) + std::string( ".learn_clip.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->rstn, ( std::string(name()) + std::string( ".learn_clip.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->enable, ( std::string(name()) + std::string( ".learn_clip.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->src_valid, ( std::string(name()) + std::string( ".learn_clip.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->src, ( std::string(name()) + std::string( ".learn_clip.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->scale, ( std::string(name()) + std::string( ".learn_clip.scale" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->zero_point, ( std::string(name()) + std::string( ".learn_clip.zero_point" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->dst_valid, ( std::string(name()) + std::string( ".learn_clip.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->dst, ( std::string(name()) + std::string( ".learn_clip.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &learn_clip0->r1_zero_point, ( std::string(name()) + std::string( ".learn_clip.r1_zero_point" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->r_src, ( std::string(name()) + std::string( ".learn_clip.r_src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->r_src_valid, ( std::string(name()) + std::string( ".learn_clip.r_src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->mul_result, ( std::string(name()) + std::string( ".learn_clip.mul_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->add_result, ( std::string(name()) + std::string( ".learn_clip.add_result" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->mul_valid, ( std::string(name()) + std::string( ".learn_clip.mul_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &learn_clip0->add_valid, ( std::string(name()) + std::string( ".learn_clip.add_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
