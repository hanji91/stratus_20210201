#ifndef FIX2FLOAT_H
#define FIX2FLOAT_H
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
SC_MODULE(fix2float)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in< sc_uint<32> > fraction_len;
  sc_in<bool> src_valid;
  sc_in< sc_int<32> > src;
  sc_out<bool> dst_valid;
  sc_out< sc_uint<32> > dst;

  //sc_signal< sc_uint<32> > src_float;

  sc_signal< sc_int<32> > r_in_data;
  sc_signal< sc_int<32> > r2_in_data;
  sc_signal<bool> r_sign;
  sc_signal<bool> r2_sign;
  sc_signal< sc_uint<8> > r_fraction_len;
  sc_signal< sc_uint<5> > shift_num;
  sc_signal< sc_uint<5> > r2_shift_num;
  sc_signal<bool> src_valid_1d;
  sc_signal<bool> src_valid_2d;
  sc_signal<bool> src_valid_3d;
  sc_signal<bool> zero_sig;
  sc_signal<bool> r2_zero_sig, r3_zero_sig;
  sc_signal< sc_int<23> > z_m, r_z_m;
  sc_signal< sc_int<8> > z_e, r_z_e;
  sc_signal<bool> r_z_s;
  sc_signal<bool> guard, round_bit, sticky;

  void _delay()
  {
    if (!rstn.read()) { // Added on 2020/12/24 by hanji
      src_valid_1d.write(0);
      src_valid_2d.write(0);
      src_valid_3d.write(0);
      r2_shift_num.write(0);
      r2_zero_sig.write(0);
      r3_zero_sig.write(0);
      r2_sign.write(0);
    }
    else {
      src_valid_1d = src_valid.read();
      src_valid_2d = src_valid_1d.read();
      src_valid_3d = src_valid_2d.read();
      r2_shift_num = shift_num.read();
      r2_zero_sig = zero_sig.read();
      r3_zero_sig = r2_zero_sig.read();
      r2_sign = r_sign.read();
    }
  }

  void _r_in_data_sign()
  {
    if (!rstn.read()) { // Added on 2020/12/24 by hanji
      r_in_data.write(0);
      r_sign.write(0);
    }
    else if (!enable.read()) {
      r_in_data.write(0);
      r_sign.write(0);
    }
    else if (src_valid.read()) {
     if (src.read()(31,31)) {
      r_in_data = (~src.read()) + 1;
      r_sign = 1;
     }
     else {
      r_in_data = src.read();
      r_sign = 0;
     }
    }
  }

  void _r_fraction_len()
  {
    if (!rstn.read()) // Added on 2020/12/24 by hanji
      r_fraction_len.write(0);
    else if (!enable.read()) 
      r_fraction_len.write(0);
    else 
      r_fraction_len = 127 - fraction_len.read()(7,0);
  }

  void _shift_num()
  {
    //if (!rstn.read()) // Added on 2020/12/24 by hanji
    //  shift_num.write(0);
    //else  { 
     if (r_in_data.read()(30,30)) 
      shift_num = 1;
     else if (r_in_data.read()(29,29)) 
      shift_num = 2;
     else if (r_in_data.read()(28,28)) 
      shift_num = 3;
     else if (r_in_data.read()(27,27)) 
      shift_num = 4;
     else if (r_in_data.read()(26,26)) 
      shift_num = 5;
     else if (r_in_data.read()(25,25)) 
      shift_num = 6;
     else if (r_in_data.read()(24,24)) 
      shift_num = 7;
     else if (r_in_data.read()(23,23)) 
      shift_num = 8;
     else if (r_in_data.read()(22,22)) 
      shift_num = 9;
     else if (r_in_data.read()(21,21)) 
      shift_num = 10;
     else if (r_in_data.read()(20,20)) 
      shift_num = 11;
     else if (r_in_data.read()(19,19)) 
      shift_num = 12;
     else if (r_in_data.read()(18,18)) 
      shift_num = 13;
     else if (r_in_data.read()(17,17)) 
      shift_num = 14;
     else if (r_in_data.read()(16,16)) 
      shift_num = 15;
     else if (r_in_data.read()(15,15)) 
      shift_num = 16;
     else if (r_in_data.read()(14,14)) 
      shift_num = 17;
     else if (r_in_data.read()(13,13)) 
      shift_num = 18;
     else if (r_in_data.read()(12,12)) 
      shift_num = 19;
     else if (r_in_data.read()(11,11)) 
      shift_num = 20;
     else if (r_in_data.read()(10,10)) 
      shift_num = 21;
     else if (r_in_data.read()(9,9)) 
      shift_num = 22;
     else if (r_in_data.read()(8,8)) 
      shift_num = 23;
     else if (r_in_data.read()(7,7)) 
      shift_num = 24;
     else if (r_in_data.read()(6,6)) 
      shift_num = 25;
     else if (r_in_data.read()(5,5)) 
      shift_num = 26;
     else if (r_in_data.read()(4,4)) 
      shift_num = 27;
     else if (r_in_data.read()(3,3)) 
      shift_num = 28;
     else if (r_in_data.read()(2,2)) 
      shift_num = 29;
     else if (r_in_data.read()(1,1)) 
      shift_num = 30;
     else if (r_in_data.read()(0,0)) 
      shift_num = 31;
     else
      shift_num = 0;
    //}
  }

  void _comb_sig()
  {
      zero_sig = (r_in_data.read() == 0) ? 1 : 0;
      z_m = r2_in_data.read()(30,8);
      z_e = 31 - r2_shift_num.read();
      guard = r2_in_data.read()(7,7);
      round_bit = r2_in_data.read()(6,6);
      sticky = (r2_in_data.read()(5,0) != 0) ? 1 : 0;
  }

  void _r2_in_data()
  {
    if (!rstn.read()) // Added on 2020/12/28 by hanji
      r2_in_data.write(0);
    else if (!src_valid_1d.read()) 
      r2_in_data.write(0);
    else if (zero_sig.read()) 
      r2_in_data.write(0);
    else
      r2_in_data = r_in_data.read() << shift_num.read();
  }

  void _r_z()
  {
    if (!rstn.read()) { // Added on 2020/12/28 by hanji
      r_z_m.write(0);
      r_z_e.write(0);
      r_z_s.write(0);
    } 
    else if (!src_valid_2d) {
      r_z_m.write(0);
      r_z_e.write(0);
      r_z_s.write(0);
    }
    else if (r2_zero_sig) {
      r_z_m.write(0);
      r_z_e.write(0);
      r_z_s.write(0);
    }
    else if ((guard.read() == 1) && ((round_bit.read() == 1) || (sticky.read() == 1) || (r2_in_data.read()(8,8) == 1))) {
      r_z_m = z_m.read() + 1;

      //r_z_e = (z_m.read()(22,0) == 0x7fffff) ? z_e.read() + 1 : z_e.read();
     if (z_m.read() == 0x7fffff)
      r_z_e = z_e.read() + 1;
     else
      r_z_e = z_e.read();

      r_z_s = r2_sign.read();
    }
    else {
      r_z_m = z_m.read();
      r_z_e = z_e.read();
      r_z_s = r2_sign.read();
    }
  }

  void _dst()
  {
    if (!rstn.read()) // Added on 2020/12/28 by hanji
      dst.write(0);
    else if (!enable.read())
      //dst.write(0);
      dst = src.read().to_uint(); // Modified on 2021/01/15 by hanji
    else if (!src_valid_3d.read())
      dst.write(0);
    else if (r3_zero_sig.read())
      dst.write(0);
    else {
      dst = (sc_int<1>(r_z_s.read()), sc_int<8>(r_z_e.read() + r_fraction_len.read()), sc_int<23>(r_z_m.read()));
      //dst = (r_z_e.read() + r_fraction_len.read()) << 30;
      //dst = r_z_m.read();
    }
  }

  void _dst_valid()
  {
    if (!rstn.read()) // Added on 2020/12/24 by hanji
      dst_valid.write(0);
    else if (!enable.read())
      //dst_valid.write(0);
      dst_valid = src_valid.read(); // Modified on 2021/01/15 by hanji
    else
      dst_valid = src_valid_3d.read();
  }

/*
  void _fix2float()
  {
    if (!rstn.read()) // Added on 2020/12/24 by hanji
      dst.write(0);
    else if (enable.read() == 1)
    {
      if (src_valid.read() == 1)
      {
        float tmp = fixed32_to_float32(src.read(), fraction_len.read());
        //cout << "@fix2float::src:: " << src.read() << ":: Time[" << sc_time_stamp() << "]" << endl;
        //cout << "@fix2float::tmp:: " << tmp << ":: Time[" << sc_time_stamp() << "]" << endl;
        sc_dt::scfx_ieee_float id(tmp);
        sc_uint<1> sign2 = id.negative();
        sc_uint<8> exp2 = id.exponent() + 127; //int(-127~126) to uint(0~255)
        sc_uint<23> frac2 = id.mantissa();
        sc_dt::scfx_ieee_float inst_z_float;
        dst = (sign2, exp2, frac2);
        //cout << "@fix2float::dst:: " << dst.read() << ":: Time[" << sc_time_stamp() << "]" << endl;
      }
    }
    else
    {
        dst = src.read().to_uint();
    }
  }
*/

  SC_CTOR(fix2float)
  {
/*
    SC_METHOD(_fix2float);
    //sensitive << src << src_valid << fraction_len <<enable ;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/24 by hanji
*/

    SC_METHOD(_dst);
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/28 by hanji
    SC_METHOD(_dst_valid);
    //sensitive << src_valid;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/24 by hanji

    // Added on 2020/12/24 by hanji
    SC_METHOD(_delay);
    sensitive << clk.pos() << rstn.neg();

    SC_METHOD(_r_in_data_sign);
    sensitive << clk.pos() << rstn.neg(); 
    SC_METHOD(_r_fraction_len);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_shift_num);
    sensitive << r_in_data; 
    SC_METHOD(_comb_sig);
    sensitive << r_in_data << r2_in_data << r2_shift_num; 
    SC_METHOD(_r2_in_data);
    sensitive << clk.pos() << rstn.neg();
    SC_METHOD(_r_z);
    sensitive << clk.pos() << rstn.neg();
  };
};

#endif
