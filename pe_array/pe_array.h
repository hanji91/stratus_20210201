#ifndef PE_ARRAY
#define PE_ARRAY
#include "systemc.h"
#include "stratus_hls.h"
#include "config.h"
//#include "interface.h"
#include "mac.h"
#include <string>
#include <iostream>

SC_MODULE(pe_array)
{
  sc_in<bool> clk;
  sc_in<bool> rstn;
  sc_in<bool> enable;
  sc_in<bool> src_vld;
  sc_in<bool> clear;
  sc_in<bool> init;
  sc_in< sc_uint<8> > systolic_en;
  sc_in< sc_uint<8> > systolic_depth;
  sc_in< sc_uint<8> > mac_shift_len;
#ifdef GEN_WRAP
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s0[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s1[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s2[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s3[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s4[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s5[32];
  sc_in< sc_int<FEATURE_BIT_WIDTH> >src_0_s6[32];
  sc_in< sc_int<WEIGHT_BIT_WIDTH> > src_1[32];
  sc_out< sc_int<ACCUMULATOR_BIT_WIDTH> > pe_data[32];
#else
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s0;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s1;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s2;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s3;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s4;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s5;     //[32];
  sc_vector< sc_in< sc_int<FEATURE_BIT_WIDTH> > > src_0_s6;     //[32];
  sc_vector< sc_in< sc_int<WEIGHT_BIT_WIDTH> > > src_1;         //[32];
  sc_vector< sc_out< sc_int<ACCUMULATOR_BIT_WIDTH> > > pe_data; //[32];
#endif
  sc_out<bool> pe_data_valid;

  sc_signal<bool> check_overflow_en;
  sc_signal<bool> check_overflow_en_1d;

  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_0[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_1[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_2[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_3[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_4[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_5[32];
  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_acc_6[32];

  sc_signal< sc_int<ACCUMULATOR_BIT_WIDTH> > mac_shifted_data[32];
  sc_signal<bool> clear_1d;
  sc_signal<bool> clear_2d;
  sc_signal<bool> clear_3d;
  sc_signal<bool> clear_4d;
  sc_signal<bool> clear_5d;
  sc_signal<bool> clear_6d;
  sc_signal<bool> clear_7d;
  sc_signal<bool> clear_8d;

  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_1d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_2d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_3d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_4d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_5d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_6d[32];
  sc_signal< sc_int<WEIGHT_BIT_WIDTH> > src_1_7d[32];

  sc_signal<bool> src_vld_1d;
  sc_signal<bool> src_vld_2d;
  sc_signal<bool> src_vld_3d;
  sc_signal<bool> src_vld_4d;
  sc_signal<bool> src_vld_5d;
  sc_signal<bool> src_vld_6d;

  sc_signal< sc_int<FEATURE_BIT_WIDTH> > src_0_s0_1d[32];

  void _delay()
  {
   if (!rstn.read()) { // Added on 2020/12/02 by hanji
    clear_1d.write(0);
    clear_2d.write(0);
    clear_3d.write(0);
    clear_4d.write(0);
    clear_5d.write(0);
    clear_6d.write(0);
    clear_7d.write(0);
    clear_8d.write(0);
    src_vld_1d.write(0);
    src_vld_2d.write(0);
    src_vld_3d.write(0);
    src_vld_4d.write(0);
    src_vld_5d.write(0);
    src_vld_6d.write(0);
    //src_vld_7d.write(0);
    check_overflow_en_1d.write(0);
    for (size_t i = 0; i < 32; i++) 
    {    
      src_0_s0_1d[i].write(0);
    }
   }
   else if (init.read()) { // Added on 2021/01/27 by hanji
    clear_1d.write(0);
    clear_2d.write(0);
    clear_3d.write(0);
    clear_4d.write(0);
    clear_5d.write(0);
    clear_6d.write(0);
    clear_7d.write(0);
    clear_8d.write(0);
    src_vld_1d.write(0);
    src_vld_2d.write(0);
    src_vld_3d.write(0);
    src_vld_4d.write(0);
    src_vld_5d.write(0);
    src_vld_6d.write(0);
    //src_vld_7d.write(0);
    check_overflow_en_1d.write(0);
    for (size_t i = 0; i < 32; i++) 
    {    
      src_0_s0_1d[i].write(0);
    }
   }
   else { 
    clear_1d = clear.read();
    clear_2d = clear_1d.read();
    clear_3d = clear_2d.read();
    clear_4d = clear_3d.read();
    clear_5d = clear_4d.read();
    clear_6d = clear_5d.read();
    clear_7d = clear_6d.read();
    clear_8d = clear_7d.read();
    src_vld_1d = src_vld.read();
    src_vld_2d = src_vld_1d.read();
    src_vld_3d = src_vld_2d.read();
    src_vld_4d = src_vld_3d.read();
    src_vld_5d = src_vld_4d.read();
    src_vld_6d = src_vld_5d.read();
    check_overflow_en_1d = check_overflow_en.read();
    for (size_t i = 0; i < 32; i++)
    {
      src_0_s0_1d[i] = src_0_s0[i];
    }
   }
  }
  void _pe_data_valid()
  {
    if (!rstn.read())  // Added on 2021/01/27 by hanji
      pe_data_valid.write(0);
    else if (enable.read() == 1)
      //pe_data_valid = check_overflow_en_1d.read();
      pe_data_valid = check_overflow_en.read(); // Modified on 2021/01/27 by hanji
    else
      //pe_data_valid = src_vld_1d.read();
      pe_data_valid = src_vld.read(); // Modified on 2021/01/27 by hanji
  }
  void _shift_mac_data()
  {
    if (!rstn.read()) { // Added on 2020/12/02 by hanji
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i].write(0);
      }
    }
    //else if (clear)
    else if (clear_1d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_0[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_1d)
    else if (clear_2d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_1[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_2d)
    else if (clear_3d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_2[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_3d)
    else if (clear_4d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_3[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_4d)
    else if (clear_5d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_4[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_5d)
    else if (clear_6d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_5[i].read() >> mac_shift_len.read();
      }
    }
    //else if (clear_6d)
    else if (clear_7d) // Modified on 2021/01/27 by hanji
    {
      for (size_t i = 0; i < 32; i++)
      {
        mac_shifted_data[i] = mac_acc_6[i].read() >> mac_shift_len.read();
      }
    }
  }
  void _check_overflow_en()
  {
    if (!rstn.read()) // Added on 2021/01/27 by hanji
      check_overflow_en = 0;
    else if (systolic_en.read())
      check_overflow_en = clear_1d || clear_2d || clear_3d || clear_4d || clear_5d || clear_6d || clear_7d;
    else
      check_overflow_en = clear_1d;
  }
  void _pe_data()
  {
    //if (clear_1d || clear_2d || clear_3d || clear_4d || clear_5d || clear_6d || clear_7d)
    if (!rstn.read()) { // Added on 2020/12/02 by hanji
      for (size_t i = 0; i < 32; i++)
      {
        pe_data[i].write(0);
      }
    }
    else if (enable.read() == 1)
    {
      if (check_overflow_en)
      {
        for (size_t i = 0; i < 32; i++)
        {
          if (mac_shifted_data[i].read() > INT32_MAX || mac_shifted_data[i].read() < INT32_MIN)
          {
            cout << "@pe_array : INT32_MAX : " << INT32_MAX << endl;
            cout << "@pe_array : INT32_MIN : " << INT32_MIN << endl;
            cout << "@pe_array : WARNING  perray Data overflow : " << mac_shifted_data[i].read() << endl;
            //assert(0);
            if (mac_shifted_data[i].read() > INT32_MAX)
              pe_data[i] = INT32_MAX;
            else
              pe_data[i] = INT32_MIN;
          }
          else
          {
            pe_data[i] = mac_shifted_data[i].read();
          }
        }
      }
    }
    else
    {
      for (size_t i = 0; i < 32; i++)
      {
        pe_data[i] = src_0_s0[i].read();
      }
    }
  }

  mac *u_mac[7][32];
  SC_CTOR(pe_array) : clk("clk"),
                      rstn("rstn"),
                      enable("enable"),
                      src_vld("src_vld"),
                      clear("clear"),
                      init("init"),
                      systolic_en("systolic_en"),
                      systolic_depth("systolic_depth"),
                      mac_shift_len("mac_shift_len"),
                      #ifndef GEN_WRAP
                      src_0_s0("src_0_s0", 32),
                      src_0_s1("src_0_s1", 32),
                      src_0_s2("src_0_s2", 32),
                      src_0_s3("src_0_s3", 32),
                      src_0_s4("src_0_s4", 32),
                      src_0_s5("src_0_s5", 32),
                      src_0_s6("src_0_s6", 32),
                      src_1("src_1", 32),
                      pe_data("pe_data", 32),
                      #endif
                      pe_data_valid("pe_data_valid")

  {
    //for (size_t j = 0; j < 7; j++)
    //  for (size_t i = 0; i < 32; i++)
    //    u_mac[j][i] = new mac(("u_mac_" + std::to_string(i) + "_" + std::to_string(j)).c_str());
    
      // Added on 2020/12/02 by hanji
      u_mac[0][0] = new mac("u_mac_0_0");
      u_mac[0][1] = new mac("u_mac_0_1");
      u_mac[0][2] = new mac("u_mac_0_2");
      u_mac[0][3] = new mac("u_mac_0_3");
      u_mac[0][4] = new mac("u_mac_0_4");
      u_mac[0][5] = new mac("u_mac_0_5");
      u_mac[0][6] = new mac("u_mac_0_6");
      u_mac[0][7] = new mac("u_mac_0_7");
      u_mac[0][8] = new mac("u_mac_0_8");
      u_mac[0][9] = new mac("u_mac_0_9");
      u_mac[0][10] = new mac("u_mac_0_10");
      u_mac[0][11] = new mac("u_mac_0_11");
      u_mac[0][12] = new mac("u_mac_0_12");
      u_mac[0][13] = new mac("u_mac_0_13");
      u_mac[0][14] = new mac("u_mac_0_14");
      u_mac[0][15] = new mac("u_mac_0_15");
      u_mac[0][16] = new mac("u_mac_0_16");
      u_mac[0][17] = new mac("u_mac_0_17");
      u_mac[0][18] = new mac("u_mac_0_18");
      u_mac[0][19] = new mac("u_mac_0_19");
      u_mac[0][20] = new mac("u_mac_0_20");
      u_mac[0][21] = new mac("u_mac_0_21");
      u_mac[0][22] = new mac("u_mac_0_22");
      u_mac[0][23] = new mac("u_mac_0_23");
      u_mac[0][24] = new mac("u_mac_0_24");
      u_mac[0][25] = new mac("u_mac_0_25");
      u_mac[0][26] = new mac("u_mac_0_26");
      u_mac[0][27] = new mac("u_mac_0_27");
      u_mac[0][28] = new mac("u_mac_0_28");
      u_mac[0][29] = new mac("u_mac_0_29");
      u_mac[0][30] = new mac("u_mac_0_30");
      u_mac[0][31] = new mac("u_mac_0_31");

      u_mac[1][0] = new mac("u_mac_1_0");
      u_mac[1][1] = new mac("u_mac_1_1");
      u_mac[1][2] = new mac("u_mac_1_2");
      u_mac[1][3] = new mac("u_mac_1_3");
      u_mac[1][4] = new mac("u_mac_1_4");
      u_mac[1][5] = new mac("u_mac_1_5");
      u_mac[1][6] = new mac("u_mac_1_6");
      u_mac[1][7] = new mac("u_mac_1_7");
      u_mac[1][8] = new mac("u_mac_1_8");
      u_mac[1][9] = new mac("u_mac_1_9");
      u_mac[1][10] = new mac("u_mac_1_10");
      u_mac[1][11] = new mac("u_mac_1_11");
      u_mac[1][12] = new mac("u_mac_1_12");
      u_mac[1][13] = new mac("u_mac_1_13");
      u_mac[1][14] = new mac("u_mac_1_14");
      u_mac[1][15] = new mac("u_mac_1_15");
      u_mac[1][16] = new mac("u_mac_1_16");
      u_mac[1][17] = new mac("u_mac_1_17");
      u_mac[1][18] = new mac("u_mac_1_18");
      u_mac[1][19] = new mac("u_mac_1_19");
      u_mac[1][20] = new mac("u_mac_1_20");
      u_mac[1][21] = new mac("u_mac_1_21");
      u_mac[1][22] = new mac("u_mac_1_22");
      u_mac[1][23] = new mac("u_mac_1_23");
      u_mac[1][24] = new mac("u_mac_1_24");
      u_mac[1][25] = new mac("u_mac_1_25");
      u_mac[1][26] = new mac("u_mac_1_26");
      u_mac[1][27] = new mac("u_mac_1_27");
      u_mac[1][28] = new mac("u_mac_1_28");
      u_mac[1][29] = new mac("u_mac_1_29");
      u_mac[1][30] = new mac("u_mac_1_30");
      u_mac[1][31] = new mac("u_mac_1_31");

      u_mac[2][0] = new mac("u_mac_2_0");
      u_mac[2][1] = new mac("u_mac_2_1");
      u_mac[2][2] = new mac("u_mac_2_2");
      u_mac[2][3] = new mac("u_mac_2_3");
      u_mac[2][4] = new mac("u_mac_2_4");
      u_mac[2][5] = new mac("u_mac_2_5");
      u_mac[2][6] = new mac("u_mac_2_6");
      u_mac[2][7] = new mac("u_mac_2_7");
      u_mac[2][8] = new mac("u_mac_2_8");
      u_mac[2][9] = new mac("u_mac_2_9");
      u_mac[2][10] = new mac("u_mac_2_10");
      u_mac[2][11] = new mac("u_mac_2_11");
      u_mac[2][12] = new mac("u_mac_2_12");
      u_mac[2][13] = new mac("u_mac_2_13");
      u_mac[2][14] = new mac("u_mac_2_14");
      u_mac[2][15] = new mac("u_mac_2_15");
      u_mac[2][16] = new mac("u_mac_2_16");
      u_mac[2][17] = new mac("u_mac_2_17");
      u_mac[2][18] = new mac("u_mac_2_18");
      u_mac[2][19] = new mac("u_mac_2_19");
      u_mac[2][20] = new mac("u_mac_2_20");
      u_mac[2][21] = new mac("u_mac_2_21");
      u_mac[2][22] = new mac("u_mac_2_22");
      u_mac[2][23] = new mac("u_mac_2_23");
      u_mac[2][24] = new mac("u_mac_2_24");
      u_mac[2][25] = new mac("u_mac_2_25");
      u_mac[2][26] = new mac("u_mac_2_26");
      u_mac[2][27] = new mac("u_mac_2_27");
      u_mac[2][28] = new mac("u_mac_2_28");
      u_mac[2][29] = new mac("u_mac_2_29");
      u_mac[2][30] = new mac("u_mac_2_30");
      u_mac[2][31] = new mac("u_mac_2_31");

      u_mac[3][0] = new mac("u_mac_3_0");
      u_mac[3][1] = new mac("u_mac_3_1");
      u_mac[3][2] = new mac("u_mac_3_2");
      u_mac[3][3] = new mac("u_mac_3_3");
      u_mac[3][4] = new mac("u_mac_3_4");
      u_mac[3][5] = new mac("u_mac_3_5");
      u_mac[3][6] = new mac("u_mac_3_6");
      u_mac[3][7] = new mac("u_mac_3_7");
      u_mac[3][8] = new mac("u_mac_3_8");
      u_mac[3][9] = new mac("u_mac_3_9");
      u_mac[3][10] = new mac("u_mac_3_10");
      u_mac[3][11] = new mac("u_mac_3_11");
      u_mac[3][12] = new mac("u_mac_3_12");
      u_mac[3][13] = new mac("u_mac_3_13");
      u_mac[3][14] = new mac("u_mac_3_14");
      u_mac[3][15] = new mac("u_mac_3_15");
      u_mac[3][16] = new mac("u_mac_3_16");
      u_mac[3][17] = new mac("u_mac_3_17");
      u_mac[3][18] = new mac("u_mac_3_18");
      u_mac[3][19] = new mac("u_mac_3_19");
      u_mac[3][20] = new mac("u_mac_3_20");
      u_mac[3][21] = new mac("u_mac_3_21");
      u_mac[3][22] = new mac("u_mac_3_22");
      u_mac[3][23] = new mac("u_mac_3_23");
      u_mac[3][24] = new mac("u_mac_3_24");
      u_mac[3][25] = new mac("u_mac_3_25");
      u_mac[3][26] = new mac("u_mac_3_26");
      u_mac[3][27] = new mac("u_mac_3_27");
      u_mac[3][28] = new mac("u_mac_3_28");
      u_mac[3][29] = new mac("u_mac_3_29");
      u_mac[3][30] = new mac("u_mac_3_30");
      u_mac[3][31] = new mac("u_mac_3_31");

      u_mac[4][0] = new mac("u_mac_4_0");
      u_mac[4][1] = new mac("u_mac_4_1");
      u_mac[4][2] = new mac("u_mac_4_2");
      u_mac[4][3] = new mac("u_mac_4_3");
      u_mac[4][4] = new mac("u_mac_4_4");
      u_mac[4][5] = new mac("u_mac_4_5");
      u_mac[4][6] = new mac("u_mac_4_6");
      u_mac[4][7] = new mac("u_mac_4_7");
      u_mac[4][8] = new mac("u_mac_4_8");
      u_mac[4][9] = new mac("u_mac_4_9");
      u_mac[4][10] = new mac("u_mac_4_10");
      u_mac[4][11] = new mac("u_mac_4_11");
      u_mac[4][12] = new mac("u_mac_4_12");
      u_mac[4][13] = new mac("u_mac_4_13");
      u_mac[4][14] = new mac("u_mac_4_14");
      u_mac[4][15] = new mac("u_mac_4_15");
      u_mac[4][16] = new mac("u_mac_4_16");
      u_mac[4][17] = new mac("u_mac_4_17");
      u_mac[4][18] = new mac("u_mac_4_18");
      u_mac[4][19] = new mac("u_mac_4_19");
      u_mac[4][20] = new mac("u_mac_4_20");
      u_mac[4][21] = new mac("u_mac_4_21");
      u_mac[4][22] = new mac("u_mac_4_22");
      u_mac[4][23] = new mac("u_mac_4_23");
      u_mac[4][24] = new mac("u_mac_4_24");
      u_mac[4][25] = new mac("u_mac_4_25");
      u_mac[4][26] = new mac("u_mac_4_26");
      u_mac[4][27] = new mac("u_mac_4_27");
      u_mac[4][28] = new mac("u_mac_4_28");
      u_mac[4][29] = new mac("u_mac_4_29");
      u_mac[4][30] = new mac("u_mac_4_30");
      u_mac[4][31] = new mac("u_mac_4_31");

      u_mac[5][0] = new mac("u_mac_5_0");
      u_mac[5][1] = new mac("u_mac_5_1");
      u_mac[5][2] = new mac("u_mac_5_2");
      u_mac[5][3] = new mac("u_mac_5_3");
      u_mac[5][4] = new mac("u_mac_5_4");
      u_mac[5][5] = new mac("u_mac_5_5");
      u_mac[5][6] = new mac("u_mac_5_6");
      u_mac[5][7] = new mac("u_mac_5_7");
      u_mac[5][8] = new mac("u_mac_5_8");
      u_mac[5][9] = new mac("u_mac_5_9");
      u_mac[5][10] = new mac("u_mac_5_10");
      u_mac[5][11] = new mac("u_mac_5_11");
      u_mac[5][12] = new mac("u_mac_5_12");
      u_mac[5][13] = new mac("u_mac_5_13");
      u_mac[5][14] = new mac("u_mac_5_14");
      u_mac[5][15] = new mac("u_mac_5_15");
      u_mac[5][16] = new mac("u_mac_5_16");
      u_mac[5][17] = new mac("u_mac_5_17");
      u_mac[5][18] = new mac("u_mac_5_18");
      u_mac[5][19] = new mac("u_mac_5_19");
      u_mac[5][20] = new mac("u_mac_5_20");
      u_mac[5][21] = new mac("u_mac_5_21");
      u_mac[5][22] = new mac("u_mac_5_22");
      u_mac[5][23] = new mac("u_mac_5_23");
      u_mac[5][24] = new mac("u_mac_5_24");
      u_mac[5][25] = new mac("u_mac_5_25");
      u_mac[5][26] = new mac("u_mac_5_26");
      u_mac[5][27] = new mac("u_mac_5_27");
      u_mac[5][28] = new mac("u_mac_5_28");
      u_mac[5][29] = new mac("u_mac_5_29");
      u_mac[5][30] = new mac("u_mac_5_30");
      u_mac[5][31] = new mac("u_mac_5_31");

      u_mac[6][0] = new mac("u_mac_6_0");
      u_mac[6][1] = new mac("u_mac_6_1");
      u_mac[6][2] = new mac("u_mac_6_2");
      u_mac[6][3] = new mac("u_mac_6_3");
      u_mac[6][4] = new mac("u_mac_6_4");
      u_mac[6][5] = new mac("u_mac_6_5");
      u_mac[6][6] = new mac("u_mac_6_6");
      u_mac[6][7] = new mac("u_mac_6_7");
      u_mac[6][8] = new mac("u_mac_6_8");
      u_mac[6][9] = new mac("u_mac_6_9");
      u_mac[6][10] = new mac("u_mac_6_10");
      u_mac[6][11] = new mac("u_mac_6_11");
      u_mac[6][12] = new mac("u_mac_6_12");
      u_mac[6][13] = new mac("u_mac_6_13");
      u_mac[6][14] = new mac("u_mac_6_14");
      u_mac[6][15] = new mac("u_mac_6_15");
      u_mac[6][16] = new mac("u_mac_6_16");
      u_mac[6][17] = new mac("u_mac_6_17");
      u_mac[6][18] = new mac("u_mac_6_18");
      u_mac[6][19] = new mac("u_mac_6_19");
      u_mac[6][20] = new mac("u_mac_6_20");
      u_mac[6][21] = new mac("u_mac_6_21");
      u_mac[6][22] = new mac("u_mac_6_22");
      u_mac[6][23] = new mac("u_mac_6_23");
      u_mac[6][24] = new mac("u_mac_6_24");
      u_mac[6][25] = new mac("u_mac_6_25");
      u_mac[6][26] = new mac("u_mac_6_26");
      u_mac[6][27] = new mac("u_mac_6_27");
      u_mac[6][28] = new mac("u_mac_6_28");
      u_mac[6][29] = new mac("u_mac_6_29");
      u_mac[6][30] = new mac("u_mac_6_30");
      u_mac[6][31] = new mac("u_mac_6_31");

    for (size_t i = 0; i < 32; i++)
    {
      u_mac[0][i]->clk(clk);
      u_mac[0][i]->rstn(rstn);
      u_mac[0][i]->clear(clear);
      u_mac[0][i]->init(init);
      u_mac[0][i]->src_vld(src_vld);
      u_mac[0][i]->src_0(src_0_s0[i]);
      u_mac[0][i]->src_1(src_1[i]);
      u_mac[0][i]->src_1_1d(src_1_1d[i]);
      u_mac[0][i]->acc(mac_acc_0[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[1][i]->clk(clk);
      u_mac[1][i]->rstn(rstn);
      u_mac[1][i]->clear(clear_1d);
      u_mac[1][i]->init(init);
      u_mac[1][i]->src_vld(src_vld_1d);
      u_mac[1][i]->src_0(src_0_s1[i]);
      u_mac[1][i]->src_1(src_1_1d[i]);
      u_mac[1][i]->src_1_1d(src_1_2d[i]);
      u_mac[1][i]->acc(mac_acc_1[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[2][i]->clk(clk);
      u_mac[2][i]->rstn(rstn);
      u_mac[2][i]->clear(clear_2d);
      u_mac[2][i]->init(init);
      u_mac[2][i]->src_vld(src_vld_2d);
      u_mac[2][i]->src_0(src_0_s2[i]);
      u_mac[2][i]->src_1(src_1_2d[i]);
      u_mac[2][i]->src_1_1d(src_1_3d[i]);
      u_mac[2][i]->acc(mac_acc_2[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[3][i]->clk(clk);
      u_mac[3][i]->rstn(rstn);
      u_mac[3][i]->clear(clear_3d);
      u_mac[3][i]->init(init);
      u_mac[3][i]->src_vld(src_vld_3d);
      u_mac[3][i]->src_0(src_0_s3[i]);
      u_mac[3][i]->src_1(src_1_3d[i]);
      u_mac[3][i]->src_1_1d(src_1_4d[i]);
      u_mac[3][i]->acc(mac_acc_3[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[4][i]->clk(clk);
      u_mac[4][i]->rstn(rstn);
      u_mac[4][i]->clear(clear_4d);
      u_mac[4][i]->init(init);
      u_mac[4][i]->src_vld(src_vld_4d);
      u_mac[4][i]->src_0(src_0_s4[i]);
      u_mac[4][i]->src_1(src_1_4d[i]);
      u_mac[4][i]->src_1_1d(src_1_5d[i]);
      u_mac[4][i]->acc(mac_acc_4[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[5][i]->clk(clk);
      u_mac[5][i]->rstn(rstn);
      u_mac[5][i]->clear(clear_5d);
      u_mac[5][i]->init(init);
      u_mac[5][i]->src_vld(src_vld_5d);
      u_mac[5][i]->src_0(src_0_s5[i]);
      u_mac[5][i]->src_1(src_1_5d[i]);
      u_mac[5][i]->src_1_1d(src_1_6d[i]);
      u_mac[5][i]->acc(mac_acc_5[i]);
    }
    for (size_t i = 0; i < 32; i++)
    {
      u_mac[6][i]->clk(clk);
      u_mac[6][i]->rstn(rstn);
      u_mac[6][i]->clear(clear_6d);
      u_mac[6][i]->init(init);
      u_mac[6][i]->src_vld(src_vld_6d);
      u_mac[6][i]->src_0(src_0_s6[i]);
      u_mac[6][i]->src_1(src_1_6d[i]);
      u_mac[6][i]->src_1_1d(src_1_7d[i]);
      u_mac[6][i]->acc(mac_acc_6[i]);
    }

    SC_METHOD(_delay);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/02 by hanji
    SC_METHOD(_shift_mac_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/02 by hanji
    SC_METHOD(_check_overflow_en);
    //sensitive << clear_1d << clear_2d << clear_3d << clear_4d << clear_5d << clear_6d << clear_7d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji

    SC_METHOD(_pe_data);
    //sensitive << clk.pos();
    sensitive << clk.pos() << rstn.neg(); // Modified on 2020/12/02 by hanji
    SC_METHOD(_pe_data_valid);
    //sensitive << enable << src_vld_1d << check_overflow_en_1d;
    sensitive << clk.pos() << rstn.neg(); // Modified on 2021/01/27 by hanji
    ;
  };
};
#endif
