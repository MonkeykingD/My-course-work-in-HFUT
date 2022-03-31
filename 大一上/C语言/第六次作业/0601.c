//*********************************************************
//File name	 : 0601.c
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 11.14
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[10];
    int *p=NULL, *pMax=NULL;
    p=a;
    printf("ÇëÊäÈë10¸öÊý£º\n");
    for(p=a;p<a+10;p++)
    {
        scanf("%d",p);
    }
    
    p=a;
    pMax=a;
    for(p=a;p<a+10;p++)
    {
        if(*pMax<*p)
        {
            pMax=p;
        }
        
    }
    
    printf("Max=%d\nPosition=%d", *pMax,pMax-a);
    return 0;
}