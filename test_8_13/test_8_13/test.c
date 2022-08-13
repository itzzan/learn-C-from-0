#include "contact.h"

//通讯录
//1.通讯录中能够存放1000个人的信息
//每个人的信息包含：名字+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通讯录的信息
//


void menu()
{
	printf("****************************************\n");
	printf("******** 1.add     2.del   *************\n");
	printf("******** 3.search  4.modify*************\n");
	printf("******** 5.sort    6.print *************\n");
	printf("********      0.exit       *************\n");
	printf("****************************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//Contact con = { 0 };//这样子就可以初始化
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除人的信息
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			//留给大家自己完善
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}


