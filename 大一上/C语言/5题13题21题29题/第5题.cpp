#include  <stdio.h>
int main ()
{
	int m,n,t;
	int k,ans;
	do
	{
	    printf("��������Ȼ��m��n��\n");
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
	printf("��������Ȼ�������Լ����%d",ans);	
	return 0;
}
