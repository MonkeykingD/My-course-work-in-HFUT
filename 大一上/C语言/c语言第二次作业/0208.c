//*********************************************************
//File name	 : 0208.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include<stdio.h>
 int main()
{
    char ch;
    printf("请输入一个大写字母：\n");
    ch=getchar();
    ch=ch+('a'-'A');
    printf("%c",ch);
    return 0;
 }
