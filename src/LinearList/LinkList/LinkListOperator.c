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

LinkNode* GetNodeByIndex(LinkList head, int index)
{
	if(head == NULL || index<0)
	{
		puts("error: in put arguments error !");
	}

	LinkNode* tempNode = head;
	LinkNode* resultNode = NULL;
	int tempIndex = 0;

	while(tempNode != NULL)
	{
		if(tempIndex == index)
		{
			resultNode = tempNode;
			break;
		}

		tempNode = tempNode->next;
		tempIndex++;
	}

	return resultNode;
}

LinkNode* GetNodeByData(LinkList head, DataType data)
{
	LinkNode* resultNode = NULL;
	LinkNode* tempNode = head;

	while(tempNode != NULL)
	{
		if(tempNode->data == data)
		{
			resultNode = tempNode;
			break;
		}

		tempNode = tempNode->next;
	}

	return resultNode;
}

void LinkListInsert(LinkList head, int index, DataType data)
{
	if(head == NULL)
	{
		puts("in put arguments error!");
	}
	LinkNode* moveNode = head;
	int tempIndex = 0;

	while(moveNode != NULL)
	{
		if(tempIndex == index)
		{
			LinkNode* insertNode = (LinkNode*) malloc(sizeof(LinkNode));
			insertNode->data = data;

			insertNode->next = moveNode->next;
			moveNode->next = insertNode;

		}
	}
}

void DeleteListByData(LinkList head, DataType data)
{
	if(head == NULL)
	{
		puts("in put arguments error!");
	}

	LinkNode* moveNode = head;
	LinkNode* previousNode = NULL;

	while(moveNode != NULL)
	{
		if(moveNode->data == data)
		{
			if(previousNode == NULL)
			{
				free(moveNode);
				break;
			}
			else
			{
				previousNode->next = moveNode->next;
				free(moveNode);
				break;
			}
		}

		previousNode = moveNode;
		moveNode = moveNode->next;
	}
}

void DeleteListByIndex(LinkList head, int index)
{
	if(head == NULL || index<0)
	{
		puts("in put arguments error!");
	}

	LinkNode* moveNode = head;
	LinkNode* previousNode = NULL;

	int tempIndex = 0;

	while(moveNode != NULL)
	{
		if(tempIndex == index)
		{
			if(previousNode == NULL)
			{
				free(moveNode);
			}
			else
			{
				previousNode->next = moveNode->next;
				free(moveNode);
			}

			break;
		}
	}

	previousNode = moveNode;
	moveNode = moveNode->next;

}


