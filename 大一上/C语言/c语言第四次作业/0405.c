//*********************************************************
//File name	 : 0405.c
//Author  	 : ����� 
//Date   	 : 11.02
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
    char a[100];
    int n=0, i;
    printf("������һ���ַ���\n");
    gets(a); 
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]%10==3)
        n++;
    }
    
    printf("%d",n);
    return 0;
}

