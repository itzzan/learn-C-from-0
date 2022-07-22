#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	
//	int a = 0;
//
//	printf("%d\n", ~a);
//
//	// ~ 按位取反
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//不建议大家去研究 - 浪费时间研究的是错误的代码,在不同的编译器下可能答案不同
//	printf("%d\n", b);//
//	//int a = 10;
//	//int b = a++;   //后置++ - 先使用，后++
//
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//11
//
//	//int a = 10;
//	//int b = ++a;   //前置++ - 先++，后使用
//
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	int c = a || b;
//
//	printf("%d\n", c);
//
//	/*
//	int a = 3;
//	int b = 0;
//
//	int c = a && b;
//
//	printf("%d\n", c);
//	//if (a && b)
//	//{
//
//	//}
//	*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//
//	return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//		a = 5		c = 1		b = 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左到右依此计算的
//	//整个表达式的结果是最后一个表达式的结果
//	
//	printf("%d\n", d);
//
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//	return 0;
//}

//函数调用操作符
//int main()
//{
//	//调用函数的时候，函数名后边的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d\n, 100");
//	return 0;
//}

//C语言提供的关键字
//1. C语言提供的，不能自己创建关键字
//2. 关键字不能做变量名
//

//int main()
//{
//	//int char;
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		// auto 省略掉了
//		// 
//		// auto 新的C语言语法中也有其他用法 - 暂时不考虑
//	}
//	return 0;
//}

int main()
{	

	//大量或频繁被使用的数据，想放在寄存器中，提高效率
	//
	register int num = 100;//建议num的值存放在寄存器中

	return 0;
}