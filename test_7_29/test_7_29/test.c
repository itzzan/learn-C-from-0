#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	test(&a, &b);
//
//	return 0;
//}

//全局变量和局部变量声明不用值
//直接int a;int b;
//int a = 0;
//int b = 0;
//
//void test(int* p1, int* p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//int main()
//{
//
//	test(&a, &b);
//
//	return 0;
//}

//逗号表达式（用逗号隔开的），会从左到右算，但只取最后一个
//exec((v1, v2), (v3, v4), v5, v6);

//打印乘法口诀表

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名是非常关键的，名字最好能体现函数的功能
//
//	return 0;
//}


//字符串逆序（递归实现）
//编写reverse_string(char* string)
//实现：将参数字符串中的字符反向排列，不是逆序打印
//要求：不能使用C语言中字符串操作函数
//例如：char arr[] = "abcdef" 变成 "fedcba"

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* str)
{
	int left = str[0];
	int right = str[my_strlen(str) - 1];

	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdefg";
	reverse_string(arr);//数组名arr是数组arr首元素的地址
	printf("%s\n", arr);//fedcba

	return 0;
}

