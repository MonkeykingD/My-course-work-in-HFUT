//*********************************************************
//File name	 : 0705.c
//Author  	 : �����
//Date   	 : 11.22
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int change(char*);
int main()
{
    char Ostr[80];
    printf("������һ���˽����ַ�����");
    gets(Ostr);
    printf("��Ӧ��ʮ����������%d",change(Ostr));
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
