#include "algorithm.h"

void algorithm_test(unsigned char *src, unsigned char *dst)
{
	float xfxy = 0, yfxy = 0, fxy = 0;
	int i, j, x_temp, y_temp;

    for(i = 20; i < ALGORITHM_IMAGE_HEIGHT - 20; ++i)
    {
        for(j = 20; j < ALGORITHM_IMAGE_WIDTH - 20; ++j)
        {
        	if(src[i * ALGORITHM_IMAGE_WIDTH + j] < ALGORITHM_TH)
        	{
        		xfxy += (float)0;
        		yfxy += (float)0;
        		fxy += (float)0;
        	}
        	else
        	{
        		xfxy += (float)(j * src[i * ALGORITHM_IMAGE_WIDTH + j]);
        		yfxy += (float)(i * src[i * ALGORITHM_IMAGE_WIDTH + j]);
        		fxy += (float)src[i * ALGORITHM_IMAGE_WIDTH + j];
        	}
        }
    }

	// THE CENTER OF ITS CENTROID
	fxy = (fxy == 0) ? 1 : fxy;
	x_temp = (int)((float)xfxy / (float)fxy);
	y_temp = (int)((float)yfxy / (float)fxy);

	for(i = -5; i < 6; ++i)
	{
		if(y_temp + i >= 0 && y_temp + i < ALGORITHM_IMAGE_HEIGHT)
			dst[(y_temp + i) * ALGORITHM_IMAGE_WIDTH + x_temp] = 0;

		if(y_temp + i >= 0 && y_temp + i < ALGORITHM_IMAGE_HEIGHT && (x_temp + 1) < ALGORITHM_IMAGE_WIDTH)
			dst[(y_temp + i) * ALGORITHM_IMAGE_WIDTH + x_temp + 1] = 0;

		if(y_temp + i >= 0 && y_temp + i < ALGORITHM_IMAGE_HEIGHT && (x_temp - 1) > 0)
			dst[(y_temp + i) * ALGORITHM_IMAGE_WIDTH + x_temp - 1] = 0;

		if(x_temp + i >= 0 && x_temp + i < ALGORITHM_IMAGE_WIDTH)
			dst[y_temp * ALGORITHM_IMAGE_WIDTH + (x_temp + i)] = 0;

		if(x_temp + i >= 0 && x_temp + i < ALGORITHM_IMAGE_WIDTH && (y_temp + 1) < ALGORITHM_IMAGE_HEIGHT)
			dst[(y_temp + 1) * ALGORITHM_IMAGE_WIDTH + (x_temp + i)] = 0;

		if(x_temp + i >= 0 && x_temp + i < ALGORITHM_IMAGE_WIDTH && (y_temp - 1) > 0)
			dst[y_temp * ALGORITHM_IMAGE_WIDTH + (x_temp + i)] = 0;
	}
}

void PushQueue(Queue *queue, int data)
{
	QNode *p = NULL;
	p = (QNode*)malloc(sizeof(QNode));
	p->data = data;
	if(queue->first == NULL)
	{
		queue->first = p;
		queue->last = p;
		p->next = NULL;
	}
	else
	{
		p->next = NULL;
		queue->last->next = p;
		queue->last = p;
	}
}

int PopQueue(Queue *queue)
{
	QNode *p = NULL;
	int data;
	if(queue->first == NULL)
	{
		return -1;
	}
	p = queue->first;
	data = p->data;
	if(queue->first->next == NULL)
	{
		queue->first = NULL;
		queue->last = NULL;
	}
	else
	{
		queue->first = p->next;
	}
	free(p);
	return data;
}

//搜索并标记当前像素的8邻域
void SearchNeighbor(unsigned char *bitmap, int width, int height, int *labelmap, int labelIndex, int pixelIndex, Queue *queue)
{
	int searchIndex, i, length;
	labelmap[pixelIndex] = labelIndex;
	length = width * height;
	for(i = 0;i < 8;i++)
	{
		searchIndex = pixelIndex + NeighborDirection[i][0] * width + NeighborDirection[i][1];
		if(searchIndex > 0 && searchIndex < length &&
			bitmap[searchIndex] == 255 && labelmap[searchIndex] == 0)
		{
			labelmap[searchIndex] = labelIndex;
			PushQueue(queue, searchIndex);
		}
	}
}

int ConnectedComponentLabeling(unsigned char *bitmap, int width, int height, int *labelmap)
{
	int cx, cy, index, popIndex, labelIndex = 0;
	Queue *queue = NULL;
	queue = (Queue*)malloc(sizeof(Queue));
	queue->first = NULL;
    	queue->last = NULL;
	memset(labelmap, 0, width * height);
	for(cy = 1; cy < height - 1; cy++)
	{
		for(cx = 1; cx < width - 1; cx++)
		{
			index = cy * width + cx;
			if(bitmap[index] == 255 && labelmap[index] == 0)
			{
				labelIndex++;
				SearchNeighbor(bitmap, width, height, labelmap, labelIndex, index, queue);

				popIndex = PopQueue(queue);
				while(popIndex > -1)
				{
					SearchNeighbor(bitmap, width, height, labelmap, labelIndex, popIndex, queue);
					popIndex = PopQueue(queue);
				}
			}
		}
	}
	free(queue);
	return labelIndex;
}

void restrainFilter(unsigned char *src, unsigned char *dst)
{
	unsigned int restrain[ALGORITHM_IMAGE_SIZE] = {0};
	int i = 0, j = 0, p = 0, q = 0;
	int local_max = 0, local_sum = 0, current_co = 0, global_max = 0, global_min = 0xffff;
	for(i = 1; i < ALGORITHM_IMAGE_HEIGHT - 1; ++i)
	{
		for(j = 1; j < ALGORITHM_IMAGE_WIDTH - 1; ++j)
		{
			local_sum = 0;
			local_max = 0;
			for(p = -1; p < 2; ++p)
			{
				for(q = -1; q < 2; ++q)
				{
					int currentValue = src[(i + p) * ALGORITHM_IMAGE_WIDTH + (j + q)];
					local_sum += currentValue;
					if(currentValue > local_max)
					{
						local_max = currentValue;
					}
				}
			}
			current_co = i * ALGORITHM_IMAGE_WIDTH + j;
			restrain[current_co] = src[current_co] * (local_max - local_sum / 9);
			if(restrain[current_co] > global_max)
			{
				global_max = restrain[current_co];
			}
			if(restrain[current_co] < global_min)
			{
				global_min = restrain[current_co];
			}
		}
	}
	for(i = 1; i < ALGORITHM_IMAGE_HEIGHT - 1; ++i)
	{
		for(j = 1; j < ALGORITHM_IMAGE_WIDTH - 1; ++j)
		{
			current_co = i * ALGORITHM_IMAGE_WIDTH + j;
			dst[current_co] = (restrain[current_co] - global_min) * 255 / (global_max - global_min);
		}
	}
}
