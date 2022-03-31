//*********************************************************
//File name	 : 0701.c
//Author  	 : 戴宇豪
//Date   	 : 11.18
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int GCD(int x, int y);
int main()
{
    int m, n, t;
    printf("输入整数m的值:");
    scanf("%d", &m);
    printf("输入整数n的值:");
    scanf("%d", &n);
    t=GCD(m, n);
    printf("两个数的最大公约数是%d",t);
    return 0;
}
int GCD(int x,int y)
{
    int t;
    if(x<y)
    {
        t=y;
        y=x;
        x=t;
    }
    
    x=x%y;
    return x? GCD(x,y):y;
}