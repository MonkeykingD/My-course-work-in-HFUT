//*********************************************************
//File name	 : 0702.c
//Author  	 : �����
//Date   	 : 11.19
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int strcount(char str[]);
int main()
{
    int count;
    char str[80];
    printf("������һ���ַ���\n");
    gets(str);
    count=strcount(str);
    printf("�����ַ�����Ϊ%d",count);
    return 0;
}
int strcount(char str[])
{
    int num=0;
    char *p=NULL;
    p=str;
    for(p=str;*p;p++)
    {
        if(*p>='0'&&*p<='9')
        {
            num++;
        }
    }

    return num;
}