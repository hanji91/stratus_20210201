#ifndef AVG_POOL_U
#define AVG_POOL_U
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
SC_MODULE(avg_pool)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> init;
  sc_in< sc_int<ACCUMULATOR_BIT_WIDTH> > in_data[32];
  sc_in<bool> in_data_valid;
  sc_out< sc_int<32> > out_data[32];
  sc_out<bool> out_data_valid;

  sc_signal<bool> acc_data_enable;
  sc_signal<bool> acc_data_clear;

  sc_signal< sc_int<32> > acc_data[32];

  sc_signal<bool> acc_cnt_enable;
  sc_signal<bool> acc_cnt_clear;
  sc_signal< sc_int<8> > acc_cnt;

  sc_signal<bool> acc_data_enable_1d;
  sc_signal<bool> acc_data_clear_1d;
  sc_signal<bool> acc_cnt_clear_1d;
  sc_signal<bool> acc_cnt_clear_2d; // Added on 2021/01/28 by hanji

  //sc_int<8> max_cnt = 49;

  void _acc_cnt_ctrl()
  {
    acc_cnt_enable = in_data_valid.read();
    //acc_cnt_clear = (in_data_valid.read() == 1) && (acc_cnt.read() == max_cnt - 1);
    acc_cnt_clear = (in_data_valid.read() == 1) && (acc_cnt.read() == MAX_VAL - 1);
  }
  void _acc_cnt()
  {
    if (!rstn.read()) // Added on 2020/12/21 by hanji
        acc_cnt.write(0);
    else if (acc_cnt_enable.read())
    {
      if (acc_cnt_clear)
        acc_cnt = 0;
      else
        acc_cnt = acc_cnt.read() + 1;
    }
  }

  void _acc_data_ctrl()
  {
    acc_data_enable = in_data_valid.read();
    acc_data_clear = acc_cnt_clear_1d.read();
  }
  void _acc_data()
  {
    if (!rstn.read()) { // Added on 2020/12/21 by hanji
      for (size_t i = 0; i < 32; i++)
        acc_data[i].write(0);
    }
    else if (init)
    {
      for (size_t i = 0; i < 32; i++)
        acc_data[i].write(0);
    }
    else if (acc_data_enable_1d.read() == 0 && enable.read() == 1 && acc_data_clear_1d.read() == 1) { // Added on 2021/01/28 by hanji (at special case)
      for (size_t i = 0; i < 32; i++) {
          acc_data[i].write(in_data[i].read());
      }
    }
    else if (acc_data_enable.read() == 1 && enable.read() == 1)
    {

      for (size_t i = 0; i < 32; i++)
      {
        if (acc_data_clear.read() == 1)
        //if (acc_data_clear_1d.read() == 1) // Modified on 2021/01/28 by hanji
        {
          acc_data[i].write(in_data[i].read());
        }
        else
        {
          sc_int<64> tmp;
          tmp = in_data[i].read() + acc_data[i].read();
          if (tmp > INT32_MAX || tmp < INT32_MIN)
          {
            //cout << "@AVG_POOL : INT32_MAX : " << INT32_MAX << endl;
            //cout << "@AVG_POOL : INT32_MIN : " << INT32_MIN << endl;
            //cout << "@AVG_POOL : WARNING Avg Pooling Data Overflow : " << tmp << endl;
            if (tmp > INT32_MAX)
              acc_data[i].write(INT32_MAX);
            else
              acc_data[i].write(INT32_MIN);
          }
          else {
            acc_data[i].write(in_data[i].read() + acc_data[i].read());
          }
        }
      }
    }
  }
  void _out_data_valid()
  {
    if (!rstn.read())  // Added on 2021/01/27 by hanji
      out_data_valid.write(0);
    if (enable.read() == 1)
      out_data_valid = acc_cnt_clear_1d.read();
      //out_data_valid = acc_cnt_clear_2d.read(); // Modified on 2021/01/28 by hanji
    else
      out_data_valid = in_data_valid.read();
  }
  void _out_data()
  {
    if (!rstn.read()) { // Added on 2021/01/27 by hanji
        for (size_t i = 0; i < 32; i++)
          out_data[i].write(0);
    }
    else if (enable.read() == 1) {
      if (acc_cnt_clear_1d.read())
      //if (acc_cnt_clear_2d.read()) // Modified on 2021/01/28 by hanji
        for (size_t i = 0; i < 32; i++)
          //out_data[i] = (acc_data[i].read() / 49);
          out_data[i] = acc_data[i].read();
    }
    else {
      for (size_t i = 0; i < 32; i++)
        out_data[i] = in_data[i].read();
    }
  }
  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/21 by hanji
      acc_data_enable_1d.write(0);
      acc_data_clear_1d.write(0);
      acc_cnt_clear_1d.write(0);
      acc_cnt_clear_2d.write(0); // Added on 2021/01/28 by hanji
    }
    else {
      acc_data_enable_1d = acc_data_enable.read();
      acc_data_clear_1d = acc_data_clear.read();
      acc_cnt_clear_1d = acc_cnt_clear.read();
      acc_cnt_clear_2d = acc_cnt_clear_1d.read(); // Added on 2021/01/28 by hanji
    }
  }
  SC_CTOR(avg_pool)
  {
    SC_METHOD(_acc_cnt_ctrl);
    sensitive << in_data_valid << acc_cnt;
    SC_METHOD(_acc_cnt);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/21 by hanji

    SC_METHOD(_acc_data_ctrl);
    //sensitive << in_data_valid << acc_cnt;
    sensitive << in_data_valid << acc_cnt_clear_1d; // Modified on 2021/01/28 by hanji
    SC_METHOD(_acc_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/21 by hanji

    SC_METHOD(_out_data_valid);
    //sensitive << acc_cnt_clear_1d << enable << in_data_valid;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji

    SC_METHOD(_out_data);
    //sensitive << acc_cnt_clear_1d << enable << in_data[0] << in_data[1] << in_data[2] << in_data[3] << in_data[4] << in_data[5] << in_data[6] << in_data[7] << in_data[8] << in_data[9] << in_data[10] << in_data[11] << in_data[12] << in_data[13] << in_data[14] << in_data[15] << in_data[16] << in_data[17] << in_data[18] << in_data[19] << in_data[20] << in_data[21] << in_data[22] << in_data[23] << in_data[24] << in_data[25] << in_data[26] << in_data[27] << in_data[28] << in_data[29] << in_data[30] << in_data[31] << acc_data[0] << acc_data[1] << acc_data[2] << acc_data[3] << acc_data[4] << acc_data[5] << acc_data[6] << acc_data[7] << acc_data[8] << acc_data[9] << acc_data[10] << acc_data[11] << acc_data[12] << acc_data[13] << acc_data[14] << acc_data[15] << acc_data[16] << acc_data[17] << acc_data[18] << acc_data[19] << acc_data[20] << acc_data[21] << acc_data[22] << acc_data[23] << acc_data[24] << acc_data[25] << acc_data[26] << acc_data[27] << acc_data[28] << acc_data[29] << acc_data[30] << acc_data[31];
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/21 by hanji
  };
};
#endif
