//*********************************************************
//File name	 : 0511.c
//Author  	 : ´÷ÓîºÀ
//Date   	 : 11.09
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
    int count=0, i;
    char str[80];
    char m;
    printf("Enter a string(length<80):");
    gets(str);
    printf("Enter a word:");
    scanf("%c",&m);
    for(i=0; str[i]!='\0'; i++)
    {
	    if(str[i]==m)
        {
            count++;
        }
        
    } 
    
    printf("the number is %d\n", count);
    return 0;
}
