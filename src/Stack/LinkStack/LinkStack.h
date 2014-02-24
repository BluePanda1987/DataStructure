/*
 * LinkStack.h
 *
 *  Created on: Feb 24, 2014
 *      Author: lixin
 */

#ifndef LINKSTACK_H_
#define LINKSTACK_H_

typedef int DataType;

typedef struct _StackNode
{
	struct _StackNode* next;
	DataType data;
}StackNode;

typedef StackNode* StackLink;

StackLink top;

#endif /* LINKSTACK_H_ */
