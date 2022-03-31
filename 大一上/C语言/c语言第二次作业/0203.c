//*********************************************************
//File name	 : 0203.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.1415926 
int main()
{
    float r ,h ,v ;
    printf("请输入圆锥体的底半径和高：\n");
    scanf("%f %f",&r,&h);
    v = h * r * r * PI /3;
    printf("圆锥体的体积为：%f",v);
    return 0;
}
