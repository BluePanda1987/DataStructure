/*
 * LinkList.h
 *
 *  Created on: Feb 12, 2014
 *      Author: lixin
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_

typedef int DataType;

typedef struct
{
	DataType data;
	struct LinkNode* next;

}LinkNode;

typedef LinkNode* LinkList;


#endif /* LINKLIST_H_ */
