/*
 * SequeStack.c
 *
 *  Created on: Feb 24, 2014
 *      Author: lixin
 */

#include <stdio.h>
#include <stdlib.h>
#include "SequeStack.h"

//置空栈
void InitSequeStack(SequeStack* s) {
	s->Top = -1;
}

//判空栈
int isStackEmpty(SequeStack* s) {

	return -1 == s->Top;
}

//判断栈满
int isStackFull(SequeStack* s)
{
	return StackSize -1 == s->Top;
}

//入栈
void Push(SequeStack* s, DataType x)
{
	if(isStackFull(s))
	{
		puts("Stack is full");
	}
	else
	{
		s->Top ++;
		s->data[s->Top] = x;
	}
}

//退栈
DataType PoP(SequeStack* s)
{
	if(isStackEmpty(s))
	{
		puts("Stack is empty");
		exit(0);
	}

	return s->data[s->Top--];
}

//取栈顶元素
DataType GetTop(SequeStack* s)
{
	if(isStackEmpty(s))
	{
		puts("Stack is empty");
		exit(0);
	}

	return s->data[s->Top];
}


