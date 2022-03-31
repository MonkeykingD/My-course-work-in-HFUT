//*********************************************************
//File name	 : 0802.c
//Author  	 :  你们的father
//Date   	 : 
//Student ID : 3838383838
//*********************************************************

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

float ** malloc_GetMatrix (int, int);
void rand_PutMatrix (float **, int, int);
void iFind_Minimum (float **, int, int, int *, int *);
void free_Matrix (float **, int);

int main()
{
	float **fMatrix;
	int i, j, m, n;
	int iPos_col, *p, iPos_row, *q;
	float fMax;

	p = &iPos_row;
	q = &iPos_col;

	printf("请输入矩阵的行数和列数（空格隔开）：\n");
	scanf("%d%d", &m, &n);

	fMatrix = malloc_GetMatrix (m, n);

	rand_PutMatrix (fMatrix, m, n);

	iFind_Minimum (fMatrix, m, n, p, q);

	printf("\n二维数组的最小值为 %.3f ，位于第 %d 行第 %d 列.\n\n", fMatrix[iPos_row][iPos_col], iPos_row + 1, iPos_col + 1);

	free_Matrix (fMatrix, n);

	system ("pause");

	return 0;
}

float ** malloc_GetMatrix (int Row, int Column)
{
	int i;
	float **p;

	p = (float **) malloc (Row * sizeof (float));
	if (p == NULL)
	{
		exit (1);
	}

	for(i = 0; i < Column; i ++)
	{
		p[i] = (float *) malloc (Column * sizeof (float));

		if (p[i] == NULL)
		{
			exit (1);
		}
	}

	return p;
}

void rand_PutMatrix (float **p, int Row, int Column)
{
	int i, j;

	srand (time(0));

	for(i = 0; i < Row; i++)
	{
		for(j = 0; j < Column; j++)
		{
			p[i][j] = rand () % 1000 * 0.1;
			printf("%.3f  ", p[i][j]);
		}
		printf("\n");
	}

	return;
}

void iFind_Minimum (float **p, int Row, int Column, int *p1, int *p2)
{
	int i, j;
	float min = p[0][0];

	for(i = 0; i < Row; i++)
	{
		for(j = 0; j < Column; j++)
		{
			if (min > p[i][j])
			{
				min = p[i][j];
				*p1 = i;
				*p2 = j;
			}
		}
	}

	return;
}

void free_Matrix (float **p, int Column)
{
	int i;

	for(i = 0; i < Column; i++)
	{
		free (p[i]);
	}

	free (p);
}
