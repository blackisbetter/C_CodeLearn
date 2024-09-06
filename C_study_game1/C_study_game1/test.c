#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//菜单
void menu()
{
	printf("******************************\n");
	printf("*******    0.exit   **********\n");
	printf("*******    1.play   **********\n");
	printf("******************************\n");
}

void game()
{
	//让棋盘后期好维护
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//先有棋盘格，在下棋
	//初始化棋盘
	InitBoard(board,ROW,COL);

	//打印棋盘格
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//有了棋盘格之后，可以开始下棋
	//玩家下棋
		PlayerMove(board, ROW, COL);
		//玩家每次下一步，或者电脑每次下一步都要判断输赢
		//规定：返回*玩家赢，返回#电脑赢，返回Q为平局，返回C继续游戏
		DisplayBoard(board, ROW, COL);//把下好的棋盘打印出来

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//把下好的棋盘打印出来

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret =='*')
	{
		printf("玩家获胜\n");
	}
	else if (ret =='#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}

}
int main()
{
	//写一个三子棋游戏
	int input = 0;
	//随机数生成起点
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
				printf("退出三子棋游戏\n");
				break;
			default:
				printf("请选择正确的数字!\n");
				break;
		}
	} while (input);


	return 0;
}