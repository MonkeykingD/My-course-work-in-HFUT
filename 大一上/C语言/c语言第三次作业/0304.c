//*********************************************************
//File name	 : 0304.c
//Author  	 : 戴宇豪
//Date   	 : 10.24
//Student ID : 2019216072 
//*********************************************************
#include <stdio.h>
int main()
{
    float a ,b ,c , t;
    printf("请输入三个数：");
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
    printf("从小到大的顺序是：%f  %f  %f\n", a, b, c);
    return 0;
}
