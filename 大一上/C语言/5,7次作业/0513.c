//*********************************************************
//File name	 : 0513.c
//Author  	 : 戴宇豪 
//Date   	 : 11.08
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	char a[80];
	char c;
	int i,n;
	printf("输入一串字符");
	scanf("%s",&a);
	printf("请输入一个要插入的字符");
	scanf("\n%c",&c);
	printf("输入要插入的位置:");
	scanf("%d",&n);
	printf("插入后结果为：\n");
    for(i=0;a[i]!='\0';i++)
    {
        if(i==n)
        {
            printf("%c",c);
        }
        printf("%c",a[i]);
        
    }
    
    return 0;
}

