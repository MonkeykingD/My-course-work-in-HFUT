//*********************************************************
//File name	 : 0204.c
//Author  	 : ����� 
//Date   	 : 10.17
//Student ID : 2019217957
//**************************************************
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    float a ,r ,s;
    printf("���������εĽǶȺͰ뾶��\n");
    scanf("%f%f",&a,&r);
    s = (r * r * PI) * a / 360;
    printf("���ε�����ǣ�%f",s);
    return 0;
}
