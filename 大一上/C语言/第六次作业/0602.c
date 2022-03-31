//*********************************************************
//File name	 : 0602.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.14
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
    int a[10],*p,*q,t;
    p=a;
    q=a;
    printf("ÇëÊäÈë10¸öÊý:\n");
    for(p=a;p<a+10;p++)
    {
        scanf("%d",p);
    }

    for(p=a;p<a+10-1;p++)
    {
        for(q=p+1;q<a+10;q++)
        {
            if(*q>*p)
            {
                t = *p;
                *p = *q;
                *q = t;
            }

        }

    }

    for(p=a;p<a+10;p++)
    {
        printf(" %d ", *p);
    }
    return 0;
}
