//*********************************************************
//File name	 : 0606.c
//Author  	 : �����
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	int a[4][4];
    int i,j;
    int *p[4], itemp;
	printf("������4�׷���\n");
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

    printf("�þ���ת�ú���Ϊ��\n");
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