//*********************************************************
//File name	 : 0213.c
//Author  	 : 戴宇豪 
//Date   	 : 10.18 
//Student ID : 2019216072
//**************************************************
#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d是偶数\n",a);
    }
    else
    {
        printf("%d是奇数\n",a);
    }
    return 0;
}
