//*********************************************************
//File name	 : 0305.c
//Author  	 : �����
//Date   	 : 10.25
//Student ID : 2019216072 
//*********************************************************
#include<stdio.h>
int main()
{
    double a,b,c;
    printf("������һ�������ε������߳���");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a >= b + c || c >= a + b || b >= a + c)
    {
        printf("�������!");
    }
    else
    {  
        if(a == b && b == c)
        {
            printf("�ȱ�������");
        }
        else if(a == b || a == c || b == c)
        {
            printf("����������");
        }
        else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a *a )
            {
                printf("ֱ��������");
            }
        else
            {
               printf("һ��������");
            }
    }
    return 0;
}
