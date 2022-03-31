//*********************************************************
//File name	 : 0708.c
//Author  	 : 戴宇豪
//Date   	 : 11.24
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#define N 4

int fun(int (*)[N]);
int main()
{
     int a[4][4]={0};
	 int iFlag=0;
     int i,j;
     printf("输入4*4的矩阵：\n");
     for(i=0;i<4;i++)
     {
          for(j=0;j<4;j++)
          {
              scanf("%d",&a[i][j]);
          }

     }

    iFlag=fun(a);
    if(iFlag==0)
    {
     	printf("这不是一个对称数组！\n");
    }
    else
    {
        printf("这是一个对称数组！\n");
    }
    return 0;
}

int fun(int (*p)[N])
{
    int i,j,flag=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
        	if(p[i][j]!=p[j][i])
            {
                flag=0;
                return flag;
            }
        }
    }
    return flag;
}