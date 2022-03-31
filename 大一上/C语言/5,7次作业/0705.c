//*********************************************************
//File name	 : 0705.c
//Author  	 : 戴宇豪
//Date   	 : 11.22
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int change(char*);
int main()
{
    char Ostr[80];
    printf("请输入一串八进制字符串：");
    gets(Ostr);
    printf("对应的十进制整数：%d",change(Ostr));
    return 0;
}

int change (char* O)
{
    int a,sum=0,i=0;
    for(i=0;O[i];i++)
    {
        a=O[i]-'0';
        sum=sum*8+a;
    }

    return sum;
}
