#ifndef DW_ALGORITHM_H_
#define DW_ALGORITHM_H_

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define ALGORITHM_IMAGE_WIDTH	128
#define ALGORITHM_IMAGE_HEIGHT	128
#define ALGORITHM_IMAGE_SIZE	ALGORITHM_IMAGE_WIDTH * ALGORITHM_IMAGE_HEIGHT
#define ALGORITHM_TH			200
#define SEARCH_R				40

typedef struct QNode
{
	int data;
	struct QNode *next;
}QNode;

typedef struct Queue
{
	struct QNode* first;
	struct QNode* last;
}Queue;

typedef struct _targetInfo{
/*
 * targetStatus:	0 		for fail or lose frame
 * 					1 		for success
 */
	unsigned short targetStatus;
	unsigned short x;
	unsigned short y;
}targetInfo;

static int NeighborDirection[8][2] = {{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1}};

void algorithm_test(unsigned char *src, unsigned char *dst);
void PushQueue(Queue *queue, int data);
int PopQueue(Queue *queue);
void SearchNeighbor(unsigned char *bitmap, int width, int height, int *labelmap, int labelIndex, int pixelIndex, Queue *queue);
int ConnectedComponentLabeling(unsigned char *bitmap, int width, int height, int *labelmap);
void restrainFilter(unsigned char *src, unsigned char *dst);

#endif
