#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	//char ch = 'q';
//	//char* pc = &ch;
//	
//	//本质上是把hello bit这个字符串的首字符的地址存储在ps中
//	char* ps = "hello bit";
//	char arr[] = "hello bit";
//
//	//printf("%c\n", *ps);
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int main()
//{
//	//指针数组
//	//数组 - 数组中存放的是指针（地址）
//	//int* arr[3];//arr是一个存放整形指针的数组
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//	int i = 0;
//	int* arr[3] = {&a, &b, &c};
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}*/
//
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i]+j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	float b = 9.0f;
//	int* p = (int*)&b;
//	printf("%d", *p);
//
//	return 0;
//}

//什么样的形式初始化出来，就要用什么形式打印出来

//数组指针
//
//是一种指针 - 指向数组的指针
// 
//整型指针 - 指向整形的指针
//字符指针 - 指向字符的指针
//int* p;


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pc = &ch;
//
//	double* d[5];
//
//	double*(*pd)[5] = &d;//pd就是一个数组指针
//
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr就是一个数组指针，指向数组 - 其中存放的是数组的地址
//
//
//	//arr;//arr - 数组名是首元素的地址 - arr[0]的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	int* p1 = arr;
//	int* (*p2)[10] = &arr;
//
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);
//
//
//	return 0;
//}

//数组名是首元素的地址
//但有两个例外
//1. sizeof（数组名） - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2. &数组名 - 数组名表示整个数组。取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));
//		//printf("%d ", (*pa)[i]);
//	}
//
//	return 0;
//}

void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//p是一个数组指针（一维）
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

}

int main()
{
	//int a[5]; &a
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);//arr数组名，表示数组首元素地址
	return 0;
}
