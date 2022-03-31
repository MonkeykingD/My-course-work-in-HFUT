//*********************************************************
//File name	 : 0609.c
//Author  	 : 戴宇豪
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int i,j;
    float average=0,a[4][3],add=0;
    float *p[4];
    printf("请输入一个4*3的数组：\n");
    p[0]=a[0];
    for(i=0;i<4;i++)
    {
        p[i]=a[i];
        for(j=0;j<3;j++)
        {
           scanf("%f",*(p+i)+j);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
           add+=*(*(p+i)+j);
        }
    }
    average=add / (4*3);
    printf("averag=%f\n", average);
    return 0;
}
