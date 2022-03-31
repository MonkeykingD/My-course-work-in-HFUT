//*********************************************************
//File name	 : 0402.c
//Author  	 : ´÷ÓîºÀ 
//Date   	 : 11.02
//Student ID : 2019216072
//*********************************************************

#include <stdio.h>
int main()
{
    char str[80];
    int i,n,j=0,flag=1;
    gets(str);
    if(str[0] == '-' || str[0] == '+')
    {
        for(i=1;str[i]!='\0';i++)
        {
            if(str[i] < '0' || str[i] > '9')
            {
               flag=0;
               break;
            }
			else
			{
				j = j * 10 + str[i] - '0';
			}
			
        }      
    }
    else
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i] < '0' || str[i] > '9')
            {
               flag=0;
               break;
            }
			else
			{
				j=j*10+str[i]-'0';
			}
			
        }
    }
    
    if(flag==0)
    {
    	printf("error");
	}
	else
	{
		if(str[0]=='-')
		{
			printf("%d",-j);
		}
		else
		{
			printf("%d",j);
		}
	}
    return 0;
}
