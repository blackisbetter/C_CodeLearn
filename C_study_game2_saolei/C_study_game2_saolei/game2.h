#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define EASY_TYPE 10

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows,int cols,char ret);

//��ӡ
void DisplayBoard(char board[ROWS][COLS],int row,int col);


//�����׵���Ϣ
void SetMine(char board[ROWS][COLS],int row,int col);

//����
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

