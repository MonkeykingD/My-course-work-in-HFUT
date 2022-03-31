#include  <stdio.h>
int main ()
{
    int father=30,son=6;
	int i=0;
	while(father!=2*son)
	{
	    i++;
		father++;
		son++;
	}
	printf("%d年后，父亲的年龄是儿子的两倍",i);	 
	return 0;
}
