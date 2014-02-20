#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct _LinkNode
{
	struct _LinkNode* next;
	DataType data;

}LinkNode;

typedef LinkNode* LinkList;


//例2.5 试写一个算法，将头节点指针为a的带头节点的单链表A分解成两个单链表A和B，其中头节点指针分别为a和b，使得A链表中含有原链表A中序号为奇数的
//元素，而B链表中含有原链表中序号为偶数的元素，并保持原来的相对顺序。
void SplistList(LinkList a, LinkList b);

//例2.6 架设指针为La和Lb的单链表(带头节点)分别为线性表A和B的存储结构，两个链表都是按节点数据递增有序的。
//试写出一个算法.将这两个链表合并成一个有序链表Lc
LinkList MergeLinkList(LinkList La, LinkList Lb);


void SplistList(LinkList a, LinkList b)
{
	if(a == NULL || b== NULL)
	{
		puts("input arguments error!");
		return;
	}

	LinkNode* moveNodeA = a;
	LinkNode* moveNodeB = b;

	int moveIndex = 1;

	while(a != NULL )
	{
		if(moveIndex%2 == 0)
		{
			moveNodeA = moveNodeA->next;
		}
		else
		{
			moveNodeB = moveNodeA->next;

			if(moveNodeB != NULL)
			{
				moveNodeA = moveNodeB->next;
			}
		}
	}
}


LinkList MergeLinkList(LinkList La, LinkList Lb)
{
	if(La == NULL || La == NULL)
	{
		puts("input arguments error!");
		return NULL;
	}

	LinkList mergeLink = La;
	LinkNode* previousMoveNode = La;
	LinkNode* mvoeNodeA = La->next;
	LinkNode* moveNodeB = Lb->next;

	while(mvoeNodeA != NULL && moveNodeB != NULL)
	{
		if(mvoeNodeA->data < moveNodeB->data)
		{
			mvoeNodeA = mvoeNodeA->next;
		}
		else
		{
			previousMoveNode->next = moveNodeB;
			moveNodeB->next = mvoeNodeA;

			moveNodeB = moveNodeB->next;
		}

		previousMoveNode = previousMoveNode->next;
	}

	moveNodeB->next == NULL ? (mvoeNodeA->next = moveNodeB) : (mvoeNodeA->next = NULL);

	free(Lb);
	Lb = NULL;

	return mergeLink;
}

