//*********************************************************
//File name	 : 0505.c
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 11.07
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int a[10], item;
	int i, j, k, l;
	for(i=0; i<10 ;i++)
	{
		scanf("%d", &a[i]);
	} 
	for(l=0; l<10-1; l++)
    {
	    for(j=0; j<10-1; j++)
        {
    	    if(a[j+1] < a[j])
    	    {  
    		    item = a[j];
			    a[j] = a[j+1];
			    a[j+1] = item; 
		    } 
	    }
    }
	
	for(k=0; k<10; k++)
	{
	    printf("%d ", a[k]); 
	} 
	
	return 0;
}
