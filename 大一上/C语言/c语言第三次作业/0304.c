//*********************************************************
//File name	 : 0304.c
//Author  	 : �����
//Date   	 : 10.24
//Student ID : 2019216072 
//*********************************************************
#include <stdio.h>
int main()
{
    float a ,b ,c , t;
    printf("��������������");
    scanf("%f%f%f", &a, &b, &c);
    if(a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b > c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("��С�����˳���ǣ�%f  %f  %f\n", a, b, c);
    return 0;
}
