//*********************************************************
//File name	 : 0801.c
//Author  	 : 戴宇豪 
//Date   	 : 12.24
//Student ID : 2019216072
//*********************************************************

#include<stdio.h> 
#include<stdlib.h>

struct student
{
	char name[12];
	char num[16];
	float score[4];
	float sum,ave;
};

int main()
{
	int n;
	int i,j;
	struct student t;
	
	printf("请输入学生人数：\n"); 
    scanf("%d",&n);
    
	struct student *st = NULL;
	st=(struct student *)malloc(n*sizeof(struct student *));
	
	if(st == NULL)
	{
		printf("内存分配失败。\n");
		exit(1); 
	}
	
	for(i=0;i<n;i++)
	{
		st[i].sum = 0;
		st[i].ave = 0;
		
		printf("请输入第%d位学生的姓名：\n", i+1);
		scanf("%s", st[i].name);
		
		printf("请输入该学生的学号：\n");
		scanf("%s", st[i].num); 
		
		printf("请输入该学生的四门功课成绩(空格隔开)：\n");
		for(j = 0; j < 4; j++) 
		{
			scanf("%f", &st[i].score[j]);
			st[i].sum += st[i].score[j];
		}
		
		st[i].ave=st[i].sum/4;
		
		printf("\n%s同学的总分为%.3f,平均分为%.3f\n",st[i].name,st[i].sum,st[i].ave);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    if(st[i].sum<st[j].sum)
		    {
		    	t = st[j];
		    	st[j] = st[i];
		    	st[i] = t;
			}
		}
	 } 
	 
	printf("\n----------------The Divider-----------------\n");
	printf("\n按总分降序的学生资料为：\n\n");

	for(i = 0; i < n; i++)
	{
		printf("第 %d 位：\n姓名：", i+1);
		printf("%s", st[i].name);
		
		printf(" 学号：");
		printf("%s", st[i].num);
		
		printf("\n四门科目成绩：\n");
		for(j = 0; j < 4; j++)
		{
			printf("%.3f ", st[i].score[j]);
		}
		printf("\n总分：%f  平均分：%f\n\n", st[i].sum, st[i].ave);
	}

	free (st);
	printf("\n----------------The Divider-----------------\n");
	
	return 0; 
} 