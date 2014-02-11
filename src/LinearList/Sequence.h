/*
 * Sequence.h
 *
 *  Created on: Feb 11, 2014
 *      Author: lixin
 */

#ifndef SEQUENCE_H_
#define SEQUENCE_H_

#define ListSize 100

typedef int DataType;

typedef struct{

	DataType data[ListSize];
	int length;
}SeqList;


#endif /* SEQUENCE_H_ */
