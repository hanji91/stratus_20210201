#ifndef IN_BUFF_U
#define IN_BUFF_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
SC_MODULE(in_buff)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in< sc_int<32> > in_data[32];
  sc_in<bool> in_data_valid;
  sc_out< sc_int<32> > out_data[8];
  sc_out<bool> out_data_valid;

  sc_biguint<1024> in_tmp;
  sc_signal< sc_biguint<1024> > concate_in_data;

  //sc_signal< sc_biguint<1024> > out_tmp;
  sc_biguint<1024> out_tmp;
  sc_signal< sc_int<32> > w_data[32];
  //sc_signal< sc_biguint<1024> > concate_out_data;
  //sc_signal< sc_int<4> > read_cnt;

  sc_signal<bool> read_en;
  sc_signal<bool> read_en_1d;
  sc_signal<bool> read_en_2d;
  sc_signal<bool> read_en_3d;
  sc_signal<bool> read_en_4d;

  sc_signal<bool> wr_en, rd_en; // Added on 2020/12/22 by hanji
  sc_signal< sc_uint<3> > wr_ptr; // Added on 2020/12/22 by hanji
  sc_signal< sc_uint<3> > rd_ptr; // Added on 2020/12/22 by hanji
  sc_signal< sc_uint<5> > tmp_rd_ptr; // Added on 2020/12/22 by hanji
  sc_signal< sc_uint<3> > fifo_cnt; // Added on 2020/12/22 by hanji
  //sc_fifo< sc_biguint<1024> > fifo;
  sc_signal< sc_biguint<1024> > fifo[8];
  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/22 by hanji
      read_en_1d.write(0);
      read_en_2d.write(0);
      read_en_3d.write(0);
      read_en_4d.write(0);
    }
    else {
      read_en_1d = read_en.read();
      read_en_2d = read_en_1d.read();
      read_en_3d = read_en_2d.read();
      read_en_4d = read_en_3d.read();
    }
  }
  void _in_data_concate()
  {
    if (in_data_valid.read() == 1)
    {
      for (size_t i = 0; i < 32; i++)
      {
        int pos = i * 32;
        in_tmp.range(pos + 31, pos) = in_data[i].read();
      }
      concate_in_data.write(in_tmp);
    }
    else
    {
      in_tmp = 0;
      concate_in_data.write(in_tmp);
    }
  }

  void _fifo_write() // Added on 2020/12/22 by hanji
  {
    if (!rstn.read())  {
     for (size_t i = 0; i < 8; i++)
     {
      fifo[i].write(0);
     }
    }
    else if (enable.read() == 1 && wr_en.read() == 1 && fifo_cnt.read() != 7)
      fifo[wr_ptr.read()] = concate_in_data.read();
  }

  void _fifo_read() // Added on 2020/12/22 by hanji
  {
    //if (!rstn.read()) 
    //  out_tmp.write(0);
    //else if (enable.read() == 1 && rd_en.read() == 1 && fifo_cnt.read() != 0)
    if (enable.read() == 1 && rd_en.read() == 1 && fifo_cnt.read() != 0)
      out_tmp = fifo[rd_ptr.read()].read();
  }

  void _w_data() // Added on 2020/12/22 by hanji
  {
      for (size_t i = 0; i < 32; i++)
      {
        int pos = i * 32;
        w_data[i].write(out_tmp.range(pos + 31, pos).to_int());
      }

  }

/*
  void _fifo_write()
  {
    if (!rstn.read()) { // Added on 2020/12/22 by hanji
      fifo.write(0);
    }
    else if (enable.read())
    {
      if (in_data_valid.read() == 1)
      {
        fifo.write(concate_in_data.read());
        //cout << sc_time_stamp() << "in buffer FIFO write [" << concate_in_data.read() << endl;
      }
    }
  }
  void _fifo_read()
  {
    if (!rstn.read()) { // Added on 2020/12/22 by hanji
      fifo.write(0);
      read_cnt.write(0);
      read_en.write(0);
    }
    else if (enable.read())
    {
      //if (fifo.nb_read(out_tmp))
      if (fifo.num_available() && read_cnt.read() == 0)
      {
        fifo.read(out_tmp);
        read_cnt = 3;
        read_en = 1;
        //cout << sc_time_stamp() << "in buffer FIFO received" << out_tmp << endl;
      }
      else
      {
        read_en = 0;
      }
      if (read_cnt.read() != 0)
      {
        read_cnt = read_cnt.read() - 1;
      }
      for (size_t i = 0; i < 32; i++)
      {
        int pos = i * 32;
        w_data[i].write(out_tmp.range(pos + 31, pos).to_int());
      }
    }
  }
*/

  void _fifo_cnt()
  {
    if (!rstn.read()) // Added on 2020/12/22 by hanji
      fifo_cnt.write(0);
    else if ((in_data_valid.read() == 1 && fifo_cnt.read() != 7) && (rd_en.read() == 1 && fifo_cnt.read() != 0)) // Added on 2021/01/14 by hanji (when doing read and write operation simultaneously)
      fifo_cnt = fifo_cnt.read();
    //else if (in_data_valid.read() == 1)
    else if (in_data_valid.read() == 1 && fifo_cnt.read() != 7) // Modified on 2021/01/14 by hanji
      fifo_cnt = fifo_cnt.read() + 1;
    else if (rd_en.read() == 1 && fifo_cnt.read() != 0)
      fifo_cnt = fifo_cnt.read() - 1;
  }

  void _wr_en() // Added on 2020/12/22 by hanji
  {
    if (in_data_valid.read() == 1)
      wr_en = 1;
    else
      wr_en = 0;
  }

  void _rd_en() // Added on 2020/12/22 by hanji
  {
    //if (write_address_valid.read() == 1 && fifo_cnt.read() != 0)
    if (tmp_rd_ptr.read()(1,0) == 3)
      rd_en = 1;
    else
      rd_en = 0;
  }

  void _read_en()
  {
    read_en = rd_en.read();
  }

  void _wr_ptr()
  {
    if (!rstn.read()) // Added on 2020/12/22 by hanji
      wr_ptr.write(0);
    else if (wr_en.read() == 1 && fifo_cnt.read() != 7)
      wr_ptr = wr_ptr.read() + 1;
  }

  void _tmp_rd_ptr()
  {
    if (!rstn.read()) // Added on 2020/12/22 by hanji
      tmp_rd_ptr.write(0);
    else if (fifo_cnt.read() != 0)
      tmp_rd_ptr = tmp_rd_ptr.read() + 1;
  }

  void _rd_ptr()
  {
    rd_ptr = tmp_rd_ptr.read()(4,2) ;
  }

  void _out_data()
  {
    //if (read_cnt.read() == 3)
    if (!rstn.read()) // Added on 2020/12/23 by hanji
    {
      for (size_t i = 0; i < 8; i++)
        out_data[i].write(0);
    }
    else if (read_en_1d.read() == 1)
    {
      for (size_t i = 0; i < 8; i++)
        out_data[i] = w_data[i];
    }
    //else if (read_cnt.read() == 2)
    else if (read_en_2d.read() == 1)
    {
      for (size_t i = 0; i < 8; i++)
        out_data[i] = w_data[i + 8];
    }
    //else if (read_cnt.read() == 1)
    else if (read_en_3d.read() == 1)
    {
      for (size_t i = 0; i < 8; i++)
        out_data[i] = w_data[i + 16];
    }
    //else if (read_cnt.read() == 0)
    else if (read_en_4d.read() == 1)
    {
      for (size_t i = 0; i < 8; i++)
        out_data[i] = w_data[i + 24];
    }
  }

  void _out_data_valid()
  {
    if (!rstn.read()) // Added on 2020/12/23 by hanji
        out_data_valid.write(0);
    else
        //out_data_valid = read_en | read_en_1d | read_en_2d | read_en_3d;
        out_data_valid = read_en_1d | read_en_2d | read_en_3d | read_en_4d;
  }


  SC_CTOR(in_buff)
  {
    //sc_fifo< sc_biguint<1024> > buffer(7);
    SC_METHOD(_in_data_concate);
    sensitive << in_data_valid << in_data[0] << in_data[1] << in_data[2] << in_data[3] << in_data[4] << in_data[5] << in_data[6] << in_data[7] << in_data[8] << in_data[9] << in_data[10] << in_data[11] << in_data[12] << in_data[13] << in_data[14] << in_data[15] << in_data[16] << in_data[17] << in_data[18] << in_data[19] << in_data[20] << in_data[21] << in_data[22] << in_data[23] << in_data[24] << in_data[25] << in_data[26] << in_data[27] << in_data[28] << in_data[29] << in_data[30] << in_data[31];
    SC_METHOD(_fifo_write);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/22 by hanji
    SC_METHOD(_fifo_read);
    sensitive << clk.pos();
    //sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/22 by hanji
    SC_METHOD(_w_data); // Added on 2020/12/22 by hanji
    //sensitive << out_tmp;
    sensitive << clk.pos(); // Modified on 2020/12/23 by hanji

    SC_METHOD(_out_data);
    //sensitive << read_en_1d << read_en_2d << read_en_3d << read_en_4d << w_data[0] << w_data[1] << w_data[2] << w_data[3] << w_data[4] << w_data[5] << w_data[6] << w_data[7] << w_data[8] << w_data[9] << w_data[10] << w_data[11] << w_data[12] << w_data[13] << w_data[14] << w_data[15] << w_data[16] << w_data[17] << w_data[18] << w_data[19] << w_data[20] << w_data[21] << w_data[22] << w_data[23] << w_data[24] << w_data[25] << w_data[26] << w_data[27] << w_data[28] << w_data[29] << w_data[30] << w_data[31];
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/23 by hanji
    SC_METHOD(_out_data_valid);
    //sensitive << read_en_1d << read_en_2d << read_en_3d << read_en_4d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/23 by hanji

    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/22 by hanji

    SC_METHOD(_fifo_cnt); // Added on 2020/12/22 by hanji
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_wr_en); // Added on 2020/12/22 by hanji
    sensitive << in_data_valid;
    SC_METHOD(_rd_en); // Added on 2020/12/22 by hanji
    sensitive << tmp_rd_ptr;
    SC_METHOD(_read_en); // Added on 2020/12/16 by hanji
    //sensitive << rd_en;
    sensitive << clk.pos(); // Modified on 2020/12/23 by hanji
    SC_METHOD(_wr_ptr); // Added on 2020/12/22 by hanji
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_tmp_rd_ptr); // Added on 2020/12/16 by hanji
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_rd_ptr); // Added on 2020/12/16 by hanji
    sensitive << tmp_rd_ptr;
  };
};
#endif
