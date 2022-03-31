//*********************************************************
//File name	 : 0302.c
//Author  	 : 戴宇豪
//Date   	 : 10.23
//Student ID : 2019216072
//*********************************************************
#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个1到12的整型数：");
    scanf("%d", &a);
    switch (a)
    {
    	case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("Apri");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8: 
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Input error");  
    }
    return 0;
}
