//*********************************************************
//File name	 : 0510.c
//Author  	 : 戴宇豪 
//Date   	 : 11.09
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
int main()
{
    char a[80];
    int i, j, ihalf;
	int iflag=0;
    printf("please input a string(length<80):");
    gets(a);
    for(i=0; a[i]!='\0'; i++); 
    
    ihalf = i/2;
    for(j=0; j<ihalf; j++)
    {
        if(a[j]!=a[i-1-j])
        {
			iflag=1;
		} 
		
    }
    if(iflag==0)
    {
	    printf("该字符串是回文\n");
	} 
    if(iflag==1)
    {    
	    printf("该字符串不是回文\n");
	} 
    return 0;
}
