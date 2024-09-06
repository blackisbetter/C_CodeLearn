#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';//初始化棋盘为空格
		}
	}
}


//打印棋盘格
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		//一行
		int j = 0;
		for (j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		if (i<row-1)
		{
			for (j=0;j<col;j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//玩家下棋
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请选择你要下棋的位置的坐标:>");
		
		scanf("%d%d", &x, &y);

		//判断输入坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] ==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("此位置已被占用!\n");
			}
		}
		else
		{
			printf("输入的坐标不合法,请重新输入:>");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//电脑下棋
	//电脑下棋用随机数
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//范围0~2
		y = rand() % col;//范围0~2

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


//检查棋盘是否满了
int IsFull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			if (board[i][j] ==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//赢的方式
	//行
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] ==board[i][1] &&board[i][1] == board[i][2] &&board[i][1] !=' ')
		{
			return board[i][1];
		}
	}
	//列
	for (j=0;j<col;j++)
	{
		if (board[0][j] ==board[1][j] && board[1][j]==board[2][j] &&board[1][j] !=' ')
		{
			return board[1][j];
		}
	}
	//对角线
	if (board[0][0]==board[1][1] &&board[1][1] ==board[2][2] && board[1][1] !=' ')
	{
		return board[1][1];
	}
	if (board[0][2] ==board[1][1] &&board[1][1]==board[2][0] &&board[1][1] !=' ')
	{
		return board[1][1];
	}

	//平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';

	
}