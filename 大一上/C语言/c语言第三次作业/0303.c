//*********************************************************
//File name	 : 0303.c
//Author  	 : ����� 
//Date   	 : 10.24
//Student ID : 2019216072 
//*********************************************************
#include <stdio.h>
int main()
{
    float a, b, c, max, min;
    printf("�������������ݣ�");
    scanf("%f%f%f", &a, &b, &c);
    max=a;
    min=b;
	if(a < b)
    {
       max = b;
       min = a;
    } 
    if(max < c)
    {
    	max=c;
	}
	else if(c < min)
	{
		min=c;
	}
    printf("max=%f, min=%f", max, min);
    return 0;
}
