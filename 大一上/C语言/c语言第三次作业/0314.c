//*********************************************************
//File name	 : 0314
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 10.29
//Student ID : 2019216072
//*********************************************************
#include <stdio.h>
#include<math.h> 
int main()
{
    int n, i, k;
    float s;
    for(n=2;n<1000;n++)
	{
	    k=0;
		s=sqrt(n);
	    
	    for(i=1;i<=s;i++)
	    {
	    	
		    if(n%i==0)
		    {
			    k+=(i+n/i);
		    }	
	    }

		if(k==(2*n)) 
		{
			printf("%d\n",n); 
		}
		
    }

	return 0;
}
