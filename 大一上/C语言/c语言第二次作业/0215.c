//*********************************************************
//File name	 : 0215.c
//Author  	 : ����� 
//Date   	 : 10.18
//Student ID : 2019216072 
//************************************************** 
#include <stdio.h>
int main()
{
    int year;
    printf("��������ݣ�\n");
    scanf("%d",&year);
    if ((year%4==0)&&((year%100!=0)||(year%400==0)))
    {
        printf("%d��������\n",year);
    }
    else
    {
        printf("%d�겻������\n",year);
    }
    return 0;
}
