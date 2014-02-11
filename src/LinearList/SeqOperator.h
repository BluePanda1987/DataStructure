/*
 * SeqOperator.h
 *
 *  Created on: Feb 11, 2014
 *      Author: lixin
 */

#include "Sequence.h"

#ifndef SECOPERATOR_H_
#define SECOPERATOR_H_

void InitList(SeqList* L);

int ListLength(SeqList* L);

DataType GetNode(SeqList* L, int i);

int LocateNode(SeqList* L , DataType x);

void InsertList(SeqList* L, int i, DataType x);

DataType DeleteList(SeqList* L, int i);

SeqList Converts(SeqList L);

#endif /* OPERATOR_H_ */
