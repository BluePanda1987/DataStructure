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

#endif /* LINKLISTOPERATOR_H_ */
