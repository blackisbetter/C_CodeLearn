#include "game.h"

void game(void)
{
	char board[ROW][COL] = { 0 };
	char ret = 0;

	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
	}

	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");

	DisplayBoard(board, ROW, COL);
}

int main()
{
	run_game_loop(game, "退出三子棋");
	return 0;
}
