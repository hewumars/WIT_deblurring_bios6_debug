/*
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/ 
 * 
 *  Redistribution and use in source and binary forms, with or without 
 *  modification, are permitted provided that the following conditions 
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright 
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the 
 *    documentation and/or other materials provided with the   
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef BMP_UTILS_H
#define BMP_UTILS_H

#include <stdint.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

/****************************************************************************/
/*                                     位图文件头结构体                                                 */
/****************************************************************************/
#ifdef _HOST_BUILD
#pragma pack(1)
#endif

typedef struct bmpfile_signature {
  uint8_t signature[2];      /* Signature - 'BM' */
} bmpfile_signature_t;

typedef struct bmpfile_header {
  uint32_t file_size;       /* BMP图像文件的大小 */
  uint16_t reserved1;
  uint16_t reserved2;
  uint32_t bitmap_offset;   /* BMP图像数据的偏移地址 */
} bmpfile_header_t;

typedef struct bmpfile_dib_header {
  uint32_t header_size;    /* 本结构的大小 */
  int32_t  image_width;        /* 位图的宽度 */
  int32_t  image_height;       /* 位图的高度 */
  uint16_t number_of_planes;      /* Number of planes */
  uint16_t bits_per_pixel;       /* 每个像素的位数 */
  uint32_t compression_type;/* 压缩类型 */
  uint32_t image_size;   /* 表示位图数据区域的大小以字节为单位 */
  int32_t  horizontal_resolution;         /* 水平分辨率，单位像素/m */
  int32_t  vertical_resolution;         /* 垂直分辨率，单位像素/m */
  uint32_t number_of_colors;      /* BMP图像使用的颜色，0表示使用全部颜色，对于256色位图来说，此值为100h=256 */
  uint32_t important_color_count;   /* Important color count */
} bmpfile_dib_header_t;

typedef struct bmp_header {
	bmpfile_signature_t  signature;
	bmpfile_header_t     file;
	bmpfile_dib_header_t dib;
} bmp_header_t;

/****************************************************************************/
/*                                   位图RGB调色板入口结构体                                      */
/****************************************************************************/
typedef struct {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
  uint8_t reserved;
} bmp_color_table_t;

#ifdef _HOST_BUILD
#pragma pack()
#endif

typedef enum {
  BMP_RGB = 0,
  BMP_RLE8,
  BMP_RLE4,
  BMP_BITFIELDS,
  BMP_JPEG,
  BMP_PNG
} bmp_compression_method_e;

/* 原始图像数据，需要解码
 */

typedef struct raw_image_data {
	uint8_t * data;
	uint32_t  length;
} raw_image_data_t;
/*****************************************************************************/
/**
 *      Created on: 2015-11-9
 *      Author: HeWu
 *      这个函数用于从文件系统中读取文件的元素数据，
 *      参数说明：const char *_fname文件名
 *                      const char *_mode读写模式
 *      返回类型：raw_image_data_t（整个原始文件的字节数据，以及字节长度）
 * */
/*****************************************************************************/
extern raw_image_data_t get_raw_image_data_from_file(const char *_fname, const char *_mode);

/*****************************************************************************/
/**
 *      Created on: 2015-11-9
 *      Author: HeWu
 *      这个函数用于从raw data转换到bmp结构体，
 *      参数说明：raw_image_data_t * p_input_image图像原始字节数据
 *                      unsigned char * p_output_pixel_array图像的像素信息，用于后续处理
 *            返回：raw_image_data_t结构体
 * */
/*****************************************************************************/
extern int raw_data_cvt_bmp_pixels(raw_image_data_t * p_input_image,unsigned char * p_output_pixel_array);

/*****************************************************************************/
/* *
 * 函数功能：这个函数BMP文件中读取文件头信息。
 * 说明：函数对文件做了一些初步的检查。
 *          如果读取文件成功返回0；
 *          如果读取文件失败或检查失败，返回负数。
 */
/*****************************************************************************/
extern int bmp_read_header (raw_image_data_t * image, bmp_header_t * hdr);

/*****************************************************************************/
/* *
 * 函数说明：读取调色板。这个函数用的比较少，调色板是单色、16色和256色图像文件特有。
 *
 */
/*****************************************************************************/
extern int bmp_read_colormap (raw_image_data_t * image, bmp_header_t * hdr,
									bmp_color_table_t * color_table);

/*****************************************************************************/
/* *
 * 函数功能：读取图像（像素值），需要计算像素占用字节数。
 * 参数说明：raw_image_data_t * image,待解码数据
 *                 bmp_header_t * hdr, 文件头
 *                 uint8_t * pixel_array_rgb，用于返回的像素值指针，后续图像算法就是对它进行了
 */
extern int bmp_read_image (raw_image_data_t * image, bmp_header_t * hdr, uint8_t * pixel_array_rgb);

/*****************************************************************************/
/* *
 * 函数功能：通过BMP图像，创建并将像素值保存为灰度图像。
 * 参数说明：raw_image_data_t * image,保存结果
 *                 uint8_t * pixel_array,像素值指针
 */
/*****************************************************************************/
extern int bmp_write_gray_bmpfile (raw_image_data_t * image, uint8_t * pixel_array,
		                           uint32_t width, uint32_t height);

/*****************************************************************************/
/*
 * 函数功能：获取灰度BMP图的文件大小
 */
/*****************************************************************************/
extern uint32_t bmp_get_gray_bmpfile_size (uint32_t width, uint32_t height);

#endif /*BMP_UTILS_H*/
