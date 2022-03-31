//*********************************************************
//File name	 : 0503.c
//Author  	 : 戴宇豪 
//Date   	 : 11.07
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int a[10], odd=0, even=0;
    int i, j; 
    for(i=0;i<10;i++)
    {
	    scanf("%d",&a[i]);
    }
	for(i=0;i<10;i++)
    {
    	if(a[i]%2)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    
    printf("奇数有%d个，偶数有%d个",odd,even);
}
