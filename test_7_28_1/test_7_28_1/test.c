#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//递归：函数自己调用自己

//死递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4

//void print(unsigned int n)//123
//{
//	if (n > 9)//很重要<=9，递归就退出了
//	{
//		print(n / 10);//很重要，每次调用一次，递归就越来越接近限制条件
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//
//	return 0;
//}

//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度。

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//return 1 + my_strlen(++str);//有缺陷，因为留下来的是变了之后的值，会改变str
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	//['b']['i']['t']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//求n的阶乘
//1*2*3*...*n

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//迭代（循环是一种迭代的方法、方式）
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//有一些功能：可以使用迭代的方式来实现，也可以用递归来实现

//求第n个斐波那契数。（不考虑溢出）

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = Fib(n);
//	printf("%d\n", cnt);
//	return 0;
//}

//int count = 0;
////递归可以求解，但效率太低
//int Fib(int n)
//{
//	if (n == 3)//计算第3个斐波那契数的计算机次数
//		count++;
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = Fib(n);
//	printf("%d\n", cnt);
//	printf("count = %d\n", count);
//	return 0;
//}


int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)//n = 1和2的时候，就直接输出c，所以给c赋值初始化为1
	{
		c = a + b;
		a = b;
		b = c;
		n--;             
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int cnt = Fib(n);
	printf("%d\n", cnt);

	return 0;
}