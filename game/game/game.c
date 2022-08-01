#define _CRT_SECURE_NO_WARNINGS 1 
#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	printf("------------ɨ����Ϸ--------------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ����Ϸ--------------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//����������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//ֻΪ��FindMineʹ��
//static
//1. ���ξֲ�����
//2. ����ȫ�ֱ���
//3. ���κ���

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x + 1][y + 1] - 8 * '0';
}

//�ݹ�չ��������
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int count)
{
	count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';   //�����������Χû���ף��ͰѸ������óɿո񣬲�����Χ�˸�����չ��
		int i = 0;
		int j = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')    //���Ƶݹ���������ֹ�Ѿ��Ų���������ٴεݹ飬�Ӷ�������ݹ�
					ExplosionSpread(mine, show, row, col, i, j, count);
			}
		}
	}
	else
	{
		show[x][y] = '0' + count;
	}

}

//�����
void MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����ǵ�����
	//2.��ǵĲ�����#����ʾ

	int x = 0;
	int y = 0;

	while (1)
	{
		printf("������Ҫ��ǵ�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '0'
				|| show[x][y] == '1'
				|| show[x][y] == '2'
				|| show[x][y] == '3'
				|| show[x][y] == '4'
				|| show[x][y] == '5'
				|| show[x][y] == '6'
				|| show[x][y] == '7'
				|| show[x][y] == '8')
			{
				printf("����������Ѿ����Ų��������Ҫ��ǣ�����������\n");
			}
			else if (show[x][y] == '*')
			{
				show[x][y] = '#';
				DisplayBoard(show, row, col);
				break;
			}
			else if (show[x][y] == '#')
			{
				printf("����������Ѿ���ǹ�������Ҫ��ǣ�����������\n");
			}

		}
	}
}

//ȡ�������
void Cancel_MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����ǵ�����
	//2.��ǵĲ��ֱ��ԭ����*
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("������Ҫ��ǵ�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '#')
			{
				show[x][y] = '*';
				DisplayBoard(show, row, col);
				break;
			}
			else
			{
				printf("�����λ�ò�δ����ǣ������������ǹ�������\n");
			}
		}
	}

}


int FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int flag)
{
	//1. �����Ų������
	//2. ������괦�ǲ�����
	//  (1)������� - ���ź�ը���� - ��Ϸ����
	//  (2)��������� - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���飬��Ϸ����

	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);//x - (1-9);y - (1-9);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				flag = 0;
				break;
			}
			else
			{
				//�����׵Ļ���ͳ��һ��x��y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				ExplosionSpread(mine, show, row, col, x, y, count);  //�ݹ�չ��һƬ������
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
				win++;
				break;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
		flag = 0;
	}
	return flag;
}