/*
 * upp_6657.h
 *
 *  Created on: 2013-6-5
 *      Author: Administrator
 */

#ifndef UPP_6657_H_
#define UPP_6657_H_

static void LOCAL_delay(int cnt);

int upp_init();


void deblurring_WIT_process();

int upp_start_transmit(
						unsigned char *recv_buffer,
						int receive_length,
						int byte_receive_perline,
						int send_length,
						int byte_send_perline,unsigned char tranflag);

#endif /* UPP_6657_H_ */
