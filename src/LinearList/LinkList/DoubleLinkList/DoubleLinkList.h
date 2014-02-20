/*
 * DoubleLinkList.h
 *
 *  Created on: Feb 21, 2014
 *      Author: lixin
 */

#ifndef DOUBLELINKLIST_H_
#define DOUBLELINKLIST_H_

typedef int DataType;

typedef struct _DoubleLinkNode
{
	struct _DoubleLinkNode* previous;
	struct _DoubleLinkNode* next;
	DataType data;

}DoubleLinkNode;

typedef DoubleLinkNode* DoubleLinkList;

#endif /* DOUBLELINKLIST_H_ */
