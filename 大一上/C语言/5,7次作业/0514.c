//*********************************************************
//File name	 : 0514.c
//Author  	 : 戴宇豪
//Date   	 : 11.08
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    char a[80],b[80];
    int i,j=0,k;
    printf("输入一个字符串a[80]:");
	scanf("%s", a);
	printf("输入一个字符串b[80]:");
	scanf("\n%s", b);
	for(i=0; a[i]!='\0'; i++);

    for(j=0; b[j]!='\0'; j++)
    {
        a[i+j]=b[j];
    }
    printf("%s",a);
    return 0;
}
