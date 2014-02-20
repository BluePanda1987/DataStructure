/*
 * DoubleLinkListOperator.c
 *
 *  Created on: Feb 21, 2014
 *      Author: lixin
 */
#include<stdio.h>
#include<stdlib.h>
#include"DoubleLinkList.h"

void DInsertList(DoubleLinkNode* p, DataType x)
{
	if(p != NULL ||p->next != NULL || p->previous != NULL)
	{
		puts("input arguments error!");
		return;
	}
	DoubleLinkNode* insertNode = (DoubleLinkNode*) malloc(sizeof(DoubleLinkNode));
	insertNode->data = x;

	insertNode->next = p->next;
	insertNode->previous = p;
	p->next = insertNode;
}

void DDeleteList(DoubleLinkNode* p)
{
	if(NULL != p || NULL != p->previous || NULL != p->next)
	{
		puts("input arguments error!");
		return;
	}

	DoubleLinkNode* nextNode = p->next;
	DoubleLinkNode* previousNode = p->previous;


	nextNode->previous = previousNode;
	previousNode->next = nextNode;

	free(p);
	p = NULL;


}


