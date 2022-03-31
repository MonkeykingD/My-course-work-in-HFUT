//*********************************************************
//File name	 : 0605.c
//Author  	 : 戴宇豪
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
	int i, j, add=0;
	int a[3][4], b[3][4];
	int *p[3], *q[3];
	printf("请输入第一个矩阵：\n");
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

	printf("请输入第二个矩阵：\n");
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

	printf("两个矩阵和为：\n");
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
