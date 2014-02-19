/*
 * LinkListOperator.h
 *
 *  Created on: Feb 12, 2014
 *      Author: lixin
 */

#include"LinkList.h"

#ifndef LINKLISTOPERATOR_H_
#define LINKLISTOPERATOR_H_

//单链表
LinkList CreateListAndInitByChars();

LinkNode* GetNodeByIndex(LinkList head, int index);

LinkNode* GetNodeByData(LinkList head, DataType data);

void LinkListInsert(LinkList head, int index, DataType data);

void DeleteListByData(LinkList head, DataType data);

void DeleteListByIndex(LinkList head, int index);

//试写一个算法，将头节点指针为a的带头节点的单链表A分解成两个单链表A和B，其中头节点指针分别为a和b，使得A链表中含有原链表A中序号为奇数的
//元素，而B链表中含有原链表中序号为偶数的元素，并保持原来的相对顺序。
void SplistList(LinkList a, LinkList b);

//架设指针为La和Lb的单链表(带头节点)分别为线性表A和B的存储结构，两个链表都是按节点数据递增有序的。
//试写出一个算法.将这两个链表合并成一个有序链表Lc
LinkList MergeLinkList(LinkList La, LinkList Lb);

#endif /* LINKLISTOPERATOR_H_ */
