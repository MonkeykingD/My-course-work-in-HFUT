//*********************************************************
//File name	 : 0804.c
//Author  	 :  你们的father
//Date   	 : 
//Student ID : 383838388
//*********************************************************

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


#define EWRtoG  48
#define EWGtoY  24
#define EWYtoR  40
#define NSRtoG  6
#define NSGtoY  3
#define NSYtoR  5

typedef unsigned int BYTEPORT;

void Reinitialize();
void Delay1s();
void Delay(int);

int main()
{
	BYTEPORT Light = 34;
	char LIGHT[100];//EW R, NS G
	int i, j;
	int iRTime, iGTime;

	printf("请输入红灯、绿灯持续的秒数：\n");
	scanf("%d%d", &iRTime, &iGTime);

	Reinitialize();

	while(1)ftp://10.111.100.207
	{
		Delay (iGTime);
		Light ^= NSGtoY;
		itoa (Light, LIGHT, 2);
		printf("%s  南北路绿灯转黄灯.\n", LIGHT);
		Delay (5);
		Light ^= EWRtoG;
		Light ^= NSYtoR;
		itoa (Light, LIGHT, 2);
		printf("%s  东西路红灯转绿灯,南北路黄灯转红灯.\n", LIGHT);

		Delay (iGTime);
		Light ^= EWGtoY;
		printf("%s  东西路绿灯转黄灯.\n", Light);
		itoa (Light, LIGHT, 2);
		Delay (5);
		Light ^= NSRtoG;
		Light ^= EWYtoR;
		itoa (Light, LIGHT, 2);
		printf("%s  南北路红灯转绿灯,东西路黄灯转红灯\n", LIGHT);
	}

	system ("pause");

	return 0;
}

void Delay1s()
{
    clock_t start;
    start = clock();

    while((clock() - start) < CLK_TCK)
    {
    	;
	}

}

void Delay(int n)
{
	BYTEPORT i;

	for(i = 0; i < n; i++)
	{
		Delay1s();
	}
}

void Reinitialize()
{
	printf(" 东西 南北\n");
	printf("红绿黄红绿黄\n");
}
