//*********************************************************
//File name	 : 0305.c
//Author  	 : 戴宇豪
//Date   	 : 10.25
//Student ID : 2019216072 
//*********************************************************
#include<stdio.h>
int main()
{
    double a,b,c;
    printf("请输入一个三角形的三条边长：");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a >= b + c || c >= a + b || b >= a + c)
    {
        printf("输入错误!");
    }
    else
    {  
        if(a == b && b == c)
        {
            printf("等边三角形");
        }
        else if(a == b || a == c || b == c)
        {
            printf("等腰三角形");
        }
        else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a *a )
            {
                printf("直角三角形");
            }
        else
            {
               printf("一般三角形");
            }
    }
    return 0;
}
