//*********************************************************
//File name	 : 0701.c
//Author  	 : �����
//Date   	 : 11.18
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int GCD(int x, int y);
int main()
{
    int m, n, t;
    printf("��������m��ֵ:");
    scanf("%d", &m);
    printf("��������n��ֵ:");
    scanf("%d", &n);
    t=GCD(m, n);
    printf("�����������Լ����%d",t);
    return 0;
}
int GCD(int x,int y)
{
    int t;
    if(x<y)
    {
        t=y;
        y=x;
        x=t;
    }
    
    x=x%y;
    return x? GCD(x,y):y;
}