#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		int j = 0;
		for (j=0;j<col;j++)
		{
			board[i][j] = ' ';//��ʼ������Ϊ�ո�
		}
	}
}


//��ӡ���̸�
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i=0;i<row;i++)
	{
		//һ��
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

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	//�������
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("��ѡ����Ҫ�����λ�õ�����:>");
		
		scanf("%d%d", &x, &y);

		//�ж���������ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] ==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��!\n");
			}
		}
		else
		{
			printf("��������겻�Ϸ�,����������:>");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//��������
	//���������������
	printf("��������\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//��Χ0~2
		y = rand() % col;//��Χ0~2

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}


//��������Ƿ�����
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


//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	//Ӯ�ķ�ʽ
	//��
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] ==board[i][1] &&board[i][1] == board[i][2] &&board[i][1] !=' ')
		{
			return board[i][1];
		}
	}
	//��
	for (j=0;j<col;j++)
	{
		if (board[0][j] ==board[1][j] && board[1][j]==board[2][j] &&board[1][j] !=' ')
		{
			return board[1][j];
		}
	}
	//�Խ���
	if (board[0][0]==board[1][1] &&board[1][1] ==board[2][2] && board[1][1] !=' ')
	{
		return board[1][1];
	}
	if (board[0][2] ==board[1][1] &&board[1][1]==board[2][0] &&board[1][1] !=' ')
	{
		return board[1][1];
	}

	//ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	return 'C';

	
}