//*********************************************************
//File name	 : 0805.c
//Author  	 :  father
//Date   	 : 
//Student ID   : 
//*********************************************************

#include<stdio.h>
#include<stdlib.h>
#define N 10
struct student
{
    char Major[20];
    char Class[20];
    char Name[30];
    long Num;
    float score[3];
    float sum;
    float ave;
};
void input(struct student a[N]);
void count (struct student a[N]);
void output(struct student a[N]);
int main(void)
{
    struct student a[N];
    int i,j;
    FILE *fp;
    input(a);
    count(a);
    output(a);
    if((fp=fopen("c:\\Anyo\\Stulnf.csv","w"))==NULL)
    {
        printf("Error");
        exit(0);
    }
    else
    {
        for(i=0;i<N;i++)
        {
            fprintf(fp,"%s  %ld ",a[i].Name,a[i].Num);
            for(j=0;j<3;j++)
                fprintf(fp,"%f  ",a[i].score[j]);
            fprintf(fp,"%f  %f\n",a[i].ave,a[i].sum);
        }


    }
    fclose(fp);
}
void input(struct student a[N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("请输入第%d个同学的信息\n",i+1);
        scanf("%s%s%s",a[i].Major,a[i].Class,a[i].Name);
        scanf("%ld",&a[i].Num);
        for(j=0;j<3;j++)
            scanf("%f",&a[i].score[j]);

    }
}
void count (struct student a[N])
{
    int i,j,sum;
    for(i=0;i<N;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            sum+=a[i].score[j];
        }
        a[i].sum=sum;
        a[i].ave=sum/3.0;
    }
}
void output(struct student a[N])
{
    int i,j;
    for(i=0;i<N;i++)
    {

        printf("输出第%d个学生的姓名，学号，三门课的成绩，总分，平均分\n",i+1);
        printf("%s\t%ld\t\n",a[i].Name,a[i].Num);
        for(j=0;j<3;j++)
            printf("%6.1f",a[i].score[j]);
        printf("\n");
        printf("%f\t%f\t",a[i].sum,a[i].ave);
        printf("\n");
    }
}
