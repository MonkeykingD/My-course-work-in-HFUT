#include<stdio.h> 
#define PI 3.1415926
int main(void) {
	double r,s;
	printf("请输入圆的半径:");
	scanf("%lf",&r);
	if(r>0) 
	{
		s=PI*r*r;
		printf("圆的面积为：%f",s) ;
	} 
	else 
	{
		printf("请重新输入正确的半径");
	}
	system("pause"); 
	return 0;
}
