//*********************************************************
//File name	 : 0710.c
//Author  	 : �����
//Date   	 : 11.24
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
void fun(char *, int *);
int main()
{
     char  str[80];
     int iCount[4]={0};
     int i;
     char *p[] = {"��д��ĸ","Сд��ĸ","����","�����ַ�"};
     printf("������һ���ַ���\n");
     gets(str);
     fun(str, iCount);
     for(i=0;i<4;i++)
     {
         printf("%s�ĸ���\t%d\n",p[i],iCount[i]);
     }
     return 0;
}

void fun(char *szp, int *ip)
{
    char *p;
    p=szp;
    while(*p)
    {
        if(*p>='a'&& *p <='z') 
        {
            ip[1]++;
        }
        else  if(*p >= 'A'&& *p <='Z') 
        {
            ip[0]++;
        }
        else if( *p >='0'&& *p <='9')
        {
            ip[2]++;
        }
        else
        {
            ip[3]++;
        }
        p++; 
    }

}