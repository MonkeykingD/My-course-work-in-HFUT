#include<stdio.h> 
#include<math.h>
#define PI 3.1415926
int main(void)
{
	double x,y,d,angle;
	printf("������x��y�����꣺"); 
	scanf("%lf %lf",&x,&y) ;
	d=sqrt(x*x+y*y);
	angle=atan2(y,x)*180/PI;
	printf("�õ㵽ԭ��ľ���Ϊ��%f\n",d);
	printf("�õ��ԭ���������x��ļн�Ϊ��%f",angle);
	return 0;
}
