/*
 * LinkSequeue.h
 *
 *  Created on: Feb 27, 2014
 *      Author: lixin
 */

#ifndef LINKSEQUEUE_H_
#define LINKSEQUEUE_H_

#define LinkQueueSize 100

typedef int DataType;

typedef struct _LinkQueueNode
{
	struct _LinkQueueNode* next;
	DataType data;

}LinkQueueNode;

typedef struct _LinkQueue
{
	LinkQueueNode* front;
	LinkQueueNode* rear;

}LinkQueue;

void InitLinkQueue(LinkQueue* lq);

void EnterLinkQueue(LinkQueue* lq, DataType x);

DataType DeListQueue(LinkQueue* lq);

int isEmptyLinkQueue(LinkQueue* lq);

DataType GetFrontLinkQueue(LinkQueue* lq);


#endif /* LINKSEQUEUE_H_ */
