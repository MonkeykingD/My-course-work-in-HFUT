//*********************************************************
//File name	 : 0206.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    float a ,b ,c ,d ,x;
    printf("请输入四门课的成绩：\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    x = (a + b + c + d) / 4;
    printf("平均成绩x=：%f",x);
    return 0;
}
