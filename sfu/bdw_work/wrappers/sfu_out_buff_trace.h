	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( sfu_out_buff0 != NULL ) {
			esc_trace_signal( &sfu_out_buff0->clk, ( std::string(name()) + std::string( ".sfu_out_buff.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->rstn, ( std::string(name()) + std::string( ".sfu_out_buff.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->enable, ( std::string(name()) + std::string( ".sfu_out_buff.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->learned_clip_en, ( std::string(name()) + std::string( ".sfu_out_buff.learned_clip_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->in0_data, ( std::string(name()) + std::string( ".sfu_out_buff.in0_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->in0_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.in0_data_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->in1_data, ( std::string(name()) + std::string( ".sfu_out_buff.in1_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->in1_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.in1_data_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->out_data, ( std::string(name()) + std::string( ".sfu_out_buff.out_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->out_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.out_data_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &sfu_out_buff0->data_cnt, ( std::string(name()) + std::string( ".sfu_out_buff.data_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->r_data, ( std::string(name()) + std::string( ".sfu_out_buff.r_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->t_data, ( std::string(name()) + std::string( ".sfu_out_buff.t_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &sfu_out_buff0->r_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.r_data_valid" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( sfu_out_buff0 != NULL ) {
			esc_trace_signal( &sfu_out_buff0->clk, ( std::string(name()) + std::string( ".sfu_out_buff.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->rstn, ( std::string(name()) + std::string( ".sfu_out_buff.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->enable, ( std::string(name()) + std::string( ".sfu_out_buff.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->learned_clip_en, ( std::string(name()) + std::string( ".sfu_out_buff.learned_clip_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->in0_data, ( std::string(name()) + std::string( ".sfu_out_buff.in0_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->in0_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.in0_data_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->in1_data, ( std::string(name()) + std::string( ".sfu_out_buff.in1_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->in1_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.in1_data_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->out_data, ( std::string(name()) + std::string( ".sfu_out_buff.out_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->out_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.out_data_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &sfu_out_buff0->data_cnt, ( std::string(name()) + std::string( ".sfu_out_buff.data_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->r_data, ( std::string(name()) + std::string( ".sfu_out_buff.r_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->t_data, ( std::string(name()) + std::string( ".sfu_out_buff.t_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &sfu_out_buff0->r_data_valid, ( std::string(name()) + std::string( ".sfu_out_buff.r_data_valid" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
