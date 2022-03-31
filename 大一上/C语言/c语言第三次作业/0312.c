 //*********************************************************
//File name	 : 0312
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 10.28
//Student ID : 2019216072
//*********************************************************
#include <stdio.h>
int main()
{
    double cosx=1, x, a=1;
    int i=1;
    printf("ÇëÊäÈëxµÄÖµ£º");
	scanf("%lf",&x); 
    while(a>10e-6||a<-10e-6)
    {   
	    a = -a;
    	a* = (x * x)/(i+1)/i;
    	cosx+=a;
    	i+=2;
	}
	
    printf("%.6f",cosx);
    return 0;
}

