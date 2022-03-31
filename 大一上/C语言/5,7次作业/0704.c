//*********************************************************
//File name	 : 0705.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.22
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include <math.h>

int isPrime(int);
int main()
{
     int num;
     printf("the prime number are:\n");
     for(num=100;num<=200;num++)
     {
        if(isPrime(num))
        {
            printf("%d\n",num);
        }
        
     }

}

int isPrime(int x)
{
    int flag=1,i,tmp;
    tmp=sqrt(x);
    for(i=2;i<tmp;i++)
    {
        if(!(x%i))
        {
            flag=0;
        }

    }

    return flag;
}