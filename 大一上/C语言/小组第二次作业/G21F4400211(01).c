//*********************************************************
//File name	 :����д��������
//            ��ʵ��ͨ������������ַ������ܣ���Կͨ���������롣
//Author  	 :  ����� 
//Date   	 : 11.10 
//Student ID :2019216072
//*********************************************************

#include <stdio.h>
int main()
{
	char str[80],str1[80];
	
	int i,sign;
	
	
	printf("��������Կ��"); 
	scanf("%d",&sign);
	printf("���������ģ�");
	getchar(); 
	gets(str);
	for(i=0;str[i];i++) 
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		    str[i]=(str[i]-'a'+sign)%26+'a';
	    }
	    else if(str[i]>='A'&&str[i]<='Z')
	   	{
		    str[i]=(str[i]-'A'+sign)%26+'A';
	    } 
	}
	puts(str);
	return 0;
}
