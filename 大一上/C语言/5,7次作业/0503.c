//*********************************************************
//File name	 : 0503.c
//Author  	 : ����� 
//Date   	 : 11.07
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    int a[10], odd=0, even=0;
    int i, j; 
    for(i=0;i<10;i++)
    {
	    scanf("%d",&a[i]);
    }
	for(i=0;i<10;i++)
    {
    	if(a[i]%2)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    
    printf("������%d����ż����%d��",odd,even);
}
