//*********************************************************
//File name	 : 0214.c
//Author  	 : 戴宇豪 
//Date   	 : 10.18 
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    char c;
    printf("请输入一个字符: \n");
    c = getchar();
    if ((c >= '0') && (c <= '9'))
    {
        printf("该字符为数字\n");
    }
    else if ((c >= 'a') && (c <= 'z'))
    {
        printf("该字符为小写字母\n");
    }
    else if ((c >= 'A') && (c <= 'Z'))
    {
        printf("该字符为大写字母\n");
    }
    else
    {
        printf("该字符为其他字符\n");
    }
    return 0;
}
