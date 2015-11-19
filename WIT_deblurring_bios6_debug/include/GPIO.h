/******************************************************
* Copyright (c) 2014,华中科技大学图像所1008实验室
* IPRAI All rights reserved.
*
* 文件名称		：	GPIO.h
* 文件标识		：	源文件
* 摘 要		：	适用于DSP C6657
* 当前版本		：	1.0
* 作 者		：	邹旭
* 完成日期		：
*******************************************************
* 修改		：
* 日期		：
******************************************************/
#ifndef _GPIO_H_
#define _GPIO_H_

/* Register	*/
#define	GP_IEN 			0x02320008			/*GPIO Interrupt Per-Bank Enable Register	*/
#define	GP_DIR			0x02320010 			/*GPIO Direction Register					*/
#define	GP_OUT			0x02320014			/*GPIO Output Data Register					*/
#define	GP_SET			0x02320018			/*GPIO Set Data Register					*/
#define	GP_CLR			0x0232001C			/*GPIO Clear Data Register					*/
#define	GP_IN			0x02320020			/*GPIO Input Data Register					*/
#define	GP_SET_RIS		0x02320024			/*GPIO Set Rising Edge Interrupt Register	*/
#define	GP_CLR_RIS		0x02320028			/*GPIO Clear Rising Edge Interrupt Register	*/
#define	GP_SET_FAL		0x0232002C			/*GPIO Set Falling Edge Interrupt Register	*/
#define	GP_CLR_FAL		0x02320030			/*GPIO Clear Falling Edge Interrupt Register*/
/****************************************************************************************/
#define	GPIO_0			0
#define	GPIO_1			1
#define	GPIO_2			2
#define	GPIO_3			3
#define	GPIO_4			4
#define	GPIO_5			5
#define	GPIO_6			6
#define	GPIO_7			7
#define	GPIO_8			8
#define	GPIO_9			9
#define	GPIO_10			10
#define	GPIO_11			11
#define	GPIO_12			12
#define	GPIO_13			13
#define	GPIO_14			14
#define	GPIO_15			15
#define	GPIO_16			16
#define	GPIO_17			17
#define	GPIO_18			18
#define	GPIO_19			19
#define	GPIO_20			20
#define	GPIO_21			21
#define	GPIO_22			22
#define	GPIO_23			23
#define	GPIO_24			24
#define	GPIO_25			25
#define	GPIO_26			26
#define	GPIO_27			27
#define	GPIO_28			28
#define	GPIO_29			29
#define	GPIO_30			30
#define	GPIO_31			31

#define	OUTPUT			0
#define	INPUT			1

#endif
