	if ( esc_trace_is_enabled( esc_trace_vcd ) ) {
		if ( feature_write_addr_gen0 != NULL ) {
			esc_trace_signal( &feature_write_addr_gen0->clk, ( std::string(name()) + std::string( ".feature_write_addr_gen.clk" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->rstn, ( std::string(name()) + std::string( ".feature_write_addr_gen.rstn" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->init, ( std::string(name()) + std::string( ".feature_write_addr_gen.init" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->start, ( std::string(name()) + std::string( ".feature_write_addr_gen.start" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->conv_type, ( std::string(name()) + std::string( ".feature_write_addr_gen.conv_type" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->stop, ( std::string(name()) + std::string( ".feature_write_addr_gen.stop" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->base_addr, ( std::string(name()) + std::string( ".feature_write_addr_gen.base_addr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->src, ( std::string(name()) + std::string( ".feature_write_addr_gen.src" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->src_vld, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->read_address, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_address" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->read_address_valid, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_address_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->data_in_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_in_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->read_data, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_data" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->address_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.address_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->cs_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.cs_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->we_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.we_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->oe_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.oe_0" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->data_in, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_in" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->data_out, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_out" ) ).c_str(), esc_trace_vcd );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &feature_write_addr_gen0->write_address, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_address" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->write_cnt, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_1d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_1d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_2d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_2d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_3d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_3d" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->write_address_valid, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_address_valid" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->wr_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.wr_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->rd_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.rd_en" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->wr_ptr, ( std::string(name()) + std::string( ".feature_write_addr_gen.wr_ptr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->rd_ptr, ( std::string(name()) + std::string( ".feature_write_addr_gen.rd_ptr" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->fifo_cnt, ( std::string(name()) + std::string( ".feature_write_addr_gen.fifo_cnt" ) ).c_str(), esc_trace_vcd );
			esc_trace_signal( &feature_write_addr_gen0->fifo_cnt_1d, ( std::string(name()) + std::string( ".feature_write_addr_gen.fifo_cnt_1d" ) ).c_str(), esc_trace_vcd );
			#endif
		}
	}
	if ( esc_trace_is_enabled( esc_trace_fsdb ) ) {
		if ( feature_write_addr_gen0 != NULL ) {
			esc_trace_signal( &feature_write_addr_gen0->clk, ( std::string(name()) + std::string( ".feature_write_addr_gen.clk" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->rstn, ( std::string(name()) + std::string( ".feature_write_addr_gen.rstn" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->init, ( std::string(name()) + std::string( ".feature_write_addr_gen.init" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->start, ( std::string(name()) + std::string( ".feature_write_addr_gen.start" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->conv_type, ( std::string(name()) + std::string( ".feature_write_addr_gen.conv_type" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->stop, ( std::string(name()) + std::string( ".feature_write_addr_gen.stop" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->base_addr, ( std::string(name()) + std::string( ".feature_write_addr_gen.base_addr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->src, ( std::string(name()) + std::string( ".feature_write_addr_gen.src" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->src_vld, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->read_address, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_address" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->read_address_valid, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_address_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->data_in_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_in_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->read_data, ( std::string(name()) + std::string( ".feature_write_addr_gen.read_data" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->address_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.address_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->cs_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.cs_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->we_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.we_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->oe_0, ( std::string(name()) + std::string( ".feature_write_addr_gen.oe_0" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->data_in, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_in" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->data_out, ( std::string(name()) + std::string( ".feature_write_addr_gen.data_out" ) ).c_str(), esc_trace_fsdb );
			#if !BDW_RTL && !BDW_CC_SPEC
			esc_trace_signal( &feature_write_addr_gen0->write_address, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_address" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->write_cnt, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_1d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_1d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_2d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_2d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->src_vld_3d, ( std::string(name()) + std::string( ".feature_write_addr_gen.src_vld_3d" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->write_address_valid, ( std::string(name()) + std::string( ".feature_write_addr_gen.write_address_valid" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->wr_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.wr_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->rd_en, ( std::string(name()) + std::string( ".feature_write_addr_gen.rd_en" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->wr_ptr, ( std::string(name()) + std::string( ".feature_write_addr_gen.wr_ptr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->rd_ptr, ( std::string(name()) + std::string( ".feature_write_addr_gen.rd_ptr" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->fifo_cnt, ( std::string(name()) + std::string( ".feature_write_addr_gen.fifo_cnt" ) ).c_str(), esc_trace_fsdb );
			esc_trace_signal( &feature_write_addr_gen0->fifo_cnt_1d, ( std::string(name()) + std::string( ".feature_write_addr_gen.fifo_cnt_1d" ) ).c_str(), esc_trace_fsdb );
			#endif
		}
	}
