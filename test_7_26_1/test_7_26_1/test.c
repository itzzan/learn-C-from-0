#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//
//
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//		b = 30;
//	case 2:
//		b = 20;
//	case 3:
//		b = 16;
//	default:
//		b = 0;
//	}
//	return b;
//}
////����func��1��
//
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//�Ӵ�С���
//дһ�����뽫�����������Ӵ�С���

#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����˳�� - ǰ����ifȷ�����ģ���һ��ifȷ���м�ͺ��� - ��ȷ��һ������ȷ�������
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	
//	//��� - �Ӵ�С
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//��ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//���������������������������Լ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int max = 0;
//	int cnt = 0;
//	scanf("%d %d", &i, &j);
//	if (i <= j)
//	{
//		max = j;
//	}
//	else
//		max = i;
//
//	for (a = 2; a <= max; a++)
//	{
//		if (i % a == 0 && j % a == 0)
//		{
//			cnt = a;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}

//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
// ��С������ = m*n/���Լ��
//	return 0;
//}

//��ӡ1000-2000�������
//int main()
//{
//	int year = 0;
//	int cnt = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж����� 
//		//1. ��4�����������ܱ�100����
//		//2. �ܱ�400����
//		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//		{
//			printf("%d ", year);
//			cnt++;
//		}
//	}
//
//	printf("\ncnt= %d\n", cnt);
//	return 0;
//}

//��ӡ100-200֮�������
//������������
//ֻ�ܱ�1�ͱ�������

//int judge(int a)
//{
//	int x = 0;
//	for (x = 2; x < a; x++)
//	{
//		if (a % x == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int cnt = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�� 2 -> i-1������ȥ�������ܲ�������
//		if (judge(i))
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//	}
//	printf("�����У�%d\n", cnt);
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//m = a + b
//	//a��b��һ��������һ�������� <= ��ƽ����m
//	//16 = 2 * 8 = 4 * 4
//	//sqrt - �ǿ�ƽ������
//
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//flag:
//
//	printf("hehe\n");
//	printf("haha\n");
//	
//	goto flag;
//
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ���

//shutdown -s -t 60  �ػ�
//shutdown -a  ȡ���ػ�

#include <string.h>
#include <stdlib.h> 

//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������systen() - ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//ͷ�ļ�<stdlib.h> 
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);//ͷ�ļ�<string.h>
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚϲ���ʹ��==�ģ�Ҫ��strcmp()���� - string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������systen() - ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//ͷ�ļ�<stdlib.h> 
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);//ͷ�ļ�<string.h>
//		if (strcmp(input, "������") == 0)//�����ַ����Ƚϲ���ʹ��==�ģ�Ҫ��strcmp()���� - string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//
//
//	return 0;
//}

//void test()
//{
//flag:
//	printf("test\n");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}