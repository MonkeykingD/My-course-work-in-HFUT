#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>
#pragma comment(lib,"winmm.lib")

#define BOXSIZE		20                                //ϸ���߳�
#define BOXNUM		40                                //ÿ�л�ÿ�е�ϸ����Ŀ
#define GAMELENGTH  (BOXSIZE*BOXNUM)                  //��Ϸ�򳤶�
#define INFORWIDTH	150                               //��Ϣ����
#define INFORHEIGHT GAMELENGTH                      //��Ϣ��߶�
#define GAP			10                                //��϶����
#define WNDWIDTH	(GAP*3+INFORWIDTH+GAMELENGTH)     //���ڿ��
#define WNDHEIGHT   (GAMELENGTH+GAP*2)                //���ڸ߶�

struct cell
{
	bool life;           //ϸ����ǰ����״̬(falseΪ������trueΪ���)
	bool nextlife;       //ϸ����һ������״̬
}cells[BOXNUM][BOXNUM];	 //��ͼ

//��Ϸ����
char rule[] = {
"ÿ�����ӵ�������ѭ�����ԭ��\n\
----�� ���һ��ϸ����Χ�� 3 ��ϸ��Ϊ����һ��ϸ����Χ���� 8 ��ϸ���������\n\
ϸ��Ϊ��������ϸ����ԭ��Ϊ������תΪ������ԭ��Ϊ�����򱣳ֲ��䣩\n\
----�� ���һ��ϸ����Χ�� 2 ��ϸ��Ϊ�������ϸ��������״̬���ֲ��䣻\n\
----�� ����������£���ϸ��Ϊ��������ϸ����ԭ��Ϊ������תΪ������ԭ��Ϊ�����򱣳ֲ���" };     
//��Ϸ˵��
char intro[] = {
"��ɫ����������ϸ������ɫ�������������ϸ����\n\
��ҿ��������༭��ͼ�ϵ�ϸ����\n\
�ڳ����ݻ��Ĺ����У�ֻ��ֹͣ�ݻ����ܼ����༭��ͼ�ϵ�ϸ����"};
bool isnext=false;   //�Ƿ��ڳ����ݻ�������

void Welcome();            //��Ϸ��ӭ����(������Դ�ļ���)
void InitCells();          //��ʼ��ϸ��
void RanCells();           //���ϸ��
void next();               //ϸ��������һ�����ݻ�
void Draw();               //������
void EditCells(MOUSEMSG);  //�༭ϸ��
void DelButton(char);      //������
int SurCellsNum();         //ͳ��Ŀǰ���ϸ����

IMAGE help;

int main()
{
	Welcome();
	InitCells();
	Draw();
	
	while (1)
	{
		if (MouseHit())
		{
			EditCells(GetMouseMsg());
		}
		if (kbhit())
		{
			DelButton(getch());
		}
	}
	return 0;
}

void Welcome()
{
	initgraph(WNDWIDTH,WNDHEIGHT);
	loadimage(&help, _T("help.png"), 1500, 900);
	mciSendString("open ../res/bgm.mp3 alias BGM", 0, 0, 0);
	mciSendString("play BGM repeat", 0, 0, 0);
	setbkcolor(WHITE);
	cleardevice();
	putimage(0, 0, &help);
	settextcolor(BROWN);
	setbkmode(0);
	settextstyle(100,80,"����");
	outtextxy(150,300,"������Ϸ");
	settextcolor(BLACK);
	settextstyle(60, 40, "����");
	outtextxy(300, 600, "�������������Ϸ");
	settextstyle(50, 30, "����");
	outtextxy(300, 700, "ѧ�ţ�2019216072");
	settextstyle(16, 8, "����");
	getch();//�������������Ϸ
	cleardevice();
}

void InitCells()
{
	for (int j = 0; j < BOXNUM; j++)
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			cells[j][i].life = false;
			cells[j][i].nextlife = false;
		}
	}
}

void RanCells()
{
	InitCells();
	srand((unsigned)time(NULL));

	int count = (int)((BOXNUM*BOXNUM)*(((rand() % 21) + 10) / 100.0));//����������ɵĻ�ϸ�����������ں���ˮƽ

	for (int k = 0; k < count; k++)
	{
		int x = rand() % BOXNUM;
		int y = rand() % BOXNUM;
		cells[y][x].life = true;
	}
}

void next()
{
	for (int j = 0; j < BOXNUM; j++)//��������ϸ��
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			int flag = 0;   //һ��ϸ����Χ�Ļ�ϸ����
			for (int m = j - 1; m <= j + 1; m++)//������m��n��ϸ������Χ9��ϸ��
			{
				for (int n = i - 1; n <= i + 1; n++)
				{
					if (m >= 0 && m <= BOXNUM - 1 && n >= 0 && n <= BOXNUM - 1)//��ֹԽ��
					{
						if (m != j || n != i)//���ų�����
						{
							if (cells[m][n].life == true)
							{
								flag++;
							}
						}
					}
				}
			}
			if (cells[j][i].life == false)//���ϸ��Ϊ����״̬
			{
				if (flag == 3)//�����Χ��3��ϸ�����,�Ǿʹ��
				{
					cells[j][i].nextlife = true;
				}
				else
				{
					cells[j][i].nextlife = false;
				}
			}
			else//���ϸ��Ϊ���״̬
			{
				if (flag > 3||flag<2)//�����Χ����ϸ������3��С��2�����Ǿ�����
				{
					cells[j][i].nextlife = false;
				}
				else
				{
					cells[j][i].nextlife =true;
				}
			}
		}
	}
	for (int j = 0; j < BOXNUM; j++)//����ϸ����ͼ
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			cells[j][i].life = cells[j][i].nextlife;
		}
	}
}

void Draw()
{
	cleardevice();
	putimage(0, 0, &help);
	setlinecolor(BLACK);//����
	rectangle(GAP, GAP, GAP + GAMELENGTH, GAP + GAMELENGTH);
	setlinecolor(BROWN);
	rectangle(GAP*2+GAMELENGTH,GAP,GAP*2+GAMELENGTH+INFORWIDTH,GAP+INFORHEIGHT);

	setfillcolor(BLUE);//��ϸ��
	for (int j = 0; j < BOXNUM; j++)
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			if (cells[j][i].life == true)//��ɫ�ǻ�ϸ������ɫ����ϸ��
			{
				fillrectangle(GAP + i*BOXSIZE, GAP + j*BOXSIZE, GAP + (i + 1)*BOXSIZE, GAP + (j+1)*BOXSIZE);
			}
		}
	}
	
	char str[50];//�����
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 10, "����˵����");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 35, "R(r)�����ϸ��");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 60, "O(O)�����ϸ��");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 85, "S(s)�������ݻ�");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 110, "D(d)�������ݻ�");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 135, "P(p)��ֹͣ�ݻ�");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 160, "Q(q)����Ϸ����");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 185, "W(w)����Ϸ˵��");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 210, "ESC���˳���Ϸ");
	sprintf(str, "���ϸ��:%d", SurCellsNum());
	outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 345, str);
	sprintf(str,"ϸ������:%d",BOXNUM*BOXNUM);
	outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 370, str);
	if (isnext == true)
	{
	    outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 280, "���ڳ����ݻ���");
	}
}

void EditCells(MOUSEMSG m)
{
	if (m.uMsg == WM_LBUTTONDOWN&&m.x >= GAP&&m.x <= GAP + GAMELENGTH&&m.y >= GAP&&m.y <= GAP + GAMELENGTH)
	{
		int x = (m.x - GAP) / BOXSIZE;
		int y = (m.y - GAP) / BOXSIZE;
		cells[y][x].life = !cells[y][x].life;
		Draw();
	}
}

void DelButton(char con)
{
	HWND hwnd = GetHWnd();
	int ID;
	switch (con)
	{
	    case 'o'://���ϸ��
	    case 'O':
		    ID=MessageBox(hwnd,"ȷ��Ҫ���ϸ����","",MB_YESNO);
		    if (ID == IDYES)
		    {
			    InitCells(); 
			    Draw();
		    }
		    break;

	    case 'r'://���ϸ��
	    case 'R':
		    ID = MessageBox(hwnd, "ȷ��Ҫ�������ϸ����", "", MB_YESNO);
		    if (ID == IDYES)
		    {
			    RanCells(); 
			    Draw();
		    }
		    break;

	    case 's'://�����ݻ�
	    case 'S':next(); Draw();
		    break;

	    case 'd'://��ʼ�����ݻ�
	    case 'D':
		isnext = true;
		while (1)
		{
			next();
			Draw();
			Sleep(100);

			if (kbhit())
			{
				char con = getch();
				if (con == 'p' || con == 'P')//���������ݻ�
				{
					isnext = false;
					Draw();
					break;
				}
			}
		}
		break;

	    case 'Q'://��Ϸ����
	    case 'q':
		    MessageBox(hwnd,rule,"��Ϸ����",MB_OK);
		    break;

	    case 'W'://��Ϸ˵��
	    case 'w':
		    MessageBox(hwnd, intro, "��Ϸ˵��", MB_OK);
		    break;
	
	    case 27://�˳���Ϸ
		    ID = MessageBox(hwnd, "ȷ��Ҫ�˳���Ϸ��", "", MB_YESNO);
		    if (ID == IDYES)
		    {
			    exit(0);
		    }
		    break;
	}
}

int SurCellsNum()
{
	int count = 0;
	for (int j = 0; j < BOXNUM; j++)
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			if (cells[j][i].life == true)
			{
				count++;
			}
		}
	}
	return count;
}
