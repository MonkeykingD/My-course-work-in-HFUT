//*********************************************************
//File name	   : 0201.c
//Author  	   : ����� 
//Date   	   : 10.17
//Student ID   : 2019216072 
//**************************************************
#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,s;
	printf("�����������ε������ߣ�\n"); 
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));//���׹�ʽ  
	}
	printf("�õ������������Ϊ��%f",s); 	
	return 0;
} 
