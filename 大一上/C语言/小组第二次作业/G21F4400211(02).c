//*********************************************************
//File name	 :����д��������
//            ��ʵ����һ����Ľ���
//Author  	 :  ����� 
//Date   	 :  11/10 
//Student ID :  2019216072
//*********************************************************

#include <stdio.h>
int main()
{
	char str[80], mid[80];
	int i, sign;
	printf("��������Կ��"); 
	scanf("%d",&sign);
	printf("���������ģ�");
	getchar(); 
	gets(str);
	for(i=0;str[i];i++) 
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		    mid[i]=(str[i]-'a'-sign)%26;
			if(mid[i]<0)
			{
			    str[i]=mid[i]+26+'a';
			}
			else 
			{
				str[i]=mid[i]+'a';
			}
			
	    }
	    else if(str[i]>='A'&&str[i]<='Z')
	   	{
		    mid[i]=(str[i]-'A'-sign)%26;
			if(mid[i]<0)
			{
			    str[i]=mid[i]+26+'A';
			}
			else 
			{
				str[i]=mid[i]+'A';
			}
	    } 
	}
	
	puts(str);
	return 0;
}
