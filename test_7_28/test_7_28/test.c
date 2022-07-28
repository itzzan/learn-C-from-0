#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int judge(int x)
//{
//	int a = 0;
//	for (a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include <math.h>
//
//int judge(int x)
//{
//	//2->n-1之间的数字
//	int a = 0;
//	for (a = 2; a <= sqrt(x); a++)
//	{
//		if (x % a == 0)
//		{
//			printf("%d 不是素数\n", x);
//			return 0;
//		}
//	}
//	printf("%d 是素数\n", x);
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//is_leap_year
//如果判断是闰年返回1
//如果不是闰年，返回0

//一个函数如果不写返回类型，默认返回int类型
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//	
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
// 

//实现一个整型有序数组的二分查找

//int binary_search(int a[], int key, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
// 
// 
// 这是一个错误示范
//int binary_search(int* a, int key
//
//int binary_search(int a[], int key)
//{
//	//错误的err，元素个数不能在函数里面求
//	int s = sizeof(a) / sizeof(a[0]);
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	// strlne求得是字符串的长度，而sizeof求得是大小，也就可以求元素个数
//	//int sz = strlen(arr);
//	//找到了就返回找到的位置下标
//	//找不到就返回-1
//	//数组arr传参，实际传递的不是数组本身
//	//仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1。传址
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//函数不能嵌套定义
//函数的嵌套调用和链式访问
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}


//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问，把一个函数的返回值作为另一个函数的返回值
//	//printf("%d\n", strlen("abc"));
//	//return 0;
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知，x，y可加可不加
//	int Add(int, int);
//	
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//如果函数定义在后面，则需要声明
//	int Add(int, int);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//#include "add.h" == int Add(int x, int y);
//#include "sub.h" == int Sub(int x, int y);
//#include "add.h"
#include "sub.h"

//导入静态库
#pragma comment(lib, "sub.lib")

int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);

	int c = Sub(a, b);

	printf("%d\n", c);

	return 0;
}

