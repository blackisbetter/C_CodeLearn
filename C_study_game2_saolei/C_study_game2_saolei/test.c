#define _CRT_SECURE_NO_WARNINGS
#include "game2.h"


void menu()
{
	printf("******************************\n");
	printf("********    0.exit    ********\n");
	printf("********    1.play    ********\n");
	printf("******************************\n");
}

void game()
{
	//扫雷的二维数组
	char mine[ROWS][COLS] = { 0 };//布置雷的信息
	char show[ROWS][COLS] = { 0 };//打印出来的信息
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	
	//之后就是布置雷的信息
	SetMine(mine,ROW,COL);

	//打印
	DisplayBoard(show, ROW, COL);


	//查雷
	FineMine(mine,show,ROW,COL);
}

int main()
{
	//制作扫雷游戏
	//布置好雷的信息
	//排查出雷的信息

	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default: 
			printf("输入的数字有误，请重新输入!\n");
			break;
		}

	} while (input);


	return 0;
}