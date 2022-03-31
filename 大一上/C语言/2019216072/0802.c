//*********************************************************
//File name	 : 0802.c
//Author  	 : 戴宇豪 
//Date   	 : 12.24
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct
{
	double **mat;
	int m;
	int n;
}dMatrix;

void InitialMatrix(dMatrix *T, int m, int n); 
void FreeMatrix(dMatrix *T);
void SetMatrix(dMatrix *T, int m, int n);
void PrintMatrix(dMatrix *T);
void Findmin(dMatrix *T); 

int main()
{
	dMatrix p;
	int a, b;
	srand((int)time(0));
	printf("请输入二维数组的行数和列数:");
	scanf("%d%d", &a, &b);
	InitialMatrix(&p, a, b);
	SetMatrix(&p, a, b);	
	PrintMatrix(&p);
	Findmin(&p);
	FreeMatrix(&p);
	return 0;
}

void InitialMatrix(dMatrix *T, int m, int n)
{
	int i;
	T -> mat=(double**)malloc(m * sizeof(double*));
	for(i=0; i<m; i++)
	{
		T -> mat[i]=(double*)malloc(n * sizeof(double));
	}
	T -> m = m;				
	T -> n = n;				
}

void FreeMatrix(dMatrix *T)
{
	int i;
	for(i=0; i<(T -> m); i++)
	{
		free(T -> mat[i]);
	}
	free(T -> mat);
}

void SetMatrix(dMatrix *T, int m, int n)
{
	int i, j;
	for(i = 0; i<(T -> m); i++)
	{
		for(j=0; j<(T -> n); j++)
			T -> mat[i][j]=rand()% 1000 * 0.1;
	}
}

void PrintMatrix(dMatrix *T)
{
	int i, j;
	for(i = 0; i < (T -> m); i++)
	{
		for(j = 0; j < (T -> n); j++)
		{
			printf("%.3f  ", T -> mat[i][j]);
		}
		printf("\n");
	}
}

void Findmin(dMatrix * T)
{
	int i, j;
	int mpos = 0,npos = 0;
	double min =T -> mat[0][0];
	for(i=0; i < (T -> m); i++)
	{
		for(j = 0; j < (T -> n); j++)
		{
			if(T -> mat[i][j]<min)
			{
				min = T -> mat[i][j];
				mpos = i;
				npos = j;
			}
		}
	}
	printf("\n该二维数组的最小值是:%.3f  \n其行索引为:%d，其列索引为:%d\n", min, mpos, npos);
}
