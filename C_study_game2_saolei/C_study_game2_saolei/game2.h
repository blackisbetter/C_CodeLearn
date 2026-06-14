#ifndef MINESWEEPER_GAME2_H
#define MINESWEEPER_GAME2_H

#include "../../shared/common.h"
#include "../../shared/menu_utils.h"

#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define EASY_TYPE 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

#endif /* MINESWEEPER_GAME2_H */
