//*********************************************************
//File name	 : 0205.c
//Author  	 : 戴宇豪 
//Date   	 : 10.17
//Student ID : 2019216072 
//*********************************************************
#include <stdio.h>
#include <math.h>
#define  PI 3.1415926
int main()
{
    float x, y, z;
    float d, a_x, a_y, a_z;
    printf("请输入一点的三维坐标：\n");
    scanf("%f%f%f", &x, &y, &z);
    d=sqrt(x*x+y*y+z*z);
    if(d!=0)
	{
	
        a_x=acos(x/d)*180/PI;
        a_y=acos(y/d)*180/PI;
        a_z=acos(z/d)*180/PI;
        printf("该点与原点的距离为：%f\n", d);
        if(a_x<0)
	    {
	        a_x=180-a_x;
	        printf("该点与x轴夹角=%f\n", a_x);
        }
        else
	    {
	    	printf("该点与x轴夹角=%f\n", a_x);	
		}
        if(a_y<0)
    	{
	        a_y=180-a_y;
	        printf("该点与y轴夹角=%f\n", a_y);
        }
        else
	    {
		    printf("该点与y轴夹角=%f\n", a_y);	
	    }    
        if(a_z<0)
	    {
	        a_z=180-a_z;
	        printf("该点与z轴夹角=%f\n", a_z);
        }
        else
	    {
	        printf("该点与z轴夹角=%f\n", a_z);	
	    }
	}
	else
	{
		printf("(0,0,0)与各坐标轴的夹角可为任意值");
	}
    return 0;
}
