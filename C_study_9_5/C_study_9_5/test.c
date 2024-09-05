#define _CRT_SECURE_NO_WARNINGS
//������Ϸ���߼�
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
	//�涨������C��Ϸ����
	//����QΪƽ��,����*���Ӯ������#����Ӯ
	char board[ROW][COL] = {0};
	char ret = 0;

	//��ʼ������
	InitBoard(board, ROW, COL);

	//��ӡ����
	DisplayBoard(board,ROW,COL);
	
	while (1)
	{

		//����
		//�������
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);

}

int main()
{
	//�������ʵ��
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ������:>");
		scanf("%d",&input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
		
	} while (input);
	return 0;
}