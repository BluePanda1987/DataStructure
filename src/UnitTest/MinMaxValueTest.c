/*
 * MinMaxValueTest.c
 *
 *  Created on: Mar 5, 2014
 *      Author: lixin
 */

#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include"../Practice/MutiArrays/MutiArray.h"

int main(void)
{
//	int array[10][10];
//
//	srand((unsigned)time(NULL));
//
//    for(int i=0;i<10;i++)
//    {
//        for(int j=0;j<10;j++)
//        {
//            int k=rand()%100 + 9;
//            array[i][j] = k;
//            printf("%d ", k);
//        }
//        printf("\r\n");
//    }

	int array[2][4];
	srand((unsigned)time(NULL));

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(i == 0)
			{
				array[i][j] = rand()%100 + 9;
			}
			else
			{
				array[i][j] =0;
			}

			printf("%d ", array[i][j]);
		}

		printf("\r\n");
	}

    MaxMin2(array, 2, 4);

    return 0;
}
