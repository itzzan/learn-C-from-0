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
//	//100-200֮�������
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
//	//2->n-1֮�������
//	int a = 0;
//	for (a = 2; a <= sqrt(x); a++)
//	{
//		if (x % a == 0)
//		{
//			printf("%d ��������\n", x);
//			return 0;
//		}
//	}
//	printf("%d ������\n", x);
//	return 1;
//}
//
//int main()
//{
//	//100-200֮�������
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
//����ж������귵��1
//����������꣬����0

//һ�����������д�������ͣ�Ĭ�Ϸ���int����
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

//ʵ��һ��������������Ķ��ֲ���

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
//	return -1;//�Ҳ�����
//}
// 
// 
// ����һ������ʾ��
//int binary_search(int* a, int key
//
//int binary_search(int a[], int key)
//{
//	//�����err��Ԫ�ظ��������ں���������
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
//	return -1;//�Ҳ�����
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	// strlne������ַ����ĳ��ȣ���sizeof����Ǵ�С��Ҳ�Ϳ�����Ԫ�ظ���
//	//int sz = strlen(arr);
//	//�ҵ��˾ͷ����ҵ���λ���±�
//	//�Ҳ����ͷ���-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾��
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1����ַ
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

//��������Ƕ�׶���
//������Ƕ�׵��ú���ʽ����
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
//	////��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������ķ���ֵ
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
//	//��������һ�� - ��֪��x��y�ɼӿɲ���
//	int Add(int, int);
//	
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������������ں��棬����Ҫ����
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

//���뾲̬��
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

