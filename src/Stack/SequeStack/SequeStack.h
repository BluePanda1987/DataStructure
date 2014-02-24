/*
 * SequeStack.h
 *
 *  Created on: Feb 24, 2014
 *      Author: lixin
 */

#ifndef SEQUESTACK_H_
#define SEQUESTACK_H_

#define StackSize 100

typedef int DataType;

typedef struct _SequeStack
{
	DataType data[StackSize];
	int Top;

}SequeStack;

#endif /* SEQUESTACK_H_ */
