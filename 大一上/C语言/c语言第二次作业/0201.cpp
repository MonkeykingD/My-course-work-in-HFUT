//*********************************************************
//File name	   : 0201.c
//Author  	   : 戴宇豪 
//Date   	   : 10.17
//Student ID   : 2019216072 
//**************************************************
#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,s;
	printf("请输入三角形的三条边：\n"); 
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));//海伦公式  
	}
	printf("得到的三角形面积为：%f",s); 	
	return 0;
} 
