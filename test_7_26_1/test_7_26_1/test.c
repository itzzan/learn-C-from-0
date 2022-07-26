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
////则求func（1）
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

//从大到小输出
//写一个代码将三个整数按从大到小输出

#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整顺序 - 前两个if确定最大的，后一个if确定中间和后面 - 先确定一个，再确定另外的
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
//	//输出 - 从大到小
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//打印1-100之间所有3的倍数的数字
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

//给定两个数，求这两个数的最大公约数
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

//辗转相除法
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
//	printf("最大公约数：%d\n", n);
// 最小公倍数 = m*n/最大公约数
//	return 0;
//}

//打印1000-2000年的闰年
//int main()
//{
//	int year = 0;
//	int cnt = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断闰年 
//		//1. 被4整除，但不能被100整除
//		//2. 能被400整除
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

//打印100-200之间的素数
//素数就是质数
//只能被1和本身整除

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
//		//判断i是否为素数
//		//拿 2 -> i-1的数字去除，看能不能整除
//		if (judge(i))
//		{
//			printf("%d ", i);
//			cnt++;
//		}
//	}
//	printf("素数有：%d\n", cnt);
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	//m = a + b
//	//a和b中一定至少有一个数字是 <= 开平方的m
//	//16 = 2 * 8 = 4 * 4
//	//sqrt - 是开平方函数
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

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机！

//shutdown -s -t 60  关机
//shutdown -a  取消关机

#include <string.h>
#include <stdlib.h> 

//int main()
//{
//	//关机
//	//C语言提供了一个函数：systen() - 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//头文件<stdlib.h> 
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//头文件<string.h>
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较不能使用==的，要用strcmp()函数 - string compare
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
//	//关机
//	//C语言提供了一个函数：systen() - 执行系统命令的
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//头文件<stdlib.h> 
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);//头文件<string.h>
//		if (strcmp(input, "我是猪") == 0)//两个字符串比较不能使用==的，要用strcmp()函数 - string compare
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