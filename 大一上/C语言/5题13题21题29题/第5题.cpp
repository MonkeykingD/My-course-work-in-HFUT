#include  <stdio.h>
int main ()
{
	int m,n,t;
	int k,ans;
	do
	{
	    printf("请输入自然数m和n：\n");
	    scanf("%d%d",&m,&n); 
	}while(m<=0||n<=0);
	if(n>m)
	{
		t=n;
		n=m;
		m=t; 
	}
	do
	{
		k=m%n;
		ans=n;
		m=n;
		n=k;
	}while(k);
	printf("这两个自然数的最大公约数是%d",ans);	
	return 0;
}
