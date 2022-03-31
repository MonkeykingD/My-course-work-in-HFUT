//*********************************************************
//File name	 : 0215.c
//Author  	 : 戴宇豪 
//Date   	 : 10.18
//Student ID : 2019216072 
//************************************************** 
#include <stdio.h>
int main()
{
    int year;
    printf("请输入年份：\n");
    scanf("%d",&year);
    if ((year%4==0)&&((year%100!=0)||(year%400==0)))
    {
        printf("%d年是闰年\n",year);
    }
    else
    {
        printf("%d年不是闰年\n",year);
    }
    return 0;
}
