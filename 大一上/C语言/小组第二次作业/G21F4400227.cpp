//*********************************************************
//File name	 :������������Բ鹦�ܺ��÷�������20������ŵ������в����������򣬴Ӽ�������һ����������������еĶ��ֲ���
//Author  	 :�����  
//Date   	 :11.11 
//Student ID :2019216072 
//*********************************************************
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));
	int a[20],i,j,k,t,x,low,max,mid,flag;	
	for(i=0;i<20;i++)
	{
		a[i]=rand();
	}
	
	for(j=0;j<19;j++)
	{
		for(k=j+1;k<20;k++)
		{
			if(a[j]<a[k])
			{
				t=a[j];
				a[j]=a[k];
				a[k]=t;
		    }
		    
		}
		
	}
	
	for(i=0;i<20;i++)
	{
		printf("%d ",a[i]);
    }
	printf("\n");
	printf("������Ҫ���ҵ���:\n");
	scanf("%d",&x);		
	low=0;
	max=19;
	flag=0;
	while(low<=max)
	{
		mid=(low+max)/2;
		if(x==a[mid])
		{
			printf("���ҵ���,λ����a[%d]",mid);
			flag=1;
			break;
		}
		else if(x>a[mid])
		    {
			    max=mid-1;
		    }
		else
			{
			    low=mid+1;
			}
	}
	
	if(flag!=1)
		printf("û�ҵ�!");
				
	return 0;	
		
 } 
