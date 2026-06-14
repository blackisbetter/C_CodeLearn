#ifndef TICTACTOE_GAME_H
#define TICTACTOE_GAME_H

#include "../../shared/common.h"
#include "../../shared/menu_utils.h"

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);

#endif /* TICTACTOE_GAME_H */
