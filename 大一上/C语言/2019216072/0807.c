//*********************************************************
//File name	 : 0807.c
//Author  	 : 戴宇豪 
//Date   	 : 12.26
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void distime(double *);

int main()
{
    int i;
    double drand[86400];
    FILE *fp = NULL;


    if ((fp = fopen("s.bin", "wb")) == NULL)
    {
        printf("文件创建失败");
        exit(0);
    }

    srand((unsigned)time(NULL));

    for (i = 0; i < 86400; i++)
    {
        drand[i] = (double)(rand() % 1000 / 10.0);
        fprintf(fp, "%lf\n", drand[i]);
    }
    
    fclose(fp);
    printf("序列表已生成并存入文件\n");
    distime(drand); 

    return 0;
}

void distime(double drand[86400])
{
	long second;
	time_t tNow;
    struct tm *sysLocal;
	time(&tNow);
    sysLocal = localtime(&tNow);
    second = sysLocal -> tm_hour * 3600 + sysLocal -> tm_min * 60 + sysLocal -> tm_sec;
    printf("当前时间为%02d:%02d:%02d,对应的时间(%ld秒)序列表为%.lf", sysLocal -> tm_hour, sysLocal -> tm_min, sysLocal -> tm_sec,
           second, drand[second - 1]);
}
