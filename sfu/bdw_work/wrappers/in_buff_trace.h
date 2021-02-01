	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( in_buff0 != NULL ) {
			esc_trace_signal( &in_buff0->clk, ( std::string(name()) + std::string( ".in_buff.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->rstn, ( std::string(name()) + std::string( ".in_buff.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->enable, ( std::string(name()) + std::string( ".in_buff.enable" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->in_data, ( std::string(name()) + std::string( ".in_buff.in_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->in_data_valid, ( std::string(name()) + std::string( ".in_buff.in_data_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->out_data, ( std::string(name()) + std::string( ".in_buff.out_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->out_data_valid, ( std::string(name()) + std::string( ".in_buff.out_data_valid" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &in_buff0->w_data, ( std::string(name()) + std::string( ".in_buff.w_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->read_en, ( std::string(name()) + std::string( ".in_buff.read_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->read_en_1d, ( std::string(name()) + std::string( ".in_buff.read_en_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->read_en_2d, ( std::string(name()) + std::string( ".in_buff.read_en_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->read_en_3d, ( std::string(name()) + std::string( ".in_buff.read_en_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->read_en_4d, ( std::string(name()) + std::string( ".in_buff.read_en_4d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->wr_en, ( std::string(name()) + std::string( ".in_buff.wr_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->rd_en, ( std::string(name()) + std::string( ".in_buff.rd_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->wr_ptr, ( std::string(name()) + std::string( ".in_buff.wr_ptr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->rd_ptr, ( std::string(name()) + std::string( ".in_buff.rd_ptr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->tmp_rd_ptr, ( std::string(name()) + std::string( ".in_buff.tmp_rd_ptr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &in_buff0->fifo_cnt, ( std::string(name()) + std::string( ".in_buff.fifo_cnt" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( in_buff0 != NULL ) {
			esc_trace_signal( &in_buff0->clk, ( std::string(name()) + std::string( ".in_buff.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->rstn, ( std::string(name()) + std::string( ".in_buff.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->enable, ( std::string(name()) + std::string( ".in_buff.enable" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->in_data, ( std::string(name()) + std::string( ".in_buff.in_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->in_data_valid, ( std::string(name()) + std::string( ".in_buff.in_data_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->out_data, ( std::string(name()) + std::string( ".in_buff.out_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->out_data_valid, ( std::string(name()) + std::string( ".in_buff.out_data_valid" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &in_buff0->w_data, ( std::string(name()) + std::string( ".in_buff.w_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->read_en, ( std::string(name()) + std::string( ".in_buff.read_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->read_en_1d, ( std::string(name()) + std::string( ".in_buff.read_en_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->read_en_2d, ( std::string(name()) + std::string( ".in_buff.read_en_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->read_en_3d, ( std::string(name()) + std::string( ".in_buff.read_en_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->read_en_4d, ( std::string(name()) + std::string( ".in_buff.read_en_4d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->wr_en, ( std::string(name()) + std::string( ".in_buff.wr_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->rd_en, ( std::string(name()) + std::string( ".in_buff.rd_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->wr_ptr, ( std::string(name()) + std::string( ".in_buff.wr_ptr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->rd_ptr, ( std::string(name()) + std::string( ".in_buff.rd_ptr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->tmp_rd_ptr, ( std::string(name()) + std::string( ".in_buff.tmp_rd_ptr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &in_buff0->fifo_cnt, ( std::string(name()) + std::string( ".in_buff.fifo_cnt" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
