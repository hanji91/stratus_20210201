#ifndef CONFIG_H
#define CONFIG_H
#include <string>
#include <iostream>
#include "systemc.h"

#define GCHECKER_EN
#define NO_RESHAPE_DUMP

static std::string home_path = "../"; // "/home/psj/projects/G_MAC224_HWC_REV1/";

static std::string img_file_name = "ILSVRC2012_val_00000293_qint8_int32.bin";
static std::string image_data_path  = "../seedc/images/n01440764/";  //"/home/psj/projects/G_MAC224_HWC_REV1/seedc/images/n01440764/";

//#define WEIGHT_DATA_PATH            home_path + "/seedc/models/mv1_flatten/weight/"
#define WEIGHT_DATA_PATH            "/mnt/nas/HW_DB/genesis/weight/"
#define IMAGE_RESHAPE_PATH          home_path + "/data/images_reshape/"
#define MIF_DATA_PATH               home_path + "/data/mif/"

//Added on 2020/12/08 by hanji
#define POF_VAL				32
#define MAX_VAL				49	

#define FEATURE_MEM_DEPTH               100352
#define WEIGHT_MEM_DEPTH                132302
#define BN_MEM_DEPTH                    1368
#define BIAS_MEM_DEPTH                  32

#define MAC_ARRAY_H                     32
#define MAC_ARRAY_W                     7

#define DATA_WIDTH                      512

#define APB_DATA_WIDTH                  32

#define GEN_WRAP			1 // Added on 2020/12/02 by hanji

#define WEIGHT_BIT_WIDTH                8
#define FEATURE_BIT_WIDTH               10
#define ACCUMULATOR_BIT_WIDTH           32

#define WEIGHT_BUFFER_DATA_WIDTH        WEIGHT_BIT_WIDTH * MAC_ARRAY_H
#define FEATURE_BUFFER_DATA_WIDTH       FEATURE_BIT_WIDTH * MAC_ARRAY_H

#define SFU_OUT_BUFF_MERGE_DATA_WIDTH   FEATURE_BIT_WIDTH * 8

#define SYSTOLIC_EN

#define CLK_PERIOD                      10
#define CLK_DUTY_CYCLE                  0.5
#define CLK_TIME_UNIT                   SC_NS 

//#define TEST_MV1_BASIC
#define TEST_MV1_DEEDC_V00
//#define VERIFY_LAYER0 //standard convolution
//#define VERIFY_LAYER1 //depthwise convolution
//#define VERIFY_LAYER2 //pointwise convolution
//#define VERIFY_LAYER3 //depthwise convolution
//#define VERIFY_LAYER4 //pointwise convolution
//#define VERIFY_LAYER5 //depthwise convolution
//#define VERIFY_LAYER6 //pointwise convolution
//#define VERIFY_LAYER7 //depthwise convolution
//#define VERIFY_LAYER8 //pointwise convolution
//#define VERIFY_LAYER9 //depthwise convolution
//#define VERIFY_LAYER10 //pointwise convolution
//#define VERIFY_LAYER11 //depthwise convolution
//#define VERIFY_LAYER12 //pointwise convolution
//#define VERIFY_LAYER13 //depthwise convolution
//#define VERIFY_LAYER14 //pointwise convolution
//#define VERIFY_LAYER15 //depthwise convolution
//#define VERIFY_LAYER16 //pointwise convolution
//#define VERIFY_LAYER17 //depthwise convolution
//#define VERIFY_LAYER18 //pointwise convolution
//#define VERIFY_LAYER19 //depthwise convolution
//#define VERIFY_LAYER20 //pointwise convolution
//#define VERIFY_LAYER21 //depthwise convolution
//#define VERIFY_LAYER22 //pointwise convolution
//#define VERIFY_LAYER23 //depthwise convolution
//#define VERIFY_LAYER24 //pointwise convolution
//#define VERIFY_LAYER25 //depthwise convolution
//#define VERIFY_LAYER26 //pointwise convolution
//#define VERIFY_LAYER27 //pointwise convolution
//#define VERIFY_LAYER28 //pointwise convolution


//configuration 
#define STANDARD 0
#define DEPTHWISE 1
#define POINTWISE 2
#define FC 3

#define RELU 0
#define HSIGMOID 1
#define HSWISH 2

inline float fixed32_to_float32(int input, int fr_len)
{
    return ((float)input / (float)(1 << fr_len));
}
#endif
