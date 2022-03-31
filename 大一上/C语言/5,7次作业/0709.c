//*********************************************************
//File name	 : 0709.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.24
//Student ID : 2019216072
//*********************************************************

#include  "0709.h"

int main()
{
      float (*a)(float),(*b)(float),m,n;
      float x=30, y=60;
      a=sinx;
      b=cosx;
	  m=(*a)(x*PI/180);
	  n=(*b)(y*PI/180);
      printf("%f",m+n);
	  return 0;
}
float sinx(float x)
{
    float sinx=x,a=x;
	int i=2;
	while (a>1e-6||a<-1e-6)
	{
		a=-a;
		a*=(x*x)/(i+1)/i;
		sinx+=a;
		i+=2;
		
	}
    return sinx;
}

float cosx(float x)
{
  	float cosx=1.f, a=1.f;
    int i=1;
    while(a>1e-6||a<-1e-6)
    {   
	    a = -a;
    	a *= (x * x)/(i+1)/i;
    	cosx+=a;
    	i+=2;
    	
	}
   return cosx;
}