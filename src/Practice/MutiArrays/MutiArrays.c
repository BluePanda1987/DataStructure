/*
 * MutiArrays.c
 *
 *  Created on: Mar 3, 2014
 *      Author: lixin
 */


#include<stdio.h>
#include<stdlib.h>

//例4.1.2 转置矩阵Amn 到Bnm

void trasmat(int A[][5], int B[][8], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			B[j][i] = A[i][j];
		}
	}
}

//转置矩阵

//1、2、3、4、5
//6、7、8、9、0
//
//To
//
//1、6
//2、7
//3、8
//4、9
//5、0

//4.2 求鞍马点 行的最小值，列的最大值，为马鞍点。原例可能存在错误。

void MaxMin1(int A[8][5], int m, int n)
{
	//在每行中最小值的列
	int minIndex[m];

	for(int i=0; i<m; i++)
	{
		minIndex[i] =0;
		for(int j=1; j<n; j++)
		{
			if(A[i][j] < A[i][minIndex[i]])
			{
				minIndex[i] = j;
			}
		}
	}

	for(int i =0; i<m; i++)
	{
		//查看所有行的第minIndex[i]列, 看i是否是最大值
		int theRowMinValue = A[i][minIndex[i]];

		for(int j=1; j<m; j++)
		{
			if(theRowMinValue > A[j][minIndex[i]] && j+1 == m)
			{
				//此时此点为马鞍点,但是这个算法没有考虑值相等的情况。
			}
		}
	}
}


void MaxMin2(int A[8][5], int m, int n)
{

	for(int i=0; i<m; i++)
	{
		//每行的最小值，有可能不是一个。
		int minIndexinRow[n];
		int minCountinThisRow = 0;

		//计算每一行的马鞍点
		int minValueinThisRow = A[i][0];
		minCountinThisRow = 1;
		minIndexinRow[0] =0;

		for(int j=1; j<n; j++)
		{
			if(A[i][j] < minValueinThisRow)
			{
				minValueinThisRow = A[i][j];
				minCountinThisRow = 1;
				minIndexinRow[0]=j;
			}
			else if(A[i][j] == minValueinThisRow)
			{
				minCountinThisRow++;
				minIndexinRow[minCountinThisRow -1]=j;
			}
		}

		//printf("The Min value in this row is %d, count is %d. \r\n", minValueinThisRow, minCountinThisRow);


		for(int k=0; k<minCountinThisRow; k++)
		{
			int maxValueColumnIndex = minIndexinRow[k];
			int maxValueinThisColumn = minValueinThisRow;

			int isMax = 1;
			for(int l =0; l<m; l++)
			{
				if(maxValueinThisColumn < A[l][maxValueColumnIndex])
				{
					isMax = 0;
					break;
				}
			}

			if(isMax)
			{
				printf("The Min Max value is %d, row: %d, column: %d", maxValueinThisColumn, k,  maxValueColumnIndex);
				printf("\r\n");
			}
		}
	}
}
