//*********************************************************
//File name	 : 0209.c
//Author  	 : �����
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    float capital ,rate1 ,deposit ,rate2;
    int years;
    printf("���������д��𡢴�������ʡ�������ޡ���Ϣ˰��\n");
    scanf("%f %f %d %f",&capital,&rate1,&years,&rate2);
    deposit=capital+(capital*rate1*years)*(1-rate2);
    printf("%f",deposit);
    return 0;
}
