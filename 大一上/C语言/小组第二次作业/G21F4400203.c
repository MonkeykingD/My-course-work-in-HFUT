//*********************************************************
//File name	 :??ӡ?????ԡ??????Σ??߽ף?
//Author  	 :??????
//Date   	 :11.10
//Student ID :2019216072
//*********************************************************

#include<stdio.h>
int main()
{
	int a[7][7]={0};
	int i,j,k;
	for(i=0;i<7;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
	}
	
	for(j=2;j<7;j++)
	{
		for(k=1;k<j;k++)
		{
			a[j][k]=a[j-1][k-1]+a[j-1][k];
		}
	}
	 
	for(i=7;i>0;i--)
	{    
		for(j=0;j<8-i;j++)
		{
			printf("%d ",a[7-i][j]);
		}
			
		printf("\n");
	}
	return 0;
} 
