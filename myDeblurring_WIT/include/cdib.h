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
	int x;//横坐标
	int y;//纵坐标
	int cx;//x轴与上帧偏差
	int cy;//y轴与上帧偏差
	//float conf;
	//int stat;
	float mv;//弹体系下俯仰偏差角
	float mh;//弹体系下航向偏差角
	float mi;
	float mdeltav;//弹体系下俯仰角速度
	float mdeltah;//弹体系下航向角速度
	float mdeltai;

	float iv;//惯性系下俯仰偏差角
	float ih;//惯性系下航向偏差角
	float ii;
	float ideltav;//惯性系下俯仰角速度
	float ideltah;//惯性系下航向角速度
	float ideltai;
/*
	float v;
	float h;
	float i;
	float deltav;//单体的俯仰角速度
	float deltah;//弹体的航向角速度
	float deltai;
*/
}CoorData;

//!receive data from upper machine
typedef struct 
{
	float mv;//俯仰偏差角
	float mh;//航向偏差角
	float mi;//横滚偏差角
	float mdeltav;//俯仰角速度
	float mdeltah;//航向角速度
	float mdeltai;//横滚角速度

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
