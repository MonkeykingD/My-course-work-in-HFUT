//*********************************************************
//File name	 : 0804.c
//Author  	 :  ���ǵ�father
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

	printf("�������ơ��̵Ƴ�����������\n");
	scanf("%d%d", &iRTime, &iGTime);

	Reinitialize();

	while(1)ftp://10.111.100.207
	{
		Delay (iGTime);
		Light ^= NSGtoY;
		itoa (Light, LIGHT, 2);
		printf("%s  �ϱ�·�̵�ת�Ƶ�.\n", LIGHT);
		Delay (5);
		Light ^= EWRtoG;
		Light ^= NSYtoR;
		itoa (Light, LIGHT, 2);
		printf("%s  ����·���ת�̵�,�ϱ�·�Ƶ�ת���.\n", LIGHT);

		Delay (iGTime);
		Light ^= EWGtoY;
		printf("%s  ����·�̵�ת�Ƶ�.\n", Light);
		itoa (Light, LIGHT, 2);
		Delay (5);
		Light ^= NSRtoG;
		Light ^= EWYtoR;
		itoa (Light, LIGHT, 2);
		printf("%s  �ϱ�·���ת�̵�,����·�Ƶ�ת���\n", LIGHT);
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
	printf(" ���� �ϱ�\n");
	printf("���̻ƺ��̻�\n");
}
