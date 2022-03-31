#include<stdio.h> 
#include<math.h>
#define PI 3.1415926
int main(void)
{
	double x,y,d,angle;
	printf("请输入x和y的坐标："); 
	scanf("%lf %lf",&x,&y) ;
	d=sqrt(x*x+y*y);
	angle=atan2(y,x)*180/PI;
	printf("该点到原点的距离为：%f\n",d);
	printf("该点和原点的连线与x轴的夹角为：%f",angle);
	return 0;
}
