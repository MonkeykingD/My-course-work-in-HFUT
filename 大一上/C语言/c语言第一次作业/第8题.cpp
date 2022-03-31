#include<stdio.h> 
int main(void)
{
	printf("char在内存中所占字节数为：%d\n",sizeof(char));
	printf("short在内存中所占字节数为：%d\n",sizeof(short));
	printf("int在内存中所占字节数为：%d\n",sizeof(int));
	printf("long在内存中所占字节数为：%d\n",sizeof(long));
	printf("float在内存中所占字节数为：%d\n",sizeof(float));
	printf("double在内存中所占字节数为：%d\n",sizeof(double));
}
