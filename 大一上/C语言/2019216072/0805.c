//*********************************************************
//File name	 : 0805.c
//Author  	 : ����� 
//Date   	 : 12.24
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<stdlib.h>
#define N 10        //ѧ������ 

struct student
{
    char major[20];
    char _class[20];
    char name[30];
    char num[16];
    float score[3];
    float sum,ave;
};

void Input(struct student stu[N]);
void Count(struct student stu[N]);
void Output(struct student stu[N]);

int main()
{
    struct student stu[N];
    int i, j;
    FILE *fp=NULL;
    Input(stu);
    Count(stu);
    Output(stu);
    if((fp = fopen("Stulnf.csv", "w")) == NULL)
    {
        printf("Error");
        exit(0);
    }
    else
    {
    	fprintf(fp,"����,ѧ��,��һ�ųɼ�,�ڶ��ųɼ�,�����ųɼ�,ƽ���ɼ�,�ܳɼ�\n");
        for(i = 0; i < N; i++)
        {
            fprintf(fp, "%s,%s ", stu[i].name, stu[i].num);
            for(j = 0; j < 3; j++)
            {   
			    fprintf(fp, ",%f", stu[i].score[j]);
			} 
            fprintf(fp, ",%.2f,%.2f\n", stu[i].ave, stu[i].sum);
        }
    }
    fclose(fp);
	
	return 0; 
}

void Input(struct student stu[N])
{
    int i,j;
    for(i = 0; i < N; i++)
    {
        printf("�������%d��ͬѧ��רҵ���༶��������ѧ�źͳɼ�\n",i+1);
        scanf("%s%s%s%s", stu[i].major, stu[i]._class, stu[i].name, stu[i].num);
        
        for(j = 0; j < 3; j++)   //�������ſεĳɼ� 
        {
			scanf("%f", &stu[i].score[j]);
		} 

    }
}

void Count (struct student stu[N])
{
    int i, j, sum;
    for(i = 0; i < N; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += stu[i].score[j];
        }
        stu[i].sum = sum;
        stu[i].ave = sum / 3.0;
    }
}

void Output(struct student stu[N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {

        printf("\n\n��%d��ѧ����������%s\nѧ��:%s\n", i+1, stu[i].name, stu[i].num);
        for(j = 0; j < 3; j++)
        {
			printf("��%d�ſεĳɼ���%6.1f\n", j+1, stu[i].score[j]);
		}
        printf("�ܷ֣�%.2f\nƽ���֣�%.2f\t", stu[i].sum, stu[i].ave);
        printf("\n");
    }
}
