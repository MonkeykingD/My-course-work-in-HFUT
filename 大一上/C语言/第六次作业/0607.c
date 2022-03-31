//*********************************************************
//File name	 : 0607.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
    char str[80], *p, *q, ch;
    p=str;
    gets(p);
    scanf("%c", &ch);
    p=str;
    q=str;
    while(*p)
    {
        if(*p!=ch)
        {
            *q=*p;
             q++;
        }

        p++;
    }

    *q='\0';
    q=str;
    puts(q);
    return 0;
}
