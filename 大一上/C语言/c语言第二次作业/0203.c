//*********************************************************
//File name	 : 0203.c
//Author  	 : ����� 
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.1415926 
int main()
{
    float r ,h ,v ;
    printf("������Բ׶��ĵװ뾶�͸ߣ�\n");
    scanf("%f %f",&r,&h);
    v = h * r * r * PI /3;
    printf("Բ׶������Ϊ��%f",v);
    return 0;
}
