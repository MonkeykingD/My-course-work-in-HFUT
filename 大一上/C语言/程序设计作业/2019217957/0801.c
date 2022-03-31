//*********************************************************
//File name	 : 0801.c
//Author  	 :  ��ܲ��
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

	printf("ѧ���ɼ�����������ѧ��������\n");
	scanf("%d", &n);

	list = (struct student *)malloc((n + 1) * sizeof (struct student));
	if(list == NULL)
    {
        printf("�ڴ����ʧ��.\n");
        exit(1);
    }

	for(i = 1; i < n + 1; i++)
	{
		list[i].sum = 0;

		printf("������� %d λѧ����������\n", i);
		fflush(stdin);
		gets (list[i].name);

		printf("�������ѧ����ѧ�ţ�\n");
		fflush(stdin);
		gets (list[i].num);

		printf("�������ѧ�������ſ�Ŀ�ɼ����ո��������\n");
		for(j = 0; j < 4; j++)
		{
			scanf("%f", &list[i].score[j]);
			list[i].sum += list[i].score[j];
		}

		list[i].ave = list[i].sum / 4;

		printf("\n%��ͬѧ���ܷ�Ϊ %.3f ��ƽ����Ϊ %.3f.\n\n", list[i].sum, list[i].ave);
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
	printf("\n���ֽܷ����ѧ������Ϊ��\n\n");

	for(i = 1; i < n + 1; i++)
	{
		printf("�� %d λ��\n������", i);
		puts (list[i].name);
		printf(" ѧ�ţ�");
		puts (list[i].num);
		printf("\n���ſ�Ŀ�ɼ���\n");
		for(j = 0; j < 4; j++)
		{
			printf("%.3f ", list[i].score[j]);
		}
		printf("\n�ܷ֣�%f  ƽ���֣�%f\n\n", list[i].sum, list[i].ave);
	}

	free (list);
	printf("\n----------------The Divider-----------------\n");
	printf("�����������������˳�.\n");
	getchar;

	return 0;
}
