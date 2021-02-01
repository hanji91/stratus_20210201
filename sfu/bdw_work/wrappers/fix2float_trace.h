	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( fix2float0 != NULL ) {
			esc_trace_signal( &fix2float0->clk, ( std::string(name()) + std::string( ".fix2float.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->rstn, ( std::string(name()) + std::string( ".fix2float.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->enable, ( std::string(name()) + std::string( ".fix2float.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->fraction_len, ( std::string(name()) + std::string( ".fix2float.fraction_len" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->src_valid, ( std::string(name()) + std::string( ".fix2float.src_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->src, ( std::string(name()) + std::string( ".fix2float.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->dst_valid, ( std::string(name()) + std::string( ".fix2float.dst_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->dst, ( std::string(name()) + std::string( ".fix2float.dst" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &fix2float0->r_in_data, ( std::string(name()) + std::string( ".fix2float.r_in_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r2_in_data, ( std::string(name()) + std::string( ".fix2float.r2_in_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r_sign, ( std::string(name()) + std::string( ".fix2float.r_sign" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r2_sign, ( std::string(name()) + std::string( ".fix2float.r2_sign" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r_fraction_len, ( std::string(name()) + std::string( ".fix2float.r_fraction_len" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->shift_num, ( std::string(name()) + std::string( ".fix2float.shift_num" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r2_shift_num, ( std::string(name()) + std::string( ".fix2float.r2_shift_num" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->src_valid_1d, ( std::string(name()) + std::string( ".fix2float.src_valid_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->src_valid_2d, ( std::string(name()) + std::string( ".fix2float.src_valid_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->src_valid_3d, ( std::string(name()) + std::string( ".fix2float.src_valid_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->zero_sig, ( std::string(name()) + std::string( ".fix2float.zero_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r2_zero_sig, ( std::string(name()) + std::string( ".fix2float.r2_zero_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r3_zero_sig, ( std::string(name()) + std::string( ".fix2float.r3_zero_sig" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->z_m, ( std::string(name()) + std::string( ".fix2float.z_m" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r_z_m, ( std::string(name()) + std::string( ".fix2float.r_z_m" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->z_e, ( std::string(name()) + std::string( ".fix2float.z_e" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r_z_e, ( std::string(name()) + std::string( ".fix2float.r_z_e" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->r_z_s, ( std::string(name()) + std::string( ".fix2float.r_z_s" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->guard, ( std::string(name()) + std::string( ".fix2float.guard" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->round_bit, ( std::string(name()) + std::string( ".fix2float.round_bit" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &fix2float0->sticky, ( std::string(name()) + std::string( ".fix2float.sticky" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( fix2float0 != NULL ) {
			esc_trace_signal( &fix2float0->clk, ( std::string(name()) + std::string( ".fix2float.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->rstn, ( std::string(name()) + std::string( ".fix2float.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->enable, ( std::string(name()) + std::string( ".fix2float.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->fraction_len, ( std::string(name()) + std::string( ".fix2float.fraction_len" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->src_valid, ( std::string(name()) + std::string( ".fix2float.src_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->src, ( std::string(name()) + std::string( ".fix2float.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->dst_valid, ( std::string(name()) + std::string( ".fix2float.dst_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->dst, ( std::string(name()) + std::string( ".fix2float.dst" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &fix2float0->r_in_data, ( std::string(name()) + std::string( ".fix2float.r_in_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r2_in_data, ( std::string(name()) + std::string( ".fix2float.r2_in_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r_sign, ( std::string(name()) + std::string( ".fix2float.r_sign" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r2_sign, ( std::string(name()) + std::string( ".fix2float.r2_sign" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r_fraction_len, ( std::string(name()) + std::string( ".fix2float.r_fraction_len" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->shift_num, ( std::string(name()) + std::string( ".fix2float.shift_num" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r2_shift_num, ( std::string(name()) + std::string( ".fix2float.r2_shift_num" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->src_valid_1d, ( std::string(name()) + std::string( ".fix2float.src_valid_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->src_valid_2d, ( std::string(name()) + std::string( ".fix2float.src_valid_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->src_valid_3d, ( std::string(name()) + std::string( ".fix2float.src_valid_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->zero_sig, ( std::string(name()) + std::string( ".fix2float.zero_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r2_zero_sig, ( std::string(name()) + std::string( ".fix2float.r2_zero_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r3_zero_sig, ( std::string(name()) + std::string( ".fix2float.r3_zero_sig" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->z_m, ( std::string(name()) + std::string( ".fix2float.z_m" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r_z_m, ( std::string(name()) + std::string( ".fix2float.r_z_m" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->z_e, ( std::string(name()) + std::string( ".fix2float.z_e" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r_z_e, ( std::string(name()) + std::string( ".fix2float.r_z_e" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->r_z_s, ( std::string(name()) + std::string( ".fix2float.r_z_s" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->guard, ( std::string(name()) + std::string( ".fix2float.guard" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->round_bit, ( std::string(name()) + std::string( ".fix2float.round_bit" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &fix2float0->sticky, ( std::string(name()) + std::string( ".fix2float.sticky" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
