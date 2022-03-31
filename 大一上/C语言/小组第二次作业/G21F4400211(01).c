//*********************************************************
//File name	 :⒒编写两个程序：
//            ⑴实现通过凯撒密码对字符串加密，密钥通过键盘输入。
//Author  	 :  戴宇豪 
//Date   	 : 11.10 
//Student ID :2019216072
//*********************************************************

#include <stdio.h>
int main()
{
	char str[80],str1[80];
	
	int i,sign;
	
	
	printf("请输入密钥："); 
	scanf("%d",&sign);
	printf("请输入明文：");
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
