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
	//ɨ�׵Ķ�ά����
	char mine[ROWS][COLS] = { 0 };//�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//��ӡ��������Ϣ
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');

	
	//֮����ǲ����׵���Ϣ
	SetMine(mine,ROW,COL);

	//��ӡ
	DisplayBoard(show, ROW, COL);


	//����
	FineMine(mine,show,ROW,COL);
}

int main()
{
	//����ɨ����Ϸ
	//���ú��׵���Ϣ
	//�Ų���׵���Ϣ

	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("����������:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default: 
			printf("�����������������������!\n");
			break;
		}

	} while (input);


	return 0;
}