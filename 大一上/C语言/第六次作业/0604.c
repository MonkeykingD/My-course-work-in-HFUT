//*********************************************************
//File name	 : 0604.c
//Author  	 : �����
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    char a[80],b[80];
    char* p, *q;
    p=a;
    q=b;
    printf("�������һ���ַ���\n");
    gets(a);
    printf("������ڶ����ַ���\n");
    gets(b);
    while(*p)
    {
        p++;
    }

    while(*q)
    {
        *p=*q;
        q++;
        p++;
    }
    
    *p='\0';
    p=a;
    puts(p);
    return 0;
}
