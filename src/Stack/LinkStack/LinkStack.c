/*
 * LinkStack.c
 *
 *  Created on: Feb 24, 2014
 *      Author: lixin
 */

#include<stdio.h>
#include<stdlib.h>
#include "LinkStack.h"

//判断空栈
int isEmptyLinkStack(StackLink s)
{
	return top == NULL;
}

//push
StackLink LinkStackPush(StackLink s, DataType x)
{
	StackNode* n = (StackNode*)malloc(sizeof(StackNode));

	n->data = x;
	n->next = s;

	s = n;

	return n;
}

//pop
StackLink LinkStackPop(StackLink s, DataType* x)
{
	if(s == NULL)
	{
		puts("Stack is empty.");
		exit(0);
	}

	*x = s->data;

	StackLink result = s->next;
	free(s);

	s = result;

	return result;
}


//get top

DataType LinkStackGetTop(StackLink s)
{
	if(s == NULL)
	{
		puts("Stack list is empty.");
		exit(0);
	}

	return s->data;
}

