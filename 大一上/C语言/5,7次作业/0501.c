//*********************************************************
//File name	 : 0501.c
//Author  	 : �����
//Date   	 : 11.06
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int a[10], imax, ipos;
    int i, j;
    for(i=0; i<10; i++)
    {
	    scanf("%d", &a[i]);
    }
	imax = a[0];
	ipos = 0;
    for(j=0; j<10; j++)
    {
    	if(a[j] >= imax)
        {
            imax = a[j];
            ipos = j;
        }
    }
    
    printf("��10�����������ֵ��%d\n",imax);
    printf("����λ����%d(��0��9)", ipos);
    return 0;
}
