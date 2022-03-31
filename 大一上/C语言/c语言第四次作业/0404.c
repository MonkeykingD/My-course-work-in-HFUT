//*********************************************************
//File name	 : 0404.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.02
//Student ID : 2019216072
//***************************************************

#include<stdio.h>
int main()
{
    float a[4][5], sum[4];
    int i, j;
    for(i=0;i<4;i++)
    {
        sum[i]=0;
        for(j=0;j<5;j++)
        {
            scanf("%f",&a[i][j]);
            sum[i]+=a[i][j];
        }
       printf("%f\n",sum[i]);
    }
    return 0;
}
