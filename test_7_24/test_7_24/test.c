#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
// 
//}
//C99 标准中 引用一个概念：变长数组
//支持数组创建的时候，用变量来指定大小的，但是这个数组不能初始化
//VS2022、VS2019不支持C99中的变长数组

//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };
//	//int arr[n];
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}

//MAX 一般不建议把函数的名字写成全大写

//int MAX(int x, int y)
//{
//	if (x >= y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d %d", &x, &y);
//	max = MAX(x, y);
//	printf("%d\n", max);
//	return 0;
//}

//define 
//#define 预处理指令
//include
// #include 预处理指令
//

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//
//}
//
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));	
//	}
//}	

//continue 不能用在switch语言中

//#include <stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    ");
//
//    return 0;
//}


//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}

//C语言是结构化的程序设计语言

//顺序结构

//选择结构

//循环结构

//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//空语句
//	//分号隔开的就是一条语句
//	return 0;
//}

//C语言是如何表示真和假你？ - 非0就是真，0就是假

//if else 默认控制一行,要想控制多行，就一定要{}包含起来
//int main()
//{
//	
//	/*if (age >= 18)
//	{
//		printf("成年");
//	}*/
//	
//	/*if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}*/
//	int age = 70;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//			printf("青年\n");
//	else if (age >= 26 && age < 40)
//			printf("中年\n");
//	else if (age >= 40 && age < 60)
//			printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//		
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}// if没加{}，只执行一行语句
//		
//
//	//else和它离得最近的if匹配
//	return 0;


//代码风格
//《高质量C/C++编程》

//int test()
//{
//	if (1)
//		return 0;
//
//	return 1;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int num = 3;
//
//	//if (num = 5)
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	if (1 == a % 2)
//		printf("奇数");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

int main()
{
	//C++
	//c99支持这样写
	//for (int i = 1; i <= 100; i++)
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)
		{
			printf("%d ", i);
		}
	}

	return 0;
}