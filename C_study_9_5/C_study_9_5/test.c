#define _CRT_SECURE_NO_WARNINGS
//测试游戏的逻辑
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("********  0.exit  ********\n");
	printf("********  1.play  ********\n");
	printf("**************************\n");
}
void game()
{
	//规定，返回C游戏继续
	//返回Q为平局,返回*玩家赢，返回#电脑赢
	char board[ROW][COL] = {0};
	char ret = 0;

	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board,ROW,COL);
	
	while (1)
	{

		//下棋
		//玩家下棋
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);

	}
	if (ret =='*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}

int main()
{
	//三子棋的实现
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择数字:>");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出三子棋\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
		
	} while (input);
	return 0;
}