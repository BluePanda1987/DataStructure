/*
 * LinkListOperator.c
 *
 *  Created on: Feb 12, 2014
 *      Author: lixin
 */
#include"LinkListOperator.h"
#include<stdio.h>
#include<stdlib.h>

LinkList CreateListAndInitByChars()
{
	LinkList charsList = (LinkNode*) malloc (sizeof(LinkNode));

	LinkNode* listHead = charsList;
	listHead->data = 0;

	LinkNode* tempNode = charsList;

	while(tempNode->data != '\n')
	{
		tempNode->next = (LinkNode*) malloc (sizeof(LinkNode));
		tempNode = tempNode->next;

		int tempData = getchar();
		tempNode->data = tempData;
	}

	tempNode->next = NULL;

	return listHead;
}
