//*********************************************************
//File name	 : 0708.c
//Author  	 : �����
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
     printf("����4*4�ľ���\n");
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
     	printf("�ⲻ��һ���Գ����飡\n");
    }
    else
    {
        printf("����һ���Գ����飡\n");
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