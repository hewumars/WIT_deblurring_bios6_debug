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
/*                                     λͼ�ļ�ͷ�ṹ��                                                 */
/****************************************************************************/
#ifdef _HOST_BUILD
#pragma pack(1)
#endif

typedef struct bmpfile_signature {
  uint8_t signature[2];      /* Signature - 'BM' */
} bmpfile_signature_t;

typedef struct bmpfile_header {
  uint32_t file_size;       /* BMPͼ���ļ��Ĵ�С */
  uint16_t reserved1;
  uint16_t reserved2;
  uint32_t bitmap_offset;   /* BMPͼ�����ݵ�ƫ�Ƶ�ַ */
} bmpfile_header_t;

typedef struct bmpfile_dib_header {
  uint32_t header_size;    /* ���ṹ�Ĵ�С */
  int32_t  image_width;        /* λͼ�Ŀ�� */
  int32_t  image_height;       /* λͼ�ĸ߶� */
  uint16_t number_of_planes;      /* Number of planes */
  uint16_t bits_per_pixel;       /* ÿ�����ص�λ�� */
  uint32_t compression_type;/* ѹ������ */
  uint32_t image_size;   /* ��ʾλͼ��������Ĵ�С���ֽ�Ϊ��λ */
  int32_t  horizontal_resolution;         /* ˮƽ�ֱ��ʣ���λ����/m */
  int32_t  vertical_resolution;         /* ��ֱ�ֱ��ʣ���λ����/m */
  uint32_t number_of_colors;      /* BMPͼ��ʹ�õ���ɫ��0��ʾʹ��ȫ����ɫ������256ɫλͼ��˵����ֵΪ100h=256 */
  uint32_t important_color_count;   /* Important color count */
} bmpfile_dib_header_t;

typedef struct bmp_header {
	bmpfile_signature_t  signature;
	bmpfile_header_t     file;
	bmpfile_dib_header_t dib;
} bmp_header_t;

/****************************************************************************/
/*                                   λͼRGB��ɫ����ڽṹ��                                      */
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

/* ԭʼͼ�����ݣ���Ҫ����
 */

typedef struct raw_image_data {
	uint8_t * data;
	uint32_t  length;
} raw_image_data_t;
/*****************************************************************************/
/**
 *      Created on: 2015-11-9
 *      Author: HeWu
 *      ����������ڴ��ļ�ϵͳ�ж�ȡ�ļ���Ԫ�����ݣ�
 *      ����˵����const char *_fname�ļ���
 *                      const char *_mode��дģʽ
 *      �������ͣ�raw_image_data_t������ԭʼ�ļ����ֽ����ݣ��Լ��ֽڳ��ȣ�
 * */
/*****************************************************************************/
extern raw_image_data_t get_raw_image_data_from_file(const char *_fname, const char *_mode);

/*****************************************************************************/
/**
 *      Created on: 2015-11-9
 *      Author: HeWu
 *      ����������ڴ�raw dataת����bmp�ṹ�壬
 *      ����˵����raw_image_data_t * p_input_imageͼ��ԭʼ�ֽ�����
 *                      unsigned char * p_output_pixel_arrayͼ���������Ϣ�����ں�������
 *            ���أ�raw_image_data_t�ṹ��
 * */
/*****************************************************************************/
extern int raw_data_cvt_bmp_pixels(raw_image_data_t * p_input_image,unsigned char * p_output_pixel_array);

/*****************************************************************************/
/* *
 * �������ܣ��������BMP�ļ��ж�ȡ�ļ�ͷ��Ϣ��
 * ˵�����������ļ�����һЩ�����ļ�顣
 *          �����ȡ�ļ��ɹ�����0��
 *          �����ȡ�ļ�ʧ�ܻ���ʧ�ܣ����ظ�����
 */
/*****************************************************************************/
extern int bmp_read_header (raw_image_data_t * image, bmp_header_t * hdr);

/*****************************************************************************/
/* *
 * ����˵������ȡ��ɫ�塣��������õıȽ��٣���ɫ���ǵ�ɫ��16ɫ��256ɫͼ���ļ����С�
 *
 */
/*****************************************************************************/
extern int bmp_read_colormap (raw_image_data_t * image, bmp_header_t * hdr,
									bmp_color_table_t * color_table);

/*****************************************************************************/
/* *
 * �������ܣ���ȡͼ������ֵ������Ҫ��������ռ���ֽ�����
 * ����˵����raw_image_data_t * image,����������
 *                 bmp_header_t * hdr, �ļ�ͷ
 *                 uint8_t * pixel_array_rgb�����ڷ��ص�����ֵָ�룬����ͼ���㷨���Ƕ���������
 */
extern int bmp_read_image (raw_image_data_t * image, bmp_header_t * hdr, uint8_t * pixel_array_rgb);

/*****************************************************************************/
/* *
 * �������ܣ�ͨ��BMPͼ�񣬴�����������ֵ����Ϊ�Ҷ�ͼ��
 * ����˵����raw_image_data_t * image,������
 *                 uint8_t * pixel_array,����ֵָ��
 */
/*****************************************************************************/
extern int bmp_write_gray_bmpfile (raw_image_data_t * image, uint8_t * pixel_array,
		                           uint32_t width, uint32_t height);

/*****************************************************************************/
/*
 * �������ܣ���ȡ�Ҷ�BMPͼ���ļ���С
 */
/*****************************************************************************/
extern uint32_t bmp_get_gray_bmpfile_size (uint32_t width, uint32_t height);

#endif /*BMP_UTILS_H*/
