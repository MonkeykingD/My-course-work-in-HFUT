//************************************************
//File name	 : 0703.c
//Author  	 : 戴宇豪
//Date   	 : 11.21
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include<stdlib.h>
void sort(int p[],int);
int main()
{
     int a[10] = {0};
     int i, j;
     printf("请输入十个整数：\n");
     for(i=0;i<10;i++)
     {
        scanf("%d", a+i);
     }

     sort(a,10);
     printf("排序后：");
     for(j=0;j<10;j++)
     {
         printf("%d ",a[j]);
     }
    return 0;
}

void sort(int p[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]>p[j+1])
            {
                temp=p[j+1];
                p[j+1]=p[i];
                p[i]=temp;
            }
        }

    }

}