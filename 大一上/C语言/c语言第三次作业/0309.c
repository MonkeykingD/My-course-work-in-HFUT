//*********************************************************
//File name	 :  0309
//Author  	 : ´÷ÓîºÀ
//Date   	 : 10.26
//Student ID : 2019216072 
//*********************************************************

#include<stdio.h>
int main()
{
    int n=0,s=0;
    while(n<10000)
    {
        if(n%3==0)
        {
			s+=n;
		} 
        n++;
	}
    printf("s=%d\n",s);
    s=0; 
	for(n=0;n<10000;n++)
    {
        if(n%3==0)
        {
	        s+=n;
	    } 
    }
    printf("s=%d\n",s);
    n=0;
    s=0;
	do{
        if(n%3==0)
        {
            s+=n;
        }
        n++;
      }while(n<10000);
    printf("s=%d\n",s);
    return 0;
}
