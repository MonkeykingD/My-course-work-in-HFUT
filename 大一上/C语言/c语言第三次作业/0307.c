//*********************************************************
//File name	 :  0307.c
//Author  	 : 戴宇豪
//Date   	 : 10.25
//Student ID : 2019216072 
//*********************************************************
#include <stdio.h>
int main()
{
    int a ,b;
    printf("请输入一个年份和月份：");
    scanf("%d%d",&a,&b);
    if (a % 4 == 0 && a %100 != 0 ||a % 400 == 0)
    {
        if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b == 12)
        {
            printf("这个月有31天。");
        }
        else if (b==2)
        {
            printf("这个月有29天。");
        }
        else
        {
            printf("这个月有30天。");
        }
    }
    else
    {
       if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b == 12)
        {
            printf("这个月有31天。");
        }
        else if (b==2)
        {
            printf("这个月有28天。");
        }
        else
        {
            printf("这个月有30天。");
        }
    }
    
    return 0;
}
