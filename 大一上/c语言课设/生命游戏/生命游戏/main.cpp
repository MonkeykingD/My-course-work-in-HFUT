#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <time.h>
#pragma comment(lib,"winmm.lib")

#define BOXSIZE		20                                //细胞边长
#define BOXNUM		40                                //每行或每列的细胞数目
#define GAMELENGTH  (BOXSIZE*BOXNUM)                  //游戏框长度
#define INFORWIDTH	150                               //信息框宽度
#define INFORHEIGHT GAMELENGTH                      //信息框高度
#define GAP			10                                //缝隙像素
#define WNDWIDTH	(GAP*3+INFORWIDTH+GAMELENGTH)     //窗口宽度
#define WNDHEIGHT   (GAMELENGTH+GAP*2)                //窗口高度

struct cell
{
	bool life;           //细胞当前生存状态(false为死亡，true为存活)
	bool nextlife;       //细胞下一步生存状态
}cells[BOXNUM][BOXNUM];	 //地图

//游戏规则
char rule[] = {
"每个格子的生死遵循下面的原则：\n\
----① 如果一个细胞周围有 3 个细胞为生（一个细胞周围共有 8 个细胞），则该\n\
细胞为生（即该细胞若原先为死，则转为生，若原先为生，则保持不变）\n\
----② 如果一个细胞周围有 2 个细胞为生，则该细胞的生死状态保持不变；\n\
----③ 在其它情况下，该细胞为死（即该细胞若原先为生，则转为死，若原先为死，则保持不变" };     
//游戏说明
char intro[] = {
"蓝色方格代表存活的细胞，白色方格代表死亡的细胞。\n\
玩家可以用鼠标编辑地图上的细胞。\n\
在持续演化的过程中，只有停止演化才能继续编辑地图上的细胞。"};
bool isnext=false;   //是否在持续演化过程中

void Welcome();            //游戏欢迎界面(包括资源的加载)
void InitCells();          //初始化细胞
void RanCells();           //随机细胞
void next();               //细胞进行下一步的演化
void Draw();               //画界面
void EditCells(MOUSEMSG);  //编辑细胞
void DelButton(char);      //处理按键
int SurCellsNum();         //统计目前存活细胞数

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
	settextstyle(100,80,"楷体");
	outtextxy(150,300,"生命游戏");
	settextcolor(BLACK);
	settextstyle(60, 40, "楷体");
	outtextxy(300, 600, "按任意键进入游戏");
	settextstyle(50, 30, "楷体");
	outtextxy(300, 700, "学号：2019216072");
	settextstyle(16, 8, "宋体");
	getch();//按任意键进入游戏
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

	int count = (int)((BOXNUM*BOXNUM)*(((rand() % 21) + 10) / 100.0));//控制随机生成的活细胞数量保持在合理水平

	for (int k = 0; k < count; k++)
	{
		int x = rand() % BOXNUM;
		int y = rand() % BOXNUM;
		cells[y][x].life = true;
	}
}

void next()
{
	for (int j = 0; j < BOXNUM; j++)//遍历所有细胞
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			int flag = 0;   //一个细胞周围的活细胞数
			for (int m = j - 1; m <= j + 1; m++)//遍历（m，n）细胞的周围9个细胞
			{
				for (int n = i - 1; n <= i + 1; n++)
				{
					if (m >= 0 && m <= BOXNUM - 1 && n >= 0 && n <= BOXNUM - 1)//防止越界
					{
						if (m != j || n != i)//（排除自身）
						{
							if (cells[m][n].life == true)
							{
								flag++;
							}
						}
					}
				}
			}
			if (cells[j][i].life == false)//如果细胞为死亡状态
			{
				if (flag == 3)//如果周围有3个细胞存活,那就存活
				{
					cells[j][i].nextlife = true;
				}
				else
				{
					cells[j][i].nextlife = false;
				}
			}
			else//如果细胞为存活状态
			{
				if (flag > 3||flag<2)//如果周围存活的细胞大于3或小于2个，那就死亡
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
	for (int j = 0; j < BOXNUM; j++)//更新细胞地图
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
	setlinecolor(BLACK);//画框
	rectangle(GAP, GAP, GAP + GAMELENGTH, GAP + GAMELENGTH);
	setlinecolor(BROWN);
	rectangle(GAP*2+GAMELENGTH,GAP,GAP*2+GAMELENGTH+INFORWIDTH,GAP+INFORHEIGHT);

	setfillcolor(BLUE);//画细胞
	for (int j = 0; j < BOXNUM; j++)
	{
		for (int i = 0; i < BOXNUM; i++)
		{
			if (cells[j][i].life == true)//蓝色是活细胞，白色是死细胞
			{
				fillrectangle(GAP + i*BOXSIZE, GAP + j*BOXSIZE, GAP + (i + 1)*BOXSIZE, GAP + (j+1)*BOXSIZE);
			}
		}
	}
	
	char str[50];//侧边栏
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 10, "操作说明：");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 35, "R(r)：随机细胞");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 60, "O(O)：清空细胞");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 85, "S(s)：单步演化");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 110, "D(d)：持续演化");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 135, "P(p)：停止演化");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 160, "Q(q)：游戏规则");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 185, "W(w)：游戏说明");
	outtextxy(GAP * 2 + GAMELENGTH + 10, GAP + 210, "ESC：退出游戏");
	sprintf(str, "存活细胞:%d", SurCellsNum());
	outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 345, str);
	sprintf(str,"细胞总数:%d",BOXNUM*BOXNUM);
	outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 370, str);
	if (isnext == true)
	{
	    outtextxy(GAP * 2 + GAMELENGTH + 5, GAP + 280, "正在持续演化…");
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
	    case 'o'://清空细胞
	    case 'O':
		    ID=MessageBox(hwnd,"确定要清空细胞吗？","",MB_YESNO);
		    if (ID == IDYES)
		    {
			    InitCells(); 
			    Draw();
		    }
		    break;

	    case 'r'://随机细胞
	    case 'R':
		    ID = MessageBox(hwnd, "确定要重新随机细胞吗？", "", MB_YESNO);
		    if (ID == IDYES)
		    {
			    RanCells(); 
			    Draw();
		    }
		    break;

	    case 's'://单步演化
	    case 'S':next(); Draw();
		    break;

	    case 'd'://开始持续演化
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
				if (con == 'p' || con == 'P')//结束不断演化
				{
					isnext = false;
					Draw();
					break;
				}
			}
		}
		break;

	    case 'Q'://游戏规则
	    case 'q':
		    MessageBox(hwnd,rule,"游戏规则",MB_OK);
		    break;

	    case 'W'://游戏说明
	    case 'w':
		    MessageBox(hwnd, intro, "游戏说明", MB_OK);
		    break;
	
	    case 27://退出游戏
		    ID = MessageBox(hwnd, "确定要退出游戏吗？", "", MB_YESNO);
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
