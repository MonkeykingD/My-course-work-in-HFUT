//*********************************************************
//File name	 : 0313
//Author  	 : �����
//Date   	 : 10.29
//Student ID : 2019216072
//*********************************************************
#include<stdio.h>
int main()
{
    int i=1, n, flag=1;
    float t = 1.0f, e = 1.0f;
    printf("������������n��");
    scanf("%d",&n);
    while(flag)
    {
        t *= 1./i;
        e += t;
        i++;
        if(t < 1e-6||n < i)
        {
        	flag=0;
		}
    }

    printf("e=%f", e);
    return 0;
}
