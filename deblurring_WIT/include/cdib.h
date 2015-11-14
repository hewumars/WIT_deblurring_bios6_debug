#ifndef _CDIBH_
#define _CDIBH_

#include "../include/cdatatype.h"

//!gesture parameter
typedef struct tagflyparameter {
	unsigned short gaodu;
	unsigned short hangxiangjiao;
	unsigned short fuyangjiao;
//	int framenumber;
}flyparameter;

//!coordinate position
typedef struct tagpoint
{
	int pointx;
	int pointy;
	int /***/ cor;
} point0;

//!rectangle's height and width
typedef struct 
{
	int rectx;
	int recty;
}rectrc;

//!rectangle's coordinate
typedef struct {
	int left;
	int top;
	int right;
	int bottom;
}RECT_0;

//!target position information
typedef struct tagdata
{
	int x;//������
	int y;//������
	int cx;//x������֡ƫ��
	int cy;//y������֡ƫ��
	//float conf;
	//int stat;
	float mv;//����ϵ�¸���ƫ���
	float mh;//����ϵ�º���ƫ���
	float mi;
	float mdeltav;//����ϵ�¸������ٶ�
	float mdeltah;//����ϵ�º�����ٶ�
	float mdeltai;

	float iv;//����ϵ�¸���ƫ���
	float ih;//����ϵ�º���ƫ���
	float ii;
	float ideltav;//����ϵ�¸������ٶ�
	float ideltah;//����ϵ�º�����ٶ�
	float ideltai;
/*
	float v;
	float h;
	float i;
	float deltav;//����ĸ������ٶ�
	float deltah;//����ĺ�����ٶ�
	float deltai;
*/
}CoorData;

//!receive data from upper machine
typedef struct 
{
	float mv;//����ƫ���
	float mh;//����ƫ���
	float mi;//���ƫ���
	float mdeltav;//�������ٶ�
	float mdeltah;//������ٶ�
	float mdeltai;//������ٶ�

}RecData;

//void *fspace_1d(int,int);
//void **fspace_2d(int,int,int);
//void ffree_2d(void **p,int row);
//int get_info(char p[],int *row,int *col);
//void get_data(char p[],INT8U *imgdata,int row,int col);
//void save_file(char *,INT8U  *,int,int);
//void get_flypara(unsigned char **,flyparameter *);
//void GetFlyPara(char p[],unsigned short *flyarray);
#endif
