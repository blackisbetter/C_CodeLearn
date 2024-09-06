#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//�˵�
void menu()
{
	printf("******************************\n");
	printf("*******    0.exit   **********\n");
	printf("*******    1.play   **********\n");
	printf("******************************\n");
}

void game()
{
	//�����̺��ں�ά��
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//�������̸�������
	//��ʼ������
	InitBoard(board,ROW,COL);

	//��ӡ���̸�
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//�������̸�֮�󣬿��Կ�ʼ����
	//�������
		PlayerMove(board, ROW, COL);
		//���ÿ����һ�������ߵ���ÿ����һ����Ҫ�ж���Ӯ
		//�涨������*���Ӯ������#����Ӯ������QΪƽ�֣�����C������Ϸ
		DisplayBoard(board, ROW, COL);//���ºõ����̴�ӡ����

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//���ºõ����̴�ӡ����

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret =='*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret =='#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}
int main()
{
	//дһ����������Ϸ
	int input = 0;
	//������������
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
				printf("�˳���������Ϸ\n");
				break;
			default:
				printf("��ѡ����ȷ������!\n");
				break;
		}
	} while (input);


	return 0;
}