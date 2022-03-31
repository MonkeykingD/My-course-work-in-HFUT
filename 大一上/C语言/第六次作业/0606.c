//*********************************************************
//File name	 : 0606.c
//Author  	 : 戴宇豪
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	int a[4][4];
    int i,j;
    int *p[4], itemp;
	printf("请输入4阶方阵：\n");
	for(i = 0;i < 4;i++)
	{
		p[i]=a[i];
		for(j = 0;j < 4;j++)
		{
			scanf("%d",p[i]+j);
		}

	}

	for (i = 0;i < 4;i++)
    {
        for(j = 0; j < i; j++)
        {
            itemp = *(p[i] + j);
            *(p[i] + j) = *(p[j] + i);
            *(p[j] + i) = itemp;
        }

    }

    printf("该矩阵转置后结果为：\n");
    for (i = 0;i < 4;i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%6d",*(p[i] + j));
        }

		printf("\n");
    }

    return 0;
 }