//*********************************************************
//File name	 : 0804.c
//Author  	 : 戴宇豪 
//Date   	 : 12.25
//Student ID : 2019216072
//*********************************************************

#include<stdio.h>
#include<time.h>

                   //红绿黄红绿黄 
#define EWRtoG  48//110 000东西方向红到绿 
#define EWGtoY  24//010 110东西方向绿到黄 
#define EWYtoR  40//101 000东西方向黄到红 
#define NSRtoG  6 //000 110南北方向红到绿 
#define NSGtoY  3 //000 011南北方向绿到黄 
#define NSYtoR  5 //000 101南北方向黄到红 

typedef unsigned char BYTEPORT;

void Delay1s();
void Delay(int);
void DisLight(BYTEPORT n);
void Changelight(BYTEPORT irtime, BYTEPORT igtime);

int main()
{
    int irtime, igtime;
	printf("请输入红灯、绿灯持续秒数：\n");
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
			printf("  红    绿\n");
			break; 
		}
		case(33)://100 001
		{
			printf("  红    黄\n");
		    break; 
		}
		case(20)://010 100
		{
			printf("  绿    红\n");
			break; 
		}
		case(12)://001 100
		{
			printf("  黄    红\n");
			break; 
		}
	}
}

void Changelight(BYTEPORT irtime, BYTEPORT igtime)
{
	BYTEPORT light = 34;//100 010东西红南北绿 
	int i, j;
	printf("\n\n红绿灯情况如下:\n\n") ;
	printf(" 东西  南北\n");
	printf("  红    绿\n");
	
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