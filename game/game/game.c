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
	printf("------------扫雷游戏--------------\n");
	//打印列号
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
	printf("------------扫雷游戏--------------\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机的下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//只为了FindMine使用
//static
//1. 修饰局部变量
//2. 修饰全局变量
//3. 修饰函数

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

//递归展开无雷区
void ExplosionSpread(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int count)
{
	count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';   //如果该坐标周围没有雷，就把该坐标置成空格，并向周围八个坐标展开
		int i = 0;
		int j = 0;
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
			{
				if (show[i][j] == '*')    //限制递归条件，防止已经排查过的坐标再次递归，从而造成死递归
					ExplosionSpread(mine, show, row, col, i, j, count);
			}
		}
	}
	else
	{
		show[x][y] = '0' + count;
	}

}

//标记雷
void MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入标记的坐标
	//2.标记的部分用#来表示

	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入要标记的坐标:>");
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
				printf("输入的坐标已经被排查过，不需要标记，请重新输入\n");
			}
			else if (show[x][y] == '*')
			{
				show[x][y] = '#';
				DisplayBoard(show, row, col);
				break;
			}
			else if (show[x][y] == '#')
			{
				printf("输入的坐标已经标记过，不需要标记，请重新输入\n");
			}

		}
	}
}

//取消标记雷
void Cancel_MarkMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入标记的坐标
	//2.标记的部分变成原来的*
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("请输入要标记的坐标:>");
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
				printf("输入的位置并未被标记，请重新输入标记过的坐标\n");
			}
		}
	}

}


int FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int flag)
{
	//1. 输入排查的坐标
	//2. 检查坐标处是不是雷
	//  (1)如果是雷 - 很遗憾炸死了 - 游戏结束
	//  (2)如果不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，游戏继续

	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);//x - (1-9);y - (1-9);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				flag = 0;
				break;
			}
			else
			{
				//不是雷的话，统计一下x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				ExplosionSpread(mine, show, row, col, x, y, count);  //递归展开一片无雷区
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;
				break;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
		flag = 0;
	}
	return flag;
}