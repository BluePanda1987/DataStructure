/*
 * CircularListPractice.c
 *
 *  Created on: Feb 20, 2014
 *      Author: lixin
 */

//例2.7 已知有一个节点数据域为整型的，且按从大到小顺序排列的头节点指针为L的非空单循环链表，
//试写出一算法插入一个节点(其数据为x)至循环链表的适当位置使链表保持有序性
#include<stdio.h>
#include<stdlib.h>

typedef int DataType;

typedef struct _LinkNode {
	struct _LinkNode* next;
	DataType data;
} LinkNodeT;

typedef LinkNodeT* LinkList;

void InsertCircularList(LinkList L, int X) {
	if (L == NULL) {
		puts("input arguments error!");
	}

	LinkNodeT* listHead = L;
	LinkNodeT* moveNode = L;
	LinkNodeT* nextNode = L->next;

	LinkNodeT* insertNode = (LinkNodeT*) malloc(sizeof(LinkNodeT));
	insertNode->data = X;

	while (nextNode != listHead && nextNode->data > X) {
		moveNode = moveNode->next;
		nextNode = nextNode->next;
	}

	insertNode->next = nextNode;
	moveNode->next = insertNode;

}

