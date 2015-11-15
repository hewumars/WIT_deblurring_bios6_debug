/*
 * Intc_ISR.c
 *
 *  Created on: 2015-11-15
 *  Author: HeWu
 */
#include <ti/csl/csl_edma3.h>
#include "cdatatype.h"


extern CSL_Edma3ChannelHandle   hChannel_img_rec;
extern CSL_Edma3ParamHandle     hParamBasicImgRec;
extern CSL_Edma3ParamSetup      myParamSetupImgRec;

extern volatile INT32U 	imgCompleted; 					//!The image receive completed flag
extern volatile INT8U  	algrithmCompleted; 				//!The algrithm process completed flag


/*
 * =============================================================================
 *   @func  ImgEDMARecCompleted_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      This is the interrupt service routine for edma receive a frame of image completed interrupt
 *
 *   @return
 *      NONE
 *
 * =============================================================================
*/
void ImgEDMARecCompleted_INT(void)
{
	//���¼���EDMAͨ����ڲ���
    CSL_edma3ParamSetup(hParamBasicImgRec,&myParamSetupImgRec);
    imgCompleted = 1;
}


/*
 * =============================================================================
 *   @func  HandleGPIO7RecImg_INT
 *
 *   @arg
 *      NONE
 *
 *   @desc
 *      DSP��ͼ�жϣ���������Ļ
 *
 *   @return
 *      NONE
 *
 * =============================================================================
 */
void HandleGPIO7RecImg_INT ( void *arg  )
{
	if(algrithmCompleted)//�㷨������ɣ�EDMA��ʼ����ͼ��
	{
		//ʹ����ӦEDMAͨ������ �ٴ����봫��
	    CSL_edma3HwChannelControl(hChannel_img_rec,CSL_EDMA3_CMD_CHANNEL_SET,NULL);
	}

}









