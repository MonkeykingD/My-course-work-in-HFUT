//*********************************************************
//File name	 : 0205.c
//Author  	 : ����� 
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
    printf("������һ�����ά���꣺\n");
    scanf("%f%f%f", &x, &y, &z);
    d=sqrt(x*x+y*y+z*z);
    if(d!=0)
	{
	
        a_x=acos(x/d)*180/PI;
        a_y=acos(y/d)*180/PI;
        a_z=acos(z/d)*180/PI;
        printf("�õ���ԭ��ľ���Ϊ��%f\n", d);
        if(a_x<0)
	    {
	        a_x=180-a_x;
	        printf("�õ���x��н�=%f\n", a_x);
        }
        else
	    {
	    	printf("�õ���x��н�=%f\n", a_x);	
		}
        if(a_y<0)
    	{
	        a_y=180-a_y;
	        printf("�õ���y��н�=%f\n", a_y);
        }
        else
	    {
		    printf("�õ���y��н�=%f\n", a_y);	
	    }    
        if(a_z<0)
	    {
	        a_z=180-a_z;
	        printf("�õ���z��н�=%f\n", a_z);
        }
        else
	    {
	        printf("�õ���z��н�=%f\n", a_z);	
	    }
	}
	else
	{
		printf("(0,0,0)���������ļнǿ�Ϊ����ֵ");
	}
    return 0;
}
