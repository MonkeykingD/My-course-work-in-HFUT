//*********************************************************
//File name	 : 0501.c
//Author  	 : 戴宇豪
//Date   	 : 11.06
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int a[10], imax, ipos;
    int i, j;
    for(i=0; i<10; i++)
    {
	    scanf("%d", &a[i]);
    }
	imax = a[0];
	ipos = 0;
    for(j=0; j<10; j++)
    {
    	if(a[j] >= imax)
        {
            imax = a[j];
            ipos = j;
        }
    }
    
    printf("这10个整数的最大值是%d\n",imax);
    printf("它的位置是%d(从0到9)", ipos);
    return 0;
}
