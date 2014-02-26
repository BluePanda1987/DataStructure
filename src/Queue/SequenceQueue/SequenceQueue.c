/*
 * SequenceQueue.c
 *
 *  Created on: Feb 27, 2014
 *      Author: lixin
 */

#include "SequenceQueue.h"
#include<stdio.h>
#include<stdlib.h>

void InitSequenceQueue(SequenceQueue* q)
{
	if(!q)
	{
		puts("input arguments error!");
	}
	else
	{
		q->rear = q->front = 0;
	}
}

int isEmptySequenceQueue(SequenceQueue*q)
{
	if(!q)
	{
		puts("input arguments error");
		exit(0);
	}
	return q->rear == q->front;
}

int isFullSequenceQueue(SequenceQueue* q)
{
	if(!q)
	{
		puts("input arguments error");
		exit(0);
	}
	//注意
	return (q->rear +1) % QueueSize == q->front;
}

void EnterSequenceQueue(SequenceQueue* q, DataType x)
{
	if(!isFullSequenceQueue(q))
	{
		//q->data[++q->rear] = x;

		q->data[q->rear] = x;
		q->rear = (q->rear +1) % QueueSize;
	}
}

DataType DeSequenceQueue(SequenceQueue*q)
{
	if(isEmptySequenceQueue(q))
	{
		puts("sequence queue is empty.");
		exit(0);
	}

	DataType temp = q->data[q->front];
	q->front = (q->front +1) % QueueSize;
	 return temp;
}

DataType GetSequenceQueueFront(SequenceQueue*q)
{
	if(isEmptySequenceQueue(q))
	{
		puts("sequence queue is empty.");
		exit(0);
	}

	 return q->data[q->front];
}
