#ifndef FEATURE_WRITE_ADDR_GEN_H
#define FEATURE_WRITE_ADDR_GEN_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
SC_MODULE(feature_write_addr_gen)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> init;
  sc_in< sc_uint<8> > start;
  sc_in< sc_uint<8> > conv_type; // Added on 2021/01/25 by hanjij
  sc_out<bool> stop;

  sc_in< sc_uint<32> > base_addr;

  sc_in< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > src;
  sc_in<bool> src_vld;
  sc_in< sc_uint<32> > read_address;
  sc_in<bool> read_address_valid;
  sc_in<bool> data_in_en; // Added on 2021/01/20 by hanji
  sc_out< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > read_data;

  //read path
  sc_out< sc_uint<32> > address_0;
  sc_out<bool> cs_0;
  sc_out<bool> we_0;
  sc_out<bool> oe_0;
  sc_in< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > data_in;
  sc_out< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > data_out;

  sc_signal< sc_uint<32> > write_address;
  sc_signal<uint32_t> write_cnt;

  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > fifo_mem[8];
  //sc_fifo< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > fifo_write_data;
  //sc_fifo< sc_uint<32> > fifo_write_addr;

  //sc_uint<16> tmp;
  sc_signal<bool> src_vld_1d, src_vld_2d, src_vld_3d;
  sc_signal<bool> write_address_valid;
  sc_signal<bool> wr_en, rd_en; // Added on 2020/12/16 by hanji
  sc_signal< sc_uint<3> > wr_ptr; // Added on 2020/12/16 by hanji
  sc_signal< sc_uint<3> > rd_ptr; // Added on 2020/12/16 by hanji
  //sc_signal< sc_uint<16> > num_available_1d;
  sc_signal< sc_uint<3> > fifo_cnt; // Added on 2020/12/15 by hanji
  sc_signal< sc_uint<3> > fifo_cnt_1d; // Added on 2020/12/15 by hanji

  sc_signal< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > fifo_out;

  void _delay() // Added on 2021/01/24 by hanji
  {
    if (!rstn.read()) { 
      src_vld_1d.write(0);
      src_vld_2d.write(0);
      src_vld_3d.write(0);
    }
    else {
      src_vld_1d = src_vld.read();
      src_vld_2d = src_vld_1d.read();
      src_vld_3d = src_vld_2d.read();
    }
  }

  //void _num_available_1d()
  void _fifo_cnt_1d() // Modified on 2020/12/15 by hanji
  {
    if (!rstn.read()) // Added on 2020/12/15 by hanji
      //num_available_1d.write(0);
      fifo_cnt_1d.write(0);
    else
      //num_available_1d = fifo_write_data.num_available();
      fifo_cnt_1d = fifo_cnt; // Added on 2020/12/15 by hanji
  }

  //void _debug()
  //{
  //  tmp = fifo_write_data.num_available();
  //}
  void _write_addr_valid()
  {
    write_address_valid = !read_address_valid;
  }
  void _assign()
  {
    if (!rstn.read()) { // Added on 2021/01/19 by hanji
        address_0 = 0;
        cs_0 = 0;
        we_0 = 0;
        oe_0 = 0;
        data_out.write(0);
    } 
    else if (read_address_valid.read() == 1) {
        address_0 = read_address.read();
        cs_0 = read_address_valid.read();
        we_0 = 0;
        oe_0 = read_address_valid.read();
        data_out.write(0);
    }
    else if (fifo_cnt.read() != 0) {
        address_0 = write_address.read();
        cs_0 = 1;
        we_0 = 1;
        oe_0 = 0;
        data_out.write(fifo_out.read());
    }
    else {
        address_0 = 0;
        cs_0 = 0;
        we_0 = 0;
        oe_0 = 0;
        data_out.write(0);
    }
  }

  void _read_data() // Added on 2021/01/20 by hanji
  {
    if (!rstn.read()) { 
        read_data.write(0);
    } 
    else if (data_in_en.read() == 1) {
        read_data = data_in.read();
    }
    else {
        read_data.write(0);
    }
  }

/*
  void _sram_write_sig() // Added on 2021/01/20 by hanji
  {
    if (!rstn.read()) { 
        we_0 = 0;
        data_out.write(0);
    } 
    else if (fifo_cnt.read() != 0) {
        we_0 = 1;
        data_out.write(fifo_out.read());
    }
    else {
        we_0 = 0;
        data_out.write(0);
    }
  }
*/
  void _stop()
  {
    if (!rstn.read())  // Added on 2021/01/19 by hanji
      stop.write(0);
    else if (!start.read())
      stop.write(0);
    else 
     if (conv_type.read() == 2)  // Added on 2021/01/25 by hanji(Pointwise Convolution)
      stop = src_vld.read() | src_vld_1d | src_vld_2d | src_vld_3d; // Modified on 2021/01/24 by hanji (Pointwise Convolution)
     else
      stop = src_vld.read(); // for Standard/Depthwise Convolution
  }
  void _address()
  {
    //if (!rstn.read())  // Added on 2021/01/19 by hanji
    //  write_address.write(0);
    //else
      write_address = write_cnt.read() + base_addr.read();
  }

  void _up_count()
  {
    if (!rstn.read()) // Added on 2020/12/15 by hanji
      write_cnt.write(0);
    else if (init.read() == 1)
      write_cnt = 0;
    //else if (we_0.read())
    else if (write_address_valid.read() == 1 && fifo_cnt.read() != 0) // Modified on 2021/01/25 by hanji
      write_cnt = write_cnt.read() + 1;
  }

  void _fifo_write() // Added on 2020/12/16 by hanji
  {
    if (!rstn.read())  {
     for (size_t i = 0; i < 8; i++)
     {
      fifo_mem[i].write(0);
     }
    }
    else if (wr_en.read() == 1 && fifo_cnt.read() != 7)
      fifo_mem[wr_ptr.read()] = src.read();
      //fifo_mem[0] = src.read();
  }

  void _fifo_read() // Added on 2020/12/16 by hanji
  {
    //if (!rstn.read()) 
    //  fifo_out.write(0);
    if (rd_en.read() == 1 && fifo_cnt.read() != 0)
    //if (fifo_cnt.read() != 0 && fifo_cnt_1d.read() == 0) // Modified on 2021/01/21 by hanji
      fifo_out = fifo_mem[rd_ptr.read()].read();
      //fifo_out = fifo_mem[0].read();
    //else if (fifo_cnt.read() != 0 && fifo_cnt_1d.read() != 0) // Added on 2021/01/21 by hanji
    //  fifo_out = fifo_out.read();
    else
      fifo_out.write(0);
  }

  void _fifo_cnt()
  {
    if (!rstn.read()) // Added on 2020/12/15 by hanji
      fifo_cnt.write(0);
    else if (src_vld.read() == 1 && write_address_valid.read() == 1 && fifo_cnt.read() != 0) // Added on 2021/01/28 by hanji (at special case)
      fifo_cnt = fifo_cnt.read();
    else if (src_vld.read() == 1)
      fifo_cnt = fifo_cnt.read() + 1;
    else if (write_address_valid.read() == 1 && fifo_cnt.read() != 0)
    //else if (fifo_cnt.read() != 0)
      fifo_cnt = fifo_cnt.read() - 1;
  }

  void _wr_en() // Added on 2020/12/16 by hanji
  {
    if (src_vld.read() == 1)
      wr_en = 1;
    else
      wr_en = 0;
  }

  void _rd_en() // Added on 2020/12/16 by hanji
  {
    if (write_address_valid.read() == 1 && fifo_cnt.read() != 0)
    //if (fifo_cnt.read() != 0)
      rd_en = 1;
    else
      rd_en = 0;
  }

  void _wr_ptr()
  {
    if (!rstn.read()) // Added on 2020/12/16 by hanji
      wr_ptr.write(0);
    else if (wr_en.read() == 1 && fifo_cnt.read() != 7)
      wr_ptr = wr_ptr.read() + 1;
  }

  void _rd_ptr()
  {
    if (!rstn.read()) // Added on 2020/12/16 by hanji
      rd_ptr.write(0);
    else if (rd_en.read() == 1 && fifo_cnt.read() != 0)
      rd_ptr = rd_ptr.read() + 1;
  }


  SC_CTOR(feature_write_addr_gen) : clk("clk"),
                                    rstn("rstn"),
                                    init("init"),
                                    start("start"),
                                    stop("stop"),
                                    base_addr("base_addr"),
                                    src("src"),
                                    src_vld("src_vld"),
                                    read_address("read_address"),
                                    read_address_valid("read_address_valid"),
                                    read_data("read_data"),
                                    address_0("address_0"),
                                    cs_0("cs_0"),
                                    we_0("we_0"),
                                    oe_0("oe_0"),
                                    data_in("data_in"),
                                    data_out("data_out")

  {

    //sc_fifo< sc_biguint<512> > fifo_write_data(7);
    //sc_fifo< sc_uint<32> > fifo_write_addr(7);

    SC_METHOD(_delay); // Added on 2021/01/24 by hanji
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_up_count);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/15 by hanji

    SC_METHOD(_address);
    //sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/15 by hanji
    sensitive << write_cnt << base_addr;

    SC_METHOD(_stop);
    //sensitive << src_vld;
    sensitive << clk.pos() << rstn.neg(); // Added on 2020/12/16 by hanji

    //SC_CTHREAD(_fifo_read, clk.pos());
    //async_reset_signal_is(rstn, false); // Added on 2020/12/15 by hanji
    //SC_CTHREAD(_fifo_write, clk.pos());
    //async_reset_signal_is(rstn, false); // Added on 2020/12/15 by hanji
    SC_METHOD(_fifo_read);
    sensitive << rd_en << fifo_cnt << fifo_mem[0] << fifo_mem[1] << fifo_mem[2] << fifo_mem[3] << fifo_mem[4] << fifo_mem[5] << fifo_mem[6] << fifo_mem[7]; // Modified on 2020/12/16 by hanji(for latency)
    //sensitive << clk.pos(); // Modified on 2021/01/19 by hanji
    SC_METHOD(_fifo_write);
    sensitive << clk.pos() << rstn.neg(); // Added on 2020/12/16 by hanji



    SC_METHOD(_assign);
    //sensitive << read_address << read_address_valid << data_in << write_address << src << src_vld << stop << fifo_cnt_1d << fifo_out;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/19 by hanji
    SC_METHOD(_read_data);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/20 by hanji
    //SC_METHOD(_sram_write_sig);
    //sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/20 by hanji



    //SC_METHOD(_debug);
    //sensitive << clk.pos();

    SC_METHOD(_write_addr_valid);
    sensitive << read_address_valid;

    SC_METHOD(_fifo_cnt); // Added on 2020/12/15 by hanji
    sensitive << clk.pos() << rstn.neg(); 
    //SC_METHOD(_num_available_1d);
    SC_METHOD(_fifo_cnt_1d);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/15 by hanji
   
    SC_METHOD(_wr_en); // Added on 2020/12/16 by hanji
    sensitive << src_vld;
    SC_METHOD(_rd_en); // Added on 2020/12/16 by hanji
    sensitive << write_address_valid << fifo_cnt;
    //sensitive << fifo_cnt;

    SC_METHOD(_wr_ptr); // Added on 2020/12/16 by hanji
    sensitive << clk.pos() << rstn.neg(); 
    SC_METHOD(_rd_ptr); // Added on 2020/12/16 by hanji
    sensitive << clk.pos() << rstn.neg(); 

  };
};
#endif
