#include<stdio.h>
#include<stdlib.h>

#include"../LinearList/LinkList/LinkListOperator.h"

int main(void)
{
	LinkList testList = CreateListAndInitByChars();
	LinkNode* tempNode = testList;

	printf("out put test: ");
	while(tempNode->next != NULL)
	{
		printf("%c", tempNode->data);
		LinkNode* freeNode = tempNode;
		tempNode = tempNode->next;
		free(freeNode);
	}

	return EXIT_SUCCESS;
}
