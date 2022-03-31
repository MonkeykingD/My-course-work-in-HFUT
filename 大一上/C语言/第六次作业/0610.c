//*********************************************************
//File name	 : 0610.c
//Author  	 : 戴宇豪
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	float a[3][4],s[3][2],sum[3]={0};
	float (*p)[4],(*q)[2],fc,aver;
	int i,j;
	p=a;
	printf("请输入一个3行4列浮点型数组：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",p[i]+j);
			sum[i]=sum[i]+*(p[i]+j);
		}
	}
	p=a;
	q=s;
	for(i=0;i<3;i++)
	{
		aver=sum[i]/4;
		for(j=0,fc=0.f;j<4;j++)
		{
		 *(q[i]+0)=aver;
		 fc=fc+(*(p[i]+j)-aver)*(*(p[i]+j)-aver);
		}

		*(q[i]+1)=fc/4;
	
	}
	printf("  平均数     方差\n");
	for(i=0,q=s;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  %f",*(q[i]+j));
		}

		printf("\n");
    
	}
    return 0;
}
