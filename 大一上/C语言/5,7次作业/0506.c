//*********************************************************
//File name	 : 0506.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.7
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    float a[10], itemp;
    int i, j, k;
    for(i=0;i<10;i++)
    {
        scanf("%f",&a[i]);
    }
    
    for(j=0; j<10-1; j++)
	{
		for(k=j+1; k<10; k++)
		{
			if(a[j]<a[k])
			{
				itemp=a[j];
				a[j]=a[k];
				a[k]=itemp;
			}
			
		}
		
	} 
	
    for(i=0;i<10;i++)
    {
		printf("%f\t",a[i]);
	}
	
	return 0;
}
