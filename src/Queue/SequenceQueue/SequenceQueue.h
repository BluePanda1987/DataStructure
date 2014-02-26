/*
 * SequenceQueue.h
 *
 *  Created on: Feb 27, 2014
 *      Author: lixin
 */

#ifndef SEQUENCEQUEUE_H_
#define SEQUENCEQUEUE_H_

#define QueueSize 100

typedef int DataType;

typedef struct _SequenceQueue
{
	DataType data[QueueSize];
	int front, rear;

}SequenceQueue;


//cycle ['saɪk(ə)l] queue[kjuː]
void InitSequenceQueue(SequenceQueue* q);

int isEmptySequenceQueue(SequenceQueue*q);

int isFullSequenceQueue(SequenceQueue* q);

void EnterSequenceQueue(SequenceQueue* q, DataType x);

DataType DeSequenceQueue(SequenceQueue*q);

DataType GetSequenceQueueFront(SequenceQueue*q);

#endif /* SEQUENCEQUEUE_H_ */
