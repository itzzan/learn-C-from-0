#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8;
//	//int arr[n];
//
//	int a = 10;//��ʼ��
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	//int arr[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
//
//	int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = { 'b', 'i', 't' };
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//b i t \0�ĸ�Ԫ��
//	char ch6[] = {'b', 'i', 't'};
//	//b i t ����Ԫ��
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//���ֵ
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - �±����ò�����
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	
//	return 0;
//}

//%p - �ǰ��յ�ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int *p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;//ָ����һ��Ԫ��
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch1[4] = { 'b', 'i', 't' };
//	printf("%s\n", ch1);
//	return 0;
//}


//int main()
//{
//	//����
//	//int arr[3][4];
//	//char ch[3][10];
//
//	//��ʼ�� - ������ͬʱ����ֵ
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ����Ĭ��δ��ʼ����ֵΪ0 - ���油0.�ַ�������ǲ�\0
//	//int arr[3][4] = { {1,2}, {3,4}, {5,6} };
//
//	//int arr[][4] = { {1,2}, {3,4}, {5,6} };//�п���ʡ�ԣ��в���ʡ��
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//��ά�����������д洢
//	int arr[][4] = { {1,2}, {3,4}, {5,6} };//�п���ʡ�ԣ��в���ʡ��
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//
//	//}
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)//�β�arr������ָ��
//{	
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j+1])
//				{
//					//����
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ���� - ð������
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ�����������ݵĵ�ַ
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//��������ʲô��
//��������������Ԫ�ص�ַ
//��������������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//3. 

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);//1 - &arrȡ����������ĵ�ַ
	printf("%p\n", &arr+1);

	printf("%p\n", arr);
	printf("%p\n", arr+1);


	//printf("%p\n", &arr[0]);

	//int sz = sizeof(arr);//��������ʾ��������
	//printf("%d\n", sz);

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ


	return 0;
}
