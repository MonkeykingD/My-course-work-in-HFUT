//*********************************************************
//File name	 : 0707.c
//Author  	 : �����
//Date   	 : 11.22
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#define N 4

void Trans(int (*p)[N]);

int main()
{
     int i,j;
	 int a[N][N]={0};
     printf("������һ��4*4�ľ���\n");
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
         {
             scanf("%d",&a[i][j]);
         }

     }
     
     Trans(a);
     printf("ת�ú�\n");
     for(i=0;i<4;i++)
     {
        for(j=0;j<4;j++)
        {
            printf("%4d",a[i][j]);
        }

        printf("\n");
     }
    return 0;
}

void Trans(int (*p)[N])
{
     int i,temp,j;
     for(i=0;i<N;i++)
     {
        for(j=0;j<i;j++)
        {
            temp=p[i][j];
            p[i][j]=p[j][i];
            p[j][i]=temp;
        }

     }
     
}