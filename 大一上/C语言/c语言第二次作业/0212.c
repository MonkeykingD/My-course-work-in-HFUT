//*********************************************************
//File name	 : 0212.c
//Author  	 : 戴宇豪 
//Date   	 : 10.18
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    double a;
    printf("请输入一个双精度浮点型数据：\n");
    scanf("%lf",&a);
    if (a > 0)
    {
        printf("%f是正数\n",a);
    }
    else   if (a < 0)
    {
        printf("%f是负数\n",a);
    }
    else
    {
        printf("%f是0\n",a);
    }
    return 0;
}
