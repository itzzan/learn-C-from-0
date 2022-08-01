#pragma once
#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define EASY_COUNT 10
#define ROW 9
#define COL 9
#define FLAG 1



#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
int FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int flag);

//标记雷
void MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//取消标记雷
void Cancel_MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//递归展开无雷区
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int count);