//*********************************************************
//File name	 :用随机函数（自查功能和用法）生成20个数存放到数组中并按降序排序，从键盘输入一个数，完成在数组中的二分查找
//Author  	 :戴宇豪  
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
	printf("请输入要查找的数:\n");
	scanf("%d",&x);		
	low=0;
	max=19;
	flag=0;
	while(low<=max)
	{
		mid=(low+max)/2;
		if(x==a[mid])
		{
			printf("查找到了,位置是a[%d]",mid);
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
		printf("没找到!");
				
	return 0;	
		
 } 
