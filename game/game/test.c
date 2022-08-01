#include "game.h"

void meun()
{
	printf("*********************\n");
	printf("**    1. play      **\n");
	printf("**    0. exit      **\n");
	printf("*********************\n");
}

void game()
{
	int flag = 1;
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印一下棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//判断要排查雷还是标记雷还是取消标记雷
	int judge = 1;
	while (FLAG == 1)
	{
		printf("请问想要排查雷还是标记雷，0为标记雷，1为排查雷，2为取消标记雷:>");
		scanf("%d", &judge);

		if (judge == 1)
		{
			//排查雷
			flag = FindMine(mine, show, ROW, COL, FLAG);
		}
		else if (judge == 0)
		{
			//标记雷
			MarkMine(mine, show, ROW, COL);
		}
		else if (judge == 2)
		{
			//取消标记雷
			Cancel_MarkMine(mine, show, ROW, COL);
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}

		if (flag == 0)
			break;
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		meun();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);


	return 0;
}

//1. 优化：如果不是雷，周围没有雷 - 展开一片 - 递归（完成）
//2. 标记雷的功能(已完成)

