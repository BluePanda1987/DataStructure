/*
 * CycleLinkQueue.h
 *
 *  Created on: Feb 27, 2014
 *      Author: lixin
 */

#ifndef CYCLELINKQUEUE_H_
#define CYCLELINKQUEUE_H_

#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct  _CycelLinkQueueNode
{
	struct _CycelLinkQueueNode* next;
	DataType data;

}CycelLinkQueueNode;

typedef struct
{
	CycelLinkQueueNode* rear;

}CycleLinkQueue;


void InitCycleLinkQueue(CycleLinkQueue* clq)
{
	if(!clq)
	{
		puts("input arguments error.");
		exit(0);
	}
	clq->rear = (CycelLinkQueueNode*)malloc(sizeof(CycelLinkQueueNode));
	clq->rear->next = clq->rear;
}

int isCycleLinkQueueEmpty(CycleLinkQueue* clq)
{
	if(!clq)
	{
		puts("input arguments error.");
		exit(0);
	}

	return clq == clq->rear->next;
}

void EnterCycleLinkQueue(CycleLinkQueue* clq, DataType x)
{
	CycelLinkQueueNode* cycelNode = (CycelLinkQueueNode*) malloc(sizeof(CycelLinkQueueNode));
	cycelNode->next = clq->rear->next;
	cycelNode->data = x;

	clq->rear->next = cycelNode;
	clq->rear = cycelNode;
}

DataType DeCycleLinkQueue(CycleLinkQueue* clq)
{
	if(isCycleLinkQueueEmpty(clq))
	{
		putt("cycle is empty.");
		exit(0);
	}

	CycelLinkQueueNode* delHead = clq.rear.next;
	DataType delData = delHead->data;

	clq->rear->next = delHead->next;
	free(delHead);
	delHead = NULL;

	return delData;
}

#endif /* CYCLELINKQUEUE_H_ */
