//*********************************************************
//File name	 : 0209.c
//Author  	 : 戴宇豪
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    float capital ,rate1 ,deposit ,rate2;
    int years;
    printf("请输入银行存款本金、存款年利率、存款年限、利息税：\n");
    scanf("%f %f %d %f",&capital,&rate1,&years,&rate2);
    deposit=capital+(capital*rate1*years)*(1-rate2);
    printf("%f",deposit);
    return 0;
}
