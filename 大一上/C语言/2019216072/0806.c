//*********************************************************
//File name	 : 0806.c
//Author  	 : ����� 
//Date   	 : 12.25
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<stdlib.h> 

void _Xor(char in[80], char out[80]);

int main()
{
	char in[80]="hamlet.txt", out[80]="Cyb.dat";//ͨ���ı�in��out��ֵ������������ܺ������� 
    _Xor(in, out);
    return 0; 
} 
 
 void _Xor(char in[80], char out[80])
 {
 	char key, ch, xch;
	FILE * fp1 = NULL;
	FILE * fp2 = NULL;
	printf("��������Կ(����Ϊ1Byte):"); 
	scanf("%c", &key); 
	if((fp1 = fopen(in, "rb")) == NULL)
	{
		printf("The file <%s> can not be opened.", in);
        exit(0);
	}
	
	if((fp2 = fopen(out, "wb")) == NULL)
	{
		printf("The file <%s> can not be opened.", in);
		fclose(fp1);
        exit(0);
	}
	else
	{
        while((ch = fgetc(fp1)) != EOF)
		{
			xch = ch ^ key;
		    fputc(xch, fp2);
		} 
	}
	printf("����(����)���"); 
	fclose(fp1);
	fclose(fp2);
 }
