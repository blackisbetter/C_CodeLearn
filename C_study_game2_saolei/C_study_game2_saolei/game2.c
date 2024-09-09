#define _CRT_SECURE_NO_WARNINGS

#include "game2.h"

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	for (i=0;i<rows;i++)
	{
		int j = 0;
		for (j=0;j<cols;j++)
		{
			board[i][j] = ret;
		}
	}
}


//打印
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//先打印列0~9  为了玩家好看一点
	printf("-------------扫雷------------------\n");
	for (j=0;j<=col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	//然后从第二行开始打印
	for (i=1;i<=row;i++)
	{
		printf("%d ", i);
		for (j=1;j<col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------扫雷------------------\n");
}

//布置雷的信息
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//布置雷的位置，雷的位置随机
	//1~9
	//使用rand函数需要srand，srand为生成随机数的起点
	
	int count = EASY_TYPE;
	while (count)
	{
		int x = rand() % row + 1;//1~9
		int y = rand() % col + 1;//1~9
			if (board[x][y] == '0')
			{
				board[x][y] = '1';
				count--;
			}
	}
	
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1]
		+ mine[x][y - 1]
		+ mine[x + 1][y - 1]
		+ mine[x - 1][y]
		+ mine[x][y + 1]
		+ mine[x + 1][y - 1]
		+ mine[x + 1][y]
		+ mine[x + 1][y + 1] - 8 * '0';//因为要返回数字，char里的是字符
}

//查雷
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win =0;
	//当还没排查完雷时,一直排查，直到炸雷为止
	while (win<row * col -EASY_TYPE)
	{
		printf("请选择你要查询的坐标:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] !='*')
		{
			printf("改坐标已被排查过!\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)//棋盘内
			{
				if (mine[x][y] == '1')
				{
					printf("你已经被雷炸死!\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					int count = get_mine_count(mine,x,y);
					show[x][y] = count + '0';//把数字改为数字字符
					DisplayBoard(show, ROW, COL);

				}
			}
			else//棋盘外
			{
				printf("输入的坐标错误!\n");
			}
		}
	}

	if (win ==row * col -EASY_TYPE)
	{
		printf("排雷成功!\n");
		DisplayBoard(mine, ROW, COL);
	}
	
}