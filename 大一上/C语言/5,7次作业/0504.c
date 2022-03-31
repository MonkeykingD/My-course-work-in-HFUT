//*********************************************************
//File name	 : 0504.c
//Author  	 : 戴宇豪 
//Date   	 : 11.07
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include<string.h>//求字符串长度的函数strlen()在里面
int main()
{
    char a[80];
    int i;
    printf("请输入一串字符\n");
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
