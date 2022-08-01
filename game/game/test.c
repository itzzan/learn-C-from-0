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
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡһ������
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	//�ж�Ҫ�Ų��׻��Ǳ���׻���ȡ�������
	int judge = 1;
	while (FLAG == 1)
	{
		printf("������Ҫ�Ų��׻��Ǳ���ף�0Ϊ����ף�1Ϊ�Ų��ף�2Ϊȡ�������:>");
		scanf("%d", &judge);

		if (judge == 1)
		{
			//�Ų���
			flag = FindMine(mine, show, ROW, COL, FLAG);
		}
		else if (judge == 0)
		{
			//�����
			MarkMine(mine, show, ROW, COL);
		}
		else if (judge == 2)
		{
			//ȡ�������
			Cancel_MarkMine(mine, show, ROW, COL);
		}
		else
		{
			printf("�����������������\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);


	return 0;
}

//1. �Ż�����������ף���Χû���� - չ��һƬ - �ݹ飨��ɣ�
//2. ����׵Ĺ���(�����)

