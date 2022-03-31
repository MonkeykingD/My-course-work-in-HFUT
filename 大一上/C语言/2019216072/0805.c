//*********************************************************
//File name	 : 0805.c
//Author  	 : 戴宇豪 
//Date   	 : 12.24
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<stdlib.h>
#define N 10        //学生人数 

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
    	fprintf(fp,"姓名,学号,第一门成绩,第二门成绩,第三门成绩,平均成绩,总成绩\n");
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
        printf("请输入第%d个同学的专业、班级、姓名、学号和成绩\n",i+1);
        scanf("%s%s%s%s", stu[i].major, stu[i]._class, stu[i].name, stu[i].num);
        
        for(j = 0; j < 3; j++)   //输入三门课的成绩 
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

        printf("\n\n第%d个学生的姓名：%s\n学号:%s\n", i+1, stu[i].name, stu[i].num);
        for(j = 0; j < 3; j++)
        {
			printf("第%d门课的成绩：%6.1f\n", j+1, stu[i].score[j]);
		}
        printf("总分：%.2f\n平均分：%.2f\t", stu[i].sum, stu[i].ave);
        printf("\n");
    }
}
