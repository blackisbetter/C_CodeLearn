#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			board[i][j] =' ';
		}
	}
}

//打印棋盘格
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
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
			for (j = 0; j < col; j++)
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
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你要下的坐标:>");
		scanf("%d%d", &x, &y);

		//合法的坐标位置
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//当前的位置有空
			if (board[x - 1][y - 1] ==' ')
			{
				board[x - 1][y - 1] ='*';
				break;
			}
			else
			{
				printf("此坐标已被占用！\n");
			}
		}
		else
		{
			printf("坐标位置为非法值,请重新输入\n");
		}
	}
}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	//电脑下棋用随机数来下
	//坐标范围为 0~2 0~2
	while (1)
	{
		int x = rand() % row;//0~2
		int y = rand() % col;//0~2

		if (board[x][y] ==' ')
		{
			board[x][y] ='#';
			break;
		}
		
	}
}
int IsFull(char board[ROW][COL],int row,int col)
{
	//查看棋盘是否全满了
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
	int i = 0;
	//行
	for (i=0;i<row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] ==board[i][2] &&board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
	//列
	for (i=0;i<col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i]!=' ')
		{
			return board[1][i];
		}
		
	}

	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];

	}

	if (board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
	{
		return board[1][1];
	}

	//棋盘满了，没人赢，平局
	if (IsFull(board,row,col))
	{
		return 'Q';
	}

	return 'C';

}
