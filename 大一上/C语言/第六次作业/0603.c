//*********************************************************
//File name	 : 0603.c
//Author  	 : 戴宇豪
//Date   	 : 11.15
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][20], t[20];
    char (*p)[20], (*q)[20];
    p=a;
    printf("请输入10个英文名字：\n");
    for(p = a; p < a + 10; p++)
    {
		gets((char *)p);
	}

    for (p = a; p  < a + 9; p++)
    {
        for (q = p + 1; q  < a +10; q++)
        {
            if (strcmp((char *)p , (char *)q)> 0)
            {
                strcpy(t, (char *)p);
                strcpy((char *)p, (char *)q);
                strcpy((char *)q, t);
            }

        }

    }

    for (p = a; p <a + 10; p++)
    {
        puts((char *)p);
    }

    return 0;
}
