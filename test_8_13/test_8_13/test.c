#include "contact.h"

//ͨѶ¼
//1.ͨѶ¼���ܹ����1000���˵���Ϣ
//ÿ���˵���Ϣ����������+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ���˵���Ϣ
//4.�޸�ָ���˵���Ϣ
//5.����ָ���˵���Ϣ
//6.����ͨѶ¼����Ϣ
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
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//Contact con = { 0 };//�����ӾͿ��Գ�ʼ��
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ���˵���Ϣ
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			//��������Լ�����
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}


