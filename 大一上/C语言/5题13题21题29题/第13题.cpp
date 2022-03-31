#include  <stdio.h>
#include<math.h>
int main ()
{   
    int n=1,a=0;
	int flag=1,i;
	float s=0.0f;
    while(flag)
	{
		a=41+n*(n-1);		
		s=sqrt(a);
		for(i=2;i<=s;i++)
		    {
			    if(a%i==0)
                {
				    flag=0;
					printf("该数列最小非素数项的序号为：%d",n);
				    break;
			    }
			    
			}			
        n++; 
	} 

	return 0;
}
