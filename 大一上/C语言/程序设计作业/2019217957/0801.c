//*********************************************************
//File name	 : 0801.c
//Author  	 :  周懿琦
//Date   	 : 2019.12.24
//Student ID   : 2019217957
//*********************************************************

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>

struct student
{
	char name[200];
	char num[200];
	float score[4], sum, ave;
};

int main()
{
	int n;
	struct student *list = NULL, temp;
	int i, j;

	printf("学生成绩排序，请输入学生人数：\n");
	scanf("%d", &n);

	list = (struct student *)malloc((n + 1) * sizeof (struct student));
	if(list == NULL)
    {
        printf("内存分配失败.\n");
        exit(1);
    }

	for(i = 1; i < n + 1; i++)
	{
		list[i].sum = 0;

		printf("请输入第 %d 位学生的姓名：\n", i);
		fflush(stdin);
		gets (list[i].name);

		printf("请输入该学生的学号：\n");
		fflush(stdin);
		gets (list[i].num);

		printf("请输入该学生的四门科目成绩（空格隔开）：\n");
		for(j = 0; j < 4; j++)
		{
			scanf("%f", &list[i].score[j]);
			list[i].sum += list[i].score[j];
		}

		list[i].ave = list[i].sum / 4;

		printf("\n%该同学的总分为 %.3f ，平均分为 %.3f.\n\n", list[i].sum, list[i].ave);
		system ("pause");
		printf("\n");
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n - i; j++)
		{
			if (list[j].sum < list[j + 1].sum)
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

	printf("\n----------------The Divider-----------------\n");
	printf("\n按总分降序的学生资料为：\n\n");

	for(i = 1; i < n + 1; i++)
	{
		printf("第 %d 位：\n姓名：", i);
		puts (list[i].name);
		printf(" 学号：");
		puts (list[i].num);
		printf("\n四门科目成绩：\n");
		for(j = 0; j < 4; j++)
		{
			printf("%.3f ", list[i].score[j]);
		}
		printf("\n总分：%f  平均分：%f\n\n", list[i].sum, list[i].ave);
	}

	free (list);
	printf("\n----------------The Divider-----------------\n");
	printf("程序结束，按任意键退出.\n");
	getchar;

	return 0;
}
