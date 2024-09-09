#define _CRT_SECURE_NO_WARNINGS

#include "game2.h"

//��ʼ��
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


//��ӡ
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ȴ�ӡ��0~9  Ϊ����Һÿ�һ��
	printf("-------------ɨ��------------------\n");
	for (j=0;j<=col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	//Ȼ��ӵڶ��п�ʼ��ӡ
	for (i=1;i<=row;i++)
	{
		printf("%d ", i);
		for (j=1;j<col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------ɨ��------------------\n");
}

//�����׵���Ϣ
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//�����׵�λ�ã��׵�λ�����
	//1~9
	//ʹ��rand������Ҫsrand��srandΪ��������������
	
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
		+ mine[x + 1][y + 1] - 8 * '0';//��ΪҪ�������֣�char������ַ�
}

//����
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win =0;
	//����û�Ų�����ʱ,һֱ�Ų飬ֱ��ը��Ϊֹ
	while (win<row * col -EASY_TYPE)
	{
		printf("��ѡ����Ҫ��ѯ������:>");
		scanf("%d%d", &x, &y);
		if (show[x][y] !='*')
		{
			printf("�������ѱ��Ų��!\n");
		}
		else
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)//������
			{
				if (mine[x][y] == '1')
				{
					printf("���Ѿ�����ը��!\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					win++;
					int count = get_mine_count(mine,x,y);
					show[x][y] = count + '0';//�����ָ�Ϊ�����ַ�
					DisplayBoard(show, ROW, COL);

				}
			}
			else//������
			{
				printf("������������!\n");
			}
		}
	}

	if (win ==row * col -EASY_TYPE)
	{
		printf("���׳ɹ�!\n");
		DisplayBoard(mine, ROW, COL);
	}
	
}