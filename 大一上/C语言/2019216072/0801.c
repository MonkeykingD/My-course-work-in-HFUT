//*********************************************************
//File name	 : 0801.c
//Author  	 : ����� 
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
	
	printf("������ѧ��������\n"); 
    scanf("%d",&n);
    
	struct student *st = NULL;
	st=(struct student *)malloc(n*sizeof(struct student *));
	
	if(st == NULL)
	{
		printf("�ڴ����ʧ�ܡ�\n");
		exit(1); 
	}
	
	for(i=0;i<n;i++)
	{
		st[i].sum = 0;
		st[i].ave = 0;
		
		printf("�������%dλѧ����������\n", i+1);
		scanf("%s", st[i].name);
		
		printf("�������ѧ����ѧ�ţ�\n");
		scanf("%s", st[i].num); 
		
		printf("�������ѧ�������Ź��γɼ�(�ո����)��\n");
		for(j = 0; j < 4; j++) 
		{
			scanf("%f", &st[i].score[j]);
			st[i].sum += st[i].score[j];
		}
		
		st[i].ave=st[i].sum/4;
		
		printf("\n%sͬѧ���ܷ�Ϊ%.3f,ƽ����Ϊ%.3f\n",st[i].name,st[i].sum,st[i].ave);
		
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
	printf("\n���ֽܷ����ѧ������Ϊ��\n\n");

	for(i = 0; i < n; i++)
	{
		printf("�� %d λ��\n������", i+1);
		printf("%s", st[i].name);
		
		printf(" ѧ�ţ�");
		printf("%s", st[i].num);
		
		printf("\n���ſ�Ŀ�ɼ���\n");
		for(j = 0; j < 4; j++)
		{
			printf("%.3f ", st[i].score[j]);
		}
		printf("\n�ܷ֣�%f  ƽ���֣�%f\n\n", st[i].sum, st[i].ave);
	}

	free (st);
	printf("\n----------------The Divider-----------------\n");
	
	return 0; 
} 