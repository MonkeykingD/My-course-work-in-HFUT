//*********************************************************
//File name	   : 0202.c
//Author  	   : 戴宇豪 
//Date   	   : 10.17
//Student ID   : 2019216072 
//**************************************************
#include <stdio.h>
#include <math.h>
int main()
{
    float a ,b ,h ,v;
    printf("请输入长方体的长，宽，高：\n");
    scanf("%f %f %f", &a,&b,&h);
    v = a * b * h;
    printf("长方体的体积为：%f",v);
    return 0;
}
