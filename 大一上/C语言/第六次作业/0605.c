//*********************************************************
//File name	 : 0605.c
//Author  	 : �����
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
	int i, j, add=0;
	int a[3][4], b[3][4];
	int *p[3], *q[3];
	printf("�������һ������\n");
	for(i=0;i<3;i++)
	{
		p[i]=a[i];
		{
			for(j=0 ; j<4 ; j++)
			{
				scanf("%d",p[i]+j);
			}
			
		}

	}

	printf("������ڶ�������\n");
	for(i=0;i<3;i++)
	{
		q[i]=b[i];
		{
			for(j=0 ; j<4 ; j++)
	 		{
				scanf("%d",q[i]+j);
			}

		}

	}

	printf("���������Ϊ��\n");
	for  (i = 0 ; i < 3 ; i++)
    {
        for (j = 0; j < 4; j++)
        {
        	printf("%3d",*(p[i] + j)+*(q[i] + j));
		}

		printf("\n");
    }

	return 0;
 }
