//*********************************************************
//File name	 : 0210.c
//Author  	 : �����
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    int a ,b,c;
    printf("������������������\n");
    scanf("%d %d", &a,&b);
    c = b;
    b = a;
    a = c;
    printf("%d,%d",a ,b);
    return 0;
}
