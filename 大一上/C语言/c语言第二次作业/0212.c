//*********************************************************
//File name	 : 0212.c
//Author  	 : ����� 
//Date   	 : 10.18
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    double a;
    printf("������һ��˫���ȸ��������ݣ�\n");
    scanf("%lf",&a);
    if (a > 0)
    {
        printf("%f������\n",a);
    }
    else   if (a < 0)
    {
        printf("%f�Ǹ���\n",a);
    }
    else
    {
        printf("%f��0\n",a);
    }
    return 0;
}
