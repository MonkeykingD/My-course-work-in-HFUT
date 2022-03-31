//*********************************************************
//File name	 : 0804.c
//Author  	 : ����� 
//Date   	 : 12.25
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<time.h>

                   //���̻ƺ��̻� 
#define EWRtoG  48//110 000��������쵽�� 
#define EWGtoY  24//010 110���������̵��� 
#define EWYtoR  40//101 000��������Ƶ��� 
#define NSRtoG  6 //000 110�ϱ�����쵽�� 
#define NSGtoY  3 //000 011�ϱ������̵��� 
#define NSYtoR  5 //000 101�ϱ�����Ƶ��� 

typedef unsigned char BYTEPORT;

void Delay1s();
void Delay(int);
void DisLight(BYTEPORT n);
void Changelight(BYTEPORT irtime, BYTEPORT igtime);

int main()
{
    int irtime, igtime;
	printf("�������ơ��̵Ƴ���������\n");
	scanf("%d%d", &irtime, &igtime);
    Changelight(irtime, igtime);
	return 0;
}

void Delay1s()
{
    clock_t start;
    start = clock();
    while((clock() - start) < CLOCKS_PER_SEC); 
}

void Delay(int n)
{
	BYTEPORT i;

	for(i = 0; i < n; i++)
	{
		Delay1s();
	}
}

void DisLight(BYTEPORT n) 
{	
	switch(n)
	{
		case(34)://100 010
		{
			printf("  ��    ��\n");
			break; 
		}
		case(33)://100 001
		{
			printf("  ��    ��\n");
		    break; 
		}
		case(20)://010 100
		{
			printf("  ��    ��\n");
			break; 
		}
		case(12)://001 100
		{
			printf("  ��    ��\n");
			break; 
		}
	}
}

void Changelight(BYTEPORT irtime, BYTEPORT igtime)
{
	BYTEPORT light = 34;//100 010�������ϱ��� 
	int i, j;
	printf("\n\n���̵��������:\n\n") ;
	printf(" ����  �ϱ�\n");
	printf("  ��    ��\n");
	
	while(1)
	{
		Delay (igtime); 
		light ^= NSGtoY;
		DisLight(light);
		
		Delay (5);
		light ^= EWRtoG;
		DisLight(light);
		
		light ^= NSYtoR;
		DisLight(light);
		
		Delay (irtime);
		light^=EWGtoY;
		DisLight(light);
		
		Delay (5);
		light ^= NSRtoG;
		DisLight(light);
		
		light ^= EWYtoR;
		DisLight(light);

	}
}