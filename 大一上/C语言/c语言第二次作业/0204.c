//*********************************************************
//File name	 : 0204.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019217957
//**************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    float a ,r ,s;
    printf("请输入扇形的角度和半径：\n");
    scanf("%f%f",&a,&r);
    s = (r * r * PI) * a / 360;
    printf("扇形的面积是：%f",s);
    return 0;
}
