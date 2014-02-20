/*
 * DoubleListPractice.c
 *
 *  Created on: Feb 21, 2014
 *      Author: lixin
 */

/*假设有一个头节点为head的循环双向链表，其节点类型为三个域：prior、data、next 。
 * prior 为前驱现值为NULL，next为后继，data为指针域。试写出一算法将当前链表变成真正的双向循环链表*/

typedef int DataType;

typedef struct _DoubleLinkNode
{
	struct _DoubleLinkNode* prior;
	struct _DoubleLinkNode* next;
	DataType data;
}DoubleLinkNode;


typedef DoubleLinkNode* DoubleListLink;


void fixDoubleLink(DoubleLinkNode* head)
{
	DoubleLinkNode* previous = head;
	DoubleLinkNode* moveNode = head->next;

	while(head != moveNode)
	{
		moveNode->prior = previous;

		previous = previous->next;
		moveNode = moveNode->next;
	}

	moveNode->prior = previous;
}
