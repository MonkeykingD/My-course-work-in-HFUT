#include<stdio.h> 
#define PI 3.1415926
int main(void) {
	double r,s;
	printf("������Բ�İ뾶:");
	scanf("%lf",&r);
	if(r>0) 
	{
		s=PI*r*r;
		printf("Բ�����Ϊ��%f",s) ;
	} 
	else 
	{
		printf("������������ȷ�İ뾶");
	}
	system("pause"); 
	return 0;
}
