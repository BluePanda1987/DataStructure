/*
 * SecOperator.c
 *
 *  Created on: Feb 11, 2014
 *      Author: lixin
 */
#include"SeqOperator.h"

#include<stdio.h>
#include<string.h>

void InitList(SeqList* L)
{
	memset(L->data, 0, sizeof(DataType)*ListSize);
	L->length = 0;
}

int ListLength(SeqList* L)
{
	return L->length;
}

DataType GetNode(SeqList* L, int i)
{
	return L->data[i];
}

int LocateNode(SeqList* L , DataType x)
{

	int nLocated = -1;

	for(int i=0; i<L->length; i++)
	{
		if(L->data[i] == x)
		{
			nLocated = i+1;
			break;
		}
	}

	return nLocated;
}

void InsertList(SeqList* L, int i, DataType x)
{

	for(int j= L->length; j>i-1; j--)
	{
		L->data[j] = L->data[j-1];
	}

	L->data[i-1] = x;

}

DataType DeleteList(SeqList* L, int i)
{
	DataType x = L->data[i];

	for(int j=i-1; j<L->length-1; j++ )
	{
		L[j] = L[j+1];
	}

	L->length--;

	L->data[L->length] = 0;

	return x;
}


SeqList Converts(SeqList L)
{
	int midLength = L.length/2;

	DataType tempData = 0;

	for(int i=0; i<midLength; i++)
	{
		tempData = L.data[i];

		L.data[i] = L.data[L.length-i-1];
		L.data[L.length-i-1] = tempData;
	}

	return L;
}


void GetMinMaxValue(SeqList L, DataType* min, DataType* max, int* maxPosition, int* minPosition)
{
	int i =0;
	*min = L.data[i];
	*max = L.data[i];

	for(int i=1; i<L.length; i++)
	{
		if(L.data[i]> *max)
		{
			*max = L.data[i];
			*maxPosition = i;
		}
		else if(L.data[i]< *min)
		{
			*min = L.data[i];
			*minPosition = i;
		}
	}
}
