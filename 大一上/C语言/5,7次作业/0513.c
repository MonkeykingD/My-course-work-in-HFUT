//*********************************************************
//File name	 : 0513.c
//Author  	 : ����� 
//Date   	 : 11.08
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	char a[80];
	char c;
	int i,n;
	printf("����һ���ַ�");
	scanf("%s",&a);
	printf("������һ��Ҫ������ַ�");
	scanf("\n%c",&c);
	printf("����Ҫ�����λ��:");
	scanf("%d",&n);
	printf("�������Ϊ��\n");
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

