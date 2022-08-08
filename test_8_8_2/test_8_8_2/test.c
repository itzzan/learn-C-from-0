#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//����дһ��ð�������������������ַ���
//bubble_sort_str();
//
//void bubble_sort(int arr[], int sz)
//{
//	����
//	int i = 0;
//	ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - i -1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				����
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
//	//����
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	
//	return 0;
//}

//void qsort(void* base, //base����ŵ��Ǵ�����ĵ�һ��Ԫ��(����)�ĵ�ַ.void* �����͵�ָ�룬ʲô�����ԷŽ�ȥ
//			size_t num, //��������Ԫ�صĸ���
//			size_t size,//������һ��Ԫ�صĴ�С����λ���ֽ�
//			int (*compar)(const void*, const void*));//�������Ƚϴ����������е�2��Ԫ�صĺ���
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
	//�������ݵ�����
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//����
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
	//ʹ��qsort��������ṹ������
	struct Stu s[] = { {"zhangsan", 30}, {"lisi", 34}, {"wangwu", 20} };
	//��������������
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), sort_by_age);
	//�������ֱȽ�
	qsort(s, sz, sizeof(s[0]), sort_by_name);

}

int main()
{
	//test1();
	test2();

	return 0;
}
