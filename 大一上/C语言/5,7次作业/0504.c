//*********************************************************
//File name	 : 0504.c
//Author  	 : ����� 
//Date   	 : 11.07
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include<string.h>//���ַ������ȵĺ���strlen()������
int main()
{
    char a[80];
    int i;
    printf("������һ���ַ�\n");
    gets(a);
    for(i=0; i<strlen(a); i++)
    {
	    if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+'a'-'A';
        }
        else if(a[i]>='a' && a[i]<='z')
        {
           a[i]=a[i]+'A'-'a';
        }
    }
    
	puts(a);
    return 0;
}
