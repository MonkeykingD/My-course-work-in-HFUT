//*********************************************************
//File name	 :GF19080419
//Author  	 :����� 
//Date   	 :11.10
//Student ID :2019216072
//*********************************************************
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
    char str[16];
    int sum, n;
	int i, j; 
    sum = 0;
    printf("������һ���������ַ���:");
    scanf("%s",str);
    n = strlen(str);
   
    if(str[0] == '0')
    {
        printf("");
    }
    else if(str[0] != '0')
    {
        printf("-");
    }
    i=0;
    for(j=n;j>1;j--)
    {
    	i*=2;
    	i++; 
    	sum+=((str[j-1]-'0')*i);
	}
    printf("ת������з�������Ϊ��%d", sum);
    return 0;
}
