//*********************************************************
//File name	 : 0512.c
//Author  	 : �����
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
    printf("������10�����֣�\n");
    for(i=0;i<10;i++)
    {
        printf("name%d: ", i);
        scanf("%s", name+i);
    }
    
    printf("������Ҫ��ѯ�����֣�\n");
    scanf("%s",n);
    for(i=0;i<10;i++)
    {
        if(strcmp(name[i],n)==0)
        {
            printf("�������ڣ���name%d\n",i);
            break;
        }
        
    }
    if(i>=10)
    {
	    printf("�����ֲ�����10��������\n");
	} 
    return 0;
}
