/*
 * LinkSequeue.c
 *
 *  Created on: Feb 27, 2014
 *      Author: lixin
 */
#include "LinkSequeue.h"
#include<stdio.h>
#include<stdlib.h>

void InitLinkQueue(LinkQueue* lq)
{
	if(!lq)
	{
		puts("input arguments is null");
		exit(0);
	}
	lq->front= lq->rear = (LinkQueueNode*) malloc(sizeof(LinkQueueNode));
	lq->front->next = NULL;
}

void EnterLinkQueue(LinkQueue* lq, DataType x)
{
	if(!lq)
	{
		puts("input arguments is null");
		exit(0);
	}

	LinkQueueNode* enterLinkQueueNode = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	enterLinkQueueNode->data = x;
	enterLinkQueueNode->next = NULL;

	lq->rear->next = enterLinkQueueNode;
	lq->rear = enterLinkQueueNode;

}

DataType DeListQueue(LinkQueue* lq)
{
	if(isEmptyLinkQueue(lq))
	{
		puts("input arguments is null");
		exit(0);
	}

	DataType delData = lq->front->data;
	LinkQueueNode* nextFrontNode = lq->front->next;

	free(lq->front);
	lq->front = nextFrontNode;

	return delData;
}

int isEmptyLinkQueue(LinkQueue* lq)
{
	if(!lq)
	{
		puts("input arguments is null");
		exit(0);
	}

	return lq->front == lq->rear;
}

DataType GetFrontLinkQueue(LinkQueue* lq)
{
	if(!lq)
	{
		puts("input arguments is null");
		exit(0);
	}

	return lq->front->data;
}
