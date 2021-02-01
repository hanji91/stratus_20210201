#ifndef SFU_OUT_BUFF_U
#define SFU_OUT_BUFF_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
SC_MODULE(sfu_out_buff)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> learned_clip_en;
  sc_in< sc_uint<32> > in0_data[8];
  sc_in<bool> in0_data_valid;
  sc_in< sc_uint<32> > in1_data[8];
  sc_in<bool> in1_data_valid;
  sc_out< sc_biguint<FEATURE_BUFFER_DATA_WIDTH> > out_data;
  sc_out<bool> out_data_valid;

  sc_signal< sc_uint<2> > data_cnt;
  sc_uint<80> r_tmp;
  sc_signal< sc_uint<80> > r_data;
  sc_uint<256> t_tmp;
  sc_signal< sc_uint<256> > t_data;
  sc_signal<bool> r_data_valid;

 
  void _r_data()
  {
    if (!rstn.read()) 
      r_data.write(0);
    else if (!enable.read()) 
      r_data.write(0);
    else if (learned_clip_en.read()) {
     for (int i = 0; i < 8; i++) {
      int pos = i*10;
      r_tmp.range(pos+9, pos) = in0_data[i].read().range(9, 0);
     }
      r_data.write(r_tmp);
    }
  }

  void _t_data()
  {
    if (!rstn.read()) 
      t_data.write(0);
    else if (!enable.read()) 
      t_data.write(0);
    else if (!learned_clip_en.read()) {
     for (int i = 0; i < 8; i++) {
      int pos = i*32;
      t_tmp.range(pos+31, pos) = in1_data[i].read().range(31, 0);
     }
      t_data.write(t_tmp);
    }
  }

  void _r_data_valid()
  {
    if (!rstn.read()) 
      r_data_valid.write(0);
    else if (!enable.read()) 
      r_data_valid.write(0);
    else if (learned_clip_en.read()) 
      r_data_valid = in0_data_valid.read();
    else 
      r_data_valid = in1_data_valid.read();
  }

  void _data_cnt()
  {
    if (!rstn.read()) 
      data_cnt.write(0);
    else if (!enable.read()) 
      data_cnt.write(0);
    else if (!r_data_valid.read()) 
      data_cnt.write(0);
    else 
      data_cnt = data_cnt.read() + 1;
  }

  void _out_data_valid()
  {
    if (!rstn.read()) 
      out_data_valid.write(0);
    else if (!enable.read()) 
      out_data_valid.write(0);
    else if (learned_clip_en.read()) 
      out_data_valid = r_data_valid.read() & (data_cnt.read()==3);
    else
      out_data_valid = r_data_valid.read();
  }

  void _out_data()
  {
    if (!rstn.read()) 
      out_data.write(0);
    else if (!enable.read()) 
      out_data.write(0);
    else if (learned_clip_en.read()) {
     if (r_data_valid.read()) 
      out_data = (r_data.read(), out_data.read().range(319, 80)); 
    }
    else if (!learned_clip_en.read()) {
     if (r_data_valid.read()) {
      sc_uint<64> empty = 0; 
      out_data = (empty, t_data.read());
     }
    } 
  }

  SC_CTOR(sfu_out_buff)
  {
    SC_METHOD(_r_data);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_t_data);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_r_data_valid);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_data_cnt);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_out_data);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_out_data_valid);
    sensitive << clk.pos() << rstn.neg();
  };
};
#endif
