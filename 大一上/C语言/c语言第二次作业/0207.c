//*********************************************************
//File name	 : 0207.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019216072 
//**************************************************
#include <stdio.h>
int main()
{
    char c;
    printf("请输入一个数字字符(0-9)：\n"); 
    scanf("%c",&c);
    if(('0'<=c)&&(c<='9'))
    {
        c=c-'0';
        printf("%d\n",c);
    }
    else
    {  
        printf("data error! \n");
    }
    return 0;
}
