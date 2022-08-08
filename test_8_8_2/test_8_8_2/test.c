#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//假设写一个冒泡排序函数，让你排序字符串
//bubble_sort_str();
//
//void bubble_sort(int arr[], int sz)
//{
//	升序
//	int i = 0;
//	冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//升序
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	
//	return 0;
//}

//void qsort(void* base, //base里面放的是待排序的第一个元素(对象)的地址.void* 无类型的指针，什么都可以放进去
//			size_t num, //排序数据元素的个数
//			size_t size,//数据中一个元素的大小，单位是字节
//			int (*compar)(const void*, const void*));//是用来比较待排序数据中的2个元素的函数
#include <stdlib.h>
#include <string.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	//整型数据的排序
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//排序
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
	//使用qsort函数排序结构体数据
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
	//按照年龄来排序
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字比较
	qsort(s, sz, sizeof(s[0]), sort_by_name);

}

int main()
{
	//test1();
	test2();

	return 0;
}
