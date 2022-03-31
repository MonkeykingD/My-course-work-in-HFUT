//*********************************************************
//File name	 : 0508.c
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 11.08
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int iSel, a[10];
    int i, iFlag; 
	iFlag=0;
    for(i=0;i<10;i++)
    {
	    scanf("%d",&a[i]);
    } 
	scanf("%d", &iSel);
    for(i=0; i<10; i++)
        if(iSel == a[i])
        {
           iFlag=1;
           printf("The position is %d\n",i);
        }
    if (iFlag == 1)
          printf("Found!");
    else
          printf("Not found!");
    return 0;
}
