#include "game2.h"

void game(void)
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FineMine(mine, show, ROW, COL);
}

int main()
{
	run_game_loop(game, "退出扫雷游戏!");
	return 0;
}
