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

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char mine[ROWS][COLS], int row, int col);

//�Ų���
int FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int flag);

//�����
void MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//ȡ�������
void Cancel_MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//�ݹ�չ��������
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int count);