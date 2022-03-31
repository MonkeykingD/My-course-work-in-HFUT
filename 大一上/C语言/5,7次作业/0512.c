//*********************************************************
//File name	 : 0512.c
//Author  	 : 戴宇豪
//Date   	 : 11.08
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][10];
    char n[10];
    int i;
    printf("请输入10个名字：\n");
    for(i=0;i<10;i++)
    {
        printf("name%d: ", i);
        scanf("%s", name+i);
    }
    
    printf("请输入要查询的名字：\n");
    scanf("%s",n);
    for(i=0;i<10;i++)
    {
        if(strcmp(name[i],n)==0)
        {
            printf("该名字在，是name%d\n",i);
            break;
        }
        
    }
    if(i>=10)
    {
	    printf("该名字不在这10个名字内\n");
	} 
    return 0;
}
